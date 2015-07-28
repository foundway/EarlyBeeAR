﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
struct Transform_1_t4444;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m30025_gshared (Transform_1_t4444 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m30025(__this, ___object, ___method, method) (( void (*) (Transform_1_t4444 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m30025_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m30026_gshared (Transform_1_t4444 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m30026(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t4444 *, uint64_t, Object_t *, MethodInfo*))Transform_1_Invoke_m30026_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m30027_gshared (Transform_1_t4444 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m30027(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4444 *, uint64_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m30027_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m30028_gshared (Transform_1_t4444 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m30028(__this, ___result, method) (( Object_t * (*) (Transform_1_t4444 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m30028_gshared)(__this, ___result, method)