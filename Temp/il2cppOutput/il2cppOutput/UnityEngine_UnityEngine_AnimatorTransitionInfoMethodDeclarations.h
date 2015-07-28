﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1101;
struct AnimatorTransitionInfo_t1101_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m6723 (AnimatorTransitionInfo_t1101 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m6724 (AnimatorTransitionInfo_t1101 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m6725 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m6726 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m6727 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m6728 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m6729 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m6730 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m6731 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t1101_marshal(const AnimatorTransitionInfo_t1101& unmarshaled, AnimatorTransitionInfo_t1101_marshaled& marshaled);
void AnimatorTransitionInfo_t1101_marshal_back(const AnimatorTransitionInfo_t1101_marshaled& marshaled, AnimatorTransitionInfo_t1101& unmarshaled);
void AnimatorTransitionInfo_t1101_marshal_cleanup(AnimatorTransitionInfo_t1101_marshaled& marshaled);