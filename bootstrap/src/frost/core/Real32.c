#include "frost/core/Real32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int64 frost$core$Real32$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Real32$get_hash$R$frost$core$Int64(((frost$core$Real32$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Real32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real32$_frost$collections$Key, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Real32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$_frost$core$Comparable, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Real32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Real32$_frost$core$Formattable, { frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Real32$class_type frost$core$Real32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Real32$_frost$core$Equatable, { frost$core$Real32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$SUB$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit$shim, frost$core$Real32$get_abs$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Real32$get_floor$R$frost$core$Real32$shim, frost$core$Real32$get_ceiling$R$frost$core$Real32$shim, frost$core$Real32$get_sqrt$R$frost$core$Real32$shim, frost$core$Real32$get_sin$R$frost$core$Real32$shim, frost$core$Real32$get_cos$R$frost$core$Real32$shim, frost$core$Real32$get_tan$R$frost$core$Real32$shim, frost$core$Real32$get_hash$R$frost$core$Int64$shim, frost$core$Real32$get_asInt8$R$frost$core$Int8$shim, frost$core$Real32$get_asInt16$R$frost$core$Int16$shim, frost$core$Real32$get_asInt32$R$frost$core$Int32$shim, frost$core$Real32$get_asInt64$R$frost$core$Int64$shim, frost$core$Real32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Real32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Real32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Real32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Real32$get_asReal32$R$frost$core$Real32$shim, frost$core$Real32$get_asReal64$R$frost$core$Real64$shim, frost$core$Real32$format$frost$core$String$R$frost$core$String$shim, frost$core$Real32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Real32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Real32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Real32$wrapper_frost$collections$Key, { frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit$shim, frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Real32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Real32$wrapper_frost$core$Comparable, { frost$core$Real32$format$frost$core$String$R$frost$core$String$shim} };

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
frost$core$Real32 frost$core$Real32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:48
uint8_t $tmp17 = param0.value;
float* $tmp18 = &(&local0)->value;
*$tmp18 = ((float) $tmp17);
frost$core$Real32 $tmp19 = *(&local0);
return $tmp19;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:54
uint16_t $tmp20 = param0.value;
float* $tmp21 = &(&local0)->value;
*$tmp21 = ((float) $tmp20);
frost$core$Real32 $tmp22 = *(&local0);
return $tmp22;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:60
uint32_t $tmp23 = param0.value;
float* $tmp24 = &(&local0)->value;
*$tmp24 = ((float) $tmp23);
frost$core$Real32 $tmp25 = *(&local0);
return $tmp25;

}
frost$core$Real32 frost$core$Real32$init$frost$core$UInt64(frost$core$UInt64 param0) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:66
uint64_t $tmp26 = param0.value;
float* $tmp27 = &(&local0)->value;
*$tmp27 = ((float) $tmp26);
frost$core$Real32 $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Real32 frost$core$Real32$$ADD$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:72
float $tmp29 = param0.value;
float $tmp30 = param1.value;
float $tmp31 = $tmp29 + $tmp30;
frost$core$Real32 $tmp32 = (frost$core$Real32) {$tmp31};
return $tmp32;

}
frost$core$Real64 frost$core$Real32$$ADD$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:78
float $tmp33 = param0.value;
double $tmp34 = param1.value;
double $tmp35 = ((double) $tmp33) + $tmp34;
frost$core$Real64 $tmp36 = (frost$core$Real64) {$tmp35};
return $tmp36;

}
frost$core$Real32 frost$core$Real32$$SUB$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:84
float $tmp37 = param0.value;
float $tmp38 = param1.value;
float $tmp39 = $tmp37 - $tmp38;
frost$core$Real32 $tmp40 = (frost$core$Real32) {$tmp39};
return $tmp40;

}
frost$core$Real64 frost$core$Real32$$SUB$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:90
float $tmp41 = param0.value;
double $tmp42 = param1.value;
double $tmp43 = ((double) $tmp41) - $tmp42;
frost$core$Real64 $tmp44 = (frost$core$Real64) {$tmp43};
return $tmp44;

}
frost$core$Real32 frost$core$Real32$$SUB$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:95
float $tmp45 = param0.value;
float $tmp46 = -$tmp45;
frost$core$Real32 $tmp47 = (frost$core$Real32) {$tmp46};
return $tmp47;

}
frost$core$Real32 frost$core$Real32$$MUL$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:101
float $tmp48 = param0.value;
float $tmp49 = param1.value;
float $tmp50 = $tmp48 * $tmp49;
frost$core$Real32 $tmp51 = (frost$core$Real32) {$tmp50};
return $tmp51;

}
frost$core$Real64 frost$core$Real32$$MUL$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:107
float $tmp52 = param0.value;
double $tmp53 = param1.value;
double $tmp54 = ((double) $tmp52) * $tmp53;
frost$core$Real64 $tmp55 = (frost$core$Real64) {$tmp54};
return $tmp55;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:113
float $tmp56 = param0.value;
int8_t $tmp57 = param1.value;
float $tmp58 = $tmp56 / ((float) $tmp57);
frost$core$Real32 $tmp59 = (frost$core$Real32) {$tmp58};
return $tmp59;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:119
float $tmp60 = param0.value;
int16_t $tmp61 = param1.value;
float $tmp62 = $tmp60 / ((float) $tmp61);
frost$core$Real32 $tmp63 = (frost$core$Real32) {$tmp62};
return $tmp63;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:125
float $tmp64 = param0.value;
int32_t $tmp65 = param1.value;
float $tmp66 = $tmp64 / ((float) $tmp65);
frost$core$Real32 $tmp67 = (frost$core$Real32) {$tmp66};
return $tmp67;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:131
float $tmp68 = param0.value;
int64_t $tmp69 = param1.value;
double $tmp70 = ((double) $tmp68) / ((double) $tmp69);
frost$core$Real64 $tmp71 = (frost$core$Real64) {$tmp70};
return $tmp71;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:137
float $tmp72 = param0.value;
uint8_t $tmp73 = param1.value;
float $tmp74 = $tmp72 / ((float) $tmp73);
frost$core$Real32 $tmp75 = (frost$core$Real32) {$tmp74};
return $tmp75;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:143
float $tmp76 = param0.value;
uint16_t $tmp77 = param1.value;
float $tmp78 = $tmp76 / ((float) $tmp77);
frost$core$Real32 $tmp79 = (frost$core$Real32) {$tmp78};
return $tmp79;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:149
float $tmp80 = param0.value;
uint32_t $tmp81 = param1.value;
float $tmp82 = $tmp80 / ((float) $tmp81);
frost$core$Real32 $tmp83 = (frost$core$Real32) {$tmp82};
return $tmp83;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:155
float $tmp84 = param0.value;
uint64_t $tmp85 = param1.value;
double $tmp86 = ((double) $tmp84) / ((double) $tmp85);
frost$core$Real64 $tmp87 = (frost$core$Real64) {$tmp86};
return $tmp87;

}
frost$core$Real32 frost$core$Real32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:161
float $tmp88 = param0.value;
float $tmp89 = param1.value;
float $tmp90 = $tmp88 / $tmp89;
frost$core$Real32 $tmp91 = (frost$core$Real32) {$tmp90};
return $tmp91;

}
frost$core$Real64 frost$core$Real32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:167
float $tmp92 = param0.value;
double $tmp93 = param1.value;
double $tmp94 = ((double) $tmp92) / $tmp93;
frost$core$Real64 $tmp95 = (frost$core$Real64) {$tmp94};
return $tmp95;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:174
float $tmp96 = param0.value;
float $tmp97 = param1.value;
bool $tmp98 = $tmp96 == $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
return $tmp99;

}
frost$core$Bit frost$core$Real32$$EQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:180
float $tmp100 = param0.value;
double $tmp101 = param1.value;
bool $tmp102 = ((double) $tmp100) == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
return $tmp103;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:187
float $tmp104 = param0.value;
float $tmp105 = param1.value;
bool $tmp106 = $tmp104 != $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
return $tmp107;

}
frost$core$Bit frost$core$Real32$$NEQ$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:193
float $tmp108 = param0.value;
double $tmp109 = param1.value;
bool $tmp110 = ((double) $tmp108) != $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
return $tmp111;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:200
float $tmp112 = param0.value;
float $tmp113 = param1.value;
bool $tmp114 = $tmp112 < $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
return $tmp115;

}
frost$core$Bit frost$core$Real32$$LT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:206
float $tmp116 = param0.value;
double $tmp117 = param1.value;
bool $tmp118 = ((double) $tmp116) < $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
return $tmp119;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:213
float $tmp120 = param0.value;
float $tmp121 = param1.value;
bool $tmp122 = $tmp120 > $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
return $tmp123;

}
frost$core$Bit frost$core$Real32$$GT$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:219
float $tmp124 = param0.value;
double $tmp125 = param1.value;
bool $tmp126 = ((double) $tmp124) > $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
return $tmp127;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:226
float $tmp128 = param0.value;
float $tmp129 = param1.value;
bool $tmp130 = $tmp128 >= $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
return $tmp131;

}
frost$core$Bit frost$core$Real32$$GE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:232
float $tmp132 = param0.value;
double $tmp133 = param1.value;
bool $tmp134 = ((double) $tmp132) >= $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
return $tmp135;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real32$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:239
float $tmp136 = param0.value;
float $tmp137 = param1.value;
bool $tmp138 = $tmp136 <= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
return $tmp139;

}
frost$core$Bit frost$core$Real32$$LE$frost$core$Real64$R$frost$core$Bit(frost$core$Real32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:245
float $tmp140 = param0.value;
double $tmp141 = param1.value;
bool $tmp142 = ((double) $tmp140) <= $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
return $tmp143;

}
frost$core$Real32 frost$core$Real32$get_abs$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:251
frost$core$Real32 $tmp144 = (frost$core$Real32) {0.0};
float $tmp145 = param0.value;
float $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 < $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:252
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:252:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:95
float $tmp150 = param0.value;
float $tmp151 = -$tmp150;
frost$core$Real32 $tmp152 = (frost$core$Real32) {$tmp151};
return $tmp152;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:254
return param0;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:260
float $tmp153 = param0.value;
int8_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((float) $tmp154);
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:261
float $tmp158 = param0.value;
frost$core$Real32 $tmp159 = (frost$core$Real32) {$tmp158};
return $tmp159;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:263
int8_t $tmp160 = param1.value;
frost$core$Real32 $tmp161 = (frost$core$Real32) {((float) $tmp160)};
return $tmp161;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:269
float $tmp162 = param0.value;
int16_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((float) $tmp163);
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:270
float $tmp167 = param0.value;
frost$core$Real32 $tmp168 = (frost$core$Real32) {$tmp167};
return $tmp168;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:272
int16_t $tmp169 = param1.value;
frost$core$Real32 $tmp170 = (frost$core$Real32) {((float) $tmp169)};
return $tmp170;

}
frost$core$Real32 frost$core$Real32$min$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:278
float $tmp171 = param0.value;
int32_t $tmp172 = param1.value;
bool $tmp173 = $tmp171 < ((float) $tmp172);
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:279
float $tmp176 = param0.value;
frost$core$Real32 $tmp177 = (frost$core$Real32) {$tmp176};
return $tmp177;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:281
int32_t $tmp178 = param1.value;
frost$core$Real32 $tmp179 = (frost$core$Real32) {((float) $tmp178)};
return $tmp179;

}
frost$core$Real64 frost$core$Real32$min$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:287
float $tmp180 = param0.value;
int64_t $tmp181 = param1.value;
bool $tmp182 = ((double) $tmp180) < ((double) $tmp181);
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:288
float $tmp185 = param0.value;
frost$core$Real64 $tmp186 = (frost$core$Real64) {((double) $tmp185)};
return $tmp186;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:290
int64_t $tmp187 = param1.value;
frost$core$Real64 $tmp188 = (frost$core$Real64) {((double) $tmp187)};
return $tmp188;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:296
float $tmp189 = param0.value;
uint8_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 < ((float) $tmp190);
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:297
float $tmp194 = param0.value;
frost$core$Real32 $tmp195 = (frost$core$Real32) {$tmp194};
return $tmp195;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:299
uint8_t $tmp196 = param1.value;
frost$core$Real32 $tmp197 = (frost$core$Real32) {((float) $tmp196)};
return $tmp197;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:305
float $tmp198 = param0.value;
uint16_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 < ((float) $tmp199);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:306
float $tmp203 = param0.value;
frost$core$Real32 $tmp204 = (frost$core$Real32) {$tmp203};
return $tmp204;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:308
uint16_t $tmp205 = param1.value;
frost$core$Real32 $tmp206 = (frost$core$Real32) {((float) $tmp205)};
return $tmp206;

}
frost$core$Real32 frost$core$Real32$min$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:314
float $tmp207 = param0.value;
uint32_t $tmp208 = param1.value;
bool $tmp209 = $tmp207 < ((float) $tmp208);
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:315
float $tmp212 = param0.value;
frost$core$Real32 $tmp213 = (frost$core$Real32) {$tmp212};
return $tmp213;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:317
uint32_t $tmp214 = param1.value;
frost$core$Real32 $tmp215 = (frost$core$Real32) {((float) $tmp214)};
return $tmp215;

}
frost$core$Real64 frost$core$Real32$min$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:323
float $tmp216 = param0.value;
uint64_t $tmp217 = param1.value;
bool $tmp218 = ((double) $tmp216) < ((double) $tmp217);
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:324
float $tmp221 = param0.value;
frost$core$Real64 $tmp222 = (frost$core$Real64) {((double) $tmp221)};
return $tmp222;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:326
uint64_t $tmp223 = param1.value;
frost$core$Real64 $tmp224 = (frost$core$Real64) {((double) $tmp223)};
return $tmp224;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:332
float $tmp225 = param0.value;
int8_t $tmp226 = param1.value;
bool $tmp227 = $tmp225 > ((float) $tmp226);
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:333
float $tmp230 = param0.value;
frost$core$Real32 $tmp231 = (frost$core$Real32) {$tmp230};
return $tmp231;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:335
int8_t $tmp232 = param1.value;
frost$core$Real32 $tmp233 = (frost$core$Real32) {((float) $tmp232)};
return $tmp233;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:341
float $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
bool $tmp236 = $tmp234 > ((float) $tmp235);
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:342
float $tmp239 = param0.value;
frost$core$Real32 $tmp240 = (frost$core$Real32) {$tmp239};
return $tmp240;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:344
int16_t $tmp241 = param1.value;
frost$core$Real32 $tmp242 = (frost$core$Real32) {((float) $tmp241)};
return $tmp242;

}
frost$core$Real32 frost$core$Real32$max$frost$core$Int32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:350
float $tmp243 = param0.value;
int32_t $tmp244 = param1.value;
bool $tmp245 = $tmp243 > ((float) $tmp244);
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:351
float $tmp248 = param0.value;
frost$core$Real32 $tmp249 = (frost$core$Real32) {$tmp248};
return $tmp249;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:353
int32_t $tmp250 = param1.value;
frost$core$Real32 $tmp251 = (frost$core$Real32) {((float) $tmp250)};
return $tmp251;

}
frost$core$Real64 frost$core$Real32$max$frost$core$Int64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:359
float $tmp252 = param0.value;
int64_t $tmp253 = param1.value;
bool $tmp254 = ((double) $tmp252) > ((double) $tmp253);
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:360
float $tmp257 = param0.value;
frost$core$Real64 $tmp258 = (frost$core$Real64) {((double) $tmp257)};
return $tmp258;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:362
int64_t $tmp259 = param1.value;
frost$core$Real64 $tmp260 = (frost$core$Real64) {((double) $tmp259)};
return $tmp260;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt8$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:368
float $tmp261 = param0.value;
uint8_t $tmp262 = param1.value;
bool $tmp263 = $tmp261 > ((float) $tmp262);
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:369
float $tmp266 = param0.value;
frost$core$Real32 $tmp267 = (frost$core$Real32) {$tmp266};
return $tmp267;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:371
uint8_t $tmp268 = param1.value;
frost$core$Real32 $tmp269 = (frost$core$Real32) {((float) $tmp268)};
return $tmp269;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt16$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:377
float $tmp270 = param0.value;
uint16_t $tmp271 = param1.value;
bool $tmp272 = $tmp270 > ((float) $tmp271);
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:378
float $tmp275 = param0.value;
frost$core$Real32 $tmp276 = (frost$core$Real32) {$tmp275};
return $tmp276;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:380
uint16_t $tmp277 = param1.value;
frost$core$Real32 $tmp278 = (frost$core$Real32) {((float) $tmp277)};
return $tmp278;

}
frost$core$Real32 frost$core$Real32$max$frost$core$UInt32$R$frost$core$Real32(frost$core$Real32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:386
float $tmp279 = param0.value;
uint32_t $tmp280 = param1.value;
bool $tmp281 = $tmp279 > ((float) $tmp280);
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:387
float $tmp284 = param0.value;
frost$core$Real32 $tmp285 = (frost$core$Real32) {$tmp284};
return $tmp285;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:389
uint32_t $tmp286 = param1.value;
frost$core$Real32 $tmp287 = (frost$core$Real32) {((float) $tmp286)};
return $tmp287;

}
frost$core$Real64 frost$core$Real32$max$frost$core$UInt64$R$frost$core$Real64(frost$core$Real32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:395
float $tmp288 = param0.value;
uint64_t $tmp289 = param1.value;
bool $tmp290 = ((double) $tmp288) > ((double) $tmp289);
frost$core$Bit $tmp291 = (frost$core$Bit) {$tmp290};
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:396
float $tmp293 = param0.value;
frost$core$Real64 $tmp294 = (frost$core$Real64) {((double) $tmp293)};
return $tmp294;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:398
uint64_t $tmp295 = param1.value;
frost$core$Real64 $tmp296 = (frost$core$Real64) {((double) $tmp295)};
return $tmp296;

}
frost$core$Int64 frost$core$Real32$get_hash$R$frost$core$Int64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:433
float $tmp297 = param0.value;
frost$core$Int64 $tmp298 = (frost$core$Int64) {((int64_t) $tmp297)};
return $tmp298;

}
frost$core$Int8 frost$core$Real32$get_asInt8$R$frost$core$Int8(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:439
float $tmp299 = param0.value;
frost$core$Int8 $tmp300 = (frost$core$Int8) {((int8_t) $tmp299)};
return $tmp300;

}
frost$core$Int16 frost$core$Real32$get_asInt16$R$frost$core$Int16(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:445
float $tmp301 = param0.value;
frost$core$Int16 $tmp302 = (frost$core$Int16) {((int16_t) $tmp301)};
return $tmp302;

}
frost$core$Int32 frost$core$Real32$get_asInt32$R$frost$core$Int32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:451
float $tmp303 = param0.value;
frost$core$Int32 $tmp304 = (frost$core$Int32) {((int32_t) $tmp303)};
return $tmp304;

}
frost$core$Int64 frost$core$Real32$get_asInt64$R$frost$core$Int64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:457
float $tmp305 = param0.value;
frost$core$Int64 $tmp306 = (frost$core$Int64) {((int64_t) $tmp305)};
return $tmp306;

}
frost$core$UInt8 frost$core$Real32$get_asUInt8$R$frost$core$UInt8(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:463
float $tmp307 = param0.value;
frost$core$UInt8 $tmp308 = (frost$core$UInt8) {((uint8_t) $tmp307)};
return $tmp308;

}
frost$core$UInt16 frost$core$Real32$get_asUInt16$R$frost$core$UInt16(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:469
float $tmp309 = param0.value;
frost$core$UInt16 $tmp310 = (frost$core$UInt16) {((uint16_t) $tmp309)};
return $tmp310;

}
frost$core$UInt32 frost$core$Real32$get_asUInt32$R$frost$core$UInt32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:475
float $tmp311 = param0.value;
frost$core$UInt32 $tmp312 = (frost$core$UInt32) {((uint32_t) $tmp311)};
return $tmp312;

}
frost$core$UInt64 frost$core$Real32$get_asUInt64$R$frost$core$UInt64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:481
float $tmp313 = param0.value;
frost$core$UInt64 $tmp314 = (frost$core$UInt64) {((uint64_t) $tmp313)};
return $tmp314;

}
frost$core$Real32 frost$core$Real32$get_asReal32$R$frost$core$Real32(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:487
float $tmp315 = param0.value;
frost$core$Real32 $tmp316 = (frost$core$Real32) {$tmp315};
return $tmp316;

}
frost$core$Real64 frost$core$Real32$get_asReal64$R$frost$core$Real64(frost$core$Real32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:493
float $tmp317 = param0.value;
frost$core$Real64 $tmp318 = (frost$core$Real64) {((double) $tmp317)};
return $tmp318;

}
frost$core$String* frost$core$Real32$format$frost$core$String$R$frost$core$String(frost$core$Real32 param0, frost$core$String* param1) {

frost$core$Real32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:503
float $tmp319 = param0.value;
bool $tmp320 = $tmp319 < 0.0;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
// begin inline call to function frost.core.Real32.get_abs():frost.core.Real32 from Real32.frost:503:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:251
frost$core$Real32 $tmp322 = (frost$core$Real32) {0.0};
float $tmp323 = param0.value;
float $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 < $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:252
// begin inline call to function frost.core.Real32.-():frost.core.Real32 from Real32.frost:252:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:95
float $tmp328 = param0.value;
float $tmp329 = -$tmp328;
frost$core$Real32 $tmp330 = (frost$core$Real32) {$tmp329};
*(&local0) = $tmp330;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:254
*(&local0) = param0;
goto block1;
block1:;
frost$core$Real32 $tmp331 = *(&local0);
// begin inline call to function frost.core.Real32.get_asUInt64():frost.core.UInt64 from Real32.frost:503:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Real32.frost:481
float $tmp332 = $tmp331.value;
frost$core$UInt64 $tmp333 = (frost$core$UInt64) {((uint64_t) $tmp332)};
frost$core$UInt64 $tmp334 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp335 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp321, $tmp333, $tmp334, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
return $tmp335;

}
void frost$core$Real32$cleanup(frost$core$Real32 param0) {

return;

}






