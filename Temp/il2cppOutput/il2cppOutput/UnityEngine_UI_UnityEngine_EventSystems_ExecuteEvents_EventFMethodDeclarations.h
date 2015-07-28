﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t187;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t185;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_6MethodDeclarations.h"
#define EventFunction_1__ctor_m2493(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t187 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m16622_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m16623(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t187 *, Object_t *, BaseEventData_t20 *, MethodInfo*))EventFunction_1_Invoke_m16624_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m16625(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t187 *, Object_t *, BaseEventData_t20 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m16626_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m16627(__this, ___result, method) (( void (*) (EventFunction_1_t187 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m16628_gshared)(__this, ___result, method)