#pragma once
#include <stdint.h>
// BaseVRDevice
struct BaseVRDevice_t69;
// MutablePose3D
struct MutablePose3D_t90;
// CardboardProfile
struct CardboardProfile_t72;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// BaseVRDevice
struct  BaseVRDevice_t69  : public Object_t
{
	// MutablePose3D BaseVRDevice::headPose
	MutablePose3D_t90 * ___headPose_1;
	// MutablePose3D BaseVRDevice::leftEyePose
	MutablePose3D_t90 * ___leftEyePose_2;
	// MutablePose3D BaseVRDevice::rightEyePose
	MutablePose3D_t90 * ___rightEyePose_3;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeDistortedProjection
	Matrix4x4_t27  ___leftEyeDistortedProjection_4;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeDistortedProjection
	Matrix4x4_t27  ___rightEyeDistortedProjection_5;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeUndistortedProjection
	Matrix4x4_t27  ___leftEyeUndistortedProjection_6;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeUndistortedProjection
	Matrix4x4_t27  ___rightEyeUndistortedProjection_7;
	// UnityEngine.Rect BaseVRDevice::leftEyeDistortedViewport
	Rect_t62  ___leftEyeDistortedViewport_8;
	// UnityEngine.Rect BaseVRDevice::rightEyeDistortedViewport
	Rect_t62  ___rightEyeDistortedViewport_9;
	// UnityEngine.Rect BaseVRDevice::leftEyeUndistortedViewport
	Rect_t62  ___leftEyeUndistortedViewport_10;
	// UnityEngine.Rect BaseVRDevice::rightEyeUndistortedViewport
	Rect_t62  ___rightEyeUndistortedViewport_11;
	// System.Boolean BaseVRDevice::triggered
	bool ___triggered_12;
	// System.Boolean BaseVRDevice::tilted
	bool ___tilted_13;
	// CardboardProfile BaseVRDevice::<Profile>k__BackingField
	CardboardProfile_t72 * ___U3CProfileU3Ek__BackingField_14;
};
struct BaseVRDevice_t69_StaticFields{
	// BaseVRDevice BaseVRDevice::device
	BaseVRDevice_t69 * ___device_0;
};
