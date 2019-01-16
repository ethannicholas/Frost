#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/FieldDecl/Kind_types.h"

typedef struct org$pandalanguage$pandac$FieldDecl$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$FieldDecl$Kind;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$FieldDecl$Kind$class_type;
extern org$pandalanguage$pandac$FieldDecl$Kind$class_type org$pandalanguage$pandac$FieldDecl$Kind$class;
typedef struct org$pandalanguage$pandac$FieldDecl$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$FieldDecl$Kind value;
} org$pandalanguage$pandac$FieldDecl$Kind$wrapper;
typedef struct org$pandalanguage$pandac$FieldDecl$Kind$nullable {
    org$pandalanguage$pandac$FieldDecl$Kind value;
    bool nonnull;
} org$pandalanguage$pandac$FieldDecl$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass_type;
extern org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass_type org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass;

