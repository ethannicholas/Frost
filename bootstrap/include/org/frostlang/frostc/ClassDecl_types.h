#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$io$File frost$io$File;
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$collections$List frost$collections$List;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "org/frostlang/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlang$frostc$ClassDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$io$File* source;
    org$frostlang$frostc$Position position;
    frost$core$Int TEST1;
    frost$core$String* name;
    frost$core$Int TEST2;
    org$frostlang$frostc$Type* type;
    frost$collections$MapView* aliases;
    frost$core$String* doccomment;
    org$frostlang$frostc$Annotations* annotations;
    org$frostlang$frostc$ClassDecl$Kind classKind;
    frost$collections$Array* declaredSupers;
    org$frostlang$frostc$Type* rawSuper;
    frost$collections$Array* rawInterfaces;
    frost$collections$List* parameters;
    frost$collections$Array* fields;
    frost$collections$Array* methods;
    frost$collections$Array* classes;
    frost$collections$Array* choiceCases;
    frost$core$Weak* owner;
    org$frostlang$frostc$SymbolTable* symbolTable;
    frost$core$Bit symbolTableResolved;
    frost$core$Bit external;
    frost$collections$Array* virtualMethods;
    frost$collections$HashMap* classResolutionCache;
    org$frostlang$frostc$Compiler$Resolution resolved;
} org$frostlang$frostc$ClassDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$ClassDecl$class_type;
extern org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class;

