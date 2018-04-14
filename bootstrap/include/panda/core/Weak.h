#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Weak {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* value;
} panda$core$Weak;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$core$Weak$class_type;
extern panda$core$Weak$class_type panda$core$Weak$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$core$Weak$init$panda$core$Weak$T(panda$core$Weak* self, panda$core$Object* p_value);
panda$core$Object* panda$core$Weak$get$R$panda$core$Weak$T(panda$core$Weak* self);
panda$core$String* panda$core$Weak$convert$R$panda$core$String(panda$core$Weak* self);
void panda$core$Weak$cleanup(panda$core$Weak* self);

#endif
