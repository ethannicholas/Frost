#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Weak frost$core$Weak;
#include "frost/core/Int_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$CodeGenerator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Weak* compiler;
    frost$core$Int nextStatementID;
    frost$core$Int nextBlockID;
    frost$collections$IdentityMap* declarations;
    frost$collections$Array* globals;
    frost$collections$Array* globalValues;
    frost$collections$IdentityMap* classConstants;
    frost$collections$IdentityMap* methodShims;
    org$frostlang$frostc$MethodDecl* currentMethod;
    org$frostlang$frostc$IR* ir;
    frost$collections$Array* out;
    frost$collections$Array* outBlocks;
    frost$collections$Array* block0;
    frost$collections$Array* locals;
    frost$collections$HashMap* statements;
    frost$collections$HashMap* blocks;
    frost$collections$HashMap* refs;
    frost$collections$IdentityMap* nameCache;
} org$frostlang$frostc$CodeGenerator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[35]; } org$frostlang$frostc$CodeGenerator$class_type;
extern org$frostlang$frostc$CodeGenerator$class_type org$frostlang$frostc$CodeGenerator$class;

