#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"

typedef struct org$pandalanguage$pandac$CCodeGenerator$OpClass {
    panda$core$Int64 $rawValue;
} org$pandalanguage$pandac$CCodeGenerator$OpClass;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class;
typedef struct org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$CCodeGenerator$OpClass value;
} org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper;
typedef struct org$pandalanguage$pandac$CCodeGenerator$OpClass$nullable {
    org$pandalanguage$pandac$CCodeGenerator$OpClass value;
    bool nonnull;
} org$pandalanguage$pandac$CCodeGenerator$OpClass$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type;
extern org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass;
org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper* wrap_org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator$OpClass self);

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator$OpClass* self, panda$core$Int64 p_rv);
void org$pandalanguage$pandac$CCodeGenerator$OpClass$init(org$pandalanguage$pandac$CCodeGenerator$OpClass* self);

#endif
