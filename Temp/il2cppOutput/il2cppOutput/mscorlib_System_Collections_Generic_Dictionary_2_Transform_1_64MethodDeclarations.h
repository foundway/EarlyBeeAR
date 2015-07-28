#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Int32>
struct Transform_1_t3852;
// System.Object
struct Object_t;
// Vuforia.WordResult
struct WordResult_t773;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m23502(__this, ___object, ___method, method) (( void (*) (Transform_1_t3852 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18015_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Int32>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23503(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3852 *, int32_t, WordResult_t773 *, MethodInfo*))Transform_1_Invoke_m18016_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23504(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3852 *, int32_t, WordResult_t773 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18017_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Int32>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23505(__this, ___result, method) (( int32_t (*) (Transform_1_t3852 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18018_gshared)(__this, ___result, method)
