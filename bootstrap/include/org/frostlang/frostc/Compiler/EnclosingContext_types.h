#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$Compiler$InlineReturn org$frostlang$frostc$Compiler$InlineReturn;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;

typedef struct org$frostlang$frostc$Compiler$EnclosingContext {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$collections$ListView* field0;
            frost$core$Int field1;
            org$frostlang$frostc$Compiler$InlineReturn* field2;
            org$frostlang$frostc$IR$Block$ID field3;
        } $INLINE_CONTEXT;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$IR$Block$ID field1;
            org$frostlang$frostc$IR$Block$ID field2;
        } $LOOP;
        struct {
        } $SCOPE;
        struct {
            org$frostlang$frostc$Variable* field0;
        } $VARIABLE_SCOPE;
        struct {
            org$frostlang$frostc$IR$Value* field0;
        } $VALUE_SCOPE;
        struct {
            org$frostlang$frostc$IR$Block$ID$nullable field0;
            org$frostlang$frostc$Variable* field1;
        } $TRY_SCOPE;
    } $data;
} org$frostlang$frostc$Compiler$EnclosingContext;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$EnclosingContext$class_type;
extern org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class;

