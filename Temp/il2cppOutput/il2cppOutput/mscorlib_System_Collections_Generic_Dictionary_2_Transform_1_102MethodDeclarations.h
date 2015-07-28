#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>
struct Transform_1_t4027;
// System.Object
struct Object_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t116;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_103MethodDeclarations.h"
#define Transform_1__ctor_m25601(__this, ___object, ___method, method) (( void (*) (Transform_1_t4027 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25602_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m25603(__this, ___key, ___value, method) (( KeyValuePair_2_t4021  (*) (Transform_1_t4027 *, int32_t, TrackableBehaviour_t116 *, MethodInfo*))Transform_1_Invoke_m25604_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m25605(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4027 *, int32_t, TrackableBehaviour_t116 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25606_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m25607(__this, ___result, method) (( KeyValuePair_2_t4021  (*) (Transform_1_t4027 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25608_gshared)(__this, ___result, method)
