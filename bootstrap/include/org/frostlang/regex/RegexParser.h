#pragma once
#include "frost_c.h"
#include "RegexParser_types.h"
typedef struct org$frostlang$regex$RegexParser org$frostlang$regex$RegexParser;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/regex/RegexToken_types.h"
#include "frost/core/Bit_types.h"
#include "org/frostlang/regex/RegexToken/Kind_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(void* rawSelf, frost$threads$MessageQueue* p_errors);
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int$frost$core$String(void* rawSelf, frost$io$File* p_path, frost$core$Int p_pathIndex, frost$core$String* p_source);
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(void* rawSelf);
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(void* rawSelf, org$frostlang$regex$RegexToken p_token);
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(void* rawSelf, org$frostlang$regex$RegexToken$Kind p_kind);
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(void* rawSelf, org$frostlang$regex$RegexToken$Kind p_kind, frost$core$String* p_expected);
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(void* rawSelf, org$frostlang$regex$RegexToken p_token, frost$core$String* p_msg);
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(void* rawSelf, org$frostlang$regex$RegexToken p_token);
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(void* rawSelf);
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(void* rawSelf);
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(void* rawSelf);
void org$frostlang$regex$RegexParser$cleanup(void* rawSelf);

