#include "frost/core/Real64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Real64$format$frost$core$String$R$frost$core$String(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Real64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real64$get_hash$R$frost$core$Int64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, ((frost$core$Real64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Real64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Real64$get_asString$R$frost$core$String(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Real64$$SUB$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Bit result = frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Real64$get_abs$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Real64$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Real64$convert$R$frost$core$Int8(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Real64$convert$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Real64$convert$R$frost$core$Int16(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Real64$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Real64$convert$R$frost$core$Int32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Real64$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real64$convert$R$frost$core$Int64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Real64$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Real64$convert$R$frost$core$UInt8(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Real64$convert$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Real64$convert$R$frost$core$UInt16(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Real64$convert$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Real64$convert$R$frost$core$UInt32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Real64$convert$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Real64$convert$R$frost$core$UInt64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real64$convert$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Real64$convert$R$frost$core$Real32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$convert$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Real64$convert$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Real64$cleanup$shim(frost$core$Object* p0) {
    frost$core$Real64$cleanup(((frost$core$Real64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$_frost$core$Comparable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Real64$_frost$core$Formattable, { frost$core$Real64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real64$_frost$collections$Key, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Real64$class_type frost$core$Real64$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$_frost$core$Equatable, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$R$frost$core$Real64$shim, frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$get_abs$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$get_hash$R$frost$core$Int64$shim, frost$core$Real64$convert$R$frost$core$Int8$shim, frost$core$Real64$convert$R$frost$core$Int16$shim, frost$core$Real64$convert$R$frost$core$Int32$shim, frost$core$Real64$convert$R$frost$core$Int64$shim, frost$core$Real64$convert$R$frost$core$UInt8$shim, frost$core$Real64$convert$R$frost$core$UInt16$shim, frost$core$Real64$convert$R$frost$core$UInt32$shim, frost$core$Real64$convert$R$frost$core$UInt64$shim, frost$core$Real64$convert$R$frost$core$Real32$shim, frost$core$Real64$convert$R$frost$core$Real64$shim, frost$core$Real64$format$frost$core$String$R$frost$core$String$shim, frost$core$Real64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Comparable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Formattable, { frost$core$Real64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Real64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real64$wrapper_frost$collections$Key, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Real64$wrapperclass_type frost$core$Real64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Equatable, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };

frost$core$Real64 frost$core$Real64$init$builtin_float64(double param0) {

frost$core$Real64 local0;
// line 18
double* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Real64 $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real64 local0;
// line 24
int8_t $tmp5 = param0.value;
double* $tmp6 = &(&local0)->value;
*$tmp6 = ((double) $tmp5);
frost$core$Real64 $tmp7 = *(&local0);
return $tmp7;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real64 local0;
// line 30
int16_t $tmp8 = param0.value;
double* $tmp9 = &(&local0)->value;
*$tmp9 = ((double) $tmp8);
frost$core$Real64 $tmp10 = *(&local0);
return $tmp10;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real64 local0;
// line 36
int32_t $tmp11 = param0.value;
double* $tmp12 = &(&local0)->value;
*$tmp12 = ((double) $tmp11);
frost$core$Real64 $tmp13 = *(&local0);
return $tmp13;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real64 local0;
// line 42
int64_t $tmp14 = param0.value;
double* $tmp15 = &(&local0)->value;
*$tmp15 = ((double) $tmp14);
frost$core$Real64 $tmp16 = *(&local0);
return $tmp16;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real64 local0;
// line 48
uint8_t $tmp17 = param0.value;
double* $tmp18 = &(&local0)->value;
*$tmp18 = ((double) $tmp17);
frost$core$Real64 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real64 local0;
// line 54
uint16_t $tmp20 = param0.value;
double* $tmp21 = &(&local0)->value;
*$tmp21 = ((double) $tmp20);
frost$core$Real64 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real64 local0;
// line 60
uint32_t $tmp23 = param0.value;
double* $tmp24 = &(&local0)->value;
*$tmp24 = ((double) $tmp23);
frost$core$Real64 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real64 local0;
// line 66
uint64_t $tmp26 = param0.value;
double* $tmp27 = &(&local0)->value;
*$tmp27 = ((double) $tmp26);
frost$core$Real64 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Real32(frost$core$Real32 param0) {

frost$core$Real64 local0;
// line 72
float $tmp29 = param0.value;
double* $tmp30 = &(&local0)->value;
*$tmp30 = ((double) $tmp29);
frost$core$Real64 $tmp31 = *(&local0);
return $tmp31;

}
frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 78
double $tmp32 = param0.value;
double $tmp33 = param1.value;
double $tmp34 = $tmp32 + $tmp33;
frost$core$Real64 $tmp35 = frost$core$Real64$init$builtin_float64($tmp34);
return $tmp35;

}
frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 84
double $tmp36 = param0.value;
double $tmp37 = param1.value;
double $tmp38 = $tmp36 - $tmp37;
frost$core$Real64 $tmp39 = frost$core$Real64$init$builtin_float64($tmp38);
return $tmp39;

}
frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64(frost$core$Real64 param0) {

// line 89
double $tmp40 = param0.value;
double $tmp41 = -$tmp40;
frost$core$Real64 $tmp42 = (frost$core$Real64) {$tmp41};
return $tmp42;

}
frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 95
double $tmp43 = param0.value;
double $tmp44 = param1.value;
double $tmp45 = $tmp43 * $tmp44;
frost$core$Real64 $tmp46 = frost$core$Real64$init$builtin_float64($tmp45);
return $tmp46;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// line 101
double $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = $tmp47 / ((double) $tmp48);
frost$core$Real64 $tmp50 = frost$core$Real64$init$builtin_float64($tmp49);
return $tmp50;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// line 107
double $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = $tmp51 / ((double) $tmp52);
frost$core$Real64 $tmp54 = frost$core$Real64$init$builtin_float64($tmp53);
return $tmp54;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// line 113
double $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = $tmp55 / ((double) $tmp56);
frost$core$Real64 $tmp58 = frost$core$Real64$init$builtin_float64($tmp57);
return $tmp58;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// line 119
double $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = $tmp59 / ((double) $tmp60);
frost$core$Real64 $tmp62 = frost$core$Real64$init$builtin_float64($tmp61);
return $tmp62;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// line 125
double $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = $tmp63 / ((double) $tmp64);
frost$core$Real64 $tmp66 = frost$core$Real64$init$builtin_float64($tmp65);
return $tmp66;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// line 131
double $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = $tmp67 / ((double) $tmp68);
frost$core$Real64 $tmp70 = frost$core$Real64$init$builtin_float64($tmp69);
return $tmp70;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// line 137
double $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = $tmp71 / ((double) $tmp72);
frost$core$Real64 $tmp74 = frost$core$Real64$init$builtin_float64($tmp73);
return $tmp74;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// line 143
double $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = $tmp75 / ((double) $tmp76);
frost$core$Real64 $tmp78 = frost$core$Real64$init$builtin_float64($tmp77);
return $tmp78;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 149
double $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = $tmp79 / ((double) $tmp80);
frost$core$Real64 $tmp82 = frost$core$Real64$init$builtin_float64($tmp81);
return $tmp82;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 155
double $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = $tmp83 / $tmp84;
frost$core$Real64 $tmp86 = frost$core$Real64$init$builtin_float64($tmp85);
return $tmp86;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 161
double $tmp87 = param0.value;
float $tmp88 = param1.value;
bool $tmp89 = $tmp87 == ((double) $tmp88);
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89);
return $tmp90;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 168
double $tmp91 = param0.value;
double $tmp92 = param1.value;
bool $tmp93 = $tmp91 == $tmp92;
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit($tmp93);
return $tmp94;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 174
double $tmp95 = param0.value;
float $tmp96 = param1.value;
bool $tmp97 = $tmp95 != ((double) $tmp96);
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit($tmp97);
return $tmp98;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 181
double $tmp99 = param0.value;
double $tmp100 = param1.value;
bool $tmp101 = $tmp99 != $tmp100;
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101);
return $tmp102;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 187
double $tmp103 = param0.value;
float $tmp104 = param1.value;
bool $tmp105 = $tmp103 < ((double) $tmp104);
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105);
return $tmp106;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 194
double $tmp107 = param0.value;
double $tmp108 = param1.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit($tmp109);
return $tmp110;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 200
double $tmp111 = param0.value;
float $tmp112 = param1.value;
bool $tmp113 = $tmp111 > ((double) $tmp112);
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit($tmp113);
return $tmp114;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 207
double $tmp115 = param0.value;
double $tmp116 = param1.value;
bool $tmp117 = $tmp115 > $tmp116;
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit($tmp117);
return $tmp118;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 213
double $tmp119 = param0.value;
float $tmp120 = param1.value;
bool $tmp121 = $tmp119 >= ((double) $tmp120);
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit($tmp121);
return $tmp122;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 220
double $tmp123 = param0.value;
double $tmp124 = param1.value;
bool $tmp125 = $tmp123 >= $tmp124;
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125);
return $tmp126;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// line 226
double $tmp127 = param0.value;
float $tmp128 = param1.value;
bool $tmp129 = $tmp127 <= ((double) $tmp128);
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit($tmp129);
return $tmp130;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// line 233
double $tmp131 = param0.value;
double $tmp132 = param1.value;
bool $tmp133 = $tmp131 <= $tmp132;
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133);
return $tmp134;

}
frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64(frost$core$Real64 param0) {

// line 239
frost$core$Real64 $tmp135 = (frost$core$Real64) {0.0};
double $tmp136 = param0.value;
double $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 < $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block1:;
// line 240
frost$core$Real64 $tmp141 = frost$core$Real64$$SUB$R$frost$core$Real64(param0);
return $tmp141;
block2:;
// line 242
return param0;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// line 248
double $tmp142 = param0.value;
int8_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 < ((double) $tmp143);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block2;
block1:;
// line 249
double $tmp147 = param0.value;
frost$core$Real64 $tmp148 = frost$core$Real64$init$builtin_float64($tmp147);
return $tmp148;
block2:;
// line 251
int8_t $tmp149 = param1.value;
frost$core$Real64 $tmp150 = frost$core$Real64$init$builtin_float64(((double) $tmp149));
return $tmp150;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// line 257
double $tmp151 = param0.value;
int16_t $tmp152 = param1.value;
bool $tmp153 = $tmp151 < ((double) $tmp152);
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block1:;
// line 258
double $tmp156 = param0.value;
frost$core$Real64 $tmp157 = frost$core$Real64$init$builtin_float64($tmp156);
return $tmp157;
block2:;
// line 260
int16_t $tmp158 = param1.value;
frost$core$Real64 $tmp159 = frost$core$Real64$init$builtin_float64(((double) $tmp158));
return $tmp159;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// line 266
double $tmp160 = param0.value;
int32_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((double) $tmp161);
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block1; else goto block2;
block1:;
// line 267
double $tmp165 = param0.value;
frost$core$Real64 $tmp166 = frost$core$Real64$init$builtin_float64($tmp165);
return $tmp166;
block2:;
// line 269
int32_t $tmp167 = param1.value;
frost$core$Real64 $tmp168 = frost$core$Real64$init$builtin_float64(((double) $tmp167));
return $tmp168;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// line 275
double $tmp169 = param0.value;
int64_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((double) $tmp170);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 276
double $tmp174 = param0.value;
frost$core$Real64 $tmp175 = frost$core$Real64$init$builtin_float64($tmp174);
return $tmp175;
block2:;
// line 278
int64_t $tmp176 = param1.value;
frost$core$Real64 $tmp177 = frost$core$Real64$init$builtin_float64(((double) $tmp176));
return $tmp177;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// line 284
double $tmp178 = param0.value;
uint8_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 < ((double) $tmp179);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block1; else goto block2;
block1:;
// line 285
double $tmp183 = param0.value;
frost$core$Real64 $tmp184 = frost$core$Real64$init$builtin_float64($tmp183);
return $tmp184;
block2:;
// line 287
uint8_t $tmp185 = param1.value;
frost$core$Real64 $tmp186 = frost$core$Real64$init$builtin_float64(((double) $tmp185));
return $tmp186;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// line 293
double $tmp187 = param0.value;
uint16_t $tmp188 = param1.value;
bool $tmp189 = $tmp187 < ((double) $tmp188);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// line 294
double $tmp192 = param0.value;
frost$core$Real64 $tmp193 = frost$core$Real64$init$builtin_float64($tmp192);
return $tmp193;
block2:;
// line 296
uint16_t $tmp194 = param1.value;
frost$core$Real64 $tmp195 = frost$core$Real64$init$builtin_float64(((double) $tmp194));
return $tmp195;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// line 302
double $tmp196 = param0.value;
uint32_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 < ((double) $tmp197);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block1; else goto block2;
block1:;
// line 303
double $tmp201 = param0.value;
frost$core$Real64 $tmp202 = frost$core$Real64$init$builtin_float64($tmp201);
return $tmp202;
block2:;
// line 305
uint32_t $tmp203 = param1.value;
frost$core$Real64 $tmp204 = frost$core$Real64$init$builtin_float64(((double) $tmp203));
return $tmp204;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// line 311
double $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 < ((double) $tmp206);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block1; else goto block2;
block1:;
// line 312
double $tmp210 = param0.value;
frost$core$Real64 $tmp211 = frost$core$Real64$init$builtin_float64($tmp210);
return $tmp211;
block2:;
// line 314
uint64_t $tmp212 = param1.value;
frost$core$Real64 $tmp213 = frost$core$Real64$init$builtin_float64(((double) $tmp212));
return $tmp213;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// line 320
double $tmp214 = param0.value;
int8_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 > ((double) $tmp215);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// line 321
double $tmp219 = param0.value;
frost$core$Real64 $tmp220 = frost$core$Real64$init$builtin_float64($tmp219);
return $tmp220;
block2:;
// line 323
int8_t $tmp221 = param1.value;
frost$core$Real64 $tmp222 = frost$core$Real64$init$builtin_float64(((double) $tmp221));
return $tmp222;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// line 329
double $tmp223 = param0.value;
int16_t $tmp224 = param1.value;
bool $tmp225 = $tmp223 > ((double) $tmp224);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 330
double $tmp228 = param0.value;
frost$core$Real64 $tmp229 = frost$core$Real64$init$builtin_float64($tmp228);
return $tmp229;
block2:;
// line 332
int16_t $tmp230 = param1.value;
frost$core$Real64 $tmp231 = frost$core$Real64$init$builtin_float64(((double) $tmp230));
return $tmp231;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// line 338
double $tmp232 = param0.value;
int32_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > ((double) $tmp233);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 339
double $tmp237 = param0.value;
frost$core$Real64 $tmp238 = frost$core$Real64$init$builtin_float64($tmp237);
return $tmp238;
block2:;
// line 341
int32_t $tmp239 = param1.value;
frost$core$Real64 $tmp240 = frost$core$Real64$init$builtin_float64(((double) $tmp239));
return $tmp240;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// line 347
double $tmp241 = param0.value;
int64_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 > ((double) $tmp242);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 348
double $tmp246 = param0.value;
frost$core$Real64 $tmp247 = frost$core$Real64$init$builtin_float64($tmp246);
return $tmp247;
block2:;
// line 350
int64_t $tmp248 = param1.value;
frost$core$Real64 $tmp249 = frost$core$Real64$init$builtin_float64(((double) $tmp248));
return $tmp249;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// line 356
double $tmp250 = param0.value;
uint8_t $tmp251 = param1.value;
bool $tmp252 = $tmp250 > ((double) $tmp251);
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block1:;
// line 357
double $tmp255 = param0.value;
frost$core$Real64 $tmp256 = frost$core$Real64$init$builtin_float64($tmp255);
return $tmp256;
block2:;
// line 359
uint8_t $tmp257 = param1.value;
frost$core$Real64 $tmp258 = frost$core$Real64$init$builtin_float64(((double) $tmp257));
return $tmp258;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// line 365
double $tmp259 = param0.value;
uint16_t $tmp260 = param1.value;
bool $tmp261 = $tmp259 > ((double) $tmp260);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 366
double $tmp264 = param0.value;
frost$core$Real64 $tmp265 = frost$core$Real64$init$builtin_float64($tmp264);
return $tmp265;
block2:;
// line 368
uint16_t $tmp266 = param1.value;
frost$core$Real64 $tmp267 = frost$core$Real64$init$builtin_float64(((double) $tmp266));
return $tmp267;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// line 374
double $tmp268 = param0.value;
uint32_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((double) $tmp269);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 375
double $tmp273 = param0.value;
frost$core$Real64 $tmp274 = frost$core$Real64$init$builtin_float64($tmp273);
return $tmp274;
block2:;
// line 377
uint32_t $tmp275 = param1.value;
frost$core$Real64 $tmp276 = frost$core$Real64$init$builtin_float64(((double) $tmp275));
return $tmp276;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// line 383
double $tmp277 = param0.value;
uint64_t $tmp278 = param1.value;
bool $tmp279 = $tmp277 > ((double) $tmp278);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 384
double $tmp282 = param0.value;
frost$core$Real64 $tmp283 = frost$core$Real64$init$builtin_float64($tmp282);
return $tmp283;
block2:;
// line 386
uint64_t $tmp284 = param1.value;
frost$core$Real64 $tmp285 = frost$core$Real64$init$builtin_float64(((double) $tmp284));
return $tmp285;

}
frost$core$Int64 frost$core$Real64$get_hash$R$frost$core$Int64(frost$core$Real64 param0) {

// line 391
double $tmp286 = param0.value;
frost$core$Int64 $tmp287 = (frost$core$Int64) {((int64_t) $tmp286)};
return $tmp287;

}
frost$core$Int8 frost$core$Real64$convert$R$frost$core$Int8(frost$core$Real64 param0) {

// line 396
double $tmp288 = param0.value;
frost$core$Int8 $tmp289 = (frost$core$Int8) {((int8_t) $tmp288)};
return $tmp289;

}
frost$core$Int16 frost$core$Real64$convert$R$frost$core$Int16(frost$core$Real64 param0) {

// line 401
double $tmp290 = param0.value;
frost$core$Int16 $tmp291 = (frost$core$Int16) {((int16_t) $tmp290)};
return $tmp291;

}
frost$core$Int32 frost$core$Real64$convert$R$frost$core$Int32(frost$core$Real64 param0) {

// line 406
double $tmp292 = param0.value;
frost$core$Int32 $tmp293 = (frost$core$Int32) {((int32_t) $tmp292)};
return $tmp293;

}
frost$core$Int64 frost$core$Real64$convert$R$frost$core$Int64(frost$core$Real64 param0) {

// line 411
double $tmp294 = param0.value;
frost$core$Int64 $tmp295 = (frost$core$Int64) {((int64_t) $tmp294)};
return $tmp295;

}
frost$core$UInt8 frost$core$Real64$convert$R$frost$core$UInt8(frost$core$Real64 param0) {

// line 416
double $tmp296 = param0.value;
frost$core$UInt8 $tmp297 = (frost$core$UInt8) {((uint8_t) $tmp296)};
return $tmp297;

}
frost$core$UInt16 frost$core$Real64$convert$R$frost$core$UInt16(frost$core$Real64 param0) {

// line 421
double $tmp298 = param0.value;
frost$core$UInt16 $tmp299 = (frost$core$UInt16) {((uint16_t) $tmp298)};
return $tmp299;

}
frost$core$UInt32 frost$core$Real64$convert$R$frost$core$UInt32(frost$core$Real64 param0) {

// line 426
double $tmp300 = param0.value;
frost$core$UInt32 $tmp301 = (frost$core$UInt32) {((uint32_t) $tmp300)};
return $tmp301;

}
frost$core$UInt64 frost$core$Real64$convert$R$frost$core$UInt64(frost$core$Real64 param0) {

// line 431
double $tmp302 = param0.value;
frost$core$UInt64 $tmp303 = (frost$core$UInt64) {((uint64_t) $tmp302)};
return $tmp303;

}
frost$core$Real32 frost$core$Real64$convert$R$frost$core$Real32(frost$core$Real64 param0) {

// line 436
double $tmp304 = param0.value;
frost$core$Real32 $tmp305 = (frost$core$Real32) {((float) $tmp304)};
return $tmp305;

}
frost$core$Real64 frost$core$Real64$convert$R$frost$core$Real64(frost$core$Real64 param0) {

// line 441
double $tmp306 = param0.value;
frost$core$Real64 $tmp307 = (frost$core$Real64) {$tmp306};
return $tmp307;

}
frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String(frost$core$Real64 param0, frost$core$String* param1) {

// line 451
double $tmp308 = param0.value;
bool $tmp309 = $tmp308 < 0.0;
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309);
frost$core$Real64 $tmp311 = frost$core$Real64$get_abs$R$frost$core$Real64(param0);
frost$core$UInt64 $tmp312 = frost$core$Real64$convert$R$frost$core$UInt64($tmp311);
frost$core$UInt64 $tmp313 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp314 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp310, $tmp312, $tmp313, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($7:frost.core.String)
return $tmp314;

}
void frost$core$Real64$cleanup(frost$core$Real64 param0) {

return;

}






