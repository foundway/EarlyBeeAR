#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNativeIosWrapper
struct QCARNativeIosWrapper_t776;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t493;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceInitCamera_m3701 (QCARNativeIosWrapper_t776 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceDeinitCamera_m3702 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStartCamera_m3703 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStopCamera_m3704 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceGetNumVideoModes_m3705 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_CameraDeviceGetVideoMode_m3706 (QCARNativeIosWrapper_t776 * __this, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSelectVideoMode_m3707 (QCARNativeIosWrapper_t776 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFlashTorchMode_m3708 (QCARNativeIosWrapper_t776 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFocusMode_m3709 (QCARNativeIosWrapper_t776 * __this, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetCameraConfiguration_m3710 (QCARNativeIosWrapper_t776 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetFrameFormat_m3711 (QCARNativeIosWrapper_t776 * __this, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetExists_m3712 (QCARNativeIosWrapper_t776 * __this, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetLoad_m3713 (QCARNativeIosWrapper_t776 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetNumTrackableType_m3714 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackablesOfType_m3715 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackableName_m3716 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetCreateTrackable_m3717 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetDestroyTrackable_m3718 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetHasReachedTrackableLimit_m3719 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_GetCameraThreadID_m3720 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderBuild_m3721 (QCARNativeIosWrapper_t776 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_FrameCounterGetBenchmarkingData_m3722 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStartScan_m3723 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStopScan_m3724 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m3725 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m3726 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetCreateVirtualButton_m3727 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetDestroyVirtualButton_m3728 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonGetId_m3729 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetNumVirtualButtons_m3730 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtons_m3731 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtonName_m3732 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t493 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetGetDimensions_m3733 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetSideLength_m3734 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetTopDiameter_m3735 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetBottomDiameter_m3736 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetSetSize_m3737 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetGetSize_m3738 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerStart_m3739 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ObjectTrackerStop()
extern "C" void QCARNativeIosWrapper_ObjectTrackerStop_m3740 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_ObjectTrackerCreateDataSet_m3741 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDestroyDataSet_m3742 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerActivateDataSet_m3743 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDeactivateDataSet_m3744 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m3745 (QCARNativeIosWrapper_t776 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerResetExtendedTracking_m3746 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerSetSize_m3747 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerStart_m3748 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::MarkerTrackerStop()
extern "C" void QCARNativeIosWrapper_MarkerTrackerStop_m3749 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerCreateMarker_m3750 (QCARNativeIosWrapper_t776 * __this, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerDestroyMarker_m3751 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitPlatformNative()
extern "C" void QCARNativeIosWrapper_InitPlatformNative_m3752 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_InitFrameState_m3753 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_DeinitFrameState_m3754 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_OnSurfaceChanged_m3755 (QCARNativeIosWrapper_t776 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnPause()
extern "C" void QCARNativeIosWrapper_OnPause_m3756 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnResume()
extern "C" void QCARNativeIosWrapper_OnResume_m3757 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_HasSurfaceBeenRecreated_m3758 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_UpdateQCAR_m3759 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererEnd()
extern "C" void QCARNativeIosWrapper_RendererEnd_m3760 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarGetBufferSize_m3761 (QCARNativeIosWrapper_t776 * __this, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_QcarAddCameraFrame_m3762 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererSetVideoBackgroundCfg_m3763 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundCfg_m3764 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3765 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_RendererSetVideoBackgroundTextureID_m3766 (QCARNativeIosWrapper_t776 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3767 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetHint_m3768 (QCARNativeIosWrapper_t776 * __this, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_GetProjectionGL_m3769 (QCARNativeIosWrapper_t776 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_SetApplicationEnvironment_m3770 (QCARNativeIosWrapper_t776 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_SetStateBufferSize_m3771 (QCARNativeIosWrapper_t776 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_SmartTerrainTrackerStart_m3772 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_SmartTerrainTrackerStop_m3773 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3774 (QCARNativeIosWrapper_t776 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerInitBuilder_m3775 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m3776 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3777 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3778 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m3779 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m3780 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m3781 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStart_m3782 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStop_m3783 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionIsReconstructing_m3784 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionReset_m3785 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_ReconstructionSetNavMeshPadding_m3786 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m3787 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionSetMaximumArea_m3788 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3789 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartInit_m3790 (QCARNativeIosWrapper_t776 * __this, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetInitState_m3791 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderDeinit_m3792 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartRecognition_m3793 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStop_m3794 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIScanlineColor_m3795 (QCARNativeIosWrapper_t776 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIPointColor_m3796 (QCARNativeIosWrapper_t776 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_TargetFinderUpdate_m3797 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetResults_m3798 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderEnableTracking_m3799 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_TargetFinderGetImageTargets_m3800 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_TargetFinderClearTrackables_m3801 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_TextTrackerStart_m3802 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerStop()
extern "C" void QCARNativeIosWrapper_TextTrackerStop_m3803 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TextTrackerSetRegionOfInterest_m3804 (QCARNativeIosWrapper_t776 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNativeIosWrapper_TextTrackerGetRegionOfInterest_m3805 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadWordList_m3806 (QCARNativeIosWrapper_t776 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordsFromFile_m3807 (QCARNativeIosWrapper_t776 * __this, String_t* ___path, int32_t ___storagetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordU_m3808 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordU_m3809 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListContainsWordU_m3810 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_WordListUnloadAllLists_m3811 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListSetFilterMode_m3812 (QCARNativeIosWrapper_t776 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterMode_m3813 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadFilterList_m3814 (QCARNativeIosWrapper_t776 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordToFilterListU_m3815 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordFromFilterListU_m3816 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_WordListClearFilterList_m3817 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterListWordCount_m3818 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_WordListGetFilterListWordU_m3819 (QCARNativeIosWrapper_t776 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterMask_m3820 (QCARNativeIosWrapper_t776 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterBoundingBoxes_m3821 (QCARNativeIosWrapper_t776 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerInitTracker_m3822 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerDeinitTracker_m3823 (QCARNativeIosWrapper_t776 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetEnabled_m3824 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetSensitivity_m3825 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetAreaRectangle_m3826 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_QcarInit_m3827 (QCARNativeIosWrapper_t776 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_QcarDeinit_m3828 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StartExtendedTracking_m3829 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StopExtendedTracking_m3830 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNativeIosWrapper_EyewearIsSupportedDeviceDetected_m3831 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSeeThru()
extern "C" bool QCARNativeIosWrapper_EyewearIsSeeThru_m3832 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_EyewearGetScreenOrientation_m3833 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoCapable_m3834 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoEnabled_m3835 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoGLOnly_m3836 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNativeIosWrapper_EyewearSetStereo_m3837 (QCARNativeIosWrapper_t776 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetDefaultSceneScale_m3838 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetProjectionMatrix_m3839 (QCARNativeIosWrapper_t776 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetMaxCount_m3840 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetUsedCount_m3841 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMIsProfileUsed_m3842 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetActiveProfile_m3843 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetActiveProfile_m3844 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetProjectionMatrix_m3845 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProjectionMatrix_m3846 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_EyewearCPMGetProfileName_m3847 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProfileName_m3848 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMClearProfile_m3849 (QCARNativeIosWrapper_t776 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorInit_m3850 (QCARNativeIosWrapper_t776 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m3851 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m3852 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m3853 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m3854 (QCARNativeIosWrapper_t776 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_smartTerrainTrackerStart_m3855 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_smartTerrainTrackerStop_m3856 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m3857 (Object_t * __this /* static, unused */, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerInitBuilder_m3858 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m3859 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m3860 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3861 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderAddReconstruction_m3862 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m3863 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3864 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStart_m3865 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStop_m3866 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionIsReconstructing_m3867 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionReset_m3868 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_reconstructionSetNavMeshPadding_m3869 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m3870 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionSetMaximumArea_m3871 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m3872 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceInitCamera_m3873 (Object_t * __this /* static, unused */, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceDeinitCamera_m3874 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStartCamera_m3875 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStopCamera_m3876 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceGetNumVideoModes_m3877 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_cameraDeviceGetVideoMode_m3878 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSelectVideoMode_m3879 (Object_t * __this /* static, unused */, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFlashTorchMode_m3880 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFocusMode_m3881 (Object_t * __this /* static, unused */, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3882 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetFrameFormat_m3883 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetExists_m3884 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetLoad_m3885 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetNumTrackableType_m3886 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackablesOfType_m3887 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackableName_m3888 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetCreateTrackable_m3889 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetDestroyTrackable_m3890 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetHasReachedTrackableLimit_m3891 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_getCameraThreadID_m3892 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderBuild_m3893 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_frameCounterGetBenchmarkingData_m3894 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStartScan_m3895 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStopScan_m3896 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3897 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_imageTargetBuilderGetTrackableSource_m3898 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_imageTargetCreateVirtualButton_m3899 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetDestroyVirtualButton_m3900 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonGetId_m3901 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetNumVirtualButtons_m3902 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtons_m3903 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtonName_m3904 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t493 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetGetDimensions_m3905 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetSideLength_m3906 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetTopDiameter_m3907 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetBottomDiameter_m3908 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetSetSize_m3909 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetGetSize_m3910 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerStart_m3911 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::objectTrackerStop()
extern "C" void QCARNativeIosWrapper_objectTrackerStop_m3912 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_objectTrackerCreateDataSet_m3913 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDestroyDataSet_m3914 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerActivateDataSet_m3915 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDeactivateDataSet_m3916 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerPersistExtendedTracking_m3917 (Object_t * __this /* static, unused */, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerResetExtendedTracking_m3918 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerSetSize_m3919 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_markerTrackerStart_m3920 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::markerTrackerStop()
extern "C" void QCARNativeIosWrapper_markerTrackerStop_m3921 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerCreateMarker_m3922 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerDestroyMarker_m3923 (Object_t * __this /* static, unused */, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initPlatformNative()
extern "C" void QCARNativeIosWrapper_initPlatformNative_m3924 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_initFrameState_m3925 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_deinitFrameState_m3926 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_onSurfaceChanged_m3927 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onPause()
extern "C" void QCARNativeIosWrapper_onPause_m3928 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onResume()
extern "C" void QCARNativeIosWrapper_onResume_m3929 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_hasSurfaceBeenRecreated_m3930 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_updateQCAR_m3931 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererEnd()
extern "C" void QCARNativeIosWrapper_rendererEnd_m3932 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarGetBufferSize_m3933 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_qcarAddCameraFrame_m3934 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererSetVideoBackgroundCfg_m3935 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundCfg_m3936 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3937 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_rendererSetVideoBackgroundTextureID_m3938 (Object_t * __this /* static, unused */, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m3939 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_qcarInit_m3940 (Object_t * __this /* static, unused */, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetHint_m3941 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_getProjectionGL_m3942 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_setApplicationEnvironment_m3943 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_setStateBufferSize_m3944 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartInit_m3945 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetInitState_m3946 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_targetFinderDeinit_m3947 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartRecognition_m3948 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStop_m3949 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIScanlineColor_m3950 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIPointColor_m3951 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_targetFinderUpdate_m3952 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetResults_m3953 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_targetFinderEnableTracking_m3954 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_targetFinderGetImageTargets_m3955 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_targetFinderClearTrackables_m3956 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_textTrackerStart_m3957 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::textTrackerStop()
extern "C" void QCARNativeIosWrapper_textTrackerStop_m3958 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_textTrackerSetRegionOfInterest_m3959 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_textTrackerGetRegionOfInterest_m3960 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadWordList_m3961 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordsFromFile_m3962 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordU_m3963 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordU_m3964 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListContainsWordU_m3965 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_wordListUnloadAllLists_m3966 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListSetFilterMode_m3967 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterMode_m3968 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordToFilterListU_m3969 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordFromFilterListU_m3970 (Object_t * __this /* static, unused */, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_wordListClearFilterList_m3971 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadFilterList_m3972 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterListWordCount_m3973 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_wordListGetFilterListWordU_m3974 (Object_t * __this /* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterMask_m3975 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterBoundingBoxes_m3976 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerInitTracker_m3977 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerDeinitTracker_m3978 (Object_t * __this /* static, unused */, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetEnabled_m3979 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetSensitivity_m3980 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetAreaRectangle_m3981 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_qcarDeinit_m3982 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_startExtendedTracking_m3983 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_stopExtendedTracking_m3984 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSupportedDeviceDetected()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSupportedDeviceDetected_m3985 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSeeThru()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSeeThru_m3986 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_eyewearGetScreenOrientation_m3987 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoCapable()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoCapable_m3988 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoEnabled()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoEnabled_m3989 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoGLOnly_m3990 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t QCARNativeIosWrapper_eyewearSetStereo_m3991 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetDefaultSceneScale_m3992 (Object_t * __this /* static, unused */, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetProjectionMatrix_m3993 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetMaxCount_m3994 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetUsedCount_m3995 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMIsProfileUsed_m3996 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetActiveProfile_m3997 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetActiveProfile_m3998 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetProjectionMatrix_m3999 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProjectionMatrix_m4000 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_eyewearCPMGetProfileName_m4001 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProfileName_m4002 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMClearProfile_m4003 (Object_t * __this /* static, unused */, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorInit_m4004 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m4005 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m4006 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m4007 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m4008 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::.ctor()
extern "C" void QCARNativeIosWrapper__ctor_m4009 (QCARNativeIosWrapper_t776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
