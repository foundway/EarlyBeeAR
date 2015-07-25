using UnityEngine;
using System.Collections;

public class Director : MonoBehaviour {

	public static Director Instance;

	[Header("Controls")]

	[Header("FlowerField")]
	public bool FlowerReady = false;
	public bool FlowerOn = false;
	public GameObject FlowerField;

	void Awake() {
		Director.Instance = this;
		FlowerField.SetActive(false);
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnTrackingFound () {
		if (FlowerReady == false) {
			FlowerReady = true;
		}
		Bee.Instance.OnTrackingFound();
	}

	public void OnTrackingLost () {
		Bee.Instance.OnTrackingLost();
		if (FlowerReady == true && FlowerField.activeSelf == false) {
			FlowerField.SetActive(true);
		}
	}
}
