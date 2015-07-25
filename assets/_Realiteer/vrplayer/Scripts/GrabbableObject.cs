using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

[RequireComponent(typeof(Rigidbody))]
public class GrabbableObject : Grabbable, ISelectHandler {

	public bool FreezeRotation;

	private Rigidbody body;
	private float savedDrag;
	private float savedAngularDrag;

	public void Start () {
		body = GetComponent<Rigidbody> ();
	}

	public void OnSelect (BaseEventData eventData) {
		// This function is necessary for an object to be stared at
	}

	public override void OnGrabStart (float damping, float angularDamping) {
		if (FreezeRotation) {
			body.freezeRotation = true;
		}
		savedDrag = body.drag;
		savedAngularDrag = body.angularDrag;
		body.drag = damping;
		body.angularDrag = angularDamping;
	}

	public override void OnGrabEnd () {
		body.angularVelocity = new Vector3 ();
		body.velocity = new Vector3 ();
		body.drag = savedDrag;
		body.angularDrag = savedAngularDrag;
		if (FreezeRotation) {
			body.freezeRotation = false;
		}
	}

	public override void OnGrabUpdate(Vector3 grabbedPosition, Vector3 targetPosition, float springiness) {
		Vector3 vel = (targetPosition - grabbedPosition) * springiness;
		body.AddForceAtPosition(vel * vel.magnitude, grabbedPosition, ForceMode.VelocityChange);
	}

}
