#include "frost/core/Real64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Frost.h"

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
__attribute__((weak)) frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Real64$format$frost$core$String$R$frost$core$String(((frost$core$Real64$wrapper*) p0)->value, p1);

    return result;
}
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
__attribute__((weak)) void frost$core$Real64$get_floor$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_floor$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real64$get_ceiling$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_ceiling$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real64$get_sqrt$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_sqrt$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real64$get_sin$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_sin$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real64$get_cos$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_cos$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real64$get_tan$R$frost$core$Real64$shim(frost$core$Real64* sret, frost$core$Object* p0) {
    frost$core$Real64$get_tan$R$frost$core$Real64(sret, ((frost$core$Real64$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int8 frost$core$Real64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Real64$get_asInt8$R$frost$core$Int8(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Real64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Real64$get_asInt16$R$frost$core$Int16(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Real64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Real64$get_asInt32$R$frost$core$Int32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Real64$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real64$get_asInt64$R$frost$core$Int64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Real64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Real64$get_asUInt8$R$frost$core$UInt8(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Real64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Real64$get_asUInt16$R$frost$core$UInt16(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Real64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Real64$get_asUInt32$R$frost$core$UInt32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Real64$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Real64$get_asUInt64$R$frost$core$UInt64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Real64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Real64$get_asReal32$R$frost$core$Real32(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Real64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Real64$get_asReal64$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Real64$cleanup$shim(frost$core$Object* p0) {
    frost$core$Real64$cleanup(((frost$core$Real64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real64$_frost$collections$Key, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$_frost$core$Equatable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real64$_frost$core$Formattable, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Real64$class_type frost$core$Real64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$_frost$core$Comparable, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$R$frost$core$Real64$shim, frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$get_abs$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$get_floor$R$frost$core$Real64$shim, frost$core$Real64$get_ceiling$R$frost$core$Real64$shim, frost$core$Real64$get_sqrt$R$frost$core$Real64$shim, frost$core$Real64$get_sin$R$frost$core$Real64$shim, frost$core$Real64$get_cos$R$frost$core$Real64$shim, frost$core$Real64$get_tan$R$frost$core$Real64$shim, frost$core$Real64$get_hash$R$frost$core$Int64$shim, frost$core$Real64$get_asInt8$R$frost$core$Int8$shim, frost$core$Real64$get_asInt16$R$frost$core$Int16$shim, frost$core$Real64$get_asInt32$R$frost$core$Int32$shim, frost$core$Real64$get_asInt64$R$frost$core$Int64$shim, frost$core$Real64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real64$get_asReal32$R$frost$core$Real32$shim, frost$core$Real64$get_asReal64$R$frost$core$Real64$shim, frost$core$Real64$format$frost$core$String$R$frost$core$String$shim, frost$core$Real64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Real64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real64$wrapper_frost$collections$Key, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Equatable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Formattable, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Real64$wrapperclass_type frost$core$Real64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Comparable, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -2416306569881990238, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -2416306569881990238, NULL };

frost$core$Real64 frost$core$Real64$init$builtin_float64(double param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:18
double* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Real64 $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:24
int8_t $tmp5 = param0.value;
double* $tmp6 = &(&local0)->value;
*$tmp6 = ((double) $tmp5);
frost$core$Real64 $tmp7 = *(&local0);
return $tmp7;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:30
int16_t $tmp8 = param0.value;
double* $tmp9 = &(&local0)->value;
*$tmp9 = ((double) $tmp8);
frost$core$Real64 $tmp10 = *(&local0);
return $tmp10;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:36
int32_t $tmp11 = param0.value;
double* $tmp12 = &(&local0)->value;
*$tmp12 = ((double) $tmp11);
frost$core$Real64 $tmp13 = *(&local0);
return $tmp13;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:42
int64_t $tmp14 = param0.value;
double* $tmp15 = &(&local0)->value;
*$tmp15 = ((double) $tmp14);
frost$core$Real64 $tmp16 = *(&local0);
return $tmp16;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:48
uint8_t $tmp17 = param0.value;
double* $tmp18 = &(&local0)->value;
*$tmp18 = ((double) $tmp17);
frost$core$Real64 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:54
uint16_t $tmp20 = param0.value;
double* $tmp21 = &(&local0)->value;
*$tmp21 = ((double) $tmp20);
frost$core$Real64 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:60
uint32_t $tmp23 = param0.value;
double* $tmp24 = &(&local0)->value;
*$tmp24 = ((double) $tmp23);
frost$core$Real64 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:66
uint64_t $tmp26 = param0.value;
double* $tmp27 = &(&local0)->value;
*$tmp27 = ((double) $tmp26);
frost$core$Real64 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Real32(frost$core$Real32 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:72
float $tmp29 = param0.value;
double* $tmp30 = &(&local0)->value;
*$tmp30 = ((double) $tmp29);
frost$core$Real64 $tmp31 = *(&local0);
return $tmp31;

}
frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:78
double $tmp32 = param0.value;
double $tmp33 = param1.value;
double $tmp34 = $tmp32 + $tmp33;
frost$core$Real64 $tmp35 = (frost$core$Real64) {$tmp34};
return $tmp35;

}
frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:84
double $tmp36 = param0.value;
double $tmp37 = param1.value;
double $tmp38 = $tmp36 - $tmp37;
frost$core$Real64 $tmp39 = (frost$core$Real64) {$tmp38};
return $tmp39;

}
frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:89
double $tmp40 = param0.value;
double $tmp41 = -$tmp40;
frost$core$Real64 $tmp42 = (frost$core$Real64) {$tmp41};
return $tmp42;

}
frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:95
double $tmp43 = param0.value;
double $tmp44 = param1.value;
double $tmp45 = $tmp43 * $tmp44;
frost$core$Real64 $tmp46 = (frost$core$Real64) {$tmp45};
return $tmp46;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:101
double $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = $tmp47 / ((double) $tmp48);
frost$core$Real64 $tmp50 = (frost$core$Real64) {$tmp49};
return $tmp50;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:107
double $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = $tmp51 / ((double) $tmp52);
frost$core$Real64 $tmp54 = (frost$core$Real64) {$tmp53};
return $tmp54;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:113
double $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = $tmp55 / ((double) $tmp56);
frost$core$Real64 $tmp58 = (frost$core$Real64) {$tmp57};
return $tmp58;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:119
double $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = $tmp59 / ((double) $tmp60);
frost$core$Real64 $tmp62 = (frost$core$Real64) {$tmp61};
return $tmp62;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:125
double $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = $tmp63 / ((double) $tmp64);
frost$core$Real64 $tmp66 = (frost$core$Real64) {$tmp65};
return $tmp66;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:131
double $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = $tmp67 / ((double) $tmp68);
frost$core$Real64 $tmp70 = (frost$core$Real64) {$tmp69};
return $tmp70;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:137
double $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = $tmp71 / ((double) $tmp72);
frost$core$Real64 $tmp74 = (frost$core$Real64) {$tmp73};
return $tmp74;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:143
double $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = $tmp75 / ((double) $tmp76);
frost$core$Real64 $tmp78 = (frost$core$Real64) {$tmp77};
return $tmp78;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:149
double $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = $tmp79 / ((double) $tmp80);
frost$core$Real64 $tmp82 = (frost$core$Real64) {$tmp81};
return $tmp82;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:155
double $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = $tmp83 / $tmp84;
frost$core$Real64 $tmp86 = (frost$core$Real64) {$tmp85};
return $tmp86;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:161
double $tmp87 = param0.value;
float $tmp88 = param1.value;
bool $tmp89 = $tmp87 == ((double) $tmp88);
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
return $tmp90;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:168
double $tmp91 = param0.value;
double $tmp92 = param1.value;
bool $tmp93 = $tmp91 == $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
return $tmp94;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:174
double $tmp95 = param0.value;
float $tmp96 = param1.value;
bool $tmp97 = $tmp95 != ((double) $tmp96);
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
return $tmp98;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:181
double $tmp99 = param0.value;
double $tmp100 = param1.value;
bool $tmp101 = $tmp99 != $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
return $tmp102;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:187
double $tmp103 = param0.value;
float $tmp104 = param1.value;
bool $tmp105 = $tmp103 < ((double) $tmp104);
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
return $tmp106;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:194
double $tmp107 = param0.value;
double $tmp108 = param1.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
return $tmp110;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:200
double $tmp111 = param0.value;
float $tmp112 = param1.value;
bool $tmp113 = $tmp111 > ((double) $tmp112);
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
return $tmp114;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:207
double $tmp115 = param0.value;
double $tmp116 = param1.value;
bool $tmp117 = $tmp115 > $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
return $tmp118;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:213
double $tmp119 = param0.value;
float $tmp120 = param1.value;
bool $tmp121 = $tmp119 >= ((double) $tmp120);
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
return $tmp122;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:220
double $tmp123 = param0.value;
double $tmp124 = param1.value;
bool $tmp125 = $tmp123 >= $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
return $tmp126;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:226
double $tmp127 = param0.value;
float $tmp128 = param1.value;
bool $tmp129 = $tmp127 <= ((double) $tmp128);
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
return $tmp130;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:233
double $tmp131 = param0.value;
double $tmp132 = param1.value;
bool $tmp133 = $tmp131 <= $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
return $tmp134;

}
frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:239
frost$core$Real64 $tmp135 = (frost$core$Real64) {0.0};
double $tmp136 = param0.value;
double $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 < $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:240
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:240:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:89
double $tmp141 = param0.value;
double $tmp142 = -$tmp141;
frost$core$Real64 $tmp143 = (frost$core$Real64) {$tmp142};
return $tmp143;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:242
return param0;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:248
double $tmp144 = param0.value;
int8_t $tmp145 = param1.value;
bool $tmp146 = $tmp144 < ((double) $tmp145);
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:249
double $tmp149 = param0.value;
frost$core$Real64 $tmp150 = (frost$core$Real64) {$tmp149};
return $tmp150;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:251
int8_t $tmp151 = param1.value;
frost$core$Real64 $tmp152 = (frost$core$Real64) {((double) $tmp151)};
return $tmp152;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:257
double $tmp153 = param0.value;
int16_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((double) $tmp154);
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:258
double $tmp158 = param0.value;
frost$core$Real64 $tmp159 = (frost$core$Real64) {$tmp158};
return $tmp159;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:260
int16_t $tmp160 = param1.value;
frost$core$Real64 $tmp161 = (frost$core$Real64) {((double) $tmp160)};
return $tmp161;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:266
double $tmp162 = param0.value;
int32_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((double) $tmp163);
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:267
double $tmp167 = param0.value;
frost$core$Real64 $tmp168 = (frost$core$Real64) {$tmp167};
return $tmp168;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:269
int32_t $tmp169 = param1.value;
frost$core$Real64 $tmp170 = (frost$core$Real64) {((double) $tmp169)};
return $tmp170;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:275
double $tmp171 = param0.value;
int64_t $tmp172 = param1.value;
bool $tmp173 = $tmp171 < ((double) $tmp172);
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:276
double $tmp176 = param0.value;
frost$core$Real64 $tmp177 = (frost$core$Real64) {$tmp176};
return $tmp177;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:278
int64_t $tmp178 = param1.value;
frost$core$Real64 $tmp179 = (frost$core$Real64) {((double) $tmp178)};
return $tmp179;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:284
double $tmp180 = param0.value;
uint8_t $tmp181 = param1.value;
bool $tmp182 = $tmp180 < ((double) $tmp181);
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:285
double $tmp185 = param0.value;
frost$core$Real64 $tmp186 = (frost$core$Real64) {$tmp185};
return $tmp186;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:287
uint8_t $tmp187 = param1.value;
frost$core$Real64 $tmp188 = (frost$core$Real64) {((double) $tmp187)};
return $tmp188;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:293
double $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 < ((double) $tmp190);
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:294
double $tmp194 = param0.value;
frost$core$Real64 $tmp195 = (frost$core$Real64) {$tmp194};
return $tmp195;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:296
uint16_t $tmp196 = param1.value;
frost$core$Real64 $tmp197 = (frost$core$Real64) {((double) $tmp196)};
return $tmp197;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:302
double $tmp198 = param0.value;
uint32_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 < ((double) $tmp199);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:303
double $tmp203 = param0.value;
frost$core$Real64 $tmp204 = (frost$core$Real64) {$tmp203};
return $tmp204;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:305
uint32_t $tmp205 = param1.value;
frost$core$Real64 $tmp206 = (frost$core$Real64) {((double) $tmp205)};
return $tmp206;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:311
double $tmp207 = param0.value;
uint64_t $tmp208 = param1.value;
bool $tmp209 = $tmp207 < ((double) $tmp208);
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:312
double $tmp212 = param0.value;
frost$core$Real64 $tmp213 = (frost$core$Real64) {$tmp212};
return $tmp213;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:314
uint64_t $tmp214 = param1.value;
frost$core$Real64 $tmp215 = (frost$core$Real64) {((double) $tmp214)};
return $tmp215;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:320
double $tmp216 = param0.value;
int8_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 > ((double) $tmp217);
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:321
double $tmp221 = param0.value;
frost$core$Real64 $tmp222 = (frost$core$Real64) {$tmp221};
return $tmp222;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:323
int8_t $tmp223 = param1.value;
frost$core$Real64 $tmp224 = (frost$core$Real64) {((double) $tmp223)};
return $tmp224;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:329
double $tmp225 = param0.value;
int16_t $tmp226 = param1.value;
bool $tmp227 = $tmp225 > ((double) $tmp226);
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:330
double $tmp230 = param0.value;
frost$core$Real64 $tmp231 = (frost$core$Real64) {$tmp230};
return $tmp231;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:332
int16_t $tmp232 = param1.value;
frost$core$Real64 $tmp233 = (frost$core$Real64) {((double) $tmp232)};
return $tmp233;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:338
double $tmp234 = param0.value;
int32_t $tmp235 = param1.value;
bool $tmp236 = $tmp234 > ((double) $tmp235);
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:339
double $tmp239 = param0.value;
frost$core$Real64 $tmp240 = (frost$core$Real64) {$tmp239};
return $tmp240;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:341
int32_t $tmp241 = param1.value;
frost$core$Real64 $tmp242 = (frost$core$Real64) {((double) $tmp241)};
return $tmp242;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:347
double $tmp243 = param0.value;
int64_t $tmp244 = param1.value;
bool $tmp245 = $tmp243 > ((double) $tmp244);
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:348
double $tmp248 = param0.value;
frost$core$Real64 $tmp249 = (frost$core$Real64) {$tmp248};
return $tmp249;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:350
int64_t $tmp250 = param1.value;
frost$core$Real64 $tmp251 = (frost$core$Real64) {((double) $tmp250)};
return $tmp251;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:356
double $tmp252 = param0.value;
uint8_t $tmp253 = param1.value;
bool $tmp254 = $tmp252 > ((double) $tmp253);
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:357
double $tmp257 = param0.value;
frost$core$Real64 $tmp258 = (frost$core$Real64) {$tmp257};
return $tmp258;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:359
uint8_t $tmp259 = param1.value;
frost$core$Real64 $tmp260 = (frost$core$Real64) {((double) $tmp259)};
return $tmp260;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:365
double $tmp261 = param0.value;
uint16_t $tmp262 = param1.value;
bool $tmp263 = $tmp261 > ((double) $tmp262);
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:366
double $tmp266 = param0.value;
frost$core$Real64 $tmp267 = (frost$core$Real64) {$tmp266};
return $tmp267;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:368
uint16_t $tmp268 = param1.value;
frost$core$Real64 $tmp269 = (frost$core$Real64) {((double) $tmp268)};
return $tmp269;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:374
double $tmp270 = param0.value;
uint32_t $tmp271 = param1.value;
bool $tmp272 = $tmp270 > ((double) $tmp271);
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:375
double $tmp275 = param0.value;
frost$core$Real64 $tmp276 = (frost$core$Real64) {$tmp275};
return $tmp276;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:377
uint32_t $tmp277 = param1.value;
frost$core$Real64 $tmp278 = (frost$core$Real64) {((double) $tmp277)};
return $tmp278;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:383
double $tmp279 = param0.value;
uint64_t $tmp280 = param1.value;
bool $tmp281 = $tmp279 > ((double) $tmp280);
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:384
double $tmp284 = param0.value;
frost$core$Real64 $tmp285 = (frost$core$Real64) {$tmp284};
return $tmp285;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:386
uint64_t $tmp286 = param1.value;
frost$core$Real64 $tmp287 = (frost$core$Real64) {((double) $tmp286)};
return $tmp287;

}
frost$core$Int64 frost$core$Real64$get_hash$R$frost$core$Int64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:421
double $tmp288 = param0.value;
frost$core$Int64 $tmp289 = (frost$core$Int64) {((int64_t) $tmp288)};
return $tmp289;

}
frost$core$Int8 frost$core$Real64$get_asInt8$R$frost$core$Int8(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:427
double $tmp290 = param0.value;
frost$core$Int8 $tmp291 = (frost$core$Int8) {((int8_t) $tmp290)};
return $tmp291;

}
frost$core$Int16 frost$core$Real64$get_asInt16$R$frost$core$Int16(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:433
double $tmp292 = param0.value;
frost$core$Int16 $tmp293 = (frost$core$Int16) {((int16_t) $tmp292)};
return $tmp293;

}
frost$core$Int32 frost$core$Real64$get_asInt32$R$frost$core$Int32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:439
double $tmp294 = param0.value;
frost$core$Int32 $tmp295 = (frost$core$Int32) {((int32_t) $tmp294)};
return $tmp295;

}
frost$core$Int64 frost$core$Real64$get_asInt64$R$frost$core$Int64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:445
double $tmp296 = param0.value;
frost$core$Int64 $tmp297 = (frost$core$Int64) {((int64_t) $tmp296)};
return $tmp297;

}
frost$core$UInt8 frost$core$Real64$get_asUInt8$R$frost$core$UInt8(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:451
double $tmp298 = param0.value;
frost$core$UInt8 $tmp299 = (frost$core$UInt8) {((uint8_t) $tmp298)};
return $tmp299;

}
frost$core$UInt16 frost$core$Real64$get_asUInt16$R$frost$core$UInt16(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:457
double $tmp300 = param0.value;
frost$core$UInt16 $tmp301 = (frost$core$UInt16) {((uint16_t) $tmp300)};
return $tmp301;

}
frost$core$UInt32 frost$core$Real64$get_asUInt32$R$frost$core$UInt32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:463
double $tmp302 = param0.value;
frost$core$UInt32 $tmp303 = (frost$core$UInt32) {((uint32_t) $tmp302)};
return $tmp303;

}
frost$core$UInt64 frost$core$Real64$get_asUInt64$R$frost$core$UInt64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:469
double $tmp304 = param0.value;
frost$core$UInt64 $tmp305 = (frost$core$UInt64) {((uint64_t) $tmp304)};
return $tmp305;

}
frost$core$Real32 frost$core$Real64$get_asReal32$R$frost$core$Real32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:475
double $tmp306 = param0.value;
frost$core$Real32 $tmp307 = (frost$core$Real32) {((float) $tmp306)};
return $tmp307;

}
frost$core$Real64 frost$core$Real64$get_asReal64$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:481
double $tmp308 = param0.value;
frost$core$Real64 $tmp309 = (frost$core$Real64) {$tmp308};
return $tmp309;

}
frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String(frost$core$Real64 param0, frost$core$String* param1) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:491
double $tmp310 = param0.value;
bool $tmp311 = $tmp310 < 0.0;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
// begin inline call to function frost.core.Real64.get_abs():frost.core.Real64 from Real64.frost:491:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:239
frost$core$Real64 $tmp313 = (frost$core$Real64) {0.0};
double $tmp314 = param0.value;
double $tmp315 = $tmp313.value;
bool $tmp316 = $tmp314 < $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:240
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:240:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:89
double $tmp319 = param0.value;
double $tmp320 = -$tmp319;
frost$core$Real64 $tmp321 = (frost$core$Real64) {$tmp320};
*(&local0) = $tmp321;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:242
*(&local0) = param0;
goto block1;
block1:;
frost$core$Real64 $tmp322 = *(&local0);
// begin inline call to function frost.core.Real64.get_asUInt64():frost.core.UInt64 from Real64.frost:491:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:469
double $tmp323 = $tmp322.value;
frost$core$UInt64 $tmp324 = (frost$core$UInt64) {((uint64_t) $tmp323)};
frost$core$UInt64 $tmp325 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp326 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp312, $tmp324, $tmp325, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
return $tmp326;

}
void frost$core$Real64$cleanup(frost$core$Real64 param0) {

return;

}






