#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>
struct Transform_1_t3999;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25202_gshared (Transform_1_t3999 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25202(__this, ___object, ___method, method) (( void (*) (Transform_1_t3999 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25202_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3989  Transform_1_Invoke_m25204_gshared (Transform_1_t3999 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m25204(__this, ___key, ___value, method) (( KeyValuePair_2_t3989  (*) (Transform_1_t3999 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m25204_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25206_gshared (Transform_1_t3999 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25206(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3999 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25206_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.PropAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3989  Transform_1_EndInvoke_m25208_gshared (Transform_1_t3999 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25208(__this, ___result, method) (( KeyValuePair_2_t3989  (*) (Transform_1_t3999 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25208_gshared)(__this, ___result, method)
