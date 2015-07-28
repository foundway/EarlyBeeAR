#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t4764;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m32628_gshared (StaticGetter_1_t4764 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m32628(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t4764 *, Object_t *, IntPtr_t, MethodInfo*))StaticGetter_1__ctor_m32628_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m32629_gshared (StaticGetter_1_t4764 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m32629(__this, method) (( Object_t * (*) (StaticGetter_1_t4764 *, MethodInfo*))StaticGetter_1_Invoke_m32629_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m32630_gshared (StaticGetter_1_t4764 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m32630(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t4764 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))StaticGetter_1_BeginInvoke_m32630_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m32631_gshared (StaticGetter_1_t4764 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m32631(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t4764 *, Object_t *, MethodInfo*))StaticGetter_1_EndInvoke_m32631_gshared)(__this, ___result, method)
