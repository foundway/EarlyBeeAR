#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t999;
struct GcScoreData_t999_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1185;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1185 * GcScoreData_ToScore_m7045 (GcScoreData_t999 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t999_marshal(const GcScoreData_t999& unmarshaled, GcScoreData_t999_marshaled& marshaled);
void GcScoreData_t999_marshal_back(const GcScoreData_t999_marshaled& marshaled, GcScoreData_t999& unmarshaled);
void GcScoreData_t999_marshal_cleanup(GcScoreData_t999_marshaled& marshaled);
