﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t4291;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1022;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_140MethodDeclarations.h"
#define Transform_1__ctor_m28347(__this, ___object, ___method, method) (( void (*) (Transform_1_t4291 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28348_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28349(__this, ___key, ___value, method) (( KeyValuePair_2_t4284  (*) (Transform_1_t4291 *, String_t*, GUIStyle_t1022 *, MethodInfo*))Transform_1_Invoke_m28350_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28351(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4291 *, String_t*, GUIStyle_t1022 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28352_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28353(__this, ___result, method) (( KeyValuePair_2_t4284  (*) (Transform_1_t4291 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28354_gshared)(__this, ___result, method)
