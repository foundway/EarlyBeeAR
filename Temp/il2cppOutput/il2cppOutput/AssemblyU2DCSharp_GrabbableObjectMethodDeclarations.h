#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GrabbableObject
struct GrabbableObject_t19;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GrabbableObject::.ctor()
extern "C" void GrabbableObject__ctor_m26 (GrabbableObject_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabbableObject::Start()
extern "C" void GrabbableObject_Start_m27 (GrabbableObject_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabbableObject::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void GrabbableObject_OnSelect_m28 (GrabbableObject_t19 * __this, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabbableObject::OnGrabStart(System.Single,System.Single)
extern "C" void GrabbableObject_OnGrabStart_m29 (GrabbableObject_t19 * __this, float ___damping, float ___angularDamping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabbableObject::OnGrabEnd()
extern "C" void GrabbableObject_OnGrabEnd_m30 (GrabbableObject_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabbableObject::OnGrabUpdate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void GrabbableObject_OnGrabUpdate_m31 (GrabbableObject_t19 * __this, Vector3_t5  ___grabbedPosition, Vector3_t5  ___targetPosition, float ___springiness, MethodInfo* method) IL2CPP_METHOD_ATTR;
