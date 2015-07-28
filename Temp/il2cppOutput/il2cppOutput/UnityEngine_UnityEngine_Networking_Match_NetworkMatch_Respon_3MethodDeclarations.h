#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t4468;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ResponseDelegate_1__ctor_m30168_gshared (ResponseDelegate_1_t4468 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define ResponseDelegate_1__ctor_m30168(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t4468 *, Object_t *, IntPtr_t, MethodInfo*))ResponseDelegate_1__ctor_m30168_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C" void ResponseDelegate_1_Invoke_m30170_gshared (ResponseDelegate_1_t4468 * __this, Object_t * ___response, MethodInfo* method);
#define ResponseDelegate_1_Invoke_m30170(__this, ___response, method) (( void (*) (ResponseDelegate_1_t4468 *, Object_t *, MethodInfo*))ResponseDelegate_1_Invoke_m30170_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseDelegate_1_BeginInvoke_m30172_gshared (ResponseDelegate_1_t4468 * __this, Object_t * ___response, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m30172(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t4468 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))ResponseDelegate_1_BeginInvoke_m30172_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ResponseDelegate_1_EndInvoke_m30174_gshared (ResponseDelegate_1_t4468 * __this, Object_t * ___result, MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m30174(__this, ___result, method) (( void (*) (ResponseDelegate_1_t4468 *, Object_t *, MethodInfo*))ResponseDelegate_1_EndInvoke_m30174_gshared)(__this, ___result, method)
