#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$plex$runtime$DFA org$frostlang$plex$runtime$DFA;
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$parser$Lexer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$plex$runtime$DFA* dfa;
    frost$unsafe$NewPointer transitions;
    frost$unsafe$NewPointer accepts;
    frost$core$Int file;
} org$frostlang$frostc$parser$Lexer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$parser$Lexer$class_type;
extern org$frostlang$frostc$parser$Lexer$class_type org$frostlang$frostc$parser$Lexer$class;

