﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t1898;
// Mono.Security.X509.X509Stores
struct X509Stores_t1698;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1800;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" X509Stores_t1698 * X509StoreManager_get_CurrentUser_m8982 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" X509Stores_t1698 * X509StoreManager_get_LocalMachine_m8983 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" X509CertificateCollection_t1800 * X509StoreManager_get_TrustedRootCertificates_m9484 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
