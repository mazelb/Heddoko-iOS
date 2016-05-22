﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.String>
struct Action_1_t5;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m12443(__this, ___object, ___method, method) (( void (*) (Action_1_t5 *, Object_t *, IntPtr_t98, MethodInfo*))Action_1__ctor_m12444_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.String>::Invoke(T)
#define Action_1_Invoke_m152(__this, ___obj, method) (( void (*) (Action_1_t5 *, String_t*, MethodInfo*))Action_1_Invoke_m12445_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m12446(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t5 *, String_t*, AsyncCallback_t266 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m12447_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.String>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m12448(__this, ___result, method) (( void (*) (Action_1_t5 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m12449_gshared)(__this, ___result, method)
