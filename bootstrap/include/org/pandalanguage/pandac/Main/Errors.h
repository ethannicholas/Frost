#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main$Errors {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Main$Errors;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Main$Errors$class_type;
extern org$pandalanguage$pandac$Main$Errors$class_type org$pandalanguage$pandac$Main$Errors$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Main$Errors org$pandalanguage$pandac$Main$Errors;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Main$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Main$Errors* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg);
void org$pandalanguage$pandac$Main$Errors$init(org$pandalanguage$pandac$Main$Errors* self);
void org$pandalanguage$pandac$Main$Errors$cleanup(org$pandalanguage$pandac$Main$Errors* self);

#endif
