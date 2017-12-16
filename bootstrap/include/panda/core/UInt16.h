#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/UInt16.h"

typedef struct panda$core$UInt16 {
    uint16_t value;
} panda$core$UInt16;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[153]; } panda$core$UInt16$class_type;
extern panda$core$UInt16$class_type panda$core$UInt16$class;
typedef struct panda$core$UInt16$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$UInt16 value;
} panda$core$UInt16$wrapper;
typedef struct panda$core$UInt16$nullable {
    panda$core$UInt16 value;
    bool nonnull;
} panda$core$UInt16$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$UInt16$wrapperclass_type;
extern panda$core$UInt16$wrapperclass_type panda$core$UInt16$wrapperclass;
panda$core$UInt16$wrapper* wrap_panda$core$UInt16(panda$core$UInt16 self);

#ifndef PANDA_TYPESONLY
#include "panda/core/UInt16.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
typedef struct panda$core$String panda$core$String;

void panda$core$UInt16$init$builtin_uint16(panda$core$UInt16* self, uint16_t p_value);
void panda$core$UInt16$init$panda$core$UInt8(panda$core$UInt16* self, panda$core$UInt8 p_value);
panda$core$Int32 panda$core$UInt16$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$UInt16 panda$core$UInt16$$SUB$R$panda$core$UInt16(panda$core$UInt16 self);
panda$core$Int32 panda$core$UInt16$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$UInt16 panda$core$UInt16$$BNOT$R$panda$core$UInt16(panda$core$UInt16 self);
panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$UInt16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$UInt16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$UInt16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$UInt16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$min$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$UInt16$max$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$UInt16$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 self, panda$core$Int16 p_other);
panda$core$Int64 panda$core$UInt16$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 self, panda$core$Int32 p_other);
panda$core$UInt32 panda$core$UInt16$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$UInt16$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$UInt16$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$UInt16$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int8 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int16 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int32 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$Int64 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt8 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt16 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt32 p_index);
panda$core$Bit panda$core$UInt16$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 self, panda$core$UInt64 p_index);
panda$core$Int64 panda$core$UInt16$hash$R$panda$core$Int64(panda$core$UInt16 self);
panda$core$Int8 panda$core$UInt16$convert$R$panda$core$Int8(panda$core$UInt16 self);
panda$core$Int16 panda$core$UInt16$convert$R$panda$core$Int16(panda$core$UInt16 self);
panda$core$Int32 panda$core$UInt16$convert$R$panda$core$Int32(panda$core$UInt16 self);
panda$core$Int64 panda$core$UInt16$convert$R$panda$core$Int64(panda$core$UInt16 self);
panda$core$UInt8 panda$core$UInt16$convert$R$panda$core$UInt8(panda$core$UInt16 self);
panda$core$UInt32 panda$core$UInt16$convert$R$panda$core$UInt32(panda$core$UInt16 self);
panda$core$UInt64 panda$core$UInt16$convert$R$panda$core$UInt64(panda$core$UInt16 self);
panda$core$Real32 panda$core$UInt16$convert$R$panda$core$Real32(panda$core$UInt16 self);
panda$core$Real64 panda$core$UInt16$convert$R$panda$core$Real64(panda$core$UInt16 self);
panda$core$String* panda$core$UInt16$convert$R$panda$core$String(panda$core$UInt16 self);

#endif
