#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$plex$runtime$DFA org$pandalanguage$plex$runtime$DFA;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$parser$Lexer {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$plex$runtime$DFA* dfa;
    panda$core$Int64** transitions;
    panda$core$Int64* accepts;
} org$pandalanguage$pandac$parser$Lexer;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$parser$Lexer$class_type;
extern org$pandalanguage$pandac$parser$Lexer$class_type org$pandalanguage$pandac$parser$Lexer$class;

