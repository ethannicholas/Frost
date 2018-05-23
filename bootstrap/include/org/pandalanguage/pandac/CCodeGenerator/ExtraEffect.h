#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$ExtraEffect {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[8];
} org$pandalanguage$pandac$CCodeGenerator$ExtraEffect;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$class_type org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$ExtraEffect org$pandalanguage$pandac$CCodeGenerator$ExtraEffect;
#include "panda/core/Int64.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$cleanup(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self);
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0);
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, panda$core$String* p_f0);

#endif
