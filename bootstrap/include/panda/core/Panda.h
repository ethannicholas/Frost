#pragma once
#include "panda_c.h"
#include "Panda_types.h"
typedef struct panda$core$Panda panda$core$Panda;
typedef struct panda$core$Maybe panda$core$Maybe;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Real64_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/UInt64_types.h"
#include "panda/core/Char32_types.h"
#include "panda/core/Bit_types.h"

void panda$core$Panda$init(panda$core$Panda* self);
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* p_o);
panda$core$Maybe* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$String* p_msg);
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* p_cl);
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl);
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl);
void panda$core$Panda$dumpReport(panda$core$Panda* self);
void panda$core$Panda$ref$panda$core$Object$Q(panda$core$Object* p_o);
void panda$core$Panda$unref$panda$core$Object$Q(panda$core$Object* p_o);
void panda$core$Panda$trace$panda$core$String(panda$core$String* p_s);
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* self, panda$core$String* p_s);
void panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(panda$core$Real64* result, panda$core$String* p_s);
void panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(panda$core$Int64* result, panda$core$Real64 p_r);
void panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(panda$core$Int64* result, panda$core$Object* p_o);
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line);
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg);
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c);
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix);
float panda$core$Panda$sqrt$builtin_float32$R$builtin_float32(float p_v);
double panda$core$Panda$sqrt$builtin_float64$R$builtin_float64(double p_v);
int64_t panda$core$Panda$currentTime$R$builtin_int64();
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier);
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt);
void panda$core$Panda$debugPrint$builtin_int64(int64_t p_i);
void panda$core$Panda$debugPrint$panda$core$Object(panda$core$Object* p_o);
panda$core$String* panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(panda$core$Object** p_p);
void panda$core$Panda$disableRefErrorReporting();
void panda$core$Panda$cleanup(panda$core$Panda* self);

