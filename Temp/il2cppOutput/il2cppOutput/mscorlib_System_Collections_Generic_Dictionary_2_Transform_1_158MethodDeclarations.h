#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Transform_1_t4399;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m29533_gshared (Transform_1_t4399 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m29533(__this, ___object, ___method, method) (( void (*) (Transform_1_t4399 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m29533_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4389  Transform_1_Invoke_m29535_gshared (Transform_1_t4399 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m29535(__this, ___key, ___value, method) (( KeyValuePair_2_t4389  (*) (Transform_1_t4399 *, Object_t *, int64_t, MethodInfo*))Transform_1_Invoke_m29535_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m29537_gshared (Transform_1_t4399 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m29537(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4399 *, Object_t *, int64_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m29537_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4389  Transform_1_EndInvoke_m29539_gshared (Transform_1_t4399 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m29539(__this, ___result, method) (( KeyValuePair_2_t4389  (*) (Transform_1_t4399 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m29539_gshared)(__this, ___result, method)
