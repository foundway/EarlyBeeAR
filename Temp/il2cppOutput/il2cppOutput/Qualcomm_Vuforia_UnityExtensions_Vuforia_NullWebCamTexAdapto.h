#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t368;
// Vuforia.WebCamTexAdaptor
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t699  : public WebCamTexAdaptor_t698
{
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t368 * ___mTexture_1;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_2;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_3;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t700  ___mLastFrame_4;
};
