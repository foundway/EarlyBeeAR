﻿#pragma once
#include <stdint.h>
// Vuforia.ImageTarget
struct ImageTarget_t644;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t820;
// Vuforia.DataSetTrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTrackableBeh.h"
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t122  : public DataSetTrackableBehaviour_t624
{
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_21;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Object_t * ___mImageTarget_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t820 * ___mVirtualButtonBehaviours_23;
};
