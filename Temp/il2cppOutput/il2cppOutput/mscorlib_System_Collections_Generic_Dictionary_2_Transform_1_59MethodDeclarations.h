#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>
struct Transform_1_t3837;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
#define Transform_1__ctor_m23362(__this, ___object, ___method, method) (( void (*) (Transform_1_t3837 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23268_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23363(__this, ___key, ___value, method) (( Type_t * (*) (Transform_1_t3837 *, Type_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m23269_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23364(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3837 *, Type_t *, uint16_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23270_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23365(__this, ___result, method) (( Type_t * (*) (Transform_1_t3837 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23271_gshared)(__this, ___result, method)
