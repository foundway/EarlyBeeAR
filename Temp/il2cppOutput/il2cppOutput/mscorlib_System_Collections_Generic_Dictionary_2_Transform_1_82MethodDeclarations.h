﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Surface,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>
struct Transform_1_t3953;
// System.Object
struct Object_t;
// Vuforia.Surface
struct Surface_t115;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Surface,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_83MethodDeclarations.h"
#define Transform_1__ctor_m24770(__this, ___object, ___method, method) (( void (*) (Transform_1_t3953 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24771_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Surface,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24772(__this, ___key, ___value, method) (( KeyValuePair_2_t903  (*) (Transform_1_t3953 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m24773_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Surface,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24774(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3953 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24775_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Surface,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Surface>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24776(__this, ___result, method) (( KeyValuePair_2_t903  (*) (Transform_1_t3953 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24777_gshared)(__this, ___result, method)
