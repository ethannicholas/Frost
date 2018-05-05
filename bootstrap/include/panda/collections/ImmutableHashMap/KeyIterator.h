#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$ImmutableHashMap$EntryIterator panda$collections$ImmutableHashMap$EntryIterator;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$KeyIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableHashMap$EntryIterator* base;
} panda$collections$ImmutableHashMap$KeyIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableHashMap$KeyIterator$class_type;
extern panda$collections$ImmutableHashMap$KeyIterator$class_type panda$collections$ImmutableHashMap$KeyIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableHashMap$KeyIterator panda$collections$ImmutableHashMap$KeyIterator;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Bit.h"
typedef struct panda$collections$Key panda$collections$Key;

void panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT(panda$collections$ImmutableHashMap$KeyIterator* self, panda$collections$ImmutableHashMap* p_map);
panda$core$Bit panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$KeyIterator* self);
panda$collections$Key* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(panda$collections$ImmutableHashMap$KeyIterator* self);
void panda$collections$ImmutableHashMap$KeyIterator$cleanup(panda$collections$ImmutableHashMap$KeyIterator* self);

#endif
