#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/FieldDecl/Kind_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlanguage$frostc$FieldDecl {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Symbol$Kind kind;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    org$frostlanguage$frostc$Annotations* annotations;
    org$frostlanguage$frostc$FieldDecl$Kind fieldKind;
    org$frostlanguage$frostc$Type* type;
    org$frostlanguage$frostc$ASTNode* rawValue;
    org$frostlanguage$frostc$Compiler$Resolution resolved;
} org$frostlanguage$frostc$FieldDecl;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$frostc$FieldDecl$class_type;
extern org$frostlanguage$frostc$FieldDecl$class_type org$frostlanguage$frostc$FieldDecl$class;

