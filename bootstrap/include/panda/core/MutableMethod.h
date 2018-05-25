#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$MutableMethod {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* pointer;
    panda$core$Object* target;
} panda$core$MutableMethod;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$MutableMethod$class_type;
extern panda$core$MutableMethod$class_type panda$core$MutableMethod$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Int8.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

void panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q(panda$core$MutableMethod* self, panda$core$Int8* p_pointer, panda$core$Object* p_target);
panda$core$String* panda$core$MutableMethod$convert$R$panda$core$String(panda$core$MutableMethod* self);
void panda$core$MutableMethod$cleanup(panda$core$MutableMethod* self);

#endif
