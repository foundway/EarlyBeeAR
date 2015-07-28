#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.StateManagerImpl
struct StateManagerImpl_t729;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t796;
// Vuforia.WordManager
struct WordManager_t759;
// Vuforia.Trackable
struct Trackable_t622;
// Vuforia.DataSet
struct DataSet_t640;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t116;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t122;
// Vuforia.ImageTarget
struct ImageTarget_t644;
// UnityEngine.GameObject
struct GameObject_t7;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t130;
// Vuforia.Marker
struct Marker_t693;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t727;
// UnityEngine.Transform
struct Transform_t2;
// Vuforia.QCARManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t724;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t725;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t726;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t800;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t131;
// Vuforia.MultiTarget
struct MultiTarget_t645;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t106;
// Vuforia.CylinderTarget
struct CylinderTarget_t643;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t134;
// Vuforia.ObjectTarget
struct ObjectTarget_t626;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/PoseData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pos.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m4534 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m4535 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t759 * StateManagerImpl_GetWordManager_m4536 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m4537 (StateManagerImpl_t729 * __this, Object_t * ___trackable, bool ___destroyGameObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m4538 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m4539 (StateManagerImpl_t729 * __this, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m4540 (StateManagerImpl_t729 * __this, TrackableBehaviour_t116 * ___trackableBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m4541 (StateManagerImpl_t729 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m4542 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m4543 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t122 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m4544 (StateManagerImpl_t729 * __this, Object_t * ___trackable, GameObject_t7 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t122 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m4545 (StateManagerImpl_t729 * __this, Object_t * ___trackable, GameObject_t7 * ___gameObject, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t130 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m4546 (StateManagerImpl_t729 * __this, Object_t * ___trackable, String_t* ___gameObjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t130 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m4547 (StateManagerImpl_t729 * __this, Object_t * ___trackable, GameObject_t7 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m4548 (StateManagerImpl_t729 * __this, Object_t * ___trackable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m4549 (StateManagerImpl_t729 * __this, Object_t * ___trackable, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m4550 (StateManagerImpl_t729 * __this, LinkedList_1_t727 ** ___trackableIDs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m4551 (StateManagerImpl_t729 * __this, Transform_t2 * ___arCameraTransform, TrackableResultDataU5BU5D_t724* ___trackableResultDataArray, int32_t ___originTrackableID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.QCARManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m4552 (StateManagerImpl_t729 * __this, Transform_t2 * ___arCameraTransform, TrackableResultDataU5BU5D_t724* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m4553 (StateManagerImpl_t729 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m4554 (StateManagerImpl_t729 * __this, Transform_t2 * ___arCameraTransform, WordDataU5BU5D_t725* ___wordData, WordResultDataU5BU5D_t726* ___wordResultData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m4555 (StateManagerImpl_t729 * __this, VirtualButtonAbstractBehaviourU5BU5D_t800* ___vbBehaviours, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m4556 (StateManagerImpl_t729 * __this, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t122 * StateManagerImpl_CreateImageTargetBehaviour_m4557 (StateManagerImpl_t729 * __this, Object_t * ___imageTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t131 * StateManagerImpl_CreateMultiTargetBehaviour_m4558 (StateManagerImpl_t729 * __this, Object_t * ___multiTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t106 * StateManagerImpl_CreateCylinderTargetBehaviour_m4559 (StateManagerImpl_t729 * __this, Object_t * ___cylinderTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t134 * StateManagerImpl_CreateObjectTargetBehaviour_m4560 (StateManagerImpl_t729 * __this, Object_t * ___objectTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m4561 (StateManagerImpl_t729 * __this, MarkerAbstractBehaviour_t130 * ___markerBehaviour, Object_t * ___marker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m4562 (StateManagerImpl_t729 * __this, TrackableBehaviour_t116 * ___trackableBehaviour, Transform_t2 * ___arCameraTransform, PoseData_t709  ___camToTargetPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.QCARManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m4563 (StateManagerImpl_t729 * __this, TrackableBehaviour_t116 * ___trackableBehaviour, Transform_t2 * ___arCameraTransform, PoseData_t709  ___camToTargetPose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m4564 (StateManagerImpl_t729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
