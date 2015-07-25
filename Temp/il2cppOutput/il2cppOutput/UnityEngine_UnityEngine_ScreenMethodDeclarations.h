#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Screen
struct Screen_t1010;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m678 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m679 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C" float Screen_get_dpi_m882 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Screen::get_autorotateToPortrait()
extern "C" bool Screen_get_autorotateToPortrait_m5108 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_autorotateToPortrait(System.Boolean)
extern "C" void Screen_set_autorotateToPortrait_m5112 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Screen::get_autorotateToPortraitUpsideDown()
extern "C" bool Screen_get_autorotateToPortraitUpsideDown_m5109 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
extern "C" void Screen_set_autorotateToPortraitUpsideDown_m5113 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeLeft()
extern "C" bool Screen_get_autorotateToLandscapeLeft_m5106 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
extern "C" void Screen_set_autorotateToLandscapeLeft_m5110 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeRight()
extern "C" bool Screen_get_autorotateToLandscapeRight_m5107 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
extern "C" void Screen_set_autorotateToLandscapeRight_m5111 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" int32_t Screen_get_orientation_m969 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
extern "C" void Screen_set_orientation_m5598 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
extern "C" void Screen_set_sleepTimeout_m5601 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
