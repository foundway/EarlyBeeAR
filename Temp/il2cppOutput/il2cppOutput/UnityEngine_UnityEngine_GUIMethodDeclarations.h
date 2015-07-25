#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t201;
// UnityEngine.GUISkin
struct GUISkin_t1020;
// UnityEngine.Material
struct Material_t88;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t521;
// UnityEngine.GUIStyle
struct GUIStyle_t1022;
// UnityEngine.Texture
struct Texture_t58;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t216;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m6094 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m6095 (Object_t * __this /* static, unused */, DateTime_t700  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m6096 (Object_t * __this /* static, unused */, GUISkin_t1020 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t1020 * GUI_get_skin_m6097 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m6098 (Object_t * __this /* static, unused */, Color_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t51  GUI_get_color_m6099 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m6100 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m949 (Object_t * __this /* static, unused */, Rect_t62  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m6101 (Object_t * __this /* static, unused */, Rect_t62  ___position, GUIContent_t521 * ___content, GUIStyle_t1022 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m6102 (Object_t * __this /* static, unused */, Rect_t62  ___position, GUIContent_t521 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m6103 (Object_t * __this /* static, unused */, Rect_t62 * ___position, GUIContent_t521 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m773 (Object_t * __this /* static, unused */, Rect_t62  ___position, Texture_t58 * ___image, int32_t ___scaleMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m6104 (Object_t * __this /* static, unused */, Rect_t62  ___position, Texture_t58 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t88 * GUI_get_blendMaterial_m6105 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t88 * GUI_get_blitMaterial_m6106 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m742 (Object_t * __this /* static, unused */, Rect_t62  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m6107 (Object_t * __this /* static, unused */, Rect_t62  ___position, GUIContent_t521 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m6108 (Object_t * __this /* static, unused */, Rect_t62 * ___position, GUIContent_t521 * ___content, IntPtr_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t62  GUI_Window_m947 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t62  ___clientRect, WindowFunction_t216 * ___func, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m6109 (Object_t * __this /* static, unused */, WindowFunction_t216 * ___func, int32_t ___id, GUISkin_t1020 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t1022 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t62  GUI_DoWindow_m6110 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t62  ___clientRect, WindowFunction_t216 * ___func, GUIContent_t521 * ___title, GUIStyle_t1022 * ___style, GUISkin_t1020 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t62  GUI_INTERNAL_CALL_DoWindow_m6111 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t62 * ___clientRect, WindowFunction_t216 * ___func, GUIContent_t521 * ___title, GUIStyle_t1022 * ___style, GUISkin_t1020 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
