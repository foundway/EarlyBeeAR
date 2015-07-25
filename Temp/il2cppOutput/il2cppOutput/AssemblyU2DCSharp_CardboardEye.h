#pragma once
#include <stdint.h>
// StereoController
struct StereoController_t75;
// UnityEngine.Camera
struct Camera_t15;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// CardboardEye
struct  CardboardEye_t76  : public MonoBehaviour_t4
{
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t77  ___toggleCullingMask_3;
	// StereoController CardboardEye::controller
	StereoController_t75 * ___controller_4;
	// UnityEngine.Camera CardboardEye::camera
	Camera_t15 * ___camera_5;
};
