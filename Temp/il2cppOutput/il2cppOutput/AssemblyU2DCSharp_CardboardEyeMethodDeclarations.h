#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CardboardEye
struct CardboardEye_t76;
// StereoController
struct StereoController_t75;
// CardboardHead
struct CardboardHead_t53;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m240 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t75 * CardboardEye_get_Controller_m241 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t53 * CardboardEye_get_Head_m242 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m243 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m244 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void CardboardEye_FixProjection_m245 (CardboardEye_t76 * __this, Matrix4x4_t27 * ___proj, float ___near, float ___far, float ___ipdScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Setup()
extern "C" void CardboardEye_Setup_m246 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Render()
extern "C" void CardboardEye_Render_m247 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m248 (CardboardEye_t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m249 (CardboardEye_t76 * __this, StereoController_t75 * ___controller, float ___parx, float ___pary, MethodInfo* method) IL2CPP_METHOD_ATTR;
