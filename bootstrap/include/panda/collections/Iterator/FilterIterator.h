#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Iterator$FilterIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Iterator* base;
    panda$core$MutableMethod* filter;
    panda$core$Object* nextValue;
} panda$collections$Iterator$FilterIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$collections$Iterator$FilterIterator$class_type;
extern panda$collections$Iterator$FilterIterator$class_type panda$collections$Iterator$FilterIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Iterator$FilterIterator panda$collections$Iterator$FilterIterator;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$Iterator$FilterIterator* self, panda$collections$Iterator* p_base, panda$core$MutableMethod* p_filter);
void panda$collections$Iterator$FilterIterator$getNext(panda$collections$Iterator$FilterIterator* self);
panda$core$Bit panda$collections$Iterator$FilterIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$FilterIterator* self);
panda$core$Object* panda$collections$Iterator$FilterIterator$next$R$panda$collections$Iterator$FilterIterator$T(panda$collections$Iterator$FilterIterator* self);
void panda$collections$Iterator$FilterIterator$cleanup(panda$collections$Iterator$FilterIterator* self);

#endif
