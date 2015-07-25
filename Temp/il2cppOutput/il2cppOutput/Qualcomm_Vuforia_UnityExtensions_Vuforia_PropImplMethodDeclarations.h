#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.PropImpl
struct PropImpl_t745;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// UnityEngine.Mesh
struct Mesh_t236;
// Vuforia.OrientedBoundingBox3D
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox_0.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void PropImpl__ctor_m3610 (PropImpl_t745 * __this, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C" OrientedBoundingBox3D_t661  PropImpl_get_BoundingBox_m3611 (PropImpl_t745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C" void PropImpl_SetMesh_m3612 (PropImpl_t745 * __this, int32_t ___meshRev, Mesh_t236 * ___mesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C" void PropImpl_SetObb_m3613 (PropImpl_t745 * __this, OrientedBoundingBox3D_t661  ___obb3D, MethodInfo* method) IL2CPP_METHOD_ATTR;
