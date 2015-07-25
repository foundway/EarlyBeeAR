#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1634;
// System.Net.WebRequest
struct WebRequest_t1629;
// System.Uri
struct Uri_t1138;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m8000 (FtpRequestCreator_t1634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1629 * FtpRequestCreator_Create_m8001 (FtpRequestCreator_t1634 * __this, Uri_t1138 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
