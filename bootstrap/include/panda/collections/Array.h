#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$Array panda$collections$Array;

typedef struct panda$collections$Array {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 count;
    panda$core$Int64 capacity;
    panda$core$Object** data;
} panda$collections$Array;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[15]; } panda$collections$Array$class_type;
extern panda$collections$Array$class_type panda$collections$Array$class;
typedef struct panda$collections$Array$ArrayIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* array;
    panda$core$Int64 index;
} panda$collections$Array$ArrayIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Array$ArrayIterator$class_type;
extern panda$collections$Array$ArrayIterator$class_type panda$collections$Array$ArrayIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Range.h"
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Array$ArrayIterator panda$collections$Array$ArrayIterator;
#include "panda/core/Bit.h"

void panda$collections$Array$init(panda$collections$Array* self);
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity);
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list);
void panda$collections$Array$cleanup(panda$collections$Array* self);
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index);
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value);
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range p_r);
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value);
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c);
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity);
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self);
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index);
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self);
void panda$collections$Array$clear(panda$collections$Array* self);
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self);
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator);
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self);
void panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT(panda$collections$Array$ArrayIterator* self, panda$collections$Array* p_array);
panda$core$Bit panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit(panda$collections$Array$ArrayIterator* self);
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(panda$collections$Array$ArrayIterator* self);

#endif
