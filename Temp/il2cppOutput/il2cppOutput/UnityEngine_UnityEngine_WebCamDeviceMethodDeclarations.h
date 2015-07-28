#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t931;
struct WebCamDevice_t931_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m5545 (WebCamDevice_t931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m6682 (WebCamDevice_t931 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t931_marshal(const WebCamDevice_t931& unmarshaled, WebCamDevice_t931_marshaled& marshaled);
void WebCamDevice_t931_marshal_back(const WebCamDevice_t931_marshaled& marshaled, WebCamDevice_t931& unmarshaled);
void WebCamDevice_t931_marshal_cleanup(WebCamDevice_t931_marshaled& marshaled);
