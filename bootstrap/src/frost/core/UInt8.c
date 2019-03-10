#include "frost/core/UInt8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Key.h"
#include "frost/core/Int32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Real64.h"
#include "frost/core/Range.LTfrost/core/UInt8.GT.h"
#include "org/frostlang/frost/UInt8List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt8$format$frost$core$String$R$frost$core$String(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_count$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_hash$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt8$get_asString$R$frost$core$String(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt8$$SUB$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt8$$BNOT$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt8$get_bitCount$R$frost$core$UInt8$shim(frost$core$UInt8* sret, frost$core$Object* p0) {
    frost$core$UInt8$get_bitCount$R$frost$core$UInt8(sret, ((frost$core$UInt8$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt8$get_asInt8$R$frost$core$Int8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt8$get_asInt16$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt8$get_asInt32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_asInt64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt8$get_asReal32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt8$get_asReal64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt8$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt8$cleanup(((frost$core$UInt8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$_frost$core$Equatable, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$_frost$collections$CollectionView, { frost$core$UInt8$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$UInt8$class_type frost$core$UInt8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$_frost$collections$Key, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$core$UInt8$get_bitCount$R$frost$core$UInt8$shim, frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt8$get_hash$R$frost$core$Int64$shim, frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Equatable, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$CollectionView, { frost$core$UInt8$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s3;
frost$core$UInt8$wrapperclass_type frost$core$UInt8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Key, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn646)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, 907100950223080460, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f", 121, -7034386239404801262, NULL };

frost$core$UInt8 frost$core$UInt8$init$builtin_uint8(uint8_t param0) {

frost$core$UInt8 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:30
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:36
uint8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = (frost$core$Int32) {$tmp8};
return $tmp9;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:42
uint8_t $tmp10 = param0.value;
int16_t $tmp11 = param1.value;
int32_t $tmp12 = ((int32_t) $tmp10) + ((int32_t) $tmp11);
frost$core$Int32 $tmp13 = (frost$core$Int32) {$tmp12};
return $tmp13;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:48
uint8_t $tmp14 = param0.value;
int32_t $tmp15 = param1.value;
int64_t $tmp16 = ((int64_t) $tmp14) + ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = (frost$core$Int64) {$tmp16};
return $tmp17;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:54
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
uint32_t $tmp20 = ((uint32_t) $tmp18) + ((uint32_t) $tmp19);
frost$core$UInt32 $tmp21 = (frost$core$UInt32) {$tmp20};
return $tmp21;

}
frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:59
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
uint8_t $tmp24 = $tmp22 + $tmp23;
frost$core$UInt8 $tmp25 = (frost$core$UInt8) {$tmp24};
return $tmp25;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:65
uint8_t $tmp26 = param0.value;
uint16_t $tmp27 = param1.value;
uint32_t $tmp28 = ((uint32_t) $tmp26) + ((uint32_t) $tmp27);
frost$core$UInt32 $tmp29 = (frost$core$UInt32) {$tmp28};
return $tmp29;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:71
uint8_t $tmp30 = param0.value;
uint32_t $tmp31 = param1.value;
uint32_t $tmp32 = ((uint32_t) $tmp30) + $tmp31;
frost$core$UInt32 $tmp33 = (frost$core$UInt32) {$tmp32};
return $tmp33;

}
frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:77
uint8_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = ((uint64_t) $tmp34) + $tmp35;
frost$core$UInt64 $tmp37 = (frost$core$UInt64) {$tmp36};
return $tmp37;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:83
uint8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
frost$core$Int32 $tmp41 = (frost$core$Int32) {$tmp40};
return $tmp41;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:89
uint8_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
int32_t $tmp44 = ((int32_t) $tmp42) - ((int32_t) $tmp43);
frost$core$Int32 $tmp45 = (frost$core$Int32) {$tmp44};
return $tmp45;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:95
uint8_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
int64_t $tmp48 = ((int64_t) $tmp46) - ((int64_t) $tmp47);
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
return $tmp49;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:101
uint8_t $tmp50 = param0.value;
uint8_t $tmp51 = param1.value;
uint32_t $tmp52 = ((uint32_t) $tmp50) - ((uint32_t) $tmp51);
frost$core$UInt32 $tmp53 = (frost$core$UInt32) {$tmp52};
return $tmp53;

}
frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:106
uint8_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
uint8_t $tmp56 = $tmp54 - $tmp55;
frost$core$UInt8 $tmp57 = (frost$core$UInt8) {$tmp56};
return $tmp57;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:112
uint8_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
uint32_t $tmp60 = ((uint32_t) $tmp58) - ((uint32_t) $tmp59);
frost$core$UInt32 $tmp61 = (frost$core$UInt32) {$tmp60};
return $tmp61;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:118
uint8_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
uint32_t $tmp64 = ((uint32_t) $tmp62) - $tmp63;
frost$core$UInt32 $tmp65 = (frost$core$UInt32) {$tmp64};
return $tmp65;

}
frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:124
uint8_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
uint64_t $tmp68 = ((uint64_t) $tmp66) - $tmp67;
frost$core$UInt64 $tmp69 = (frost$core$UInt64) {$tmp68};
return $tmp69;

}
frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:129
uint8_t $tmp70 = param0.value;
uint8_t $tmp71 = -$tmp70;
frost$core$UInt8 $tmp72 = (frost$core$UInt8) {$tmp71};
return $tmp72;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:135
uint8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
frost$core$Int32 $tmp76 = (frost$core$Int32) {$tmp75};
return $tmp76;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:141
uint8_t $tmp77 = param0.value;
int16_t $tmp78 = param1.value;
int32_t $tmp79 = ((int32_t) $tmp77) * ((int32_t) $tmp78);
frost$core$Int32 $tmp80 = (frost$core$Int32) {$tmp79};
return $tmp80;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:147
uint8_t $tmp81 = param0.value;
int32_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) * ((int64_t) $tmp82);
frost$core$Int64 $tmp84 = (frost$core$Int64) {$tmp83};
return $tmp84;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:153
uint8_t $tmp85 = param0.value;
uint8_t $tmp86 = param1.value;
uint32_t $tmp87 = ((uint32_t) $tmp85) * ((uint32_t) $tmp86);
frost$core$UInt32 $tmp88 = (frost$core$UInt32) {$tmp87};
return $tmp88;

}
frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:158
uint8_t $tmp89 = param0.value;
uint8_t $tmp90 = param1.value;
uint8_t $tmp91 = $tmp89 * $tmp90;
frost$core$UInt8 $tmp92 = (frost$core$UInt8) {$tmp91};
return $tmp92;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:164
uint8_t $tmp93 = param0.value;
uint16_t $tmp94 = param1.value;
uint32_t $tmp95 = ((uint32_t) $tmp93) * ((uint32_t) $tmp94);
frost$core$UInt32 $tmp96 = (frost$core$UInt32) {$tmp95};
return $tmp96;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:170
uint8_t $tmp97 = param0.value;
uint32_t $tmp98 = param1.value;
uint32_t $tmp99 = ((uint32_t) $tmp97) * $tmp98;
frost$core$UInt32 $tmp100 = (frost$core$UInt32) {$tmp99};
return $tmp100;

}
frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:176
uint8_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = ((uint64_t) $tmp101) * $tmp102;
frost$core$UInt64 $tmp104 = (frost$core$UInt64) {$tmp103};
return $tmp104;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:182
uint8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
frost$core$Int32 $tmp108 = (frost$core$Int32) {$tmp107};
return $tmp108;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:188
uint8_t $tmp109 = param0.value;
int16_t $tmp110 = param1.value;
int32_t $tmp111 = ((int32_t) $tmp109) / ((int32_t) $tmp110);
frost$core$Int32 $tmp112 = (frost$core$Int32) {$tmp111};
return $tmp112;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:194
uint8_t $tmp113 = param0.value;
int32_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) / ((int64_t) $tmp114);
frost$core$Int64 $tmp116 = (frost$core$Int64) {$tmp115};
return $tmp116;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:200
uint8_t $tmp117 = param0.value;
uint8_t $tmp118 = param1.value;
uint32_t $tmp119 = ((uint32_t) $tmp117) / ((uint32_t) $tmp118);
frost$core$UInt32 $tmp120 = (frost$core$UInt32) {$tmp119};
return $tmp120;

}
frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:205
uint8_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
uint8_t $tmp123 = $tmp121 / $tmp122;
frost$core$UInt8 $tmp124 = (frost$core$UInt8) {$tmp123};
return $tmp124;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:211
uint8_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
uint32_t $tmp127 = ((uint32_t) $tmp125) / ((uint32_t) $tmp126);
frost$core$UInt32 $tmp128 = (frost$core$UInt32) {$tmp127};
return $tmp128;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:217
uint8_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
uint32_t $tmp131 = ((uint32_t) $tmp129) / $tmp130;
frost$core$UInt32 $tmp132 = (frost$core$UInt32) {$tmp131};
return $tmp132;

}
frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:223
uint8_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
uint64_t $tmp135 = ((uint64_t) $tmp133) / $tmp134;
frost$core$UInt64 $tmp136 = (frost$core$UInt64) {$tmp135};
return $tmp136;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:229
uint8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
frost$core$Int32 $tmp140 = (frost$core$Int32) {$tmp139};
return $tmp140;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:235
uint8_t $tmp141 = param0.value;
int16_t $tmp142 = param1.value;
int32_t $tmp143 = ((int32_t) $tmp141) % ((int32_t) $tmp142);
frost$core$Int32 $tmp144 = (frost$core$Int32) {$tmp143};
return $tmp144;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:241
uint8_t $tmp145 = param0.value;
int32_t $tmp146 = param1.value;
int64_t $tmp147 = ((int64_t) $tmp145) % ((int64_t) $tmp146);
frost$core$Int64 $tmp148 = (frost$core$Int64) {$tmp147};
return $tmp148;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:247
uint8_t $tmp149 = param0.value;
uint8_t $tmp150 = param1.value;
uint32_t $tmp151 = ((uint32_t) $tmp149) % ((uint32_t) $tmp150);
frost$core$UInt32 $tmp152 = (frost$core$UInt32) {$tmp151};
return $tmp152;

}
frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:252
uint8_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
uint8_t $tmp155 = $tmp153 % $tmp154;
frost$core$UInt8 $tmp156 = (frost$core$UInt8) {$tmp155};
return $tmp156;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:258
uint8_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
uint32_t $tmp159 = ((uint32_t) $tmp157) % ((uint32_t) $tmp158);
frost$core$UInt32 $tmp160 = (frost$core$UInt32) {$tmp159};
return $tmp160;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:264
uint8_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
uint32_t $tmp163 = ((uint32_t) $tmp161) % $tmp162;
frost$core$UInt32 $tmp164 = (frost$core$UInt32) {$tmp163};
return $tmp164;

}
frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:270
uint8_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
uint64_t $tmp167 = ((uint64_t) $tmp165) % $tmp166;
frost$core$UInt64 $tmp168 = (frost$core$UInt64) {$tmp167};
return $tmp168;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:276
uint8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
frost$core$Real32 $tmp172 = (frost$core$Real32) {$tmp171};
return $tmp172;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:282
uint8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
frost$core$Real32 $tmp176 = (frost$core$Real32) {$tmp175};
return $tmp176;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:288
uint8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
frost$core$Real32 $tmp180 = (frost$core$Real32) {$tmp179};
return $tmp180;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:294
uint8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
frost$core$Real64 $tmp184 = (frost$core$Real64) {$tmp183};
return $tmp184;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:300
uint8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
frost$core$Real32 $tmp188 = (frost$core$Real32) {$tmp187};
return $tmp188;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:306
uint8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
frost$core$Real32 $tmp192 = (frost$core$Real32) {$tmp191};
return $tmp192;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:312
uint8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
frost$core$Real32 $tmp196 = (frost$core$Real32) {$tmp195};
return $tmp196;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:318
uint8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
frost$core$Real64 $tmp200 = (frost$core$Real64) {$tmp199};
return $tmp200;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:324
uint8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
frost$core$Real32 $tmp204 = (frost$core$Real32) {$tmp203};
return $tmp204;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:330
uint8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
frost$core$Real64 $tmp208 = (frost$core$Real64) {$tmp207};
return $tmp208;

}
frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:335
uint8_t $tmp209 = param0.value;
uint8_t $tmp210 = !$tmp209;
frost$core$UInt8 $tmp211 = (frost$core$UInt8) {$tmp210};
return $tmp211;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:341
uint8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
frost$core$Int32 $tmp215 = (frost$core$Int32) {$tmp214};
return $tmp215;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:347
uint8_t $tmp216 = param0.value;
int16_t $tmp217 = param1.value;
int32_t $tmp218 = ((int32_t) $tmp216) & ((int32_t) $tmp217);
frost$core$Int32 $tmp219 = (frost$core$Int32) {$tmp218};
return $tmp219;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:353
uint8_t $tmp220 = param0.value;
int32_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & $tmp221;
frost$core$Int32 $tmp223 = (frost$core$Int32) {$tmp222};
return $tmp223;

}
frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:359
uint8_t $tmp224 = param0.value;
int64_t $tmp225 = param1.value;
int64_t $tmp226 = ((int64_t) $tmp224) & $tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {$tmp226};
return $tmp227;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:365
uint8_t $tmp228 = param0.value;
uint8_t $tmp229 = param1.value;
uint32_t $tmp230 = ((uint32_t) $tmp228) & ((uint32_t) $tmp229);
frost$core$UInt32 $tmp231 = (frost$core$UInt32) {$tmp230};
return $tmp231;

}
frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:370
uint8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint8_t $tmp234 = $tmp232 & $tmp233;
frost$core$UInt8 $tmp235 = (frost$core$UInt8) {$tmp234};
return $tmp235;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:376
uint8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
frost$core$UInt32 $tmp239 = (frost$core$UInt32) {$tmp238};
return $tmp239;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:382
uint8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
frost$core$UInt32 $tmp243 = (frost$core$UInt32) {$tmp242};
return $tmp243;

}
frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:388
uint8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
frost$core$UInt64 $tmp247 = (frost$core$UInt64) {$tmp246};
return $tmp247;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:394
uint8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
frost$core$Int32 $tmp251 = (frost$core$Int32) {$tmp250};
return $tmp251;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:400
uint8_t $tmp252 = param0.value;
int16_t $tmp253 = param1.value;
int32_t $tmp254 = ((int32_t) $tmp252) | ((int32_t) $tmp253);
frost$core$Int32 $tmp255 = (frost$core$Int32) {$tmp254};
return $tmp255;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:406
uint8_t $tmp256 = param0.value;
int32_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | $tmp257;
frost$core$Int32 $tmp259 = (frost$core$Int32) {$tmp258};
return $tmp259;

}
frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:412
uint8_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
int64_t $tmp262 = ((int64_t) $tmp260) | $tmp261;
frost$core$Int64 $tmp263 = (frost$core$Int64) {$tmp262};
return $tmp263;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:418
uint8_t $tmp264 = param0.value;
uint8_t $tmp265 = param1.value;
uint32_t $tmp266 = ((uint32_t) $tmp264) | ((uint32_t) $tmp265);
frost$core$UInt32 $tmp267 = (frost$core$UInt32) {$tmp266};
return $tmp267;

}
frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:423
uint8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint8_t $tmp270 = $tmp268 | $tmp269;
frost$core$UInt8 $tmp271 = (frost$core$UInt8) {$tmp270};
return $tmp271;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:429
uint8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
frost$core$UInt32 $tmp275 = (frost$core$UInt32) {$tmp274};
return $tmp275;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:435
uint8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
frost$core$UInt32 $tmp279 = (frost$core$UInt32) {$tmp278};
return $tmp279;

}
frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:441
uint8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
frost$core$UInt64 $tmp283 = (frost$core$UInt64) {$tmp282};
return $tmp283;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:447
uint8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
frost$core$Int32 $tmp287 = (frost$core$Int32) {$tmp286};
return $tmp287;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:453
uint8_t $tmp288 = param0.value;
int16_t $tmp289 = param1.value;
int32_t $tmp290 = ((int32_t) $tmp288) ^ ((int32_t) $tmp289);
frost$core$Int32 $tmp291 = (frost$core$Int32) {$tmp290};
return $tmp291;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:459
uint8_t $tmp292 = param0.value;
int32_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ $tmp293;
frost$core$Int32 $tmp295 = (frost$core$Int32) {$tmp294};
return $tmp295;

}
frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:465
uint8_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
int64_t $tmp298 = ((int64_t) $tmp296) ^ $tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {$tmp298};
return $tmp299;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:471
uint8_t $tmp300 = param0.value;
uint8_t $tmp301 = param1.value;
uint32_t $tmp302 = ((uint32_t) $tmp300) ^ ((uint32_t) $tmp301);
frost$core$UInt32 $tmp303 = (frost$core$UInt32) {$tmp302};
return $tmp303;

}
frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:476
uint8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint8_t $tmp306 = $tmp304 ^ $tmp305;
frost$core$UInt8 $tmp307 = (frost$core$UInt8) {$tmp306};
return $tmp307;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:482
uint8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
frost$core$UInt32 $tmp311 = (frost$core$UInt32) {$tmp310};
return $tmp311;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:488
uint8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
frost$core$UInt32 $tmp315 = (frost$core$UInt32) {$tmp314};
return $tmp315;

}
frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:494
uint8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
frost$core$UInt64 $tmp319 = (frost$core$UInt64) {$tmp318};
return $tmp319;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:500
uint8_t $tmp320 = param0.value;
uint8_t $tmp321 = param1.value;
uint32_t $tmp322 = ((uint32_t) $tmp320) << ((uint32_t) $tmp321);
frost$core$UInt32 $tmp323 = (frost$core$UInt32) {$tmp322};
return $tmp323;

}
frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:505
uint8_t $tmp324 = param0.value;
uint8_t $tmp325 = param1.value;
uint8_t $tmp326 = $tmp324 << $tmp325;
frost$core$UInt8 $tmp327 = (frost$core$UInt8) {$tmp326};
return $tmp327;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:511
uint8_t $tmp328 = param0.value;
uint8_t $tmp329 = param1.value;
uint32_t $tmp330 = ((uint32_t) $tmp328) >> ((uint32_t) $tmp329);
frost$core$UInt32 $tmp331 = (frost$core$UInt32) {$tmp330};
return $tmp331;

}
frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:516
uint8_t $tmp332 = param0.value;
uint8_t $tmp333 = param1.value;
uint8_t $tmp334 = $tmp332 >> $tmp333;
frost$core$UInt8 $tmp335 = (frost$core$UInt8) {$tmp334};
return $tmp335;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:522
uint8_t $tmp336 = param0.value;
int8_t $tmp337 = param1.value;
bool $tmp338 = ((int16_t) $tmp336) == ((int16_t) $tmp337);
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
return $tmp339;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:528
uint8_t $tmp340 = param0.value;
int16_t $tmp341 = param1.value;
bool $tmp342 = ((int32_t) $tmp340) == ((int32_t) $tmp341);
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
return $tmp343;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:534
uint8_t $tmp344 = param0.value;
int32_t $tmp345 = param1.value;
bool $tmp346 = ((int64_t) $tmp344) == ((int64_t) $tmp345);
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
return $tmp347;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:541
uint8_t $tmp348 = param0.value;
uint8_t $tmp349 = param1.value;
bool $tmp350 = $tmp348 == $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
return $tmp351;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:547
uint8_t $tmp352 = param0.value;
uint16_t $tmp353 = param1.value;
bool $tmp354 = ((uint16_t) $tmp352) == $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
return $tmp355;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:553
uint8_t $tmp356 = param0.value;
uint32_t $tmp357 = param1.value;
bool $tmp358 = ((uint32_t) $tmp356) == $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
return $tmp359;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:559
uint8_t $tmp360 = param0.value;
uint64_t $tmp361 = param1.value;
bool $tmp362 = ((uint64_t) $tmp360) == $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
return $tmp363;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:565
uint8_t $tmp364 = param0.value;
int8_t $tmp365 = param1.value;
bool $tmp366 = ((int16_t) $tmp364) != ((int16_t) $tmp365);
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
return $tmp367;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:571
uint8_t $tmp368 = param0.value;
int16_t $tmp369 = param1.value;
bool $tmp370 = ((int32_t) $tmp368) != ((int32_t) $tmp369);
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
return $tmp371;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:577
uint8_t $tmp372 = param0.value;
int32_t $tmp373 = param1.value;
bool $tmp374 = ((int64_t) $tmp372) != ((int64_t) $tmp373);
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
return $tmp375;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:584
uint8_t $tmp376 = param0.value;
uint8_t $tmp377 = param1.value;
bool $tmp378 = $tmp376 != $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
return $tmp379;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:590
uint8_t $tmp380 = param0.value;
uint16_t $tmp381 = param1.value;
bool $tmp382 = ((uint16_t) $tmp380) != $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
return $tmp383;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:596
uint8_t $tmp384 = param0.value;
uint32_t $tmp385 = param1.value;
bool $tmp386 = ((uint32_t) $tmp384) != $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
return $tmp387;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:602
uint8_t $tmp388 = param0.value;
uint64_t $tmp389 = param1.value;
bool $tmp390 = ((uint64_t) $tmp388) != $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
return $tmp391;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:608
uint8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = ((int16_t) $tmp392) < ((int16_t) $tmp393);
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
return $tmp395;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:614
uint8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int32_t) $tmp396) < ((int32_t) $tmp397);
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
return $tmp399;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:620
uint8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int64_t) $tmp400) < ((int64_t) $tmp401);
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
return $tmp403;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:627
uint8_t $tmp404 = param0.value;
uint8_t $tmp405 = param1.value;
bool $tmp406 = $tmp404 < $tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
return $tmp407;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:633
uint8_t $tmp408 = param0.value;
uint16_t $tmp409 = param1.value;
bool $tmp410 = ((uint16_t) $tmp408) < $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
return $tmp411;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:639
uint8_t $tmp412 = param0.value;
uint32_t $tmp413 = param1.value;
bool $tmp414 = ((uint32_t) $tmp412) < $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
return $tmp415;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:645
uint8_t $tmp416 = param0.value;
uint64_t $tmp417 = param1.value;
bool $tmp418 = ((uint64_t) $tmp416) < $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
return $tmp419;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:651
uint8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = ((int16_t) $tmp420) > ((int16_t) $tmp421);
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
return $tmp423;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:657
uint8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int32_t) $tmp424) > ((int32_t) $tmp425);
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
return $tmp427;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:663
uint8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int64_t) $tmp428) > ((int64_t) $tmp429);
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
return $tmp431;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:670
uint8_t $tmp432 = param0.value;
uint8_t $tmp433 = param1.value;
bool $tmp434 = $tmp432 > $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
return $tmp435;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:676
uint8_t $tmp436 = param0.value;
uint16_t $tmp437 = param1.value;
bool $tmp438 = ((uint16_t) $tmp436) > $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
return $tmp439;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:682
uint8_t $tmp440 = param0.value;
uint32_t $tmp441 = param1.value;
bool $tmp442 = ((uint32_t) $tmp440) > $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
return $tmp443;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:688
uint8_t $tmp444 = param0.value;
uint64_t $tmp445 = param1.value;
bool $tmp446 = ((uint64_t) $tmp444) > $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
return $tmp447;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:694
uint8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = ((int16_t) $tmp448) >= ((int16_t) $tmp449);
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
return $tmp451;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:700
uint8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int32_t) $tmp452) >= ((int32_t) $tmp453);
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
return $tmp455;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:706
uint8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int64_t) $tmp456) >= ((int64_t) $tmp457);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
return $tmp459;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:713
uint8_t $tmp460 = param0.value;
uint8_t $tmp461 = param1.value;
bool $tmp462 = $tmp460 >= $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
return $tmp463;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:719
uint8_t $tmp464 = param0.value;
uint16_t $tmp465 = param1.value;
bool $tmp466 = ((uint16_t) $tmp464) >= $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
return $tmp467;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:725
uint8_t $tmp468 = param0.value;
uint32_t $tmp469 = param1.value;
bool $tmp470 = ((uint32_t) $tmp468) >= $tmp469;
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
return $tmp471;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:731
uint8_t $tmp472 = param0.value;
uint64_t $tmp473 = param1.value;
bool $tmp474 = ((uint64_t) $tmp472) >= $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
return $tmp475;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:737
uint8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = ((int16_t) $tmp476) <= ((int16_t) $tmp477);
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
return $tmp479;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:743
uint8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int32_t) $tmp480) <= ((int32_t) $tmp481);
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
return $tmp483;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:749
uint8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int64_t) $tmp484) <= ((int64_t) $tmp485);
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
return $tmp487;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:756
uint8_t $tmp488 = param0.value;
uint8_t $tmp489 = param1.value;
bool $tmp490 = $tmp488 <= $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
return $tmp491;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:762
uint8_t $tmp492 = param0.value;
uint16_t $tmp493 = param1.value;
bool $tmp494 = ((uint16_t) $tmp492) <= $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
return $tmp495;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:768
uint8_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((uint32_t) $tmp496) <= $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
return $tmp499;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:774
uint8_t $tmp500 = param0.value;
uint64_t $tmp501 = param1.value;
bool $tmp502 = ((uint64_t) $tmp500) <= $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
return $tmp503;

}
frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:780
uint8_t $tmp504 = param0.value;
int8_t $tmp505 = param1.value;
bool $tmp506 = ((int16_t) $tmp504) < ((int16_t) $tmp505);
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:781
uint8_t $tmp509 = param0.value;
frost$core$Int16 $tmp510 = (frost$core$Int16) {((int16_t) $tmp509)};
return $tmp510;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:783
int8_t $tmp511 = param1.value;
frost$core$Int16 $tmp512 = (frost$core$Int16) {((int16_t) $tmp511)};
return $tmp512;

}
frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:789
uint8_t $tmp513 = param0.value;
int16_t $tmp514 = param1.value;
bool $tmp515 = ((int32_t) $tmp513) < ((int32_t) $tmp514);
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:790
uint8_t $tmp518 = param0.value;
frost$core$Int32 $tmp519 = (frost$core$Int32) {((int32_t) $tmp518)};
return $tmp519;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:792
int16_t $tmp520 = param1.value;
frost$core$Int32 $tmp521 = (frost$core$Int32) {((int32_t) $tmp520)};
return $tmp521;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:798
uint8_t $tmp522 = param0.value;
int32_t $tmp523 = param1.value;
bool $tmp524 = ((int64_t) $tmp522) < ((int64_t) $tmp523);
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:799
uint8_t $tmp527 = param0.value;
frost$core$Int64 $tmp528 = (frost$core$Int64) {((int64_t) $tmp527)};
return $tmp528;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:801
int32_t $tmp529 = param1.value;
frost$core$Int64 $tmp530 = (frost$core$Int64) {((int64_t) $tmp529)};
return $tmp530;

}
frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:808
uint8_t $tmp531 = param0.value;
uint8_t $tmp532 = param1.value;
bool $tmp533 = $tmp531 < $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:809
uint8_t $tmp536 = param0.value;
frost$core$UInt8 $tmp537 = (frost$core$UInt8) {$tmp536};
return $tmp537;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:811
uint8_t $tmp538 = param1.value;
frost$core$UInt8 $tmp539 = (frost$core$UInt8) {$tmp538};
return $tmp539;

}
frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:817
uint8_t $tmp540 = param0.value;
uint16_t $tmp541 = param1.value;
bool $tmp542 = ((uint16_t) $tmp540) < $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:818
uint8_t $tmp545 = param0.value;
frost$core$UInt16 $tmp546 = (frost$core$UInt16) {((uint16_t) $tmp545)};
return $tmp546;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:820
uint16_t $tmp547 = param1.value;
frost$core$UInt16 $tmp548 = (frost$core$UInt16) {$tmp547};
return $tmp548;

}
frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:826
uint8_t $tmp549 = param0.value;
uint32_t $tmp550 = param1.value;
bool $tmp551 = ((uint32_t) $tmp549) < $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:827
uint8_t $tmp554 = param0.value;
frost$core$UInt32 $tmp555 = (frost$core$UInt32) {((uint32_t) $tmp554)};
return $tmp555;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:829
uint32_t $tmp556 = param1.value;
frost$core$UInt32 $tmp557 = (frost$core$UInt32) {$tmp556};
return $tmp557;

}
frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:835
uint8_t $tmp558 = param0.value;
uint64_t $tmp559 = param1.value;
bool $tmp560 = ((uint64_t) $tmp558) < $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:836
uint8_t $tmp563 = param0.value;
frost$core$UInt64 $tmp564 = (frost$core$UInt64) {((uint64_t) $tmp563)};
return $tmp564;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:838
uint64_t $tmp565 = param1.value;
frost$core$UInt64 $tmp566 = (frost$core$UInt64) {$tmp565};
return $tmp566;

}
frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:844
uint8_t $tmp567 = param0.value;
int8_t $tmp568 = param1.value;
bool $tmp569 = ((int16_t) $tmp567) > ((int16_t) $tmp568);
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:845
uint8_t $tmp572 = param0.value;
frost$core$Int16 $tmp573 = (frost$core$Int16) {((int16_t) $tmp572)};
return $tmp573;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:847
int8_t $tmp574 = param1.value;
frost$core$Int16 $tmp575 = (frost$core$Int16) {((int16_t) $tmp574)};
return $tmp575;

}
frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:853
uint8_t $tmp576 = param0.value;
int16_t $tmp577 = param1.value;
bool $tmp578 = ((int32_t) $tmp576) > ((int32_t) $tmp577);
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:854
uint8_t $tmp581 = param0.value;
frost$core$Int32 $tmp582 = (frost$core$Int32) {((int32_t) $tmp581)};
return $tmp582;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:856
int16_t $tmp583 = param1.value;
frost$core$Int32 $tmp584 = (frost$core$Int32) {((int32_t) $tmp583)};
return $tmp584;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:862
uint8_t $tmp585 = param0.value;
int32_t $tmp586 = param1.value;
bool $tmp587 = ((int64_t) $tmp585) > ((int64_t) $tmp586);
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:863
uint8_t $tmp590 = param0.value;
frost$core$Int64 $tmp591 = (frost$core$Int64) {((int64_t) $tmp590)};
return $tmp591;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:865
int32_t $tmp592 = param1.value;
frost$core$Int64 $tmp593 = (frost$core$Int64) {((int64_t) $tmp592)};
return $tmp593;

}
frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:872
uint8_t $tmp594 = param0.value;
uint8_t $tmp595 = param1.value;
bool $tmp596 = $tmp594 > $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:873
uint8_t $tmp599 = param0.value;
frost$core$UInt8 $tmp600 = (frost$core$UInt8) {$tmp599};
return $tmp600;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:875
uint8_t $tmp601 = param1.value;
frost$core$UInt8 $tmp602 = (frost$core$UInt8) {$tmp601};
return $tmp602;

}
frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:881
uint8_t $tmp603 = param0.value;
uint16_t $tmp604 = param1.value;
bool $tmp605 = ((uint16_t) $tmp603) > $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:882
uint8_t $tmp608 = param0.value;
frost$core$UInt16 $tmp609 = (frost$core$UInt16) {((uint16_t) $tmp608)};
return $tmp609;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:884
uint16_t $tmp610 = param1.value;
frost$core$UInt16 $tmp611 = (frost$core$UInt16) {$tmp610};
return $tmp611;

}
frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:890
uint8_t $tmp612 = param0.value;
uint32_t $tmp613 = param1.value;
bool $tmp614 = ((uint32_t) $tmp612) > $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:891
uint8_t $tmp617 = param0.value;
frost$core$UInt32 $tmp618 = (frost$core$UInt32) {((uint32_t) $tmp617)};
return $tmp618;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:893
uint32_t $tmp619 = param1.value;
frost$core$UInt32 $tmp620 = (frost$core$UInt32) {$tmp619};
return $tmp620;

}
frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:899
uint8_t $tmp621 = param0.value;
uint64_t $tmp622 = param1.value;
bool $tmp623 = ((uint64_t) $tmp621) > $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:900
uint8_t $tmp626 = param0.value;
frost$core$UInt64 $tmp627 = (frost$core$UInt64) {((uint64_t) $tmp626)};
return $tmp627;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:902
uint64_t $tmp628 = param1.value;
frost$core$UInt64 $tmp629 = (frost$core$UInt64) {$tmp628};
return $tmp629;

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$Range$LTfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$Range$LTfrost$core$UInt8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:907
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp630 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
frost$core$UInt8 $tmp631 = param0.min;
frost$core$UInt8 $tmp632 = param0.max;
frost$core$UInt8 $tmp633 = (frost$core$UInt8) {1u};
frost$core$Bit $tmp634 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT $tmp635 = frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$init$frost$core$UInt8$frost$core$UInt8$frost$core$UInt8$frost$core$Bit($tmp631, $tmp632, $tmp633, $tmp634);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp630, $tmp635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp630)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
return ((frost$collections$ListView*) $tmp630);

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:912
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp636 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp636, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp636)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
return ((frost$collections$ListView*) $tmp636);

}
frost$core$Bit frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp637 = (frost$core$Int64) {0u};
int64_t $tmp638 = param1.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 >= $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block3; else goto block2;
block3:;
frost$core$UInt8$wrapper* $tmp643;
$tmp643 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp643->value = param0;
ITable* $tmp644 = ((frost$collections$CollectionView*) $tmp643)->$class->itable;
while ($tmp644->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp644 = $tmp644->next;
}
$fn646 $tmp645 = $tmp644->methods[0];
frost$core$Int64 $tmp647 = $tmp645(((frost$collections$CollectionView*) $tmp643));
int64_t $tmp648 = param1.value;
int64_t $tmp649 = $tmp647.value;
bool $tmp650 = $tmp648 < $tmp649;
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp643)));
if ($tmp652) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp653 = (frost$core$Int64) {917u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s654, $tmp653, &$s655);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:918
frost$core$Int64 $tmp656 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from UInt8.frost:918:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:209
int64_t $tmp657 = $tmp656.value;
int64_t $tmp658 = param1.value;
int64_t $tmp659 = $tmp657 << $tmp658;
frost$core$Int64 $tmp660 = (frost$core$Int64) {$tmp659};
// begin inline call to function frost.core.UInt8.&&(other:frost.core.Int64):frost.core.Int64 from UInt8.frost:918:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:359
uint8_t $tmp661 = param0.value;
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = ((int64_t) $tmp661) & $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {$tmp663};
frost$core$Int64 $tmp665 = (frost$core$Int64) {0u};
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
bool $tmp668 = $tmp666 != $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
return $tmp669;

}
frost$core$Int64 frost$core$UInt8$get_count$R$frost$core$Int64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:924
frost$core$Int64 $tmp670 = (frost$core$Int64) {8u};
return $tmp670;

}
frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:934
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp671 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:934:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:992
uint8_t $tmp672 = param0.value;
frost$core$UInt64 $tmp673 = (frost$core$UInt64) {((uint64_t) $tmp672)};
frost$core$UInt64 $tmp674 = (frost$core$UInt64) {128u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp671, $tmp673, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp671)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
return ((frost$collections$Iterator*) $tmp671);

}
frost$core$Int64 frost$core$UInt8$get_hash$R$frost$core$Int64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:939
uint8_t $tmp675 = param0.value;
frost$core$Int64 $tmp676 = (frost$core$Int64) {((int64_t) $tmp675)};
return $tmp676;

}
frost$core$UInt8$nullable frost$core$UInt8$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt8$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp677 = (frost$core$Int64) {2u};
int64_t $tmp678 = param1.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 >= $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {36u};
int64_t $tmp684 = param1.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 <= $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp689 = (frost$core$Int64) {945u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s690, $tmp689, &$s691);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:946
frost$core$UInt64$nullable $tmp692 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp692;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:947
frost$core$UInt64$nullable $tmp693 = *(&local0);
frost$core$Bit $tmp694 = (frost$core$Bit) {!$tmp693.nonnull};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:948
return ((frost$core$UInt8$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:950
frost$core$UInt64$nullable $tmp696 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt8.frost:950:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:506
uint64_t $tmp697 = ((frost$core$UInt64) $tmp696.value).value;
frost$core$UInt8 $tmp698 = (frost$core$UInt8) {((uint8_t) $tmp697)};
return ((frost$core$UInt8$nullable) { $tmp698, true });

}
frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:956
uint8_t $tmp699 = param0.value;
frost$core$Int8 $tmp700 = (frost$core$Int8) {((int8_t) $tmp699)};
return $tmp700;

}
frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:962
uint8_t $tmp701 = param0.value;
frost$core$Int16 $tmp702 = (frost$core$Int16) {((int16_t) $tmp701)};
return $tmp702;

}
frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:968
uint8_t $tmp703 = param0.value;
frost$core$Int32 $tmp704 = (frost$core$Int32) {((int32_t) $tmp703)};
return $tmp704;

}
frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:974
uint8_t $tmp705 = param0.value;
frost$core$Int64 $tmp706 = (frost$core$Int64) {((int64_t) $tmp705)};
return $tmp706;

}
frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:980
uint8_t $tmp707 = param0.value;
frost$core$UInt16 $tmp708 = (frost$core$UInt16) {((uint16_t) $tmp707)};
return $tmp708;

}
frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:986
uint8_t $tmp709 = param0.value;
frost$core$UInt32 $tmp710 = (frost$core$UInt32) {((uint32_t) $tmp709)};
return $tmp710;

}
frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:992
uint8_t $tmp711 = param0.value;
frost$core$UInt64 $tmp712 = (frost$core$UInt64) {((uint64_t) $tmp711)};
return $tmp712;

}
frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:998
uint8_t $tmp713 = param0.value;
frost$core$Real32 $tmp714 = (frost$core$Real32) {((float) $tmp713)};
return $tmp714;

}
frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1004
uint8_t $tmp715 = param0.value;
frost$core$Real64 $tmp716 = (frost$core$Real64) {((double) $tmp715)};
return $tmp716;

}
frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String(frost$core$UInt8 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt8 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1010
frost$core$Int64 $tmp717 = (frost$core$Int64) {3u};
*(&local0) = $tmp717;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1011
frost$core$Int64 $tmp718 = *(&local0);
int64_t $tmp719 = $tmp718.value;
frost$core$Char8* $tmp720 = ((frost$core$Char8*) frostAlloc($tmp719 * 1));
*(&local1) = $tmp720;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1012
frost$core$Int64 $tmp721 = *(&local0);
frost$core$Int64 $tmp722 = (frost$core$Int64) {1u};
int64_t $tmp723 = $tmp721.value;
int64_t $tmp724 = $tmp722.value;
int64_t $tmp725 = $tmp723 - $tmp724;
frost$core$Int64 $tmp726 = (frost$core$Int64) {$tmp725};
*(&local2) = $tmp726;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1013
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1014
frost$core$UInt8 $tmp727 = *(&local3);
frost$core$UInt8 $tmp728 = (frost$core$UInt8) {0u};
uint8_t $tmp729 = $tmp727.value;
uint8_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 >= $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1015
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1016
frost$core$Char8* $tmp734 = *(&local1);
frost$core$Int64 $tmp735 = *(&local2);
frost$core$UInt8 $tmp736 = *(&local3);
frost$core$UInt8 $tmp737 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1016:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:247
uint8_t $tmp738 = $tmp736.value;
uint8_t $tmp739 = $tmp737.value;
uint32_t $tmp740 = ((uint32_t) $tmp738) % ((uint32_t) $tmp739);
frost$core$UInt32 $tmp741 = (frost$core$UInt32) {$tmp740};
frost$core$UInt32 $tmp742 = (frost$core$UInt32) {48u};
uint32_t $tmp743 = $tmp741.value;
uint32_t $tmp744 = $tmp742.value;
uint32_t $tmp745 = $tmp743 + $tmp744;
frost$core$UInt32 $tmp746 = (frost$core$UInt32) {$tmp745};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1016:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:750
uint32_t $tmp747 = $tmp746.value;
frost$core$UInt8 $tmp748 = (frost$core$UInt8) {((uint8_t) $tmp747)};
frost$core$Char8 $tmp749 = frost$core$Char8$init$frost$core$UInt8($tmp748);
int64_t $tmp750 = $tmp735.value;
$tmp734[$tmp750] = $tmp749;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1017
frost$core$UInt8 $tmp751 = *(&local3);
frost$core$UInt32 $tmp752 = frost$core$UInt32$init$frost$core$UInt8($tmp751);
frost$core$UInt32 $tmp753 = (frost$core$UInt32) {10u};
uint32_t $tmp754 = $tmp752.value;
uint32_t $tmp755 = $tmp753.value;
uint32_t $tmp756 = $tmp754 / $tmp755;
frost$core$UInt32 $tmp757 = (frost$core$UInt32) {$tmp756};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1017:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:750
uint32_t $tmp758 = $tmp757.value;
frost$core$UInt8 $tmp759 = (frost$core$UInt8) {((uint8_t) $tmp758)};
*(&local3) = $tmp759;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1018
frost$core$Int64 $tmp760 = *(&local2);
frost$core$Int64 $tmp761 = (frost$core$Int64) {1u};
int64_t $tmp762 = $tmp760.value;
int64_t $tmp763 = $tmp761.value;
int64_t $tmp764 = $tmp762 - $tmp763;
frost$core$Int64 $tmp765 = (frost$core$Int64) {$tmp764};
*(&local2) = $tmp765;
frost$core$UInt8 $tmp766 = *(&local3);
frost$core$UInt8 $tmp767 = (frost$core$UInt8) {0u};
uint8_t $tmp768 = $tmp766.value;
uint8_t $tmp769 = $tmp767.value;
bool $tmp770 = $tmp768 > $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1021
frost$core$Int64 $tmp773 = *(&local2);
frost$core$Int64 $tmp774 = (frost$core$Int64) {1u};
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775 + $tmp776;
frost$core$Int64 $tmp778 = (frost$core$Int64) {$tmp777};
*(&local2) = $tmp778;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1024
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1025
frost$core$Char8* $tmp779 = *(&local1);
frost$core$Int64 $tmp780 = *(&local2);
frost$core$UInt32 $tmp781 = (frost$core$UInt32) {48u};
frost$core$UInt8 $tmp782 = *(&local3);
frost$core$UInt8 $tmp783 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1025:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:247
uint8_t $tmp784 = $tmp782.value;
uint8_t $tmp785 = $tmp783.value;
uint32_t $tmp786 = ((uint32_t) $tmp784) % ((uint32_t) $tmp785);
frost$core$UInt32 $tmp787 = (frost$core$UInt32) {$tmp786};
uint32_t $tmp788 = $tmp781.value;
uint32_t $tmp789 = $tmp787.value;
uint32_t $tmp790 = $tmp788 - $tmp789;
frost$core$UInt32 $tmp791 = (frost$core$UInt32) {$tmp790};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1025:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:750
uint32_t $tmp792 = $tmp791.value;
frost$core$UInt8 $tmp793 = (frost$core$UInt8) {((uint8_t) $tmp792)};
frost$core$Char8 $tmp794 = frost$core$Char8$init$frost$core$UInt8($tmp793);
int64_t $tmp795 = $tmp780.value;
$tmp779[$tmp795] = $tmp794;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1026
frost$core$UInt8 $tmp796 = *(&local3);
frost$core$UInt32 $tmp797 = frost$core$UInt32$init$frost$core$UInt8($tmp796);
frost$core$UInt32 $tmp798 = (frost$core$UInt32) {10u};
uint32_t $tmp799 = $tmp797.value;
uint32_t $tmp800 = $tmp798.value;
uint32_t $tmp801 = $tmp799 / $tmp800;
frost$core$UInt32 $tmp802 = (frost$core$UInt32) {$tmp801};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1026:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:750
uint32_t $tmp803 = $tmp802.value;
frost$core$UInt8 $tmp804 = (frost$core$UInt8) {((uint8_t) $tmp803)};
*(&local3) = $tmp804;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1027
frost$core$Int64 $tmp805 = *(&local2);
frost$core$Int64 $tmp806 = (frost$core$Int64) {1u};
int64_t $tmp807 = $tmp805.value;
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807 - $tmp808;
frost$core$Int64 $tmp810 = (frost$core$Int64) {$tmp809};
*(&local2) = $tmp810;
frost$core$UInt8 $tmp811 = *(&local3);
frost$core$UInt8 $tmp812 = (frost$core$UInt8) {0u};
uint8_t $tmp813 = $tmp811.value;
uint8_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 < $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1030
frost$core$Char8* $tmp818 = *(&local1);
frost$core$Int64 $tmp819 = *(&local2);
frost$core$UInt8 $tmp820 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp821 = frost$core$Char8$init$frost$core$UInt8($tmp820);
int64_t $tmp822 = $tmp819.value;
$tmp818[$tmp822] = $tmp821;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1032
frost$core$Int64 $tmp823 = *(&local0);
frost$core$Int64 $tmp824 = *(&local2);
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824.value;
int64_t $tmp827 = $tmp825 - $tmp826;
frost$core$Int64 $tmp828 = (frost$core$Int64) {$tmp827};
*(&local4) = $tmp828;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1033
frost$core$Int64 $tmp829 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp830 = *(&local4);
frost$core$Bit $tmp831 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp832 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp829, $tmp830, $tmp831);
frost$core$Int64 $tmp833 = $tmp832.min;
*(&local5) = $tmp833;
frost$core$Int64 $tmp834 = $tmp832.max;
frost$core$Bit $tmp835 = $tmp832.inclusive;
bool $tmp836 = $tmp835.value;
frost$core$Int64 $tmp837 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp838 = $tmp837.value;
frost$core$UInt64 $tmp839 = (frost$core$UInt64) {((uint64_t) $tmp838)};
if ($tmp836) goto block20; else goto block21;
block20:;
int64_t $tmp840 = $tmp833.value;
int64_t $tmp841 = $tmp834.value;
bool $tmp842 = $tmp840 <= $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block17; else goto block18;
block21:;
int64_t $tmp845 = $tmp833.value;
int64_t $tmp846 = $tmp834.value;
bool $tmp847 = $tmp845 < $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1034
frost$core$Char8* $tmp850 = *(&local1);
frost$core$Int64 $tmp851 = *(&local5);
frost$core$Char8* $tmp852 = *(&local1);
frost$core$Int64 $tmp853 = *(&local5);
frost$core$Int64 $tmp854 = *(&local2);
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855 + $tmp856;
frost$core$Int64 $tmp858 = (frost$core$Int64) {$tmp857};
int64_t $tmp859 = $tmp858.value;
frost$core$Char8 $tmp860 = $tmp852[$tmp859];
int64_t $tmp861 = $tmp851.value;
$tmp850[$tmp861] = $tmp860;
frost$core$Int64 $tmp862 = *(&local5);
int64_t $tmp863 = $tmp834.value;
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863 - $tmp864;
frost$core$Int64 $tmp866 = (frost$core$Int64) {$tmp865};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp867 = $tmp866.value;
frost$core$UInt64 $tmp868 = (frost$core$UInt64) {((uint64_t) $tmp867)};
if ($tmp836) goto block24; else goto block25;
block24:;
uint64_t $tmp869 = $tmp868.value;
uint64_t $tmp870 = $tmp839.value;
bool $tmp871 = $tmp869 >= $tmp870;
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block22; else goto block18;
block25:;
uint64_t $tmp874 = $tmp868.value;
uint64_t $tmp875 = $tmp839.value;
bool $tmp876 = $tmp874 > $tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block22; else goto block18;
block22:;
int64_t $tmp879 = $tmp862.value;
int64_t $tmp880 = $tmp837.value;
int64_t $tmp881 = $tmp879 + $tmp880;
frost$core$Int64 $tmp882 = (frost$core$Int64) {$tmp881};
*(&local5) = $tmp882;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1036
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp883 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp884 = *(&local1);
frost$core$Int64 $tmp885 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp883, $tmp884, $tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
return $tmp883;

}
frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String(frost$core$UInt8 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:1042
frost$core$Bit $tmp886 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:1042:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:992
uint8_t $tmp887 = param0.value;
frost$core$UInt64 $tmp888 = (frost$core$UInt64) {((uint64_t) $tmp887)};
frost$core$UInt64 $tmp889 = (frost$core$UInt64) {255u};
frost$core$String* $tmp890 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp886, $tmp888, $tmp889, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
return $tmp890;

}
void frost$core$UInt8$cleanup(frost$core$UInt8 param0) {

return;

}

