﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.DictionaryEntry>
struct Transform_1_t3764;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m22627(__this, ___object, ___method, method) (( void (*) (Transform_1_t3764 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18042_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22628(__this, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Transform_1_t3764 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m18043_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22629(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3764 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18044_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Marker,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22630(__this, ___result, method) (( DictionaryEntry_t1610  (*) (Transform_1_t3764 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18045_gshared)(__this, ___result, method)