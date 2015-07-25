#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRenderer/VideoBGCfgData
struct VideoBGCfgData_t731;
struct VideoBGCfgData_t731_marshaled;

void VideoBGCfgData_t731_marshal(const VideoBGCfgData_t731& unmarshaled, VideoBGCfgData_t731_marshaled& marshaled);
void VideoBGCfgData_t731_marshal_back(const VideoBGCfgData_t731_marshaled& marshaled, VideoBGCfgData_t731& unmarshaled);
void VideoBGCfgData_t731_marshal_cleanup(VideoBGCfgData_t731_marshaled& marshaled);
