#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Int64.h"

typedef struct panda$collections$Stack$StackIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Stack* stack;
    panda$core$Int64 index;
} panda$collections$Stack$StackIterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Stack$StackIterator$class_type;
extern panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Stack$StackIterator panda$collections$Stack$StackIterator;
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack);
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self);
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self);

#endif
