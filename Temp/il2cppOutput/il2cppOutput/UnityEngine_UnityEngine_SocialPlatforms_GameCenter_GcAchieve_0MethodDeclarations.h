#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t997;
struct GcAchievementData_t997_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t1184;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t1184 * GcAchievementData_ToAchievement_m7044 (GcAchievementData_t997 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t997_marshal(const GcAchievementData_t997& unmarshaled, GcAchievementData_t997_marshaled& marshaled);
void GcAchievementData_t997_marshal_back(const GcAchievementData_t997_marshaled& marshaled, GcAchievementData_t997& unmarshaled);
void GcAchievementData_t997_marshal_cleanup(GcAchievementData_t997_marshaled& marshaled);
