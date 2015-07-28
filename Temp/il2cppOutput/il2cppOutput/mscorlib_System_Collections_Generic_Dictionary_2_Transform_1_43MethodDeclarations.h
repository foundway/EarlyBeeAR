﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
struct Transform_1_t3710;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t622;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
#define Transform_1__ctor_m21907(__this, ___object, ___method, method) (( void (*) (Transform_1_t3710 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m21908_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21909(__this, ___key, ___value, method) (( KeyValuePair_2_t3701  (*) (Transform_1_t3710 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m21910_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21911(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3710 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m21912_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Trackable,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21913(__this, ___result, method) (( KeyValuePair_2_t3701  (*) (Transform_1_t3710 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m21914_gshared)(__this, ___result, method)
