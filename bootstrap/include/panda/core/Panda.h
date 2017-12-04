#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Panda {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Panda;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Panda$class_type;
extern panda$core$Panda$class_type panda$core$Panda$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;
#include "panda/core/UInt64.h"
typedef struct panda$core$Panda panda$core$Panda;

void panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(panda$core$Int64* result, panda$core$Object* p_o);
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line);
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg);
void panda$core$Panda$debugPrint$panda$core$UInt64(panda$core$UInt64 p_i);
void panda$core$Panda$init(panda$core$Panda* self);

#endif