#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$AutoScope {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Compiler* compiler;
    org$pandalanguage$pandac$SymbolTable* oldSymbolTable;
    org$pandalanguage$pandac$SymbolTable* newSymbolTable;
} org$pandalanguage$pandac$Compiler$AutoScope;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$AutoScope$class_type;
extern org$pandalanguage$pandac$Compiler$AutoScope$class_type org$pandalanguage$pandac$Compiler$AutoScope$class;

