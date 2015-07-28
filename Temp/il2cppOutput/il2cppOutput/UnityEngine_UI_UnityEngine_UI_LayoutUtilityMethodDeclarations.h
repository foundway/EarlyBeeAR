#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t477;
// UnityEngine.RectTransform
struct RectTransform_t370;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t476;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t478;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetMinSize_m2392 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetPreferredSize_m2393 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetFlexibleSize_m2394 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinWidth_m2395 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredWidth_m2396 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleWidth_m2397 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetMinHeight_m2398 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetPreferredHeight_m2399 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
extern "C" float LayoutUtility_GetFlexibleHeight_m2400 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
extern "C" float LayoutUtility_GetLayoutProperty_m2401 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Func_2_t476 * ___property, float ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
extern "C" float LayoutUtility_GetLayoutProperty_m2402 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Func_2_t476 * ___property, float ___defaultValue, Object_t ** ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinWidthU3Em__E_m2403 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__F_m2404 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__10_m2405 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m2406 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetMinHeightU3Em__12_m2407 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__13_m2408 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__14_m2409 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
extern "C" float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m2410 (Object_t * __this /* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
