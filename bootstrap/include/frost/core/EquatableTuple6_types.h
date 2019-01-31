#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Equatable frost$core$Equatable;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$EquatableTuple6 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Equatable* f0;
    frost$core$Equatable* f1;
    frost$core$Equatable* f2;
    frost$core$Equatable* f3;
    frost$core$Equatable* f4;
    frost$core$Equatable* f5;
} frost$core$EquatableTuple6;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$core$EquatableTuple6$class_type;
extern frost$core$EquatableTuple6$class_type frost$core$EquatableTuple6$class;

