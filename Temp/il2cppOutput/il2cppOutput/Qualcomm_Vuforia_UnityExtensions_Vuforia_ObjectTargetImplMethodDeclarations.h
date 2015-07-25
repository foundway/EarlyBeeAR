#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t639;
// Vuforia.DataSetImpl
struct DataSetImpl_t638;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t640;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m3244 (ObjectTargetImpl_t639 * __this, String_t* ___name, int32_t ___id, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t5  ObjectTargetImpl_GetSize_m3245 (ObjectTargetImpl_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m3246 (ObjectTargetImpl_t639 * __this, Vector3_t5  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m3247 (ObjectTargetImpl_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m3248 (ObjectTargetImpl_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t638 * ObjectTargetImpl_get_DataSet_m3249 (ObjectTargetImpl_t639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
