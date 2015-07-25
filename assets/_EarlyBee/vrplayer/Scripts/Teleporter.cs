using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Teleporter : MonoBehaviour {

	public GameObject Destination;
	public Image FadeToBlack;
	public float FadeSpeed = 1;

	public Teleporter StartingTeleporter;
	public Text LastTimeText;
	public Text BestTimeText;
	public float TimeEntered;
	private float bestTime;

	private GameObject player;
	private int stage;

	public void Start() {
		FadeToBlack.enabled = false;
		stage = -1;
		ResetTime ();
	}

	public void Update() {
		if (stage == 0) {
			FadeColor (Color.black);
			if (FadeToBlack.color.a >= 0.95f)
				DoTeleport();
		} else if (stage == 1) {
			FadeColor(Color.clear);
			if (FadeToBlack.color.a <= 0.05f) {
				FadeToBlack.enabled = false;
				stage = -1;
			}
		}
	}

	public void OnTriggerEnter(Collider other) {
		if (other.name == "VRPlayer") {
			player = other.gameObject;
			FadeToBlack.enabled = true;
			FadeToBlack.color = Color.clear;
			stage = 0;
		}
	}

	public void ResetTime() {
		if (StartingTeleporter != null) {
			LastTimeText.text = "--";
			BestTimeText.text = "--";
			bestTime = 99999;
		}
	}

	private void DoTeleport() {
		TimeEntered = Time.time;
		if (StartingTeleporter != null) {
			float mazeTime = TimeEntered - StartingTeleporter.TimeEntered;
			LastTimeText.text = mazeTime.ToString("F1") + " seconds";
			if (mazeTime < bestTime) {
				bestTime = mazeTime;
				BestTimeText.text = LastTimeText.text;
			}
		}
		player.transform.position = Destination.transform.position;
		player.GetComponentInChildren<Cardboard> ().Recenter ();
		stage = 1;
	}

	private void FadeColor(Color color) {
		FadeToBlack.color = Color.Lerp(FadeToBlack.color, color, FadeSpeed * Time.deltaTime);
	}

}
