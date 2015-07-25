#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t684;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t640;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t666;
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C" void ImageTargetImpl__ctor_m3462 (ImageTargetImpl_t684 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t640 * ___dataSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C" int32_t ImageTargetImpl_get_ImageTargetType_m3463 (ImageTargetImpl_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t665 * ImageTargetImpl_CreateVirtualButton_m3464 (ImageTargetImpl_t684 * __this, String_t* ___name, RectangleData_t658  ___area, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t665 * ImageTargetImpl_GetVirtualButtonByName_m3465 (ImageTargetImpl_t684 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* ImageTargetImpl_GetVirtualButtons_m3466 (ImageTargetImpl_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_DestroyVirtualButton_m3467 (ImageTargetImpl_t684 * __this, VirtualButton_t665 * ___vb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t665 * ImageTargetImpl_CreateNewVirtualButtonInNative_m3468 (ImageTargetImpl_t684 * __this, String_t* ___name, RectangleData_t658  ___rectangleData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C" bool ImageTargetImpl_UnregisterVirtualButtonInNative_m3469 (ImageTargetImpl_t684 * __this, VirtualButton_t665 * ___vb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C" void ImageTargetImpl_CreateVirtualButtonsFromNative_m3470 (ImageTargetImpl_t684 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
