#pragma once
#include <stdint.h>
// Cursor
struct Cursor_t13;
// UnityEngine.Transform
struct Transform_t2;
// Grabbable
struct Grabbable_t14;
// UnityEngine.Camera
struct Camera_t15;
// StareInputModule
struct StareInputModule_t16;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GrabManager
struct  GrabManager_t17  : public MonoBehaviour_t4
{
	// Cursor GrabManager::cursor
	Cursor_t13 * ___cursor_2;
	// UnityEngine.Transform GrabManager::ImageTarget
	Transform_t2 * ___ImageTarget_3;
	// System.Single GrabManager::MinimumDistance
	float ___MinimumDistance_4;
	// System.Single GrabManager::DistanceChangeFactor
	float ___DistanceChangeFactor_5;
	// System.Single GrabManager::Springiness
	float ___Springiness_6;
	// System.Single GrabManager::Damping
	float ___Damping_7;
	// System.Single GrabManager::AngularDamping
	float ___AngularDamping_8;
	// System.Single GrabManager::BreakDistance
	float ___BreakDistance_9;
	// System.Int32 GrabManager::DropShakesRequired
	int32_t ___DropShakesRequired_10;
	// System.Single GrabManager::ShakeTimeout
	float ___ShakeTimeout_11;
	// System.Single GrabManager::ShakeThreshold
	float ___ShakeThreshold_12;
	// System.Single GrabManager::ShakeAngleThreshold
	float ___ShakeAngleThreshold_13;
	// System.Boolean GrabManager::vrMode
	bool ___vrMode_14;
	// Grabbable GrabManager::grabbedObject
	Grabbable_t14 * ___grabbedObject_15;
	// UnityEngine.Camera GrabManager::cam
	Camera_t15 * ___cam_16;
	// StareInputModule GrabManager::stareInput
	StareInputModule_t16 * ___stareInput_17;
	// UnityEngine.Vector3 GrabManager::offset
	Vector3_t5  ___offset_18;
	// System.Single GrabManager::distance
	float ___distance_19;
	// System.Single GrabManager::startingImageDistance
	float ___startingImageDistance_20;
	// System.Int32 GrabManager::shakeCounter
	int32_t ___shakeCounter_21;
	// System.Single GrabManager::shakeTimer
	float ___shakeTimer_22;
	// UnityEngine.Vector3 GrabManager::lastShakeVel
	Vector3_t5  ___lastShakeVel_23;
	// UnityEngine.Vector3 GrabManager::lastShakePoint
	Vector3_t5  ___lastShakePoint_24;
};
