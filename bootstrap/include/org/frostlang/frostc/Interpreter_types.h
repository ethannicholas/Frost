#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashMap frost$collections$HashMap;
#include "frost/core/Int_types.h"
typedef struct frost$core$Weak frost$core$Weak;
typedef struct org$frostlang$frostc$MemoryLayout org$frostlang$frostc$MemoryLayout;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$collections$Stack frost$collections$Stack;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Interpreter {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashMap* strings;
    frost$core$Int stackSize;
    frost$core$UInt8* stackBase;
    frost$core$UInt8* stack;
    frost$core$Int maxId;
    frost$core$Weak* compiler;
    org$frostlang$frostc$MemoryLayout* memoryLayout;
    frost$collections$IdentityMap* methodCode;
    frost$collections$IdentityMap* builtins;
    frost$collections$Stack* contexts;
    org$frostlang$frostc$MethodDecl* main;
} org$frostlang$frostc$Interpreter;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[25]; } org$frostlang$frostc$Interpreter$class_type;
extern org$frostlang$frostc$Interpreter$class_type org$frostlang$frostc$Interpreter$class;

