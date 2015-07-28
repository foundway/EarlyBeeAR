#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t183;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t303;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t304;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t197;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t193;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t199;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t305;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t191;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t189;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t195;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t306;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t307;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t187;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t308;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t309;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t310;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t311;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t312;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t316;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t317;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t196;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_t192;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t198;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_t318;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t190;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t188;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t194;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t319;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t320;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t185;
// UnityEngine.EventSystems.ISelectHandler
struct ISelectHandler_t184;
// UnityEngine.EventSystems.IDeselectHandler
struct IDeselectHandler_t321;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t322;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t323;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t324;
// UnityEngine.GameObject
struct GameObject_t7;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t325;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t326;

// System.Void UnityEngine.EventSystems.ExecuteEvents::.cctor()
extern "C" void ExecuteEvents__cctor_m1372 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerEnterHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1373 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerExitHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1374 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerDownHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1375 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerUpHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1376 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerClickHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1377 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IInitializePotentialDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1378 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IBeginDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1379 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1380 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IEndDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1381 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDropHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1382 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IScrollHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1383 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IUpdateSelectedHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1384 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ISelectHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1385 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDeselectHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1386 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IMoveHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1387 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ISubmitHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1388 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ICancelHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m1389 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerEnterHandler()
extern "C" EventFunction_1_t303 * ExecuteEvents_get_pointerEnterHandler_m1390 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerExitHandler()
extern "C" EventFunction_1_t304 * ExecuteEvents_get_pointerExitHandler_m1391 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
extern "C" EventFunction_1_t197 * ExecuteEvents_get_pointerDownHandler_m708 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
extern "C" EventFunction_1_t193 * ExecuteEvents_get_pointerUpHandler_m699 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
extern "C" EventFunction_1_t199 * ExecuteEvents_get_pointerClickHandler_m710 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
extern "C" EventFunction_1_t305 * ExecuteEvents_get_initializePotentialDrag_m1392 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
extern "C" EventFunction_1_t191 * ExecuteEvents_get_beginDragHandler_m698 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
extern "C" EventFunction_1_t189 * ExecuteEvents_get_dragHandler_m697 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
extern "C" EventFunction_1_t195 * ExecuteEvents_get_endDragHandler_m700 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
extern "C" EventFunction_1_t306 * ExecuteEvents_get_dropHandler_m1393 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::get_scrollHandler()
extern "C" EventFunction_1_t307 * ExecuteEvents_get_scrollHandler_m1394 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
extern "C" EventFunction_1_t187 * ExecuteEvents_get_updateSelectedHandler_m691 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::get_selectHandler()
extern "C" EventFunction_1_t308 * ExecuteEvents_get_selectHandler_m1395 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::get_deselectHandler()
extern "C" EventFunction_1_t309 * ExecuteEvents_get_deselectHandler_m1396 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
extern "C" EventFunction_1_t310 * ExecuteEvents_get_moveHandler_m1397 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
extern "C" EventFunction_1_t311 * ExecuteEvents_get_submitHandler_m1398 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
extern "C" EventFunction_1_t312 * ExecuteEvents_get_cancelHandler_m1399 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" void ExecuteEvents_GetEventChain_m1400 (Object_t * __this /* static, unused */, GameObject_t7 * ___root, Object_t* ___eventChain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::<s_HandlerListPool>m__0(System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>)
extern "C" void ExecuteEvents_U3Cs_HandlerListPoolU3Em__0_m1401 (Object_t * __this /* static, unused */, List_1_t326 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
