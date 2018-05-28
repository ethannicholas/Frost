#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"

typedef struct panda$core$String$MatchIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* haystack;
    panda$core$String* needle;
    panda$core$String$Index$nullable nextMatch;
    panda$core$Bit allowOverlaps;
} panda$core$String$MatchIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$MatchIterator$class_type;
extern panda$core$String$MatchIterator$class_type panda$core$String$MatchIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String$MatchIterator panda$core$String$MatchIterator;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"

void panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit(panda$core$String$MatchIterator* self, panda$core$String* p_haystack, panda$core$String* p_needle, panda$core$Bit p_allowOveraps);
panda$core$Bit panda$core$String$MatchIterator$get_done$R$panda$core$Bit(panda$core$String$MatchIterator* self);
panda$core$String$Index panda$core$String$MatchIterator$next$R$panda$core$String$Index(panda$core$String$MatchIterator* self);
void panda$core$String$MatchIterator$cleanup(panda$core$String$MatchIterator* self);

#endif
