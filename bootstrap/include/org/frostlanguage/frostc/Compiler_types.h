#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler$Settings org$frostlanguage$frostc$Compiler$Settings;
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
typedef struct org$frostlanguage$frostc$Scanner org$frostlanguage$frostc$Scanner;
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$Stack frost$collections$Stack;
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;
typedef struct org$frostlanguage$frostc$CodeGenerator org$frostlanguage$frostc$CodeGenerator;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
#include "org/frostlanguage/frostc/IR/Block/ID_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler$Settings* settings;
    org$frostlanguage$frostc$parser$Parser* parser;
    org$frostlanguage$frostc$Scanner* scanner;
    org$frostlanguage$frostc$SymbolTable* root;
    org$frostlanguage$frostc$ClassDecl* compiling;
    frost$collections$Array* compilationQueue;
    frost$collections$HashMap* scans;
    frost$collections$HashMap* classes;
    frost$collections$Stack* currentClass;
    frost$collections$Stack* currentMethod;
    org$frostlanguage$frostc$IR* ir;
    org$frostlanguage$frostc$SymbolTable* symbolTable;
    org$frostlanguage$frostc$SymbolTable* methodSymbolTable;
    org$frostlanguage$frostc$CodeGenerator* codeGenerator;
    frost$threads$MessageQueue* errorQueue;
    frost$collections$Stack* enclosingContexts;
    frost$core$Int64 errorCount;
    frost$core$Int64 closureCount;
    frost$collections$HashMap* existenceCache;
    frost$core$Bit reportErrors;
    frost$collections$Array* pendingClasses;
    frost$core$Bit inAtPre;
    org$frostlanguage$frostc$IR$Value* returnValue;
    org$frostlanguage$frostc$IR$Block$ID$nullable atPreBlock;
    frost$collections$Stack* captures;
    frost$core$Bit writeCode;
    frost$core$Bit inFieldCleanup;
    frost$collections$HashMap* coercionCosts;
    frost$collections$HashMap* binaryTypes;
    frost$collections$IdentityMap* lambdaTypes;
} org$frostlanguage$frostc$Compiler;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[145]; } org$frostlanguage$frostc$Compiler$class_type;
extern org$frostlanguage$frostc$Compiler$class_type org$frostlanguage$frostc$Compiler$class;

