#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$json$Lexer org$pandalanguage$json$Lexer;
#include "org/pandalanguage/json/Token_types.h"

typedef struct panda$json$JSONParser {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* source;
    org$pandalanguage$json$Lexer* lexer;
    org$pandalanguage$json$Token$nullable pushbackToken;
} panda$json$JSONParser;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[12]; } panda$json$JSONParser$class_type;
extern panda$json$JSONParser$class_type panda$json$JSONParser$class;

