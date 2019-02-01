#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$json$Lexer org$frostlang$json$Lexer;
#include "org/frostlang/json/Token_types.h"

typedef struct frost$json$JSONParser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$String* source;
    org$frostlang$json$Lexer* lexer;
    org$frostlang$json$Token$nullable pushbackToken;
} frost$json$JSONParser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$json$JSONParser$class_type;
extern frost$json$JSONParser$class_type frost$json$JSONParser$class;

