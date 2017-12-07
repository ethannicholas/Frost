#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

typedef struct org$pandalanguage$pandac$Compiler$CompileTargetResult {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$IRNode* target;
    org$pandalanguage$pandac$IRNode* value;
} org$pandalanguage$pandac$Compiler$CompileTargetResult;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type;
extern org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$CompileTargetResult org$pandalanguage$pandac$Compiler$CompileTargetResult;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value);

#endif
