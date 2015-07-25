#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t690;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t671;
// Vuforia.TargetFinder
struct TargetFinder_t686;
// Vuforia.DataSet
struct DataSet_t640;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t687;

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C" ImageTargetBuilder_t671 * ObjectTrackerImpl_get_ImageTargetBuilder_m3475 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C" TargetFinder_t686 * ObjectTrackerImpl_get_TargetFinder_m3476 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C" void ObjectTrackerImpl__ctor_m3477 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C" bool ObjectTrackerImpl_Start_m3478 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C" void ObjectTrackerImpl_Stop_m3479 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C" DataSet_t640 * ObjectTrackerImpl_CreateDataSet_m3480 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C" bool ObjectTrackerImpl_DestroyDataSet_m3481 (ObjectTrackerImpl_t690 * __this, DataSet_t640 * ___dataSet, bool ___destroyTrackables, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_ActivateDataSet_m3482 (ObjectTrackerImpl_t690 * __this, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_DeactivateDataSet_m3483 (ObjectTrackerImpl_t690 * __this, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetActiveDataSets_m3484 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetDataSets_m3485 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C" void ObjectTrackerImpl_DestroyAllDataSets_m3486 (ObjectTrackerImpl_t690 * __this, bool ___destroyTrackables, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C" bool ObjectTrackerImpl_PersistExtendedTracking_m3487 (ObjectTrackerImpl_t690 * __this, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C" bool ObjectTrackerImpl_ResetExtendedTracking_m3488 (ObjectTrackerImpl_t690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
