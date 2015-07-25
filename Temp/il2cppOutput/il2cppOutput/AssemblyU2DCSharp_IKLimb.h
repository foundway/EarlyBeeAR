#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// IKLimb/HandRotations
#include "AssemblyU2DCSharp_IKLimb_HandRotations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// IKLimb
struct  IKLimb_t22  : public MonoBehaviour_t4
{
	// UnityEngine.Transform IKLimb::upperArm
	Transform_t2 * ___upperArm_2;
	// UnityEngine.Transform IKLimb::forearm
	Transform_t2 * ___forearm_3;
	// UnityEngine.Transform IKLimb::hand
	Transform_t2 * ___hand_4;
	// UnityEngine.Transform IKLimb::target
	Transform_t2 * ___target_5;
	// UnityEngine.Transform IKLimb::elbowTarget
	Transform_t2 * ___elbowTarget_6;
	// System.Boolean IKLimb::IsEnabled
	bool ___IsEnabled_7;
	// System.Boolean IKLimb::debug
	bool ___debug_8;
	// System.Single IKLimb::transition
	float ___transition_9;
	// System.Boolean IKLimb::idleOptimization
	bool ___idleOptimization_10;
	// IKLimb/HandRotations IKLimb::handRotationPolicy
	int32_t ___handRotationPolicy_11;
	// UnityEngine.Quaternion IKLimb::upperArmStartRotation
	Quaternion_t10  ___upperArmStartRotation_12;
	// UnityEngine.Quaternion IKLimb::forearmStartRotation
	Quaternion_t10  ___forearmStartRotation_13;
	// UnityEngine.Quaternion IKLimb::handStartRotation
	Quaternion_t10  ___handStartRotation_14;
	// UnityEngine.Vector3 IKLimb::targetRelativeStartPosition
	Vector3_t5  ___targetRelativeStartPosition_15;
	// UnityEngine.Vector3 IKLimb::elbowTargetRelativeStartPosition
	Vector3_t5  ___elbowTargetRelativeStartPosition_16;
	// UnityEngine.GameObject IKLimb::upperArmAxisCorrection
	GameObject_t7 * ___upperArmAxisCorrection_17;
	// UnityEngine.GameObject IKLimb::forearmAxisCorrection
	GameObject_t7 * ___forearmAxisCorrection_18;
	// UnityEngine.GameObject IKLimb::handAxisCorrection
	GameObject_t7 * ___handAxisCorrection_19;
	// UnityEngine.Vector3 IKLimb::lastUpperArmPosition
	Vector3_t5  ___lastUpperArmPosition_20;
	// UnityEngine.Vector3 IKLimb::lastTargetPosition
	Vector3_t5  ___lastTargetPosition_21;
	// UnityEngine.Vector3 IKLimb::lastElbowTargetPosition
	Vector3_t5  ___lastElbowTargetPosition_22;
};
