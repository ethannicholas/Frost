#include "frost/core/Int8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Key.h"
#include "frost/core/Formattable.h"
#include "frost/core/Int32.h"
#include "frost/core/Int16.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int8.GT.h"
#include "org/frostlang/frost/Int8List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$Int8$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int8$get_count$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int8$get_hash$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int8$format$frost$core$String$R$frost$core$String(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int8$get_asString$R$frost$core$String(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$$SUB$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$$BNOT$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$get_abs$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int16 result = frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int16 result = frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int8$get_bitCount$R$frost$core$Int8$shim(frost$core$Int8* sret, frost$core$Object* p0) {
    frost$core$Int8$get_bitCount$R$frost$core$Int8(sret, ((frost$core$Int8$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int8$get_asInt16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int8$get_asInt32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int8$get_asInt64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int8$get_asUInt8$R$frost$core$UInt8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int8$get_asUInt16$R$frost$core$UInt16(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int8$get_asUInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int8$get_asUInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int8$get_asReal32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int8$get_asReal64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int8$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int8$cleanup(((frost$core$Int8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int8$_frost$collections$CollectionView, { frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int8$_frost$collections$Iterable, { frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$_frost$collections$ListView, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int8$_frost$core$Equatable, { frost$core$Int8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$_frost$collections$Key, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Int8$class_type frost$core$Int8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$_frost$core$Formattable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$SUB$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int8$$BNOT$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$get_abs$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$get_count$R$frost$core$Int64$shim, frost$core$Int8$get_bitCount$R$frost$core$Int8$shim, frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int8$get_hash$R$frost$core$Int64$shim, frost$core$Int8$get_asInt16$R$frost$core$Int16$shim, frost$core$Int8$get_asInt32$R$frost$core$Int32$shim, frost$core$Int8$get_asInt64$R$frost$core$Int64$shim, frost$core$Int8$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int8$get_asReal32$R$frost$core$Real32$shim, frost$core$Int8$get_asReal64$R$frost$core$Real64$shim, frost$core$Int8$format$frost$core$String$R$frost$core$String$shim, frost$core$Int8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$CollectionView, { frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$Iterable, { frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$ListView, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Equatable, { frost$core$Int8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$Key, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$Int8$wrapperclass_type frost$core$Int8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Formattable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn655)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, 7037435795584426000, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 8490098113601199511, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, 7037435795584426000, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f", 119, -919934225975377486, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };

frost$core$Int8 frost$core$Int8$init$builtin_int8(int8_t param0) {

frost$core$Int8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:30
int8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:36
int8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = frost$core$Int32$init$builtin_int32($tmp8);
return $tmp9;

}
frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:41
int8_t $tmp10 = param0.value;
int8_t $tmp11 = param1.value;
int8_t $tmp12 = $tmp10 + $tmp11;
frost$core$Int8 $tmp13 = frost$core$Int8$init$builtin_int8($tmp12);
return $tmp13;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:47
int8_t $tmp14 = param0.value;
int16_t $tmp15 = param1.value;
int32_t $tmp16 = ((int32_t) $tmp14) + ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = frost$core$Int32$init$builtin_int32($tmp16);
return $tmp17;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:53
int8_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = ((int32_t) $tmp18) + $tmp19;
frost$core$Int32 $tmp21 = frost$core$Int32$init$builtin_int32($tmp20);
return $tmp21;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:59
int8_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = frost$core$Int64$init$builtin_int64($tmp24);
return $tmp25;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:65
int8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
int32_t $tmp28 = ((int32_t) $tmp26) + ((int32_t) $tmp27);
frost$core$Int32 $tmp29 = frost$core$Int32$init$builtin_int32($tmp28);
return $tmp29;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:71
int8_t $tmp30 = param0.value;
uint16_t $tmp31 = param1.value;
int32_t $tmp32 = ((int32_t) $tmp30) + ((int32_t) $tmp31);
frost$core$Int32 $tmp33 = frost$core$Int32$init$builtin_int32($tmp32);
return $tmp33;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:77
int8_t $tmp34 = param0.value;
uint32_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) + ((int64_t) $tmp35);
frost$core$Int64 $tmp37 = frost$core$Int64$init$builtin_int64($tmp36);
return $tmp37;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:83
int8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
frost$core$Int32 $tmp41 = frost$core$Int32$init$builtin_int32($tmp40);
return $tmp41;

}
frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:88
int8_t $tmp42 = param0.value;
int8_t $tmp43 = param1.value;
int8_t $tmp44 = $tmp42 - $tmp43;
frost$core$Int8 $tmp45 = frost$core$Int8$init$builtin_int8($tmp44);
return $tmp45;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:94
int8_t $tmp46 = param0.value;
int16_t $tmp47 = param1.value;
int32_t $tmp48 = ((int32_t) $tmp46) - ((int32_t) $tmp47);
frost$core$Int32 $tmp49 = frost$core$Int32$init$builtin_int32($tmp48);
return $tmp49;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:100
int8_t $tmp50 = param0.value;
int32_t $tmp51 = param1.value;
int32_t $tmp52 = ((int32_t) $tmp50) - $tmp51;
frost$core$Int32 $tmp53 = frost$core$Int32$init$builtin_int32($tmp52);
return $tmp53;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:106
int8_t $tmp54 = param0.value;
int64_t $tmp55 = param1.value;
int64_t $tmp56 = ((int64_t) $tmp54) - $tmp55;
frost$core$Int64 $tmp57 = frost$core$Int64$init$builtin_int64($tmp56);
return $tmp57;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:112
int8_t $tmp58 = param0.value;
uint8_t $tmp59 = param1.value;
int32_t $tmp60 = ((int32_t) $tmp58) - ((int32_t) $tmp59);
frost$core$Int32 $tmp61 = frost$core$Int32$init$builtin_int32($tmp60);
return $tmp61;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:118
int8_t $tmp62 = param0.value;
uint16_t $tmp63 = param1.value;
int32_t $tmp64 = ((int32_t) $tmp62) - ((int32_t) $tmp63);
frost$core$Int32 $tmp65 = frost$core$Int32$init$builtin_int32($tmp64);
return $tmp65;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:124
int8_t $tmp66 = param0.value;
uint32_t $tmp67 = param1.value;
int64_t $tmp68 = ((int64_t) $tmp66) - ((int64_t) $tmp67);
frost$core$Int64 $tmp69 = frost$core$Int64$init$builtin_int64($tmp68);
return $tmp69;

}
frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:129
int8_t $tmp70 = param0.value;
int8_t $tmp71 = -$tmp70;
frost$core$Int8 $tmp72 = (frost$core$Int8) {$tmp71};
return $tmp72;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:135
int8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
frost$core$Int32 $tmp76 = frost$core$Int32$init$builtin_int32($tmp75);
return $tmp76;

}
frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:140
int8_t $tmp77 = param0.value;
int8_t $tmp78 = param1.value;
int8_t $tmp79 = $tmp77 * $tmp78;
frost$core$Int8 $tmp80 = frost$core$Int8$init$builtin_int8($tmp79);
return $tmp80;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:146
int8_t $tmp81 = param0.value;
int16_t $tmp82 = param1.value;
int32_t $tmp83 = ((int32_t) $tmp81) * ((int32_t) $tmp82);
frost$core$Int32 $tmp84 = frost$core$Int32$init$builtin_int32($tmp83);
return $tmp84;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:152
int8_t $tmp85 = param0.value;
int32_t $tmp86 = param1.value;
int32_t $tmp87 = ((int32_t) $tmp85) * $tmp86;
frost$core$Int32 $tmp88 = frost$core$Int32$init$builtin_int32($tmp87);
return $tmp88;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:158
int8_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) * $tmp90;
frost$core$Int64 $tmp92 = frost$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:164
int8_t $tmp93 = param0.value;
uint8_t $tmp94 = param1.value;
int32_t $tmp95 = ((int32_t) $tmp93) * ((int32_t) $tmp94);
frost$core$Int32 $tmp96 = frost$core$Int32$init$builtin_int32($tmp95);
return $tmp96;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:170
int8_t $tmp97 = param0.value;
uint16_t $tmp98 = param1.value;
int32_t $tmp99 = ((int32_t) $tmp97) * ((int32_t) $tmp98);
frost$core$Int32 $tmp100 = frost$core$Int32$init$builtin_int32($tmp99);
return $tmp100;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:176
int8_t $tmp101 = param0.value;
uint32_t $tmp102 = param1.value;
int64_t $tmp103 = ((int64_t) $tmp101) * ((int64_t) $tmp102);
frost$core$Int64 $tmp104 = frost$core$Int64$init$builtin_int64($tmp103);
return $tmp104;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:182
int8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
frost$core$Int32 $tmp108 = frost$core$Int32$init$builtin_int32($tmp107);
return $tmp108;

}
frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:187
int8_t $tmp109 = param0.value;
int8_t $tmp110 = param1.value;
int8_t $tmp111 = $tmp109 / $tmp110;
frost$core$Int8 $tmp112 = frost$core$Int8$init$builtin_int8($tmp111);
return $tmp112;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:193
int8_t $tmp113 = param0.value;
int16_t $tmp114 = param1.value;
int32_t $tmp115 = ((int32_t) $tmp113) / ((int32_t) $tmp114);
frost$core$Int32 $tmp116 = frost$core$Int32$init$builtin_int32($tmp115);
return $tmp116;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:199
int8_t $tmp117 = param0.value;
int32_t $tmp118 = param1.value;
int32_t $tmp119 = ((int32_t) $tmp117) / $tmp118;
frost$core$Int32 $tmp120 = frost$core$Int32$init$builtin_int32($tmp119);
return $tmp120;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:205
int8_t $tmp121 = param0.value;
int64_t $tmp122 = param1.value;
int64_t $tmp123 = ((int64_t) $tmp121) / $tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$builtin_int64($tmp123);
return $tmp124;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:211
int8_t $tmp125 = param0.value;
uint8_t $tmp126 = param1.value;
int32_t $tmp127 = ((int32_t) $tmp125) / ((int32_t) $tmp126);
frost$core$Int32 $tmp128 = frost$core$Int32$init$builtin_int32($tmp127);
return $tmp128;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:217
int8_t $tmp129 = param0.value;
uint16_t $tmp130 = param1.value;
int32_t $tmp131 = ((int32_t) $tmp129) / ((int32_t) $tmp130);
frost$core$Int32 $tmp132 = frost$core$Int32$init$builtin_int32($tmp131);
return $tmp132;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:223
int8_t $tmp133 = param0.value;
uint32_t $tmp134 = param1.value;
int64_t $tmp135 = ((int64_t) $tmp133) / ((int64_t) $tmp134);
frost$core$Int64 $tmp136 = frost$core$Int64$init$builtin_int64($tmp135);
return $tmp136;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:229
int8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
frost$core$Int32 $tmp140 = frost$core$Int32$init$builtin_int32($tmp139);
return $tmp140;

}
frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:234
int8_t $tmp141 = param0.value;
int8_t $tmp142 = param1.value;
int8_t $tmp143 = $tmp141 % $tmp142;
frost$core$Int8 $tmp144 = frost$core$Int8$init$builtin_int8($tmp143);
return $tmp144;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:240
int8_t $tmp145 = param0.value;
int16_t $tmp146 = param1.value;
int32_t $tmp147 = ((int32_t) $tmp145) % ((int32_t) $tmp146);
frost$core$Int32 $tmp148 = frost$core$Int32$init$builtin_int32($tmp147);
return $tmp148;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:246
int8_t $tmp149 = param0.value;
int32_t $tmp150 = param1.value;
int32_t $tmp151 = ((int32_t) $tmp149) % $tmp150;
frost$core$Int32 $tmp152 = frost$core$Int32$init$builtin_int32($tmp151);
return $tmp152;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:252
int8_t $tmp153 = param0.value;
int64_t $tmp154 = param1.value;
int64_t $tmp155 = ((int64_t) $tmp153) % $tmp154;
frost$core$Int64 $tmp156 = frost$core$Int64$init$builtin_int64($tmp155);
return $tmp156;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:258
int8_t $tmp157 = param0.value;
uint8_t $tmp158 = param1.value;
int32_t $tmp159 = ((int32_t) $tmp157) % ((int32_t) $tmp158);
frost$core$Int32 $tmp160 = frost$core$Int32$init$builtin_int32($tmp159);
return $tmp160;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:264
int8_t $tmp161 = param0.value;
uint16_t $tmp162 = param1.value;
int32_t $tmp163 = ((int32_t) $tmp161) % ((int32_t) $tmp162);
frost$core$Int32 $tmp164 = frost$core$Int32$init$builtin_int32($tmp163);
return $tmp164;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:270
int8_t $tmp165 = param0.value;
uint32_t $tmp166 = param1.value;
int64_t $tmp167 = ((int64_t) $tmp165) % ((int64_t) $tmp166);
frost$core$Int64 $tmp168 = frost$core$Int64$init$builtin_int64($tmp167);
return $tmp168;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:276
int8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
frost$core$Real32 $tmp172 = frost$core$Real32$init$builtin_float32($tmp171);
return $tmp172;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:282
int8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
frost$core$Real32 $tmp176 = frost$core$Real32$init$builtin_float32($tmp175);
return $tmp176;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:288
int8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
frost$core$Real32 $tmp180 = frost$core$Real32$init$builtin_float32($tmp179);
return $tmp180;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:294
int8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
frost$core$Real64 $tmp184 = frost$core$Real64$init$builtin_float64($tmp183);
return $tmp184;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:300
int8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
frost$core$Real32 $tmp188 = frost$core$Real32$init$builtin_float32($tmp187);
return $tmp188;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:306
int8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
frost$core$Real32 $tmp192 = frost$core$Real32$init$builtin_float32($tmp191);
return $tmp192;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:312
int8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
frost$core$Real32 $tmp196 = frost$core$Real32$init$builtin_float32($tmp195);
return $tmp196;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:318
int8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
frost$core$Real64 $tmp200 = frost$core$Real64$init$builtin_float64($tmp199);
return $tmp200;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:324
int8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
frost$core$Real32 $tmp204 = frost$core$Real32$init$builtin_float32($tmp203);
return $tmp204;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:330
int8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
frost$core$Real64 $tmp208 = frost$core$Real64$init$builtin_float64($tmp207);
return $tmp208;

}
frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:335
int8_t $tmp209 = param0.value;
int8_t $tmp210 = !$tmp209;
frost$core$Int8 $tmp211 = (frost$core$Int8) {$tmp210};
return $tmp211;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:341
int8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
frost$core$Int32 $tmp215 = frost$core$Int32$init$builtin_int32($tmp214);
return $tmp215;

}
frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:346
int8_t $tmp216 = param0.value;
int8_t $tmp217 = param1.value;
int8_t $tmp218 = $tmp216 & $tmp217;
frost$core$Int8 $tmp219 = frost$core$Int8$init$builtin_int8($tmp218);
return $tmp219;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:352
int8_t $tmp220 = param0.value;
int16_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & ((int32_t) $tmp221);
frost$core$Int32 $tmp223 = frost$core$Int32$init$builtin_int32($tmp222);
return $tmp223;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:358
int8_t $tmp224 = param0.value;
int32_t $tmp225 = param1.value;
int32_t $tmp226 = ((int32_t) $tmp224) & $tmp225;
frost$core$Int32 $tmp227 = frost$core$Int32$init$builtin_int32($tmp226);
return $tmp227;

}
frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:364
int8_t $tmp228 = param0.value;
int64_t $tmp229 = param1.value;
int64_t $tmp230 = ((int64_t) $tmp228) & $tmp229;
frost$core$Int64 $tmp231 = frost$core$Int64$init$builtin_int64($tmp230);
return $tmp231;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:370
int8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint32_t $tmp234 = ((uint32_t) $tmp232) & ((uint32_t) $tmp233);
frost$core$UInt32 $tmp235 = frost$core$UInt32$init$builtin_uint32($tmp234);
return $tmp235;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:376
int8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
frost$core$UInt32 $tmp239 = frost$core$UInt32$init$builtin_uint32($tmp238);
return $tmp239;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:382
int8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
frost$core$UInt32 $tmp243 = frost$core$UInt32$init$builtin_uint32($tmp242);
return $tmp243;

}
frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:388
int8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
frost$core$UInt64 $tmp247 = frost$core$UInt64$init$builtin_uint64($tmp246);
return $tmp247;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:394
int8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
frost$core$Int32 $tmp251 = frost$core$Int32$init$builtin_int32($tmp250);
return $tmp251;

}
frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:399
int8_t $tmp252 = param0.value;
int8_t $tmp253 = param1.value;
int8_t $tmp254 = $tmp252 | $tmp253;
frost$core$Int8 $tmp255 = frost$core$Int8$init$builtin_int8($tmp254);
return $tmp255;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:405
int8_t $tmp256 = param0.value;
int16_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | ((int32_t) $tmp257);
frost$core$Int32 $tmp259 = frost$core$Int32$init$builtin_int32($tmp258);
return $tmp259;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:411
int8_t $tmp260 = param0.value;
int32_t $tmp261 = param1.value;
int32_t $tmp262 = ((int32_t) $tmp260) | $tmp261;
frost$core$Int32 $tmp263 = frost$core$Int32$init$builtin_int32($tmp262);
return $tmp263;

}
frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:417
int8_t $tmp264 = param0.value;
int64_t $tmp265 = param1.value;
int64_t $tmp266 = ((int64_t) $tmp264) | $tmp265;
frost$core$Int64 $tmp267 = frost$core$Int64$init$builtin_int64($tmp266);
return $tmp267;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:423
int8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint32_t $tmp270 = ((uint32_t) $tmp268) | ((uint32_t) $tmp269);
frost$core$UInt32 $tmp271 = frost$core$UInt32$init$builtin_uint32($tmp270);
return $tmp271;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:429
int8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
frost$core$UInt32 $tmp275 = frost$core$UInt32$init$builtin_uint32($tmp274);
return $tmp275;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:435
int8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
frost$core$UInt32 $tmp279 = frost$core$UInt32$init$builtin_uint32($tmp278);
return $tmp279;

}
frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:441
int8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
frost$core$UInt64 $tmp283 = frost$core$UInt64$init$builtin_uint64($tmp282);
return $tmp283;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:447
int8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
frost$core$Int32 $tmp287 = frost$core$Int32$init$builtin_int32($tmp286);
return $tmp287;

}
frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:452
int8_t $tmp288 = param0.value;
int8_t $tmp289 = param1.value;
int8_t $tmp290 = $tmp288 ^ $tmp289;
frost$core$Int8 $tmp291 = frost$core$Int8$init$builtin_int8($tmp290);
return $tmp291;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:458
int8_t $tmp292 = param0.value;
int16_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ ((int32_t) $tmp293);
frost$core$Int32 $tmp295 = frost$core$Int32$init$builtin_int32($tmp294);
return $tmp295;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:464
int8_t $tmp296 = param0.value;
int32_t $tmp297 = param1.value;
int32_t $tmp298 = ((int32_t) $tmp296) ^ $tmp297;
frost$core$Int32 $tmp299 = frost$core$Int32$init$builtin_int32($tmp298);
return $tmp299;

}
frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:470
int8_t $tmp300 = param0.value;
int64_t $tmp301 = param1.value;
int64_t $tmp302 = ((int64_t) $tmp300) ^ $tmp301;
frost$core$Int64 $tmp303 = frost$core$Int64$init$builtin_int64($tmp302);
return $tmp303;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:476
int8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint32_t $tmp306 = ((uint32_t) $tmp304) ^ ((uint32_t) $tmp305);
frost$core$UInt32 $tmp307 = frost$core$UInt32$init$builtin_uint32($tmp306);
return $tmp307;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:482
int8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
frost$core$UInt32 $tmp311 = frost$core$UInt32$init$builtin_uint32($tmp310);
return $tmp311;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:488
int8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
frost$core$UInt32 $tmp315 = frost$core$UInt32$init$builtin_uint32($tmp314);
return $tmp315;

}
frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:494
int8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
frost$core$UInt64 $tmp319 = frost$core$UInt64$init$builtin_uint64($tmp318);
return $tmp319;

}
frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:500
int8_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
int32_t $tmp322 = ((int32_t) $tmp320) << ((int32_t) $tmp321);
frost$core$Int32 $tmp323 = frost$core$Int32$init$builtin_int32($tmp322);
return $tmp323;

}
frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:505
int8_t $tmp324 = param0.value;
int8_t $tmp325 = param1.value;
int8_t $tmp326 = $tmp324 << $tmp325;
frost$core$Int8 $tmp327 = frost$core$Int8$init$builtin_int8($tmp326);
return $tmp327;

}
frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:511
int8_t $tmp328 = param0.value;
int8_t $tmp329 = param1.value;
int32_t $tmp330 = ((int32_t) $tmp328) >> ((int32_t) $tmp329);
frost$core$Int32 $tmp331 = frost$core$Int32$init$builtin_int32($tmp330);
return $tmp331;

}
frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:516
int8_t $tmp332 = param0.value;
int8_t $tmp333 = param1.value;
int8_t $tmp334 = $tmp332 >> $tmp333;
frost$core$Int8 $tmp335 = frost$core$Int8$init$builtin_int8($tmp334);
return $tmp335;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:523
int8_t $tmp336 = param0.value;
int8_t $tmp337 = param1.value;
bool $tmp338 = $tmp336 == $tmp337;
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338);
return $tmp339;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:529
int8_t $tmp340 = param0.value;
int16_t $tmp341 = param1.value;
bool $tmp342 = ((int16_t) $tmp340) == $tmp341;
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342);
return $tmp343;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:535
int8_t $tmp344 = param0.value;
int32_t $tmp345 = param1.value;
bool $tmp346 = ((int32_t) $tmp344) == $tmp345;
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346);
return $tmp347;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:541
int8_t $tmp348 = param0.value;
int64_t $tmp349 = param1.value;
bool $tmp350 = ((int64_t) $tmp348) == $tmp349;
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350);
return $tmp351;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:547
int8_t $tmp352 = param0.value;
uint8_t $tmp353 = param1.value;
bool $tmp354 = ((int16_t) $tmp352) == ((int16_t) $tmp353);
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354);
return $tmp355;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:553
int8_t $tmp356 = param0.value;
uint16_t $tmp357 = param1.value;
bool $tmp358 = ((int32_t) $tmp356) == ((int32_t) $tmp357);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358);
return $tmp359;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:559
int8_t $tmp360 = param0.value;
uint32_t $tmp361 = param1.value;
bool $tmp362 = ((int64_t) $tmp360) == ((int64_t) $tmp361);
frost$core$Bit $tmp363 = frost$core$Bit$init$builtin_bit($tmp362);
return $tmp363;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:566
int8_t $tmp364 = param0.value;
int8_t $tmp365 = param1.value;
bool $tmp366 = $tmp364 != $tmp365;
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366);
return $tmp367;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:572
int8_t $tmp368 = param0.value;
int16_t $tmp369 = param1.value;
bool $tmp370 = ((int16_t) $tmp368) != $tmp369;
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit($tmp370);
return $tmp371;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:578
int8_t $tmp372 = param0.value;
int32_t $tmp373 = param1.value;
bool $tmp374 = ((int32_t) $tmp372) != $tmp373;
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit($tmp374);
return $tmp375;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:584
int8_t $tmp376 = param0.value;
int64_t $tmp377 = param1.value;
bool $tmp378 = ((int64_t) $tmp376) != $tmp377;
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit($tmp378);
return $tmp379;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:590
int8_t $tmp380 = param0.value;
uint8_t $tmp381 = param1.value;
bool $tmp382 = ((int16_t) $tmp380) != ((int16_t) $tmp381);
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382);
return $tmp383;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:596
int8_t $tmp384 = param0.value;
uint16_t $tmp385 = param1.value;
bool $tmp386 = ((int32_t) $tmp384) != ((int32_t) $tmp385);
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
return $tmp387;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:602
int8_t $tmp388 = param0.value;
uint32_t $tmp389 = param1.value;
bool $tmp390 = ((int64_t) $tmp388) != ((int64_t) $tmp389);
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit($tmp390);
return $tmp391;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:609
int8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = $tmp392 < $tmp393;
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394);
return $tmp395;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:615
int8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int16_t) $tmp396) < $tmp397;
frost$core$Bit $tmp399 = frost$core$Bit$init$builtin_bit($tmp398);
return $tmp399;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:621
int8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int32_t) $tmp400) < $tmp401;
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
return $tmp403;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:627
int8_t $tmp404 = param0.value;
int64_t $tmp405 = param1.value;
bool $tmp406 = ((int64_t) $tmp404) < $tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406);
return $tmp407;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:633
int8_t $tmp408 = param0.value;
uint8_t $tmp409 = param1.value;
bool $tmp410 = ((int16_t) $tmp408) < ((int16_t) $tmp409);
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit($tmp410);
return $tmp411;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:639
int8_t $tmp412 = param0.value;
uint16_t $tmp413 = param1.value;
bool $tmp414 = ((int32_t) $tmp412) < ((int32_t) $tmp413);
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit($tmp414);
return $tmp415;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:645
int8_t $tmp416 = param0.value;
uint32_t $tmp417 = param1.value;
bool $tmp418 = ((int64_t) $tmp416) < ((int64_t) $tmp417);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418);
return $tmp419;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:652
int8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = $tmp420 > $tmp421;
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422);
return $tmp423;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:658
int8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int16_t) $tmp424) > $tmp425;
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit($tmp426);
return $tmp427;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:664
int8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int32_t) $tmp428) > $tmp429;
frost$core$Bit $tmp431 = frost$core$Bit$init$builtin_bit($tmp430);
return $tmp431;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:670
int8_t $tmp432 = param0.value;
int64_t $tmp433 = param1.value;
bool $tmp434 = ((int64_t) $tmp432) > $tmp433;
frost$core$Bit $tmp435 = frost$core$Bit$init$builtin_bit($tmp434);
return $tmp435;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:676
int8_t $tmp436 = param0.value;
uint8_t $tmp437 = param1.value;
bool $tmp438 = ((int16_t) $tmp436) > ((int16_t) $tmp437);
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438);
return $tmp439;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:682
int8_t $tmp440 = param0.value;
uint16_t $tmp441 = param1.value;
bool $tmp442 = ((int32_t) $tmp440) > ((int32_t) $tmp441);
frost$core$Bit $tmp443 = frost$core$Bit$init$builtin_bit($tmp442);
return $tmp443;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:688
int8_t $tmp444 = param0.value;
uint32_t $tmp445 = param1.value;
bool $tmp446 = ((int64_t) $tmp444) > ((int64_t) $tmp445);
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit($tmp446);
return $tmp447;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:695
int8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = $tmp448 >= $tmp449;
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit($tmp450);
return $tmp451;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:701
int8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int16_t) $tmp452) >= $tmp453;
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454);
return $tmp455;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:707
int8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int32_t) $tmp456) >= $tmp457;
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458);
return $tmp459;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:713
int8_t $tmp460 = param0.value;
int64_t $tmp461 = param1.value;
bool $tmp462 = ((int64_t) $tmp460) >= $tmp461;
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit($tmp462);
return $tmp463;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:719
int8_t $tmp464 = param0.value;
uint8_t $tmp465 = param1.value;
bool $tmp466 = ((int16_t) $tmp464) >= ((int16_t) $tmp465);
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466);
return $tmp467;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:725
int8_t $tmp468 = param0.value;
uint16_t $tmp469 = param1.value;
bool $tmp470 = ((int32_t) $tmp468) >= ((int32_t) $tmp469);
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit($tmp470);
return $tmp471;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:731
int8_t $tmp472 = param0.value;
uint32_t $tmp473 = param1.value;
bool $tmp474 = ((int64_t) $tmp472) >= ((int64_t) $tmp473);
frost$core$Bit $tmp475 = frost$core$Bit$init$builtin_bit($tmp474);
return $tmp475;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:738
int8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = $tmp476 <= $tmp477;
frost$core$Bit $tmp479 = frost$core$Bit$init$builtin_bit($tmp478);
return $tmp479;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:744
int8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int16_t) $tmp480) <= $tmp481;
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit($tmp482);
return $tmp483;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:750
int8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int32_t) $tmp484) <= $tmp485;
frost$core$Bit $tmp487 = frost$core$Bit$init$builtin_bit($tmp486);
return $tmp487;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:756
int8_t $tmp488 = param0.value;
int64_t $tmp489 = param1.value;
bool $tmp490 = ((int64_t) $tmp488) <= $tmp489;
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490);
return $tmp491;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:762
int8_t $tmp492 = param0.value;
uint8_t $tmp493 = param1.value;
bool $tmp494 = ((int16_t) $tmp492) <= ((int16_t) $tmp493);
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit($tmp494);
return $tmp495;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:768
int8_t $tmp496 = param0.value;
uint16_t $tmp497 = param1.value;
bool $tmp498 = ((int32_t) $tmp496) <= ((int32_t) $tmp497);
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498);
return $tmp499;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:774
int8_t $tmp500 = param0.value;
uint32_t $tmp501 = param1.value;
bool $tmp502 = ((int64_t) $tmp500) <= ((int64_t) $tmp501);
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit($tmp502);
return $tmp503;

}
frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:780
frost$core$Int8 $tmp504 = (frost$core$Int8) {0};
int8_t $tmp505 = param0.value;
int8_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 < $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:781
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:781:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:129
int8_t $tmp510 = param0.value;
int8_t $tmp511 = -$tmp510;
frost$core$Int8 $tmp512 = (frost$core$Int8) {$tmp511};
return $tmp512;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:783
return param0;

}
frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:789
int8_t $tmp513 = param0.value;
int8_t $tmp514 = param1.value;
bool $tmp515 = $tmp513 < $tmp514;
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit($tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:790
int8_t $tmp518 = param0.value;
frost$core$Int8 $tmp519 = frost$core$Int8$init$builtin_int8($tmp518);
return $tmp519;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:792
int8_t $tmp520 = param1.value;
frost$core$Int8 $tmp521 = frost$core$Int8$init$builtin_int8($tmp520);
return $tmp521;

}
frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:798
int8_t $tmp522 = param0.value;
int16_t $tmp523 = param1.value;
bool $tmp524 = ((int16_t) $tmp522) < $tmp523;
frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit($tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:799
int8_t $tmp527 = param0.value;
frost$core$Int16 $tmp528 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp527));
return $tmp528;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:801
int16_t $tmp529 = param1.value;
frost$core$Int16 $tmp530 = frost$core$Int16$init$builtin_int16($tmp529);
return $tmp530;

}
frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:807
int8_t $tmp531 = param0.value;
int32_t $tmp532 = param1.value;
bool $tmp533 = ((int32_t) $tmp531) < $tmp532;
frost$core$Bit $tmp534 = frost$core$Bit$init$builtin_bit($tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:808
int8_t $tmp536 = param0.value;
frost$core$Int32 $tmp537 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp536));
return $tmp537;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:810
int32_t $tmp538 = param1.value;
frost$core$Int32 $tmp539 = frost$core$Int32$init$builtin_int32($tmp538);
return $tmp539;

}
frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:816
int8_t $tmp540 = param0.value;
int64_t $tmp541 = param1.value;
bool $tmp542 = ((int64_t) $tmp540) < $tmp541;
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit($tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:817
int8_t $tmp545 = param0.value;
frost$core$Int64 $tmp546 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp545));
return $tmp546;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:819
int64_t $tmp547 = param1.value;
frost$core$Int64 $tmp548 = frost$core$Int64$init$builtin_int64($tmp547);
return $tmp548;

}
frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:825
int8_t $tmp549 = param0.value;
uint8_t $tmp550 = param1.value;
bool $tmp551 = ((int16_t) $tmp549) < ((int16_t) $tmp550);
frost$core$Bit $tmp552 = frost$core$Bit$init$builtin_bit($tmp551);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:826
int8_t $tmp554 = param0.value;
frost$core$Int16 $tmp555 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp554));
return $tmp555;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:828
uint8_t $tmp556 = param1.value;
frost$core$Int16 $tmp557 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp556));
return $tmp557;

}
frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:834
int8_t $tmp558 = param0.value;
uint16_t $tmp559 = param1.value;
bool $tmp560 = ((int32_t) $tmp558) < ((int32_t) $tmp559);
frost$core$Bit $tmp561 = frost$core$Bit$init$builtin_bit($tmp560);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:835
int8_t $tmp563 = param0.value;
frost$core$Int32 $tmp564 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp563));
return $tmp564;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:837
uint16_t $tmp565 = param1.value;
frost$core$Int32 $tmp566 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp565));
return $tmp566;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:843
int8_t $tmp567 = param0.value;
uint32_t $tmp568 = param1.value;
bool $tmp569 = ((int64_t) $tmp567) < ((int64_t) $tmp568);
frost$core$Bit $tmp570 = frost$core$Bit$init$builtin_bit($tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:844
int8_t $tmp572 = param0.value;
frost$core$Int64 $tmp573 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp572));
return $tmp573;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:846
uint32_t $tmp574 = param1.value;
frost$core$Int64 $tmp575 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp574));
return $tmp575;

}
frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:853
int8_t $tmp576 = param0.value;
int8_t $tmp577 = param1.value;
bool $tmp578 = $tmp576 > $tmp577;
frost$core$Bit $tmp579 = frost$core$Bit$init$builtin_bit($tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:854
int8_t $tmp581 = param0.value;
frost$core$Int8 $tmp582 = frost$core$Int8$init$builtin_int8($tmp581);
return $tmp582;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:856
int8_t $tmp583 = param1.value;
frost$core$Int8 $tmp584 = frost$core$Int8$init$builtin_int8($tmp583);
return $tmp584;

}
frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:862
int8_t $tmp585 = param0.value;
int16_t $tmp586 = param1.value;
bool $tmp587 = ((int16_t) $tmp585) > $tmp586;
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit($tmp587);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:863
int8_t $tmp590 = param0.value;
frost$core$Int16 $tmp591 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp590));
return $tmp591;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:865
int16_t $tmp592 = param1.value;
frost$core$Int16 $tmp593 = frost$core$Int16$init$builtin_int16($tmp592);
return $tmp593;

}
frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:871
int8_t $tmp594 = param0.value;
int32_t $tmp595 = param1.value;
bool $tmp596 = ((int32_t) $tmp594) > $tmp595;
frost$core$Bit $tmp597 = frost$core$Bit$init$builtin_bit($tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:872
int8_t $tmp599 = param0.value;
frost$core$Int32 $tmp600 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp599));
return $tmp600;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:874
int32_t $tmp601 = param1.value;
frost$core$Int32 $tmp602 = frost$core$Int32$init$builtin_int32($tmp601);
return $tmp602;

}
frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:880
int8_t $tmp603 = param0.value;
int64_t $tmp604 = param1.value;
bool $tmp605 = ((int64_t) $tmp603) > $tmp604;
frost$core$Bit $tmp606 = frost$core$Bit$init$builtin_bit($tmp605);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:881
int8_t $tmp608 = param0.value;
frost$core$Int64 $tmp609 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp608));
return $tmp609;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:883
int64_t $tmp610 = param1.value;
frost$core$Int64 $tmp611 = frost$core$Int64$init$builtin_int64($tmp610);
return $tmp611;

}
frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:889
int8_t $tmp612 = param0.value;
uint8_t $tmp613 = param1.value;
bool $tmp614 = ((int16_t) $tmp612) > ((int16_t) $tmp613);
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:890
int8_t $tmp617 = param0.value;
frost$core$Int16 $tmp618 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp617));
return $tmp618;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:892
uint8_t $tmp619 = param1.value;
frost$core$Int16 $tmp620 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp619));
return $tmp620;

}
frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:898
int8_t $tmp621 = param0.value;
uint16_t $tmp622 = param1.value;
bool $tmp623 = ((int32_t) $tmp621) > ((int32_t) $tmp622);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:899
int8_t $tmp626 = param0.value;
frost$core$Int32 $tmp627 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp626));
return $tmp627;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:901
uint16_t $tmp628 = param1.value;
frost$core$Int32 $tmp629 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp628));
return $tmp629;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:907
int8_t $tmp630 = param0.value;
uint32_t $tmp631 = param1.value;
bool $tmp632 = ((int64_t) $tmp630) > ((int64_t) $tmp631);
frost$core$Bit $tmp633 = frost$core$Bit$init$builtin_bit($tmp632);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:908
int8_t $tmp635 = param0.value;
frost$core$Int64 $tmp636 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp635));
return $tmp636;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:910
uint32_t $tmp637 = param1.value;
frost$core$Int64 $tmp638 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp637));
return $tmp638;

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$Range$LTfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$Range$LTfrost$core$Int8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:916
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp639 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
frost$core$Int8 $tmp640 = param0.min;
frost$core$Int8 $tmp641 = param0.max;
frost$core$Int8 $tmp642 = (frost$core$Int8) {1};
frost$core$Bit $tmp643 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp644 = frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$init$frost$core$Int8$frost$core$Int8$frost$core$Int8$frost$core$Bit($tmp640, $tmp641, $tmp642, $tmp643);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp639, $tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
return ((frost$collections$ListView*) $tmp639);

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:921
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp645 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp645, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp645)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
return ((frost$collections$ListView*) $tmp645);

}
frost$core$Bit frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp646 = (frost$core$Int64) {0};
int64_t $tmp647 = param1.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 >= $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block3; else goto block2;
block3:;
frost$core$Int8$wrapper* $tmp652;
$tmp652 = (frost$core$Int8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Int8$wrapperclass);
$tmp652->value = param0;
ITable* $tmp653 = ((frost$collections$CollectionView*) $tmp652)->$class->itable;
while ($tmp653->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp653 = $tmp653->next;
}
$fn655 $tmp654 = $tmp653->methods[0];
frost$core$Int64 $tmp656 = $tmp654(((frost$collections$CollectionView*) $tmp652));
int64_t $tmp657 = param1.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 < $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp652)));
if ($tmp661) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp662 = (frost$core$Int64) {926};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s663, $tmp662, &$s664);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:927
frost$core$Int64 $tmp665 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Int8.frost:927:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:209
int64_t $tmp666 = $tmp665.value;
int64_t $tmp667 = param1.value;
int64_t $tmp668 = $tmp666 << $tmp667;
frost$core$Int64 $tmp669 = frost$core$Int64$init$builtin_int64($tmp668);
// begin inline call to function frost.core.Int8.&&(other:frost.core.Int64):frost.core.Int64 from Int8.frost:927:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:364
int8_t $tmp670 = param0.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = ((int64_t) $tmp670) & $tmp671;
frost$core$Int64 $tmp673 = frost$core$Int64$init$builtin_int64($tmp672);
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 != $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
return $tmp678;

}
frost$core$Int64 frost$core$Int8$get_count$R$frost$core$Int64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:933
frost$core$Int64 $tmp679 = (frost$core$Int64) {8};
return $tmp679;

}
frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:943
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp680 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:943:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1010
int8_t $tmp681 = param0.value;
frost$core$UInt64 $tmp682 = (frost$core$UInt64) {((uint64_t) $tmp681)};
frost$core$UInt64 $tmp683 = (frost$core$UInt64) {128};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp680, $tmp682, $tmp683);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp680)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
return ((frost$collections$Iterator*) $tmp680);

}
frost$core$Int64 frost$core$Int8$get_hash$R$frost$core$Int64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:948
int8_t $tmp684 = param0.value;
frost$core$Int64 $tmp685 = (frost$core$Int64) {((int64_t) $tmp684)};
return $tmp685;

}
frost$core$Int8$nullable frost$core$Int8$parse$frost$core$String$frost$core$Int64$R$frost$core$Int8$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp686 = (frost$core$Int64) {2};
int64_t $tmp687 = param1.value;
int64_t $tmp688 = $tmp686.value;
bool $tmp689 = $tmp687 >= $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {36};
int64_t $tmp693 = param1.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 <= $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp698 = (frost$core$Int64) {954};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s699, $tmp698, &$s700);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:955
frost$core$Bit $tmp701 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s702);
bool $tmp703 = $tmp701.value;
if ($tmp703) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:956
frost$core$Int64 $tmp704 = (frost$core$Int64) {1};
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp706 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp704, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp705);
frost$core$String* $tmp707 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp706);
frost$core$UInt64$nullable $tmp708 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp707, param1);
*(&local0) = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:957
frost$core$UInt64$nullable $tmp709 = *(&local0);
frost$core$Bit $tmp710 = frost$core$Bit$init$builtin_bit(!$tmp709.nonnull);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:958
return ((frost$core$Int8$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:960
frost$core$UInt64$nullable $tmp712 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:960:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:482
uint64_t $tmp713 = ((frost$core$UInt64) $tmp712.value).value;
frost$core$Int8 $tmp714 = (frost$core$Int8) {((int8_t) $tmp713)};
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:960:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:129
int8_t $tmp715 = $tmp714.value;
int8_t $tmp716 = -$tmp715;
frost$core$Int8 $tmp717 = (frost$core$Int8) {$tmp716};
return ((frost$core$Int8$nullable) { $tmp717, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:963
frost$core$UInt64$nullable $tmp718 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp718;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:964
frost$core$UInt64$nullable $tmp719 = *(&local1);
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit(!$tmp719.nonnull);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:965
return ((frost$core$Int8$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:967
frost$core$UInt64$nullable $tmp722 = *(&local1);
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:967:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:482
uint64_t $tmp723 = ((frost$core$UInt64) $tmp722.value).value;
frost$core$Int8 $tmp724 = (frost$core$Int8) {((int8_t) $tmp723)};
return ((frost$core$Int8$nullable) { $tmp724, true });
block5:;
goto block14;
block14:;

}
frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:974
int8_t $tmp725 = param0.value;
frost$core$Int16 $tmp726 = (frost$core$Int16) {((int16_t) $tmp725)};
return $tmp726;

}
frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:980
int8_t $tmp727 = param0.value;
frost$core$Int32 $tmp728 = (frost$core$Int32) {((int32_t) $tmp727)};
return $tmp728;

}
frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:986
int8_t $tmp729 = param0.value;
frost$core$Int64 $tmp730 = (frost$core$Int64) {((int64_t) $tmp729)};
return $tmp730;

}
frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:992
int8_t $tmp731 = param0.value;
frost$core$UInt8 $tmp732 = (frost$core$UInt8) {((uint8_t) $tmp731)};
return $tmp732;

}
frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:998
int8_t $tmp733 = param0.value;
frost$core$UInt16 $tmp734 = (frost$core$UInt16) {((uint16_t) $tmp733)};
return $tmp734;

}
frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1004
int8_t $tmp735 = param0.value;
frost$core$UInt32 $tmp736 = (frost$core$UInt32) {((uint32_t) $tmp735)};
return $tmp736;

}
frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1010
int8_t $tmp737 = param0.value;
frost$core$UInt64 $tmp738 = (frost$core$UInt64) {((uint64_t) $tmp737)};
return $tmp738;

}
frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1016
int8_t $tmp739 = param0.value;
frost$core$Real32 $tmp740 = (frost$core$Real32) {((float) $tmp739)};
return $tmp740;

}
frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1022
int8_t $tmp741 = param0.value;
frost$core$Real64 $tmp742 = (frost$core$Real64) {((double) $tmp741)};
return $tmp742;

}
frost$core$String* frost$core$Int8$get_asString$R$frost$core$String(frost$core$Int8 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int8 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1028
frost$core$Int64 $tmp743 = (frost$core$Int64) {4};
*(&local0) = $tmp743;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1029
frost$core$Int64 $tmp744 = *(&local0);
int64_t $tmp745 = $tmp744.value;
frost$core$Char8* $tmp746 = ((frost$core$Char8*) frostAlloc($tmp745 * 1));
*(&local1) = $tmp746;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1030
frost$core$Int64 $tmp747 = *(&local0);
frost$core$Int64 $tmp748 = (frost$core$Int64) {1};
int64_t $tmp749 = $tmp747.value;
int64_t $tmp750 = $tmp748.value;
int64_t $tmp751 = $tmp749 - $tmp750;
frost$core$Int64 $tmp752 = (frost$core$Int64) {$tmp751};
*(&local2) = $tmp752;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1031
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1032
frost$core$Int8 $tmp753 = *(&local3);
frost$core$Int8 $tmp754 = (frost$core$Int8) {0};
int8_t $tmp755 = $tmp753.value;
int8_t $tmp756 = $tmp754.value;
bool $tmp757 = $tmp755 >= $tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1033
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1034
frost$core$Char8* $tmp760 = *(&local1);
frost$core$Int64 $tmp761 = *(&local2);
frost$core$Int8 $tmp762 = *(&local3);
frost$core$Int8 $tmp763 = (frost$core$Int8) {10};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1034:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:229
int8_t $tmp764 = $tmp762.value;
int8_t $tmp765 = $tmp763.value;
int32_t $tmp766 = ((int32_t) $tmp764) % ((int32_t) $tmp765);
frost$core$Int32 $tmp767 = frost$core$Int32$init$builtin_int32($tmp766);
frost$core$Int32 $tmp768 = (frost$core$Int32) {48};
int32_t $tmp769 = $tmp767.value;
int32_t $tmp770 = $tmp768.value;
int32_t $tmp771 = $tmp769 + $tmp770;
frost$core$Int32 $tmp772 = (frost$core$Int32) {$tmp771};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1034:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:774
int32_t $tmp773 = $tmp772.value;
frost$core$UInt8 $tmp774 = (frost$core$UInt8) {((uint8_t) $tmp773)};
frost$core$Char8 $tmp775 = frost$core$Char8$init$frost$core$UInt8($tmp774);
int64_t $tmp776 = $tmp761.value;
$tmp760[$tmp776] = $tmp775;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1035
frost$core$Int8 $tmp777 = *(&local3);
frost$core$Int32 $tmp778 = frost$core$Int32$init$frost$core$Int8($tmp777);
frost$core$Int32 $tmp779 = (frost$core$Int32) {10};
int32_t $tmp780 = $tmp778.value;
int32_t $tmp781 = $tmp779.value;
int32_t $tmp782 = $tmp780 / $tmp781;
frost$core$Int32 $tmp783 = (frost$core$Int32) {$tmp782};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1035:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:756
int32_t $tmp784 = $tmp783.value;
frost$core$Int8 $tmp785 = (frost$core$Int8) {((int8_t) $tmp784)};
*(&local3) = $tmp785;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1036
frost$core$Int64 $tmp786 = *(&local2);
frost$core$Int64 $tmp787 = (frost$core$Int64) {1};
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787.value;
int64_t $tmp790 = $tmp788 - $tmp789;
frost$core$Int64 $tmp791 = (frost$core$Int64) {$tmp790};
*(&local2) = $tmp791;
frost$core$Int8 $tmp792 = *(&local3);
frost$core$Int8 $tmp793 = (frost$core$Int8) {0};
int8_t $tmp794 = $tmp792.value;
int8_t $tmp795 = $tmp793.value;
bool $tmp796 = $tmp794 > $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1039
frost$core$Int64 $tmp799 = *(&local2);
frost$core$Int64 $tmp800 = (frost$core$Int64) {1};
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800.value;
int64_t $tmp803 = $tmp801 + $tmp802;
frost$core$Int64 $tmp804 = (frost$core$Int64) {$tmp803};
*(&local2) = $tmp804;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1042
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1043
frost$core$Char8* $tmp805 = *(&local1);
frost$core$Int64 $tmp806 = *(&local2);
frost$core$Int32 $tmp807 = (frost$core$Int32) {48};
frost$core$Int8 $tmp808 = *(&local3);
frost$core$Int8 $tmp809 = (frost$core$Int8) {10};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1043:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:229
int8_t $tmp810 = $tmp808.value;
int8_t $tmp811 = $tmp809.value;
int32_t $tmp812 = ((int32_t) $tmp810) % ((int32_t) $tmp811);
frost$core$Int32 $tmp813 = frost$core$Int32$init$builtin_int32($tmp812);
int32_t $tmp814 = $tmp807.value;
int32_t $tmp815 = $tmp813.value;
int32_t $tmp816 = $tmp814 - $tmp815;
frost$core$Int32 $tmp817 = (frost$core$Int32) {$tmp816};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1043:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:774
int32_t $tmp818 = $tmp817.value;
frost$core$UInt8 $tmp819 = (frost$core$UInt8) {((uint8_t) $tmp818)};
frost$core$Char8 $tmp820 = frost$core$Char8$init$frost$core$UInt8($tmp819);
int64_t $tmp821 = $tmp806.value;
$tmp805[$tmp821] = $tmp820;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1044
frost$core$Int8 $tmp822 = *(&local3);
frost$core$Int32 $tmp823 = frost$core$Int32$init$frost$core$Int8($tmp822);
frost$core$Int32 $tmp824 = (frost$core$Int32) {10};
int32_t $tmp825 = $tmp823.value;
int32_t $tmp826 = $tmp824.value;
int32_t $tmp827 = $tmp825 / $tmp826;
frost$core$Int32 $tmp828 = (frost$core$Int32) {$tmp827};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1044:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:756
int32_t $tmp829 = $tmp828.value;
frost$core$Int8 $tmp830 = (frost$core$Int8) {((int8_t) $tmp829)};
*(&local3) = $tmp830;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1045
frost$core$Int64 $tmp831 = *(&local2);
frost$core$Int64 $tmp832 = (frost$core$Int64) {1};
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833 - $tmp834;
frost$core$Int64 $tmp836 = (frost$core$Int64) {$tmp835};
*(&local2) = $tmp836;
frost$core$Int8 $tmp837 = *(&local3);
frost$core$Int8 $tmp838 = (frost$core$Int8) {0};
int8_t $tmp839 = $tmp837.value;
int8_t $tmp840 = $tmp838.value;
bool $tmp841 = $tmp839 < $tmp840;
frost$core$Bit $tmp842 = (frost$core$Bit) {$tmp841};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1048
frost$core$Char8* $tmp844 = *(&local1);
frost$core$Int64 $tmp845 = *(&local2);
frost$core$UInt8 $tmp846 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp847 = frost$core$Char8$init$frost$core$UInt8($tmp846);
int64_t $tmp848 = $tmp845.value;
$tmp844[$tmp848] = $tmp847;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1050
frost$core$Int64 $tmp849 = *(&local0);
frost$core$Int64 $tmp850 = *(&local2);
int64_t $tmp851 = $tmp849.value;
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851 - $tmp852;
frost$core$Int64 $tmp854 = (frost$core$Int64) {$tmp853};
*(&local4) = $tmp854;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1051
frost$core$Int64 $tmp855 = (frost$core$Int64) {0};
frost$core$Int64 $tmp856 = *(&local4);
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp858 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp855, $tmp856, $tmp857);
frost$core$Int64 $tmp859 = $tmp858.min;
*(&local5) = $tmp859;
frost$core$Int64 $tmp860 = $tmp858.max;
frost$core$Bit $tmp861 = $tmp858.inclusive;
bool $tmp862 = $tmp861.value;
frost$core$Int64 $tmp863 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp864 = $tmp863.value;
frost$core$UInt64 $tmp865 = (frost$core$UInt64) {((uint64_t) $tmp864)};
if ($tmp862) goto block20; else goto block21;
block20:;
int64_t $tmp866 = $tmp859.value;
int64_t $tmp867 = $tmp860.value;
bool $tmp868 = $tmp866 <= $tmp867;
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block17; else goto block18;
block21:;
int64_t $tmp871 = $tmp859.value;
int64_t $tmp872 = $tmp860.value;
bool $tmp873 = $tmp871 < $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1052
frost$core$Char8* $tmp876 = *(&local1);
frost$core$Int64 $tmp877 = *(&local5);
frost$core$Char8* $tmp878 = *(&local1);
frost$core$Int64 $tmp879 = *(&local5);
frost$core$Int64 $tmp880 = *(&local2);
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880.value;
int64_t $tmp883 = $tmp881 + $tmp882;
frost$core$Int64 $tmp884 = (frost$core$Int64) {$tmp883};
int64_t $tmp885 = $tmp884.value;
frost$core$Char8 $tmp886 = $tmp878[$tmp885];
int64_t $tmp887 = $tmp877.value;
$tmp876[$tmp887] = $tmp886;
frost$core$Int64 $tmp888 = *(&local5);
int64_t $tmp889 = $tmp860.value;
int64_t $tmp890 = $tmp888.value;
int64_t $tmp891 = $tmp889 - $tmp890;
frost$core$Int64 $tmp892 = (frost$core$Int64) {$tmp891};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp893 = $tmp892.value;
frost$core$UInt64 $tmp894 = (frost$core$UInt64) {((uint64_t) $tmp893)};
if ($tmp862) goto block24; else goto block25;
block24:;
uint64_t $tmp895 = $tmp894.value;
uint64_t $tmp896 = $tmp865.value;
bool $tmp897 = $tmp895 >= $tmp896;
frost$core$Bit $tmp898 = (frost$core$Bit) {$tmp897};
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block22; else goto block18;
block25:;
uint64_t $tmp900 = $tmp894.value;
uint64_t $tmp901 = $tmp865.value;
bool $tmp902 = $tmp900 > $tmp901;
frost$core$Bit $tmp903 = (frost$core$Bit) {$tmp902};
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block22; else goto block18;
block22:;
int64_t $tmp905 = $tmp888.value;
int64_t $tmp906 = $tmp863.value;
int64_t $tmp907 = $tmp905 + $tmp906;
frost$core$Int64 $tmp908 = (frost$core$Int64) {$tmp907};
*(&local5) = $tmp908;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1054
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp909 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp910 = *(&local1);
frost$core$Int64 $tmp911 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp909, $tmp910, $tmp911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
return $tmp909;

}
frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String(frost$core$Int8 param0, frost$core$String* param1) {

frost$core$Int8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1060
int8_t $tmp912 = param0.value;
bool $tmp913 = $tmp912 < 0;
frost$core$Bit $tmp914 = frost$core$Bit$init$builtin_bit($tmp913);
// begin inline call to function frost.core.Int8.get_abs():frost.core.Int8 from Int8.frost:1060:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:780
frost$core$Int8 $tmp915 = (frost$core$Int8) {0};
int8_t $tmp916 = param0.value;
int8_t $tmp917 = $tmp915.value;
bool $tmp918 = $tmp916 < $tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:781
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:781:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:129
int8_t $tmp921 = param0.value;
int8_t $tmp922 = -$tmp921;
frost$core$Int8 $tmp923 = (frost$core$Int8) {$tmp922};
*(&local0) = $tmp923;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:783
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int8 $tmp924 = *(&local0);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:1060:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1010
int8_t $tmp925 = $tmp924.value;
frost$core$UInt64 $tmp926 = (frost$core$UInt64) {((uint64_t) $tmp925)};
frost$core$UInt64 $tmp927 = (frost$core$UInt64) {255};
frost$core$String* $tmp928 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp914, $tmp926, $tmp927, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
return $tmp928;

}
void frost$core$Int8$cleanup(frost$core$Int8 param0) {

return;

}

