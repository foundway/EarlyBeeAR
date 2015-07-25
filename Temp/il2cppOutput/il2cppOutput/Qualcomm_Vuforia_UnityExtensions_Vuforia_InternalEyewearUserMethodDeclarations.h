#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t617;
// Vuforia.InternalEyewear/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t618;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Boolean Vuforia.InternalEyewearUserCalibrator::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool InternalEyewearUserCalibrator_init_m3169 (InternalEyewearUserCalibrator_t617 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMinScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMinScaleHint_m3170 (InternalEyewearUserCalibrator_t617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMaxScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMaxScaleHint_m3171 (InternalEyewearUserCalibrator_t617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::isStereoStretched()
extern "C" bool InternalEyewearUserCalibrator_isStereoStretched_m3172 (InternalEyewearUserCalibrator_t617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::getProjectionMatrix(Vuforia.InternalEyewear/EyewearCalibrationReading[],UnityEngine.Matrix4x4)
extern "C" bool InternalEyewearUserCalibrator_getProjectionMatrix_m3173 (InternalEyewearUserCalibrator_t617 * __this, EyewearCalibrationReadingU5BU5D_t618* ___readings, Matrix4x4_t27  ___projectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewearUserCalibrator::.ctor()
extern "C" void InternalEyewearUserCalibrator__ctor_m3174 (InternalEyewearUserCalibrator_t617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
