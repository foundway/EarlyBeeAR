#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t3531;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t530;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m20018_gshared (InvokableCall_1_t3531 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m20018(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3531 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m20018_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m20019_gshared (InvokableCall_1_t3531 * __this, UnityAction_1_t530 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m20019(__this, ___callback, method) (( void (*) (InvokableCall_1_t3531 *, UnityAction_1_t530 *, MethodInfo*))InvokableCall_1__ctor_m20019_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m20020_gshared (InvokableCall_1_t3531 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m20020(__this, ___args, method) (( void (*) (InvokableCall_1_t3531 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_1_Invoke_m20020_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m20021_gshared (InvokableCall_1_t3531 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m20021(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3531 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m20021_gshared)(__this, ___targetObj, ___method, method)
