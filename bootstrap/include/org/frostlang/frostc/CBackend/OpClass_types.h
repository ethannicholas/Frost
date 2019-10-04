#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/CBackend/OpClass_types.h"

typedef struct org$frostlang$frostc$CBackend$OpClass {
    frost$core$Int $rawValue;
    union {
        struct {
        } $SIGNED;
        struct {
        } $UNSIGNED;
        struct {
        } $FLOAT;
        struct {
        } $CLASS;
    } $data;
} org$frostlang$frostc$CBackend$OpClass;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$CBackend$OpClass$class_type;
extern org$frostlang$frostc$CBackend$OpClass$class_type org$frostlang$frostc$CBackend$OpClass$class;
typedef struct org$frostlang$frostc$CBackend$OpClass$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$CBackend$OpClass value;
} org$frostlang$frostc$CBackend$OpClass$wrapper;
typedef struct org$frostlang$frostc$CBackend$OpClass$nullable {
    org$frostlang$frostc$CBackend$OpClass value;
    bool nonnull;
} org$frostlang$frostc$CBackend$OpClass$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$CBackend$OpClass$wrapperclass_type;
extern org$frostlang$frostc$CBackend$OpClass$wrapperclass_type org$frostlang$frostc$CBackend$OpClass$wrapperclass;

