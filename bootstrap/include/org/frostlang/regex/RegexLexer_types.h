#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$regex$RegexLexer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$plex$runtime$DFA* dfa;
    frost$core$Int64** transitions;
    frost$core$Int64* accepts;
} org$frostlang$regex$RegexLexer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$regex$RegexLexer$class_type;
extern org$frostlang$regex$RegexLexer$class_type org$frostlang$regex$RegexLexer$class;

