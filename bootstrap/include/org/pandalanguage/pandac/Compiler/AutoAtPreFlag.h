#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$AutoAtPreFlag {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
} org$pandalanguage$pandac$Compiler$AutoAtPreFlag;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class_type;
extern org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class_type org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$AutoAtPreFlag org$pandalanguage$pandac$Compiler$AutoAtPreFlag;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;

void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$cleanup(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* self);

#endif
