#include "frost/core/Real32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Real32$format$frost$core$String$R$frost$core$String(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Real32$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real32$get_hash$R$frost$core$Int64(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Real32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Real32$get_asString$R$frost$core$String(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Real32$$SUB$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Bit result = frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Real32$get_abs$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Real32$get_asInt8$R$frost$core$Int8(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Real32$get_asInt16$R$frost$core$Int16(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Real32$get_asInt32$R$frost$core$Int32(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real32$get_asInt64$R$frost$core$Int64(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Real32$get_asUInt8$R$frost$core$UInt8(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Real32$get_asUInt16$R$frost$core$UInt16(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Real32$get_asUInt32$R$frost$core$UInt32(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Real32$get_asUInt64$R$frost$core$UInt64(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Real32$get_asReal32$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Real32$get_asReal64$R$frost$core$Real64(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Real32$cleanup$shim(frost$core$Object* p0) {
    frost$core$Real32$cleanup(((frost$core$Real32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real32$_frost$core$Equatable, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$_frost$core$Comparable, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Real32$_frost$core$Formattable, { frost$core$Real32$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$Real32$class_type frost$core$Real32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real32$_frost$collections$Key, { frost$core$Real32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$get_abs$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$get_hash$R$frost$core$Int64$shim, frost$core$Real32$get_asInt8$R$frost$core$Int8$shim, frost$core$Real32$get_asInt16$R$frost$core$Int16$shim, frost$core$Real32$get_asInt32$R$frost$core$Int32$shim, frost$core$Real32$get_asInt64$R$frost$core$Int64$shim, frost$core$Real32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real32$get_asReal32$R$frost$core$Real32$shim, frost$core$Real32$get_asReal64$R$frost$core$Real64$shim, frost$core$Real32$format$frost$core$String$R$frost$core$String$shim, frost$core$Real32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Real32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Equatable, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Comparable, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Formattable, { frost$core$Real32$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s2;
frost$core$Real32$wrapperclass_type frost$core$Real32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real32$wrapper_frost$collections$Key, { frost$core$Real32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };

frost$core$Real32 frost$core$Real32$init$builtin_float32(float param0) {

frost$core$Real32 local0;
// line 18
float* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Real32 $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real32 local0;
// line 24
int8_t $tmp5 = param0.value;
float* $tmp6 = &(&local0)->value;
*$tmp6 = ((float) $tmp5);
frost$core$Real32 $tmp7 = *(&local0);
return $tmp7;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real32 local0;
// line 30
int16_t $tmp8 = param0.value;
float* $tmp9 = &(&local0)->value;
*$tmp9 = ((float) $tmp8);
frost$core$Real32 $tmp10 = *(&local0);
return $tmp10;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real32 local0;
// line 36
int32_t $tmp11 = param0.value;
float* $tmp12 = &(&local0)->value;
*$tmp12 = ((float) $tmp11);
frost$core$Real32 $tmp13 = *(&local0);
return $tmp13;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real32 local0;
// line 42
int64_t $tmp14 = param0.value;
float* $tmp15 = &(&local0)->value;
*$tmp15 = ((float) $tmp14);
frost$core$Real32 $tmp16 = *(&local0);
return $tmp16;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real32 local0;
// line 48
uint8_t $tmp17 = param0.value;
float* $tmp18 = &(&local0)->value;
*$tmp18 = ((float) $tmp17);
frost$core$Real32 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real32 local0;
// line 54
uint16_t $tmp20 = param0.value;
float* $tmp21 = &(&local0)->value;
*$tmp21 = ((float) $tmp20);
frost$core$Real32 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real32 local0;
// line 60
uint32_t $tmp23 = param0.value;
float* $tmp24 = &(&local0)->value;
*$tmp24 = ((float) $tmp23);
frost$core$Real32 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real32 local0;
// line 66
uint64_t $tmp26 = param0.value;
float* $tmp27 = &(&local0)->value;
*$tmp27 = ((float) $tmp26);
frost$core$Real32 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 72
float $tmp29 = param0.value;
float $tmp30 = param1.value;
float $tmp31 = $tmp29 + $tmp30;
frost$core$Real32 $tmp32 = frost$core$Real32$init$builtin_float32($tmp31);
return $tmp32;

}
frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 78
float $tmp33 = param0.value;
double $tmp34 = param1.value;
double $tmp35 = ((double) $tmp33) + $tmp34;
frost$core$Real64 $tmp36 = frost$core$Real64$init$builtin_float64($tmp35);
return $tmp36;

}
frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 84
float $tmp37 = param0.value;
float $tmp38 = param1.value;
float $tmp39 = $tmp37 - $tmp38;
frost$core$Real32 $tmp40 = frost$core$Real32$init$builtin_float32($tmp39);
return $tmp40;

}
frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 90
float $tmp41 = param0.value;
double $tmp42 = param1.value;
double $tmp43 = ((double) $tmp41) - $tmp42;
frost$core$Real64 $tmp44 = frost$core$Real64$init$builtin_float64($tmp43);
return $tmp44;

}
frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32(frost$core$Real32 param0) {

// line 95
float $tmp45 = param0.value;
float $tmp46 = -$tmp45;
frost$core$Real32 $tmp47 = (frost$core$Real32) {$tmp46};
return $tmp47;

}
frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 101
float $tmp48 = param0.value;
float $tmp49 = param1.value;
float $tmp50 = $tmp48 * $tmp49;
frost$core$Real32 $tmp51 = frost$core$Real32$init$builtin_float32($tmp50);
return $tmp51;

}
frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 107
float $tmp52 = param0.value;
double $tmp53 = param1.value;
double $tmp54 = ((double) $tmp52) * $tmp53;
frost$core$Real64 $tmp55 = frost$core$Real64$init$builtin_float64($tmp54);
return $tmp55;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// line 113
float $tmp56 = param0.value;
int8_t $tmp57 = param1.value;
float $tmp58 = $tmp56 / ((float) $tmp57);
frost$core$Real32 $tmp59 = frost$core$Real32$init$builtin_float32($tmp58);
return $tmp59;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// line 119
float $tmp60 = param0.value;
int16_t $tmp61 = param1.value;
float $tmp62 = $tmp60 / ((float) $tmp61);
frost$core$Real32 $tmp63 = frost$core$Real32$init$builtin_float32($tmp62);
return $tmp63;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// line 125
float $tmp64 = param0.value;
int32_t $tmp65 = param1.value;
float $tmp66 = $tmp64 / ((float) $tmp65);
frost$core$Real32 $tmp67 = frost$core$Real32$init$builtin_float32($tmp66);
return $tmp67;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// line 131
float $tmp68 = param0.value;
int64_t $tmp69 = param1.value;
double $tmp70 = ((double) $tmp68) / ((double) $tmp69);
frost$core$Real64 $tmp71 = frost$core$Real64$init$builtin_float64($tmp70);
return $tmp71;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// line 137
float $tmp72 = param0.value;
uint8_t $tmp73 = param1.value;
float $tmp74 = $tmp72 / ((float) $tmp73);
frost$core$Real32 $tmp75 = frost$core$Real32$init$builtin_float32($tmp74);
return $tmp75;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// line 143
float $tmp76 = param0.value;
uint16_t $tmp77 = param1.value;
float $tmp78 = $tmp76 / ((float) $tmp77);
frost$core$Real32 $tmp79 = frost$core$Real32$init$builtin_float32($tmp78);
return $tmp79;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// line 149
float $tmp80 = param0.value;
uint32_t $tmp81 = param1.value;
float $tmp82 = $tmp80 / ((float) $tmp81);
frost$core$Real32 $tmp83 = frost$core$Real32$init$builtin_float32($tmp82);
return $tmp83;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// line 155
float $tmp84 = param0.value;
uint64_t $tmp85 = param1.value;
double $tmp86 = ((double) $tmp84) / ((double) $tmp85);
frost$core$Real64 $tmp87 = frost$core$Real64$init$builtin_float64($tmp86);
return $tmp87;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 161
float $tmp88 = param0.value;
float $tmp89 = param1.value;
float $tmp90 = $tmp88 / $tmp89;
frost$core$Real32 $tmp91 = frost$core$Real32$init$builtin_float32($tmp90);
return $tmp91;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 167
float $tmp92 = param0.value;
double $tmp93 = param1.value;
double $tmp94 = ((double) $tmp92) / $tmp93;
frost$core$Real64 $tmp95 = frost$core$Real64$init$builtin_float64($tmp94);
return $tmp95;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 174
float $tmp96 = param0.value;
float $tmp97 = param1.value;
bool $tmp98 = $tmp96 == $tmp97;
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit($tmp98);
return $tmp99;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 180
float $tmp100 = param0.value;
double $tmp101 = param1.value;
bool $tmp102 = ((double) $tmp100) == $tmp101;
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit($tmp102);
return $tmp103;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 187
float $tmp104 = param0.value;
float $tmp105 = param1.value;
bool $tmp106 = $tmp104 != $tmp105;
frost$core$Bit $tmp107 = frost$core$Bit$init$builtin_bit($tmp106);
return $tmp107;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 193
float $tmp108 = param0.value;
double $tmp109 = param1.value;
bool $tmp110 = ((double) $tmp108) != $tmp109;
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit($tmp110);
return $tmp111;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 200
float $tmp112 = param0.value;
float $tmp113 = param1.value;
bool $tmp114 = $tmp112 < $tmp113;
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit($tmp114);
return $tmp115;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 206
float $tmp116 = param0.value;
double $tmp117 = param1.value;
bool $tmp118 = ((double) $tmp116) < $tmp117;
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit($tmp118);
return $tmp119;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 213
float $tmp120 = param0.value;
float $tmp121 = param1.value;
bool $tmp122 = $tmp120 > $tmp121;
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit($tmp122);
return $tmp123;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 219
float $tmp124 = param0.value;
double $tmp125 = param1.value;
bool $tmp126 = ((double) $tmp124) > $tmp125;
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit($tmp126);
return $tmp127;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 226
float $tmp128 = param0.value;
float $tmp129 = param1.value;
bool $tmp130 = $tmp128 >= $tmp129;
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit($tmp130);
return $tmp131;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 232
float $tmp132 = param0.value;
double $tmp133 = param1.value;
bool $tmp134 = ((double) $tmp132) >= $tmp133;
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit($tmp134);
return $tmp135;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// line 239
float $tmp136 = param0.value;
float $tmp137 = param1.value;
bool $tmp138 = $tmp136 <= $tmp137;
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit($tmp138);
return $tmp139;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// line 245
float $tmp140 = param0.value;
double $tmp141 = param1.value;
bool $tmp142 = ((double) $tmp140) <= $tmp141;
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142);
return $tmp143;

}
frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32(frost$core$Real32 param0) {

// line 251
frost$core$Real32 $tmp144 = (frost$core$Real32) {0.0};
float $tmp145 = param0.value;
float $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 < $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block1; else goto block2;
block1:;
// line 252
frost$core$Real32 $tmp150 = frost$core$Real32$$SUB$R$frost$core$Real32(param0);
return $tmp150;
block2:;
// line 254
return param0;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// line 260
float $tmp151 = param0.value;
int8_t $tmp152 = param1.value;
bool $tmp153 = $tmp151 < ((float) $tmp152);
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block1:;
// line 261
float $tmp156 = param0.value;
frost$core$Real32 $tmp157 = frost$core$Real32$init$builtin_float32($tmp156);
return $tmp157;
block2:;
// line 263
int8_t $tmp158 = param1.value;
frost$core$Real32 $tmp159 = frost$core$Real32$init$builtin_float32(((float) $tmp158));
return $tmp159;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// line 269
float $tmp160 = param0.value;
int16_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((float) $tmp161);
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block1; else goto block2;
block1:;
// line 270
float $tmp165 = param0.value;
frost$core$Real32 $tmp166 = frost$core$Real32$init$builtin_float32($tmp165);
return $tmp166;
block2:;
// line 272
int16_t $tmp167 = param1.value;
frost$core$Real32 $tmp168 = frost$core$Real32$init$builtin_float32(((float) $tmp167));
return $tmp168;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// line 278
float $tmp169 = param0.value;
int32_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((float) $tmp170);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 279
float $tmp174 = param0.value;
frost$core$Real32 $tmp175 = frost$core$Real32$init$builtin_float32($tmp174);
return $tmp175;
block2:;
// line 281
int32_t $tmp176 = param1.value;
frost$core$Real32 $tmp177 = frost$core$Real32$init$builtin_float32(((float) $tmp176));
return $tmp177;

}
frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// line 287
float $tmp178 = param0.value;
int64_t $tmp179 = param1.value;
bool $tmp180 = ((double) $tmp178) < ((double) $tmp179);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block1; else goto block2;
block1:;
// line 288
float $tmp183 = param0.value;
frost$core$Real64 $tmp184 = frost$core$Real64$init$builtin_float64(((double) $tmp183));
return $tmp184;
block2:;
// line 290
int64_t $tmp185 = param1.value;
frost$core$Real64 $tmp186 = frost$core$Real64$init$builtin_float64(((double) $tmp185));
return $tmp186;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// line 296
float $tmp187 = param0.value;
uint8_t $tmp188 = param1.value;
bool $tmp189 = $tmp187 < ((float) $tmp188);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// line 297
float $tmp192 = param0.value;
frost$core$Real32 $tmp193 = frost$core$Real32$init$builtin_float32($tmp192);
return $tmp193;
block2:;
// line 299
uint8_t $tmp194 = param1.value;
frost$core$Real32 $tmp195 = frost$core$Real32$init$builtin_float32(((float) $tmp194));
return $tmp195;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// line 305
float $tmp196 = param0.value;
uint16_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 < ((float) $tmp197);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block1; else goto block2;
block1:;
// line 306
float $tmp201 = param0.value;
frost$core$Real32 $tmp202 = frost$core$Real32$init$builtin_float32($tmp201);
return $tmp202;
block2:;
// line 308
uint16_t $tmp203 = param1.value;
frost$core$Real32 $tmp204 = frost$core$Real32$init$builtin_float32(((float) $tmp203));
return $tmp204;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// line 314
float $tmp205 = param0.value;
uint32_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 < ((float) $tmp206);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block1; else goto block2;
block1:;
// line 315
float $tmp210 = param0.value;
frost$core$Real32 $tmp211 = frost$core$Real32$init$builtin_float32($tmp210);
return $tmp211;
block2:;
// line 317
uint32_t $tmp212 = param1.value;
frost$core$Real32 $tmp213 = frost$core$Real32$init$builtin_float32(((float) $tmp212));
return $tmp213;

}
frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// line 323
float $tmp214 = param0.value;
uint64_t $tmp215 = param1.value;
bool $tmp216 = ((double) $tmp214) < ((double) $tmp215);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// line 324
float $tmp219 = param0.value;
frost$core$Real64 $tmp220 = frost$core$Real64$init$builtin_float64(((double) $tmp219));
return $tmp220;
block2:;
// line 326
uint64_t $tmp221 = param1.value;
frost$core$Real64 $tmp222 = frost$core$Real64$init$builtin_float64(((double) $tmp221));
return $tmp222;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// line 332
float $tmp223 = param0.value;
int8_t $tmp224 = param1.value;
bool $tmp225 = $tmp223 > ((float) $tmp224);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 333
float $tmp228 = param0.value;
frost$core$Real32 $tmp229 = frost$core$Real32$init$builtin_float32($tmp228);
return $tmp229;
block2:;
// line 335
int8_t $tmp230 = param1.value;
frost$core$Real32 $tmp231 = frost$core$Real32$init$builtin_float32(((float) $tmp230));
return $tmp231;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// line 341
float $tmp232 = param0.value;
int16_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 > ((float) $tmp233);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 342
float $tmp237 = param0.value;
frost$core$Real32 $tmp238 = frost$core$Real32$init$builtin_float32($tmp237);
return $tmp238;
block2:;
// line 344
int16_t $tmp239 = param1.value;
frost$core$Real32 $tmp240 = frost$core$Real32$init$builtin_float32(((float) $tmp239));
return $tmp240;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// line 350
float $tmp241 = param0.value;
int32_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 > ((float) $tmp242);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 351
float $tmp246 = param0.value;
frost$core$Real32 $tmp247 = frost$core$Real32$init$builtin_float32($tmp246);
return $tmp247;
block2:;
// line 353
int32_t $tmp248 = param1.value;
frost$core$Real32 $tmp249 = frost$core$Real32$init$builtin_float32(((float) $tmp248));
return $tmp249;

}
frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// line 359
float $tmp250 = param0.value;
int64_t $tmp251 = param1.value;
bool $tmp252 = ((double) $tmp250) > ((double) $tmp251);
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block1:;
// line 360
float $tmp255 = param0.value;
frost$core$Real64 $tmp256 = frost$core$Real64$init$builtin_float64(((double) $tmp255));
return $tmp256;
block2:;
// line 362
int64_t $tmp257 = param1.value;
frost$core$Real64 $tmp258 = frost$core$Real64$init$builtin_float64(((double) $tmp257));
return $tmp258;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// line 368
float $tmp259 = param0.value;
uint8_t $tmp260 = param1.value;
bool $tmp261 = $tmp259 > ((float) $tmp260);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 369
float $tmp264 = param0.value;
frost$core$Real32 $tmp265 = frost$core$Real32$init$builtin_float32($tmp264);
return $tmp265;
block2:;
// line 371
uint8_t $tmp266 = param1.value;
frost$core$Real32 $tmp267 = frost$core$Real32$init$builtin_float32(((float) $tmp266));
return $tmp267;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// line 377
float $tmp268 = param0.value;
uint16_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((float) $tmp269);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 378
float $tmp273 = param0.value;
frost$core$Real32 $tmp274 = frost$core$Real32$init$builtin_float32($tmp273);
return $tmp274;
block2:;
// line 380
uint16_t $tmp275 = param1.value;
frost$core$Real32 $tmp276 = frost$core$Real32$init$builtin_float32(((float) $tmp275));
return $tmp276;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// line 386
float $tmp277 = param0.value;
uint32_t $tmp278 = param1.value;
bool $tmp279 = $tmp277 > ((float) $tmp278);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 387
float $tmp282 = param0.value;
frost$core$Real32 $tmp283 = frost$core$Real32$init$builtin_float32($tmp282);
return $tmp283;
block2:;
// line 389
uint32_t $tmp284 = param1.value;
frost$core$Real32 $tmp285 = frost$core$Real32$init$builtin_float32(((float) $tmp284));
return $tmp285;

}
frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// line 395
float $tmp286 = param0.value;
uint64_t $tmp287 = param1.value;
bool $tmp288 = ((double) $tmp286) > ((double) $tmp287);
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit($tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block1; else goto block2;
block1:;
// line 396
float $tmp291 = param0.value;
frost$core$Real64 $tmp292 = frost$core$Real64$init$builtin_float64(((double) $tmp291));
return $tmp292;
block2:;
// line 398
uint64_t $tmp293 = param1.value;
frost$core$Real64 $tmp294 = frost$core$Real64$init$builtin_float64(((double) $tmp293));
return $tmp294;

}
frost$core$Int64 frost$core$Real32$get_hash$R$frost$core$Int64(frost$core$Real32 param0) {

// line 403
float $tmp295 = param0.value;
frost$core$Int64 $tmp296 = (frost$core$Int64) {((int64_t) $tmp295)};
return $tmp296;

}
frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8(frost$core$Real32 param0) {

// line 409
float $tmp297 = param0.value;
frost$core$Int8 $tmp298 = (frost$core$Int8) {((int8_t) $tmp297)};
return $tmp298;

}
frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16(frost$core$Real32 param0) {

// line 415
float $tmp299 = param0.value;
frost$core$Int16 $tmp300 = (frost$core$Int16) {((int16_t) $tmp299)};
return $tmp300;

}
frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32(frost$core$Real32 param0) {

// line 421
float $tmp301 = param0.value;
frost$core$Int32 $tmp302 = (frost$core$Int32) {((int32_t) $tmp301)};
return $tmp302;

}
frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64(frost$core$Real32 param0) {

// line 427
float $tmp303 = param0.value;
frost$core$Int64 $tmp304 = (frost$core$Int64) {((int64_t) $tmp303)};
return $tmp304;

}
frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8(frost$core$Real32 param0) {

// line 433
float $tmp305 = param0.value;
frost$core$UInt8 $tmp306 = (frost$core$UInt8) {((uint8_t) $tmp305)};
return $tmp306;

}
frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16(frost$core$Real32 param0) {

// line 439
float $tmp307 = param0.value;
frost$core$UInt16 $tmp308 = (frost$core$UInt16) {((uint16_t) $tmp307)};
return $tmp308;

}
frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32(frost$core$Real32 param0) {

// line 445
float $tmp309 = param0.value;
frost$core$UInt32 $tmp310 = (frost$core$UInt32) {((uint32_t) $tmp309)};
return $tmp310;

}
frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64(frost$core$Real32 param0) {

// line 451
float $tmp311 = param0.value;
frost$core$UInt64 $tmp312 = (frost$core$UInt64) {((uint64_t) $tmp311)};
return $tmp312;

}
frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32(frost$core$Real32 param0) {

// line 457
float $tmp313 = param0.value;
frost$core$Real32 $tmp314 = (frost$core$Real32) {$tmp313};
return $tmp314;

}
frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64(frost$core$Real32 param0) {

// line 463
float $tmp315 = param0.value;
frost$core$Real64 $tmp316 = (frost$core$Real64) {((double) $tmp315)};
return $tmp316;

}
frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String(frost$core$Real32 param0, frost$core$String* param1) {

// line 473
float $tmp317 = param0.value;
bool $tmp318 = $tmp317 < 0.0;
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318);
frost$core$Real32 $tmp320 = frost$core$Real32$get_abs$R$frost$core$Real32(param0);
frost$core$UInt64 $tmp321 = frost$core$Real32$get_asUInt64$R$frost$core$UInt64($tmp320);
frost$core$UInt64 $tmp322 = (frost$core$UInt64) {4294967295};
frost$core$String* $tmp323 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp319, $tmp321, $tmp322, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
return $tmp323;

}
void frost$core$Real32$cleanup(frost$core$Real32 param0) {

return;

}






