#pragma once
#include "frost_c.h"
#include "SymbolTable_types.h"
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$Symbol org$frostlang$frostc$Symbol;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$List frost$collections$List;

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(void* rawSelf, org$frostlang$frostc$SymbolTable* p_parent);
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol(void* rawSelf, org$frostlang$frostc$Symbol* p_s);
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(void* rawSelf, org$frostlang$frostc$Symbol* p_s, frost$core$String* p_name);
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(void* rawSelf, org$frostlang$frostc$MethodDecl* p_m, frost$collections$List* p_methods);
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(void* rawSelf, org$frostlang$frostc$Symbol* p_symbol, org$frostlang$frostc$Symbol* p_inherited);
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(void* rawSelf, frost$core$String* p_name);
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$SymbolTable$cleanup(void* rawSelf);

