#include "frost/core/UInt8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/collections/ListView.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
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

__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_count$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt8$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_hash$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
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
__attribute__((weak)) frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt8$format$frost$core$String$R$frost$core$String(((frost$core$UInt8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHL$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHR$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

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

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$_frost$collections$CollectionView, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$_frost$collections$Iterable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$_frost$core$Equatable, { frost$core$UInt8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt8$_frost$collections$Key, { frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$_frost$core$Comparable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt8$class_type frost$core$UInt8$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$_frost$core$Formattable, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SHL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SHR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt8$get_hash$R$frost$core$Int64$shim, frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$CollectionView, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Iterable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Equatable, { frost$core$UInt8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Key, { frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Comparable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt8$wrapperclass_type frost$core$UInt8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Formattable, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn702)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, 3554322232684670657, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, 9219461645866893504, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, 3554322232684670657, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f", 121, 8429988720058511240, NULL };

frost$core$UInt8 frost$core$UInt8$init$builtin_uint8(uint8_t param0) {

frost$core$UInt8 local0;
// line 30
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 36
uint8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = frost$core$Int32$init$builtin_int32($tmp8);
return $tmp9;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 42
uint8_t $tmp10 = param0.value;
int16_t $tmp11 = param1.value;
int32_t $tmp12 = ((int32_t) $tmp10) + ((int32_t) $tmp11);
frost$core$Int32 $tmp13 = frost$core$Int32$init$builtin_int32($tmp12);
return $tmp13;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 48
uint8_t $tmp14 = param0.value;
int32_t $tmp15 = param1.value;
int64_t $tmp16 = ((int64_t) $tmp14) + ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = frost$core$Int64$init$builtin_int64($tmp16);
return $tmp17;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 54
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
uint32_t $tmp20 = ((uint32_t) $tmp18) + ((uint32_t) $tmp19);
frost$core$UInt32 $tmp21 = frost$core$UInt32$init$builtin_uint32($tmp20);
return $tmp21;

}
frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 59
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
uint8_t $tmp24 = $tmp22 + $tmp23;
frost$core$UInt8 $tmp25 = frost$core$UInt8$init$builtin_uint8($tmp24);
return $tmp25;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 65
uint8_t $tmp26 = param0.value;
uint16_t $tmp27 = param1.value;
uint32_t $tmp28 = ((uint32_t) $tmp26) + ((uint32_t) $tmp27);
frost$core$UInt32 $tmp29 = frost$core$UInt32$init$builtin_uint32($tmp28);
return $tmp29;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 71
uint8_t $tmp30 = param0.value;
uint32_t $tmp31 = param1.value;
uint32_t $tmp32 = ((uint32_t) $tmp30) + $tmp31;
frost$core$UInt32 $tmp33 = frost$core$UInt32$init$builtin_uint32($tmp32);
return $tmp33;

}
frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 77
uint8_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = ((uint64_t) $tmp34) + $tmp35;
frost$core$UInt64 $tmp37 = frost$core$UInt64$init$builtin_uint64($tmp36);
return $tmp37;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 83
uint8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
frost$core$Int32 $tmp41 = frost$core$Int32$init$builtin_int32($tmp40);
return $tmp41;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 89
uint8_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
int32_t $tmp44 = ((int32_t) $tmp42) - ((int32_t) $tmp43);
frost$core$Int32 $tmp45 = frost$core$Int32$init$builtin_int32($tmp44);
return $tmp45;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 95
uint8_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
int64_t $tmp48 = ((int64_t) $tmp46) - ((int64_t) $tmp47);
frost$core$Int64 $tmp49 = frost$core$Int64$init$builtin_int64($tmp48);
return $tmp49;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 101
uint8_t $tmp50 = param0.value;
uint8_t $tmp51 = param1.value;
uint32_t $tmp52 = ((uint32_t) $tmp50) - ((uint32_t) $tmp51);
frost$core$UInt32 $tmp53 = frost$core$UInt32$init$builtin_uint32($tmp52);
return $tmp53;

}
frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 106
uint8_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
uint8_t $tmp56 = $tmp54 - $tmp55;
frost$core$UInt8 $tmp57 = frost$core$UInt8$init$builtin_uint8($tmp56);
return $tmp57;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 112
uint8_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
uint32_t $tmp60 = ((uint32_t) $tmp58) - ((uint32_t) $tmp59);
frost$core$UInt32 $tmp61 = frost$core$UInt32$init$builtin_uint32($tmp60);
return $tmp61;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 118
uint8_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
uint32_t $tmp64 = ((uint32_t) $tmp62) - $tmp63;
frost$core$UInt32 $tmp65 = frost$core$UInt32$init$builtin_uint32($tmp64);
return $tmp65;

}
frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 124
uint8_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
uint64_t $tmp68 = ((uint64_t) $tmp66) - $tmp67;
frost$core$UInt64 $tmp69 = frost$core$UInt64$init$builtin_uint64($tmp68);
return $tmp69;

}
frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8(frost$core$UInt8 param0) {

// line 129
uint8_t $tmp70 = param0.value;
uint8_t $tmp71 = -$tmp70;
frost$core$UInt8 $tmp72 = (frost$core$UInt8) {$tmp71};
return $tmp72;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 135
uint8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
frost$core$Int32 $tmp76 = frost$core$Int32$init$builtin_int32($tmp75);
return $tmp76;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 141
uint8_t $tmp77 = param0.value;
int16_t $tmp78 = param1.value;
int32_t $tmp79 = ((int32_t) $tmp77) * ((int32_t) $tmp78);
frost$core$Int32 $tmp80 = frost$core$Int32$init$builtin_int32($tmp79);
return $tmp80;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 147
uint8_t $tmp81 = param0.value;
int32_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) * ((int64_t) $tmp82);
frost$core$Int64 $tmp84 = frost$core$Int64$init$builtin_int64($tmp83);
return $tmp84;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 153
uint8_t $tmp85 = param0.value;
uint8_t $tmp86 = param1.value;
uint32_t $tmp87 = ((uint32_t) $tmp85) * ((uint32_t) $tmp86);
frost$core$UInt32 $tmp88 = frost$core$UInt32$init$builtin_uint32($tmp87);
return $tmp88;

}
frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 158
uint8_t $tmp89 = param0.value;
uint8_t $tmp90 = param1.value;
uint8_t $tmp91 = $tmp89 * $tmp90;
frost$core$UInt8 $tmp92 = frost$core$UInt8$init$builtin_uint8($tmp91);
return $tmp92;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 164
uint8_t $tmp93 = param0.value;
uint16_t $tmp94 = param1.value;
uint32_t $tmp95 = ((uint32_t) $tmp93) * ((uint32_t) $tmp94);
frost$core$UInt32 $tmp96 = frost$core$UInt32$init$builtin_uint32($tmp95);
return $tmp96;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 170
uint8_t $tmp97 = param0.value;
uint32_t $tmp98 = param1.value;
uint32_t $tmp99 = ((uint32_t) $tmp97) * $tmp98;
frost$core$UInt32 $tmp100 = frost$core$UInt32$init$builtin_uint32($tmp99);
return $tmp100;

}
frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 176
uint8_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = ((uint64_t) $tmp101) * $tmp102;
frost$core$UInt64 $tmp104 = frost$core$UInt64$init$builtin_uint64($tmp103);
return $tmp104;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 182
uint8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
frost$core$Int32 $tmp108 = frost$core$Int32$init$builtin_int32($tmp107);
return $tmp108;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 188
uint8_t $tmp109 = param0.value;
int16_t $tmp110 = param1.value;
int32_t $tmp111 = ((int32_t) $tmp109) / ((int32_t) $tmp110);
frost$core$Int32 $tmp112 = frost$core$Int32$init$builtin_int32($tmp111);
return $tmp112;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 194
uint8_t $tmp113 = param0.value;
int32_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) / ((int64_t) $tmp114);
frost$core$Int64 $tmp116 = frost$core$Int64$init$builtin_int64($tmp115);
return $tmp116;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 200
uint8_t $tmp117 = param0.value;
uint8_t $tmp118 = param1.value;
uint32_t $tmp119 = ((uint32_t) $tmp117) / ((uint32_t) $tmp118);
frost$core$UInt32 $tmp120 = frost$core$UInt32$init$builtin_uint32($tmp119);
return $tmp120;

}
frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 205
uint8_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
uint8_t $tmp123 = $tmp121 / $tmp122;
frost$core$UInt8 $tmp124 = frost$core$UInt8$init$builtin_uint8($tmp123);
return $tmp124;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 211
uint8_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
uint32_t $tmp127 = ((uint32_t) $tmp125) / ((uint32_t) $tmp126);
frost$core$UInt32 $tmp128 = frost$core$UInt32$init$builtin_uint32($tmp127);
return $tmp128;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 217
uint8_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
uint32_t $tmp131 = ((uint32_t) $tmp129) / $tmp130;
frost$core$UInt32 $tmp132 = frost$core$UInt32$init$builtin_uint32($tmp131);
return $tmp132;

}
frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 223
uint8_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
uint64_t $tmp135 = ((uint64_t) $tmp133) / $tmp134;
frost$core$UInt64 $tmp136 = frost$core$UInt64$init$builtin_uint64($tmp135);
return $tmp136;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 229
uint8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
frost$core$Int32 $tmp140 = frost$core$Int32$init$builtin_int32($tmp139);
return $tmp140;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 235
uint8_t $tmp141 = param0.value;
int16_t $tmp142 = param1.value;
int32_t $tmp143 = ((int32_t) $tmp141) % ((int32_t) $tmp142);
frost$core$Int32 $tmp144 = frost$core$Int32$init$builtin_int32($tmp143);
return $tmp144;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 241
uint8_t $tmp145 = param0.value;
int32_t $tmp146 = param1.value;
int64_t $tmp147 = ((int64_t) $tmp145) % ((int64_t) $tmp146);
frost$core$Int64 $tmp148 = frost$core$Int64$init$builtin_int64($tmp147);
return $tmp148;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 247
uint8_t $tmp149 = param0.value;
uint8_t $tmp150 = param1.value;
uint32_t $tmp151 = ((uint32_t) $tmp149) % ((uint32_t) $tmp150);
frost$core$UInt32 $tmp152 = frost$core$UInt32$init$builtin_uint32($tmp151);
return $tmp152;

}
frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 252
uint8_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
uint8_t $tmp155 = $tmp153 % $tmp154;
frost$core$UInt8 $tmp156 = frost$core$UInt8$init$builtin_uint8($tmp155);
return $tmp156;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 258
uint8_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
uint32_t $tmp159 = ((uint32_t) $tmp157) % ((uint32_t) $tmp158);
frost$core$UInt32 $tmp160 = frost$core$UInt32$init$builtin_uint32($tmp159);
return $tmp160;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 264
uint8_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
uint32_t $tmp163 = ((uint32_t) $tmp161) % $tmp162;
frost$core$UInt32 $tmp164 = frost$core$UInt32$init$builtin_uint32($tmp163);
return $tmp164;

}
frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 270
uint8_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
uint64_t $tmp167 = ((uint64_t) $tmp165) % $tmp166;
frost$core$UInt64 $tmp168 = frost$core$UInt64$init$builtin_uint64($tmp167);
return $tmp168;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 276
uint8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
frost$core$Real32 $tmp172 = frost$core$Real32$init$builtin_float32($tmp171);
return $tmp172;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 282
uint8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
frost$core$Real32 $tmp176 = frost$core$Real32$init$builtin_float32($tmp175);
return $tmp176;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 288
uint8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
frost$core$Real32 $tmp180 = frost$core$Real32$init$builtin_float32($tmp179);
return $tmp180;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 294
uint8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
frost$core$Real64 $tmp184 = frost$core$Real64$init$builtin_float64($tmp183);
return $tmp184;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 300
uint8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
frost$core$Real32 $tmp188 = frost$core$Real32$init$builtin_float32($tmp187);
return $tmp188;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 306
uint8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
frost$core$Real32 $tmp192 = frost$core$Real32$init$builtin_float32($tmp191);
return $tmp192;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 312
uint8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
frost$core$Real32 $tmp196 = frost$core$Real32$init$builtin_float32($tmp195);
return $tmp196;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 318
uint8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
frost$core$Real64 $tmp200 = frost$core$Real64$init$builtin_float64($tmp199);
return $tmp200;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Real32 param1) {

// line 324
uint8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
frost$core$Real32 $tmp204 = frost$core$Real32$init$builtin_float32($tmp203);
return $tmp204;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Real64 param1) {

// line 330
uint8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
frost$core$Real64 $tmp208 = frost$core$Real64$init$builtin_float64($tmp207);
return $tmp208;

}
frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8(frost$core$UInt8 param0) {

// line 335
uint8_t $tmp209 = param0.value;
uint8_t $tmp210 = !$tmp209;
frost$core$UInt8 $tmp211 = (frost$core$UInt8) {$tmp210};
return $tmp211;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 341
uint8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
frost$core$Int32 $tmp215 = frost$core$Int32$init$builtin_int32($tmp214);
return $tmp215;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 347
uint8_t $tmp216 = param0.value;
int16_t $tmp217 = param1.value;
int32_t $tmp218 = ((int32_t) $tmp216) & ((int32_t) $tmp217);
frost$core$Int32 $tmp219 = frost$core$Int32$init$builtin_int32($tmp218);
return $tmp219;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 353
uint8_t $tmp220 = param0.value;
int32_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & $tmp221;
frost$core$Int32 $tmp223 = frost$core$Int32$init$builtin_int32($tmp222);
return $tmp223;

}
frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 359
uint8_t $tmp224 = param0.value;
int64_t $tmp225 = param1.value;
int64_t $tmp226 = ((int64_t) $tmp224) & $tmp225;
frost$core$Int64 $tmp227 = frost$core$Int64$init$builtin_int64($tmp226);
return $tmp227;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 365
uint8_t $tmp228 = param0.value;
uint8_t $tmp229 = param1.value;
uint32_t $tmp230 = ((uint32_t) $tmp228) & ((uint32_t) $tmp229);
frost$core$UInt32 $tmp231 = frost$core$UInt32$init$builtin_uint32($tmp230);
return $tmp231;

}
frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 370
uint8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint8_t $tmp234 = $tmp232 & $tmp233;
frost$core$UInt8 $tmp235 = frost$core$UInt8$init$builtin_uint8($tmp234);
return $tmp235;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 376
uint8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
frost$core$UInt32 $tmp239 = frost$core$UInt32$init$builtin_uint32($tmp238);
return $tmp239;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 382
uint8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
frost$core$UInt32 $tmp243 = frost$core$UInt32$init$builtin_uint32($tmp242);
return $tmp243;

}
frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 388
uint8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
frost$core$UInt64 $tmp247 = frost$core$UInt64$init$builtin_uint64($tmp246);
return $tmp247;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 394
uint8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
frost$core$Int32 $tmp251 = frost$core$Int32$init$builtin_int32($tmp250);
return $tmp251;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 400
uint8_t $tmp252 = param0.value;
int16_t $tmp253 = param1.value;
int32_t $tmp254 = ((int32_t) $tmp252) | ((int32_t) $tmp253);
frost$core$Int32 $tmp255 = frost$core$Int32$init$builtin_int32($tmp254);
return $tmp255;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 406
uint8_t $tmp256 = param0.value;
int32_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | $tmp257;
frost$core$Int32 $tmp259 = frost$core$Int32$init$builtin_int32($tmp258);
return $tmp259;

}
frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 412
uint8_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
int64_t $tmp262 = ((int64_t) $tmp260) | $tmp261;
frost$core$Int64 $tmp263 = frost$core$Int64$init$builtin_int64($tmp262);
return $tmp263;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 418
uint8_t $tmp264 = param0.value;
uint8_t $tmp265 = param1.value;
uint32_t $tmp266 = ((uint32_t) $tmp264) | ((uint32_t) $tmp265);
frost$core$UInt32 $tmp267 = frost$core$UInt32$init$builtin_uint32($tmp266);
return $tmp267;

}
frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 423
uint8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint8_t $tmp270 = $tmp268 | $tmp269;
frost$core$UInt8 $tmp271 = frost$core$UInt8$init$builtin_uint8($tmp270);
return $tmp271;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 429
uint8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
frost$core$UInt32 $tmp275 = frost$core$UInt32$init$builtin_uint32($tmp274);
return $tmp275;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 435
uint8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
frost$core$UInt32 $tmp279 = frost$core$UInt32$init$builtin_uint32($tmp278);
return $tmp279;

}
frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 441
uint8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
frost$core$UInt64 $tmp283 = frost$core$UInt64$init$builtin_uint64($tmp282);
return $tmp283;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 447
uint8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
frost$core$Int32 $tmp287 = frost$core$Int32$init$builtin_int32($tmp286);
return $tmp287;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 453
uint8_t $tmp288 = param0.value;
int16_t $tmp289 = param1.value;
int32_t $tmp290 = ((int32_t) $tmp288) ^ ((int32_t) $tmp289);
frost$core$Int32 $tmp291 = frost$core$Int32$init$builtin_int32($tmp290);
return $tmp291;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 459
uint8_t $tmp292 = param0.value;
int32_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ $tmp293;
frost$core$Int32 $tmp295 = frost$core$Int32$init$builtin_int32($tmp294);
return $tmp295;

}
frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 465
uint8_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
int64_t $tmp298 = ((int64_t) $tmp296) ^ $tmp297;
frost$core$Int64 $tmp299 = frost$core$Int64$init$builtin_int64($tmp298);
return $tmp299;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 471
uint8_t $tmp300 = param0.value;
uint8_t $tmp301 = param1.value;
uint32_t $tmp302 = ((uint32_t) $tmp300) ^ ((uint32_t) $tmp301);
frost$core$UInt32 $tmp303 = frost$core$UInt32$init$builtin_uint32($tmp302);
return $tmp303;

}
frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 476
uint8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint8_t $tmp306 = $tmp304 ^ $tmp305;
frost$core$UInt8 $tmp307 = frost$core$UInt8$init$builtin_uint8($tmp306);
return $tmp307;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 482
uint8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
frost$core$UInt32 $tmp311 = frost$core$UInt32$init$builtin_uint32($tmp310);
return $tmp311;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 488
uint8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
frost$core$UInt32 $tmp315 = frost$core$UInt32$init$builtin_uint32($tmp314);
return $tmp315;

}
frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 494
uint8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
frost$core$UInt64 $tmp319 = frost$core$UInt64$init$builtin_uint64($tmp318);
return $tmp319;

}
frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 500
uint8_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
int32_t $tmp322 = ((int32_t) $tmp320) << ((int32_t) $tmp321);
frost$core$Int32 $tmp323 = frost$core$Int32$init$builtin_int32($tmp322);
return $tmp323;

}
frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 506
uint8_t $tmp324 = param0.value;
int16_t $tmp325 = param1.value;
int32_t $tmp326 = ((int32_t) $tmp324) << ((int32_t) $tmp325);
frost$core$Int32 $tmp327 = frost$core$Int32$init$builtin_int32($tmp326);
return $tmp327;

}
frost$core$Int32 frost$core$UInt8$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 512
uint8_t $tmp328 = param0.value;
int32_t $tmp329 = param1.value;
int32_t $tmp330 = ((int32_t) $tmp328) << $tmp329;
frost$core$Int32 $tmp331 = frost$core$Int32$init$builtin_int32($tmp330);
return $tmp331;

}
frost$core$Int64 frost$core$UInt8$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 518
uint8_t $tmp332 = param0.value;
int64_t $tmp333 = param1.value;
int64_t $tmp334 = ((int64_t) $tmp332) << $tmp333;
frost$core$Int64 $tmp335 = frost$core$Int64$init$builtin_int64($tmp334);
return $tmp335;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 524
uint8_t $tmp336 = param0.value;
uint8_t $tmp337 = param1.value;
uint32_t $tmp338 = ((uint32_t) $tmp336) << ((uint32_t) $tmp337);
frost$core$UInt32 $tmp339 = frost$core$UInt32$init$builtin_uint32($tmp338);
return $tmp339;

}
frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 529
uint8_t $tmp340 = param0.value;
uint8_t $tmp341 = param1.value;
uint8_t $tmp342 = $tmp340 << $tmp341;
frost$core$UInt8 $tmp343 = frost$core$UInt8$init$builtin_uint8($tmp342);
return $tmp343;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 535
uint8_t $tmp344 = param0.value;
uint16_t $tmp345 = param1.value;
uint32_t $tmp346 = ((uint32_t) $tmp344) << ((uint32_t) $tmp345);
frost$core$UInt32 $tmp347 = frost$core$UInt32$init$builtin_uint32($tmp346);
return $tmp347;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 541
uint8_t $tmp348 = param0.value;
uint32_t $tmp349 = param1.value;
uint32_t $tmp350 = ((uint32_t) $tmp348) << $tmp349;
frost$core$UInt32 $tmp351 = frost$core$UInt32$init$builtin_uint32($tmp350);
return $tmp351;

}
frost$core$UInt64 frost$core$UInt8$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 547
uint8_t $tmp352 = param0.value;
uint64_t $tmp353 = param1.value;
uint64_t $tmp354 = ((uint64_t) $tmp352) << $tmp353;
frost$core$UInt64 $tmp355 = frost$core$UInt64$init$builtin_uint64($tmp354);
return $tmp355;

}
frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 553
uint8_t $tmp356 = param0.value;
int8_t $tmp357 = param1.value;
int32_t $tmp358 = ((int32_t) $tmp356) >> ((int32_t) $tmp357);
frost$core$Int32 $tmp359 = frost$core$Int32$init$builtin_int32($tmp358);
return $tmp359;

}
frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 559
uint8_t $tmp360 = param0.value;
int16_t $tmp361 = param1.value;
int32_t $tmp362 = ((int32_t) $tmp360) >> ((int32_t) $tmp361);
frost$core$Int32 $tmp363 = frost$core$Int32$init$builtin_int32($tmp362);
return $tmp363;

}
frost$core$Int32 frost$core$UInt8$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 565
uint8_t $tmp364 = param0.value;
int32_t $tmp365 = param1.value;
int32_t $tmp366 = ((int32_t) $tmp364) >> $tmp365;
frost$core$Int32 $tmp367 = frost$core$Int32$init$builtin_int32($tmp366);
return $tmp367;

}
frost$core$Int64 frost$core$UInt8$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// line 571
uint8_t $tmp368 = param0.value;
int64_t $tmp369 = param1.value;
int64_t $tmp370 = ((int64_t) $tmp368) >> $tmp369;
frost$core$Int64 $tmp371 = frost$core$Int64$init$builtin_int64($tmp370);
return $tmp371;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 577
uint8_t $tmp372 = param0.value;
uint8_t $tmp373 = param1.value;
uint32_t $tmp374 = ((uint32_t) $tmp372) >> ((uint32_t) $tmp373);
frost$core$UInt32 $tmp375 = frost$core$UInt32$init$builtin_uint32($tmp374);
return $tmp375;

}
frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 582
uint8_t $tmp376 = param0.value;
uint8_t $tmp377 = param1.value;
uint8_t $tmp378 = $tmp376 >> $tmp377;
frost$core$UInt8 $tmp379 = frost$core$UInt8$init$builtin_uint8($tmp378);
return $tmp379;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 588
uint8_t $tmp380 = param0.value;
uint16_t $tmp381 = param1.value;
uint32_t $tmp382 = ((uint32_t) $tmp380) >> ((uint32_t) $tmp381);
frost$core$UInt32 $tmp383 = frost$core$UInt32$init$builtin_uint32($tmp382);
return $tmp383;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 594
uint8_t $tmp384 = param0.value;
uint32_t $tmp385 = param1.value;
uint32_t $tmp386 = ((uint32_t) $tmp384) >> $tmp385;
frost$core$UInt32 $tmp387 = frost$core$UInt32$init$builtin_uint32($tmp386);
return $tmp387;

}
frost$core$UInt64 frost$core$UInt8$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 600
uint8_t $tmp388 = param0.value;
uint64_t $tmp389 = param1.value;
uint64_t $tmp390 = ((uint64_t) $tmp388) >> $tmp389;
frost$core$UInt64 $tmp391 = frost$core$UInt64$init$builtin_uint64($tmp390);
return $tmp391;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 606
uint8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = ((int16_t) $tmp392) == ((int16_t) $tmp393);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394);
return $tmp395;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 612
uint8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int32_t) $tmp396) == ((int32_t) $tmp397);
frost$core$Bit $tmp399 = frost$core$Bit$init$builtin_bit($tmp398);
return $tmp399;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 618
uint8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int64_t) $tmp400) == ((int64_t) $tmp401);
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
return $tmp403;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 625
uint8_t $tmp404 = param0.value;
uint8_t $tmp405 = param1.value;
bool $tmp406 = $tmp404 == $tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406);
return $tmp407;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 631
uint8_t $tmp408 = param0.value;
uint16_t $tmp409 = param1.value;
bool $tmp410 = ((uint16_t) $tmp408) == $tmp409;
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit($tmp410);
return $tmp411;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 637
uint8_t $tmp412 = param0.value;
uint32_t $tmp413 = param1.value;
bool $tmp414 = ((uint32_t) $tmp412) == $tmp413;
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit($tmp414);
return $tmp415;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 643
uint8_t $tmp416 = param0.value;
uint64_t $tmp417 = param1.value;
bool $tmp418 = ((uint64_t) $tmp416) == $tmp417;
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418);
return $tmp419;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 649
uint8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = ((int16_t) $tmp420) != ((int16_t) $tmp421);
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422);
return $tmp423;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 655
uint8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int32_t) $tmp424) != ((int32_t) $tmp425);
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit($tmp426);
return $tmp427;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 661
uint8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int64_t) $tmp428) != ((int64_t) $tmp429);
frost$core$Bit $tmp431 = frost$core$Bit$init$builtin_bit($tmp430);
return $tmp431;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 668
uint8_t $tmp432 = param0.value;
uint8_t $tmp433 = param1.value;
bool $tmp434 = $tmp432 != $tmp433;
frost$core$Bit $tmp435 = frost$core$Bit$init$builtin_bit($tmp434);
return $tmp435;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 674
uint8_t $tmp436 = param0.value;
uint16_t $tmp437 = param1.value;
bool $tmp438 = ((uint16_t) $tmp436) != $tmp437;
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438);
return $tmp439;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 680
uint8_t $tmp440 = param0.value;
uint32_t $tmp441 = param1.value;
bool $tmp442 = ((uint32_t) $tmp440) != $tmp441;
frost$core$Bit $tmp443 = frost$core$Bit$init$builtin_bit($tmp442);
return $tmp443;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 686
uint8_t $tmp444 = param0.value;
uint64_t $tmp445 = param1.value;
bool $tmp446 = ((uint64_t) $tmp444) != $tmp445;
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit($tmp446);
return $tmp447;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 692
uint8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = ((int16_t) $tmp448) < ((int16_t) $tmp449);
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit($tmp450);
return $tmp451;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 698
uint8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int32_t) $tmp452) < ((int32_t) $tmp453);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454);
return $tmp455;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 704
uint8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int64_t) $tmp456) < ((int64_t) $tmp457);
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458);
return $tmp459;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 711
uint8_t $tmp460 = param0.value;
uint8_t $tmp461 = param1.value;
bool $tmp462 = $tmp460 < $tmp461;
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit($tmp462);
return $tmp463;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 717
uint8_t $tmp464 = param0.value;
uint16_t $tmp465 = param1.value;
bool $tmp466 = ((uint16_t) $tmp464) < $tmp465;
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466);
return $tmp467;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 723
uint8_t $tmp468 = param0.value;
uint32_t $tmp469 = param1.value;
bool $tmp470 = ((uint32_t) $tmp468) < $tmp469;
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit($tmp470);
return $tmp471;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 729
uint8_t $tmp472 = param0.value;
uint64_t $tmp473 = param1.value;
bool $tmp474 = ((uint64_t) $tmp472) < $tmp473;
frost$core$Bit $tmp475 = frost$core$Bit$init$builtin_bit($tmp474);
return $tmp475;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 735
uint8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = ((int16_t) $tmp476) > ((int16_t) $tmp477);
frost$core$Bit $tmp479 = frost$core$Bit$init$builtin_bit($tmp478);
return $tmp479;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 741
uint8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int32_t) $tmp480) > ((int32_t) $tmp481);
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit($tmp482);
return $tmp483;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 747
uint8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int64_t) $tmp484) > ((int64_t) $tmp485);
frost$core$Bit $tmp487 = frost$core$Bit$init$builtin_bit($tmp486);
return $tmp487;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 754
uint8_t $tmp488 = param0.value;
uint8_t $tmp489 = param1.value;
bool $tmp490 = $tmp488 > $tmp489;
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490);
return $tmp491;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 760
uint8_t $tmp492 = param0.value;
uint16_t $tmp493 = param1.value;
bool $tmp494 = ((uint16_t) $tmp492) > $tmp493;
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit($tmp494);
return $tmp495;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 766
uint8_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((uint32_t) $tmp496) > $tmp497;
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498);
return $tmp499;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 772
uint8_t $tmp500 = param0.value;
uint64_t $tmp501 = param1.value;
bool $tmp502 = ((uint64_t) $tmp500) > $tmp501;
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit($tmp502);
return $tmp503;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 778
uint8_t $tmp504 = param0.value;
int8_t $tmp505 = param1.value;
bool $tmp506 = ((int16_t) $tmp504) >= ((int16_t) $tmp505);
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit($tmp506);
return $tmp507;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 784
uint8_t $tmp508 = param0.value;
int16_t $tmp509 = param1.value;
bool $tmp510 = ((int32_t) $tmp508) >= ((int32_t) $tmp509);
frost$core$Bit $tmp511 = frost$core$Bit$init$builtin_bit($tmp510);
return $tmp511;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 790
uint8_t $tmp512 = param0.value;
int32_t $tmp513 = param1.value;
bool $tmp514 = ((int64_t) $tmp512) >= ((int64_t) $tmp513);
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit($tmp514);
return $tmp515;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 797
uint8_t $tmp516 = param0.value;
uint8_t $tmp517 = param1.value;
bool $tmp518 = $tmp516 >= $tmp517;
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit($tmp518);
return $tmp519;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 803
uint8_t $tmp520 = param0.value;
uint16_t $tmp521 = param1.value;
bool $tmp522 = ((uint16_t) $tmp520) >= $tmp521;
frost$core$Bit $tmp523 = frost$core$Bit$init$builtin_bit($tmp522);
return $tmp523;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 809
uint8_t $tmp524 = param0.value;
uint32_t $tmp525 = param1.value;
bool $tmp526 = ((uint32_t) $tmp524) >= $tmp525;
frost$core$Bit $tmp527 = frost$core$Bit$init$builtin_bit($tmp526);
return $tmp527;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 815
uint8_t $tmp528 = param0.value;
uint64_t $tmp529 = param1.value;
bool $tmp530 = ((uint64_t) $tmp528) >= $tmp529;
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit($tmp530);
return $tmp531;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 821
uint8_t $tmp532 = param0.value;
int8_t $tmp533 = param1.value;
bool $tmp534 = ((int16_t) $tmp532) <= ((int16_t) $tmp533);
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit($tmp534);
return $tmp535;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 827
uint8_t $tmp536 = param0.value;
int16_t $tmp537 = param1.value;
bool $tmp538 = ((int32_t) $tmp536) <= ((int32_t) $tmp537);
frost$core$Bit $tmp539 = frost$core$Bit$init$builtin_bit($tmp538);
return $tmp539;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 833
uint8_t $tmp540 = param0.value;
int32_t $tmp541 = param1.value;
bool $tmp542 = ((int64_t) $tmp540) <= ((int64_t) $tmp541);
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit($tmp542);
return $tmp543;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 840
uint8_t $tmp544 = param0.value;
uint8_t $tmp545 = param1.value;
bool $tmp546 = $tmp544 <= $tmp545;
frost$core$Bit $tmp547 = frost$core$Bit$init$builtin_bit($tmp546);
return $tmp547;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 846
uint8_t $tmp548 = param0.value;
uint16_t $tmp549 = param1.value;
bool $tmp550 = ((uint16_t) $tmp548) <= $tmp549;
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit($tmp550);
return $tmp551;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 852
uint8_t $tmp552 = param0.value;
uint32_t $tmp553 = param1.value;
bool $tmp554 = ((uint32_t) $tmp552) <= $tmp553;
frost$core$Bit $tmp555 = frost$core$Bit$init$builtin_bit($tmp554);
return $tmp555;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 858
uint8_t $tmp556 = param0.value;
uint64_t $tmp557 = param1.value;
bool $tmp558 = ((uint64_t) $tmp556) <= $tmp557;
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558);
return $tmp559;

}
frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 864
uint8_t $tmp560 = param0.value;
int8_t $tmp561 = param1.value;
bool $tmp562 = ((int16_t) $tmp560) < ((int16_t) $tmp561);
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit($tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block1; else goto block2;
block1:;
// line 865
uint8_t $tmp565 = param0.value;
frost$core$Int16 $tmp566 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp565));
return $tmp566;
block2:;
// line 867
int8_t $tmp567 = param1.value;
frost$core$Int16 $tmp568 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp567));
return $tmp568;

}
frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 873
uint8_t $tmp569 = param0.value;
int16_t $tmp570 = param1.value;
bool $tmp571 = ((int32_t) $tmp569) < ((int32_t) $tmp570);
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit($tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block1; else goto block2;
block1:;
// line 874
uint8_t $tmp574 = param0.value;
frost$core$Int32 $tmp575 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp574));
return $tmp575;
block2:;
// line 876
int16_t $tmp576 = param1.value;
frost$core$Int32 $tmp577 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp576));
return $tmp577;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 882
uint8_t $tmp578 = param0.value;
int32_t $tmp579 = param1.value;
bool $tmp580 = ((int64_t) $tmp578) < ((int64_t) $tmp579);
frost$core$Bit $tmp581 = frost$core$Bit$init$builtin_bit($tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block1; else goto block2;
block1:;
// line 883
uint8_t $tmp583 = param0.value;
frost$core$Int64 $tmp584 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp583));
return $tmp584;
block2:;
// line 885
int32_t $tmp585 = param1.value;
frost$core$Int64 $tmp586 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp585));
return $tmp586;

}
frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 892
uint8_t $tmp587 = param0.value;
uint8_t $tmp588 = param1.value;
bool $tmp589 = $tmp587 < $tmp588;
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit($tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block1; else goto block2;
block1:;
// line 893
uint8_t $tmp592 = param0.value;
frost$core$UInt8 $tmp593 = frost$core$UInt8$init$builtin_uint8($tmp592);
return $tmp593;
block2:;
// line 895
uint8_t $tmp594 = param1.value;
frost$core$UInt8 $tmp595 = frost$core$UInt8$init$builtin_uint8($tmp594);
return $tmp595;

}
frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 901
uint8_t $tmp596 = param0.value;
uint16_t $tmp597 = param1.value;
bool $tmp598 = ((uint16_t) $tmp596) < $tmp597;
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit($tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block1; else goto block2;
block1:;
// line 902
uint8_t $tmp601 = param0.value;
frost$core$UInt16 $tmp602 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp601));
return $tmp602;
block2:;
// line 904
uint16_t $tmp603 = param1.value;
frost$core$UInt16 $tmp604 = frost$core$UInt16$init$builtin_uint16($tmp603);
return $tmp604;

}
frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 910
uint8_t $tmp605 = param0.value;
uint32_t $tmp606 = param1.value;
bool $tmp607 = ((uint32_t) $tmp605) < $tmp606;
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit($tmp607);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block1; else goto block2;
block1:;
// line 911
uint8_t $tmp610 = param0.value;
frost$core$UInt32 $tmp611 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp610));
return $tmp611;
block2:;
// line 913
uint32_t $tmp612 = param1.value;
frost$core$UInt32 $tmp613 = frost$core$UInt32$init$builtin_uint32($tmp612);
return $tmp613;

}
frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 919
uint8_t $tmp614 = param0.value;
uint64_t $tmp615 = param1.value;
bool $tmp616 = ((uint64_t) $tmp614) < $tmp615;
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit($tmp616);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block1; else goto block2;
block1:;
// line 920
uint8_t $tmp619 = param0.value;
frost$core$UInt64 $tmp620 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp619));
return $tmp620;
block2:;
// line 922
uint64_t $tmp621 = param1.value;
frost$core$UInt64 $tmp622 = frost$core$UInt64$init$builtin_uint64($tmp621);
return $tmp622;

}
frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// line 928
uint8_t $tmp623 = param0.value;
int8_t $tmp624 = param1.value;
bool $tmp625 = ((int16_t) $tmp623) > ((int16_t) $tmp624);
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit($tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block1; else goto block2;
block1:;
// line 929
uint8_t $tmp628 = param0.value;
frost$core$Int16 $tmp629 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp628));
return $tmp629;
block2:;
// line 931
int8_t $tmp630 = param1.value;
frost$core$Int16 $tmp631 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp630));
return $tmp631;

}
frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// line 937
uint8_t $tmp632 = param0.value;
int16_t $tmp633 = param1.value;
bool $tmp634 = ((int32_t) $tmp632) > ((int32_t) $tmp633);
frost$core$Bit $tmp635 = frost$core$Bit$init$builtin_bit($tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
// line 938
uint8_t $tmp637 = param0.value;
frost$core$Int32 $tmp638 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp637));
return $tmp638;
block2:;
// line 940
int16_t $tmp639 = param1.value;
frost$core$Int32 $tmp640 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp639));
return $tmp640;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// line 946
uint8_t $tmp641 = param0.value;
int32_t $tmp642 = param1.value;
bool $tmp643 = ((int64_t) $tmp641) > ((int64_t) $tmp642);
frost$core$Bit $tmp644 = frost$core$Bit$init$builtin_bit($tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block1; else goto block2;
block1:;
// line 947
uint8_t $tmp646 = param0.value;
frost$core$Int64 $tmp647 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp646));
return $tmp647;
block2:;
// line 949
int32_t $tmp648 = param1.value;
frost$core$Int64 $tmp649 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp648));
return $tmp649;

}
frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// line 956
uint8_t $tmp650 = param0.value;
uint8_t $tmp651 = param1.value;
bool $tmp652 = $tmp650 > $tmp651;
frost$core$Bit $tmp653 = frost$core$Bit$init$builtin_bit($tmp652);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block1; else goto block2;
block1:;
// line 957
uint8_t $tmp655 = param0.value;
frost$core$UInt8 $tmp656 = frost$core$UInt8$init$builtin_uint8($tmp655);
return $tmp656;
block2:;
// line 959
uint8_t $tmp657 = param1.value;
frost$core$UInt8 $tmp658 = frost$core$UInt8$init$builtin_uint8($tmp657);
return $tmp658;

}
frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// line 965
uint8_t $tmp659 = param0.value;
uint16_t $tmp660 = param1.value;
bool $tmp661 = ((uint16_t) $tmp659) > $tmp660;
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit($tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block1; else goto block2;
block1:;
// line 966
uint8_t $tmp664 = param0.value;
frost$core$UInt16 $tmp665 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp664));
return $tmp665;
block2:;
// line 968
uint16_t $tmp666 = param1.value;
frost$core$UInt16 $tmp667 = frost$core$UInt16$init$builtin_uint16($tmp666);
return $tmp667;

}
frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// line 974
uint8_t $tmp668 = param0.value;
uint32_t $tmp669 = param1.value;
bool $tmp670 = ((uint32_t) $tmp668) > $tmp669;
frost$core$Bit $tmp671 = frost$core$Bit$init$builtin_bit($tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block1; else goto block2;
block1:;
// line 975
uint8_t $tmp673 = param0.value;
frost$core$UInt32 $tmp674 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp673));
return $tmp674;
block2:;
// line 977
uint32_t $tmp675 = param1.value;
frost$core$UInt32 $tmp676 = frost$core$UInt32$init$builtin_uint32($tmp675);
return $tmp676;

}
frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// line 983
uint8_t $tmp677 = param0.value;
uint64_t $tmp678 = param1.value;
bool $tmp679 = ((uint64_t) $tmp677) > $tmp678;
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit($tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block1; else goto block2;
block1:;
// line 984
uint8_t $tmp682 = param0.value;
frost$core$UInt64 $tmp683 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp682));
return $tmp683;
block2:;
// line 986
uint64_t $tmp684 = param1.value;
frost$core$UInt64 $tmp685 = frost$core$UInt64$init$builtin_uint64($tmp684);
return $tmp685;

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$Range$LTfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$Range$LTfrost$core$UInt8$GT param0) {

// line 991
FROST_ASSERT(24 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp686 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
frost$core$UInt8 $tmp687 = param0.min;
frost$core$UInt8 $tmp688 = param0.max;
frost$core$UInt8 $tmp689 = (frost$core$UInt8) {1};
frost$core$Bit $tmp690 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT $tmp691 = frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$init$frost$core$UInt8$frost$core$UInt8$frost$core$UInt8$frost$core$Bit($tmp687, $tmp688, $tmp689, $tmp690);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp686, $tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp686)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
return ((frost$collections$ListView*) $tmp686);

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

// line 996
FROST_ASSERT(24 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp692 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp692, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp692)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
return ((frost$collections$ListView*) $tmp692);

}
frost$core$Bit frost$core$UInt8$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp693 = (frost$core$Int64) {0};
int64_t $tmp694 = param1.value;
int64_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 >= $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block3; else goto block2;
block3:;
frost$core$UInt8$wrapper* $tmp699;
$tmp699 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp699->value = param0;
ITable* $tmp700 = ((frost$collections$CollectionView*) $tmp699)->$class->itable;
while ($tmp700->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp700 = $tmp700->next;
}
$fn702 $tmp701 = $tmp700->methods[0];
frost$core$Int64 $tmp703 = $tmp701(((frost$collections$CollectionView*) $tmp699));
int64_t $tmp704 = param1.value;
int64_t $tmp705 = $tmp703.value;
bool $tmp706 = $tmp704 < $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp699)));
if ($tmp708) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp709 = (frost$core$Int64) {1001};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s710, $tmp709, &$s711);
abort(); // unreachable
block1:;
// line 1002
frost$core$Int64 $tmp712 = (frost$core$Int64) {1};
frost$core$Int64 $tmp713 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp712, param1);
frost$core$Int64 $tmp714 = frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp713);
frost$core$Int64 $tmp715 = (frost$core$Int64) {0};
int64_t $tmp716 = $tmp714.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 != $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
return $tmp719;

}
frost$core$Int64 frost$core$UInt8$get_count$R$frost$core$Int64(frost$core$UInt8 param0) {

// line 1008
frost$core$Int64 $tmp720 = (frost$core$Int64) {8};
return $tmp720;

}
frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt8 param0) {

// line 1013
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp721 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp722 = frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp723 = (frost$core$UInt64) {128};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp721, $tmp722, $tmp723);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp721)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
return ((frost$collections$Iterator*) $tmp721);

}
frost$core$Int64 frost$core$UInt8$get_hash$R$frost$core$Int64(frost$core$UInt8 param0) {

// line 1018
uint8_t $tmp724 = param0.value;
frost$core$Int64 $tmp725 = (frost$core$Int64) {((int64_t) $tmp724)};
return $tmp725;

}
frost$core$UInt8$nullable frost$core$UInt8$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt8$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp726 = (frost$core$Int64) {2};
int64_t $tmp727 = param1.value;
int64_t $tmp728 = $tmp726.value;
bool $tmp729 = $tmp727 >= $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp732 = (frost$core$Int64) {36};
int64_t $tmp733 = param1.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 <= $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp738 = (frost$core$Int64) {1024};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s739, $tmp738, &$s740);
abort(); // unreachable
block1:;
// line 1025
frost$core$UInt64$nullable $tmp741 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp741;
// line 1026
frost$core$UInt64$nullable $tmp742 = *(&local0);
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(!$tmp742.nonnull);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block4; else goto block5;
block4:;
// line 1027
return ((frost$core$UInt8$nullable) { .nonnull = false });
block5:;
// line 1029
frost$core$UInt64$nullable $tmp745 = *(&local0);
frost$core$UInt8 $tmp746 = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt64) $tmp745.value));
return ((frost$core$UInt8$nullable) { $tmp746, true });

}
frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8(frost$core$UInt8 param0) {

// line 1035
uint8_t $tmp747 = param0.value;
frost$core$Int8 $tmp748 = (frost$core$Int8) {((int8_t) $tmp747)};
return $tmp748;

}
frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16(frost$core$UInt8 param0) {

// line 1041
uint8_t $tmp749 = param0.value;
frost$core$Int16 $tmp750 = (frost$core$Int16) {((int16_t) $tmp749)};
return $tmp750;

}
frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32(frost$core$UInt8 param0) {

// line 1047
uint8_t $tmp751 = param0.value;
frost$core$Int32 $tmp752 = (frost$core$Int32) {((int32_t) $tmp751)};
return $tmp752;

}
frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64(frost$core$UInt8 param0) {

// line 1053
uint8_t $tmp753 = param0.value;
frost$core$Int64 $tmp754 = (frost$core$Int64) {((int64_t) $tmp753)};
return $tmp754;

}
frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(frost$core$UInt8 param0) {

// line 1059
uint8_t $tmp755 = param0.value;
frost$core$UInt16 $tmp756 = (frost$core$UInt16) {((uint16_t) $tmp755)};
return $tmp756;

}
frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(frost$core$UInt8 param0) {

// line 1065
uint8_t $tmp757 = param0.value;
frost$core$UInt32 $tmp758 = (frost$core$UInt32) {((uint32_t) $tmp757)};
return $tmp758;

}
frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(frost$core$UInt8 param0) {

// line 1071
uint8_t $tmp759 = param0.value;
frost$core$UInt64 $tmp760 = (frost$core$UInt64) {((uint64_t) $tmp759)};
return $tmp760;

}
frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32(frost$core$UInt8 param0) {

// line 1077
uint8_t $tmp761 = param0.value;
frost$core$Real32 $tmp762 = (frost$core$Real32) {((float) $tmp761)};
return $tmp762;

}
frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64(frost$core$UInt8 param0) {

// line 1083
uint8_t $tmp763 = param0.value;
frost$core$Real64 $tmp764 = (frost$core$Real64) {((double) $tmp763)};
return $tmp764;

}
frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String(frost$core$UInt8 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt8 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 1089
frost$core$Int64 $tmp765 = (frost$core$Int64) {3};
*(&local0) = $tmp765;
// line 1090
frost$core$Int64 $tmp766 = *(&local0);
int64_t $tmp767 = $tmp766.value;
frost$core$Char8* $tmp768 = ((frost$core$Char8*) frostAlloc($tmp767 * 1));
*(&local1) = $tmp768;
// line 1091
frost$core$Int64 $tmp769 = *(&local0);
frost$core$Int64 $tmp770 = (frost$core$Int64) {1};
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770.value;
int64_t $tmp773 = $tmp771 - $tmp772;
frost$core$Int64 $tmp774 = (frost$core$Int64) {$tmp773};
*(&local2) = $tmp774;
// line 1092
*(&local3) = param0;
// line 1093
frost$core$UInt8 $tmp775 = *(&local3);
frost$core$UInt8 $tmp776 = (frost$core$UInt8) {0};
uint8_t $tmp777 = $tmp775.value;
uint8_t $tmp778 = $tmp776.value;
bool $tmp779 = $tmp777 >= $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block1; else goto block3;
block1:;
// line 1094
goto block4;
block4:;
// line 1095
frost$core$Char8* $tmp782 = *(&local1);
frost$core$Int64 $tmp783 = *(&local2);
frost$core$UInt8 $tmp784 = *(&local3);
frost$core$UInt8 $tmp785 = (frost$core$UInt8) {10};
frost$core$UInt32 $tmp786 = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32($tmp784, $tmp785);
frost$core$UInt32 $tmp787 = (frost$core$UInt32) {48};
uint32_t $tmp788 = $tmp786.value;
uint32_t $tmp789 = $tmp787.value;
uint32_t $tmp790 = $tmp788 + $tmp789;
frost$core$UInt32 $tmp791 = (frost$core$UInt32) {$tmp790};
frost$core$UInt8 $tmp792 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp791);
frost$core$Char8 $tmp793 = frost$core$Char8$init$frost$core$UInt8($tmp792);
int64_t $tmp794 = $tmp783.value;
$tmp782[$tmp794] = $tmp793;
// line 1096
frost$core$UInt8 $tmp795 = *(&local3);
frost$core$UInt32 $tmp796 = frost$core$UInt32$init$frost$core$UInt8($tmp795);
frost$core$UInt32 $tmp797 = (frost$core$UInt32) {10};
uint32_t $tmp798 = $tmp796.value;
uint32_t $tmp799 = $tmp797.value;
uint32_t $tmp800 = $tmp798 / $tmp799;
frost$core$UInt32 $tmp801 = (frost$core$UInt32) {$tmp800};
frost$core$UInt8 $tmp802 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp801);
*(&local3) = $tmp802;
// line 1097
frost$core$Int64 $tmp803 = *(&local2);
frost$core$Int64 $tmp804 = (frost$core$Int64) {1};
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804.value;
int64_t $tmp807 = $tmp805 - $tmp806;
frost$core$Int64 $tmp808 = (frost$core$Int64) {$tmp807};
*(&local2) = $tmp808;
goto block5;
block5:;
frost$core$UInt8 $tmp809 = *(&local3);
frost$core$UInt8 $tmp810 = (frost$core$UInt8) {0};
uint8_t $tmp811 = $tmp809.value;
uint8_t $tmp812 = $tmp810.value;
bool $tmp813 = $tmp811 > $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block4; else goto block6;
block6:;
// line 1100
frost$core$Int64 $tmp816 = *(&local2);
frost$core$Int64 $tmp817 = (frost$core$Int64) {1};
int64_t $tmp818 = $tmp816.value;
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818 + $tmp819;
frost$core$Int64 $tmp821 = (frost$core$Int64) {$tmp820};
*(&local2) = $tmp821;
goto block2;
block3:;
// line 1
// line 1103
goto block7;
block7:;
// line 1104
frost$core$Char8* $tmp822 = *(&local1);
frost$core$Int64 $tmp823 = *(&local2);
frost$core$UInt32 $tmp824 = (frost$core$UInt32) {48};
frost$core$UInt8 $tmp825 = *(&local3);
frost$core$UInt8 $tmp826 = (frost$core$UInt8) {10};
frost$core$UInt32 $tmp827 = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32($tmp825, $tmp826);
uint32_t $tmp828 = $tmp824.value;
uint32_t $tmp829 = $tmp827.value;
uint32_t $tmp830 = $tmp828 - $tmp829;
frost$core$UInt32 $tmp831 = (frost$core$UInt32) {$tmp830};
frost$core$UInt8 $tmp832 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp831);
frost$core$Char8 $tmp833 = frost$core$Char8$init$frost$core$UInt8($tmp832);
int64_t $tmp834 = $tmp823.value;
$tmp822[$tmp834] = $tmp833;
// line 1105
frost$core$UInt8 $tmp835 = *(&local3);
frost$core$UInt32 $tmp836 = frost$core$UInt32$init$frost$core$UInt8($tmp835);
frost$core$UInt32 $tmp837 = (frost$core$UInt32) {10};
uint32_t $tmp838 = $tmp836.value;
uint32_t $tmp839 = $tmp837.value;
uint32_t $tmp840 = $tmp838 / $tmp839;
frost$core$UInt32 $tmp841 = (frost$core$UInt32) {$tmp840};
frost$core$UInt8 $tmp842 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp841);
*(&local3) = $tmp842;
// line 1106
frost$core$Int64 $tmp843 = *(&local2);
frost$core$Int64 $tmp844 = (frost$core$Int64) {1};
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845 - $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {$tmp847};
*(&local2) = $tmp848;
goto block8;
block8:;
frost$core$UInt8 $tmp849 = *(&local3);
frost$core$UInt8 $tmp850 = (frost$core$UInt8) {0};
uint8_t $tmp851 = $tmp849.value;
uint8_t $tmp852 = $tmp850.value;
bool $tmp853 = $tmp851 < $tmp852;
frost$core$Bit $tmp854 = (frost$core$Bit) {$tmp853};
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block7; else goto block9;
block9:;
// line 1109
frost$core$Char8* $tmp856 = *(&local1);
frost$core$Int64 $tmp857 = *(&local2);
frost$core$UInt8 $tmp858 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp859 = frost$core$Char8$init$frost$core$UInt8($tmp858);
int64_t $tmp860 = $tmp857.value;
$tmp856[$tmp860] = $tmp859;
goto block2;
block2:;
// line 1111
frost$core$Int64 $tmp861 = *(&local0);
frost$core$Int64 $tmp862 = *(&local2);
int64_t $tmp863 = $tmp861.value;
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863 - $tmp864;
frost$core$Int64 $tmp866 = (frost$core$Int64) {$tmp865};
*(&local4) = $tmp866;
// line 1112
frost$core$Int64 $tmp867 = (frost$core$Int64) {0};
frost$core$Int64 $tmp868 = *(&local4);
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp870 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp867, $tmp868, $tmp869);
frost$core$Int64 $tmp871 = $tmp870.min;
*(&local5) = $tmp871;
frost$core$Int64 $tmp872 = $tmp870.max;
frost$core$Bit $tmp873 = $tmp870.inclusive;
bool $tmp874 = $tmp873.value;
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp876 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp875);
if ($tmp874) goto block13; else goto block14;
block13:;
int64_t $tmp877 = $tmp871.value;
int64_t $tmp878 = $tmp872.value;
bool $tmp879 = $tmp877 <= $tmp878;
frost$core$Bit $tmp880 = (frost$core$Bit) {$tmp879};
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block10; else goto block11;
block14:;
int64_t $tmp882 = $tmp871.value;
int64_t $tmp883 = $tmp872.value;
bool $tmp884 = $tmp882 < $tmp883;
frost$core$Bit $tmp885 = (frost$core$Bit) {$tmp884};
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block10; else goto block11;
block10:;
// line 1113
frost$core$Char8* $tmp887 = *(&local1);
frost$core$Int64 $tmp888 = *(&local5);
frost$core$Char8* $tmp889 = *(&local1);
frost$core$Int64 $tmp890 = *(&local5);
frost$core$Int64 $tmp891 = *(&local2);
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891.value;
int64_t $tmp894 = $tmp892 + $tmp893;
frost$core$Int64 $tmp895 = (frost$core$Int64) {$tmp894};
int64_t $tmp896 = $tmp895.value;
frost$core$Char8 $tmp897 = $tmp889[$tmp896];
int64_t $tmp898 = $tmp888.value;
$tmp887[$tmp898] = $tmp897;
goto block12;
block12:;
frost$core$Int64 $tmp899 = *(&local5);
int64_t $tmp900 = $tmp872.value;
int64_t $tmp901 = $tmp899.value;
int64_t $tmp902 = $tmp900 - $tmp901;
frost$core$Int64 $tmp903 = (frost$core$Int64) {$tmp902};
frost$core$UInt64 $tmp904 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp903);
if ($tmp874) goto block16; else goto block17;
block16:;
uint64_t $tmp905 = $tmp904.value;
uint64_t $tmp906 = $tmp876.value;
bool $tmp907 = $tmp905 >= $tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block15; else goto block11;
block17:;
uint64_t $tmp910 = $tmp904.value;
uint64_t $tmp911 = $tmp876.value;
bool $tmp912 = $tmp910 > $tmp911;
frost$core$Bit $tmp913 = (frost$core$Bit) {$tmp912};
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block15; else goto block11;
block15:;
int64_t $tmp915 = $tmp899.value;
int64_t $tmp916 = $tmp875.value;
int64_t $tmp917 = $tmp915 + $tmp916;
frost$core$Int64 $tmp918 = (frost$core$Int64) {$tmp917};
*(&local5) = $tmp918;
goto block10;
block11:;
// line 1115
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp919 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp920 = *(&local1);
frost$core$Int64 $tmp921 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp919, $tmp920, $tmp921);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
return $tmp919;

}
frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String(frost$core$UInt8 param0, frost$core$String* param1) {

// line 1121
frost$core$Bit $tmp922 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp923 = frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp924 = (frost$core$UInt64) {255};
frost$core$String* $tmp925 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp922, $tmp923, $tmp924, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
return $tmp925;

}
void frost$core$UInt8$cleanup(frost$core$UInt8 param0) {

return;

}

