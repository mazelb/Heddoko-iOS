﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t2340;
// Mono.Security.ASN1
struct ASN1_t670;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C" ASN1_t670 * ASN1Convert_FromInt32_m3972 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C" ASN1_t670 * ASN1Convert_FromOid_m11135 (Object_t * __this /* static, unused */, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m3968 (Object_t * __this /* static, unused */, ASN1_t670 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m4042 (Object_t * __this /* static, unused */, ASN1_t670 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t645  ASN1Convert_ToDateTime_m11136 (Object_t * __this /* static, unused */, ASN1_t670 * ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;