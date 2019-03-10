#include "frost/core/Real64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int frost$core$Real64$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Real64$get_hash$R$frost$core$Int(((frost$core$Real64$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$Int$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$Int$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real64 frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Real64 result = frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$Int$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$Int$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real64 frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Real64 result = frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64(((frost$core$Real64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int frost$core$Real64$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Real64$get_asInt$R$frost$core$Int(((frost$core$Real64$wrapper*) p0)->value);

    return result;
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
__attribute__((weak)) frost$core$UInt frost$core$Real64$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Real64$get_asUInt$R$frost$core$UInt(((frost$core$Real64$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real64$_frost$collections$Key, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$_frost$core$Equatable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real64$_frost$core$Formattable, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Real64$class_type frost$core$Real64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$_frost$core$Comparable, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$R$frost$core$Real64$shim, frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$get_abs$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64$shim, frost$core$Real64$get_floor$R$frost$core$Real64$shim, frost$core$Real64$get_ceiling$R$frost$core$Real64$shim, frost$core$Real64$get_sqrt$R$frost$core$Real64$shim, frost$core$Real64$get_sin$R$frost$core$Real64$shim, frost$core$Real64$get_cos$R$frost$core$Real64$shim, frost$core$Real64$get_tan$R$frost$core$Real64$shim, frost$core$Real64$get_hash$R$frost$core$Int$shim, frost$core$Real64$get_asInt$R$frost$core$Int$shim, frost$core$Real64$get_asInt8$R$frost$core$Int8$shim, frost$core$Real64$get_asInt16$R$frost$core$Int16$shim, frost$core$Real64$get_asInt32$R$frost$core$Int32$shim, frost$core$Real64$get_asInt64$R$frost$core$Int64$shim, frost$core$Real64$get_asUInt$R$frost$core$UInt$shim, frost$core$Real64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real64$get_asReal32$R$frost$core$Real32$shim, frost$core$Real64$get_asReal64$R$frost$core$Real64$shim, frost$core$Real64$format$frost$core$String$R$frost$core$String$shim, frost$core$Real64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real64$get_hash$R$frost$core$Int$shim} };

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
frost$core$Real64 frost$core$Real64$init$frost$core$Int(frost$core$Int param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:48
int64_t $tmp17 = param0.value;
double* $tmp18 = &(&local0)->value;
*$tmp18 = ((double) $tmp17);
frost$core$Real64 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:54
uint8_t $tmp20 = param0.value;
double* $tmp21 = &(&local0)->value;
*$tmp21 = ((double) $tmp20);
frost$core$Real64 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:60
uint16_t $tmp23 = param0.value;
double* $tmp24 = &(&local0)->value;
*$tmp24 = ((double) $tmp23);
frost$core$Real64 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:66
uint32_t $tmp26 = param0.value;
double* $tmp27 = &(&local0)->value;
*$tmp27 = ((double) $tmp26);
frost$core$Real64 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:72
uint64_t $tmp29 = param0.value;
double* $tmp30 = &(&local0)->value;
*$tmp30 = ((double) $tmp29);
frost$core$Real64 $tmp31 = *(&local0);
return $tmp31;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:78
uint64_t $tmp32 = param0.value;
double* $tmp33 = &(&local0)->value;
*$tmp33 = ((double) $tmp32);
frost$core$Real64 $tmp34 = *(&local0);
return $tmp34;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Real32(frost$core$Real32 param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:84
float $tmp35 = param0.value;
double* $tmp36 = &(&local0)->value;
*$tmp36 = ((double) $tmp35);
frost$core$Real64 $tmp37 = *(&local0);
return $tmp37;

}
frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:90
double $tmp38 = param0.value;
double $tmp39 = param1.value;
double $tmp40 = $tmp38 + $tmp39;
frost$core$Real64 $tmp41 = (frost$core$Real64) {$tmp40};
return $tmp41;

}
frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:96
double $tmp42 = param0.value;
double $tmp43 = param1.value;
double $tmp44 = $tmp42 - $tmp43;
frost$core$Real64 $tmp45 = (frost$core$Real64) {$tmp44};
return $tmp45;

}
frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:101
double $tmp46 = param0.value;
double $tmp47 = -$tmp46;
frost$core$Real64 $tmp48 = (frost$core$Real64) {$tmp47};
return $tmp48;

}
frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:107
double $tmp49 = param0.value;
double $tmp50 = param1.value;
double $tmp51 = $tmp49 * $tmp50;
frost$core$Real64 $tmp52 = (frost$core$Real64) {$tmp51};
return $tmp52;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:113
double $tmp53 = param0.value;
int8_t $tmp54 = param1.value;
double $tmp55 = $tmp53 / ((double) $tmp54);
frost$core$Real64 $tmp56 = (frost$core$Real64) {$tmp55};
return $tmp56;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:119
double $tmp57 = param0.value;
int16_t $tmp58 = param1.value;
double $tmp59 = $tmp57 / ((double) $tmp58);
frost$core$Real64 $tmp60 = (frost$core$Real64) {$tmp59};
return $tmp60;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:125
double $tmp61 = param0.value;
int32_t $tmp62 = param1.value;
double $tmp63 = $tmp61 / ((double) $tmp62);
frost$core$Real64 $tmp64 = (frost$core$Real64) {$tmp63};
return $tmp64;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:131
double $tmp65 = param0.value;
int64_t $tmp66 = param1.value;
double $tmp67 = $tmp65 / ((double) $tmp66);
frost$core$Real64 $tmp68 = (frost$core$Real64) {$tmp67};
return $tmp68;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:137
double $tmp69 = param0.value;
uint8_t $tmp70 = param1.value;
double $tmp71 = $tmp69 / ((double) $tmp70);
frost$core$Real64 $tmp72 = (frost$core$Real64) {$tmp71};
return $tmp72;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:143
double $tmp73 = param0.value;
uint16_t $tmp74 = param1.value;
double $tmp75 = $tmp73 / ((double) $tmp74);
frost$core$Real64 $tmp76 = (frost$core$Real64) {$tmp75};
return $tmp76;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:149
double $tmp77 = param0.value;
uint32_t $tmp78 = param1.value;
double $tmp79 = $tmp77 / ((double) $tmp78);
frost$core$Real64 $tmp80 = (frost$core$Real64) {$tmp79};
return $tmp80;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:155
double $tmp81 = param0.value;
uint64_t $tmp82 = param1.value;
double $tmp83 = $tmp81 / ((double) $tmp82);
frost$core$Real64 $tmp84 = (frost$core$Real64) {$tmp83};
return $tmp84;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:161
double $tmp85 = param0.value;
float $tmp86 = param1.value;
double $tmp87 = $tmp85 / ((double) $tmp86);
frost$core$Real64 $tmp88 = (frost$core$Real64) {$tmp87};
return $tmp88;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:167
double $tmp89 = param0.value;
double $tmp90 = param1.value;
double $tmp91 = $tmp89 / $tmp90;
frost$core$Real64 $tmp92 = (frost$core$Real64) {$tmp91};
return $tmp92;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:173
double $tmp93 = param0.value;
float $tmp94 = param1.value;
bool $tmp95 = $tmp93 == ((double) $tmp94);
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
return $tmp96;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:180
double $tmp97 = param0.value;
double $tmp98 = param1.value;
bool $tmp99 = $tmp97 == $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
return $tmp100;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:186
double $tmp101 = param0.value;
float $tmp102 = param1.value;
bool $tmp103 = $tmp101 != ((double) $tmp102);
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
return $tmp104;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:193
double $tmp105 = param0.value;
double $tmp106 = param1.value;
bool $tmp107 = $tmp105 != $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
return $tmp108;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:199
double $tmp109 = param0.value;
float $tmp110 = param1.value;
bool $tmp111 = $tmp109 < ((double) $tmp110);
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
return $tmp112;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:206
double $tmp113 = param0.value;
double $tmp114 = param1.value;
bool $tmp115 = $tmp113 < $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
return $tmp116;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:212
double $tmp117 = param0.value;
float $tmp118 = param1.value;
bool $tmp119 = $tmp117 > ((double) $tmp118);
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
return $tmp120;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:219
double $tmp121 = param0.value;
double $tmp122 = param1.value;
bool $tmp123 = $tmp121 > $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
return $tmp124;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:225
double $tmp125 = param0.value;
float $tmp126 = param1.value;
bool $tmp127 = $tmp125 >= ((double) $tmp126);
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
return $tmp128;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:232
double $tmp129 = param0.value;
double $tmp130 = param1.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
return $tmp132;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:238
double $tmp133 = param0.value;
float $tmp134 = param1.value;
bool $tmp135 = $tmp133 <= ((double) $tmp134);
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
return $tmp136;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:245
double $tmp137 = param0.value;
double $tmp138 = param1.value;
bool $tmp139 = $tmp137 <= $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
return $tmp140;

}
frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:251
frost$core$Real64 $tmp141 = (frost$core$Real64) {0.0};
double $tmp142 = param0.value;
double $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 < $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:252
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:252:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:101
double $tmp147 = param0.value;
double $tmp148 = -$tmp147;
frost$core$Real64 $tmp149 = (frost$core$Real64) {$tmp148};
return $tmp149;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:254
return param0;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:260
double $tmp150 = param0.value;
int8_t $tmp151 = param1.value;
bool $tmp152 = $tmp150 < ((double) $tmp151);
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:261
double $tmp155 = param0.value;
frost$core$Real64 $tmp156 = (frost$core$Real64) {$tmp155};
return $tmp156;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:263
int8_t $tmp157 = param1.value;
frost$core$Real64 $tmp158 = (frost$core$Real64) {((double) $tmp157)};
return $tmp158;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:269
double $tmp159 = param0.value;
int16_t $tmp160 = param1.value;
bool $tmp161 = $tmp159 < ((double) $tmp160);
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:270
double $tmp164 = param0.value;
frost$core$Real64 $tmp165 = (frost$core$Real64) {$tmp164};
return $tmp165;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:272
int16_t $tmp166 = param1.value;
frost$core$Real64 $tmp167 = (frost$core$Real64) {((double) $tmp166)};
return $tmp167;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:278
double $tmp168 = param0.value;
int32_t $tmp169 = param1.value;
bool $tmp170 = $tmp168 < ((double) $tmp169);
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:279
double $tmp173 = param0.value;
frost$core$Real64 $tmp174 = (frost$core$Real64) {$tmp173};
return $tmp174;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:281
int32_t $tmp175 = param1.value;
frost$core$Real64 $tmp176 = (frost$core$Real64) {((double) $tmp175)};
return $tmp176;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:287
double $tmp177 = param0.value;
int64_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 < ((double) $tmp178);
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:288
double $tmp182 = param0.value;
frost$core$Real64 $tmp183 = (frost$core$Real64) {$tmp182};
return $tmp183;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:290
int64_t $tmp184 = param1.value;
frost$core$Real64 $tmp185 = (frost$core$Real64) {((double) $tmp184)};
return $tmp185;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:296
double $tmp186 = param0.value;
int64_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 < ((double) $tmp187);
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:297
double $tmp191 = param0.value;
frost$core$Real64 $tmp192 = (frost$core$Real64) {$tmp191};
return $tmp192;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:299
int64_t $tmp193 = param1.value;
frost$core$Real64 $tmp194 = (frost$core$Real64) {((double) $tmp193)};
return $tmp194;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:305
double $tmp195 = param0.value;
uint8_t $tmp196 = param1.value;
bool $tmp197 = $tmp195 < ((double) $tmp196);
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:306
double $tmp200 = param0.value;
frost$core$Real64 $tmp201 = (frost$core$Real64) {$tmp200};
return $tmp201;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:308
uint8_t $tmp202 = param1.value;
frost$core$Real64 $tmp203 = (frost$core$Real64) {((double) $tmp202)};
return $tmp203;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:314
double $tmp204 = param0.value;
uint16_t $tmp205 = param1.value;
bool $tmp206 = $tmp204 < ((double) $tmp205);
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:315
double $tmp209 = param0.value;
frost$core$Real64 $tmp210 = (frost$core$Real64) {$tmp209};
return $tmp210;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:317
uint16_t $tmp211 = param1.value;
frost$core$Real64 $tmp212 = (frost$core$Real64) {((double) $tmp211)};
return $tmp212;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:323
double $tmp213 = param0.value;
uint32_t $tmp214 = param1.value;
bool $tmp215 = $tmp213 < ((double) $tmp214);
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:324
double $tmp218 = param0.value;
frost$core$Real64 $tmp219 = (frost$core$Real64) {$tmp218};
return $tmp219;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:326
uint32_t $tmp220 = param1.value;
frost$core$Real64 $tmp221 = (frost$core$Real64) {((double) $tmp220)};
return $tmp221;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:332
double $tmp222 = param0.value;
uint64_t $tmp223 = param1.value;
bool $tmp224 = $tmp222 < ((double) $tmp223);
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:333
double $tmp227 = param0.value;
frost$core$Real64 $tmp228 = (frost$core$Real64) {$tmp227};
return $tmp228;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:335
uint64_t $tmp229 = param1.value;
frost$core$Real64 $tmp230 = (frost$core$Real64) {((double) $tmp229)};
return $tmp230;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:341
double $tmp231 = param0.value;
uint64_t $tmp232 = param1.value;
bool $tmp233 = $tmp231 < ((double) $tmp232);
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:342
double $tmp236 = param0.value;
frost$core$Real64 $tmp237 = (frost$core$Real64) {$tmp236};
return $tmp237;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:344
uint64_t $tmp238 = param1.value;
frost$core$Real64 $tmp239 = (frost$core$Real64) {((double) $tmp238)};
return $tmp239;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:350
double $tmp240 = param0.value;
int8_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 > ((double) $tmp241);
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:351
double $tmp245 = param0.value;
frost$core$Real64 $tmp246 = (frost$core$Real64) {$tmp245};
return $tmp246;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:353
int8_t $tmp247 = param1.value;
frost$core$Real64 $tmp248 = (frost$core$Real64) {((double) $tmp247)};
return $tmp248;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:359
double $tmp249 = param0.value;
int16_t $tmp250 = param1.value;
bool $tmp251 = $tmp249 > ((double) $tmp250);
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:360
double $tmp254 = param0.value;
frost$core$Real64 $tmp255 = (frost$core$Real64) {$tmp254};
return $tmp255;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:362
int16_t $tmp256 = param1.value;
frost$core$Real64 $tmp257 = (frost$core$Real64) {((double) $tmp256)};
return $tmp257;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:368
double $tmp258 = param0.value;
int32_t $tmp259 = param1.value;
bool $tmp260 = $tmp258 > ((double) $tmp259);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:369
double $tmp263 = param0.value;
frost$core$Real64 $tmp264 = (frost$core$Real64) {$tmp263};
return $tmp264;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:371
int32_t $tmp265 = param1.value;
frost$core$Real64 $tmp266 = (frost$core$Real64) {((double) $tmp265)};
return $tmp266;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:377
double $tmp267 = param0.value;
int64_t $tmp268 = param1.value;
bool $tmp269 = $tmp267 > ((double) $tmp268);
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:378
double $tmp272 = param0.value;
frost$core$Real64 $tmp273 = (frost$core$Real64) {$tmp272};
return $tmp273;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:380
int64_t $tmp274 = param1.value;
frost$core$Real64 $tmp275 = (frost$core$Real64) {((double) $tmp274)};
return $tmp275;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:386
double $tmp276 = param0.value;
int64_t $tmp277 = param1.value;
bool $tmp278 = $tmp276 > ((double) $tmp277);
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:387
double $tmp281 = param0.value;
frost$core$Real64 $tmp282 = (frost$core$Real64) {$tmp281};
return $tmp282;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:389
int64_t $tmp283 = param1.value;
frost$core$Real64 $tmp284 = (frost$core$Real64) {((double) $tmp283)};
return $tmp284;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:395
double $tmp285 = param0.value;
uint8_t $tmp286 = param1.value;
bool $tmp287 = $tmp285 > ((double) $tmp286);
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:396
double $tmp290 = param0.value;
frost$core$Real64 $tmp291 = (frost$core$Real64) {$tmp290};
return $tmp291;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:398
uint8_t $tmp292 = param1.value;
frost$core$Real64 $tmp293 = (frost$core$Real64) {((double) $tmp292)};
return $tmp293;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:404
double $tmp294 = param0.value;
uint16_t $tmp295 = param1.value;
bool $tmp296 = $tmp294 > ((double) $tmp295);
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:405
double $tmp299 = param0.value;
frost$core$Real64 $tmp300 = (frost$core$Real64) {$tmp299};
return $tmp300;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:407
uint16_t $tmp301 = param1.value;
frost$core$Real64 $tmp302 = (frost$core$Real64) {((double) $tmp301)};
return $tmp302;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:413
double $tmp303 = param0.value;
uint32_t $tmp304 = param1.value;
bool $tmp305 = $tmp303 > ((double) $tmp304);
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:414
double $tmp308 = param0.value;
frost$core$Real64 $tmp309 = (frost$core$Real64) {$tmp308};
return $tmp309;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:416
uint32_t $tmp310 = param1.value;
frost$core$Real64 $tmp311 = (frost$core$Real64) {((double) $tmp310)};
return $tmp311;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:422
double $tmp312 = param0.value;
uint64_t $tmp313 = param1.value;
bool $tmp314 = $tmp312 > ((double) $tmp313);
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:423
double $tmp317 = param0.value;
frost$core$Real64 $tmp318 = (frost$core$Real64) {$tmp317};
return $tmp318;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:425
uint64_t $tmp319 = param1.value;
frost$core$Real64 $tmp320 = (frost$core$Real64) {((double) $tmp319)};
return $tmp320;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:431
double $tmp321 = param0.value;
uint64_t $tmp322 = param1.value;
bool $tmp323 = $tmp321 > ((double) $tmp322);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:432
double $tmp326 = param0.value;
frost$core$Real64 $tmp327 = (frost$core$Real64) {$tmp326};
return $tmp327;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:434
uint64_t $tmp328 = param1.value;
frost$core$Real64 $tmp329 = (frost$core$Real64) {((double) $tmp328)};
return $tmp329;

}
frost$core$Int frost$core$Real64$get_hash$R$frost$core$Int(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:469
double $tmp330 = param0.value;
frost$core$Int $tmp331 = (frost$core$Int) {((int64_t) $tmp330)};
return $tmp331;

}
frost$core$Int frost$core$Real64$get_asInt$R$frost$core$Int(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:475
double $tmp332 = param0.value;
frost$core$Int $tmp333 = (frost$core$Int) {((int64_t) $tmp332)};
return $tmp333;

}
frost$core$Int8 frost$core$Real64$get_asInt8$R$frost$core$Int8(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:481
double $tmp334 = param0.value;
frost$core$Int8 $tmp335 = (frost$core$Int8) {((int8_t) $tmp334)};
return $tmp335;

}
frost$core$Int16 frost$core$Real64$get_asInt16$R$frost$core$Int16(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:487
double $tmp336 = param0.value;
frost$core$Int16 $tmp337 = (frost$core$Int16) {((int16_t) $tmp336)};
return $tmp337;

}
frost$core$Int32 frost$core$Real64$get_asInt32$R$frost$core$Int32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:493
double $tmp338 = param0.value;
frost$core$Int32 $tmp339 = (frost$core$Int32) {((int32_t) $tmp338)};
return $tmp339;

}
frost$core$Int64 frost$core$Real64$get_asInt64$R$frost$core$Int64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:499
double $tmp340 = param0.value;
frost$core$Int64 $tmp341 = (frost$core$Int64) {((int64_t) $tmp340)};
return $tmp341;

}
frost$core$UInt frost$core$Real64$get_asUInt$R$frost$core$UInt(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:505
double $tmp342 = param0.value;
frost$core$UInt $tmp343 = (frost$core$UInt) {((uint64_t) $tmp342)};
return $tmp343;

}
frost$core$UInt8 frost$core$Real64$get_asUInt8$R$frost$core$UInt8(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:511
double $tmp344 = param0.value;
frost$core$UInt8 $tmp345 = (frost$core$UInt8) {((uint8_t) $tmp344)};
return $tmp345;

}
frost$core$UInt16 frost$core$Real64$get_asUInt16$R$frost$core$UInt16(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:517
double $tmp346 = param0.value;
frost$core$UInt16 $tmp347 = (frost$core$UInt16) {((uint16_t) $tmp346)};
return $tmp347;

}
frost$core$UInt32 frost$core$Real64$get_asUInt32$R$frost$core$UInt32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:523
double $tmp348 = param0.value;
frost$core$UInt32 $tmp349 = (frost$core$UInt32) {((uint32_t) $tmp348)};
return $tmp349;

}
frost$core$UInt64 frost$core$Real64$get_asUInt64$R$frost$core$UInt64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:529
double $tmp350 = param0.value;
frost$core$UInt64 $tmp351 = (frost$core$UInt64) {((uint64_t) $tmp350)};
return $tmp351;

}
frost$core$Real32 frost$core$Real64$get_asReal32$R$frost$core$Real32(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:535
double $tmp352 = param0.value;
frost$core$Real32 $tmp353 = (frost$core$Real32) {((float) $tmp352)};
return $tmp353;

}
frost$core$Real64 frost$core$Real64$get_asReal64$R$frost$core$Real64(frost$core$Real64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:541
double $tmp354 = param0.value;
frost$core$Real64 $tmp355 = (frost$core$Real64) {$tmp354};
return $tmp355;

}
frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String(frost$core$Real64 param0, frost$core$String* param1) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:551
double $tmp356 = param0.value;
bool $tmp357 = $tmp356 < 0.0;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
// begin inline call to function frost.core.Real64.get_abs():frost.core.Real64 from Real64.frost:551:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:251
frost$core$Real64 $tmp359 = (frost$core$Real64) {0.0};
double $tmp360 = param0.value;
double $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 < $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:252
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:252:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:101
double $tmp365 = param0.value;
double $tmp366 = -$tmp365;
frost$core$Real64 $tmp367 = (frost$core$Real64) {$tmp366};
*(&local0) = $tmp367;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:254
*(&local0) = param0;
goto block1;
block1:;
frost$core$Real64 $tmp368 = *(&local0);
// begin inline call to function frost.core.Real64.get_asUInt64():frost.core.UInt64 from Real64.frost:551:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Real64.frost:529
double $tmp369 = $tmp368.value;
frost$core$UInt64 $tmp370 = (frost$core$UInt64) {((uint64_t) $tmp369)};
frost$core$UInt64 $tmp371 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp372 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp358, $tmp370, $tmp371, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
return $tmp372;

}
void frost$core$Real64$cleanup(frost$core$Real64 param0) {

return;

}






