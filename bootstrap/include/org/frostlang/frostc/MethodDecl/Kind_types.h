#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"

typedef struct org$frostlang$frostc$MethodDecl$Kind {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$MethodDecl$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$MethodDecl$Kind$class_type;
extern org$frostlang$frostc$MethodDecl$Kind$class_type org$frostlang$frostc$MethodDecl$Kind$class;
typedef struct org$frostlang$frostc$MethodDecl$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$MethodDecl$Kind value;
} org$frostlang$frostc$MethodDecl$Kind$wrapper;
typedef struct org$frostlang$frostc$MethodDecl$Kind$nullable {
    org$frostlang$frostc$MethodDecl$Kind value;
    bool nonnull;
} org$frostlang$frostc$MethodDecl$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$MethodDecl$Kind$wrapperclass_type;
extern org$frostlang$frostc$MethodDecl$Kind$wrapperclass_type org$frostlang$frostc$MethodDecl$Kind$wrapperclass;

