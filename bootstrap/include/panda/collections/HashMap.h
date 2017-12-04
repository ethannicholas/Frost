#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;

typedef struct panda$collections$HashMap {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 bucketCount;
    panda$collections$HashMap$Entry** contents;
    panda$core$Int64 threshold;
    panda$core$Int64 changeCount;
} panda$collections$HashMap;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[14]; } panda$collections$HashMap$class_type;
extern panda$collections$HashMap$class_type panda$collections$HashMap$class;
typedef struct panda$collections$HashMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Key* key;
    panda$core$Object* value;
    panda$collections$HashMap$Entry* next;
} panda$collections$HashMap$Entry;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$HashMap$Entry$class_type;
extern panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class;
typedef struct panda$collections$HashMap$EntryIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* map;
    panda$core$Int64 bucket;
    panda$collections$HashMap$Entry* entry;
} panda$collections$HashMap$EntryIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$EntryIterator$class_type;
extern panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class;
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
typedef struct panda$collections$HashMap$ValueIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap$EntryIterator* base;
} panda$collections$HashMap$ValueIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$ValueIterator$class_type;
extern panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$MapView panda$collections$MapView;
#include "panda/core/Int64.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$collections$Map panda$collections$Map;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$collections$HashMap$EntryIterator panda$collections$HashMap$EntryIterator;
typedef struct panda$collections$HashMap$KeyIterator panda$collections$HashMap$KeyIterator;
typedef struct panda$collections$HashMap$ValueIterator panda$collections$HashMap$ValueIterator;

void panda$collections$HashMap$init(panda$collections$HashMap* self);
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map);
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key);
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key);
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key);
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value);
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key);
void panda$collections$HashMap$clear(panda$collections$HashMap* self);
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self);
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self);
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self);
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self);
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other);
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other);
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self);
void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value);
void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self);
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self);
void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self);
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self);
void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map);
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self);
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self);

#endif
