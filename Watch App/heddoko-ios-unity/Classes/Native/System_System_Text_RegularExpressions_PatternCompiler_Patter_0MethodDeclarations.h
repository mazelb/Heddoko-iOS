﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct PatternLinkStack_t730;
// System.Object
struct Object_t;

// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
extern "C" void PatternLinkStack__ctor_m3510 (PatternLinkStack_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
extern "C" void PatternLinkStack_set_BaseAddress_m3511 (PatternLinkStack_t730 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern "C" int32_t PatternLinkStack_get_OffsetAddress_m3512 (PatternLinkStack_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern "C" void PatternLinkStack_set_OffsetAddress_m3513 (PatternLinkStack_t730 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern "C" int32_t PatternLinkStack_GetOffset_m3514 (PatternLinkStack_t730 * __this, int32_t ___target_addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern "C" Object_t * PatternLinkStack_GetCurrent_m3515 (PatternLinkStack_t730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
extern "C" void PatternLinkStack_SetCurrent_m3516 (PatternLinkStack_t730 * __this, Object_t * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;