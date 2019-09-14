#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;

typedef struct org$frostlang$frostc$Annotations$Expression {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$ASTNode* field1;
        } $PRE;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$ASTNode* field1;
        } $PRE_OR;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$ASTNode* field1;
        } $POST;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$ASTNode* field1;
        } $POST_AND;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$ASTNode* field1;
        } $PRIORITY;
    } $data;
} org$frostlang$frostc$Annotations$Expression;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Annotations$Expression$class_type;
extern org$frostlang$frostc$Annotations$Expression$class_type org$frostlang$frostc$Annotations$Expression$class;

