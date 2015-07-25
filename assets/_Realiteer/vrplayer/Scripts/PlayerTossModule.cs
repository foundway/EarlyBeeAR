using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Realiteer {

	[RequireComponent(typeof(Rigidbody))]
	[RequireComponent(typeof(Pedometer))]
	[RequireComponent(typeof(Player))]
	public class PlayerTossModule : MonoBehaviour {

		[Header("Criteria")]
		public float loLim = 1F;
		public float hiLim = 2F;
		private bool stateH = false;
		public float fLow = 5F;
		public float fHigh = 20.0F;
		private Vector3 curAcc;
		private Vector3 avgAcc;
		public int counts = 0;

		[Header("Controls")]
		public float VelocityMult = 1f;
		public float ChargeMax = 1f;
		public float Charging = 0f;

		[Header("Connections")]
		public Transform SpawnPoint;
		public LiquidBehavior Accelerometer;
		public GameObject Bullet;

		private Player Player;
		private List<GameObject> bullets;

		void Start () {
			Player = this.gameObject.GetComponent<Player>();
			bullets = new List<GameObject> ();
		}

		// Update is called once per frame
		void Update () {

			// Charging
			if (Player.Ready) {
				Charging = Mathf.Clamp(Charging + Time.deltaTime, 0, ChargeMax);
			} else {
				Charging = 0;
			}

			// Trigger
			curAcc = Vector3.Lerp (curAcc, Accelerometer.Accel, Time.deltaTime * fHigh);
			avgAcc = Vector3.Lerp (avgAcc, Accelerometer.Accel, Time.deltaTime * fLow);

			float delta = curAcc.magnitude - avgAcc.magnitude;
			if (Input.GetKey ("e")) {
				delta = 1000;
			}

			if (!stateH) { 
				if (delta > hiLim && Mathf.Abs(Charging - ChargeMax) < 0.001f && Player.Ready) {
					stateH = true;
					counts++;
					GameObject b = Instantiate(Bullet, SpawnPoint.position, Quaternion.identity) as GameObject;
					b.GetComponent<Rigidbody>().velocity = SpawnPoint.forward * /*curAcc.magnitude **/ VelocityMult;
					bullets.Add(b);
					Charging = 0;
				} else if (delta < loLim || !Player.Ready) {
					stateH = false;
				}
				stateH = false;
			}
			avgAcc = curAcc;
		}

		public void DestroyBullets() {
			foreach (GameObject b in bullets) {
				Destroy(b);
			}
			bullets.Clear ();
		}

	}
}