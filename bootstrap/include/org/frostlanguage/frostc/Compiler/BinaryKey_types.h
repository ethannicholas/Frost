#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$BinaryKey {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$ASTNode* left;
    org$frostlanguage$frostc$parser$Token$Kind op;
    org$frostlanguage$frostc$ASTNode* right;
} org$frostlanguage$frostc$Compiler$BinaryKey;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$Compiler$BinaryKey$class_type;
extern org$frostlanguage$frostc$Compiler$BinaryKey$class_type org$frostlanguage$frostc$Compiler$BinaryKey$class;

