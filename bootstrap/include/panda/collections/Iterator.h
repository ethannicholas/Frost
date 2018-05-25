#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$Iterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$collections$Iterator$class_type;
extern panda$collections$Iterator$class_type panda$collections$Iterator$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Bit.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;

panda$core$Bit panda$collections$Iterator$get_done$R$panda$core$Bit(panda$collections$Iterator* self);
panda$core$Object* panda$collections$Iterator$next$R$panda$collections$Iterator$T(panda$collections$Iterator* self);
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0);
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate);
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m);

#endif
