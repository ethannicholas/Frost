#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
#include "org/frostlang/frostc/Compiler/Resolution_types.h"
#include "frost/core/Bit_types.h"

typedef struct org$frostlang$frostc$MethodDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Symbol$Kind kind;
    org$frostlang$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    frost$core$Int index;
    org$frostlang$frostc$Annotations* annotations;
    org$frostlang$frostc$MethodDecl$Kind methodKind;
    frost$collections$Array* genericParameters;
    frost$collections$Array* parameters;
    org$frostlang$frostc$Type* returnType;
    org$frostlang$frostc$FixedArray* body;
    org$frostlang$frostc$Compiler$Resolution resolved;
    frost$core$Bit overrideKnown;
    frost$core$Weak* overridden;
} org$frostlang$frostc$MethodDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[11]; } org$frostlang$frostc$MethodDecl$class_type;
extern org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class;

