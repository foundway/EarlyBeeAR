#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t144;
// Vuforia.Reconstruction
struct Reconstruction_t648;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t789;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t784;
// System.Action`1<Vuforia.Prop>
struct Action_1_t217;
// System.Action`1<Vuforia.Surface>
struct Action_1_t218;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t141;
// Vuforia.Prop
struct Prop_t114;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t149;
// Vuforia.Surface
struct Surface_t115;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t790;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t791;
// Vuforia.QCARManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t742;
// Vuforia.QCARManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t743;
// Vuforia.QCARManagerImpl/PropData[]
struct PropDataU5BU5D_t744;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t652;
// UnityEngine.Mesh
struct Mesh_t236;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t792;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t793;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.QCARManagerImpl/MeshData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Mes.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C" Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m4494 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C" void ReconstructionAbstractBehaviour_Start_m4495 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C" void ReconstructionAbstractBehaviour_OnDrawGizmos_m4496 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m4497 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C" bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m4498 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m4499 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t784 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m4500 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t784 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m952 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m955 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m4501 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m4502 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m4503 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m4504 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t217 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m954 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m956 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m4505 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m4506 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m4507 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m4508 (ReconstructionAbstractBehaviour_t144 * __this, Action_1_t218 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C" PropAbstractBehaviour_t141 * ReconstructionAbstractBehaviour_AssociateProp_m957 (ReconstructionAbstractBehaviour_t144 * __this, PropAbstractBehaviour_t141 * ___templateBehaviour, Object_t * ___newProp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C" SurfaceAbstractBehaviour_t149 * ReconstructionAbstractBehaviour_AssociateSurface_m958 (ReconstructionAbstractBehaviour_t144 * __this, SurfaceAbstractBehaviour_t149 * ___templateBehaviour, Object_t * ___newSurface, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m4509 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m4510 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___prop, PropAbstractBehaviour_t141 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C" Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m4511 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C" bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m4512 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t149 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C" void ReconstructionAbstractBehaviour_Initialize_m4513 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C" void ReconstructionAbstractBehaviour_Deinitialize_m4514 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m4515 (ReconstructionAbstractBehaviour_t144 * __this, SmartTerrainRevisionDataU5BU5D_t742* ___smartTerrainRevisions, SurfaceDataU5BU5D_t743* ___updatedSurfaces, PropDataU5BU5D_t744* ___updatedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C" void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m4516 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C" void ReconstructionAbstractBehaviour_ClearOnReset_m4517 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C" void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m4518 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C" PropAbstractBehaviour_t141 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m4519 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t141 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m4520 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___trackable, PropAbstractBehaviour_t141 * ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C" SurfaceAbstractBehaviour_t149 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m4521 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t149 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C" void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m4522 (ReconstructionAbstractBehaviour_t144 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t149 * ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C" Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m4523 (ReconstructionAbstractBehaviour_t144 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m4524 (ReconstructionAbstractBehaviour_t144 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m4525 (ReconstructionAbstractBehaviour_t144 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.ReconstructionAbstractBehaviour::UpdateMesh(Vuforia.QCARManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean)
extern "C" Mesh_t236 * ReconstructionAbstractBehaviour_UpdateMesh_m4526 (Object_t * __this /* static, unused */, MeshData_t717  ___meshData, Mesh_t236 * ___oldMesh, bool ___setNormalsUpwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C" Int32U5BU5D_t34* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m4527 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m4528 (ReconstructionAbstractBehaviour_t144 * __this, List_1_t792 * ___deletedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C" void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m4529 (ReconstructionAbstractBehaviour_t144 * __this, List_1_t793 * ___deletedSurfaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateSurfaces_m4530 (ReconstructionAbstractBehaviour_t144 * __this, SmartTerrainRevisionDataU5BU5D_t742* ___smartTerrainRevisions, SurfaceDataU5BU5D_t743* ___updatedSurfaceData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void ReconstructionAbstractBehaviour_UpdateProps_m4531 (ReconstructionAbstractBehaviour_t144 * __this, SmartTerrainRevisionDataU5BU5D_t742* ___smartTerrainRevisions, PropDataU5BU5D_t744* ___updatedPropData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m1244 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m1245 (ReconstructionAbstractBehaviour_t144 * __this, bool ___initializedInEditor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m1246 (ReconstructionAbstractBehaviour_t144 * __this, bool ___maxExtendEnabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m1247 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m1248 (ReconstructionAbstractBehaviour_t144 * __this, Rect_t62  ___rectangle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C" Rect_t62  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m1249 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m1250 (ReconstructionAbstractBehaviour_t144 * __this, bool ___autoStart, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m1251 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m1252 (ReconstructionAbstractBehaviour_t144 * __this, bool ___navMeshUpdates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C" bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m1253 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m1254 (ReconstructionAbstractBehaviour_t144 * __this, float ___navMeshPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C" float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m1255 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m1256 (ReconstructionAbstractBehaviour_t144 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C" void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m1257 (ReconstructionAbstractBehaviour_t144 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C" void ReconstructionAbstractBehaviour__ctor_m1013 (ReconstructionAbstractBehaviour_t144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
