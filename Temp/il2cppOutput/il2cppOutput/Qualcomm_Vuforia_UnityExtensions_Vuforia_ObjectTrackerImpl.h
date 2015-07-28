#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t688;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t689;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t671;
// Vuforia.TargetFinder
struct TargetFinder_t686;
// Vuforia.ObjectTracker
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"
// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t690  : public ObjectTracker_t633
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t688 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t689 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t671 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t686 * ___mTargetFinder_4;
};
