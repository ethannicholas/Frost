#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$MethodShim {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* name;
    panda$core$String* type;
} org$pandalanguage$pandac$CCodeGenerator$MethodShim;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$MethodShim$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$MethodShim org$pandalanguage$pandac$CCodeGenerator$MethodShim;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type);
void org$pandalanguage$pandac$CCodeGenerator$MethodShim$cleanup(org$pandalanguage$pandac$CCodeGenerator$MethodShim* self);

#endif
