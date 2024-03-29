﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<SensorData>
struct Predicate_1_t2496;
// System.Object
struct Object_t;
// SensorData
struct SensorData_t1;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<SensorData>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12429(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2496 *, Object_t *, IntPtr_t98, MethodInfo*))Predicate_1__ctor_m12082_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<SensorData>::Invoke(T)
#define Predicate_1_Invoke_m12430(__this, ___obj, method) (( bool (*) (Predicate_1_t2496 *, SensorData_t1 *, MethodInfo*))Predicate_1_Invoke_m12083_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<SensorData>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12431(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2496 *, SensorData_t1 *, AsyncCallback_t266 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12084_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<SensorData>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12432(__this, ___result, method) (( bool (*) (Predicate_1_t2496 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12085_gshared)(__this, ___result, method)
