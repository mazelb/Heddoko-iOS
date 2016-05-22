﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t1359;
// System.Char[]
struct CharU5BU5D_t45;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m7730 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C" void TextReader__cctor_m7731 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C" void TextReader_Dispose_m7732 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m7733 (TextReader_t1359 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C" int32_t TextReader_Peek_m7734 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m7735 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TextReader_Read_m7736 (TextReader_t1359 * __this, CharU5BU5D_t45* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C" String_t* TextReader_ReadLine_m7737 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C" String_t* TextReader_ReadToEnd_m7738 (TextReader_t1359 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C" TextReader_t1359 * TextReader_Synchronized_m7739 (Object_t * __this /* static, unused */, TextReader_t1359 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;