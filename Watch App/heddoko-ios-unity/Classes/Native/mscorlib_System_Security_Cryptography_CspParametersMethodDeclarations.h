﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CspParameters
struct CspParameters_t1325;
// System.String
struct String_t;
// System.Security.Cryptography.CspProviderFlags
#include "mscorlib_System_Security_Cryptography_CspProviderFlags.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C" void CspParameters__ctor_m8706 (CspParameters_t1325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C" void CspParameters__ctor_m8707 (CspParameters_t1325 * __this, int32_t ___dwTypeIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C" void CspParameters__ctor_m8708 (CspParameters_t1325 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C" void CspParameters__ctor_m8709 (CspParameters_t1325 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, String_t* ___strContainerNameIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C" int32_t CspParameters_get_Flags_m8710 (CspParameters_t1325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C" void CspParameters_set_Flags_m8711 (CspParameters_t1325 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;