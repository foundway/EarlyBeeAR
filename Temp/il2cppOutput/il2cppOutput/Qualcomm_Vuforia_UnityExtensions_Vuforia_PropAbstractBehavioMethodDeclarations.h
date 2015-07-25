#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t141;
// Vuforia.Prop
struct Prop_t114;
// UnityEngine.MeshFilter
struct MeshFilter_t233;
// UnityEngine.MeshCollider
struct MeshCollider_t653;
// UnityEngine.BoxCollider
struct BoxCollider_t794;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C" Object_t * PropAbstractBehaviour_get_Prop_m4532 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C" void PropAbstractBehaviour_UpdateMeshAndColliders_m1224 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C" void PropAbstractBehaviour_Start_m1225 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void PropAbstractBehaviour_InternalUnregisterTrackable_m1223 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m1226 (PropAbstractBehaviour_t141 * __this, Object_t * ___prop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m1227 (PropAbstractBehaviour_t141 * __this, MeshFilter_t233 * ___meshFilterToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t233 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m1228 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m1229 (PropAbstractBehaviour_t141 * __this, MeshCollider_t653 * ___meshColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t653 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m1230 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m1231 (PropAbstractBehaviour_t141 * __this, BoxCollider_t794 * ___boxColliderToUpdate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C" BoxCollider_t794 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m1232 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C" void PropAbstractBehaviour__ctor_m1005 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1219 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1220 (PropAbstractBehaviour_t141 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1221 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1222 (PropAbstractBehaviour_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
