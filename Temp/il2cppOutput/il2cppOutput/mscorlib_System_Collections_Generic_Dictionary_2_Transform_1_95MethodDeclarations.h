#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,Vuforia.PropAbstractBehaviour>
struct Transform_1_t3997;
// System.Object
struct Object_t;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t141;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,Vuforia.PropAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m25193(__this, ___object, ___method, method) (( void (*) (Transform_1_t3997 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18038_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,Vuforia.PropAbstractBehaviour>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m25194(__this, ___key, ___value, method) (( PropAbstractBehaviour_t141 * (*) (Transform_1_t3997 *, int32_t, PropAbstractBehaviour_t141 *, MethodInfo*))Transform_1_Invoke_m18039_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,Vuforia.PropAbstractBehaviour>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m25195(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3997 *, int32_t, PropAbstractBehaviour_t141 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18040_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.PropAbstractBehaviour,Vuforia.PropAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m25196(__this, ___result, method) (( PropAbstractBehaviour_t141 * (*) (Transform_1_t3997 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18041_gshared)(__this, ___result, method)
