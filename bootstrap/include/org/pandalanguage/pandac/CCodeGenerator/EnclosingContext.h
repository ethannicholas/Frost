#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[24];
} org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$EnclosingContext org$pandalanguage$pandac$CCodeGenerator$EnclosingContext;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Map panda$collections$Map;

void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2);
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Corg$pandalanguage$pandac$Pair$LTpanda$core$Int64$Cpanda$core$String$GT$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1, panda$core$String* p_f2);
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self);

#endif
