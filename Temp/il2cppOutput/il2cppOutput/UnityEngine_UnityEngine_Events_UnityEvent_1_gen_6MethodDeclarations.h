#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_t3580;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t3581;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1217;

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern "C" void UnityEvent_1__ctor_m20507_gshared (UnityEvent_1_t3580 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m20507(__this, method) (( void (*) (UnityEvent_1_t3580 *, MethodInfo*))UnityEvent_1__ctor_m20507_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m20509_gshared (UnityEvent_1_t3580 * __this, UnityAction_1_t3581 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m20509(__this, ___call, method) (( void (*) (UnityEvent_1_t3580 *, UnityAction_1_t3581 *, MethodInfo*))UnityEvent_1_AddListener_m20509_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m20511_gshared (UnityEvent_1_t3580 * __this, UnityAction_1_t3581 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m20511(__this, ___call, method) (( void (*) (UnityEvent_1_t3580 *, UnityAction_1_t3581 *, MethodInfo*))UnityEvent_1_RemoveListener_m20511_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m20512_gshared (UnityEvent_1_t3580 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m20512(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t3580 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m20512_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t1217 * UnityEvent_1_GetDelegate_m20513_gshared (UnityEvent_1_t3580 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m20513(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1217 * (*) (UnityEvent_1_t3580 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m20513_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t1217 * UnityEvent_1_GetDelegate_m20515_gshared (Object_t * __this /* static, unused */, UnityAction_1_t3581 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m20515(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1217 * (*) (Object_t * /* static, unused */, UnityAction_1_t3581 *, MethodInfo*))UnityEvent_1_GetDelegate_m20515_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m20516_gshared (UnityEvent_1_t3580 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m20516(__this, ___arg0, method) (( void (*) (UnityEvent_1_t3580 *, uint8_t, MethodInfo*))UnityEvent_1_Invoke_m20516_gshared)(__this, ___arg0, method)
