#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Formattable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Formattable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$core$Formattable$class_type;
extern panda$core$Formattable$class_type panda$core$Formattable$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Formattable panda$core$Formattable;

panda$core$String* panda$core$Formattable$format$panda$core$String$R$panda$core$String(panda$core$Formattable* self, panda$core$String* p_fmt);

#endif
