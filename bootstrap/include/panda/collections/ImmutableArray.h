#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

typedef struct panda$collections$ImmutableArray {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 count;
    panda$core$Object** data;
} panda$collections$ImmutableArray;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$collections$ImmutableArray$class_type;
extern panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class;
typedef struct panda$collections$ImmutableArray$ImmutableArrayIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableArray* array;
    panda$core$Int64 index;
} panda$collections$ImmutableArray$ImmutableArrayIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableArray$ImmutableArrayIterator$class_type;
extern panda$collections$ImmutableArray$ImmutableArrayIterator$class_type panda$collections$ImmutableArray$ImmutableArrayIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Range.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ImmutableArray$ImmutableArrayIterator panda$collections$ImmutableArray$ImmutableArrayIterator;
#include "panda/core/Bit.h"

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self);
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data);
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self);
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index);
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self);
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range p_r);
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self);
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self);
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator);
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self);
void panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT(panda$collections$ImmutableArray$ImmutableArrayIterator* self, panda$collections$ImmutableArray* p_array);
panda$core$Bit panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableArray$ImmutableArrayIterator* self);
panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(panda$collections$ImmutableArray$ImmutableArrayIterator* self);

#endif
