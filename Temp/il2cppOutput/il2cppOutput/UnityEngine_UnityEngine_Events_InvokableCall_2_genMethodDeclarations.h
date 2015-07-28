#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t4625;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_2__ctor_m31551_gshared (InvokableCall_2_t4625 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_2__ctor_m31551(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_2_t4625 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2__ctor_m31551_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_2_Invoke_m31552_gshared (InvokableCall_2_t4625 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define InvokableCall_2_Invoke_m31552(__this, ___args, method) (( void (*) (InvokableCall_2_t4625 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_2_Invoke_m31552_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_2_Find_m31553_gshared (InvokableCall_2_t4625 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_2_Find_m31553(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_2_t4625 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_2_Find_m31553_gshared)(__this, ___targetObj, ___method, method)
