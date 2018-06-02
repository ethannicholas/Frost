#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$ClassConstant {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* name;
    panda$core$String* type;
} org$pandalanguage$pandac$CCodeGenerator$ClassConstant;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;

