#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/CodeGenerator/TypeClass_types.h"

typedef struct org$frostlang$frostc$CodeGenerator$TypeClass {
    frost$core$Int $rawValue;
    union {
        struct {
        } $SIGNED;
        struct {
        } $UNSIGNED;
        struct {
        } $FLOAT;
        struct {
        } $BIT;
        struct {
        } $OTHER;
    } $data;
} org$frostlang$frostc$CodeGenerator$TypeClass;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$CodeGenerator$TypeClass$class_type;
extern org$frostlang$frostc$CodeGenerator$TypeClass$class_type org$frostlang$frostc$CodeGenerator$TypeClass$class;
typedef struct org$frostlang$frostc$CodeGenerator$TypeClass$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$CodeGenerator$TypeClass value;
} org$frostlang$frostc$CodeGenerator$TypeClass$wrapper;
typedef struct org$frostlang$frostc$CodeGenerator$TypeClass$nullable {
    org$frostlang$frostc$CodeGenerator$TypeClass value;
    bool nonnull;
} org$frostlang$frostc$CodeGenerator$TypeClass$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$CodeGenerator$TypeClass$wrapperclass_type;
extern org$frostlang$frostc$CodeGenerator$TypeClass$wrapperclass_type org$frostlang$frostc$CodeGenerator$TypeClass$wrapperclass;

