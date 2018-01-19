#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Set {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* contents;
} panda$collections$Set;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$collections$Set$class_type;
extern panda$collections$Set$class_type panda$collections$Set$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Set panda$collections$Set;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$Key panda$collections$Key;
#include "panda/core/Int64.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit.h"

void panda$collections$Set$init(panda$collections$Set* self);
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c);
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value);
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c);
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self);
void panda$collections$Set$clear(panda$collections$Set* self);
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self);
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value);
void panda$collections$Set$cleanup(panda$collections$Set* self);

#endif
