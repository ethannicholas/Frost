#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$regex$RegexLexer org$pandalanguage$regex$RegexLexer;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;

typedef struct org$pandalanguage$regex$RegexParser {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$regex$RegexLexer* lexer;
    panda$threads$MessageQueue* errors;
    panda$io$File* path;
    panda$core$String* source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* pushbackBuffer;
} org$pandalanguage$regex$RegexParser;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[18]; } org$pandalanguage$regex$RegexParser$class_type;
extern org$pandalanguage$regex$RegexParser$class_type org$pandalanguage$regex$RegexParser$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$regex$RegexParser org$pandalanguage$regex$RegexParser;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;

void org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$regex$RegexParser* self, panda$threads$MessageQueue* p_errors);
void org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(org$pandalanguage$regex$RegexParser* self, panda$io$File* p_path, panda$core$String* p_source);
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self);
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token);
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind);
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String* p_expected);
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token, panda$core$String* p_msg);
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token);
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self);
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self);
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self);

#endif
