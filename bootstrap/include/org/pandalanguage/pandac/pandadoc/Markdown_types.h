#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct org$pandalanguage$pandac$parser$Parser org$pandalanguage$pandac$parser$Parser;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct org$pandalanguage$pandac$pandadoc$Protector org$pandalanguage$pandac$pandadoc$Protector;
typedef struct panda$math$Random panda$math$Random;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$pandadoc$Markdown {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* source;
    panda$threads$MessageQueue* errorQueue;
    org$pandalanguage$pandac$parser$Parser* parser;
    panda$core$MutableMethod* linkResolver;
    panda$collections$HashMap* linkDefinitions;
    org$pandalanguage$pandac$pandadoc$Protector* charProtector;
    org$pandalanguage$pandac$pandadoc$Protector* htmlProtector;
    panda$math$Random* random;
    panda$core$Int64 listLevel;
} org$pandalanguage$pandac$pandadoc$Markdown;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[30]; } org$pandalanguage$pandac$pandadoc$Markdown$class_type;
extern org$pandalanguage$pandac$pandadoc$Markdown$class_type org$pandalanguage$pandac$pandadoc$Markdown$class;

