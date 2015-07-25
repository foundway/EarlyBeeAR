#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4627;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_3__ctor_m31558_gshared (InvokableCall_3_t4627 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_3__ctor_m31558(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_3_t4627 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_3__ctor_m31558_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_3_Invoke_m31559_gshared (InvokableCall_3_t4627 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define InvokableCall_3_Invoke_m31559(__this, ___args, method) (( void (*) (InvokableCall_3_t4627 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_3_Invoke_m31559_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m31560_gshared (InvokableCall_3_t4627 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_3_Find_m31560(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_3_t4627 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_3_Find_m31560_gshared)(__this, ___targetObj, ___method, method)
