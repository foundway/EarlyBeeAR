using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Cursor : MonoBehaviour {

	public Transform eyeTransform;
	public Image radialImage;

	public void SetOffset(Vector3 camPosition, Vector3 forward, float distance) {
		transform.position = camPosition + (forward * distance);
		transform.LookAt (eyeTransform.position);
	}

	public void SetProgress(float progress) {
		radialImage.fillAmount = progress;
	}

}
