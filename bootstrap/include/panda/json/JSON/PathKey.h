#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$json$JSON$PathKey {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[16];
} panda$json$JSON$PathKey;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$json$JSON$PathKey$class_type;
extern panda$json$JSON$PathKey$class_type panda$json$JSON$PathKey$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$json$JSON$PathKey panda$json$JSON$PathKey;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/String/Index.h"

void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String$Index p_f1);
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0, panda$core$String$Index p_f1);
void panda$json$JSON$PathKey$cleanup(panda$json$JSON$PathKey* self);

#endif
