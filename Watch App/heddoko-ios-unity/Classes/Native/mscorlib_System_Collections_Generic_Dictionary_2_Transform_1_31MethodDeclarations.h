﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
struct Transform_1_t2773;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15335_gshared (Transform_1_t2773 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m15335(__this, ___object, ___method, method) (( void (*) (Transform_1_t2773 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m15335_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2766  Transform_1_Invoke_m15337_gshared (Transform_1_t2773 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m15337(__this, ___key, ___value, method) (( KeyValuePair_2_t2766  (*) (Transform_1_t2773 *, Object_t *, int32_t, MethodInfo*))Transform_1_Invoke_m15337_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15339_gshared (Transform_1_t2773 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m15339(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2773 *, Object_t *, int32_t, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15339_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2766  Transform_1_EndInvoke_m15341_gshared (Transform_1_t2773 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m15341(__this, ___result, method) (( KeyValuePair_2_t2766  (*) (Transform_1_t2773 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15341_gshared)(__this, ___result, method)
