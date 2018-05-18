#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$AutoSymbolTable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
    org$pandalanguage$pandac$SymbolTable* oldSymbolTable;
    org$pandalanguage$pandac$SymbolTable* newSymbolTable;
} org$pandalanguage$pandac$Compiler$AutoSymbolTable;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$AutoSymbolTable$class_type;
extern org$pandalanguage$pandac$Compiler$AutoSymbolTable$class_type org$pandalanguage$pandac$Compiler$AutoSymbolTable$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$AutoSymbolTable org$pandalanguage$pandac$Compiler$AutoSymbolTable;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;

void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$SymbolTable* p_symbolTable);
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$cleanup(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self);

#endif
