#pragma once

// This file will be included in "fastfetch.h", do NOT put unnecessary things here

#include "common/option.h"

typedef struct FFCPUOptions
{
    FFModuleBaseInfo moduleInfo;
    FFModuleArgs moduleArgs;

    bool temp;
    FFColorRangeConfig tempConfig;
    int8_t freqNdigits;
    bool showPeCoreCount;
} FFCPUOptions;
