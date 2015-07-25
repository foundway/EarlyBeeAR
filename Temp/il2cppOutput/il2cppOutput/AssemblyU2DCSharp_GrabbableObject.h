#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t18;
// Grabbable
#include "AssemblyU2DCSharp_Grabbable.h"
// GrabbableObject
struct  GrabbableObject_t19  : public Grabbable_t14
{
	// System.Boolean GrabbableObject::FreezeRotation
	bool ___FreezeRotation_2;
	// UnityEngine.Rigidbody GrabbableObject::body
	Rigidbody_t18 * ___body_3;
	// System.Single GrabbableObject::savedDrag
	float ___savedDrag_4;
	// System.Single GrabbableObject::savedAngularDrag
	float ___savedAngularDrag_5;
};
