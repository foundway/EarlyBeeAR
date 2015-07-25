#pragma once
#include <stdint.h>
// Bee
struct Bee_t1;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Animator
struct Animator_t3;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Bee
struct  Bee_t1  : public MonoBehaviour_t4
{
	// System.Boolean Bee::Flying
	bool ___Flying_3;
	// UnityEngine.Transform Bee::Tracker
	Transform_t2 * ___Tracker_4;
	// UnityEngine.Transform Bee::Cursor
	Transform_t2 * ___Cursor_5;
	// UnityEngine.Transform Bee::Cam
	Transform_t2 * ___Cam_6;
	// System.Single Bee::MaxVel
	float ___MaxVel_7;
	// UnityEngine.Animator Bee::anim
	Animator_t3 * ___anim_8;
	// UnityEngine.Vector3 Bee::goal
	Vector3_t5  ___goal_9;
	// UnityEngine.Vector3 Bee::prev
	Vector3_t5  ___prev_10;
	// UnityEngine.Vector3 Bee::vel
	Vector3_t5  ___vel_11;
};
struct Bee_t1_StaticFields{
	// Bee Bee::Instance
	Bee_t1 * ___Instance_2;
};
