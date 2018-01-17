#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* loopLabel;
    panda$core$String* breakLabel;
    panda$core$String* continueLabel;
} org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel);
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self);
void org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$cleanup(org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* self);

#endif
