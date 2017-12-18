#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Int32 {
    int32_t value;
} panda$core$Int32;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[155]; } panda$core$Int32$class_type;
extern panda$core$Int32$class_type panda$core$Int32$class;
typedef struct panda$core$Int32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Int32 value;
} panda$core$Int32$wrapper;
typedef struct panda$core$Int32$nullable {
    panda$core$Int32 value;
    bool nonnull;
} panda$core$Int32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Int32$wrapperclass_type;
extern panda$core$Int32$wrapperclass_type panda$core$Int32$wrapperclass;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"

void panda$core$Int32$init$builtin_int32(panda$core$Int32* self, int32_t p_value);
void panda$core$Int32$init$panda$core$Int8(panda$core$Int32* self, panda$core$Int8 p_value);
void panda$core$Int32$init$panda$core$Int16(panda$core$Int32* self, panda$core$Int16 p_value);
void panda$core$Int32$init$panda$core$UInt8(panda$core$Int32* self, panda$core$UInt8 p_value);
void panda$core$Int32$init$panda$core$UInt16(panda$core$Int32* self, panda$core$UInt16 p_value);
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32(panda$core$Int32 self);
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32(panda$core$Int32 self);
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other);
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$UInt64 panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$abs$R$panda$core$Int32(panda$core$Int32 self);
panda$core$Int32 panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Int32 panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other);
panda$core$Int32 panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other);
panda$core$Int32 panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other);
panda$core$Int64 panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other);
panda$core$Int64 panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other);
panda$core$Int64 panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other);
panda$core$Int64 panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other);
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_index);
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt64 p_index);
panda$core$Int64 panda$core$Int32$hash$R$panda$core$Int64(panda$core$Int32 self);
panda$core$Int32$nullable panda$core$Int32$parse$panda$core$String$panda$core$Int64$R$panda$core$Int32$Q(panda$core$String* p_str, panda$core$Int64 p_radix);
panda$core$Int8 panda$core$Int32$convert$R$panda$core$Int8(panda$core$Int32 self);
panda$core$Int16 panda$core$Int32$convert$R$panda$core$Int16(panda$core$Int32 self);
panda$core$Int64 panda$core$Int32$convert$R$panda$core$Int64(panda$core$Int32 self);
panda$core$UInt8 panda$core$Int32$convert$R$panda$core$UInt8(panda$core$Int32 self);
panda$core$UInt16 panda$core$Int32$convert$R$panda$core$UInt16(panda$core$Int32 self);
panda$core$UInt32 panda$core$Int32$convert$R$panda$core$UInt32(panda$core$Int32 self);
panda$core$UInt64 panda$core$Int32$convert$R$panda$core$UInt64(panda$core$Int32 self);
panda$core$Real32 panda$core$Int32$convert$R$panda$core$Real32(panda$core$Int32 self);
panda$core$Real64 panda$core$Int32$convert$R$panda$core$Real64(panda$core$Int32 self);
panda$core$String* panda$core$Int32$convert$R$panda$core$String(panda$core$Int32 self);
panda$core$String* panda$core$Int32$format$panda$core$String$R$panda$core$String(panda$core$Int32 self, panda$core$String* p_fmt);

#endif
