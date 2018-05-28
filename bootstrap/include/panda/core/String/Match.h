#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/String/Index.h"
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String$Match {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String$Index start;
    panda$core$String$Index end;
    panda$collections$ImmutableArray* groups;
} panda$core$String$Match;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$String$Match$class_type;
extern panda$core$String$Match$class_type panda$core$String$Match$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String$Match panda$core$String$Match;
typedef struct panda$core$Matcher panda$core$Matcher;
typedef struct panda$core$String panda$core$String;

void panda$core$String$Match$init$panda$core$Matcher(panda$core$String$Match* self, panda$core$Matcher* p_m);
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* self);
void panda$core$String$Match$cleanup(panda$core$String$Match* self);

#endif
