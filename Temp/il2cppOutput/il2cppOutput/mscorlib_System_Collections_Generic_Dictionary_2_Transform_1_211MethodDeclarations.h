#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
struct Transform_1_t4693;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_207MethodDeclarations.h"
#define Transform_1__ctor_m32197(__this, ___object, ___method, method) (( void (*) (Transform_1_t4693 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m32099_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m32198(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t4693 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m32100_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m32199(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4693 *, String_t*, bool, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m32101_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m32200(__this, ___result, method) (( String_t* (*) (Transform_1_t4693 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m32102_gshared)(__this, ___result, method)
