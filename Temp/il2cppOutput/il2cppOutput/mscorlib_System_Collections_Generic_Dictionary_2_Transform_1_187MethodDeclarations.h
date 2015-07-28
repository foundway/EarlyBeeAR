﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>
struct Transform_1_t4542;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m30892_gshared (Transform_1_t4542 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m30892(__this, ___object, ___method, method) (( void (*) (Transform_1_t4542 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m30892_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4491  Transform_1_Invoke_m30894_gshared (Transform_1_t4542 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m30894(__this, ___key, ___value, method) (( KeyValuePair_2_t4491  (*) (Transform_1_t4542 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m30894_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m30896_gshared (Transform_1_t4542 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m30896(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4542 *, Object_t *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m30896_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4491  Transform_1_EndInvoke_m30898_gshared (Transform_1_t4542 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m30898(__this, ___result, method) (( KeyValuePair_2_t4491  (*) (Transform_1_t4542 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m30898_gshared)(__this, ___result, method)