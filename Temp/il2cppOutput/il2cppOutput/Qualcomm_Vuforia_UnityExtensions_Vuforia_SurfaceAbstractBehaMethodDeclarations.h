#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t149;
// Vuforia.Surface
struct Surface_t115;
// UnityEngine.MeshFilter
struct MeshFilter_t233;
// UnityEngine.MeshCollider
struct MeshCollider_t653;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;

// Vuforia.Surface Vuforia.SurfaceAbstractBehaviour::get_Surface()
extern "C" Object_t * SurfaceAbstractBehaviour_get_Surface_m3322 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void SurfaceAbstractBehaviour_InternalUnregisterTrackable_m1266 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.InitializeSurface(Vuforia.Surface)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_InitializeSurface_m1269 (SurfaceAbstractBehaviour_t149 * __this, Object_t * ___surface, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshFilterToUpdate_m1270 (SurfaceAbstractBehaviour_t149 * __this, MeshFilter_t233 * ___meshFilterToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t233 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshFilterToUpdate_m1271 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshColliderToUpdate_m1272 (SurfaceAbstractBehaviour_t149 * __this, MeshCollider_t653 * ___meshColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t653 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshColliderToUpdate_m1273 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::.ctor()
extern "C" void SurfaceAbstractBehaviour__ctor_m1016 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1262 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1263 (SurfaceAbstractBehaviour_t149 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1264 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1265 (SurfaceAbstractBehaviour_t149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
