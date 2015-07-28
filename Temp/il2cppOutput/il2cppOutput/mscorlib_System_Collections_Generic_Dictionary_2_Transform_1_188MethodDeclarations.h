#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>
struct Transform_1_t4551;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t1161;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m30993(__this, ___object, ___method, method) (( void (*) (Transform_1_t4551 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18907_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m30994(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4551 *, String_t*, GetDelegate_t1161 *, MethodInfo*))Transform_1_Invoke_m18908_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m30995(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4551 *, String_t*, GetDelegate_t1161 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18909_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m30996(__this, ___result, method) (( String_t* (*) (Transform_1_t4551 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18910_gshared)(__this, ___result, method)
