#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$Interpreter$MethodCode org$frostlang$frostc$Interpreter$MethodCode;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Interpreter$Context {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Weak* interpreter;
    org$frostlang$frostc$Interpreter$MethodCode* code;
    frost$collections$Array* locals;
    frost$collections$Array* arguments;
    frost$collections$Array* statements;
} org$frostlang$frostc$Interpreter$Context;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Interpreter$Context$class_type;
extern org$frostlang$frostc$Interpreter$Context$class_type org$frostlang$frostc$Interpreter$Context$class;
