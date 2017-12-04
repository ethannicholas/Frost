#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;
typedef struct panda$core$Object panda$core$Object;

typedef struct panda$collections$IdentityMap {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 bucketCount;
    panda$collections$IdentityMap$Entry** contents;
    panda$core$Int64 threshold;
    panda$core$Int64 changeCount;
} panda$collections$IdentityMap;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[14]; } panda$collections$IdentityMap$class_type;
extern panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class;
typedef struct panda$collections$IdentityMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* key;
    panda$core$Object* value;
    panda$collections$IdentityMap$Entry* next;
} panda$collections$IdentityMap$Entry;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$IdentityMap$Entry$class_type;
extern panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$IdentityMap panda$collections$IdentityMap;
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$collections$Map panda$collections$Map;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self);
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key);
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key);
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key);
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value);
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key);
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self);
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self);
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self);
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other);
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other);
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self);
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self);
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self);
void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value);

#endif
