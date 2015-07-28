#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct Transform_1_t4556;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31025_gshared (Transform_1_t4556 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m31025(__this, ___object, ___method, method) (( void (*) (Transform_1_t4556 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m31025_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1278  Transform_1_Invoke_m31027_gshared (Transform_1_t4556 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m31027(__this, ___key, ___value, method) (( KeyValuePair_2_t1278  (*) (Transform_1_t4556 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m31027_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31029_gshared (Transform_1_t4556 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m31029(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4556 *, Object_t *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m31029_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1278  Transform_1_EndInvoke_m31031_gshared (Transform_1_t4556 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m31031(__this, ___result, method) (( KeyValuePair_2_t1278  (*) (Transform_1_t4556 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m31031_gshared)(__this, ___result, method)
