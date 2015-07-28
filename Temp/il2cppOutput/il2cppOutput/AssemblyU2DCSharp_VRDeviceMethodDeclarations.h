#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VRDevice
struct VRDevice_t99;
// System.Collections.Generic.List`1<System.String>
struct List_1_t95;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// System.Single[]
struct SingleU5BU5D_t25;
// VRDevice/VREventCallback
struct VREventCallback_t97;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void VRDevice::.ctor()
extern "C" void VRDevice__ctor_m348 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool VRDevice_SupportsNativeDistortionCorrection_m349 (VRDevice_t99 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool VRDevice_SupportsNativeUILayer_m350 (VRDevice_t99 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C" void VRDevice_SetDistortionCorrectionEnabled_m351 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern "C" void VRDevice_SetAlignmentMarkerEnabled_m352 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C" void VRDevice_SetSettingsButtonEnabled_m353 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetNeckModelScale(System.Single)
extern "C" void VRDevice_SetNeckModelScale_m354 (VRDevice_t99 * __this, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void VRDevice_SetAutoDriftCorrectionEnabled_m355 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::Init()
extern "C" void VRDevice_Init_m356 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern "C" void VRDevice_SetStereoScreen_m357 (VRDevice_t99 * __this, RenderTexture_t56 * ___stereoScreen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::UpdateState()
extern "C" void VRDevice_UpdateState_m358 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::UpdateScreenData()
extern "C" void VRDevice_UpdateScreenData_m359 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::Recenter()
extern "C" void VRDevice_Recenter_m360 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::PostRender(System.Boolean)
extern "C" void VRDevice_PostRender_m361 (VRDevice_t99 * __this, bool ___vrMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::OnApplicationQuit()
extern "C" void VRDevice_OnApplicationQuit_m362 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::UpdateView()
extern "C" void VRDevice_UpdateView_m363 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::UpdateProfile()
extern "C" void VRDevice_UpdateProfile_m364 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VRDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t VRDevice_ExtractMatrix_m365 (Object_t * __this /* static, unused */, Matrix4x4_t27 * ___mat, SingleU5BU5D_t25* ___data, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::LaunchSettingsDialog()
// System.Void VRDevice::ProcessEvents()
extern "C" void VRDevice_ProcessEvents_m366 (VRDevice_t99 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::OnVREvent(System.Int32)
extern "C" void VRDevice_OnVREvent_m367 (Object_t * __this /* static, unused */, int32_t ___eventID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" void VRDevice_Start_m368 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetEventCallback(VRDevice/VREventCallback)
extern "C" void VRDevice_SetEventCallback_m369 (Object_t * __this /* static, unused */, VREventCallback_t97 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetTextureId(System.Int32)
extern "C" void VRDevice_SetTextureId_m370 (Object_t * __this /* static, unused */, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::EnableDistortionCorrection(System.Boolean)
extern "C" void VRDevice_EnableDistortionCorrection_m371 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::EnableAlignmentMarker(System.Boolean)
extern "C" void VRDevice_EnableAlignmentMarker_m372 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::EnableSettingsButton(System.Boolean)
extern "C" void VRDevice_EnableSettingsButton_m373 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" void VRDevice_EnableAutoDriftCorrection_m374 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::SetNeckModelFactor(System.Single)
extern "C" void VRDevice_SetNeckModelFactor_m375 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::ResetHeadTracker()
extern "C" void VRDevice_ResetHeadTracker_m376 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::GetProfile(System.Single[])
extern "C" void VRDevice_GetProfile_m377 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___profile, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::GetHeadPose(System.Single[],System.Single)
extern "C" void VRDevice_GetHeadPose_m378 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___pose, float ___fps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::GetViewParameters(System.Single[])
extern "C" void VRDevice_GetViewParameters_m379 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___viewParams, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice::Stop()
extern "C" void VRDevice_Stop_m380 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
