#include "panda/core/Real32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* panda$core$Real32$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Real32$format$panda$core$String$R$panda$core$String(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Real32$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real32$get_hash$R$panda$core$Int64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Real32$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Real32$convert$R$panda$core$String(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$ADD$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real32$$ADD$panda$core$Real64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$SUB$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real32$$SUB$panda$core$Real64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$$SUB$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$MUL$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real32$$MUL$panda$core$Real64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real32$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real32$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Real32$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$EQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$EQ$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$NEQ$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$LT$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$GT$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$GE$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Bit result = panda$core$Real32$$LE$panda$core$Real64$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$get_abs$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$get_abs$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$Int8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$Int16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$Int32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$min$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real32$min$panda$core$Int64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$UInt8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$UInt16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$UInt32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$min$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real32$min$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$Int8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$Int16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$Int32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$max$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Real32$max$panda$core$Int64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$UInt8$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$UInt16$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$UInt32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$max$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Real32$max$panda$core$UInt64$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Real32$convert$R$panda$core$Int8(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Real32$convert$R$panda$core$Int16(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Real32$convert$R$panda$core$Int32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real32$convert$R$panda$core$Int64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Real32$convert$R$panda$core$UInt8(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Real32$convert$R$panda$core$UInt16(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Real32$convert$R$panda$core$UInt32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Real32$convert$R$panda$core$UInt64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$convert$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Real32$convert$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Real32$cleanup$shim(panda$core$Object* p0) {
    panda$core$Real32$cleanup(((panda$core$Real32$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real32$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Real32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real32$_panda$core$Formattable, { panda$core$Real32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Real32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Real32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Real32$class_type panda$core$Real32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$ADD$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$SUB$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real32$$SUB$R$panda$core$Real32$shim, panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$MUL$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real32$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real32$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real32$get_abs$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real32$min$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Real32$min$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real32$max$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Real32$max$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Real32$get_hash$R$panda$core$Int64$shim, panda$core$Real32$convert$R$panda$core$Int8$shim, panda$core$Real32$convert$R$panda$core$Int16$shim, panda$core$Real32$convert$R$panda$core$Int32$shim, panda$core$Real32$convert$R$panda$core$Int64$shim, panda$core$Real32$convert$R$panda$core$UInt8$shim, panda$core$Real32$convert$R$panda$core$UInt16$shim, panda$core$Real32$convert$R$panda$core$UInt32$shim, panda$core$Real32$convert$R$panda$core$UInt64$shim, panda$core$Real32$convert$R$panda$core$Real32$shim, panda$core$Real32$convert$R$panda$core$Real64$shim, panda$core$Real32$format$panda$core$String$R$panda$core$String$shim, panda$core$Real32$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real32$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Real32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Formattable, { panda$core$Real32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Real32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$wrapper_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Real32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Real32$wrapperclass_type panda$core$Real32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };

panda$core$Real32 panda$core$Real32$init$builtin_float32(float param0) {

panda$core$Real32 local0;
// line 18
float* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
panda$core$Real32 $tmp4 = *(&local0);
return $tmp4;

}
panda$core$Real32 panda$core$Real32$init$panda$core$Int8(panda$core$Int8 param0) {

panda$core$Real32 local0;
// line 24
int8_t $tmp5 = param0.value;
float* $tmp6 = &(&local0)->value;
*$tmp6 = ((float) $tmp5);
panda$core$Real32 $tmp7 = *(&local0);
return $tmp7;

}
panda$core$Real32 panda$core$Real32$init$panda$core$Int16(panda$core$Int16 param0) {

panda$core$Real32 local0;
// line 30
int16_t $tmp8 = param0.value;
float* $tmp9 = &(&local0)->value;
*$tmp9 = ((float) $tmp8);
panda$core$Real32 $tmp10 = *(&local0);
return $tmp10;

}
panda$core$Real32 panda$core$Real32$init$panda$core$Int32(panda$core$Int32 param0) {

panda$core$Real32 local0;
// line 36
int32_t $tmp11 = param0.value;
float* $tmp12 = &(&local0)->value;
*$tmp12 = ((float) $tmp11);
panda$core$Real32 $tmp13 = *(&local0);
return $tmp13;

}
panda$core$Real32 panda$core$Real32$init$panda$core$Int64(panda$core$Int64 param0) {

panda$core$Real32 local0;
// line 42
int64_t $tmp14 = param0.value;
float* $tmp15 = &(&local0)->value;
*$tmp15 = ((float) $tmp14);
panda$core$Real32 $tmp16 = *(&local0);
return $tmp16;

}
panda$core$Real32 panda$core$Real32$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Real32 local0;
// line 48
uint8_t $tmp17 = param0.value;
float* $tmp18 = &(&local0)->value;
*$tmp18 = ((float) $tmp17);
panda$core$Real32 $tmp19 = *(&local0);
return $tmp19;

}
panda$core$Real32 panda$core$Real32$init$panda$core$UInt16(panda$core$UInt16 param0) {

panda$core$Real32 local0;
// line 54
uint16_t $tmp20 = param0.value;
float* $tmp21 = &(&local0)->value;
*$tmp21 = ((float) $tmp20);
panda$core$Real32 $tmp22 = *(&local0);
return $tmp22;

}
panda$core$Real32 panda$core$Real32$init$panda$core$UInt32(panda$core$UInt32 param0) {

panda$core$Real32 local0;
// line 60
uint32_t $tmp23 = param0.value;
float* $tmp24 = &(&local0)->value;
*$tmp24 = ((float) $tmp23);
panda$core$Real32 $tmp25 = *(&local0);
return $tmp25;

}
panda$core$Real32 panda$core$Real32$init$panda$core$UInt64(panda$core$UInt64 param0) {

panda$core$Real32 local0;
// line 66
uint64_t $tmp26 = param0.value;
float* $tmp27 = &(&local0)->value;
*$tmp27 = ((float) $tmp26);
panda$core$Real32 $tmp28 = *(&local0);
return $tmp28;

}
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 72
float $tmp29 = param0.value;
float $tmp30 = param1.value;
float $tmp31 = $tmp29 + $tmp30;
panda$core$Real32 $tmp32 = panda$core$Real32$init$builtin_float32($tmp31);
return $tmp32;

}
panda$core$Real64 panda$core$Real32$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 78
float $tmp33 = param0.value;
double $tmp34 = param1.value;
double $tmp35 = ((double) $tmp33) + $tmp34;
panda$core$Real64 $tmp36 = panda$core$Real64$init$builtin_float64($tmp35);
return $tmp36;

}
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 84
float $tmp37 = param0.value;
float $tmp38 = param1.value;
float $tmp39 = $tmp37 - $tmp38;
panda$core$Real32 $tmp40 = panda$core$Real32$init$builtin_float32($tmp39);
return $tmp40;

}
panda$core$Real64 panda$core$Real32$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 90
float $tmp41 = param0.value;
double $tmp42 = param1.value;
double $tmp43 = ((double) $tmp41) - $tmp42;
panda$core$Real64 $tmp44 = panda$core$Real64$init$builtin_float64($tmp43);
return $tmp44;

}
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 param0) {

// line 95
float $tmp45 = param0.value;
float $tmp46 = -$tmp45;
panda$core$Real32 $tmp47 = (panda$core$Real32) {$tmp46};
return $tmp47;

}
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 101
float $tmp48 = param0.value;
float $tmp49 = param1.value;
float $tmp50 = $tmp48 * $tmp49;
panda$core$Real32 $tmp51 = panda$core$Real32$init$builtin_float32($tmp50);
return $tmp51;

}
panda$core$Real64 panda$core$Real32$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 107
float $tmp52 = param0.value;
double $tmp53 = param1.value;
double $tmp54 = ((double) $tmp52) * $tmp53;
panda$core$Real64 $tmp55 = panda$core$Real64$init$builtin_float64($tmp54);
return $tmp55;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int8 param1) {

// line 113
float $tmp56 = param0.value;
int8_t $tmp57 = param1.value;
float $tmp58 = $tmp56 / ((float) $tmp57);
panda$core$Real32 $tmp59 = panda$core$Real32$init$builtin_float32($tmp58);
return $tmp59;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int16 param1) {

// line 119
float $tmp60 = param0.value;
int16_t $tmp61 = param1.value;
float $tmp62 = $tmp60 / ((float) $tmp61);
panda$core$Real32 $tmp63 = panda$core$Real32$init$builtin_float32($tmp62);
return $tmp63;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int32 param1) {

// line 125
float $tmp64 = param0.value;
int32_t $tmp65 = param1.value;
float $tmp66 = $tmp64 / ((float) $tmp65);
panda$core$Real32 $tmp67 = panda$core$Real32$init$builtin_float32($tmp66);
return $tmp67;

}
panda$core$Real64 panda$core$Real32$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Int64 param1) {

// line 131
float $tmp68 = param0.value;
int64_t $tmp69 = param1.value;
double $tmp70 = ((double) $tmp68) / ((double) $tmp69);
panda$core$Real64 $tmp71 = panda$core$Real64$init$builtin_float64($tmp70);
return $tmp71;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt8 param1) {

// line 137
float $tmp72 = param0.value;
uint8_t $tmp73 = param1.value;
float $tmp74 = $tmp72 / ((float) $tmp73);
panda$core$Real32 $tmp75 = panda$core$Real32$init$builtin_float32($tmp74);
return $tmp75;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt16 param1) {

// line 143
float $tmp76 = param0.value;
uint16_t $tmp77 = param1.value;
float $tmp78 = $tmp76 / ((float) $tmp77);
panda$core$Real32 $tmp79 = panda$core$Real32$init$builtin_float32($tmp78);
return $tmp79;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt32 param1) {

// line 149
float $tmp80 = param0.value;
uint32_t $tmp81 = param1.value;
float $tmp82 = $tmp80 / ((float) $tmp81);
panda$core$Real32 $tmp83 = panda$core$Real32$init$builtin_float32($tmp82);
return $tmp83;

}
panda$core$Real64 panda$core$Real32$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$UInt64 param1) {

// line 155
float $tmp84 = param0.value;
uint64_t $tmp85 = param1.value;
double $tmp86 = ((double) $tmp84) / ((double) $tmp85);
panda$core$Real64 $tmp87 = panda$core$Real64$init$builtin_float64($tmp86);
return $tmp87;

}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 161
float $tmp88 = param0.value;
float $tmp89 = param1.value;
float $tmp90 = $tmp88 / $tmp89;
panda$core$Real32 $tmp91 = panda$core$Real32$init$builtin_float32($tmp90);
return $tmp91;

}
panda$core$Real64 panda$core$Real32$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 167
float $tmp92 = param0.value;
double $tmp93 = param1.value;
double $tmp94 = ((double) $tmp92) / $tmp93;
panda$core$Real64 $tmp95 = panda$core$Real64$init$builtin_float64($tmp94);
return $tmp95;

}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 174
float $tmp96 = param0.value;
float $tmp97 = param1.value;
bool $tmp98 = $tmp96 == $tmp97;
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit($tmp98);
return $tmp99;

}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 180
float $tmp100 = param0.value;
double $tmp101 = param1.value;
bool $tmp102 = ((double) $tmp100) == $tmp101;
panda$core$Bit $tmp103 = panda$core$Bit$init$builtin_bit($tmp102);
return $tmp103;

}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 187
float $tmp104 = param0.value;
float $tmp105 = param1.value;
bool $tmp106 = $tmp104 != $tmp105;
panda$core$Bit $tmp107 = panda$core$Bit$init$builtin_bit($tmp106);
return $tmp107;

}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 193
float $tmp108 = param0.value;
double $tmp109 = param1.value;
bool $tmp110 = ((double) $tmp108) != $tmp109;
panda$core$Bit $tmp111 = panda$core$Bit$init$builtin_bit($tmp110);
return $tmp111;

}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 200
float $tmp112 = param0.value;
float $tmp113 = param1.value;
bool $tmp114 = $tmp112 < $tmp113;
panda$core$Bit $tmp115 = panda$core$Bit$init$builtin_bit($tmp114);
return $tmp115;

}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 206
float $tmp116 = param0.value;
double $tmp117 = param1.value;
bool $tmp118 = ((double) $tmp116) < $tmp117;
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit($tmp118);
return $tmp119;

}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 213
float $tmp120 = param0.value;
float $tmp121 = param1.value;
bool $tmp122 = $tmp120 > $tmp121;
panda$core$Bit $tmp123 = panda$core$Bit$init$builtin_bit($tmp122);
return $tmp123;

}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 219
float $tmp124 = param0.value;
double $tmp125 = param1.value;
bool $tmp126 = ((double) $tmp124) > $tmp125;
panda$core$Bit $tmp127 = panda$core$Bit$init$builtin_bit($tmp126);
return $tmp127;

}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 226
float $tmp128 = param0.value;
float $tmp129 = param1.value;
bool $tmp130 = $tmp128 >= $tmp129;
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit($tmp130);
return $tmp131;

}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 232
float $tmp132 = param0.value;
double $tmp133 = param1.value;
bool $tmp134 = ((double) $tmp132) >= $tmp133;
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit($tmp134);
return $tmp135;

}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real32 param1) {

// line 239
float $tmp136 = param0.value;
float $tmp137 = param1.value;
bool $tmp138 = $tmp136 <= $tmp137;
panda$core$Bit $tmp139 = panda$core$Bit$init$builtin_bit($tmp138);
return $tmp139;

}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real32 param0, panda$core$Real64 param1) {

// line 245
float $tmp140 = param0.value;
double $tmp141 = param1.value;
bool $tmp142 = ((double) $tmp140) <= $tmp141;
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit($tmp142);
return $tmp143;

}
panda$core$Real32 panda$core$Real32$get_abs$R$panda$core$Real32(panda$core$Real32 param0) {

// line 251
panda$core$Real32 $tmp144 = (panda$core$Real32) {0.0};
float $tmp145 = param0.value;
float $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 < $tmp146;
panda$core$Bit $tmp148 = (panda$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block1; else goto block2;
block1:;
// line 252
panda$core$Real32 $tmp150 = panda$core$Real32$$SUB$R$panda$core$Real32(param0);
return $tmp150;
block2:;
// line 254
return param0;

}
panda$core$Real32 panda$core$Real32$min$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int8 param1) {

// line 260
float $tmp151 = param0.value;
int8_t $tmp152 = param1.value;
bool $tmp153 = $tmp151 < ((float) $tmp152);
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block1:;
// line 261
float $tmp156 = param0.value;
panda$core$Real32 $tmp157 = panda$core$Real32$init$builtin_float32($tmp156);
return $tmp157;
block2:;
// line 263
int8_t $tmp158 = param1.value;
panda$core$Real32 $tmp159 = panda$core$Real32$init$builtin_float32(((float) $tmp158));
return $tmp159;

}
panda$core$Real32 panda$core$Real32$min$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int16 param1) {

// line 269
float $tmp160 = param0.value;
int16_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((float) $tmp161);
panda$core$Bit $tmp163 = panda$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block1; else goto block2;
block1:;
// line 270
float $tmp165 = param0.value;
panda$core$Real32 $tmp166 = panda$core$Real32$init$builtin_float32($tmp165);
return $tmp166;
block2:;
// line 272
int16_t $tmp167 = param1.value;
panda$core$Real32 $tmp168 = panda$core$Real32$init$builtin_float32(((float) $tmp167));
return $tmp168;

}
panda$core$Real32 panda$core$Real32$min$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int32 param1) {

// line 278
float $tmp169 = param0.value;
int32_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((float) $tmp170);
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 279
float $tmp174 = param0.value;
panda$core$Real32 $tmp175 = panda$core$Real32$init$builtin_float32($tmp174);
return $tmp175;
block2:;
// line 281
int32_t $tmp176 = param1.value;
panda$core$Real32 $tmp177 = panda$core$Real32$init$builtin_float32(((float) $tmp176));
return $tmp177;

}
panda$core$Real64 panda$core$Real32$min$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Int64 param1) {

// line 287
float $tmp178 = param0.value;
int64_t $tmp179 = param1.value;
bool $tmp180 = ((double) $tmp178) < ((double) $tmp179);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block1; else goto block2;
block1:;
// line 288
float $tmp183 = param0.value;
panda$core$Real64 $tmp184 = panda$core$Real64$init$builtin_float64(((double) $tmp183));
return $tmp184;
block2:;
// line 290
int64_t $tmp185 = param1.value;
panda$core$Real64 $tmp186 = panda$core$Real64$init$builtin_float64(((double) $tmp185));
return $tmp186;

}
panda$core$Real32 panda$core$Real32$min$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt8 param1) {

// line 296
float $tmp187 = param0.value;
uint8_t $tmp188 = param1.value;
bool $tmp189 = $tmp187 < ((float) $tmp188);
panda$core$Bit $tmp190 = panda$core$Bit$init$builtin_bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// line 297
float $tmp192 = param0.value;
panda$core$Real32 $tmp193 = panda$core$Real32$init$builtin_float32($tmp192);
return $tmp193;
block2:;
// line 299
uint8_t $tmp194 = param1.value;
panda$core$Real32 $tmp195 = panda$core$Real32$init$builtin_float32(((float) $tmp194));
return $tmp195;

}
panda$core$Real32 panda$core$Real32$min$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt16 param1) {

// line 305
float $tmp196 = param0.value;
uint16_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 < ((float) $tmp197);
panda$core$Bit $tmp199 = panda$core$Bit$init$builtin_bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block1; else goto block2;
block1:;
// line 306
float $tmp201 = param0.value;
panda$core$Real32 $tmp202 = panda$core$Real32$init$builtin_float32($tmp201);
return $tmp202;
block2:;
// line 308
uint16_t $tmp203 = param1.value;
panda$core$Real32 $tmp204 = panda$core$Real32$init$builtin_float32(((float) $tmp203));
return $tmp204;

}
panda$core$Real32 panda$core$Real32$min$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt32 param1) {

// line 314
float $tmp205 = param0.value;
uint32_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 < ((float) $tmp206);
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block1; else goto block2;
block1:;
// line 315
float $tmp210 = param0.value;
panda$core$Real32 $tmp211 = panda$core$Real32$init$builtin_float32($tmp210);
return $tmp211;
block2:;
// line 317
uint32_t $tmp212 = param1.value;
panda$core$Real32 $tmp213 = panda$core$Real32$init$builtin_float32(((float) $tmp212));
return $tmp213;

}
panda$core$Real64 panda$core$Real32$min$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$UInt64 param1) {

// line 323
float $tmp214 = param0.value;
uint64_t $tmp215 = param1.value;
bool $tmp216 = ((double) $tmp214) < ((double) $tmp215);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// line 324
float $tmp219 = param0.value;
panda$core$Real64 $tmp220 = panda$core$Real64$init$builtin_float64(((double) $tmp219));
return $tmp220;
block2:;
// line 326
uint64_t $tmp221 = param1.value;
panda$core$Real64 $tmp222 = panda$core$Real64$init$builtin_float64(((double) $tmp221));
return $tmp222;

}
panda$core$Real32 panda$core$Real32$max$panda$core$Int8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int8 param1) {

// line 332
float $tmp223 = param0.value;
int8_t $tmp224 = param1.value;
bool $tmp225 = $tmp223 > ((float) $tmp224);
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 333
float $tmp228 = param0.value;
panda$core$Real32 $tmp229 = panda$core$Real32$init$builtin_float32($tmp228);
return $tmp229;
block2:;
// line 335
int8_t $tmp230 = param1.value;
panda$core$Real32 $tmp231 = panda$core$Real32$init$builtin_float32(((float) $tmp230));
return $tmp231;

}
panda$core$Real32 panda$core$Real32$max$panda$core$Int16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int16 param1) {

// line 341
float $tmp232 = param0.value;
int16_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > ((float) $tmp233);
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 342
float $tmp237 = param0.value;
panda$core$Real32 $tmp238 = panda$core$Real32$init$builtin_float32($tmp237);
return $tmp238;
block2:;
// line 344
int16_t $tmp239 = param1.value;
panda$core$Real32 $tmp240 = panda$core$Real32$init$builtin_float32(((float) $tmp239));
return $tmp240;

}
panda$core$Real32 panda$core$Real32$max$panda$core$Int32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$Int32 param1) {

// line 350
float $tmp241 = param0.value;
int32_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 > ((float) $tmp242);
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 351
float $tmp246 = param0.value;
panda$core$Real32 $tmp247 = panda$core$Real32$init$builtin_float32($tmp246);
return $tmp247;
block2:;
// line 353
int32_t $tmp248 = param1.value;
panda$core$Real32 $tmp249 = panda$core$Real32$init$builtin_float32(((float) $tmp248));
return $tmp249;

}
panda$core$Real64 panda$core$Real32$max$panda$core$Int64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$Int64 param1) {

// line 359
float $tmp250 = param0.value;
int64_t $tmp251 = param1.value;
bool $tmp252 = ((double) $tmp250) > ((double) $tmp251);
panda$core$Bit $tmp253 = panda$core$Bit$init$builtin_bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block1:;
// line 360
float $tmp255 = param0.value;
panda$core$Real64 $tmp256 = panda$core$Real64$init$builtin_float64(((double) $tmp255));
return $tmp256;
block2:;
// line 362
int64_t $tmp257 = param1.value;
panda$core$Real64 $tmp258 = panda$core$Real64$init$builtin_float64(((double) $tmp257));
return $tmp258;

}
panda$core$Real32 panda$core$Real32$max$panda$core$UInt8$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt8 param1) {

// line 368
float $tmp259 = param0.value;
uint8_t $tmp260 = param1.value;
bool $tmp261 = $tmp259 > ((float) $tmp260);
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 369
float $tmp264 = param0.value;
panda$core$Real32 $tmp265 = panda$core$Real32$init$builtin_float32($tmp264);
return $tmp265;
block2:;
// line 371
uint8_t $tmp266 = param1.value;
panda$core$Real32 $tmp267 = panda$core$Real32$init$builtin_float32(((float) $tmp266));
return $tmp267;

}
panda$core$Real32 panda$core$Real32$max$panda$core$UInt16$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt16 param1) {

// line 377
float $tmp268 = param0.value;
uint16_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((float) $tmp269);
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 378
float $tmp273 = param0.value;
panda$core$Real32 $tmp274 = panda$core$Real32$init$builtin_float32($tmp273);
return $tmp274;
block2:;
// line 380
uint16_t $tmp275 = param1.value;
panda$core$Real32 $tmp276 = panda$core$Real32$init$builtin_float32(((float) $tmp275));
return $tmp276;

}
panda$core$Real32 panda$core$Real32$max$panda$core$UInt32$R$panda$core$Real32(panda$core$Real32 param0, panda$core$UInt32 param1) {

// line 386
float $tmp277 = param0.value;
uint32_t $tmp278 = param1.value;
bool $tmp279 = $tmp277 > ((float) $tmp278);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 387
float $tmp282 = param0.value;
panda$core$Real32 $tmp283 = panda$core$Real32$init$builtin_float32($tmp282);
return $tmp283;
block2:;
// line 389
uint32_t $tmp284 = param1.value;
panda$core$Real32 $tmp285 = panda$core$Real32$init$builtin_float32(((float) $tmp284));
return $tmp285;

}
panda$core$Real64 panda$core$Real32$max$panda$core$UInt64$R$panda$core$Real64(panda$core$Real32 param0, panda$core$UInt64 param1) {

// line 395
float $tmp286 = param0.value;
uint64_t $tmp287 = param1.value;
bool $tmp288 = ((double) $tmp286) > ((double) $tmp287);
panda$core$Bit $tmp289 = panda$core$Bit$init$builtin_bit($tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block1; else goto block2;
block1:;
// line 396
float $tmp291 = param0.value;
panda$core$Real64 $tmp292 = panda$core$Real64$init$builtin_float64(((double) $tmp291));
return $tmp292;
block2:;
// line 398
uint64_t $tmp293 = param1.value;
panda$core$Real64 $tmp294 = panda$core$Real64$init$builtin_float64(((double) $tmp293));
return $tmp294;

}
panda$core$Int64 panda$core$Real32$get_hash$R$panda$core$Int64(panda$core$Real32 param0) {

// line 403
float $tmp295 = param0.value;
panda$core$Int64 $tmp296 = (panda$core$Int64) {((int64_t) $tmp295)};
return $tmp296;

}
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 param0) {

// line 408
float $tmp297 = param0.value;
panda$core$Int8 $tmp298 = (panda$core$Int8) {((int8_t) $tmp297)};
return $tmp298;

}
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 param0) {

// line 413
float $tmp299 = param0.value;
panda$core$Int16 $tmp300 = (panda$core$Int16) {((int16_t) $tmp299)};
return $tmp300;

}
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 param0) {

// line 418
float $tmp301 = param0.value;
panda$core$Int32 $tmp302 = (panda$core$Int32) {((int32_t) $tmp301)};
return $tmp302;

}
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 param0) {

// line 423
float $tmp303 = param0.value;
panda$core$Int64 $tmp304 = (panda$core$Int64) {((int64_t) $tmp303)};
return $tmp304;

}
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 param0) {

// line 428
float $tmp305 = param0.value;
panda$core$UInt8 $tmp306 = (panda$core$UInt8) {((uint8_t) $tmp305)};
return $tmp306;

}
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 param0) {

// line 433
float $tmp307 = param0.value;
panda$core$UInt16 $tmp308 = (panda$core$UInt16) {((uint16_t) $tmp307)};
return $tmp308;

}
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 param0) {

// line 438
float $tmp309 = param0.value;
panda$core$UInt32 $tmp310 = (panda$core$UInt32) {((uint32_t) $tmp309)};
return $tmp310;

}
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 param0) {

// line 443
float $tmp311 = param0.value;
panda$core$UInt64 $tmp312 = (panda$core$UInt64) {((uint64_t) $tmp311)};
return $tmp312;

}
panda$core$Real32 panda$core$Real32$convert$R$panda$core$Real32(panda$core$Real32 param0) {

// line 448
float $tmp313 = param0.value;
panda$core$Real32 $tmp314 = (panda$core$Real32) {$tmp313};
return $tmp314;

}
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 param0) {

// line 453
float $tmp315 = param0.value;
panda$core$Real64 $tmp316 = (panda$core$Real64) {((double) $tmp315)};
return $tmp316;

}
panda$core$String* panda$core$Real32$format$panda$core$String$R$panda$core$String(panda$core$Real32 param0, panda$core$String* param1) {

// line 463
float $tmp317 = param0.value;
bool $tmp318 = $tmp317 < 0.0;
panda$core$Bit $tmp319 = panda$core$Bit$init$builtin_bit($tmp318);
panda$core$Real32 $tmp320 = panda$core$Real32$get_abs$R$panda$core$Real32(param0);
panda$core$UInt64 $tmp321 = panda$core$Real32$convert$R$panda$core$UInt64($tmp320);
panda$core$UInt64 $tmp322 = (panda$core$UInt64) {4294967295};
panda$core$String* $tmp323 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp319, $tmp321, $tmp322, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing REF($7:panda.core.String)
return $tmp323;

}
void panda$core$Real32$cleanup(panda$core$Real32 param0) {

return;

}






