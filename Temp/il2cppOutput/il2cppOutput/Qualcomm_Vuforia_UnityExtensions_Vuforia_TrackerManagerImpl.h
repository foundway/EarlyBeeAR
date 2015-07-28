#pragma once
#include <stdint.h>
// Vuforia.ObjectTracker
struct ObjectTracker_t633;
// Vuforia.MarkerTracker
struct MarkerTracker_t692;
// Vuforia.TextTracker
struct TextTracker_t748;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t746;
// Vuforia.StateManager
struct StateManager_t795;
// Vuforia.TrackerManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"
// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t814  : public TrackerManager_t813
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t633 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t692 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t748 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t746 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t795 * ___mStateManager_5;
};
