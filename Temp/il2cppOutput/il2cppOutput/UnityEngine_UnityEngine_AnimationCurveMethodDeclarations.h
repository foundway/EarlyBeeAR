#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t1098;
struct AnimationCurve_t1098_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1099;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6709 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1099* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6710 (AnimationCurve_t1098 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6711 (AnimationCurve_t1098 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6712 (AnimationCurve_t1098 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6713 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1099* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t1098_marshal(const AnimationCurve_t1098& unmarshaled, AnimationCurve_t1098_marshaled& marshaled);
void AnimationCurve_t1098_marshal_back(const AnimationCurve_t1098_marshaled& marshaled, AnimationCurve_t1098& unmarshaled);
void AnimationCurve_t1098_marshal_cleanup(AnimationCurve_t1098_marshaled& marshaled);
