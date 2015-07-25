#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t25;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t98;
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDevice.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// VRDevice
struct  VRDevice_t99  : public BaseVRDevice_t69
{
	// System.Single[] VRDevice::headData
	SingleU5BU5D_t25* ___headData_20;
	// System.Single[] VRDevice::viewData
	SingleU5BU5D_t25* ___viewData_21;
	// System.Single[] VRDevice::profileData
	SingleU5BU5D_t25* ___profileData_22;
	// UnityEngine.Matrix4x4 VRDevice::headView
	Matrix4x4_t27  ___headView_23;
	// UnityEngine.Matrix4x4 VRDevice::leftEyeView
	Matrix4x4_t27  ___leftEyeView_24;
	// UnityEngine.Matrix4x4 VRDevice::rightEyeView
	Matrix4x4_t27  ___rightEyeView_25;
	// System.Collections.Generic.Queue`1<System.Int32> VRDevice::eventQueue
	Queue_1_t98 * ___eventQueue_26;
	// System.Boolean VRDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_27;
	// System.Boolean VRDevice::debugDisableNativeDistortion
	bool ___debugDisableNativeDistortion_28;
	// System.Boolean VRDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_29;
};
