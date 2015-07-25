#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t803;
struct TargetSearchResult_t803_marshaled;

void TargetSearchResult_t803_marshal(const TargetSearchResult_t803& unmarshaled, TargetSearchResult_t803_marshaled& marshaled);
void TargetSearchResult_t803_marshal_back(const TargetSearchResult_t803_marshaled& marshaled, TargetSearchResult_t803& unmarshaled);
void TargetSearchResult_t803_marshal_cleanup(TargetSearchResult_t803_marshaled& marshaled);
