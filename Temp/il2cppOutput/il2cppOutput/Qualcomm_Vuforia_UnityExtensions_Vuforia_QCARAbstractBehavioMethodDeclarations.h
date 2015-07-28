#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARAbstractBehaviour
struct QCARAbstractBehaviour_t143;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t116;
// UnityEngine.Camera
struct Camera_t15;
// System.String
struct String_t;
// System.Action`1<Vuforia.QCARUnity/InitError>
struct Action_1_t215;
// System.Action
struct Action_t71;
// System.Action`1<System.Boolean>
struct Action_1_t828;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t831;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t267;
// UnityEngine.GameObject
struct GameObject_t7;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t277;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// Vuforia.CameraDevice/CameraDeviceMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Vuforia.CameraDevice/CameraDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
// Vuforia.QCARRenderer/VideoBackgroundReflection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB.h"

// System.Boolean Vuforia.QCARAbstractBehaviour::get_AutoAdjustStereoCameraSkewing()
extern "C" bool QCARAbstractBehaviour_get_AutoAdjustStereoCameraSkewing_m4644 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARAbstractBehaviour::get_SceneScaleFactor()
extern "C" float QCARAbstractBehaviour_get_SceneScaleFactor_m4645 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_SceneScaleFactor(System.Single)
extern "C" void QCARAbstractBehaviour_set_SceneScaleFactor_m4646 (QCARAbstractBehaviour_t143 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARAbstractBehaviour::get_CameraOffset()
extern "C" float QCARAbstractBehaviour_get_CameraOffset_m4647 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void QCARAbstractBehaviour_set_CameraOffset_m4648 (QCARAbstractBehaviour_t143 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t QCARAbstractBehaviour_get_WorldCenterModeSetting_m4649 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.QCARAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t116 * QCARAbstractBehaviour_get_WorldCenter_m4650 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" bool QCARAbstractBehaviour_get_VideoBackGroundMirrored_m4651 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_VideoBackGroundMirrored(System.Boolean)
extern "C" void QCARAbstractBehaviour_set_VideoBackGroundMirrored_m4652 (QCARAbstractBehaviour_t143 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.QCARAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t QCARAbstractBehaviour_get_CameraDeviceMode_m4653 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_HasStarted()
extern "C" bool QCARAbstractBehaviour_get_HasStarted_m4654 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_IsStereoRendering()
extern "C" bool QCARAbstractBehaviour_get_IsStereoRendering_m4655 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t15 * QCARAbstractBehaviour_get_PrimaryCamera_m4656 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void QCARAbstractBehaviour_set_PrimaryCamera_m4657 (QCARAbstractBehaviour_t143 * __this, Camera_t15 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t15 * QCARAbstractBehaviour_get_SecondaryCamera_m4658 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void QCARAbstractBehaviour_set_SecondaryCamera_m4659 (QCARAbstractBehaviour_t143 * __this, Camera_t15 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.QCARAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* QCARAbstractBehaviour_get_AppLicenseKey_m4660 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetAutoAdjustStereoCameraSkewing(System.Boolean)
extern "C" void QCARAbstractBehaviour_SetAutoAdjustStereoCameraSkewing_m4661 (QCARAbstractBehaviour_t143 * __this, bool ___setSkewing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetSceneScaleFactor(System.Single)
extern "C" void QCARAbstractBehaviour_SetSceneScaleFactor_m4662 (QCARAbstractBehaviour_t143 * __this, float ___Scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARInitErrorCallback(System.Action`1<Vuforia.QCARUnity/InitError>)
extern "C" void QCARAbstractBehaviour_RegisterQCARInitErrorCallback_m945 (QCARAbstractBehaviour_t143 * __this, Action_1_t215 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARInitErrorCallback(System.Action`1<Vuforia.QCARUnity/InitError>)
extern "C" void QCARAbstractBehaviour_UnregisterQCARInitErrorCallback_m948 (QCARAbstractBehaviour_t143 * __this, Action_1_t215 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARInitializedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterQCARInitializedCallback_m4663 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARInitializedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterQCARInitializedCallback_m4664 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARStartedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterQCARStartedCallback_m4665 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARStartedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterQCARStartedCallback_m4666 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterTrackablesUpdatedCallback_m4667 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m4668 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void QCARAbstractBehaviour_RegisterOnPauseCallback_m4669 (QCARAbstractBehaviour_t143 * __this, Action_1_t828 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void QCARAbstractBehaviour_UnregisterOnPauseCallback_m4670 (QCARAbstractBehaviour_t143 * __this, Action_1_t828 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetEditorValues(System.Single)
extern "C" void QCARAbstractBehaviour_SetEditorValues_m4671 (QCARAbstractBehaviour_t143 * __this, float ___Offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void QCARAbstractBehaviour_RegisterTrackerEventHandler_m4672 (QCARAbstractBehaviour_t143 * __this, Object_t * ___trackerEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool QCARAbstractBehaviour_UnregisterTrackerEventHandler_m4673 (QCARAbstractBehaviour_t143 * __this, Object_t * ___trackerEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void QCARAbstractBehaviour_RegisterVideoBgEventHandler_m4674 (QCARAbstractBehaviour_t143 * __this, Object_t * ___videoBgEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool QCARAbstractBehaviour_UnregisterVideoBgEventHandler_m4675 (QCARAbstractBehaviour_t143 * __this, Object_t * ___videoBgEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetWorldCenterMode(Vuforia.QCARAbstractBehaviour/WorldCenterMode)
extern "C" void QCARAbstractBehaviour_SetWorldCenterMode_m4676 (QCARAbstractBehaviour_t143 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void QCARAbstractBehaviour_SetWorldCenter_m4677 (QCARAbstractBehaviour_t143 * __this, TrackableBehaviour_t116 * ___trackable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void QCARAbstractBehaviour_SetAppLicenseKey_m4678 (QCARAbstractBehaviour_t143 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.QCARAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t62  QCARAbstractBehaviour_GetViewportRectangle_m4679 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.QCARAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t QCARAbstractBehaviour_GetSurfaceOrientation_m4680 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ConfigureVideoBackground(System.Boolean)
extern "C" void QCARAbstractBehaviour_ConfigureVideoBackground_m4681 (QCARAbstractBehaviour_t143 * __this, bool ___forceReflectionSetting, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void QCARAbstractBehaviour_ResetBackgroundPlane_m4682 (QCARAbstractBehaviour_t143 * __this, bool ___disable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterRenderOnUpdateCallback_m4683 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterRenderOnUpdateCallback_m4684 (QCARAbstractBehaviour_t143 * __this, Action_t71 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ConfigureView()
extern "C" void QCARAbstractBehaviour_ConfigureView_m4685 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void QCARAbstractBehaviour_EnableObjectRenderer_m4686 (QCARAbstractBehaviour_t143 * __this, GameObject_t7 * ___go, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Start()
extern "C" void QCARAbstractBehaviour_Start_m4687 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnEnable()
extern "C" void QCARAbstractBehaviour_OnEnable_m4688 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateView()
extern "C" void QCARAbstractBehaviour_UpdateView_m4689 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Update()
extern "C" void QCARAbstractBehaviour_Update_m4690 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void QCARAbstractBehaviour_OnApplicationPause_m4691 (QCARAbstractBehaviour_t143 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnDisable()
extern "C" void QCARAbstractBehaviour_OnDisable_m4692 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnDestroy()
extern "C" void QCARAbstractBehaviour_OnDestroy_m4693 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void QCARAbstractBehaviour_SetUnityPlayerImplementation_m1011 (QCARAbstractBehaviour_t143 * __this, Object_t * ___implementation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::StartQCAR(System.Boolean,System.Boolean)
extern "C" bool QCARAbstractBehaviour_StartQCAR_m4694 (QCARAbstractBehaviour_t143 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::StopQCAR()
extern "C" bool QCARAbstractBehaviour_StopQCAR_m4695 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateStereoDepth()
extern "C" void QCARAbstractBehaviour_UpdateStereoDepth_m4696 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ProjectionMatricesUpdated()
extern "C" void QCARAbstractBehaviour_ProjectionMatricesUpdated_m4697 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void QCARAbstractBehaviour_ApplyMatrix_m4698 (QCARAbstractBehaviour_t143 * __this, Camera_t15 * ___cam, Matrix4x4_t27  ___inputMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void QCARAbstractBehaviour_UpdateProjection_m4699 (QCARAbstractBehaviour_t143 * __this, int32_t ___orientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void QCARAbstractBehaviour_DeinitRequestedTrackers_m4700 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::CheckSceneScaleFactor()
extern "C" void QCARAbstractBehaviour_CheckSceneScaleFactor_m4701 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::CheckForSurfaceChanges()
extern "C" void QCARAbstractBehaviour_CheckForSurfaceChanges_m4702 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetCameraDeviceMode_m1233 (QCARAbstractBehaviour_t143 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMaximumSimultaneousImageTargets_m1234 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMaximumSimultaneousImageTargets_m1235 (QCARAbstractBehaviour_t143 * __this, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMaximumSimultaneousObjectTargets_m1236 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMaximumSimultaneousObjectTargets_m1237 (QCARAbstractBehaviour_t143 * __this, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetDelayedLoadingObjectTargets_m1238 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetUseDelayedLoadingObjectTargets_m1239 (QCARAbstractBehaviour_t143 * __this, bool ___useDelayedLoading, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetCameraDirection()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetCameraDirection_m1240 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetCameraDirection_m1241 (QCARAbstractBehaviour_t143 * __this, int32_t ___cameraDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoBackgroundReflection Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMirrorVideoBackground()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMirrorVideoBackground_m1242 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMirrorVideoBackground(Vuforia.QCARRenderer/VideoBackgroundReflection)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMirrorVideoBackground_m1243 (QCARAbstractBehaviour_t143 * __this, int32_t ___reflection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::.ctor()
extern "C" void QCARAbstractBehaviour__ctor_m1006 (QCARAbstractBehaviour_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
