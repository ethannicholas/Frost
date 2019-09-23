#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"
#include "frost/core/String/Index_types.h"

typedef struct frost$core$Matcher {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int nativeHandle;
    frost$core$String* searchText;
    frost$core$Bit matched;
    frost$core$String$Index replacementIndex;
} frost$core$Matcher;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[14]; } frost$core$Matcher$class_type;
extern frost$core$Matcher$class_type frost$core$Matcher$class;

