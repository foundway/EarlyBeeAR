#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t8;
// System.Single[]
struct SingleU5BU5D_t25;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t9;
// System.Object
#include "mscorlib_System_Object.h"
// Realiteer.Math3d
struct  Math3d_t26  : public Object_t
{
};
struct Math3d_t26_StaticFields{
	// UnityEngine.Transform Realiteer.Math3d::tempChild
	Transform_t2 * ___tempChild_0;
	// UnityEngine.Transform Realiteer.Math3d::tempParent
	Transform_t2 * ___tempParent_1;
	// UnityEngine.Vector3[] Realiteer.Math3d::positionRegister
	Vector3U5BU5D_t8* ___positionRegister_2;
	// System.Single[] Realiteer.Math3d::posTimeRegister
	SingleU5BU5D_t25* ___posTimeRegister_3;
	// System.Int32 Realiteer.Math3d::positionSamplesTaken
	int32_t ___positionSamplesTaken_4;
	// UnityEngine.Quaternion[] Realiteer.Math3d::rotationRegister
	QuaternionU5BU5D_t9* ___rotationRegister_5;
	// System.Single[] Realiteer.Math3d::rotTimeRegister
	SingleU5BU5D_t25* ___rotTimeRegister_6;
};
