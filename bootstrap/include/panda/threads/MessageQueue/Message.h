#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$threads$MessageQueue$Message panda$threads$MessageQueue$Message;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$MessageQueue$Message {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Immutable* payload;
    panda$threads$MessageQueue$Message* next;
} panda$threads$MessageQueue$Message;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$threads$MessageQueue$Message$class_type;
extern panda$threads$MessageQueue$Message$class_type panda$threads$MessageQueue$Message$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$MessageQueue$Message panda$threads$MessageQueue$Message;
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

void panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T(panda$threads$MessageQueue$Message* self, panda$core$Immutable* p_payload);
panda$core$String* panda$threads$MessageQueue$Message$convert$R$panda$core$String(panda$threads$MessageQueue$Message* self);
void panda$threads$MessageQueue$Message$cleanup(panda$threads$MessageQueue$Message* self);

#endif
