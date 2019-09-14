#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Real64_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$MapView frost$collections$MapView;
typedef struct frost$collections$ListView frost$collections$ListView;

typedef struct frost$json$JSON {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$Int field0;
        } $INT;
        struct {
            frost$core$Real64 field0;
        } $REAL;
        struct {
            frost$core$String* field0;
        } $STRING;
        struct {
            frost$core$Bit field0;
        } $BIT;
        struct {
            frost$collections$MapView* field0;
        } $MAP;
        struct {
            frost$collections$ListView* field0;
        } $LIST;
        struct {
        } $NULL;
    } $data;
} frost$json$JSON;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[14]; } frost$json$JSON$class_type;
extern frost$json$JSON$class_type frost$json$JSON$class;

