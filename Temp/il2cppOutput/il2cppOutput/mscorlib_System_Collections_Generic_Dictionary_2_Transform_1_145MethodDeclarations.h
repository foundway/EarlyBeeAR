﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Transform_1_t4307;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28490_gshared (Transform_1_t4307 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m28490(__this, ___object, ___method, method) (( void (*) (Transform_1_t4307 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28490_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4297  Transform_1_Invoke_m28492_gshared (Transform_1_t4307 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m28492(__this, ___key, ___value, method) (( KeyValuePair_2_t4297  (*) (Transform_1_t4307 *, Object_t *, int32_t, MethodInfo*))Transform_1_Invoke_m28492_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28494_gshared (Transform_1_t4307 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m28494(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4307 *, Object_t *, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28494_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4297  Transform_1_EndInvoke_m28496_gshared (Transform_1_t4307 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m28496(__this, ___result, method) (( KeyValuePair_2_t4297  (*) (Transform_1_t4307 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28496_gshared)(__this, ___result, method)
