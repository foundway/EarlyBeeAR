#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t4630;
// UnityEngine.Object
struct Object_t172;
struct Object_t172_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m31572_gshared (CachedInvokableCall_1_t4630 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m31572(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t4630 *, Object_t172 *, MethodInfo_t *, Object_t *, MethodInfo*))CachedInvokableCall_1__ctor_m31572_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m31573_gshared (CachedInvokableCall_1_t4630 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m31573(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t4630 *, ObjectU5BU5D_t178*, MethodInfo*))CachedInvokableCall_1_Invoke_m31573_gshared)(__this, ___args, method)
