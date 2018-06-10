#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Compiler$Settings org$pandalanguage$pandac$Compiler$Settings;
typedef struct org$pandalanguage$pandac$parser$Parser org$pandalanguage$pandac$parser$Parser;
typedef struct org$pandalanguage$pandac$Scanner org$pandalanguage$pandac$Scanner;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$Stack panda$collections$Stack;
typedef struct org$pandalanguage$pandac$CodeGenerator org$pandalanguage$pandac$CodeGenerator;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler$Settings* settings;
    org$pandalanguage$pandac$parser$Parser* parser;
    org$pandalanguage$pandac$Scanner* scanner;
    org$pandalanguage$pandac$SymbolTable* root;
    org$pandalanguage$pandac$ClassDecl* compiling;
    panda$collections$Array* compilationQueue;
    panda$collections$HashMap* scans;
    panda$collections$HashMap* classes;
    panda$collections$Stack* currentClass;
    panda$collections$Stack* currentMethod;
    org$pandalanguage$pandac$SymbolTable* symbolTable;
    org$pandalanguage$pandac$CodeGenerator* codeGenerator;
    panda$threads$MessageQueue* errorQueue;
    panda$collections$Stack* loops;
    panda$collections$Stack* finallies;
    panda$core$Int64 reusedValueCount;
    panda$core$Int64 errorCount;
    panda$core$Int64 tmpCount;
    panda$core$Bit reportErrors;
    panda$collections$HashMap* existenceCache;
    panda$core$Bit inFieldCleanup;
    panda$collections$Array* atPreSetupStatements;
    panda$core$Bit inAtPre;
    panda$core$Bit writeCode;
    panda$collections$Stack* captures;
} org$pandalanguage$pandac$Compiler;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[164]; } org$pandalanguage$pandac$Compiler$class_type;
extern org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class;

