// Modify by Fangwei Lee for RealTrigger

using UnityEngine;
using UnityEngine.EventSystems;

public class StareInputModule : BaseInputModule {
  public delegate void StareEvent(GameObject obj, Camera cam, float distance);
  public static event StareEvent OnStare;

  [Tooltip("Whether gaze input is active in VR Mode only (true), or all the time (false).")]
  public bool vrModeOnly = false;

  [Tooltip("Optional object to place at raycast intersections as a 3D cursor. " +
           "Be sure it is on a layer that raycasts will ignore.")]
  public Cursor cursor;

  // For RealTrigger
  public float chargeTime;
  public float chargeTimeDown = 1.0f;
  public bool stared;
//  public PlayerBehavior player;

  // Time in seconds between the pointer down and up events sent by a magnet click.
  // Allows time for the UI elements to make their state transitions.
  [HideInInspector]
  public float clickTime = 0.1f;  // Based on default time for a button to animate to Pressed.

  // The pixel through which to cast rays, in viewport coordinates.  Generally, the center
  // pixel is best, assuming a monoscopic camera is selected as the Canvas' event camera.
  [HideInInspector]
  public Vector2 hotspot = new Vector2(0.5f, 0.5f);

  private PointerEventData pointerData;

  public override bool ShouldActivateModule() {
    if (!base.ShouldActivateModule()) {
      return false;
    }
    return Cardboard.SDK.VRModeEnabled || !vrModeOnly;
  }

  public override void DeactivateModule() {
    base.DeactivateModule();
    if (pointerData != null) {
      HandlePendingClick();
      HandlePointerExitAndEnter(pointerData, null);
      pointerData = null;
    }
    eventSystem.SetSelectedGameObject(null, GetBaseEventData());
    if (cursor != null) {
      cursor.gameObject.SetActive(false);
    }
  }

  public override bool IsPointerOverGameObject(int pointerId) {
    return pointerData != null && pointerData.pointerEnter != null;
  }

  public GameObject CurrentHoverObject () {
		Debug.Log ("currentHoverObject");
		GameObject output = new GameObject();
	return output;
  }

  public override void Process() {
	if (!enabled)
		return;
	CastRayFromGaze ();
	UpdateCurrentObject ();
	PlaceCursor ();
	HandlePendingClick ();
	HandleTrigger ();
  }

  private void CastRayFromGaze() {
    if (pointerData == null) {
      pointerData = new PointerEventData(eventSystem);
    }
    pointerData.Reset();
    pointerData.position = new Vector2(hotspot.x * Screen.width, hotspot.y * Screen.height);
    eventSystem.RaycastAll(pointerData, m_RaycastResultCache);
    pointerData.pointerCurrentRaycast = FindFirstRaycast(m_RaycastResultCache);
	while (pointerData.pointerCurrentRaycast.gameObject != null &&
	       pointerData.pointerCurrentRaycast.gameObject.layer == LayerMask.NameToLayer ("Ignore Raycast")) {
		m_RaycastResultCache.Remove (pointerData.pointerCurrentRaycast);
		pointerData.pointerCurrentRaycast = FindFirstRaycast (m_RaycastResultCache);
	}
    m_RaycastResultCache.Clear();
  }

  private void UpdateCurrentObject() {
    // Send enter events and update the highlight.
    var go = pointerData.pointerCurrentRaycast.gameObject;

	// Update player data TODO there might be better way
//	player.Target = go; 
//	player.TargetPosition = pointerData.worldPosition;

    HandlePointerExitAndEnter(pointerData, go);
    // Update the current selection, or clear if it is no longer the current object.
    var selected = ExecuteEvents.GetEventHandler<ISelectHandler>(go);
	
    if (selected == eventSystem.currentSelectedGameObject) {
      ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, GetBaseEventData(),
                            ExecuteEvents.updateSelectedHandler);
	  // RealTrigger: reset
	  chargeTime = 0;
	  cursor.SetProgress(0);
    }
    else {
      eventSystem.SetSelectedGameObject(null, pointerData);

	  // For staring counting
	  // Debug.Log ("charging");
		chargeTime += Time.fixedDeltaTime;
	    if (chargeTime > chargeTimeDown) {
		  stared = true;
				cursor.SetProgress(1);
		} else {
		  stared = false;
				cursor.SetProgress(chargeTime / chargeTimeDown);
		}

    }
  }

  private void PlaceCursor() {
    if (cursor == null)
      return;
    var go = pointerData.pointerCurrentRaycast.gameObject;
    cursor.gameObject.SetActive(go != null);
	if (cursor.gameObject.activeInHierarchy) {
      Camera cam = pointerData.enterEventCamera;
      // Note: rays through screen start at near clipping plane.
      float dist = pointerData.pointerCurrentRaycast.distance + cam.nearClipPlane;
	  cursor.SetOffset(cam.transform.position, cam.transform.forward, dist);
    }
  }

  private void HandlePendingClick() {
    if (!pointerData.eligibleForClick) {
      return;
    }
	
	// TODO make dragging
	ExecuteEvents.Execute(pointerData.pointerPress, pointerData, ExecuteEvents.dragHandler);
	ExecuteEvents.Execute(pointerData.pointerPress, pointerData, ExecuteEvents.beginDragHandler);

	if (!stared) {

	// Send pointer up and click events.
	ExecuteEvents.Execute(pointerData.pointerPress, pointerData, ExecuteEvents.pointerUpHandler);
	ExecuteEvents.Execute(pointerData.pointerPress, pointerData, ExecuteEvents.endDragHandler);

	// Clear the click state.
	pointerData.pointerPress = null;
	pointerData.rawPointerPress = null;
	pointerData.eligibleForClick = false;
	pointerData.clickCount = 0;
	}
  }

  private void HandleTrigger() {

	if (!stared) {
      return;
    }

    var go = pointerData.pointerCurrentRaycast.gameObject;

    // Send pointer down event.
    pointerData.pressPosition = pointerData.position;
    pointerData.pointerPressRaycast = pointerData.pointerCurrentRaycast;
    pointerData.pointerPress =
        ExecuteEvents.ExecuteHierarchy(go, pointerData, ExecuteEvents.pointerDownHandler)
        ?? ExecuteEvents.GetEventHandler<IPointerClickHandler>(go);

	if (pointerData.clickCount == 0) {
	   	  ExecuteEvents.Execute(pointerData.pointerPress, pointerData, ExecuteEvents.pointerClickHandler);
		  OnStare(go, pointerData.enterEventCamera, pointerData.pointerCurrentRaycast.distance);
	}


    // Save the pending click state.
    pointerData.rawPointerPress = go;
    pointerData.eligibleForClick = true;
    pointerData.clickCount = 1;
    pointerData.clickTime = Time.unscaledTime;

  }
}
