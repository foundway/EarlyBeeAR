#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cardboard
struct Cardboard_t67;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// CardboardProfile
struct CardboardProfile_t72;
// Pose3D
struct Pose3D_t73;
// System.Action
struct Action_t71;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Cardboard::.ctor()
extern "C" void Cardboard__ctor_m173 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::.cctor()
extern "C" void Cardboard__cctor_m174 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTrigger(System.Action)
extern "C" void Cardboard_add_OnTrigger_m175 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern "C" void Cardboard_remove_OnTrigger_m176 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTilt(System.Action)
extern "C" void Cardboard_add_OnTilt_m177 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTilt(System.Action)
extern "C" void Cardboard_remove_OnTilt_m178 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard Cardboard::get_SDK()
extern "C" Cardboard_t67 * Cardboard_get_SDK_m179 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_DistortionCorrection()
extern "C" bool Cardboard_get_DistortionCorrection_m180 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_DistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_DistortionCorrection_m181 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m182 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m183 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C" bool Cardboard_get_EnableAlignmentMarker_m184 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern "C" void Cardboard_set_EnableAlignmentMarker_m185 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C" bool Cardboard_get_EnableSettingsButton_m186 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern "C" void Cardboard_set_EnableSettingsButton_m187 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_NeckModelScale()
extern "C" float Cardboard_get_NeckModelScale_m188 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern "C" void Cardboard_set_NeckModelScale_m189 (Cardboard_t67 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C" bool Cardboard_get_AutoDriftCorrection_m190 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern "C" void Cardboard_set_AutoDriftCorrection_m191 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern "C" bool Cardboard_get_SyncWithCardboardApp_m192 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern "C" void Cardboard_set_SyncWithCardboardApp_m193 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m194 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m195 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m196 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m197 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t56 * Cardboard_get_StereoScreen_m198 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m199 (Cardboard_t67 * __this, RenderTexture_t56 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_UseDistortionEffect()
extern "C" bool Cardboard_get_UseDistortionEffect_m200 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile Cardboard::get_Profile()
extern "C" CardboardProfile_t72 * Cardboard_get_Profile_m201 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t73 * Cardboard_get_HeadPose_m202 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t73 * Cardboard_EyePose_m203 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t27  Cardboard_Projection_m204 (Cardboard_t67 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t62  Cardboard_Viewport_m205 (Cardboard_t67 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t48  Cardboard_get_ComfortableViewingRange_m206 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::InitDevice()
extern "C" void Cardboard_InitDevice_m207 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Awake()
extern "C" void Cardboard_Awake_m208 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m209 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m210 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m211 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m212 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m213 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m214 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::AddDummyCamera()
extern "C" void Cardboard_AddDummyCamera_m215 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Cardboard::EndOfFrame()
extern "C" Object_t * Cardboard_EndOfFrame_m216 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::CreateStereoScreen()
extern "C" RenderTexture_t56 * Cardboard_CreateStereoScreen_m217 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m218 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m219 (Cardboard_t67 * __this, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnEnable()
extern "C" void Cardboard_OnEnable_m220 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDisable()
extern "C" void Cardboard_OnDisable_m221 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern "C" void Cardboard_OnApplicationPause_m222 (Cardboard_t67 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern "C" void Cardboard_OnApplicationFocus_m223 (Cardboard_t67 * __this, bool ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern "C" void Cardboard_OnLevelWasLoaded_m224 (Cardboard_t67 * __this, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDestroy()
extern "C" void Cardboard_OnDestroy_m225 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationQuit()
extern "C" void Cardboard_OnApplicationQuit_m226 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern "C" bool Cardboard_get_nativeDistortionCorrection_m227 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_nativeDistortionCorrection_m228 (Cardboard_t67 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_InCardboard()
extern "C" bool Cardboard_get_InCardboard_m229 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_CardboardTriggered()
extern "C" bool Cardboard_get_CardboardTriggered_m230 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern "C" Matrix4x4_t27  Cardboard_get_HeadView_m231 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern "C" Quaternion_t10  Cardboard_get_HeadRotation_m232 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern "C" Vector3_t5  Cardboard_get_HeadPosition_m233 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern "C" Matrix4x4_t27  Cardboard_EyeView_m234 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern "C" Vector3_t5  Cardboard_EyeOffset_m235 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern "C" Matrix4x4_t27  Cardboard_UndistortedProjection_m236 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern "C" Rect_t62  Cardboard_EyeRect_m237 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MinimumComfortDistance()
extern "C" float Cardboard_get_MinimumComfortDistance_m238 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MaximumComfortDistance()
extern "C" float Cardboard_get_MaximumComfortDistance_m239 (Cardboard_t67 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
