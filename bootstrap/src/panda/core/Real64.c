#include "panda/core/Real64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* panda$core$Real64$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Real64$format$panda$core$String$R$panda$core$String(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Real64$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real64$get_hash$R$panda$core$Int64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, ((panda$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Real64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Int8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Int16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Int32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$UInt8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$UInt16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$UInt32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Real32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$EQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$EQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$NEQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$LT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$LT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$GT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$GT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$GE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$GE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real64$$LE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Bit result = panda$core$Real64$$LE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$abs$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Real64$abs$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$Int8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$Int16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$Int32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$Int64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$UInt8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$UInt16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$UInt32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$min$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real64$min$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$Int8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$Int16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$Int32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$Int64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$UInt8$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$UInt16$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$UInt32$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$max$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real64$max$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Real64$convert$R$panda$core$Int8(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Real64$convert$R$panda$core$Int16(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Real64$convert$R$panda$core$Int32(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real64$convert$R$panda$core$Int64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Real64$convert$R$panda$core$UInt8(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Real64$convert$R$panda$core$UInt16(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Real64$convert$R$panda$core$UInt32(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Real64$convert$R$panda$core$UInt64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real64$convert$R$panda$core$Real32(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real64$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Real64$convert$R$panda$core$Real64(((panda$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Real64$cleanup$shim(panda$core$Object* p0) {
    panda$core$Real64$cleanup(((panda$core$Real64$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Real64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Real64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real64$_panda$core$Formattable, { panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real64$_panda$core$Comparable, { panda$core$Real64$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Real64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real64$_panda$collections$Key, { panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Real64$class_type panda$core$Real64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real64$_panda$core$Equatable, { panda$core$Real64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real64$$SUB$R$panda$core$Real64$shim, panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Real32$R$panda$core$Real64$shim, panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real64$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$abs$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Real64$min$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Real64$max$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real64$get_hash$R$panda$core$Int64$shim, panda$core$Real64$convert$R$panda$core$Int8$shim, panda$core$Real64$convert$R$panda$core$Int16$shim, panda$core$Real64$convert$R$panda$core$Int32$shim, panda$core$Real64$convert$R$panda$core$Int64$shim, panda$core$Real64$convert$R$panda$core$UInt8$shim, panda$core$Real64$convert$R$panda$core$UInt16$shim, panda$core$Real64$convert$R$panda$core$UInt32$shim, panda$core$Real64$convert$R$panda$core$UInt64$shim, panda$core$Real64$convert$R$panda$core$Real32$shim, panda$core$Real64$convert$R$panda$core$Real64$shim, panda$core$Real64$format$panda$core$String$R$panda$core$String$shim, panda$core$Real64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Real64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Real64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real64$wrapper_panda$core$Formattable, { panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real64$wrapper_panda$core$Comparable, { panda$core$Real64$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Real64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real64$wrapper_panda$collections$Key, { panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Real64$wrapperclass_type panda$core$Real64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real64$wrapper_panda$core$Equatable, { panda$core$Real64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };

panda$core$Real64 panda$core$Real64$init$builtin_float64(double param0) {

panda$core$Real64 local0;
// line 18
double* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
panda$core$Real64 $tmp4 = *(&local0);
return $tmp4;

}
panda$core$Real64 panda$core$Real64$init$panda$core$Int8(panda$core$Int8 param0) {

panda$core$Real64 local0;
// line 24
int8_t $tmp5 = param0.value;
double* $tmp6 = &(&local0)->value;
*$tmp6 = ((double) $tmp5);
panda$core$Real64 $tmp7 = *(&local0);
return $tmp7;

}
panda$core$Real64 panda$core$Real64$init$panda$core$Int16(panda$core$Int16 param0) {

panda$core$Real64 local0;
// line 30
int16_t $tmp8 = param0.value;
double* $tmp9 = &(&local0)->value;
*$tmp9 = ((double) $tmp8);
panda$core$Real64 $tmp10 = *(&local0);
return $tmp10;

}
panda$core$Real64 panda$core$Real64$init$panda$core$Int32(panda$core$Int32 param0) {

panda$core$Real64 local0;
// line 36
int32_t $tmp11 = param0.value;
double* $tmp12 = &(&local0)->value;
*$tmp12 = ((double) $tmp11);
panda$core$Real64 $tmp13 = *(&local0);
return $tmp13;

}
panda$core$Real64 panda$core$Real64$init$panda$core$Int64(panda$core$Int64 param0) {

panda$core$Real64 local0;
// line 42
int64_t $tmp14 = param0.value;
double* $tmp15 = &(&local0)->value;
*$tmp15 = ((double) $tmp14);
panda$core$Real64 $tmp16 = *(&local0);
return $tmp16;

}
panda$core$Real64 panda$core$Real64$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Real64 local0;
// line 48
uint8_t $tmp17 = param0.value;
double* $tmp18 = &(&local0)->value;
*$tmp18 = ((double) $tmp17);
panda$core$Real64 $tmp19 = *(&local0);
return $tmp19;

}
panda$core$Real64 panda$core$Real64$init$panda$core$UInt16(panda$core$UInt16 param0) {

panda$core$Real64 local0;
// line 54
uint16_t $tmp20 = param0.value;
double* $tmp21 = &(&local0)->value;
*$tmp21 = ((double) $tmp20);
panda$core$Real64 $tmp22 = *(&local0);
return $tmp22;

}
panda$core$Real64 panda$core$Real64$init$panda$core$UInt32(panda$core$UInt32 param0) {

panda$core$Real64 local0;
// line 60
uint32_t $tmp23 = param0.value;
double* $tmp24 = &(&local0)->value;
*$tmp24 = ((double) $tmp23);
panda$core$Real64 $tmp25 = *(&local0);
return $tmp25;

}
panda$core$Real64 panda$core$Real64$init$panda$core$UInt64(panda$core$UInt64 param0) {

panda$core$Real64 local0;
// line 66
uint64_t $tmp26 = param0.value;
double* $tmp27 = &(&local0)->value;
*$tmp27 = ((double) $tmp26);
panda$core$Real64 $tmp28 = *(&local0);
return $tmp28;

}
panda$core$Real64 panda$core$Real64$init$panda$core$Real32(panda$core$Real32 param0) {

panda$core$Real64 local0;
// line 72
float $tmp29 = param0.value;
double* $tmp30 = &(&local0)->value;
*$tmp30 = ((double) $tmp29);
panda$core$Real64 $tmp31 = *(&local0);
return $tmp31;

}
panda$core$Real64 panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 78
double $tmp32 = param0.value;
double $tmp33 = param1.value;
double $tmp34 = $tmp32 + $tmp33;
panda$core$Real64 $tmp35 = panda$core$Real64$init$builtin_float64($tmp34);
return $tmp35;

}
panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 84
double $tmp36 = param0.value;
double $tmp37 = param1.value;
double $tmp38 = $tmp36 - $tmp37;
panda$core$Real64 $tmp39 = panda$core$Real64$init$builtin_float64($tmp38);
return $tmp39;

}
panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64(panda$core$Real64 param0) {

// line 89
double $tmp40 = param0.value;
double $tmp41 = -$tmp40;
panda$core$Real64 $tmp42 = (panda$core$Real64) {$tmp41};
return $tmp42;

}
panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 95
double $tmp43 = param0.value;
double $tmp44 = param1.value;
double $tmp45 = $tmp43 * $tmp44;
panda$core$Real64 $tmp46 = panda$core$Real64$init$builtin_float64($tmp45);
return $tmp46;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int8 param1) {

// line 101
double $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = $tmp47 / ((double) $tmp48);
panda$core$Real64 $tmp50 = panda$core$Real64$init$builtin_float64($tmp49);
return $tmp50;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int16 param1) {

// line 107
double $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = $tmp51 / ((double) $tmp52);
panda$core$Real64 $tmp54 = panda$core$Real64$init$builtin_float64($tmp53);
return $tmp54;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int32 param1) {

// line 113
double $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = $tmp55 / ((double) $tmp56);
panda$core$Real64 $tmp58 = panda$core$Real64$init$builtin_float64($tmp57);
return $tmp58;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int64 param1) {

// line 119
double $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = $tmp59 / ((double) $tmp60);
panda$core$Real64 $tmp62 = panda$core$Real64$init$builtin_float64($tmp61);
return $tmp62;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt8 param1) {

// line 125
double $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = $tmp63 / ((double) $tmp64);
panda$core$Real64 $tmp66 = panda$core$Real64$init$builtin_float64($tmp65);
return $tmp66;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt16 param1) {

// line 131
double $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = $tmp67 / ((double) $tmp68);
panda$core$Real64 $tmp70 = panda$core$Real64$init$builtin_float64($tmp69);
return $tmp70;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt32 param1) {

// line 137
double $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = $tmp71 / ((double) $tmp72);
panda$core$Real64 $tmp74 = panda$core$Real64$init$builtin_float64($tmp73);
return $tmp74;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt64 param1) {

// line 143
double $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = $tmp75 / ((double) $tmp76);
panda$core$Real64 $tmp78 = panda$core$Real64$init$builtin_float64($tmp77);
return $tmp78;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 149
double $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = $tmp79 / ((double) $tmp80);
panda$core$Real64 $tmp82 = panda$core$Real64$init$builtin_float64($tmp81);
return $tmp82;

}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 155
double $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = $tmp83 / $tmp84;
panda$core$Real64 $tmp86 = panda$core$Real64$init$builtin_float64($tmp85);
return $tmp86;

}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 161
double $tmp87 = param0.value;
float $tmp88 = param1.value;
bool $tmp89 = $tmp87 == ((double) $tmp88);
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit($tmp89);
return $tmp90;

}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 168
double $tmp91 = param0.value;
double $tmp92 = param1.value;
bool $tmp93 = $tmp91 == $tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93);
return $tmp94;

}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 174
double $tmp95 = param0.value;
float $tmp96 = param1.value;
bool $tmp97 = $tmp95 != ((double) $tmp96);
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit($tmp97);
return $tmp98;

}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 181
double $tmp99 = param0.value;
double $tmp100 = param1.value;
bool $tmp101 = $tmp99 != $tmp100;
panda$core$Bit $tmp102 = panda$core$Bit$init$builtin_bit($tmp101);
return $tmp102;

}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 187
double $tmp103 = param0.value;
float $tmp104 = param1.value;
bool $tmp105 = $tmp103 < ((double) $tmp104);
panda$core$Bit $tmp106 = panda$core$Bit$init$builtin_bit($tmp105);
return $tmp106;

}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 194
double $tmp107 = param0.value;
double $tmp108 = param1.value;
bool $tmp109 = $tmp107 < $tmp108;
panda$core$Bit $tmp110 = panda$core$Bit$init$builtin_bit($tmp109);
return $tmp110;

}
panda$core$Bit panda$core$Real64$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 200
double $tmp111 = param0.value;
float $tmp112 = param1.value;
bool $tmp113 = $tmp111 > ((double) $tmp112);
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit($tmp113);
return $tmp114;

}
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 207
double $tmp115 = param0.value;
double $tmp116 = param1.value;
bool $tmp117 = $tmp115 > $tmp116;
panda$core$Bit $tmp118 = panda$core$Bit$init$builtin_bit($tmp117);
return $tmp118;

}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 213
double $tmp119 = param0.value;
float $tmp120 = param1.value;
bool $tmp121 = $tmp119 >= ((double) $tmp120);
panda$core$Bit $tmp122 = panda$core$Bit$init$builtin_bit($tmp121);
return $tmp122;

}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 220
double $tmp123 = param0.value;
double $tmp124 = param1.value;
bool $tmp125 = $tmp123 >= $tmp124;
panda$core$Bit $tmp126 = panda$core$Bit$init$builtin_bit($tmp125);
return $tmp126;

}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real32 param1) {

// line 226
double $tmp127 = param0.value;
float $tmp128 = param1.value;
bool $tmp129 = $tmp127 <= ((double) $tmp128);
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 param0, panda$core$Real64 param1) {

// line 233
double $tmp131 = param0.value;
double $tmp132 = param1.value;
bool $tmp133 = $tmp131 <= $tmp132;
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit($tmp133);
return $tmp134;

}
panda$core$Real64 panda$core$Real64$abs$R$panda$core$Real64(panda$core$Real64 param0) {

// line 238
panda$core$Real64 $tmp135 = (panda$core$Real64) {0.0};
double $tmp136 = param0.value;
double $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 < $tmp137;
panda$core$Bit $tmp139 = (panda$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block1:;
// line 239
panda$core$Real64 $tmp141 = panda$core$Real64$$SUB$R$panda$core$Real64(param0);
return $tmp141;
block2:;
// line 241
return param0;

}
panda$core$Real64 panda$core$Real64$min$panda$core$Int8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int8 param1) {

// line 247
double $tmp142 = param0.value;
int8_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 < ((double) $tmp143);
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit($tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block2;
block1:;
// line 248
double $tmp147 = param0.value;
panda$core$Real64 $tmp148 = panda$core$Real64$init$builtin_float64($tmp147);
return $tmp148;
block2:;
// line 250
int8_t $tmp149 = param1.value;
panda$core$Real64 $tmp150 = panda$core$Real64$init$builtin_float64(((double) $tmp149));
return $tmp150;

}
panda$core$Real64 panda$core$Real64$min$panda$core$Int16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int16 param1) {

// line 256
double $tmp151 = param0.value;
int16_t $tmp152 = param1.value;
bool $tmp153 = $tmp151 < ((double) $tmp152);
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block1:;
// line 257
double $tmp156 = param0.value;
panda$core$Real64 $tmp157 = panda$core$Real64$init$builtin_float64($tmp156);
return $tmp157;
block2:;
// line 259
int16_t $tmp158 = param1.value;
panda$core$Real64 $tmp159 = panda$core$Real64$init$builtin_float64(((double) $tmp158));
return $tmp159;

}
panda$core$Real64 panda$core$Real64$min$panda$core$Int32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int32 param1) {

// line 265
double $tmp160 = param0.value;
int32_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((double) $tmp161);
panda$core$Bit $tmp163 = panda$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block1; else goto block2;
block1:;
// line 266
double $tmp165 = param0.value;
panda$core$Real64 $tmp166 = panda$core$Real64$init$builtin_float64($tmp165);
return $tmp166;
block2:;
// line 268
int32_t $tmp167 = param1.value;
panda$core$Real64 $tmp168 = panda$core$Real64$init$builtin_float64(((double) $tmp167));
return $tmp168;

}
panda$core$Real64 panda$core$Real64$min$panda$core$Int64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int64 param1) {

// line 274
double $tmp169 = param0.value;
int64_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((double) $tmp170);
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 275
double $tmp174 = param0.value;
panda$core$Real64 $tmp175 = panda$core$Real64$init$builtin_float64($tmp174);
return $tmp175;
block2:;
// line 277
int64_t $tmp176 = param1.value;
panda$core$Real64 $tmp177 = panda$core$Real64$init$builtin_float64(((double) $tmp176));
return $tmp177;

}
panda$core$Real64 panda$core$Real64$min$panda$core$UInt8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt8 param1) {

// line 283
double $tmp178 = param0.value;
uint8_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 < ((double) $tmp179);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block1; else goto block2;
block1:;
// line 284
double $tmp183 = param0.value;
panda$core$Real64 $tmp184 = panda$core$Real64$init$builtin_float64($tmp183);
return $tmp184;
block2:;
// line 286
uint8_t $tmp185 = param1.value;
panda$core$Real64 $tmp186 = panda$core$Real64$init$builtin_float64(((double) $tmp185));
return $tmp186;

}
panda$core$Real64 panda$core$Real64$min$panda$core$UInt16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt16 param1) {

// line 292
double $tmp187 = param0.value;
uint16_t $tmp188 = param1.value;
bool $tmp189 = $tmp187 < ((double) $tmp188);
panda$core$Bit $tmp190 = panda$core$Bit$init$builtin_bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// line 293
double $tmp192 = param0.value;
panda$core$Real64 $tmp193 = panda$core$Real64$init$builtin_float64($tmp192);
return $tmp193;
block2:;
// line 295
uint16_t $tmp194 = param1.value;
panda$core$Real64 $tmp195 = panda$core$Real64$init$builtin_float64(((double) $tmp194));
return $tmp195;

}
panda$core$Real64 panda$core$Real64$min$panda$core$UInt32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt32 param1) {

// line 301
double $tmp196 = param0.value;
uint32_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 < ((double) $tmp197);
panda$core$Bit $tmp199 = panda$core$Bit$init$builtin_bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block1; else goto block2;
block1:;
// line 302
double $tmp201 = param0.value;
panda$core$Real64 $tmp202 = panda$core$Real64$init$builtin_float64($tmp201);
return $tmp202;
block2:;
// line 304
uint32_t $tmp203 = param1.value;
panda$core$Real64 $tmp204 = panda$core$Real64$init$builtin_float64(((double) $tmp203));
return $tmp204;

}
panda$core$Real64 panda$core$Real64$min$panda$core$UInt64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt64 param1) {

// line 310
double $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 < ((double) $tmp206);
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block1; else goto block2;
block1:;
// line 311
double $tmp210 = param0.value;
panda$core$Real64 $tmp211 = panda$core$Real64$init$builtin_float64($tmp210);
return $tmp211;
block2:;
// line 313
uint64_t $tmp212 = param1.value;
panda$core$Real64 $tmp213 = panda$core$Real64$init$builtin_float64(((double) $tmp212));
return $tmp213;

}
panda$core$Real64 panda$core$Real64$max$panda$core$Int8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int8 param1) {

// line 319
double $tmp214 = param0.value;
int8_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 > ((double) $tmp215);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// line 320
double $tmp219 = param0.value;
panda$core$Real64 $tmp220 = panda$core$Real64$init$builtin_float64($tmp219);
return $tmp220;
block2:;
// line 322
int8_t $tmp221 = param1.value;
panda$core$Real64 $tmp222 = panda$core$Real64$init$builtin_float64(((double) $tmp221));
return $tmp222;

}
panda$core$Real64 panda$core$Real64$max$panda$core$Int16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int16 param1) {

// line 328
double $tmp223 = param0.value;
int16_t $tmp224 = param1.value;
bool $tmp225 = $tmp223 > ((double) $tmp224);
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 329
double $tmp228 = param0.value;
panda$core$Real64 $tmp229 = panda$core$Real64$init$builtin_float64($tmp228);
return $tmp229;
block2:;
// line 331
int16_t $tmp230 = param1.value;
panda$core$Real64 $tmp231 = panda$core$Real64$init$builtin_float64(((double) $tmp230));
return $tmp231;

}
panda$core$Real64 panda$core$Real64$max$panda$core$Int32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int32 param1) {

// line 337
double $tmp232 = param0.value;
int32_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > ((double) $tmp233);
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 338
double $tmp237 = param0.value;
panda$core$Real64 $tmp238 = panda$core$Real64$init$builtin_float64($tmp237);
return $tmp238;
block2:;
// line 340
int32_t $tmp239 = param1.value;
panda$core$Real64 $tmp240 = panda$core$Real64$init$builtin_float64(((double) $tmp239));
return $tmp240;

}
panda$core$Real64 panda$core$Real64$max$panda$core$Int64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$Int64 param1) {

// line 346
double $tmp241 = param0.value;
int64_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 > ((double) $tmp242);
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 347
double $tmp246 = param0.value;
panda$core$Real64 $tmp247 = panda$core$Real64$init$builtin_float64($tmp246);
return $tmp247;
block2:;
// line 349
int64_t $tmp248 = param1.value;
panda$core$Real64 $tmp249 = panda$core$Real64$init$builtin_float64(((double) $tmp248));
return $tmp249;

}
panda$core$Real64 panda$core$Real64$max$panda$core$UInt8$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt8 param1) {

// line 355
double $tmp250 = param0.value;
uint8_t $tmp251 = param1.value;
bool $tmp252 = $tmp250 > ((double) $tmp251);
panda$core$Bit $tmp253 = panda$core$Bit$init$builtin_bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block1:;
// line 356
double $tmp255 = param0.value;
panda$core$Real64 $tmp256 = panda$core$Real64$init$builtin_float64($tmp255);
return $tmp256;
block2:;
// line 358
uint8_t $tmp257 = param1.value;
panda$core$Real64 $tmp258 = panda$core$Real64$init$builtin_float64(((double) $tmp257));
return $tmp258;

}
panda$core$Real64 panda$core$Real64$max$panda$core$UInt16$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt16 param1) {

// line 364
double $tmp259 = param0.value;
uint16_t $tmp260 = param1.value;
bool $tmp261 = $tmp259 > ((double) $tmp260);
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 365
double $tmp264 = param0.value;
panda$core$Real64 $tmp265 = panda$core$Real64$init$builtin_float64($tmp264);
return $tmp265;
block2:;
// line 367
uint16_t $tmp266 = param1.value;
panda$core$Real64 $tmp267 = panda$core$Real64$init$builtin_float64(((double) $tmp266));
return $tmp267;

}
panda$core$Real64 panda$core$Real64$max$panda$core$UInt32$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt32 param1) {

// line 373
double $tmp268 = param0.value;
uint32_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((double) $tmp269);
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 374
double $tmp273 = param0.value;
panda$core$Real64 $tmp274 = panda$core$Real64$init$builtin_float64($tmp273);
return $tmp274;
block2:;
// line 376
uint32_t $tmp275 = param1.value;
panda$core$Real64 $tmp276 = panda$core$Real64$init$builtin_float64(((double) $tmp275));
return $tmp276;

}
panda$core$Real64 panda$core$Real64$max$panda$core$UInt64$R$panda$core$Real64(panda$core$Real64 param0, panda$core$UInt64 param1) {

// line 382
double $tmp277 = param0.value;
uint64_t $tmp278 = param1.value;
bool $tmp279 = $tmp277 > ((double) $tmp278);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 383
double $tmp282 = param0.value;
panda$core$Real64 $tmp283 = panda$core$Real64$init$builtin_float64($tmp282);
return $tmp283;
block2:;
// line 385
uint64_t $tmp284 = param1.value;
panda$core$Real64 $tmp285 = panda$core$Real64$init$builtin_float64(((double) $tmp284));
return $tmp285;

}
panda$core$Int64 panda$core$Real64$get_hash$R$panda$core$Int64(panda$core$Real64 param0) {

// line 390
double $tmp286 = param0.value;
panda$core$Int64 $tmp287 = (panda$core$Int64) {((int64_t) $tmp286)};
return $tmp287;

}
panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8(panda$core$Real64 param0) {

// line 395
double $tmp288 = param0.value;
panda$core$Int8 $tmp289 = (panda$core$Int8) {((int8_t) $tmp288)};
return $tmp289;

}
panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16(panda$core$Real64 param0) {

// line 400
double $tmp290 = param0.value;
panda$core$Int16 $tmp291 = (panda$core$Int16) {((int16_t) $tmp290)};
return $tmp291;

}
panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32(panda$core$Real64 param0) {

// line 405
double $tmp292 = param0.value;
panda$core$Int32 $tmp293 = (panda$core$Int32) {((int32_t) $tmp292)};
return $tmp293;

}
panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64(panda$core$Real64 param0) {

// line 410
double $tmp294 = param0.value;
panda$core$Int64 $tmp295 = (panda$core$Int64) {((int64_t) $tmp294)};
return $tmp295;

}
panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8(panda$core$Real64 param0) {

// line 415
double $tmp296 = param0.value;
panda$core$UInt8 $tmp297 = (panda$core$UInt8) {((uint8_t) $tmp296)};
return $tmp297;

}
panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16(panda$core$Real64 param0) {

// line 420
double $tmp298 = param0.value;
panda$core$UInt16 $tmp299 = (panda$core$UInt16) {((uint16_t) $tmp298)};
return $tmp299;

}
panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32(panda$core$Real64 param0) {

// line 425
double $tmp300 = param0.value;
panda$core$UInt32 $tmp301 = (panda$core$UInt32) {((uint32_t) $tmp300)};
return $tmp301;

}
panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64(panda$core$Real64 param0) {

// line 430
double $tmp302 = param0.value;
panda$core$UInt64 $tmp303 = (panda$core$UInt64) {((uint64_t) $tmp302)};
return $tmp303;

}
panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32(panda$core$Real64 param0) {

// line 435
double $tmp304 = param0.value;
panda$core$Real32 $tmp305 = (panda$core$Real32) {((float) $tmp304)};
return $tmp305;

}
panda$core$Real64 panda$core$Real64$convert$R$panda$core$Real64(panda$core$Real64 param0) {

// line 440
double $tmp306 = param0.value;
panda$core$Real64 $tmp307 = (panda$core$Real64) {$tmp306};
return $tmp307;

}
panda$core$String* panda$core$Real64$format$panda$core$String$R$panda$core$String(panda$core$Real64 param0, panda$core$String* param1) {

// line 450
double $tmp308 = param0.value;
bool $tmp309 = $tmp308 < 0.0;
panda$core$Bit $tmp310 = panda$core$Bit$init$builtin_bit($tmp309);
panda$core$Real64 $tmp311 = panda$core$Real64$abs$R$panda$core$Real64(param0);
panda$core$UInt64 $tmp312 = panda$core$Real64$convert$R$panda$core$UInt64($tmp311);
panda$core$UInt64 $tmp313 = (panda$core$UInt64) {18446744073709551615};
panda$core$String* $tmp314 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp310, $tmp312, $tmp313, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
return $tmp314;

}
void panda$core$Real64$cleanup(panda$core$Real64 param0) {

return;

}






