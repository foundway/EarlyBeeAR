#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Renderer
struct Renderer_t23;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Realiteer.LiquidBehavior
struct  LiquidBehavior_t24  : public MonoBehaviour_t4
{
	// System.Boolean Realiteer.LiquidBehavior::UseRootMotion
	bool ___UseRootMotion_2;
	// System.Single Realiteer.LiquidBehavior::Level
	float ___Level_3;
	// UnityEngine.Transform Realiteer.LiquidBehavior::TopShape
	Transform_t2 * ___TopShape_4;
	// UnityEngine.Transform Realiteer.LiquidBehavior::SideShape
	Transform_t2 * ___SideShape_5;
	// System.Single Realiteer.LiquidBehavior::Gravity
	float ___Gravity_6;
	// System.Single Realiteer.LiquidBehavior::Acceleration
	float ___Acceleration_7;
	// System.Single Realiteer.LiquidBehavior::Damp
	float ___Damp_8;
	// UnityEngine.Vector3 Realiteer.LiquidBehavior::Accel
	Vector3_t5  ___Accel_9;
	// UnityEngine.Vector3 Realiteer.LiquidBehavior::AngularVelocity
	Vector3_t5  ___AngularVelocity_10;
	// UnityEngine.Vector3 Realiteer.LiquidBehavior::axisAdjust
	Vector3_t5  ___axisAdjust_11;
	// UnityEngine.Transform Realiteer.LiquidBehavior::Root
	Transform_t2 * ___Root_12;
	// UnityEngine.Renderer Realiteer.LiquidBehavior::r
	Renderer_t23 * ___r_13;
};
