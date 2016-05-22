﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t1598;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t137;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1586;
// System.Reflection.MethodBase
struct MethodBase_t879;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t602;
// System.Exception
struct Exception_t140;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1599;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m8448 (ReturnMessage_t1598 * __this, Object_t * ___ret, ObjectU5BU5D_t137* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1586 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m8449 (ReturnMessage_t1598 * __this, Exception_t140 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m8450 (ReturnMessage_t1598 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t137* ReturnMessage_get_Args_m8451 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1586 * ReturnMessage_get_LogicalCallContext_m8452 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t879 * ReturnMessage_get_MethodBase_m8453 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m8454 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C" Object_t * ReturnMessage_get_MethodSignature_m8455 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C" Object_t * ReturnMessage_get_Properties_m8456 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m8457 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m8458 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m8459 (ReturnMessage_t1598 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t140 * ReturnMessage_get_Exception_m8460 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t137* ReturnMessage_get_OutArgs_m8461 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m8462 (ReturnMessage_t1598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
