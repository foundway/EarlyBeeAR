#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
struct Transform_1_t4153;
// System.Object
struct Object_t;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t128;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_130MethodDeclarations.h"
#define Transform_1__ctor_m26902(__this, ___object, ___method, method) (( void (*) (Transform_1_t4153 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m26903_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m26904(__this, ___key, ___value, method) (( KeyValuePair_2_t4145  (*) (Transform_1_t4153 *, int32_t, VirtualButtonAbstractBehaviour_t128 *, MethodInfo*))Transform_1_Invoke_m26905_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m26906(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4153 *, int32_t, VirtualButtonAbstractBehaviour_t128 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m26907_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButtonAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m26908(__this, ___result, method) (( KeyValuePair_2_t4145  (*) (Transform_1_t4153 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m26909_gshared)(__this, ___result, method)
