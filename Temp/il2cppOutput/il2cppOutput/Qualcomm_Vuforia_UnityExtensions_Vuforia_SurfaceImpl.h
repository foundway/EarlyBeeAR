#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t236;
// System.Int32[]
struct Int32U5BU5D_t34;
// Vuforia.SmartTerrainTrackableImpl
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackab_0.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.SurfaceImpl
struct  SurfaceImpl_t739  : public SmartTerrainTrackableImpl_t737
{
	// UnityEngine.Mesh Vuforia.SurfaceImpl::mNavMesh
	Mesh_t236 * ___mNavMesh_7;
	// System.Int32[] Vuforia.SurfaceImpl::mMeshBoundaries
	Int32U5BU5D_t34* ___mMeshBoundaries_8;
	// UnityEngine.Rect Vuforia.SurfaceImpl::mBoundingBox
	Rect_t62  ___mBoundingBox_9;
	// System.Single Vuforia.SurfaceImpl::mSurfaceArea
	float ___mSurfaceArea_10;
	// System.Boolean Vuforia.SurfaceImpl::mAreaNeedsUpdate
	bool ___mAreaNeedsUpdate_11;
};
