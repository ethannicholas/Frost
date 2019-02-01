#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$KeyTuple16 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Key* f0;
    frost$collections$Key* f1;
    frost$collections$Key* f2;
    frost$collections$Key* f3;
    frost$collections$Key* f4;
    frost$collections$Key* f5;
    frost$collections$Key* f6;
    frost$collections$Key* f7;
    frost$collections$Key* f8;
    frost$collections$Key* f9;
    frost$collections$Key* f10;
    frost$collections$Key* f11;
    frost$collections$Key* f12;
    frost$collections$Key* f13;
    frost$collections$Key* f14;
    frost$collections$Key* f15;
} frost$core$KeyTuple16;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$core$KeyTuple16$class_type;
extern frost$core$KeyTuple16$class_type frost$core$KeyTuple16$class;

