#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$HashMap$ValueIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap$EntryIterator* base;
} panda$collections$HashMap$ValueIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$ValueIterator$class_type;
extern panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$HashMap$ValueIterator panda$collections$HashMap$ValueIterator;
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self);
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self);
void panda$collections$HashMap$ValueIterator$cleanup(panda$collections$HashMap$ValueIterator* self);

#endif
