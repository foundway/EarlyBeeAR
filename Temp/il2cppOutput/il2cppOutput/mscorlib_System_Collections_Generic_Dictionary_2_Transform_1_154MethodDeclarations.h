#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
struct Transform_1_t4394;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_150MethodDeclarations.h"
#define Transform_1__ctor_m29501(__this, ___object, ___method, method) (( void (*) (Transform_1_t4394 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m29407_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m29502(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4394 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m29408_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m29503(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4394 *, String_t*, int64_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m29409_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m29504(__this, ___result, method) (( String_t* (*) (Transform_1_t4394 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m29410_gshared)(__this, ___result, method)
