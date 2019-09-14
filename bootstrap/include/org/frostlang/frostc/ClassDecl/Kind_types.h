#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"

typedef struct org$frostlang$frostc$ClassDecl$Kind {
    frost$core$Int $rawValue;
    union {
        struct {
        } $CLASS;
        struct {
        } $INTERFACE;
        struct {
        } $CHOICE;
    } $data;
} org$frostlang$frostc$ClassDecl$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$ClassDecl$Kind$class_type;
extern org$frostlang$frostc$ClassDecl$Kind$class_type org$frostlang$frostc$ClassDecl$Kind$class;
typedef struct org$frostlang$frostc$ClassDecl$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$ClassDecl$Kind value;
} org$frostlang$frostc$ClassDecl$Kind$wrapper;
typedef struct org$frostlang$frostc$ClassDecl$Kind$nullable {
    org$frostlang$frostc$ClassDecl$Kind value;
    bool nonnull;
} org$frostlang$frostc$ClassDecl$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$ClassDecl$Kind$wrapperclass_type;
extern org$frostlang$frostc$ClassDecl$Kind$wrapperclass_type org$frostlang$frostc$ClassDecl$Kind$wrapperclass;

