#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BaseVRDevice
struct BaseVRDevice_t69;
// CardboardProfile
struct CardboardProfile_t72;
// System.Collections.Generic.List`1<System.String>
struct List_1_t95;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// Pose3D
struct Pose3D_t73;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BaseVRDevice::.ctor()
extern "C" void BaseVRDevice__ctor_m323 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::.cctor()
extern "C" void BaseVRDevice__cctor_m324 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t72 * BaseVRDevice_get_Profile_m325 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C" void BaseVRDevice_set_Profile_m326 (BaseVRDevice_t69 * __this, CardboardProfile_t72 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Init()
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m327 (BaseVRDevice_t69 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m328 (BaseVRDevice_t69 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m329 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C" RenderTexture_t56 * BaseVRDevice_CreateStereoScreen_m330 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::SetDistortionCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetVRModeEnabled(System.Boolean)
// System.Void BaseVRDevice::SetAlignmentMarkerEnabled(System.Boolean)
// System.Void BaseVRDevice::SetSettingsButtonEnabled(System.Boolean)
// System.Void BaseVRDevice::SetNeckModelScale(System.Single)
// System.Void BaseVRDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetStereoScreen(UnityEngine.RenderTexture)
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t73 * BaseVRDevice_GetHeadPose_m331 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C" Pose3D_t73 * BaseVRDevice_GetEyePose_m332 (BaseVRDevice_t69 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t27  BaseVRDevice_GetProjection_m333 (BaseVRDevice_t69 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t62  BaseVRDevice_GetViewport_m334 (BaseVRDevice_t69 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::UpdateState()
// System.Void BaseVRDevice::UpdateScreenData()
// System.Void BaseVRDevice::Recenter()
// System.Void BaseVRDevice::PostRender(System.Boolean)
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void BaseVRDevice_SetTouchCoordinates_m335 (BaseVRDevice_t69 * __this, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C" void BaseVRDevice_OnPause_m336 (BaseVRDevice_t69 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m337 (BaseVRDevice_t69 * __this, bool ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Reset()
extern "C" void BaseVRDevice_Reset_m338 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m339 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Destroy()
extern "C" void BaseVRDevice_Destroy_m340 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m341 (BaseVRDevice_t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t27  BaseVRDevice_MakeProjection_m342 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C" BaseVRDevice_t69 * BaseVRDevice_GetDevice_m343 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
