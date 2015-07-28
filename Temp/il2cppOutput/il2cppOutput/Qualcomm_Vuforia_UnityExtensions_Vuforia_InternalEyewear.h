#pragma once
#include <stdint.h>
// Vuforia.InternalEyewear
struct InternalEyewear_t650;
// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t615;
// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t617;
// System.Object
#include "mscorlib_System_Object.h"
// Vuforia.InternalEyewear
struct  InternalEyewear_t650  : public Object_t
{
	// Vuforia.InternalEyewearCalibrationProfileManager Vuforia.InternalEyewear::mProfileManager
	InternalEyewearCalibrationProfileManager_t615 * ___mProfileManager_1;
	// Vuforia.InternalEyewearUserCalibrator Vuforia.InternalEyewear::mCalibrator
	InternalEyewearUserCalibrator_t617 * ___mCalibrator_2;
};
struct InternalEyewear_t650_StaticFields{
	// Vuforia.InternalEyewear Vuforia.InternalEyewear::mInstance
	InternalEyewear_t650 * ___mInstance_0;
};
