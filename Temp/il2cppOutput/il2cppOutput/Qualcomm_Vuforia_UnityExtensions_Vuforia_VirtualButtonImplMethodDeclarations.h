﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t816;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t644;
// Vuforia.DataSet
struct DataSet_t640;
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"
// Vuforia.VirtualButton/Sensitivity
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C" String_t* VirtualButtonImpl_get_Name_m4597 (VirtualButtonImpl_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C" int32_t VirtualButtonImpl_get_ID_m4598 (VirtualButtonImpl_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C" bool VirtualButtonImpl_get_Enabled_m4599 (VirtualButtonImpl_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C" RectangleData_t658  VirtualButtonImpl_get_Area_m4600 (VirtualButtonImpl_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C" void VirtualButtonImpl__ctor_m4601 (VirtualButtonImpl_t816 * __this, String_t* ___name, int32_t ___id, RectangleData_t658  ___area, Object_t * ___imageTarget, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C" bool VirtualButtonImpl_SetArea_m4602 (VirtualButtonImpl_t816 * __this, RectangleData_t658  ___area, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonImpl_SetSensitivity_m4603 (VirtualButtonImpl_t816 * __this, int32_t ___sensitivity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C" bool VirtualButtonImpl_SetEnabled_m4604 (VirtualButtonImpl_t816 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
