﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>
struct Transform_1_t2585;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13169_gshared (Transform_1_t2585 * __this, Object_t * ___object, IntPtr_t98 ___method, MethodInfo* method);
#define Transform_1__ctor_m13169(__this, ___object, ___method, method) (( void (*) (Transform_1_t2585 *, Object_t *, IntPtr_t98, MethodInfo*))Transform_1__ctor_m13169_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2572  Transform_1_Invoke_m13171_gshared (Transform_1_t2585 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m13171(__this, ___key, ___value, method) (( KeyValuePair_2_t2572  (*) (Transform_1_t2585 *, Object_t *, uint8_t, MethodInfo*))Transform_1_Invoke_m13171_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13173_gshared (Transform_1_t2585 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m13173(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2585 *, Object_t *, uint8_t, AsyncCallback_t266 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13173_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2572  Transform_1_EndInvoke_m13175_gshared (Transform_1_t2585 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m13175(__this, ___result, method) (( KeyValuePair_2_t2572  (*) (Transform_1_t2585 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13175_gshared)(__this, ___result, method)