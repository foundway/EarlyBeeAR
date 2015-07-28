#pragma once
#include <stdint.h>
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// UnityEngine.MeshFilter
struct MeshFilter_t233;
// UnityEngine.MeshCollider
struct MeshCollider_t653;
// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t654  : public TrackableBehaviour_t116
{
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Object_t * ___mSmartTerrainTrackable_9;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_10;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t233 * ___mMeshFilterToUpdate_11;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t653 * ___mMeshColliderToUpdate_12;
};
