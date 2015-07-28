﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>
struct Transform_1_t4289;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m28317(__this, ___object, ___method, method) (( void (*) (Transform_1_t4289 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18907_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28318(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4289 *, String_t*, GUIStyle_t1022 *, MethodInfo*))Transform_1_Invoke_m18908_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28319(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4289 *, String_t*, GUIStyle_t1022 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18909_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28320(__this, ___result, method) (( String_t* (*) (Transform_1_t4289 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18910_gshared)(__this, ___result, method)
