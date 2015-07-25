﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t3158;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16245_gshared (Predicate_1_t3158 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m16245(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3158 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m16245_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16246_gshared (Predicate_1_t3158 * __this, RaycastResult_t182  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m16246(__this, ___obj, method) (( bool (*) (Predicate_1_t3158 *, RaycastResult_t182 , MethodInfo*))Predicate_1_Invoke_m16246_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16247_gshared (Predicate_1_t3158 * __this, RaycastResult_t182  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m16247(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3158 *, RaycastResult_t182 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m16247_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16248_gshared (Predicate_1_t3158 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m16248(__this, ___result, method) (( bool (*) (Predicate_1_t3158 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m16248_gshared)(__this, ___result, method)
