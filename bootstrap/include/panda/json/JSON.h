#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$json$JSON$Node panda$json$JSON$Node;
typedef struct panda$core$String panda$core$String;

typedef struct panda$json$JSON {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$json$JSON$Node* root;
} panda$json$JSON;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$json$JSON$class_type;
extern panda$json$JSON$class_type panda$json$JSON$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$json$JSON panda$json$JSON;
typedef struct panda$json$JSON$Node panda$json$JSON$Node;
typedef struct panda$core$String panda$core$String;

void panda$json$JSON$init$panda$json$JSON$Node(panda$json$JSON* self, panda$json$JSON$Node* p_root);
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self);
void panda$json$JSON$cleanup(panda$json$JSON* self);

#endif
