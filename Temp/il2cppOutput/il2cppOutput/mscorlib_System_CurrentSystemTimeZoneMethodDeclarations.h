﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2532;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t2015;
// System.String[]
struct StringU5BU5D_t208;
// System.Globalization.DaylightTime
struct DaylightTime_t2147;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m14477 (CurrentSystemTimeZone_t2532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m14478 (CurrentSystemTimeZone_t2532 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m14479 (CurrentSystemTimeZone_t2532 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m14480 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t2015** ___data, StringU5BU5D_t208** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t2147 * CurrentSystemTimeZone_GetDaylightChanges_m14481 (CurrentSystemTimeZone_t2532 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t868  CurrentSystemTimeZone_GetUtcOffset_m14482 (CurrentSystemTimeZone_t2532 * __this, DateTime_t700  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m14483 (CurrentSystemTimeZone_t2532 * __this, DaylightTime_t2147 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t2147 * CurrentSystemTimeZone_GetDaylightTimeFromData_m14484 (CurrentSystemTimeZone_t2532 * __this, Int64U5BU5D_t2015* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
