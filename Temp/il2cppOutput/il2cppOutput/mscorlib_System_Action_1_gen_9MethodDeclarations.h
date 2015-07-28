#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Int32>
struct Action_1_t3252;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m17185_gshared (Action_1_t3252 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m17185(__this, ___object, ___method, method) (( void (*) (Action_1_t3252 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m17185_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m17186_gshared (Action_1_t3252 * __this, int32_t ___obj, MethodInfo* method);
#define Action_1_Invoke_m17186(__this, ___obj, method) (( void (*) (Action_1_t3252 *, int32_t, MethodInfo*))Action_1_Invoke_m17186_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m17188_gshared (Action_1_t3252 * __this, int32_t ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m17188(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3252 *, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m17188_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m17190_gshared (Action_1_t3252 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m17190(__this, ___result, method) (( void (*) (Action_1_t3252 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m17190_gshared)(__this, ___result, method)
