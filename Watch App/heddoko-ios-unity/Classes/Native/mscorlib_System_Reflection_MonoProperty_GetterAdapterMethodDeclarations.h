﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1515;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void GetterAdapter__ctor_m8186 (GetterAdapter_t1515 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern "C" Object_t * GetterAdapter_Invoke_m8187 (GetterAdapter_t1515 * __this, Object_t * ____this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1515(Il2CppObject* delegate, Object_t * ____this);
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetterAdapter_BeginInvoke_m8188 (GetterAdapter_t1515 * __this, Object_t * ____this, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetterAdapter_EndInvoke_m8189 (GetterAdapter_t1515 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
