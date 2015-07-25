#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>
struct Transform_1_t3826;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23291_gshared (Transform_1_t3826 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m23291(__this, ___object, ___method, method) (( void (*) (Transform_1_t3826 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23291_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
extern "C" uint16_t Transform_1_Invoke_m23292_gshared (Transform_1_t3826 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m23292(__this, ___key, ___value, method) (( uint16_t (*) (Transform_1_t3826 *, Object_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m23292_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23293_gshared (Transform_1_t3826 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m23293(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3826 *, Object_t *, uint16_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23293_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Transform_1_EndInvoke_m23294_gshared (Transform_1_t3826 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m23294(__this, ___result, method) (( uint16_t (*) (Transform_1_t3826 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23294_gshared)(__this, ___result, method)
