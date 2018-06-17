#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$IndentedOutputStream panda$io$IndentedOutputStream;
typedef struct panda$collections$Stack panda$collections$Stack;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$IndentedOutputStream* out;
    panda$collections$Stack* stack;
} org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class_type;
extern org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class;

