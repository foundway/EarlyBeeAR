#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct Transform_1_t4462;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m30138_gshared (Transform_1_t4462 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m30138(__this, ___object, ___method, method) (( void (*) (Transform_1_t4462 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m30138_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4450  Transform_1_Invoke_m30140_gshared (Transform_1_t4462 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m30140(__this, ___key, ___value, method) (( KeyValuePair_2_t4450  (*) (Transform_1_t4462 *, uint64_t, Object_t *, MethodInfo*))Transform_1_Invoke_m30140_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m30142_gshared (Transform_1_t4462 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m30142(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4462 *, uint64_t, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m30142_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4450  Transform_1_EndInvoke_m30144_gshared (Transform_1_t4462 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m30144(__this, ___result, method) (( KeyValuePair_2_t4450  (*) (Transform_1_t4462 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m30144_gshared)(__this, ___result, method)
