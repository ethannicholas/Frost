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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:18
float* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Real32 $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:24
int8_t $tmp5 = param0.value;
float* $tmp6 = &(&local0)->value;
*$tmp6 = ((float) $tmp5);
frost$core$Real32 $tmp7 = *(&local0);
return $tmp7;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:30
int16_t $tmp8 = param0.value;
float* $tmp9 = &(&local0)->value;
*$tmp9 = ((float) $tmp8);
frost$core$Real32 $tmp10 = *(&local0);
return $tmp10;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:36
int32_t $tmp11 = param0.value;
float* $tmp12 = &(&local0)->value;
*$tmp12 = ((float) $tmp11);
frost$core$Real32 $tmp13 = *(&local0);
return $tmp13;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:42
int64_t $tmp14 = param0.value;
float* $tmp15 = &(&local0)->value;
*$tmp15 = ((float) $tmp14);
frost$core$Real32 $tmp16 = *(&local0);
return $tmp16;

}
frost$core$Real32 frost$core$Real32$init$frost$core$Int(frost$core$Int param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:48
int64_t $tmp17 = param0.value;
float* $tmp18 = &(&local0)->value;
*$tmp18 = ((float) $tmp17);
frost$core$Real32 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:54
uint8_t $tmp20 = param0.value;
float* $tmp21 = &(&local0)->value;
*$tmp21 = ((float) $tmp20);
frost$core$Real32 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:60
uint16_t $tmp23 = param0.value;
float* $tmp24 = &(&local0)->value;
*$tmp24 = ((float) $tmp23);
frost$core$Real32 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:66
uint32_t $tmp26 = param0.value;
float* $tmp27 = &(&local0)->value;
*$tmp27 = ((float) $tmp26);
frost$core$Real32 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:72
uint64_t $tmp29 = param0.value;
float* $tmp30 = &(&local0)->value;
*$tmp30 = ((float) $tmp29);
frost$core$Real32 $tmp31 = *(&local0);
return $tmp31;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:78
uint64_t $tmp32 = param0.value;
float* $tmp33 = &(&local0)->value;
*$tmp33 = ((float) $tmp32);
frost$core$Real32 $tmp34 = *(&local0);
return $tmp34;

}
frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:84
float $tmp35 = param0.value;
float $tmp36 = param1.value;
float $tmp37 = $tmp35 + $tmp36;
frost$core$Real32 $tmp38 = (frost$core$Real32) {$tmp37};
return $tmp38;

}
frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:90
float $tmp39 = param0.value;
double $tmp40 = param1.value;
double $tmp41 = ((double) $tmp39) + $tmp40;
frost$core$Real64 $tmp42 = (frost$core$Real64) {$tmp41};
return $tmp42;

}
frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:96
float $tmp43 = param0.value;
float $tmp44 = param1.value;
float $tmp45 = $tmp43 - $tmp44;
frost$core$Real32 $tmp46 = (frost$core$Real32) {$tmp45};
return $tmp46;

}
frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:102
float $tmp47 = param0.value;
double $tmp48 = param1.value;
double $tmp49 = ((double) $tmp47) - $tmp48;
frost$core$Real64 $tmp50 = (frost$core$Real64) {$tmp49};
return $tmp50;

}
frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
float $tmp51 = param0.value;
float $tmp52 = -$tmp51;
frost$core$Real32 $tmp53 = (frost$core$Real32) {$tmp52};
return $tmp53;

}
frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:113
float $tmp54 = param0.value;
float $tmp55 = param1.value;
float $tmp56 = $tmp54 * $tmp55;
frost$core$Real32 $tmp57 = (frost$core$Real32) {$tmp56};
return $tmp57;

}
frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:119
float $tmp58 = param0.value;
double $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) * $tmp59;
frost$core$Real64 $tmp61 = (frost$core$Real64) {$tmp60};
return $tmp61;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:125
float $tmp62 = param0.value;
int8_t $tmp63 = param1.value;
float $tmp64 = $tmp62 / ((float) $tmp63);
frost$core$Real32 $tmp65 = (frost$core$Real32) {$tmp64};
return $tmp65;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:131
float $tmp66 = param0.value;
int16_t $tmp67 = param1.value;
float $tmp68 = $tmp66 / ((float) $tmp67);
frost$core$Real32 $tmp69 = (frost$core$Real32) {$tmp68};
return $tmp69;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:137
float $tmp70 = param0.value;
int32_t $tmp71 = param1.value;
float $tmp72 = $tmp70 / ((float) $tmp71);
frost$core$Real32 $tmp73 = (frost$core$Real32) {$tmp72};
return $tmp73;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:143
float $tmp74 = param0.value;
int64_t $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / ((double) $tmp75);
frost$core$Real64 $tmp77 = (frost$core$Real64) {$tmp76};
return $tmp77;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:149
float $tmp78 = param0.value;
uint8_t $tmp79 = param1.value;
float $tmp80 = $tmp78 / ((float) $tmp79);
frost$core$Real32 $tmp81 = (frost$core$Real32) {$tmp80};
return $tmp81;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:155
float $tmp82 = param0.value;
uint16_t $tmp83 = param1.value;
float $tmp84 = $tmp82 / ((float) $tmp83);
frost$core$Real32 $tmp85 = (frost$core$Real32) {$tmp84};
return $tmp85;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:161
float $tmp86 = param0.value;
uint32_t $tmp87 = param1.value;
float $tmp88 = $tmp86 / ((float) $tmp87);
frost$core$Real32 $tmp89 = (frost$core$Real32) {$tmp88};
return $tmp89;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:167
float $tmp90 = param0.value;
uint64_t $tmp91 = param1.value;
double $tmp92 = ((double) $tmp90) / ((double) $tmp91);
frost$core$Real64 $tmp93 = (frost$core$Real64) {$tmp92};
return $tmp93;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:173
float $tmp94 = param0.value;
float $tmp95 = param1.value;
float $tmp96 = $tmp94 / $tmp95;
frost$core$Real32 $tmp97 = (frost$core$Real32) {$tmp96};
return $tmp97;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:179
float $tmp98 = param0.value;
double $tmp99 = param1.value;
double $tmp100 = ((double) $tmp98) / $tmp99;
frost$core$Real64 $tmp101 = (frost$core$Real64) {$tmp100};
return $tmp101;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:186
float $tmp102 = param0.value;
float $tmp103 = param1.value;
bool $tmp104 = $tmp102 == $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
return $tmp105;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:192
float $tmp106 = param0.value;
double $tmp107 = param1.value;
bool $tmp108 = ((double) $tmp106) == $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
return $tmp109;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:199
float $tmp110 = param0.value;
float $tmp111 = param1.value;
bool $tmp112 = $tmp110 != $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
return $tmp113;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:205
float $tmp114 = param0.value;
double $tmp115 = param1.value;
bool $tmp116 = ((double) $tmp114) != $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
return $tmp117;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:212
float $tmp118 = param0.value;
float $tmp119 = param1.value;
bool $tmp120 = $tmp118 < $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
return $tmp121;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:218
float $tmp122 = param0.value;
double $tmp123 = param1.value;
bool $tmp124 = ((double) $tmp122) < $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
return $tmp125;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:225
float $tmp126 = param0.value;
float $tmp127 = param1.value;
bool $tmp128 = $tmp126 > $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:231
float $tmp130 = param0.value;
double $tmp131 = param1.value;
bool $tmp132 = ((double) $tmp130) > $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
return $tmp133;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:238
float $tmp134 = param0.value;
float $tmp135 = param1.value;
bool $tmp136 = $tmp134 >= $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
return $tmp137;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:244
float $tmp138 = param0.value;
double $tmp139 = param1.value;
bool $tmp140 = ((double) $tmp138) >= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
return $tmp141;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:251
float $tmp142 = param0.value;
float $tmp143 = param1.value;
bool $tmp144 = $tmp142 <= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
return $tmp145;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:257
float $tmp146 = param0.value;
double $tmp147 = param1.value;
bool $tmp148 = ((double) $tmp146) <= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
return $tmp149;

}
frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:263
frost$core$Real64 $tmp150 = frost$core$Real64$init$frost$core$Real32(param0);
frost$core$Real64 $tmp151 = (frost$core$Real64) {0.0};
double $tmp152 = $tmp150.value;
double $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 < $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:264
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
float $tmp157 = param0.value;
float $tmp158 = -$tmp157;
frost$core$Real32 $tmp159 = (frost$core$Real32) {$tmp158};
return $tmp159;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:266
return param0;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:272
float $tmp160 = param0.value;
int8_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((float) $tmp161);
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:273
float $tmp165 = param0.value;
frost$core$Real32 $tmp166 = (frost$core$Real32) {$tmp165};
return $tmp166;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:275
int8_t $tmp167 = param1.value;
frost$core$Real32 $tmp168 = (frost$core$Real32) {((float) $tmp167)};
return $tmp168;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:281
float $tmp169 = param0.value;
int16_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((float) $tmp170);
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:282
float $tmp174 = param0.value;
frost$core$Real32 $tmp175 = (frost$core$Real32) {$tmp174};
return $tmp175;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:284
int16_t $tmp176 = param1.value;
frost$core$Real32 $tmp177 = (frost$core$Real32) {((float) $tmp176)};
return $tmp177;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:290
float $tmp178 = param0.value;
int32_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 < ((float) $tmp179);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:291
float $tmp183 = param0.value;
frost$core$Real32 $tmp184 = (frost$core$Real32) {$tmp183};
return $tmp184;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:293
int32_t $tmp185 = param1.value;
frost$core$Real32 $tmp186 = (frost$core$Real32) {((float) $tmp185)};
return $tmp186;

}
frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:299
float $tmp187 = param0.value;
int64_t $tmp188 = param1.value;
bool $tmp189 = ((double) $tmp187) < ((double) $tmp188);
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:300
float $tmp192 = param0.value;
frost$core$Real64 $tmp193 = (frost$core$Real64) {((double) $tmp192)};
return $tmp193;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:302
int64_t $tmp194 = param1.value;
frost$core$Real64 $tmp195 = (frost$core$Real64) {((double) $tmp194)};
return $tmp195;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:308
float $tmp196 = param0.value;
int64_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 < ((float) $tmp197);
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:309
float $tmp201 = param0.value;
frost$core$Real32 $tmp202 = (frost$core$Real32) {$tmp201};
return $tmp202;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:311
int64_t $tmp203 = param1.value;
frost$core$Real32 $tmp204 = (frost$core$Real32) {((float) $tmp203)};
return $tmp204;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:317
float $tmp205 = param0.value;
uint8_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 < ((float) $tmp206);
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:318
float $tmp210 = param0.value;
frost$core$Real32 $tmp211 = (frost$core$Real32) {$tmp210};
return $tmp211;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:320
uint8_t $tmp212 = param1.value;
frost$core$Real32 $tmp213 = (frost$core$Real32) {((float) $tmp212)};
return $tmp213;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:326
float $tmp214 = param0.value;
uint16_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 < ((float) $tmp215);
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:327
float $tmp219 = param0.value;
frost$core$Real32 $tmp220 = (frost$core$Real32) {$tmp219};
return $tmp220;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:329
uint16_t $tmp221 = param1.value;
frost$core$Real32 $tmp222 = (frost$core$Real32) {((float) $tmp221)};
return $tmp222;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:335
float $tmp223 = param0.value;
uint32_t $tmp224 = param1.value;
bool $tmp225 = $tmp223 < ((float) $tmp224);
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:336
float $tmp228 = param0.value;
frost$core$Real32 $tmp229 = (frost$core$Real32) {$tmp228};
return $tmp229;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:338
uint32_t $tmp230 = param1.value;
frost$core$Real32 $tmp231 = (frost$core$Real32) {((float) $tmp230)};
return $tmp231;

}
frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:344
float $tmp232 = param0.value;
uint64_t $tmp233 = param1.value;
bool $tmp234 = ((double) $tmp232) < ((double) $tmp233);
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:345
float $tmp237 = param0.value;
frost$core$Real64 $tmp238 = (frost$core$Real64) {((double) $tmp237)};
return $tmp238;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:347
uint64_t $tmp239 = param1.value;
frost$core$Real64 $tmp240 = (frost$core$Real64) {((double) $tmp239)};
return $tmp240;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:353
float $tmp241 = param0.value;
uint64_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 < ((float) $tmp242);
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:354
float $tmp246 = param0.value;
frost$core$Real32 $tmp247 = (frost$core$Real32) {$tmp246};
return $tmp247;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:356
uint64_t $tmp248 = param1.value;
frost$core$Real32 $tmp249 = (frost$core$Real32) {((float) $tmp248)};
return $tmp249;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:362
float $tmp250 = param0.value;
int8_t $tmp251 = param1.value;
bool $tmp252 = $tmp250 > ((float) $tmp251);
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:363
float $tmp255 = param0.value;
frost$core$Real32 $tmp256 = (frost$core$Real32) {$tmp255};
return $tmp256;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:365
int8_t $tmp257 = param1.value;
frost$core$Real32 $tmp258 = (frost$core$Real32) {((float) $tmp257)};
return $tmp258;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:371
float $tmp259 = param0.value;
int16_t $tmp260 = param1.value;
bool $tmp261 = $tmp259 > ((float) $tmp260);
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:372
float $tmp264 = param0.value;
frost$core$Real32 $tmp265 = (frost$core$Real32) {$tmp264};
return $tmp265;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:374
int16_t $tmp266 = param1.value;
frost$core$Real32 $tmp267 = (frost$core$Real32) {((float) $tmp266)};
return $tmp267;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:380
float $tmp268 = param0.value;
int32_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((float) $tmp269);
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:381
float $tmp273 = param0.value;
frost$core$Real32 $tmp274 = (frost$core$Real32) {$tmp273};
return $tmp274;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:383
int32_t $tmp275 = param1.value;
frost$core$Real32 $tmp276 = (frost$core$Real32) {((float) $tmp275)};
return $tmp276;

}
frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:389
float $tmp277 = param0.value;
int64_t $tmp278 = param1.value;
bool $tmp279 = ((double) $tmp277) > ((double) $tmp278);
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:390
float $tmp282 = param0.value;
frost$core$Real64 $tmp283 = (frost$core$Real64) {((double) $tmp282)};
return $tmp283;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:392
int64_t $tmp284 = param1.value;
frost$core$Real64 $tmp285 = (frost$core$Real64) {((double) $tmp284)};
return $tmp285;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:398
float $tmp286 = param0.value;
int64_t $tmp287 = param1.value;
bool $tmp288 = $tmp286 > ((float) $tmp287);
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:399
float $tmp291 = param0.value;
frost$core$Real32 $tmp292 = (frost$core$Real32) {$tmp291};
return $tmp292;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:401
int64_t $tmp293 = param1.value;
frost$core$Real32 $tmp294 = (frost$core$Real32) {((float) $tmp293)};
return $tmp294;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:407
float $tmp295 = param0.value;
uint8_t $tmp296 = param1.value;
bool $tmp297 = $tmp295 > ((float) $tmp296);
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:408
float $tmp300 = param0.value;
frost$core$Real32 $tmp301 = (frost$core$Real32) {$tmp300};
return $tmp301;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:410
uint8_t $tmp302 = param1.value;
frost$core$Real32 $tmp303 = (frost$core$Real32) {((float) $tmp302)};
return $tmp303;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:416
float $tmp304 = param0.value;
uint16_t $tmp305 = param1.value;
bool $tmp306 = $tmp304 > ((float) $tmp305);
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:417
float $tmp309 = param0.value;
frost$core$Real32 $tmp310 = (frost$core$Real32) {$tmp309};
return $tmp310;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:419
uint16_t $tmp311 = param1.value;
frost$core$Real32 $tmp312 = (frost$core$Real32) {((float) $tmp311)};
return $tmp312;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:425
float $tmp313 = param0.value;
uint32_t $tmp314 = param1.value;
bool $tmp315 = $tmp313 > ((float) $tmp314);
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:426
float $tmp318 = param0.value;
frost$core$Real32 $tmp319 = (frost$core$Real32) {$tmp318};
return $tmp319;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:428
uint32_t $tmp320 = param1.value;
frost$core$Real32 $tmp321 = (frost$core$Real32) {((float) $tmp320)};
return $tmp321;

}
frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:434
float $tmp322 = param0.value;
uint64_t $tmp323 = param1.value;
bool $tmp324 = ((double) $tmp322) > ((double) $tmp323);
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:435
float $tmp327 = param0.value;
frost$core$Real64 $tmp328 = (frost$core$Real64) {((double) $tmp327)};
return $tmp328;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:437
uint64_t $tmp329 = param1.value;
frost$core$Real64 $tmp330 = (frost$core$Real64) {((double) $tmp329)};
return $tmp330;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:443
float $tmp331 = param0.value;
uint64_t $tmp332 = param1.value;
bool $tmp333 = $tmp331 > ((float) $tmp332);
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:444
float $tmp336 = param0.value;
frost$core$Real32 $tmp337 = (frost$core$Real32) {$tmp336};
return $tmp337;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:446
uint64_t $tmp338 = param1.value;
frost$core$Real32 $tmp339 = (frost$core$Real32) {((float) $tmp338)};
return $tmp339;

}
frost$core$Int frost$core$Real32$get_hash$R$frost$core$Int(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:481
float $tmp340 = param0.value;
frost$core$Int $tmp341 = (frost$core$Int) {((int64_t) $tmp340)};
return $tmp341;

}
frost$core$Int frost$core$Real32$get_asInt$R$frost$core$Int(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:487
float $tmp342 = param0.value;
frost$core$Int $tmp343 = (frost$core$Int) {((int64_t) $tmp342)};
return $tmp343;

}
frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:493
float $tmp344 = param0.value;
frost$core$Int8 $tmp345 = (frost$core$Int8) {((int8_t) $tmp344)};
return $tmp345;

}
frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:499
float $tmp346 = param0.value;
frost$core$Int16 $tmp347 = (frost$core$Int16) {((int16_t) $tmp346)};
return $tmp347;

}
frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:505
float $tmp348 = param0.value;
frost$core$Int32 $tmp349 = (frost$core$Int32) {((int32_t) $tmp348)};
return $tmp349;

}
frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:511
float $tmp350 = param0.value;
frost$core$Int64 $tmp351 = (frost$core$Int64) {((int64_t) $tmp350)};
return $tmp351;

}
frost$core$UInt frost$core$Real32$get_asUInt$R$frost$core$UInt(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:517
float $tmp352 = param0.value;
frost$core$UInt $tmp353 = (frost$core$UInt) {((uint64_t) $tmp352)};
return $tmp353;

}
frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:523
float $tmp354 = param0.value;
frost$core$UInt8 $tmp355 = (frost$core$UInt8) {((uint8_t) $tmp354)};
return $tmp355;

}
frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:529
float $tmp356 = param0.value;
frost$core$UInt16 $tmp357 = (frost$core$UInt16) {((uint16_t) $tmp356)};
return $tmp357;

}
frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:535
float $tmp358 = param0.value;
frost$core$UInt32 $tmp359 = (frost$core$UInt32) {((uint32_t) $tmp358)};
return $tmp359;

}
frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:541
float $tmp360 = param0.value;
frost$core$UInt64 $tmp361 = (frost$core$UInt64) {((uint64_t) $tmp360)};
return $tmp361;

}
frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:547
float $tmp362 = param0.value;
frost$core$Real32 $tmp363 = (frost$core$Real32) {$tmp362};
return $tmp363;

}
frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:553
float $tmp364 = param0.value;
frost$core$Real64 $tmp365 = (frost$core$Real64) {((double) $tmp364)};
return $tmp365;

}
frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String(frost$core$Real32 param0, frost$core$String* param1) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:563
float $tmp366 = param0.value;
bool $tmp367 = $tmp366 < 0.0;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
// begin inline call to function frost.core.Real32.get_abs():frost.core.Real32 from Real32.frost:563:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:263
frost$core$Real64 $tmp369 = frost$core$Real64$init$frost$core$Real32(param0);
frost$core$Real64 $tmp370 = (frost$core$Real64) {0.0};
double $tmp371 = $tmp369.value;
double $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 < $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:264
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:264:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
float $tmp376 = param0.value;
float $tmp377 = -$tmp376;
frost$core$Real32 $tmp378 = (frost$core$Real32) {$tmp377};
*(&local0) = $tmp378;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:266
*(&local0) = param0;
goto block1;
block1:;
frost$core$Real32 $tmp379 = *(&local0);
// begin inline call to function frost.core.Real32.get_asUInt64():frost.core.UInt64 from Real32.frost:563:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:541
float $tmp380 = $tmp379.value;
frost$core$UInt64 $tmp381 = (frost$core$UInt64) {((uint64_t) $tmp380)};
frost$core$UInt64 $tmp382 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp383 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp368, $tmp381, $tmp382, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
return $tmp383;

}
void frost$core$Real32$cleanup(frost$core$Real32 param0) {

return;

}






