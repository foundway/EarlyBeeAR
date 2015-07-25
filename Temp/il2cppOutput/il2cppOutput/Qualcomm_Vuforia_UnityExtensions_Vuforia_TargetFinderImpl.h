#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t808;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t809;
// Vuforia.TargetFinder
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinderImpl/TargetFinderState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_Ta.h"
// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t810  : public TargetFinder_t686
{
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t806  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t808 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t809 * ___mImageTargets_3;
};
