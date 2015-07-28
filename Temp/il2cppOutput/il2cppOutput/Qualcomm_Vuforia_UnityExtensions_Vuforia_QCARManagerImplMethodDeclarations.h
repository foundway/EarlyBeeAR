#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl
struct QCARManagerImpl_t728;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t271;
// UnityEngine.Transform
struct Transform_t2;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t729;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARManagerImpl/FrameState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Fra.h"

// System.Void Vuforia.QCARManagerImpl::set_WorldCenterMode(Vuforia.QCARAbstractBehaviour/WorldCenterMode)
extern "C" void QCARManagerImpl_set_WorldCenterMode_m3532 (QCARManagerImpl_t728 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARManagerImpl::get_WorldCenterMode()
extern "C" int32_t QCARManagerImpl_get_WorldCenterMode_m3533 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void QCARManagerImpl_set_WorldCenter_m3534 (QCARManagerImpl_t728 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.QCARManagerImpl::get_WorldCenter()
extern "C" Object_t * QCARManagerImpl_get_WorldCenter_m3535 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void QCARManagerImpl_set_ARCameraTransform_m3536 (QCARManagerImpl_t728 * __this, Transform_t2 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.QCARManagerImpl::get_ARCameraTransform()
extern "C" Transform_t2 * QCARManagerImpl_get_ARCameraTransform_m3537 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_Initialized()
extern "C" bool QCARManagerImpl_get_Initialized_m3538 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARManagerImpl::get_QCARFrameIndex()
extern "C" int32_t QCARManagerImpl_get_QCARFrameIndex_m3539 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void QCARManagerImpl_set_VideoBackgroundTextureSet_m3540 (QCARManagerImpl_t728 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool QCARManagerImpl_get_VideoBackgroundTextureSet_m3541 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Init()
extern "C" bool QCARManagerImpl_Init_m3542 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Deinit()
extern "C" void QCARManagerImpl_Deinit_m3543 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Update(UnityEngine.ScreenOrientation)
extern "C" bool QCARManagerImpl_Update_m3544 (QCARManagerImpl_t728 * __this, int32_t ___counterRotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::StartRendering()
extern "C" void QCARManagerImpl_StartRendering_m3545 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::FinishRendering()
extern "C" void QCARManagerImpl_FinishRendering_m3546 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Pause(System.Boolean)
extern "C" void QCARManagerImpl_Pause_m3547 (QCARManagerImpl_t728 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::SetStatesToDiscard()
extern "C" void QCARManagerImpl_SetStatesToDiscard_m3548 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void QCARManagerImpl_InitializeTrackableContainer_m3549 (QCARManagerImpl_t728 * __this, int32_t ___numTrackableResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackers(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateTrackers_m3550 (QCARManagerImpl_t728 * __this, FrameState_t721  ___frameState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateSmartTerrain(Vuforia.QCARManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void QCARManagerImpl_UpdateSmartTerrain_m3551 (QCARManagerImpl_t728 * __this, FrameState_t721  ___frameState, StateManagerImpl_t729 * ___stateManager, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackablesEditor()
extern "C" void QCARManagerImpl_UpdateTrackablesEditor_m3552 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateWordTrackables(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateWordTrackables_m3553 (QCARManagerImpl_t728 * __this, FrameState_t721  ___frameState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateImageContainer()
extern "C" void QCARManagerImpl_UpdateImageContainer_m3554 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateCameraFrame()
extern "C" void QCARManagerImpl_UpdateCameraFrame_m3555 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InjectCameraFrame()
extern "C" void QCARManagerImpl_InjectCameraFrame_m3556 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::.ctor()
extern "C" void QCARManagerImpl__ctor_m3557 (QCARManagerImpl_t728 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
