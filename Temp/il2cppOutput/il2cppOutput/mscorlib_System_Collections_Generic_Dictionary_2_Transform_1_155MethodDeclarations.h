#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
struct Transform_1_t4397;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_151MethodDeclarations.h"
#define Transform_1__ctor_m29524(__this, ___object, ___method, method) (( void (*) (Transform_1_t4397 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m29430_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m29525(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t4397 *, String_t*, int64_t, MethodInfo*))Transform_1_Invoke_m29431_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m29526(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4397 *, String_t*, int64_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m29432_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m29527(__this, ___result, method) (( int64_t (*) (Transform_1_t4397 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m29433_gshared)(__this, ___result, method)
