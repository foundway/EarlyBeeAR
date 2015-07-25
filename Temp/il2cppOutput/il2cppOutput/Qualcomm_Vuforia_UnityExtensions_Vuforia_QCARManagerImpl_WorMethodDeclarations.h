#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/WordResultData
struct WordResultData_t714;
struct WordResultData_t714_marshaled;

void WordResultData_t714_marshal(const WordResultData_t714& unmarshaled, WordResultData_t714_marshaled& marshaled);
void WordResultData_t714_marshal_back(const WordResultData_t714_marshaled& marshaled, WordResultData_t714& unmarshaled);
void WordResultData_t714_marshal_cleanup(WordResultData_t714_marshaled& marshaled);
