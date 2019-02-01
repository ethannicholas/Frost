#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct org$frostlang$frostc$frostdoc$Protector org$frostlang$frostc$frostdoc$Protector;
typedef struct frost$math$Random frost$math$Random;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$frostdoc$Markdown {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$File* source;
    frost$threads$MessageQueue* errorQueue;
    org$frostlang$frostc$parser$Parser* parser;
    frost$core$MutableMethod* linkResolver;
    frost$collections$HashMap* linkDefinitions;
    org$frostlang$frostc$frostdoc$Protector* charProtector;
    org$frostlang$frostc$frostdoc$Protector* htmlProtector;
    frost$math$Random* random;
    frost$core$Int64 listLevel;
} org$frostlang$frostc$frostdoc$Markdown;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[30]; } org$frostlang$frostc$frostdoc$Markdown$class_type;
extern org$frostlang$frostc$frostdoc$Markdown$class_type org$frostlang$frostc$frostdoc$Markdown$class;

