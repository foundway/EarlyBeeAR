#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1639;
// System.Net.WebRequest
struct WebRequest_t1629;
// System.Uri
struct Uri_t1138;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m8006 (HttpRequestCreator_t1639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1629 * HttpRequestCreator_Create_m8007 (HttpRequestCreator_t1639 * __this, Uri_t1138 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
