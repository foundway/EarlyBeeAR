﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>
struct Transform_1_t3773;
// System.Object
struct Object_t;
// Vuforia.Marker
struct Marker_t693;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
#define Transform_1__ctor_m22631(__this, ___object, ___method, method) (( void (*) (Transform_1_t3773 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22632_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22633(__this, ___key, ___value, method) (( KeyValuePair_2_t3765  (*) (Transform_1_t3773 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m22634_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22635(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3773 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22636_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Marker>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22637(__this, ___result, method) (( KeyValuePair_2_t3765  (*) (Transform_1_t3773 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22638_gshared)(__this, ___result, method)
