#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>
struct Transform_1_t3735;
// System.Object
struct Object_t;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
#define Transform_1__ctor_m22200(__this, ___object, ___method, method) (( void (*) (Transform_1_t3735 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m22201_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22202(__this, ___key, ___value, method) (( KeyValuePair_2_t3728  (*) (Transform_1_t3735 *, int32_t, VirtualButton_t665 *, MethodInfo*))Transform_1_Invoke_m22203_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22204(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3735 *, int32_t, VirtualButton_t665 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m22205_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22206(__this, ___result, method) (( KeyValuePair_2_t3728  (*) (Transform_1_t3735 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m22207_gshared)(__this, ___result, method)
