﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t146;
// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t624  : public TrackableBehaviour_t116
{
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_9;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mInitializeSmartTerrain
	bool ___mInitializeSmartTerrain_11;
	// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::mReconstructionToInitialize
	ReconstructionFromTargetAbstractBehaviour_t146 * ___mReconstructionToInitialize_12;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMin
	Vector3_t5  ___mSmartTerrainOccluderBoundsMin_13;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMax
	Vector3_t5  ___mSmartTerrainOccluderBoundsMax_14;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mIsSmartTerrainOccluderOffset
	bool ___mIsSmartTerrainOccluderOffset_15;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderOffset
	Vector3_t5  ___mSmartTerrainOccluderOffset_16;
	// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderRotation
	Quaternion_t10  ___mSmartTerrainOccluderRotation_17;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderLockedInPlace
	bool ___mSmartTerrainOccluderLockedInPlace_18;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mAutoSetOccluderFromTargetSize
	bool ___mAutoSetOccluderFromTargetSize_19;
};
