#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>
struct Transform_1_t4302;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
#define Transform_1__ctor_m28458(__this, ___object, ___method, method) (( void (*) (Transform_1_t4302 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18443_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m28459(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4302 *, String_t*, int32_t, MethodInfo*))Transform_1_Invoke_m18444_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m28460(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4302 *, String_t*, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18445_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m28461(__this, ___result, method) (( String_t* (*) (Transform_1_t4302 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18446_gshared)(__this, ___result, method)
