#pragma once
#include "frost_c.h"
#include "RegexParser_types.h"
typedef struct org$frostlanguage$regex$RegexParser org$frostlanguage$regex$RegexParser;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/regex/RegexToken_types.h"
#include "frost/core/Bit_types.h"
#include "org/frostlanguage/regex/RegexToken/Kind_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;

void org$frostlanguage$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlanguage$frostc$Compiler$Error$GT(org$frostlanguage$regex$RegexParser* self, frost$threads$MessageQueue* p_errors);
void org$frostlanguage$regex$RegexParser$start$frost$io$File$frost$core$String(org$frostlanguage$regex$RegexParser* self, frost$io$File* p_path, frost$core$String* p_source);
org$frostlanguage$regex$RegexToken org$frostlanguage$regex$RegexParser$next$R$org$frostlanguage$regex$RegexToken(org$frostlanguage$regex$RegexParser* self);
void org$frostlanguage$regex$RegexParser$pushback$org$frostlanguage$regex$RegexToken(org$frostlanguage$regex$RegexParser* self, org$frostlanguage$regex$RegexToken p_token);
org$frostlanguage$regex$RegexToken org$frostlanguage$regex$RegexParser$peek$R$org$frostlanguage$regex$RegexToken(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$checkNext$org$frostlanguage$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self, org$frostlanguage$regex$RegexToken$Kind p_kind);
frost$core$Bit org$frostlanguage$regex$RegexParser$expect$org$frostlanguage$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self, org$frostlanguage$regex$RegexToken$Kind p_kind, frost$core$String* p_expected);
void org$frostlanguage$regex$RegexParser$error$org$frostlanguage$regex$RegexToken$frost$core$String(org$frostlanguage$regex$RegexParser* self, org$frostlanguage$regex$RegexToken p_token, frost$core$String* p_msg);
frost$core$String* org$frostlanguage$regex$RegexParser$text$org$frostlanguage$regex$RegexToken$R$frost$core$String(org$frostlanguage$regex$RegexParser* self, org$frostlanguage$regex$RegexToken p_token);
frost$core$Bit org$frostlanguage$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$integer$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$atom$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$factor$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$term$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
frost$core$Bit org$frostlanguage$regex$RegexParser$expression$R$frost$core$Bit(org$frostlanguage$regex$RegexParser* self);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$regex$RegexParser$regex$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$regex$RegexParser* self);
void org$frostlanguage$regex$RegexParser$cleanup(org$frostlanguage$regex$RegexParser* self);

