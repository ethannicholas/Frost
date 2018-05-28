#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Matcher panda$core$Matcher;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"

typedef struct panda$core$String$RegexMatchIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Matcher* matcher;
    panda$core$String* haystack;
    panda$core$Bit allowOverlaps;
    panda$core$Bit found;
} panda$core$String$RegexMatchIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$RegexMatchIterator$class_type;
extern panda$core$String$RegexMatchIterator$class_type panda$core$String$RegexMatchIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String$RegexMatchIterator panda$core$String$RegexMatchIterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$RegularExpression panda$core$RegularExpression;
#include "panda/core/Bit.h"
typedef struct panda$core$String$Match panda$core$String$Match;

void panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit(panda$core$String$RegexMatchIterator* self, panda$core$String* p_haystack, panda$core$RegularExpression* p_needle, panda$core$Bit p_allowOveraps);
panda$core$Bit panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit(panda$core$String$RegexMatchIterator* self);
panda$core$String$Match* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(panda$core$String$RegexMatchIterator* self);
void panda$core$String$RegexMatchIterator$cleanup(panda$core$String$RegexMatchIterator* self);

#endif
