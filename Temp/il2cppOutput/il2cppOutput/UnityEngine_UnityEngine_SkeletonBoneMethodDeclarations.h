#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1102;
struct SkeletonBone_t1102_marshaled;

void SkeletonBone_t1102_marshal(const SkeletonBone_t1102& unmarshaled, SkeletonBone_t1102_marshaled& marshaled);
void SkeletonBone_t1102_marshal_back(const SkeletonBone_t1102_marshaled& marshaled, SkeletonBone_t1102& unmarshaled);
void SkeletonBone_t1102_marshal_cleanup(SkeletonBone_t1102_marshaled& marshaled);
