#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Range.h"

typedef struct panda$core$Range {
    panda$core$Object* start;
    panda$core$Object* end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$Range;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$class_type;
extern panda$core$Range$class_type panda$core$Range$class;
typedef struct panda$core$Range$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Range value;
} panda$core$Range$wrapper;
typedef struct panda$core$Range$nullable {
    panda$core$Range value;
    bool nonnull;
} panda$core$Range$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Range$wrapperclass_type;
extern panda$core$Range$wrapperclass_type panda$core$Range$wrapperclass;
panda$core$Range$wrapper* wrap_panda$core$Range(panda$core$Range self);

#ifndef PANDA_TYPESONLY
#include "panda/core/Range.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;

void panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(panda$core$Range* self, panda$core$Object* p_start, panda$core$Object* p_end, panda$core$Int64$nullable p_step, panda$core$Bit p_inclusive);
panda$core$String* panda$core$Range$convert$R$panda$core$String(panda$core$Range self);

#endif
