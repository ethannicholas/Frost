#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Equatable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Equatable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$Equatable$class_type;
extern panda$core$Equatable$class_type panda$core$Equatable$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Bit.h"
typedef struct panda$core$Equatable panda$core$Equatable;

panda$core$Bit panda$core$Equatable$$EQ$panda$core$Equatable$T$R$panda$core$Bit(panda$core$Equatable* self, panda$core$Equatable* p_other);
panda$core$Bit panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit(panda$core$Equatable* self, panda$core$Equatable* p_other);

#endif
