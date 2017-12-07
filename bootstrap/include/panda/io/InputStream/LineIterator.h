#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$InputStream$LineIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$InputStream* input;
    panda$core$String* _next;
} panda$io$InputStream$LineIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$io$InputStream$LineIterator$class_type;
extern panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$InputStream$LineIterator panda$io$InputStream$LineIterator;
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input);
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self);
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self);
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self);

#endif
