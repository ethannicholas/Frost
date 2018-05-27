#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Compiler/Resolution.h"

typedef struct org$pandalanguage$pandac$Compiler$Resolution {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Compiler$Resolution;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Resolution$class_type;
extern org$pandalanguage$pandac$Compiler$Resolution$class_type org$pandalanguage$pandac$Compiler$Resolution$class;
typedef struct org$pandalanguage$pandac$Compiler$Resolution$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Compiler$Resolution value;
} org$pandalanguage$pandac$Compiler$Resolution$wrapper;
typedef struct org$pandalanguage$pandac$Compiler$Resolution$nullable {
    org$pandalanguage$pandac$Compiler$Resolution value;
    bool nonnull;
} org$pandalanguage$pandac$Compiler$Resolution$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Resolution$wrapperclass_type;
extern org$pandalanguage$pandac$Compiler$Resolution$wrapperclass_type org$pandalanguage$pandac$Compiler$Resolution$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Compiler$Resolution$cleanup(org$pandalanguage$pandac$Compiler$Resolution self);
void org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$Resolution* self, panda$core$Int64 p_rv);

#endif
