#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.DataSetImpl
struct DataSetImpl_t638;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t656;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t624;
// Vuforia.TrackableSource
struct TrackableSource_t657;
// UnityEngine.GameObject
struct GameObject_t7;
// Vuforia.Trackable
struct Trackable_t622;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARUnity/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_StorageTy.h"
// Vuforia.DataSet/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet_StorageType.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C" IntPtr_t DataSetImpl_get_DataSetPtr_m3413 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C" String_t* DataSetImpl_get_Path_m3414 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C" int32_t DataSetImpl_get_FileStorageType_m3415 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C" void DataSetImpl__ctor_m3416 (DataSetImpl_t638 * __this, IntPtr_t ___dataSetPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C" bool DataSetImpl_Load_m3417 (DataSetImpl_t638 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.DataSet/StorageType)
extern "C" bool DataSetImpl_Load_m3418 (DataSetImpl_t638 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.QCARUnity/StorageType)
extern "C" bool DataSetImpl_Load_m3419 (DataSetImpl_t638 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C" Object_t* DataSetImpl_GetTrackables_m3420 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C" DataSetTrackableBehaviour_t624 * DataSetImpl_CreateTrackable_m3421 (DataSetImpl_t638 * __this, TrackableSource_t657 * ___trackableSource, String_t* ___gameObjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C" DataSetTrackableBehaviour_t624 * DataSetImpl_CreateTrackable_m3422 (DataSetImpl_t638 * __this, TrackableSource_t657 * ___trackableSource, GameObject_t7 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C" bool DataSetImpl_Destroy_m3423 (DataSetImpl_t638 * __this, Object_t * ___trackable, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C" bool DataSetImpl_HasReachedTrackableLimit_m3424 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C" bool DataSetImpl_Contains_m3425 (DataSetImpl_t638 * __this, Object_t * ___trackable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C" void DataSetImpl_DestroyAllTrackables_m3426 (DataSetImpl_t638 * __this, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.QCARUnity/StorageType)
extern "C" bool DataSetImpl_ExistsImpl_m3427 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C" bool DataSetImpl_CreateImageTargets_m3428 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C" bool DataSetImpl_CreateMultiTargets_m3429 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C" bool DataSetImpl_CreateCylinderTargets_m3430 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C" bool DataSetImpl_CreateObjectTargets_m3431 (DataSetImpl_t638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
