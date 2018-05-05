#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$json$JSON$Node {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[8];
} panda$json$JSON$Node;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$json$JSON$Node$class_type;
extern panda$json$JSON$Node$class_type panda$json$JSON$Node$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$json$JSON$Node panda$json$JSON$Node;
#include "panda/core/Int64.h"
#include "panda/core/Real64.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Int64(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0);
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Real64(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0);
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$String(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$String* p_f0);
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Bit(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Bit p_f0);
void panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$Node$GT(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0);
void panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$Node$GT(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0);
void panda$json$JSON$Node$init$panda$core$Int64(panda$json$JSON$Node* self, panda$core$Int64 p_rv);
panda$core$String* panda$json$JSON$Node$convert$R$panda$core$String(panda$json$JSON$Node* self);
void panda$json$JSON$Node$cleanup(panda$json$JSON$Node* self);

#endif
