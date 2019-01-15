#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/MethodDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"
#include "frost/core/Bit_types.h"

typedef struct org$frostlanguage$frostc$MethodDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Symbol$Kind kind;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    org$frostlanguage$frostc$Annotations* annotations;
    org$frostlanguage$frostc$MethodDecl$Kind methodKind;
    frost$collections$Array* genericParameters;
    frost$collections$Array* parameters;
    org$frostlanguage$frostc$Type* returnType;
    org$frostlanguage$frostc$FixedArray* body;
    org$frostlanguage$frostc$Compiler$Resolution resolved;
    frost$core$Bit overrideKnown;
    frost$core$Weak* overridden;
} org$frostlanguage$frostc$MethodDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[10]; } org$frostlanguage$frostc$MethodDecl$class_type;
extern org$frostlanguage$frostc$MethodDecl$class_type org$frostlanguage$frostc$MethodDecl$class;

