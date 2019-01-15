#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$json$Lexer org$frostlanguage$json$Lexer;
#include "org/frostlanguage/json/Token_types.h"

typedef struct frost$json$JSONParser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$String* source;
    org$frostlanguage$json$Lexer* lexer;
    org$frostlanguage$json$Token$nullable pushbackToken;
} frost$json$JSONParser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$json$JSONParser$class_type;
extern frost$json$JSONParser$class_type frost$json$JSONParser$class;

