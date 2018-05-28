#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Iterator$RangeIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Iterator* base;
    panda$core$Int64 current;
    panda$core$Int64$nullable end;
    panda$core$Int64 step;
    panda$core$Object* pending;
    panda$core$Bit _done;
} panda$collections$Iterator$RangeIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Iterator$RangeIterator$class_type;
extern panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Iterator$RangeIterator panda$collections$Iterator$RangeIterator;
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* self, panda$collections$Iterator* p_base, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Bit p_inclusive, panda$core$Int64 p_step);
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* self);
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* self);
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* self);

#endif
