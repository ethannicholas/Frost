#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Panda {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* allocations;
} panda$core$Panda;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$Panda$class_type;
extern panda$core$Panda$class_type panda$core$Panda$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Panda panda$core$Panda;
typedef struct panda$core$Class panda$core$Class;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Real64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"

void panda$core$Panda$init(panda$core$Panda* self);
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl);
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* self, panda$core$Class* p_cl);
void panda$core$Panda$reportAllocations(panda$core$Panda* self);
void panda$core$Panda$ref$panda$core$Object(panda$core$Object* p_o);
void panda$core$Panda$unref$panda$core$Object(panda$core$Object* p_o);
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
void panda$core$Panda$cleanup(panda$core$Panda* self);

#endif
