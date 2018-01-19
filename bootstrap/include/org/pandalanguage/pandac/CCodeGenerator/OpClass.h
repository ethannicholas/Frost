#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"

typedef struct org$pandalanguage$pandac$CCodeGenerator$OpClass {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$CCodeGenerator$OpClass;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type;
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
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type;
extern org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator$OpClass* self, panda$core$Int64 p_rv);

#endif
