﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t3530;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3529;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m20010(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3530 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m17839_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m20011(__this, ___callback, method) (( void (*) (InvokableCall_1_t3530 *, UnityAction_1_t3529 *, MethodInfo*))InvokableCall_1__ctor_m17840_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m20012(__this, ___args, method) (( void (*) (InvokableCall_1_t3530 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_1_Invoke_m17841_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m20013(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3530 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m17842_gshared)(__this, ___targetObj, ___method, method)