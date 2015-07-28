﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>
struct Transform_1_t4567;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31176_gshared (Transform_1_t4567 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m31176(__this, ___object, ___method, method) (( void (*) (Transform_1_t4567 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m31176_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m31177_gshared (Transform_1_t4567 * __this, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Transform_1_Invoke_m31177(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t4567 *, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Transform_1_Invoke_m31177_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31178_gshared (Transform_1_t4567 * __this, Object_t * ___key, KeyValuePair_2_t1273  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m31178(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4567 *, Object_t *, KeyValuePair_2_t1273 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m31178_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m31179_gshared (Transform_1_t4567 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m31179(__this, ___result, method) (( Object_t * (*) (Transform_1_t4567 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m31179_gshared)(__this, ___result, method)
