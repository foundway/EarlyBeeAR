﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
struct Transform_1_t3841;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63MethodDeclarations.h"
#define Transform_1__ctor_m23393(__this, ___object, ___method, method) (( void (*) (Transform_1_t3841 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23394_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23395(__this, ___key, ___value, method) (( KeyValuePair_2_t3832  (*) (Transform_1_t3841 *, Type_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m23396_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23397(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3841 *, Type_t *, uint16_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23398_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23399(__this, ___result, method) (( KeyValuePair_2_t3832  (*) (Transform_1_t3841 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23400_gshared)(__this, ___result, method)
