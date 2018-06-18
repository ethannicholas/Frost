#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$pandadoc$PandaDoc {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* outDir;
    panda$core$Weak* compiler;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* out;
} org$pandalanguage$pandac$pandadoc$PandaDoc;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[24]; } org$pandalanguage$pandac$pandadoc$PandaDoc$class_type;
extern org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class;

