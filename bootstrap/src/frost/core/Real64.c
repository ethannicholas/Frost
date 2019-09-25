#include "frost/core/Real64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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
__attribute__((weak)) frost$core$Int frost$core$Real64$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Real64$get_hash$R$frost$core$Int(((frost$core$Real64$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$_frost$core$Equatable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real64$_frost$core$Formattable, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real64$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Real64$_frost$core$Comparable, { frost$core$Real64$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$core$Real64$class_type frost$core$Real64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$_frost$collections$HashKey, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$SUB$R$frost$core$Real64$shim, frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$get_abs$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$Int$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$Int$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64$shim, frost$core$Real64$get_floor$R$frost$core$Real64$shim, frost$core$Real64$get_ceiling$R$frost$core$Real64$shim, frost$core$Real64$get_sqrt$R$frost$core$Real64$shim, frost$core$Real64$get_sin$R$frost$core$Real64$shim, frost$core$Real64$get_cos$R$frost$core$Real64$shim, frost$core$Real64$get_tan$R$frost$core$Real64$shim, frost$core$Real64$get_hash$R$frost$core$Int$shim, frost$core$Real64$get_asInt$R$frost$core$Int$shim, frost$core$Real64$get_asInt8$R$frost$core$Int8$shim, frost$core$Real64$get_asInt16$R$frost$core$Int16$shim, frost$core$Real64$get_asInt32$R$frost$core$Int32$shim, frost$core$Real64$get_asInt64$R$frost$core$Int64$shim, frost$core$Real64$get_asUInt$R$frost$core$UInt$shim, frost$core$Real64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real64$get_asReal32$R$frost$core$Real32$shim, frost$core$Real64$get_asReal64$R$frost$core$Real64$shim, frost$core$Real64$format$frost$core$String$R$frost$core$String$shim, frost$core$Real64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Real64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Equatable, { frost$core$Real64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Formattable, { frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real64$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Real64$wrapper_frost$core$Comparable, { frost$core$Real64$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
frost$core$Real64$wrapperclass_type frost$core$Real64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real64$wrapper_frost$collections$HashKey, { frost$core$Real64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -2416306569881990238, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -2416306569881990238, NULL };

frost$core$Real64 frost$core$Real64$init$builtin_float64(double param0) {

frost$core$Real64 local0;
double* _1;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:18
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real64 local0;
int8_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:24
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real64 local0;
int16_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:30
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real64 local0;
int32_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:36
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real64 local0;
int64_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:42
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Int(frost$core$Int param0) {

frost$core$Real64 local0;
int64_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:48
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real64 local0;
uint8_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:54
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real64 local0;
uint16_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:60
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real64 local0;
uint32_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:66
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real64 local0;
uint64_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:72
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$Real64 local0;
uint64_t _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:78
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$init$frost$core$Real32(frost$core$Real32 param0) {

frost$core$Real64 local0;
float _1;
double _2;
double* _3;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:84
_1 = param0.value;
_2 = ((double) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real64 frost$core$Real64$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
double _3;
frost$core$Real64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:90
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$Real64) {_3};
return _4;

}
frost$core$Real64 frost$core$Real64$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
double _3;
frost$core$Real64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:96
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$Real64) {_3};
return _4;

}
frost$core$Real64 frost$core$Real64$$SUB$R$frost$core$Real64(frost$core$Real64 param0) {

double _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:101
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$Real64 frost$core$Real64$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
double _3;
frost$core$Real64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:107
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$Real64) {_3};
return _4;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

double _1;
int8_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:113
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

double _1;
int16_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:119
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

double _1;
int32_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:125
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

double _1;
int64_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:131
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

double _1;
uint8_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:137
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

double _1;
uint16_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:143
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

double _1;
uint32_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:149
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

double _1;
uint64_t _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:155
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:161
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real64 frost$core$Real64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
double _3;
frost$core$Real64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:167
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$Real64) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:173
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:180
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:186
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:193
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:199
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:206
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:212
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:219
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:225
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:232
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real32 param1) {

double _1;
float _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:238
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real64$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real64 param0, frost$core$Real64 param1) {

double _1;
double _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:245
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Real64 frost$core$Real64$get_abs$R$frost$core$Real64(frost$core$Real64 param0) {

frost$core$Real64 _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _11;
double _12;
frost$core$Real64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:251
_1 = (frost$core$Real64) {0.0};
_2 = param0.value;
_3 = _1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:252
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:252:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:101
_11 = param0.value;
_12 = -_11;
_13 = (frost$core$Real64) {_12};
return _13;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:254
return param0;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

double _1;
int8_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int8_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:260
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:261
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:263
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

double _1;
int16_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int16_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:269
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:270
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:272
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

double _1;
int32_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int32_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:278
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:279
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:281
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

double _1;
int64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:287
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:288
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:290
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$Int$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int param1) {

double _1;
int64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:296
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:297
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:299
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

double _1;
uint8_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint8_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:305
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:306
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:308
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

double _1;
uint16_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint16_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:314
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:315
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:317
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

double _1;
uint32_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint32_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:323
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:324
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:326
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

double _1;
uint64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:332
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:333
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:335
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$min$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt param1) {

double _1;
uint64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:341
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:342
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:344
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int8 param1) {

double _1;
int8_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int8_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:350
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:351
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:353
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int16 param1) {

double _1;
int16_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int16_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:359
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:360
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:362
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int32 param1) {

double _1;
int32_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int32_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:368
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:369
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:371
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int64 param1) {

double _1;
int64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:377
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:378
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:380
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$Int$R$frost$core$Real64(frost$core$Real64 param0, frost$core$Int param1) {

double _1;
int64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
int64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:386
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:387
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:389
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt8$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt8 param1) {

double _1;
uint8_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint8_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:395
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:396
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:398
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt16$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt16 param1) {

double _1;
uint16_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint16_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:404
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:405
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:407
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt32$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt32 param1) {

double _1;
uint32_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint32_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:413
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:414
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:416
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt64 param1) {

double _1;
uint64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:422
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:423
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:425
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Real64 frost$core$Real64$max$frost$core$UInt$R$frost$core$Real64(frost$core$Real64 param0, frost$core$UInt param1) {

double _1;
uint64_t _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
double _9;
frost$core$Real64 _10;
uint64_t _13;
double _14;
frost$core$Real64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:431
_1 = param0.value;
_2 = param1.value;
_3 = ((double) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:432
_9 = param0.value;
_10 = (frost$core$Real64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:434
_13 = param1.value;
_14 = ((double) _13);
_15 = (frost$core$Real64) {_14};
return _15;

}
frost$core$Int frost$core$Real64$get_hash$R$frost$core$Int(frost$core$Real64 param0) {

double _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:469
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int frost$core$Real64$get_asInt$R$frost$core$Int(frost$core$Real64 param0) {

double _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:475
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$Real64$get_asInt8$R$frost$core$Int8(frost$core$Real64 param0) {

double _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:481
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Real64$get_asInt16$R$frost$core$Int16(frost$core$Real64 param0) {

double _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:487
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Real64$get_asInt32$R$frost$core$Int32(frost$core$Real64 param0) {

double _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:493
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$Real64$get_asInt64$R$frost$core$Int64(frost$core$Real64 param0) {

double _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:499
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$Real64$get_asUInt$R$frost$core$UInt(frost$core$Real64 param0) {

double _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:505
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$Real64$get_asUInt8$R$frost$core$UInt8(frost$core$Real64 param0) {

double _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:511
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Real64$get_asUInt16$R$frost$core$UInt16(frost$core$Real64 param0) {

double _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:517
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Real64$get_asUInt32$R$frost$core$UInt32(frost$core$Real64 param0) {

double _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:523
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Real64$get_asUInt64$R$frost$core$UInt64(frost$core$Real64 param0) {

double _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:529
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$Real64$get_asReal32$R$frost$core$Real32(frost$core$Real64 param0) {

double _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:535
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$Real64$get_asReal64$R$frost$core$Real64(frost$core$Real64 param0) {

double _1;
frost$core$Real64 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:541
_1 = param0.value;
_2 = (frost$core$Real64) {_1};
return _2;

}
frost$core$String* frost$core$Real64$format$frost$core$String$R$frost$core$String(frost$core$Real64 param0, frost$core$String* param1) {

frost$core$Real64 local0;
double _1;
bool _2;
frost$core$Bit _3;
frost$core$Real64 _6;
double _7;
double _8;
bool _9;
frost$core$Bit _10;
bool _11;
double _16;
double _17;
frost$core$Real64 _18;
frost$core$Real64 _25;
double _28;
uint64_t _29;
frost$core$UInt64 _30;
frost$core$UInt64 _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:551
_1 = param0.value;
_2 = _1 < 0.0;
_3 = (frost$core$Bit) {_2};
// begin inline call to function frost.core.Real64.get_abs():frost.core.Real64 from Real64.frost:551:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:251
_6 = (frost$core$Real64) {0.0};
_7 = param0.value;
_8 = _6.value;
_9 = _7 < _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:252
// begin inline call to function frost.core.Real64.-():frost.core.Real64 from Real64.frost:252:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:101
_16 = param0.value;
_17 = -_16;
_18 = (frost$core$Real64) {_17};
*(&local0) = _18;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:254
*(&local0) = param0;
goto block1;
block1:;
_25 = *(&local0);
// begin inline call to function frost.core.Real64.get_asUInt64():frost.core.UInt64 from Real64.frost:551:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real64.frost:529
_28 = _25.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt64) {_29};
_32 = (frost$core$UInt64) {18446744073709551615u};
_33 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_3, _30, _32, param1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _33;

}
void frost$core$Real64$cleanup(frost$core$Real64 param0) {

return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




