﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.EnvoyInfo
struct EnvoyInfo_t2324;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1858;

// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m12883 (EnvoyInfo_t2324 * __this, Object_t * ___sinks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m12884 (EnvoyInfo_t2324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;