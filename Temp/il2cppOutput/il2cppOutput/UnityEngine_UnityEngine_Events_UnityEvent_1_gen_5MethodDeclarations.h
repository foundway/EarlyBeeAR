#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3312;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3174;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1217;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m17829_gshared (UnityEvent_1_t3312 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m17829(__this, method) (( void (*) (UnityEvent_1_t3312 *, MethodInfo*))UnityEvent_1__ctor_m17829_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m17831_gshared (UnityEvent_1_t3312 * __this, UnityAction_1_t3174 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m17831(__this, ___call, method) (( void (*) (UnityEvent_1_t3312 *, UnityAction_1_t3174 *, MethodInfo*))UnityEvent_1_AddListener_m17831_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17833_gshared (UnityEvent_1_t3312 * __this, UnityAction_1_t3174 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17833(__this, ___call, method) (( void (*) (UnityEvent_1_t3312 *, UnityAction_1_t3174 *, MethodInfo*))UnityEvent_1_RemoveListener_m17833_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17834_gshared (UnityEvent_1_t3312 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17834(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t3312 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m17834_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1217 * UnityEvent_1_GetDelegate_m17835_gshared (UnityEvent_1_t3312 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17835(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1217 * (*) (UnityEvent_1_t3312 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m17835_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1217 * UnityEvent_1_GetDelegate_m17837_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3174 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17837(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1217 * (*) (Object_t * /* static, unused */, UnityAction_1_t3174 *, MethodInfo*))UnityEvent_1_GetDelegate_m17837_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m17838_gshared (UnityEvent_1_t3312 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m17838(__this, ___arg0, method) (( void (*) (UnityEvent_1_t3312 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m17838_gshared)(__this, ___arg0, method)
