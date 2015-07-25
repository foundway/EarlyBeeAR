﻿#pragma once
#include <stdint.h>
// Vuforia.Word
struct Word_t762;
// Vuforia.WordResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordResult.h"
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
// Vuforia.WordResultImpl
struct  WordResultImpl_t774  : public WordResult_t773
{
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t660  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t5  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t10  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	Object_t * ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;
};
