﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Type>
struct Predicate_1_t3024;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m17830(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3024 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m12082_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Type>::Invoke(T)
#define Predicate_1_Invoke_m17831(__this, ___obj, method) (( bool (*) (Predicate_1_t3024 *, Type_t *, MethodInfo*))Predicate_1_Invoke_m12083_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Type>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17832(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3024 *, Type_t *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12084_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17833(__this, ___result, method) (( bool (*) (Predicate_1_t3024 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12085_gshared)(__this, ___result, method)