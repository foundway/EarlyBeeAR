#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t1003;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t1182;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t991;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t1182 * GcUserProfileData_ToUserProfile_m7041 (GcUserProfileData_t1003 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m7042 (GcUserProfileData_t1003 * __this, UserProfileU5BU5D_t991** ___array, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
