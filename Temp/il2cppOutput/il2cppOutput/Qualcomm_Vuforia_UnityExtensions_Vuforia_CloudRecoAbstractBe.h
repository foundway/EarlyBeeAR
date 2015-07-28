#pragma once
#include <stdint.h>
// Vuforia.ObjectTracker
struct ObjectTracker_t633;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t634;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Vuforia.CloudRecoAbstractBehaviour
struct  CloudRecoAbstractBehaviour_t104  : public MonoBehaviour_t4
{
	// Vuforia.ObjectTracker Vuforia.CloudRecoAbstractBehaviour::mObjectTracker
	ObjectTracker_t633 * ___mObjectTracker_2;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_3;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mInitSuccess
	bool ___mInitSuccess_4;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mCloudRecoStarted
	bool ___mCloudRecoStarted_5;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_6;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.CloudRecoAbstractBehaviour::mHandlers
	List_1_t634 * ___mHandlers_7;
	// System.Boolean Vuforia.CloudRecoAbstractBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_8;
	// System.String Vuforia.CloudRecoAbstractBehaviour::AccessKey
	String_t* ___AccessKey_9;
	// System.String Vuforia.CloudRecoAbstractBehaviour::SecretKey
	String_t* ___SecretKey_10;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::ScanlineColor
	Color_t51  ___ScanlineColor_11;
	// UnityEngine.Color Vuforia.CloudRecoAbstractBehaviour::FeaturePointColor
	Color_t51  ___FeaturePointColor_12;
};
