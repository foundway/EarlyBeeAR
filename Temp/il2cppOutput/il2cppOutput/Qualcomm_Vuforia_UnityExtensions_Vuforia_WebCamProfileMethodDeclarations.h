#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamProfile
struct WebCamProfile_t819;
// System.String
struct String_t;
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" ProfileData_t817  WebCamProfile_get_Default_m4626 (WebCamProfile_t819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" void WebCamProfile__ctor_m4627 (WebCamProfile_t819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" ProfileData_t817  WebCamProfile_GetProfile_m4628 (WebCamProfile_t819 * __this, String_t* ___webcamName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C" bool WebCamProfile_ProfileAvailable_m4629 (WebCamProfile_t819 * __this, String_t* ___webcamName, MethodInfo* method) IL2CPP_METHOD_ATTR;
