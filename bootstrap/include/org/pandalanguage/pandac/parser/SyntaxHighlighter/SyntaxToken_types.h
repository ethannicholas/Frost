#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"

typedef struct org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* text;
    org$pandalanguage$pandac$parser$Token$Kind tokenKind;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind syntaxKind;
} org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class_type;
extern org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class;

