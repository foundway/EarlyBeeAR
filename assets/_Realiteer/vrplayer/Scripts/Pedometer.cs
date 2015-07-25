// My Pedometer

using UnityEngine;
using System.Collections;

public class Pedometer : MonoBehaviour {

	[Header("Controls")]
	public float cooldown = 0.2f;
	public float loLim = 0.05F;
	public float hiLim = 0.1F;
	public float jumpLim = 0.25f;
	private int steps = 0;
	private bool stateH;
	private float cooldownTimer;
	public float fHigh = 15.0F;
	public float fLow = 0.1F;
	private float curAcc= 0F;
	private float avgAcc;

	internal bool jump;

	public int stepDetector(){
		curAcc = Mathf.Lerp (curAcc, Input.acceleration.y, Time.deltaTime * fHigh);
		avgAcc = Mathf.Lerp (avgAcc, Input.acceleration.y, Time.deltaTime * fLow);
		float delta = curAcc - avgAcc;
		if (cooldownTimer <= 0 && !stateH) { 
			if (delta > hiLim) {
				stateH = true;
				cooldownTimer = cooldown;
				++steps;
			}
		} else {
			cooldownTimer -= Time.deltaTime;
		}
#if !UNITY_EDITOR
		if (curAcc > jumpLim) {
			jump = true;
		}
#endif
		if (delta < loLim) {
			stateH = false;
		}
		avgAcc = curAcc;

		return steps;
	}

	public int Steps {
		get { return steps; }
		set { steps = value; }
	}

	// Update is called once per frame
	void FixedUpdate () {

		stepDetector();

		/*
		if (Input.GetKeyDown("w")) {
			steps++;
		}
		*/
	}
}
