#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3313;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3174;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17839_gshared (InvokableCall_1_t3313 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m17839(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3313 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m17839_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17840_gshared (InvokableCall_1_t3313 * __this, UnityAction_1_t3174 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m17840(__this, ___callback, method) (( void (*) (InvokableCall_1_t3313 *, UnityAction_1_t3174 *, MethodInfo*))InvokableCall_1__ctor_m17840_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17841_gshared (InvokableCall_1_t3313 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m17841(__this, ___args, method) (( void (*) (InvokableCall_1_t3313 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_1_Invoke_m17841_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17842_gshared (InvokableCall_1_t3313 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m17842(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3313 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m17842_gshared)(__this, ___targetObj, ___method, method)
