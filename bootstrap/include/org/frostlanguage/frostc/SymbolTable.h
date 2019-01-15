#pragma once
#include "frost_c.h"
#include "SymbolTable_types.h"
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Symbol org$frostlanguage$frostc$Symbol;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct frost$collections$List frost$collections$List;

void org$frostlanguage$frostc$SymbolTable$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$Compiler* p_compiler);
void org$frostlanguage$frostc$SymbolTable$init$org$frostlanguage$frostc$SymbolTable(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$SymbolTable* p_parent);
void org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$Symbol* p_s);
void org$frostlanguage$frostc$SymbolTable$add$org$frostlanguage$frostc$Symbol$frost$core$String(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$Symbol* p_s, frost$core$String* p_name);
void org$frostlanguage$frostc$SymbolTable$addIfNotOverridden$org$frostlanguage$frostc$MethodDecl$frost$collections$List$LTorg$frostlanguage$frostc$MethodDecl$GT(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$MethodDecl* p_m, frost$collections$List* p_methods);
org$frostlanguage$frostc$Symbol* org$frostlanguage$frostc$SymbolTable$merge$org$frostlanguage$frostc$Symbol$Q$org$frostlanguage$frostc$Symbol$Q$R$org$frostlanguage$frostc$Symbol$Q(org$frostlanguage$frostc$SymbolTable* self, org$frostlanguage$frostc$Symbol* p_symbol, org$frostlanguage$frostc$Symbol* p_inherited);
org$frostlanguage$frostc$Symbol* org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q(org$frostlanguage$frostc$SymbolTable* self, frost$core$String* p_name);
frost$core$String* org$frostlanguage$frostc$SymbolTable$convert$R$frost$core$String(org$frostlanguage$frostc$SymbolTable* self);
void org$frostlanguage$frostc$SymbolTable$cleanup(org$frostlanguage$frostc$SymbolTable* self);

