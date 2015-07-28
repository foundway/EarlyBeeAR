﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t1673;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1670;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1672;

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Enumerator__ctor_m8171 (X509Certificate2Enumerator_t1673 * __this, X509Certificate2Collection_t1672 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509Certificate2Enumerator_System_Collections_IEnumerator_get_Current_m8172 (X509Certificate2Enumerator_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509Certificate2Enumerator_System_Collections_IEnumerator_MoveNext_m8173 (X509Certificate2Enumerator_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::get_Current()
extern "C" X509Certificate2_t1670 * X509Certificate2Enumerator_get_Current_m8174 (X509Certificate2Enumerator_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::MoveNext()
extern "C" bool X509Certificate2Enumerator_MoveNext_m8175 (X509Certificate2Enumerator_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;