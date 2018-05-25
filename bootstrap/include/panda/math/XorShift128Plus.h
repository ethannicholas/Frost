#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$math$XorShift128Plus {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 state1;
    panda$core$Int64 state2;
} panda$math$XorShift128Plus;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$math$XorShift128Plus$class_type;
extern panda$math$XorShift128Plus$class_type panda$math$XorShift128Plus$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$math$XorShift128Plus panda$math$XorShift128Plus;
#include "panda/core/Int64.h"

void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_seed);
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* self);
void panda$math$XorShift128Plus$cleanup(panda$math$XorShift128Plus* self);

#endif
