#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Compiler$Settings org$frostlang$frostc$Compiler$Settings;
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
typedef struct org$frostlang$frostc$Scanner org$frostlang$frostc$Scanner;
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$Stack frost$collections$Stack;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$CodeGenerator org$frostlang$frostc$CodeGenerator;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Compiler$Settings* settings;
    org$frostlang$frostc$parser$Parser* parser;
    org$frostlang$frostc$Scanner* scanner;
    org$frostlang$frostc$SymbolTable* root;
    org$frostlang$frostc$ClassDecl* compiling;
    frost$collections$Array* compilationQueue;
    frost$collections$Array* files;
    frost$collections$HashMap* scans;
    frost$collections$HashMap* classes;
    frost$collections$Stack* currentClass;
    frost$collections$Stack* currentMethod;
    org$frostlang$frostc$IR* ir;
    org$frostlang$frostc$SymbolTable* symbolTable;
    org$frostlang$frostc$SymbolTable* methodSymbolTable;
    org$frostlang$frostc$CodeGenerator* codeGenerator;
    frost$threads$MessageQueue* errorQueue;
    frost$collections$Stack* enclosingContexts;
    frost$core$Int64 errorCount;
    frost$core$Int64 closureCount;
    frost$core$Int64 tempCount;
    frost$collections$HashMap* existenceCache;
    frost$core$Bit reportErrors;
    frost$collections$Array* pendingClasses;
    frost$core$Bit inAtPre;
    org$frostlang$frostc$Variable* returnVar;
    org$frostlang$frostc$IR$Block$ID$nullable atPreBlock;
    org$frostlang$frostc$IR$Block$ID$nullable postconditionEntryBlock;
    org$frostlang$frostc$IR$Block$ID$nullable postconditionCurrentBlock;
    frost$collections$Stack* captures;
    frost$core$Bit writeCode;
    frost$core$Bit inFieldCleanup;
    frost$collections$HashMap* coercionCosts;
    frost$collections$HashMap* binaryTypes;
    frost$collections$IdentityMap* lambdaTypes;
} org$frostlang$frostc$Compiler;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[157]; } org$frostlang$frostc$Compiler$class_type;
extern org$frostlang$frostc$Compiler$class_type org$frostlang$frostc$Compiler$class;

