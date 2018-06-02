#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$SymbolTable {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* symbols;
    panda$core$Weak* compiler;
    panda$collections$HashMap* merged;
    panda$collections$Array* parents;
} org$pandalanguage$pandac$SymbolTable;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[7]; } org$pandalanguage$pandac$SymbolTable$class_type;
extern org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class;

