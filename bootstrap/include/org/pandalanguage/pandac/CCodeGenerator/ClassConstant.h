#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$CCodeGenerator$ClassConstant {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* name;
    panda$core$String* type;
} org$pandalanguage$pandac$CCodeGenerator$ClassConstant;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type;
extern org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$CCodeGenerator$ClassConstant org$pandalanguage$pandac$CCodeGenerator$ClassConstant;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type);

#endif
