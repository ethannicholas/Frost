#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$io$File frost$io$File;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/ClassDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$List frost$collections$List;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlanguage$frostc$ClassDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$io$File* source;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    org$frostlanguage$frostc$Type* type;
    frost$collections$MapView* aliases;
    frost$core$String* doccomment;
    org$frostlanguage$frostc$Annotations* annotations;
    org$frostlanguage$frostc$ClassDecl$Kind classKind;
    frost$collections$Array* declaredSupers;
    org$frostlanguage$frostc$Type* rawSuper;
    frost$collections$Array* rawInterfaces;
    frost$collections$List* parameters;
    frost$collections$Array* fields;
    frost$collections$Array* methods;
    frost$collections$Array* classes;
    frost$collections$Array* choiceCases;
    frost$core$Weak* owner;
    org$frostlanguage$frostc$SymbolTable* symbolTable;
    frost$core$Bit symbolTableResolved;
    frost$core$Bit external;
    frost$collections$Array* virtualMethods;
    frost$collections$HashMap* classResolutionCache;
    org$frostlanguage$frostc$Compiler$Resolution resolved;
} org$frostlanguage$frostc$ClassDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$ClassDecl$class_type;
extern org$frostlanguage$frostc$ClassDecl$class_type org$frostlanguage$frostc$ClassDecl$class;

