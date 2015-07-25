#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t45;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2011;
// System.Delegate
struct Delegate_t200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1081 (MulticastDelegate_t45 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1079 (MulticastDelegate_t45 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1080 (MulticastDelegate_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2011* MulticastDelegate_GetInvocationList_m1083 (MulticastDelegate_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t200 * MulticastDelegate_CombineImpl_m1084 (MulticastDelegate_t45 * __this, Delegate_t200 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m10738 (MulticastDelegate_t45 * __this, MulticastDelegate_t45 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t45 * MulticastDelegate_KPM_m10739 (Object_t * __this /* static, unused */, MulticastDelegate_t45 * ___needle, MulticastDelegate_t45 * ___haystack, MulticastDelegate_t45 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t200 * MulticastDelegate_RemoveImpl_m1085 (MulticastDelegate_t45 * __this, Delegate_t200 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
