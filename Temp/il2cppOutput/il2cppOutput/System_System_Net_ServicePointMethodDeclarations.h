﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t1627;
// System.Uri
struct Uri_t1138;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m8057 (ServicePoint_t1627 * __this, Uri_t1138 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t1138 * ServicePoint_get_Address_m8058 (ServicePoint_t1627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m8059 (ServicePoint_t1627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t700  ServicePoint_get_IdleSince_m8060 (ServicePoint_t1627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m8061 (ServicePoint_t1627 * __this, DateTime_t700  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m8062 (ServicePoint_t1627 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m8063 (ServicePoint_t1627 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m8064 (ServicePoint_t1627 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m8065 (ServicePoint_t1627 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m8066 (ServicePoint_t1627 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m8067 (ServicePoint_t1627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
