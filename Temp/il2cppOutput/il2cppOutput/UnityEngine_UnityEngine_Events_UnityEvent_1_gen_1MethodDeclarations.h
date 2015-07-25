#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t401;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3529;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1217;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2745(__this, method) (( void (*) (UnityEvent_1_t401 *, MethodInfo*))UnityEvent_1__ctor_m17829_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m20003(__this, ___call, method) (( void (*) (UnityEvent_1_t401 *, UnityAction_1_t3529 *, MethodInfo*))UnityEvent_1_AddListener_m17831_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m20004(__this, ___call, method) (( void (*) (UnityEvent_1_t401 *, UnityAction_1_t3529 *, MethodInfo*))UnityEvent_1_RemoveListener_m17833_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m3058(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t401 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m17834_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m3059(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1217 * (*) (UnityEvent_1_t401 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m17835_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m20005(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1217 * (*) (Object_t * /* static, unused */, UnityAction_1_t3529 *, MethodInfo*))UnityEvent_1_GetDelegate_m17837_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m2841(__this, ___arg0, method) (( void (*) (UnityEvent_1_t401 *, String_t*, MethodInfo*))UnityEvent_1_Invoke_m17838_gshared)(__this, ___arg0, method)
