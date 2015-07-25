﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t3254;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m17191_gshared (Action_1_t3254 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m17191(__this, ___object, ___method, method) (( void (*) (Action_1_t3254 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m17191_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m17192_gshared (Action_1_t3254 * __this, Object_t * ___obj, MethodInfo* method);
#define Action_1_Invoke_m17192(__this, ___obj, method) (( void (*) (Action_1_t3254 *, Object_t *, MethodInfo*))Action_1_Invoke_m17192_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m17194_gshared (Action_1_t3254 * __this, Object_t * ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m17194(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3254 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m17194_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m17196_gshared (Action_1_t3254 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m17196(__this, ___result, method) (( void (*) (Action_1_t3254 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m17196_gshared)(__this, ___result, method)
