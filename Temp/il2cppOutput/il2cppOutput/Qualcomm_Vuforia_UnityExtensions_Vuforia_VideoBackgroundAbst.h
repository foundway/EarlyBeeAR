﻿#pragma once
#include <stdint.h>
// Vuforia.QCARAbstractBehaviour
struct QCARAbstractBehaviour_t143;
// UnityEngine.Camera
struct Camera_t15;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t102;
// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>
struct HashSet_1_t839;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.VideoBackgroundAbstractBehaviour
struct  VideoBackgroundAbstractBehaviour_t156  : public MonoBehaviour_t4
{
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mClearBuffers
	int32_t ___mClearBuffers_2;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mSkipStateUpdates
	int32_t ___mSkipStateUpdates_3;
	// Vuforia.QCARAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mQCARAbstractBehaviour
	QCARAbstractBehaviour_t143 * ___mQCARAbstractBehaviour_4;
	// UnityEngine.Camera Vuforia.VideoBackgroundAbstractBehaviour::mCamera
	Camera_t15 * ___mCamera_5;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mBackgroundBehaviour
	BackgroundPlaneAbstractBehaviour_t102 * ___mBackgroundBehaviour_6;
	// System.Single Vuforia.VideoBackgroundAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer> Vuforia.VideoBackgroundAbstractBehaviour::mDisabledMeshRenderers
	HashSet_1_t839 * ___mDisabledMeshRenderers_8;
	// System.Boolean Vuforia.VideoBackgroundAbstractBehaviour::<VideoBackGroundMirrored>k__BackingField
	bool ___U3CVideoBackGroundMirroredU3Ek__BackingField_9;
};
