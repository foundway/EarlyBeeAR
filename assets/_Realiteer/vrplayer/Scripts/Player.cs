using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

namespace Realiteer {

	[RequireComponent(typeof(Rigidbody))]
	[RequireComponent(typeof(Pedometer))]
	public class Player : MonoBehaviour {

		//public delegate void PlayerEvent();
		//public static event PlayerEvent OnPress, OnRelease, OnModeChange;	

		[Header("Trigger")]
		public bool Ready;
		public bool onGround;

		[Header("Walk")]
		public Pedometer Pedo;
		public Transform Head;
		public float StepSpan;
		public bool CanJump;
		public float JumpScale;
		private int lastStep;

		[Header("Physics")]
		public float Damping;
		public float GravityScale;

		[Header("Connections")]
		public GameObject HandTarget;

		private Renderer r;
		private Rigidbody rbd;
		private PlayerTossModule tossModule;

		void Start () {
			r = HandTarget.GetComponent<Renderer>();
			rbd = GetComponent<Rigidbody>();
			rbd.useGravity = false;
			tossModule = GetComponent<PlayerTossModule> ();
		}

		// Update is called once per frame
		void FixedUpdate () {

			Walk ();

			// Apply gravity and damping manually for more control
			Vector3 velocity = rbd.velocity * Damping * Time.deltaTime;
			velocity.y = 0;
			rbd.velocity -= velocity;
			rbd.AddForce (Vector3.down * GravityScale, ForceMode.Acceleration);

			Ready = (r.enabled)?true:false;
			onGround = false;
		}

		void Walk() {

			// Walk by pedometer
			if (lastStep < Pedo.Steps)  {
				// Not everyone can walk on air
				if (onGround) {
					Vector3 dir = new Vector3(Head.forward.x, 0f, Head.forward.z);
					Vector3 velocity = dir.normalized * StepSpan;
					// Apply force to itself
					rbd.AddForce(velocity, ForceMode.VelocityChange);
				}
				lastStep = Pedo.Steps;
			}

			if (Pedo.jump || Input.GetKey("space")) {
				if (onGround && CanJump) {
					rbd.AddForce(Vector3.up * JumpScale, ForceMode.Impulse);
				}
				Pedo.jump = false;
			}

			// Walk by cheat keys
			if (Input.GetKey("w")) {
				Vector3 dir = new Vector3(Head.forward.x, 0f, Head.forward.z);
				Vector3 velocity = dir.normalized * StepSpan * 0.5f;
				rbd.AddForce(velocity, ForceMode.VelocityChange);
			} else if (Input.GetKey ("s")) {
				Vector3 dir = new Vector3(-Head.forward.x, 0f, -Head.forward.z);
				Vector3 velocity = dir.normalized * StepSpan * 0.5f;
				rbd.AddForce(velocity, ForceMode.VelocityChange);
			} else if (Input.GetKey("d")) {
				Vector3 dir = new Vector3(Head.right.x, 0f, Head.right.z);
				Vector3 velocity = dir.normalized * StepSpan * 0.5f;
				rbd.AddForce(velocity, ForceMode.VelocityChange);
			} else if (Input.GetKey("a")) {
				Vector3 dir = new Vector3(-Head.right.x, 0f, -Head.right.z);
				Vector3 velocity = dir.normalized * StepSpan * 0.5f;
				rbd.AddForce(velocity, ForceMode.VelocityChange);
			}
		}

		void OnTriggerEnter(Collider other) {
			if (other.name == "ShootTrigger" && tossModule != null) {
				tossModule.enabled = true;
			}
		}

		void OnTriggerExit(Collider other) {
			if (other.name == "ShootTrigger" && tossModule != null) {
				tossModule.enabled = false;
			}
		}

		void OnCollisionStay(Collision collisionInfo) {
			if (collisionInfo.gameObject.tag == "Floor") {
				onGround = true;
			}
		}

		public void Reset() {
			Application.LoadLevel (Application.loadedLevel);
		}

	}
}