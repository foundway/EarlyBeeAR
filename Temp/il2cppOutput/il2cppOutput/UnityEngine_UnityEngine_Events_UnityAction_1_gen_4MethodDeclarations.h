﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t482;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t484;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m2996(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t482 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m16435_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Invoke(T0)
#define UnityAction_1_Invoke_m20871(__this, ___arg0, method) (( void (*) (UnityAction_1_t482 *, List_1_t484 *, MethodInfo*))UnityAction_1_Invoke_m16436_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m20872(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t482 *, List_1_t484 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16437_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m20873(__this, ___result, method) (( void (*) (UnityAction_1_t482 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16438_gshared)(__this, ___result, method)