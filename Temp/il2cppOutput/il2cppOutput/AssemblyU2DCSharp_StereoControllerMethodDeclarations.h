#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StereoController
struct StereoController_t75;
// CardboardEye[]
struct CardboardEyeU5BU5D_t93;
// CardboardHead
struct CardboardHead_t53;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// CardboardEye
struct CardboardEye_t76;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m307 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t93* StereoController_get_Eyes_m308 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m309 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t53 * StereoController_get_Head_m310 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture StereoController::get_StereoScreen()
extern "C" RenderTexture_t56 * StereoController_get_StereoScreen_m311 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StereoController::get_ScreenHeight()
extern "C" int32_t StereoController_get_ScreenHeight_m312 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m313 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m314 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m315 (StereoController_t75 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::ComputeStereoAdjustment(System.Single,System.Single,System.Single&,System.Single&)
extern "C" void StereoController_ComputeStereoAdjustment_m316 (StereoController_t75 * __this, float ___proj11, float ___zScale, float* ___ipdScale, float* ___eyeOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m317 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m318 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m319 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m320 (StereoController_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__1(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__1_m321 (StereoController_t75 * __this, CardboardEye_t76 * ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__2(CardboardEye)
extern "C" CardboardHead_t53 * StereoController_U3Cget_HeadU3Em__2_m322 (Object_t * __this /* static, unused */, CardboardEye_t76 * ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
