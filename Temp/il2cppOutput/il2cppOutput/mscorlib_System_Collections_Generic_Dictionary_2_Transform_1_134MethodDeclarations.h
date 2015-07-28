﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct Transform_1_t4266;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1026;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_135MethodDeclarations.h"
#define Transform_1__ctor_m28059(__this, ___object, ___method, method) (( void (*) (Transform_1_t4266 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m28060_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28061(__this, ___key, ___value, method) (( KeyValuePair_2_t4256  (*) (Transform_1_t4266 *, int32_t, LayoutCache_t1026 *, MethodInfo*))Transform_1_Invoke_m28062_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28063(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4266 *, int32_t, LayoutCache_t1026 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m28064_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28065(__this, ___result, method) (( KeyValuePair_2_t4256  (*) (Transform_1_t4266 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m28066_gshared)(__this, ___result, method)