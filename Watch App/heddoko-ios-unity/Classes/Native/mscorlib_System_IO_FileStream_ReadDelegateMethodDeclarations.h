﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t1443;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t13;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDelegate__ctor_m7517 (ReadDelegate_t1443 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDelegate_Invoke_m7518 (ReadDelegate_t1443 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern TypeInfo Byte_t41_il2cpp_TypeInfo;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t1443(Il2CppObject* delegate, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDelegate_BeginInvoke_m7519 (ReadDelegate_t1443 * __this, ByteU5BU5D_t13* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDelegate_EndInvoke_m7520 (ReadDelegate_t1443 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;