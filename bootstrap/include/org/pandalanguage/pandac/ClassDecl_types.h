#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$MapView panda$collections$MapView;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "org/pandalanguage/pandac/ClassDecl/Kind_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$List panda$collections$List;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "org/pandalanguage/pandac/Compiler/Resolution_types.h"

typedef struct org$pandalanguage$pandac$ClassDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* source;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    org$pandalanguage$pandac$Type* type;
    panda$collections$MapView* aliases;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    org$pandalanguage$pandac$ClassDecl$Kind classKind;
    panda$collections$Array* declaredSupers;
    org$pandalanguage$pandac$Type* rawSuper;
    panda$collections$Array* rawInterfaces;
    panda$collections$List* parameters;
    panda$collections$Array* fields;
    panda$collections$Array* methods;
    panda$collections$Array* classes;
    panda$collections$Array* choiceCases;
    panda$core$Weak* owner;
    org$pandalanguage$pandac$SymbolTable* symbolTable;
    panda$core$Bit symbolTableResolved;
    panda$core$Bit external;
    panda$collections$Array* virtualMethods;
    panda$collections$HashMap* classResolutionCache;
    org$pandalanguage$pandac$Compiler$Resolution resolved;
} org$pandalanguage$pandac$ClassDecl;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$ClassDecl$class_type;
extern org$pandalanguage$pandac$ClassDecl$class_type org$pandalanguage$pandac$ClassDecl$class;

