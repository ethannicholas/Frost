#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Comparable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Comparable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$core$Comparable$class_type;
extern panda$core$Comparable$class_type panda$core$Comparable$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Bit.h"
typedef struct panda$core$Comparable panda$core$Comparable;

panda$core$Bit panda$core$Comparable$$GT$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other);
panda$core$Bit panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other);
panda$core$Bit panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other);
panda$core$Bit panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other);

#endif
