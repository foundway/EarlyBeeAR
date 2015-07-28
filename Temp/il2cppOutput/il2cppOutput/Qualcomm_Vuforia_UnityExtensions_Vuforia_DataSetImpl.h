﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t676;
// Vuforia.DataSet
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARUnity/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_StorageTy.h"
// Vuforia.DataSetImpl
struct  DataSetImpl_t638  : public DataSet_t640
{
	// System.IntPtr Vuforia.DataSetImpl::mDataSetPtr
	IntPtr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSetImpl::mPath
	String_t* ___mPath_1;
	// Vuforia.QCARUnity/StorageType Vuforia.DataSetImpl::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSetImpl::mTrackablesDict
	Dictionary_2_t676 * ___mTrackablesDict_3;
};
