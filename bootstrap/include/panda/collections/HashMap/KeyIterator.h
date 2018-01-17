#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;

typedef struct panda$collections$HashMap$KeyIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap$EntryIterator* base;
} panda$collections$HashMap$KeyIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$KeyIterator$class_type;
extern panda$collections$HashMap$KeyIterator$class_type panda$collections$HashMap$KeyIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$HashMap$KeyIterator panda$collections$HashMap$KeyIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit.h"
typedef struct panda$collections$Key panda$collections$Key;

void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self);
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self);
void panda$collections$HashMap$KeyIterator$cleanup(panda$collections$HashMap$KeyIterator* self);

#endif
