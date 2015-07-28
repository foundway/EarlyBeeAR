#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1626;
// System.Net.ServicePoint
struct ServicePoint_t1627;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1628;
// System.Net.WebRequest
struct WebRequest_t1629;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m7992 (DefaultCertificatePolicy_t1626 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m7993 (DefaultCertificatePolicy_t1626 * __this, ServicePoint_t1627 * ___point, X509Certificate_t1628 * ___certificate, WebRequest_t1629 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
