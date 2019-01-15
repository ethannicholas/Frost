#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;

typedef struct org$frostlanguage$frostc$frostdoc$LinkResolver {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler* compiler;
    frost$core$String* apiRelativePath;
    org$frostlanguage$frostc$ClassDecl* context;
} org$frostlanguage$frostc$frostdoc$LinkResolver;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlanguage$frostc$frostdoc$LinkResolver$class_type;
extern org$frostlanguage$frostc$frostdoc$LinkResolver$class_type org$frostlanguage$frostc$frostdoc$LinkResolver$class;

