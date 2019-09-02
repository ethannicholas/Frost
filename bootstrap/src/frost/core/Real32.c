#include "frost/core/Real32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/UInt.h"
#include "frost/core/Frost.h"

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
__attribute__((weak)) frost$core$Int frost$core$Real32$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Real32$get_hash$R$frost$core$Int(((frost$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Real32$format$frost$core$String$R$frost$core$String(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(((frost$core$Real32$wrapper*) p0)->value, ((frost$core$Real32$wrapper*) p1)->value);

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
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$Int$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$Int$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real32 frost$core$Real32$min$frost$core$UInt$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Real32 result = frost$core$Real32$min$frost$core$UInt$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$Int$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$Int$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Real32 frost$core$Real32$max$frost$core$UInt$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Real32 result = frost$core$Real32$max$frost$core$UInt$R$frost$core$Real32(((frost$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Real32$get_floor$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_floor$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real32$get_ceiling$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_ceiling$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real32$get_sqrt$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_sqrt$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real32$get_sin$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_sin$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real32$get_cos$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_cos$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$core$Real32$get_tan$R$frost$core$Real32$shim(frost$core$Real32* sret, frost$core$Object* p0) {
    frost$core$Real32$get_tan$R$frost$core$Real32(sret, ((frost$core$Real32$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$Real32$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Real32$get_asInt$R$frost$core$Int(((frost$core$Real32$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$UInt frost$core$Real32$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Real32$get_asUInt$R$frost$core$UInt(((frost$core$Real32$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Real32$_frost$core$Comparable, { frost$core$Real32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$_frost$collections$HashKey, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real32$_frost$core$Formattable, { frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Real32$class_type frost$core$Real32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real32$_frost$core$Equatable, { frost$core$Real32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$get_abs$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$min$frost$core$Int$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$min$frost$core$UInt$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$Int$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$UInt$R$frost$core$Real32$shim, frost$core$Real32$get_floor$R$frost$core$Real32$shim, frost$core$Real32$get_ceiling$R$frost$core$Real32$shim, frost$core$Real32$get_sqrt$R$frost$core$Real32$shim, frost$core$Real32$get_sin$R$frost$core$Real32$shim, frost$core$Real32$get_cos$R$frost$core$Real32$shim, frost$core$Real32$get_tan$R$frost$core$Real32$shim, frost$core$Real32$get_hash$R$frost$core$Int$shim, frost$core$Real32$get_asInt$R$frost$core$Int$shim, frost$core$Real32$get_asInt8$R$frost$core$Int8$shim, frost$core$Real32$get_asInt16$R$frost$core$Int16$shim, frost$core$Real32$get_asInt32$R$frost$core$Int32$shim, frost$core$Real32$get_asInt64$R$frost$core$Int64$shim, frost$core$Real32$get_asUInt$R$frost$core$UInt$shim, frost$core$Real32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real32$get_asReal32$R$frost$core$Real32$shim, frost$core$Real32$get_asReal64$R$frost$core$Real64$shim, frost$core$Real32$format$frost$core$String$R$frost$core$String$shim, frost$core$Real32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Comparable, { frost$core$Real32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$wrapper_frost$collections$HashKey, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Real32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Formattable, { frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Real32$wrapperclass_type frost$core$Real32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Equatable, { frost$core$Real32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -2419108125510104191, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -2419108125510104191, NULL };

frost$core$Real32 frost$core$Real32$init$builtin_float32(float param0) {

frost$core$Real32 local0;
float* _1;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:18
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real32 local0;
int8_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:24
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real32 local0;
int16_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:30
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real32 local0;
int32_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:36
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real32 local0;
int64_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:42
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int(frost$core$Int param0) {

frost$core$Real32 local0;
int64_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:48
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real32 local0;
uint8_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:54
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real32 local0;
uint16_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:60
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real32 local0;
uint32_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:66
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real32 local0;
uint64_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:72
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$Real32 local0;
uint64_t _1;
float _2;
float* _3;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:78
_1 = param0.value;
_2 = ((float) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
float _3;
frost$core$Real32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:84
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$Real32) {_3};
return _4;

}
frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:90
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
float _3;
frost$core$Real32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:96
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$Real32) {_3};
return _4;

}
frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:102
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32(frost$core$Real32 param0) {

float _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
float _3;
frost$core$Real32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:113
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$Real32) {_3};
return _4;

}
frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:119
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

float _1;
int8_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:125
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

float _1;
int16_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:131
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

float _1;
int32_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:137
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

float _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:143
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

float _1;
uint8_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:149
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

float _1;
uint16_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:155
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

float _1;
uint32_t _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:161
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

float _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:167
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
float _3;
frost$core$Real32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:173
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$Real32) {_3};
return _4;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:179
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:186
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:192
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:199
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:205
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:212
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:218
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:225
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:231
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:238
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:244
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

float _1;
float _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:251
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

float _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:257
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32(frost$core$Real32 param0) {

frost$core$Real64 _1;
frost$core$Real64 _2;
double _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
float _12;
float _13;
frost$core$Real32 _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:263
_1 = frost$core$Real64$init$frost$core$Real32(param0);
_2 = (frost$core$Real64) {0.0};
_3 = _1.value;
_4 = _2.value;
_5 = _3 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:264
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
_12 = param0.value;
_13 = -_12;
_14 = (frost$core$Real32) {_13};
return _14;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:266
return param0;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

float _1;
int8_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int8_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:272
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:273
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:275
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

float _1;
int16_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int16_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:281
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:282
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:284
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

float _1;
int32_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int32_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:290
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:291
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:293
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

float _1;
double _2;
int64_t _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
float _10;
double _11;
frost$core$Real64 _12;
int64_t _15;
double _16;
frost$core$Real64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:299
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:300
_10 = param0.value;
_11 = ((double) _10);
_12 = (frost$core$Real64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:302
_15 = param1.value;
_16 = ((double) _15);
_17 = (frost$core$Real64) {_16};
return _17;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int param1) {

float _1;
int64_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int64_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:308
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:309
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:311
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

float _1;
uint8_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint8_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:317
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:318
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:320
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

float _1;
uint16_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint16_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:326
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:327
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:329
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

float _1;
uint32_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint32_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:335
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:336
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:338
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

float _1;
double _2;
uint64_t _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
float _10;
double _11;
frost$core$Real64 _12;
uint64_t _15;
double _16;
frost$core$Real64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:344
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:345
_10 = param0.value;
_11 = ((double) _10);
_12 = (frost$core$Real64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:347
_15 = param1.value;
_16 = ((double) _15);
_17 = (frost$core$Real64) {_16};
return _17;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt param1) {

float _1;
uint64_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint64_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:353
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:354
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:356
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

float _1;
int8_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int8_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:362
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:363
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:365
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

float _1;
int16_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int16_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:371
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:372
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:374
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

float _1;
int32_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int32_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:380
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:381
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:383
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

float _1;
double _2;
int64_t _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
float _10;
double _11;
frost$core$Real64 _12;
int64_t _15;
double _16;
frost$core$Real64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:389
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:390
_10 = param0.value;
_11 = ((double) _10);
_12 = (frost$core$Real64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:392
_15 = param1.value;
_16 = ((double) _15);
_17 = (frost$core$Real64) {_16};
return _17;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int param1) {

float _1;
int64_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
int64_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:398
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:399
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:401
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

float _1;
uint8_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint8_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:407
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:408
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:410
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

float _1;
uint16_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint16_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:416
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:417
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:419
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

float _1;
uint32_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint32_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:425
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:426
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:428
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

float _1;
double _2;
uint64_t _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
float _10;
double _11;
frost$core$Real64 _12;
uint64_t _15;
double _16;
frost$core$Real64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:434
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:435
_10 = param0.value;
_11 = ((double) _10);
_12 = (frost$core$Real64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:437
_15 = param1.value;
_16 = ((double) _15);
_17 = (frost$core$Real64) {_16};
return _17;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt param1) {

float _1;
uint64_t _2;
float _3;
bool _4;
frost$core$Bit _5;
bool _6;
float _9;
frost$core$Real32 _10;
uint64_t _13;
float _14;
frost$core$Real32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:443
_1 = param0.value;
_2 = param1.value;
_3 = ((float) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:444
_9 = param0.value;
_10 = (frost$core$Real32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:446
_13 = param1.value;
_14 = ((float) _13);
_15 = (frost$core$Real32) {_14};
return _15;

}
frost$core$Int frost$core$Real32$get_hash$R$frost$core$Int(frost$core$Real32 param0) {

float _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:481
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int frost$core$Real32$get_asInt$R$frost$core$Int(frost$core$Real32 param0) {

float _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:487
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8(frost$core$Real32 param0) {

float _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:493
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16(frost$core$Real32 param0) {

float _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:499
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32(frost$core$Real32 param0) {

float _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:505
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64(frost$core$Real32 param0) {

float _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:511
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$Real32$get_asUInt$R$frost$core$UInt(frost$core$Real32 param0) {

float _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:517
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8(frost$core$Real32 param0) {

float _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:523
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16(frost$core$Real32 param0) {

float _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:529
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32(frost$core$Real32 param0) {

float _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:535
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64(frost$core$Real32 param0) {

float _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:541
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32(frost$core$Real32 param0) {

float _1;
frost$core$Real32 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:547
_1 = param0.value;
_2 = (frost$core$Real32) {_1};
return _2;

}
frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64(frost$core$Real32 param0) {

float _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:553
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String(frost$core$Real32 param0, frost$core$String* param1) {

frost$core$Real32 local0;
float _1;
bool _2;
frost$core$Bit _3;
frost$core$Real64 _6;
frost$core$Real64 _7;
double _8;
double _9;
bool _10;
frost$core$Bit _11;
bool _12;
float _17;
float _18;
frost$core$Real32 _19;
frost$core$Real32 _26;
float _29;
uint64_t _30;
frost$core$UInt64 _31;
frost$core$UInt64 _33;
frost$core$String* _34;
frost$core$Object* _35;
frost$core$Object* _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:563
_1 = param0.value;
_2 = _1 < 0.0;
_3 = (frost$core$Bit) {_2};
// begin inline call to function frost.core.Real32.get_abs():frost.core.Real32 from Real32.frost:563:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:263
_6 = frost$core$Real64$init$frost$core$Real32(param0);
_7 = (frost$core$Real64) {0.0};
_8 = _6.value;
_9 = _7.value;
_10 = _8 < _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:264
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
_17 = param0.value;
_18 = -_17;
_19 = (frost$core$Real32) {_18};
*(&local0) = _19;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:266
*(&local0) = param0;
goto block1;
block1:;
_26 = *(&local0);
// begin inline call to function frost.core.Real32.get_asUInt64():frost.core.UInt64 from Real32.frost:563:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:541
_29 = _26.value;
_30 = ((uint64_t) _29);
_31 = (frost$core$UInt64) {_30};
_33 = (frost$core$UInt64) {4294967295u};
_34 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_3, _31, _33, param1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
return _34;

}
void frost$core$Real32$cleanup(frost$core$Real32 param0) {

return;

}






