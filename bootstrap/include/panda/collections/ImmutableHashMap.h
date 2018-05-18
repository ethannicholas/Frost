#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 bucketCount;
    panda$collections$ImmutableHashMap$Entry** contents;
    panda$core$Int64 dummyThreshold;
    panda$core$Int64 dummyChangeCount;
} panda$collections$ImmutableHashMap;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$collections$ImmutableHashMap$class_type;
extern panda$collections$ImmutableHashMap$class_type panda$collections$ImmutableHashMap$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Int64.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* self);
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* self);
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self);
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self);
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self);
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self);

#endif
