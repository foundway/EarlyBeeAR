using UnityEngine;
using System.Collections;

public class BottleModule : MonoBehaviour {

	private int numBottles;
	private Vector3[] originalPositions;
	private Quaternion[] originalRotations;

	public void Start() {
		numBottles = transform.childCount;
		originalPositions = new Vector3[numBottles];
		originalRotations = new Quaternion[numBottles];
		for (int i = 0; i < numBottles; ++i) {
			Transform bottle = transform.GetChild(i);
			originalPositions[i] = bottle.position;
			originalRotations[i] = bottle.rotation;
		}
	}

	public void Reset() {
		for (int i = 0; i < numBottles; ++i) {
			Transform bottle = transform.GetChild(i);
			bottle.position = originalPositions[i];
			bottle.rotation = originalRotations[i];
		}
	}

}
