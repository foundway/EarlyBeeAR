#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t1291;
// UnityEngine.Object
struct Object_t172;
struct Object_t172_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m7464_gshared (CachedInvokableCall_1_t1291 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m7464(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1291 *, Object_t172 *, MethodInfo_t *, int32_t, MethodInfo*))CachedInvokableCall_1__ctor_m7464_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m31575_gshared (CachedInvokableCall_1_t1291 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m31575(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1291 *, ObjectU5BU5D_t178*, MethodInfo*))CachedInvokableCall_1_Invoke_m31575_gshared)(__this, ___args, method)
