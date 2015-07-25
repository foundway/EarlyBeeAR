#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNullWrapper
struct QCARNullWrapper_t777;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t493;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceInitCamera_m4010 (QCARNullWrapper_t777 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceDeinitCamera_m4011 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStartCamera_m4012 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStopCamera_m4013 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNullWrapper_CameraDeviceGetNumVideoModes_m4014 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNullWrapper_CameraDeviceGetVideoMode_m4015 (QCARNullWrapper_t777 * __this, int32_t ___idx, IntPtr_t ___videoMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSelectVideoMode_m4016 (QCARNullWrapper_t777 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFlashTorchMode_m4017 (QCARNullWrapper_t777 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFocusMode_m4018 (QCARNullWrapper_t777 * __this, int32_t ___focusMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetCameraConfiguration_m4019 (QCARNullWrapper_t777 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetFrameFormat_m4020 (QCARNullWrapper_t777 * __this, int32_t ___format, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetExists_m4021 (QCARNullWrapper_t777 * __this, String_t* ___relativePath, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetLoad_m4022 (QCARNullWrapper_t777 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetNumTrackableType_m4023 (QCARNullWrapper_t777 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackablesOfType_m4024 (QCARNullWrapper_t777 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackableName_m4025 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetCreateTrackable_m4026 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t493 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetDestroyTrackable_m4027 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetHasReachedTrackableLimit_m4028 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetCameraThreadID()
extern "C" int32_t QCARNullWrapper_GetCameraThreadID_m4029 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderBuild_m4030 (QCARNullWrapper_t777 * __this, String_t* ___targetName, float ___sceenSizeWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNullWrapper_FrameCounterGetBenchmarkingData_m4031 (QCARNullWrapper_t777 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStartScan_m4032 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStopScan_m4033 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderGetFrameQuality_m4034 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNullWrapper_ImageTargetBuilderGetTrackableSource_m4035 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ImageTargetCreateVirtualButton_m4036 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetDestroyVirtualButton_m4037 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_VirtualButtonGetId_m4038 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetNumVirtualButtons_m4039 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtons_m4040 (QCARNullWrapper_t777 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtonName_m4041 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t493 * ___vbName, int32_t ___nameMaxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_CylinderTargetGetDimensions_m4042 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetSideLength_m4043 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetTopDiameter_m4044 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetBottomDiameter_m4045 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetSetSize_m4046 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetGetSize_m4047 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNullWrapper_ObjectTrackerStart_m4048 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ObjectTrackerStop()
extern "C" void QCARNullWrapper_ObjectTrackerStop_m4049 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNullWrapper_ObjectTrackerCreateDataSet_m4050 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDestroyDataSet_m4051 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerActivateDataSet_m4052 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDeactivateDataSet_m4053 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNullWrapper_ObjectTrackerPersistExtendedTracking_m4054 (QCARNullWrapper_t777 * __this, int32_t ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNullWrapper_ObjectTrackerResetExtendedTracking_m4055 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNullWrapper_MarkerTrackerStart_m4056 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::MarkerTrackerStop()
extern "C" void QCARNullWrapper_MarkerTrackerStop_m4057 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNullWrapper_OnSurfaceChanged_m4058 (QCARNullWrapper_t777 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnPause()
extern "C" void QCARNullWrapper_OnPause_m4059 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnResume()
extern "C" void QCARNullWrapper_OnResume_m4060 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNullWrapper_HasSurfaceBeenRecreated_m4061 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerSetSize_m4062 (QCARNullWrapper_t777 * __this, int32_t ___trackableIndex, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerTrackerCreateMarker_m4063 (QCARNullWrapper_t777 * __this, int32_t ___id, String_t* ___trackableName, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNullWrapper_MarkerTrackerDestroyMarker_m4064 (QCARNullWrapper_t777 * __this, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitPlatformNative()
extern "C" void QCARNullWrapper_InitPlatformNative_m4065 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_InitFrameState_m4066 (QCARNullWrapper_t777 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_DeinitFrameState_m4067 (QCARNullWrapper_t777 * __this, IntPtr_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_UpdateQCAR_m4068 (QCARNullWrapper_t777 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererEnd()
extern "C" void QCARNullWrapper_RendererEnd_m4069 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarGetBufferSize_m4070 (QCARNullWrapper_t777 * __this, int32_t ___width, int32_t ___height, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_QcarAddCameraFrame_m4071 (QCARNullWrapper_t777 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererSetVideoBackgroundCfg_m4072 (QCARNullWrapper_t777 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundCfg_m4073 (QCARNullWrapper_t777 * __this, IntPtr_t ___bgCfg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundTextureInfo_m4074 (QCARNullWrapper_t777 * __this, IntPtr_t ___texInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNullWrapper_RendererSetVideoBackgroundTextureID_m4075 (QCARNullWrapper_t777 * __this, int32_t ___textureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m4076 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetHint_m4077 (QCARNullWrapper_t777 * __this, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_GetProjectionGL_m4078 (QCARNullWrapper_t777 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_SetApplicationEnvironment_m4079 (QCARNullWrapper_t777 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNullWrapper_SetStateBufferSize_m4080 (QCARNullWrapper_t777 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNullWrapper_SmartTerrainTrackerStart_m4081 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNullWrapper_SmartTerrainTrackerStop_m4082 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m4083 (QCARNullWrapper_t777 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerInitBuilder_m4084 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerDeinitBuilder_m4085 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m4086 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m4087 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderAddReconstruction_m4088 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderRemoveReconstruction_m4089 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderDestroyReconstruction_m4090 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStart_m4091 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStop_m4092 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionIsReconstructing_m4093 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionReset_m4094 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNullWrapper_ReconstructionSetNavMeshPadding_m4095 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNullWrapper_ReconstructionFromTargetSetInitializationTarget_m4096 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionSetMaximumArea_m4097 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4098 (QCARNullWrapper_t777 * __this, IntPtr_t ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNullWrapper_TargetFinderStartInit_m4099 (QCARNullWrapper_t777 * __this, String_t* ___userKey, String_t* ___secretKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNullWrapper_TargetFinderGetInitState_m4100 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNullWrapper_TargetFinderDeinit_m4101 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNullWrapper_TargetFinderStartRecognition_m4102 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStop()
extern "C" int32_t QCARNullWrapper_TargetFinderStop_m4103 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIScanlineColor_m4104 (QCARNullWrapper_t777 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIPointColor_m4105 (QCARNullWrapper_t777 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNullWrapper_TargetFinderUpdate_m4106 (QCARNullWrapper_t777 * __this, IntPtr_t ___targetFinderState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_TargetFinderGetResults_m4107 (QCARNullWrapper_t777 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNullWrapper_TargetFinderEnableTracking_m4108 (QCARNullWrapper_t777 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNullWrapper_TargetFinderGetImageTargets_m4109 (QCARNullWrapper_t777 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderClearTrackables()
extern "C" void QCARNullWrapper_TargetFinderClearTrackables_m4110 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerStart()
extern "C" int32_t QCARNullWrapper_TextTrackerStart_m4111 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerStop()
extern "C" void QCARNullWrapper_TextTrackerStop_m4112 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_TextTrackerSetRegionOfInterest_m4113 (QCARNullWrapper_t777 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNullWrapper_TextTrackerGetRegionOfInterest_m4114 (QCARNullWrapper_t777 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadWordList_m4115 (QCARNullWrapper_t777 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListAddWordsFromFile_m4116 (QCARNullWrapper_t777 * __this, String_t* ___path, int32_t ___storagetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordU_m4117 (QCARNullWrapper_t777 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordU_m4118 (QCARNullWrapper_t777 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListContainsWordU_m4119 (QCARNullWrapper_t777 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNullWrapper_WordListUnloadAllLists_m4120 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNullWrapper_WordListSetFilterMode_m4121 (QCARNullWrapper_t777 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNullWrapper_WordListGetFilterMode_m4122 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadFilterList_m4123 (QCARNullWrapper_t777 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordToFilterListU_m4124 (QCARNullWrapper_t777 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordFromFilterListU_m4125 (QCARNullWrapper_t777 * __this, IntPtr_t ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListClearFilterList()
extern "C" int32_t QCARNullWrapper_WordListClearFilterList_m4126 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNullWrapper_WordListGetFilterListWordCount_m4127 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_WordListGetFilterListWordU_m4128 (QCARNullWrapper_t777 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterMask_m4129 (QCARNullWrapper_t777 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterBoundingBoxes_m4130 (QCARNullWrapper_t777 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerInitTracker_m4131 (QCARNullWrapper_t777 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerDeinitTracker_m4132 (QCARNullWrapper_t777 * __this, int32_t ___trackerType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetEnabled_m4133 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetSensitivity_m4134 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetAreaRectangle_m4135 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarInit(System.String)
extern "C" int32_t QCARNullWrapper_QcarInit_m4136 (QCARNullWrapper_t777 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarDeinit()
extern "C" int32_t QCARNullWrapper_QcarDeinit_m4137 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StartExtendedTracking_m4138 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StopExtendedTracking_m4139 (QCARNullWrapper_t777 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNullWrapper_EyewearIsSupportedDeviceDetected_m4140 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSeeThru()
extern "C" bool QCARNullWrapper_EyewearIsSeeThru_m4141 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNullWrapper_EyewearGetScreenOrientation_m4142 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNullWrapper_EyewearIsStereoCapable_m4143 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNullWrapper_EyewearIsStereoEnabled_m4144 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNullWrapper_EyewearIsStereoGLOnly_m4145 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNullWrapper_EyewearSetStereo_m4146 (QCARNullWrapper_t777 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearGetDefaultSceneScale_m4147 (QCARNullWrapper_t777 * __this, IntPtr_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_EyewearGetProjectionMatrix_m4148 (QCARNullWrapper_t777 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetMaxCount_m4149 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetUsedCount_m4150 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMIsProfileUsed_m4151 (QCARNullWrapper_t777 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetActiveProfile_m4152 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMSetActiveProfile_m4153 (QCARNullWrapper_t777 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearCPMGetProjectionMatrix_m4154 (QCARNullWrapper_t777 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProjectionMatrix_m4155 (QCARNullWrapper_t777 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_EyewearCPMGetProfileName_m4156 (QCARNullWrapper_t777 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProfileName_m4157 (QCARNullWrapper_t777 * __this, int32_t ___profileID, IntPtr_t ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMClearProfile_m4158 (QCARNullWrapper_t777 * __this, int32_t ___profileID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorInit_m4159 (QCARNullWrapper_t777 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMinScaleHint_m4160 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m4161 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNullWrapper_EyewearUserCalibratorIsStereoStretched_m4162 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m4163 (QCARNullWrapper_t777 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::.ctor()
extern "C" void QCARNullWrapper__ctor_m4164 (QCARNullWrapper_t777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
