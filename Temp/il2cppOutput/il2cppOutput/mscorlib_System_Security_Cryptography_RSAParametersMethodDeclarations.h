#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1792;
struct RSAParameters_t1792_marshaled;

void RSAParameters_t1792_marshal(const RSAParameters_t1792& unmarshaled, RSAParameters_t1792_marshaled& marshaled);
void RSAParameters_t1792_marshal_back(const RSAParameters_t1792_marshaled& marshaled, RSAParameters_t1792& unmarshaled);
void RSAParameters_t1792_marshal_cleanup(RSAParameters_t1792_marshaled& marshaled);
