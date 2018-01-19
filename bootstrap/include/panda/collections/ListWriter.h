#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ListWriter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$ListWriter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$collections$ListWriter$class_type;
extern panda$collections$ListWriter$class_type panda$collections$ListWriter$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$ListWriter panda$collections$ListWriter;
#include "panda/core/Int64.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ListWriter$$IDXEQ$panda$core$Int64$panda$collections$ListWriter$T(panda$collections$ListWriter* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$ListWriter$insert$panda$core$Int64$panda$collections$ListWriter$T(panda$collections$ListWriter* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$ListWriter$removeIndex$panda$core$Int64(panda$collections$ListWriter* self, panda$core$Int64 p_index);

#endif
