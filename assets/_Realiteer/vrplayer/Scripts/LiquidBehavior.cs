using UnityEngine;
using System.Collections;

namespace Realiteer {

	public class LiquidBehavior : MonoBehaviour {

		[Header("Water Level")]
		public bool UseRootMotion = false;
		public float Level = 0.5f;
		public Transform TopShape;
		public Transform SideShape;
		public float Gravity = -50f;
		public float Acceleration = 100f;
		public float Damp = 0.9f;
		public Vector3 Accel;
		public Vector3 AngularVelocity;
		public Vector3 axisAdjust = new Vector3(1,1,1);

		[Header("Connections")]
		public Transform Root;

		private Renderer r;

		// Use this for initialization
		void Start () {
			AngularVelocity = new Vector3(0,0,0);
			r = SideShape.GetComponent<Renderer>();
		}

		// Update is called once per frame
		void Update () {

			// Update water level
			Level = Mathf.Clamp01(Level);
			TopShape.localPosition = new Vector3(0, Level - 0.5f, 0);
			float newTopScale = Mathf.Sqrt(0.25f - Mathf.Pow (Level - 0.5f, 2))*2;
			TopShape.localScale = new Vector3(newTopScale, 0.0001f, newTopScale);
			r.material.SetTextureOffset("_MainTex", new Vector2(0, 0.25f-Mathf.Asin((Level-0.5f)/0.5f)/2f/Mathf.PI));

			// Tilt
			Vector3 accel = new Vector3();
			Vector3 pos;
			if (UseRootMotion) {
				pos = transform.position;
				Math3d.LinearAcceleration(out accel, pos, 2); // require Math 3D script
				accel.x *= axisAdjust.x;
				accel.y *= axisAdjust.y;
				accel.z *= axisAdjust.z;
			} else {
				pos = Root.transform.InverseTransformPoint(transform.position);
				Math3d.LinearAcceleration(out accel, pos, 2); // require Math 3D script
				accel.x *= axisAdjust.x;
				accel.y *= axisAdjust.y;
				accel.z *= axisAdjust.z;
				accel = Root.transform.TransformDirection(accel);
			}
			Vector3 gModified = new Vector3(-accel.x, Gravity-accel.y, -accel.z);

			Vector3 angularAccel = Vector3.Cross(-transform.up, gModified) * Acceleration; // (torque = F tangetial x r)
			AngularVelocity += angularAccel * Time.deltaTime;
			AngularVelocity *= Damp;
			transform.RotateAround(transform.position, AngularVelocity, AngularVelocity.magnitude * Time.deltaTime);

			Accel = accel;
		}
	}
}
