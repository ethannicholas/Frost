#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;

typedef struct panda$io$IndentedOutputStream {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 level;
    panda$core$Int64 indentSize;
    panda$core$String* indent;
    panda$core$Bit atLineStart;
    panda$io$OutputStream* out;
} panda$io$IndentedOutputStream;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[24]; } panda$io$IndentedOutputStream$class_type;
extern panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class;

