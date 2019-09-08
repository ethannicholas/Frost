#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/expression/Call/ImplicationsResult_types.h"

typedef struct org$frostlang$frostc$expression$Call$ImplicationsResult {
    frost$core$Int $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$expression$Call$ImplicationsResult;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$expression$Call$ImplicationsResult$class_type;
extern org$frostlang$frostc$expression$Call$ImplicationsResult$class_type org$frostlang$frostc$expression$Call$ImplicationsResult$class;
typedef struct org$frostlang$frostc$expression$Call$ImplicationsResult$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$expression$Call$ImplicationsResult value;
} org$frostlang$frostc$expression$Call$ImplicationsResult$wrapper;
typedef struct org$frostlang$frostc$expression$Call$ImplicationsResult$nullable {
    org$frostlang$frostc$expression$Call$ImplicationsResult value;
    bool nonnull;
} org$frostlang$frostc$expression$Call$ImplicationsResult$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$expression$Call$ImplicationsResult$wrapperclass_type;
extern org$frostlang$frostc$expression$Call$ImplicationsResult$wrapperclass_type org$frostlang$frostc$expression$Call$ImplicationsResult$wrapperclass;

