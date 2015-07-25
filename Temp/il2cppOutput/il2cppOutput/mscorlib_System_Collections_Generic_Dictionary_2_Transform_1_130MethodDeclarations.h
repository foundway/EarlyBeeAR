﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
struct Transform_1_t4154;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26903_gshared (Transform_1_t4154 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m26903(__this, ___object, ___method, method) (( void (*) (Transform_1_t4154 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m26903_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4145  Transform_1_Invoke_m26905_gshared (Transform_1_t4154 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m26905(__this, ___key, ___value, method) (( KeyValuePair_2_t4145  (*) (Transform_1_t4154 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m26905_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m26907_gshared (Transform_1_t4154 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m26907(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4154 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m26907_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4145  Transform_1_EndInvoke_m26909_gshared (Transform_1_t4154 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m26909(__this, ___result, method) (( KeyValuePair_2_t4145  (*) (Transform_1_t4154 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m26909_gshared)(__this, ___result, method)
