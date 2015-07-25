#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t737;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t738;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t236;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl__ctor_m3583 (SmartTerrainTrackableImpl_t737 * __this, String_t* ___name, int32_t ___id, Object_t * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C" Object_t* SmartTerrainTrackableImpl_get_Children_m3584 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C" int32_t SmartTerrainTrackableImpl_get_MeshRevision_m3585 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C" Object_t * SmartTerrainTrackableImpl_get_Parent_m3586 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_set_Parent_m3587 (SmartTerrainTrackableImpl_t737 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C" Mesh_t236 * SmartTerrainTrackableImpl_GetMesh_m3588 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C" Vector3_t5  SmartTerrainTrackableImpl_get_LocalPosition_m3589 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.QCARManagerImpl/PoseData)
extern "C" void SmartTerrainTrackableImpl_SetLocalPose_m3590 (SmartTerrainTrackableImpl_t737 * __this, PoseData_t709  ___localPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C" void SmartTerrainTrackableImpl_DestroyMesh_m3591 (SmartTerrainTrackableImpl_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_AddChild_m3592 (SmartTerrainTrackableImpl_t737 * __this, Object_t * ___newChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C" void SmartTerrainTrackableImpl_RemoveChild_m3593 (SmartTerrainTrackableImpl_t737 * __this, Object_t * ___removedChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
