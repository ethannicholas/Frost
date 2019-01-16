#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/FieldDecl/Kind_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "org/frostlang/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlang$frostc$FieldDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Symbol$Kind kind;
    org$frostlang$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    org$frostlang$frostc$Annotations* annotations;
    org$frostlang$frostc$FieldDecl$Kind fieldKind;
    org$frostlang$frostc$Type* type;
    org$frostlang$frostc$ASTNode* rawValue;
    org$frostlang$frostc$Compiler$Resolution resolved;
} org$frostlang$frostc$FieldDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$FieldDecl$class_type;
extern org$frostlang$frostc$FieldDecl$class_type org$frostlang$frostc$FieldDecl$class;

