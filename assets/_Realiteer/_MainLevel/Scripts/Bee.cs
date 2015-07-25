using UnityEngine;
using System.Collections;

public class Bee : MonoBehaviour {

	public static Bee Instance;

	public bool Flying = false;
	public Transform Tracker;
	public Transform Cursor;
	public Transform Cam;
	public float MaxVel = 1f;

	private Animator anim;
	private Vector3 goal;
	private Vector3 prev;
	private Vector3 vel;

	void Awake () {
		Bee.Instance = this;
	}

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {

		if (Director.Instance.FlowerField.activeSelf) {

			if (Flying) {
				goal = Vector3.Lerp (Cursor.position, Cam.position, 0.2f);
				transform.rotation = Quaternion.LookRotation(Cursor.position - Cam.position, new Vector3(0,1,0));
			} else {
				goal = Tracker.position;
				transform.rotation = Tracker.rotation;
			}
			vel = Vector3.ClampMagnitude(goal - transform.position, MaxVel);
			transform.position = prev + vel * Time.deltaTime;

		} else {
			transform.position = Tracker.position;
			transform.rotation = Tracker.rotation;
		}

		prev = transform.position;
	}

	public void OnTrackingFound() {
		Flying = false;
		anim.SetBool("Flying", false);
	}

	public void OnTrackingLost () {
		Flying = true;
		//anim.SetBool("Flying", true);
	}
}
