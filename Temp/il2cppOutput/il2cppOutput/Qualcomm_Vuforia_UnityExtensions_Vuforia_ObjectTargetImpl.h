#pragma once
#include <stdint.h>
// Vuforia.DataSetImpl
struct DataSetImpl_t638;
// Vuforia.TrackableImpl
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t639  : public TrackableImpl_t637
{
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t5  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t638 * ___mDataSet_3;
};
