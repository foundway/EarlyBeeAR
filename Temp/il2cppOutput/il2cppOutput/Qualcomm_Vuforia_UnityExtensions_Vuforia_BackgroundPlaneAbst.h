#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t15;
// Vuforia.QCARAbstractBehaviour
struct QCARAbstractBehaviour_t143;
// UnityEngine.Mesh
struct Mesh_t236;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"
// Vuforia.BackgroundPlaneAbstractBehaviour
struct  BackgroundPlaneAbstractBehaviour_t102  : public MonoBehaviour_t4
{
	// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.BackgroundPlaneAbstractBehaviour::mTextureInfo
	VideoTextureInfo_t616  ___mTextureInfo_2;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewWidth
	int32_t ___mViewWidth_3;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewHeight
	int32_t ___mViewHeight_4;
	// System.Boolean Vuforia.BackgroundPlaneAbstractBehaviour::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_5;
	// UnityEngine.Camera Vuforia.BackgroundPlaneAbstractBehaviour::mCamera
	Camera_t15 * ___mCamera_6;
	// Vuforia.QCARAbstractBehaviour Vuforia.BackgroundPlaneAbstractBehaviour::mQBehaviour
	QCARAbstractBehaviour_t143 * ___mQBehaviour_7;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::defaultNumDivisions
	int32_t ___defaultNumDivisions_9;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneAbstractBehaviour::mMesh
	Mesh_t236 * ___mMesh_10;
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_11;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumDivisions
	int32_t ___mNumDivisions_12;
};
struct BackgroundPlaneAbstractBehaviour_t102_StaticFields{
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::maxDisplacement
	float ___maxDisplacement_8;
};
