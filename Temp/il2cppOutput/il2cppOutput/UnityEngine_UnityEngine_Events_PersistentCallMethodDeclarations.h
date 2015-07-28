#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t1220;
// UnityEngine.Object
struct Object_t172;
struct Object_t172_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t1216;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1217;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t1221;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m7170 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t172 * PersistentCall_get_target_m7171 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m7172 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m7173 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t1216 * PersistentCall_get_arguments_m7174 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m7175 (PersistentCall_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t1217 * PersistentCall_GetRuntimeCall_m7176 (PersistentCall_t1220 * __this, UnityEventBase_t1221 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t1217 * PersistentCall_GetObjectCall_m7177 (Object_t * __this /* static, unused */, Object_t172 * ___target, MethodInfo_t * ___method, ArgumentCache_t1216 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
