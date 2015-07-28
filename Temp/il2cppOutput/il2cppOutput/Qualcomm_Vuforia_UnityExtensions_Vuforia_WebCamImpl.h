#pragma once
#include <stdint.h>
// UnityEngine.Camera[]
struct CameraU5BU5D_t235;
// System.Int32[]
struct Int32U5BU5D_t34;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t698;
// Vuforia.TextureRenderer
struct TextureRenderer_t812;
// UnityEngine.Texture2D
struct Texture2D_t368;
// System.Object
#include "mscorlib_System_Object.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"
// Vuforia.WebCamImpl
struct  WebCamImpl_t674  : public Object_t
{
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t235* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t34* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t698 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t630  ___mVideoModeData_3;
	// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t616  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t812 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t368 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t62  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t817  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;
};
