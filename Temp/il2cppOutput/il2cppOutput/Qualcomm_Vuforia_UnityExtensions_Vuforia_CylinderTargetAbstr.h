﻿#pragma once
#include <stdint.h>
// Vuforia.CylinderTarget
struct CylinderTarget_t643;
// Vuforia.DataSetTrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTrackableBeh.h"
// Vuforia.CylinderTargetAbstractBehaviour
struct  CylinderTargetAbstractBehaviour_t106  : public DataSetTrackableBehaviour_t624
{
	// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::mCylinderTarget
	Object_t * ___mCylinderTarget_20;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mTopDiameterRatio
	float ___mTopDiameterRatio_21;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mBottomDiameterRatio
	float ___mBottomDiameterRatio_22;
	// System.Int32 Vuforia.CylinderTargetAbstractBehaviour::mFrameIndex
	int32_t ___mFrameIndex_23;
	// System.Int32 Vuforia.CylinderTargetAbstractBehaviour::mUpdateFrameIndex
	int32_t ___mUpdateFrameIndex_24;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mFutureScale
	float ___mFutureScale_25;
};