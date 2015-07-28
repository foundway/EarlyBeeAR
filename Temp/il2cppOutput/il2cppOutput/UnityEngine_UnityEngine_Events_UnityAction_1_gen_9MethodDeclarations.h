﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3532;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m20025_gshared (UnityAction_1_t3532 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m20025(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3532 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m20025_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m20026_gshared (UnityAction_1_t3532 * __this, Vector2_t48  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m20026(__this, ___arg0, method) (( void (*) (UnityAction_1_t3532 *, Vector2_t48 , MethodInfo*))UnityAction_1_Invoke_m20026_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m20027_gshared (UnityAction_1_t3532 * __this, Vector2_t48  ___arg0, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m20027(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3532 *, Vector2_t48 , AsyncCallback_t42 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m20027_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m20028_gshared (UnityAction_1_t3532 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m20028(__this, ___result, method) (( void (*) (UnityAction_1_t3532 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m20028_gshared)(__this, ___result, method)