#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CylinderTargetImpl
struct CylinderTargetImpl_t667;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t640;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.CylinderTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void CylinderTargetImpl__ctor_m3378 (CylinderTargetImpl_t667 * __this, String_t* ___name, int32_t ___id, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CylinderTargetImpl_SetSize_m3379 (CylinderTargetImpl_t667 * __this, Vector3_t5  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetSideLength()
extern "C" float CylinderTargetImpl_GetSideLength_m3380 (CylinderTargetImpl_t667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetTopDiameter()
extern "C" float CylinderTargetImpl_GetTopDiameter_m3381 (CylinderTargetImpl_t667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetBottomDiameter()
extern "C" float CylinderTargetImpl_GetBottomDiameter_m3382 (CylinderTargetImpl_t667 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetSideLength(System.Single)
extern "C" bool CylinderTargetImpl_SetSideLength_m3383 (CylinderTargetImpl_t667 * __this, float ___sideLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetTopDiameter_m3384 (CylinderTargetImpl_t667 * __this, float ___topDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetBottomDiameter_m3385 (CylinderTargetImpl_t667 * __this, float ___bottomDiameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::ScaleCylinder(System.Single)
extern "C" void CylinderTargetImpl_ScaleCylinder_m3386 (CylinderTargetImpl_t667 * __this, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
