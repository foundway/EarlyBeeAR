#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1794;
struct DSAParameters_t1794_marshaled;

void DSAParameters_t1794_marshal(const DSAParameters_t1794& unmarshaled, DSAParameters_t1794_marshaled& marshaled);
void DSAParameters_t1794_marshal_back(const DSAParameters_t1794_marshaled& marshaled, DSAParameters_t1794& unmarshaled);
void DSAParameters_t1794_marshal_cleanup(DSAParameters_t1794_marshaled& marshaled);
