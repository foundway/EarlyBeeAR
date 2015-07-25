﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4632;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m31580_gshared (UnityAction_1_t4632 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m31580(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t4632 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m31580_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m31581_gshared (UnityAction_1_t4632 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m31581(__this, ___arg0, method) (( void (*) (UnityAction_1_t4632 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m31581_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m31582_gshared (UnityAction_1_t4632 * __this, int32_t ___arg0, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m31582(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t4632 *, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m31582_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m31583_gshared (UnityAction_1_t4632 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m31583(__this, ___result, method) (( void (*) (UnityAction_1_t4632 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m31583_gshared)(__this, ___result, method)
