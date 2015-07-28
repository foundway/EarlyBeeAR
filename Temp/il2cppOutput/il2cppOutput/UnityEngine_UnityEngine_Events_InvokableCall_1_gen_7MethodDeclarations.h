#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t4631;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t4632;
// System.Object[]
struct ObjectU5BU5D_t178;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m31576_gshared (InvokableCall_1_t4631 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m31576(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t4631 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m31576_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m31577_gshared (InvokableCall_1_t4631 * __this, UnityAction_1_t4632 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m31577(__this, ___callback, method) (( void (*) (InvokableCall_1_t4631 *, UnityAction_1_t4632 *, MethodInfo*))InvokableCall_1__ctor_m31577_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m31578_gshared (InvokableCall_1_t4631 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m31578(__this, ___args, method) (( void (*) (InvokableCall_1_t4631 *, ObjectU5BU5D_t178*, MethodInfo*))InvokableCall_1_Invoke_m31578_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m31579_gshared (InvokableCall_1_t4631 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m31579(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t4631 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m31579_gshared)(__this, ___targetObj, ___method, method)
