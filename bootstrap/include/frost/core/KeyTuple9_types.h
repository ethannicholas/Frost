#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$KeyTuple9 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$Key* f0;
    frost$collections$Key* f1;
    frost$collections$Key* f2;
    frost$collections$Key* f3;
    frost$collections$Key* f4;
    frost$collections$Key* f5;
    frost$collections$Key* f6;
    frost$collections$Key* f7;
    frost$collections$Key* f8;
} frost$core$KeyTuple9;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$core$KeyTuple9$class_type;
extern frost$core$KeyTuple9$class_type frost$core$KeyTuple9$class;

