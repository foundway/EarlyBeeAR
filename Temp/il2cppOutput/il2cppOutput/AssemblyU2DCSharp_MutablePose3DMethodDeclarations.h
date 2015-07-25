#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MutablePose3D
struct MutablePose3D_t90;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void MutablePose3D::.ctor()
extern "C" void MutablePose3D__ctor_m294 (MutablePose3D_t90 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void MutablePose3D_Set_m295 (MutablePose3D_t90 * __this, Vector3_t5  ___position, Quaternion_t10  ___orientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m296 (MutablePose3D_t90 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_SetRightHanded_m297 (MutablePose3D_t90 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
