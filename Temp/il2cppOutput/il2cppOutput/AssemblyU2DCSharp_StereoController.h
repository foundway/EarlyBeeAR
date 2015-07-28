#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// CardboardEye[]
struct CardboardEyeU5BU5D_t93;
// System.Func`2<CardboardEye,CardboardHead>
struct Func_2_t94;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// StereoController
struct  StereoController_t75  : public MonoBehaviour_t4
{
	// System.Boolean StereoController::directRender
	bool ___directRender_2;
	// System.Single StereoController::stereoMultiplier
	float ___stereoMultiplier_3;
	// System.Single StereoController::matchMonoFOV
	float ___matchMonoFOV_4;
	// System.Single StereoController::matchByZoom
	float ___matchByZoom_5;
	// UnityEngine.Transform StereoController::centerOfInterest
	Transform_t2 * ___centerOfInterest_6;
	// System.Single StereoController::radiusOfInterest
	float ___radiusOfInterest_7;
	// System.Boolean StereoController::checkStereoComfort
	bool ___checkStereoComfort_8;
	// System.Single StereoController::screenParallax
	float ___screenParallax_9;
	// System.Single StereoController::stereoPaddingX
	float ___stereoPaddingX_10;
	// System.Single StereoController::stereoPaddingY
	float ___stereoPaddingY_11;
	// System.Boolean StereoController::renderedStereo
	bool ___renderedStereo_12;
	// CardboardEye[] StereoController::eyes
	CardboardEyeU5BU5D_t93* ___eyes_13;
};
struct StereoController_t75_StaticFields{
	// System.Func`2<CardboardEye,CardboardHead> StereoController::<>f__am$cacheC
	Func_2_t94 * ___U3CU3Ef__am$cacheC_14;
};
