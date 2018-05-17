#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$CCodeGenerator org$pandalanguage$pandac$CCodeGenerator;
typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$AutoContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$CCodeGenerator* cg;
    org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* context;
} org$pandalanguage$pandac$CCodeGenerator$AutoContext;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$AutoContext$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$AutoContext$class_type org$pandalanguage$pandac$CCodeGenerator$AutoContext$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$AutoContext org$pandalanguage$pandac$CCodeGenerator$AutoContext;
typedef struct org$pandalanguage$pandac$CCodeGenerator org$pandalanguage$pandac$CCodeGenerator;
typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;

void org$pandalanguage$pandac$CCodeGenerator$AutoContext$init$org$pandalanguage$pandac$CCodeGenerator$org$pandalanguage$pandac$CCodeGenerator$EnclosingContext(org$pandalanguage$pandac$CCodeGenerator$AutoContext* self, org$pandalanguage$pandac$CCodeGenerator* p_cg, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* p_context);
void org$pandalanguage$pandac$CCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$AutoContext* self);

#endif
