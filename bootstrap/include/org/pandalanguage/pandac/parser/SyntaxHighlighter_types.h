#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Stack panda$collections$Stack;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$parser$SyntaxHighlighter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Stack* stack;
    panda$collections$Array* tokens;
} org$pandalanguage$pandac$parser$SyntaxHighlighter;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } org$pandalanguage$pandac$parser$SyntaxHighlighter$class_type;
extern org$pandalanguage$pandac$parser$SyntaxHighlighter$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$class;

