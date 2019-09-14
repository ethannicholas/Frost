#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$Error frost$core$Error;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$Maybe {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$Object* field0;
        } $SUCCESS;
        struct {
            frost$core$Error* field0;
        } $ERROR;
    } $data;
} frost$core$Maybe;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$core$Maybe$class_type;
extern frost$core$Maybe$class_type frost$core$Maybe$class;

