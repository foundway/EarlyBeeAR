#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
struct List_1_t736;
// UnityEngine.Mesh
struct Mesh_t236;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// Vuforia.TrackableImpl
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"
// Vuforia.SmartTerrainTrackableImpl
struct  SmartTerrainTrackableImpl_t737  : public TrackableImpl_t637
{
	// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::mChildren
	List_1_t736 * ___mChildren_2;
	// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::mMesh
	Mesh_t236 * ___mMesh_3;
	// System.Int32 Vuforia.SmartTerrainTrackableImpl::mMeshRevision
	int32_t ___mMeshRevision_4;
	// Vuforia.QCARManagerImpl/PoseData Vuforia.SmartTerrainTrackableImpl::mLocalPose
	PoseData_t709  ___mLocalPose_5;
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::<Parent>k__BackingField
	Object_t * ___U3CParentU3Ek__BackingField_6;
};
