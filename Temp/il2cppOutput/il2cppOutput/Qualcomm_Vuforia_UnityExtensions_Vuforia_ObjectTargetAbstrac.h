﻿#pragma once
#include <stdint.h>
// Vuforia.ObjectTarget
struct ObjectTarget_t626;
// UnityEngine.Texture2D
struct Texture2D_t368;
// Vuforia.DataSetTrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTrackableBeh.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Vuforia.ObjectTargetAbstractBehaviour
struct  ObjectTargetAbstractBehaviour_t134  : public DataSetTrackableBehaviour_t624
{
	// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::mObjectTarget
	Object_t * ___mObjectTarget_20;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_21;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_22;
	// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMin
	Vector3_t5  ___mBBoxMin_24;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMax
	Vector3_t5  ___mBBoxMax_25;
	// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::mPreviewImage
	Texture2D_t368 * ___mPreviewImage_26;
};
