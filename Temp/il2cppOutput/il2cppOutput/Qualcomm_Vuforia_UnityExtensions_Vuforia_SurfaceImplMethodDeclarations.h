#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SurfaceImpl
struct SurfaceImpl_t739;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// UnityEngine.Mesh
struct Mesh_t236;
// System.Int32[]
struct Int32U5BU5D_t34;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m3594 (SurfaceImpl_t739 * __this, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m3595 (SurfaceImpl_t739 * __this, int32_t ___trackableID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m3596 (SurfaceImpl_t739 * __this, int32_t ___meshRev, Mesh_t236 * ___mesh, Mesh_t236 * ___navMesh, Int32U5BU5D_t34* ___meshBoundaries, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m3597 (SurfaceImpl_t739 * __this, Rect_t62  ___boundingBox, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t236 * SurfaceImpl_GetNavMesh_m3598 (SurfaceImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t34* SurfaceImpl_GetMeshBoundaries_m3599 (SurfaceImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t62  SurfaceImpl_get_BoundingBox_m3600 (SurfaceImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m3601 (SurfaceImpl_t739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
