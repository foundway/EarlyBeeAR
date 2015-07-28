#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
struct Transform_1_t4100;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26342_gshared (Transform_1_t4100 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m26342(__this, ___object, ___method, method) (( void (*) (Transform_1_t4100 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m26342_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4089  Transform_1_Invoke_m26344_gshared (Transform_1_t4100 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m26344(__this, ___key, ___value, method) (( KeyValuePair_2_t4089  (*) (Transform_1_t4100 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m26344_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m26346_gshared (Transform_1_t4100 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m26346(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4100 *, int32_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m26346_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4089  Transform_1_EndInvoke_m26348_gshared (Transform_1_t4100 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m26348(__this, ___result, method) (( KeyValuePair_2_t4089  (*) (Transform_1_t4100 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m26348_gshared)(__this, ___result, method)
