﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/SPKey
struct SPKey_t1647;
// System.Uri
struct Uri_t1138;
// System.Object
struct Object_t;

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
extern "C" void SPKey__ctor_m8068 (SPKey_t1647 * __this, Uri_t1138 * ___uri, bool ___use_connect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern "C" int32_t SPKey_GetHashCode_m8069 (SPKey_t1647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern "C" bool SPKey_Equals_m8070 (SPKey_t1647 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
