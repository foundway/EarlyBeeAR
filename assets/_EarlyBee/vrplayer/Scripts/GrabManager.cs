using UnityEngine;
using System.Collections;

public abstract class Grabbable : MonoBehaviour {
	
	public abstract void OnGrabStart(float damping, float angularDamping);
	public abstract void OnGrabEnd();
	public abstract void OnGrabUpdate(Vector3 grabbedPosition, Vector3 targetPosition, float springiness);
	
}

public class GrabManager : MonoBehaviour {

	public Cursor cursor;

	[Header("Grab Parameters")]
	public Transform ImageTarget;
	public float MinimumDistance;
	public float DistanceChangeFactor = 35;
	public float Springiness = 2;
	public float Damping = 5;
	public float AngularDamping = 8;

	[Header("Drop Parameters")]
	public float BreakDistance;
	public int DropShakesRequired = 3;
	public float ShakeTimeout = 1;
	public float ShakeThreshold = 0.15f;
	public float ShakeAngleThreshold = 25;
	private bool vrMode = true;

	// Object references
	private Grabbable grabbedObject;
	private Camera cam;
	private StareInputModule stareInput;

	// Grab data
	private Vector3 offset;
	private float distance;
	private float startingImageDistance;

	// Shake data
	private int shakeCounter;
	private float shakeTimer;
	private Vector3 lastShakeVel;
	private Vector3 lastShakePoint;

	public void Start() {
		StareInputModule.OnStare += StartGrab;
		stareInput = FindObjectOfType<UnityEngine.EventSystems.EventSystem> ().GetComponent<StareInputModule> ();
		// I want shaking disabled when playing in the editor, so grab the Cardboard object and check it
		vrMode = FindObjectOfType<Cardboard> ().VRModeEnabled;
	}

	public bool hasGrab {
		get {
			return grabbedObject != null;
		}
	}

	public void StartGrab(GameObject obj, Camera cam, float dist) {
		if (dist < MinimumDistance || obj.GetComponent<Grabbable>() == null)
			return;
		// Save object references
		grabbedObject = obj.GetComponent<Grabbable> ();
		grabbedObject.OnGrabStart (Damping, AngularDamping);
		this.cam = cam;
		if (stareInput != null)
			stareInput.enabled = false;

		// Offset is where the object was grabbed, relative to the object's transform
		offset = grabbedObject.transform.InverseTransformPoint (cursor.transform.position);
		distance = dist;
		startingImageDistance = ImageTarget.localPosition.z;

		// Reset drop stuff
		shakeCounter = 0;
		lastShakeVel = new Vector3 ();
		lastShakePoint = GetShakePoint ();
	}

	public void EndGrab() {
		grabbedObject.OnGrabEnd ();
		grabbedObject = null;
		if (stareInput != null)
			stareInput.enabled = true;
	}

	public void Update() {
		if (!hasGrab)
			return;

		// Cheat key to drop
		if (Input.GetKey ("x")) {
			EndGrab();
			return;
		}

		float distanceChange = (ImageTarget.localPosition.z - startingImageDistance) * DistanceChangeFactor;
		if (distanceChange > 0)
			distanceChange *= 1.5f;
		cursor.SetOffset (cam.transform.position, cam.transform.forward, Mathf.Max(distance + distanceChange, MinimumDistance) + cam.nearClipPlane);
		Vector3 grabbedPosition = grabbedObject.transform.TransformPoint (offset);
		if (BreakDistance > 0.1 && Vector3.Distance (grabbedPosition, cursor.transform.position) > BreakDistance) {
			EndGrab();
			return;
		}
		grabbedObject.OnGrabUpdate (grabbedPosition, cursor.transform.position, Springiness);

		// Drop conditions
		if (!vrMode)
			return;
		Vector3 curShakePoint = GetShakePoint ();
		Vector3 curShakeVel = curShakePoint - lastShakePoint;
		float angle = Vector3.Angle (curShakeVel, lastShakeVel);
		if ((curShakeVel.magnitude > ShakeThreshold || lastShakeVel.magnitude > ShakeThreshold) && angle > ShakeAngleThreshold) {
			// A "shake" has occured, so increase the counter and reset the timer
			++shakeCounter;
			shakeTimer = ShakeTimeout;
			if (shakeCounter == DropShakesRequired) {
				EndGrab ();
			}
		}
		// If there is too much time between shakes, the shake counter resets
		if (shakeTimer > 0) {
			shakeTimer -= Time.deltaTime;
			if (shakeTimer <= 0) {
				shakeCounter = 0;
			}
		}
		lastShakeVel = curShakeVel;
		lastShakePoint = curShakePoint;
	}

	private Vector3 GetShakePoint() {
		return (cam.transform.position + (cam.transform.forward * 2)) - transform.position;
	}

}
