using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEditor.Callbacks;

namespace Realiteer {

	/*
	[CustomEditor(typeof(XXX))]
	[InitializeOnLoad]
	public class RealiteerEditor : Editor
	{
		// Custom editor script here
	}
	*/

	public static class XCodePostProcess {

		[PostProcessBuild]
		public static void OnPostProcessBuild(BuildTarget target, string path) {

			//if (target.ToString() == "iOS" || target.ToString() == "iPhone") {
			if (target == BuildTarget.iOS) {
				Debug.Log("Realiteer Post-process");
				Debug.Log("Build path: " + path);
			}
		}
	}
}

