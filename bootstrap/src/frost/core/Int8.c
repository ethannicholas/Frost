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

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$core$Int8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$_frost$collections$ListView, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int8$_frost$core$Equatable, { frost$core$Int8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$_frost$collections$Key, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Int8$class_type frost$core$Int8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$_frost$core$Formattable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$SUB$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int8$$BNOT$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$get_abs$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$get_count$R$frost$core$Int64$shim, frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int8$get_hash$R$frost$core$Int64$shim, frost$core$Int8$get_asInt16$R$frost$core$Int16$shim, frost$core$Int8$get_asInt32$R$frost$core$Int32$shim, frost$core$Int8$get_asInt64$R$frost$core$Int64$shim, frost$core$Int8$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int8$get_asReal32$R$frost$core$Real32$shim, frost$core$Int8$get_asReal64$R$frost$core$Real64$shim, frost$core$Int8$format$frost$core$String$R$frost$core$String$shim, frost$core$Int8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int8$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$CollectionView, { frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$Iterable, { frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[13]; } frost$core$Int8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$ListView, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Equatable, { frost$core$Int8$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$Key, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$Int8$wrapperclass_type frost$core$Int8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Formattable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn653)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, 7037435795584426000, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 8490098113601199511, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, 7037435795584426000, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f", 119, -919934225975377486, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };

frost$core$Int8 frost$core$Int8$init$builtin_int8(int8_t param0) {

frost$core$Int8 local0;
// line 30
int8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 36
int8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = frost$core$Int32$init$builtin_int32($tmp8);
return $tmp9;

}
frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 41
int8_t $tmp10 = param0.value;
int8_t $tmp11 = param1.value;
int8_t $tmp12 = $tmp10 + $tmp11;
frost$core$Int8 $tmp13 = frost$core$Int8$init$builtin_int8($tmp12);
return $tmp13;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 47
int8_t $tmp14 = param0.value;
int16_t $tmp15 = param1.value;
int32_t $tmp16 = ((int32_t) $tmp14) + ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = frost$core$Int32$init$builtin_int32($tmp16);
return $tmp17;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 53
int8_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = ((int32_t) $tmp18) + $tmp19;
frost$core$Int32 $tmp21 = frost$core$Int32$init$builtin_int32($tmp20);
return $tmp21;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 59
int8_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = frost$core$Int64$init$builtin_int64($tmp24);
return $tmp25;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 65
int8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
int32_t $tmp28 = ((int32_t) $tmp26) + ((int32_t) $tmp27);
frost$core$Int32 $tmp29 = frost$core$Int32$init$builtin_int32($tmp28);
return $tmp29;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 71
int8_t $tmp30 = param0.value;
uint16_t $tmp31 = param1.value;
int32_t $tmp32 = ((int32_t) $tmp30) + ((int32_t) $tmp31);
frost$core$Int32 $tmp33 = frost$core$Int32$init$builtin_int32($tmp32);
return $tmp33;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 77
int8_t $tmp34 = param0.value;
uint32_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) + ((int64_t) $tmp35);
frost$core$Int64 $tmp37 = frost$core$Int64$init$builtin_int64($tmp36);
return $tmp37;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 83
int8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
frost$core$Int32 $tmp41 = frost$core$Int32$init$builtin_int32($tmp40);
return $tmp41;

}
frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 88
int8_t $tmp42 = param0.value;
int8_t $tmp43 = param1.value;
int8_t $tmp44 = $tmp42 - $tmp43;
frost$core$Int8 $tmp45 = frost$core$Int8$init$builtin_int8($tmp44);
return $tmp45;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 94
int8_t $tmp46 = param0.value;
int16_t $tmp47 = param1.value;
int32_t $tmp48 = ((int32_t) $tmp46) - ((int32_t) $tmp47);
frost$core$Int32 $tmp49 = frost$core$Int32$init$builtin_int32($tmp48);
return $tmp49;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 100
int8_t $tmp50 = param0.value;
int32_t $tmp51 = param1.value;
int32_t $tmp52 = ((int32_t) $tmp50) - $tmp51;
frost$core$Int32 $tmp53 = frost$core$Int32$init$builtin_int32($tmp52);
return $tmp53;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 106
int8_t $tmp54 = param0.value;
int64_t $tmp55 = param1.value;
int64_t $tmp56 = ((int64_t) $tmp54) - $tmp55;
frost$core$Int64 $tmp57 = frost$core$Int64$init$builtin_int64($tmp56);
return $tmp57;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 112
int8_t $tmp58 = param0.value;
uint8_t $tmp59 = param1.value;
int32_t $tmp60 = ((int32_t) $tmp58) - ((int32_t) $tmp59);
frost$core$Int32 $tmp61 = frost$core$Int32$init$builtin_int32($tmp60);
return $tmp61;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 118
int8_t $tmp62 = param0.value;
uint16_t $tmp63 = param1.value;
int32_t $tmp64 = ((int32_t) $tmp62) - ((int32_t) $tmp63);
frost$core$Int32 $tmp65 = frost$core$Int32$init$builtin_int32($tmp64);
return $tmp65;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 124
int8_t $tmp66 = param0.value;
uint32_t $tmp67 = param1.value;
int64_t $tmp68 = ((int64_t) $tmp66) - ((int64_t) $tmp67);
frost$core$Int64 $tmp69 = frost$core$Int64$init$builtin_int64($tmp68);
return $tmp69;

}
frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8(frost$core$Int8 param0) {

// line 129
int8_t $tmp70 = param0.value;
int8_t $tmp71 = -$tmp70;
frost$core$Int8 $tmp72 = (frost$core$Int8) {$tmp71};
return $tmp72;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 135
int8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
frost$core$Int32 $tmp76 = frost$core$Int32$init$builtin_int32($tmp75);
return $tmp76;

}
frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 140
int8_t $tmp77 = param0.value;
int8_t $tmp78 = param1.value;
int8_t $tmp79 = $tmp77 * $tmp78;
frost$core$Int8 $tmp80 = frost$core$Int8$init$builtin_int8($tmp79);
return $tmp80;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 146
int8_t $tmp81 = param0.value;
int16_t $tmp82 = param1.value;
int32_t $tmp83 = ((int32_t) $tmp81) * ((int32_t) $tmp82);
frost$core$Int32 $tmp84 = frost$core$Int32$init$builtin_int32($tmp83);
return $tmp84;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 152
int8_t $tmp85 = param0.value;
int32_t $tmp86 = param1.value;
int32_t $tmp87 = ((int32_t) $tmp85) * $tmp86;
frost$core$Int32 $tmp88 = frost$core$Int32$init$builtin_int32($tmp87);
return $tmp88;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 158
int8_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) * $tmp90;
frost$core$Int64 $tmp92 = frost$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 164
int8_t $tmp93 = param0.value;
uint8_t $tmp94 = param1.value;
int32_t $tmp95 = ((int32_t) $tmp93) * ((int32_t) $tmp94);
frost$core$Int32 $tmp96 = frost$core$Int32$init$builtin_int32($tmp95);
return $tmp96;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 170
int8_t $tmp97 = param0.value;
uint16_t $tmp98 = param1.value;
int32_t $tmp99 = ((int32_t) $tmp97) * ((int32_t) $tmp98);
frost$core$Int32 $tmp100 = frost$core$Int32$init$builtin_int32($tmp99);
return $tmp100;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 176
int8_t $tmp101 = param0.value;
uint32_t $tmp102 = param1.value;
int64_t $tmp103 = ((int64_t) $tmp101) * ((int64_t) $tmp102);
frost$core$Int64 $tmp104 = frost$core$Int64$init$builtin_int64($tmp103);
return $tmp104;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 182
int8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
frost$core$Int32 $tmp108 = frost$core$Int32$init$builtin_int32($tmp107);
return $tmp108;

}
frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 187
int8_t $tmp109 = param0.value;
int8_t $tmp110 = param1.value;
int8_t $tmp111 = $tmp109 / $tmp110;
frost$core$Int8 $tmp112 = frost$core$Int8$init$builtin_int8($tmp111);
return $tmp112;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 193
int8_t $tmp113 = param0.value;
int16_t $tmp114 = param1.value;
int32_t $tmp115 = ((int32_t) $tmp113) / ((int32_t) $tmp114);
frost$core$Int32 $tmp116 = frost$core$Int32$init$builtin_int32($tmp115);
return $tmp116;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 199
int8_t $tmp117 = param0.value;
int32_t $tmp118 = param1.value;
int32_t $tmp119 = ((int32_t) $tmp117) / $tmp118;
frost$core$Int32 $tmp120 = frost$core$Int32$init$builtin_int32($tmp119);
return $tmp120;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 205
int8_t $tmp121 = param0.value;
int64_t $tmp122 = param1.value;
int64_t $tmp123 = ((int64_t) $tmp121) / $tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$builtin_int64($tmp123);
return $tmp124;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 211
int8_t $tmp125 = param0.value;
uint8_t $tmp126 = param1.value;
int32_t $tmp127 = ((int32_t) $tmp125) / ((int32_t) $tmp126);
frost$core$Int32 $tmp128 = frost$core$Int32$init$builtin_int32($tmp127);
return $tmp128;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 217
int8_t $tmp129 = param0.value;
uint16_t $tmp130 = param1.value;
int32_t $tmp131 = ((int32_t) $tmp129) / ((int32_t) $tmp130);
frost$core$Int32 $tmp132 = frost$core$Int32$init$builtin_int32($tmp131);
return $tmp132;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 223
int8_t $tmp133 = param0.value;
uint32_t $tmp134 = param1.value;
int64_t $tmp135 = ((int64_t) $tmp133) / ((int64_t) $tmp134);
frost$core$Int64 $tmp136 = frost$core$Int64$init$builtin_int64($tmp135);
return $tmp136;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 229
int8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
frost$core$Int32 $tmp140 = frost$core$Int32$init$builtin_int32($tmp139);
return $tmp140;

}
frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 234
int8_t $tmp141 = param0.value;
int8_t $tmp142 = param1.value;
int8_t $tmp143 = $tmp141 % $tmp142;
frost$core$Int8 $tmp144 = frost$core$Int8$init$builtin_int8($tmp143);
return $tmp144;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 240
int8_t $tmp145 = param0.value;
int16_t $tmp146 = param1.value;
int32_t $tmp147 = ((int32_t) $tmp145) % ((int32_t) $tmp146);
frost$core$Int32 $tmp148 = frost$core$Int32$init$builtin_int32($tmp147);
return $tmp148;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 246
int8_t $tmp149 = param0.value;
int32_t $tmp150 = param1.value;
int32_t $tmp151 = ((int32_t) $tmp149) % $tmp150;
frost$core$Int32 $tmp152 = frost$core$Int32$init$builtin_int32($tmp151);
return $tmp152;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 252
int8_t $tmp153 = param0.value;
int64_t $tmp154 = param1.value;
int64_t $tmp155 = ((int64_t) $tmp153) % $tmp154;
frost$core$Int64 $tmp156 = frost$core$Int64$init$builtin_int64($tmp155);
return $tmp156;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 258
int8_t $tmp157 = param0.value;
uint8_t $tmp158 = param1.value;
int32_t $tmp159 = ((int32_t) $tmp157) % ((int32_t) $tmp158);
frost$core$Int32 $tmp160 = frost$core$Int32$init$builtin_int32($tmp159);
return $tmp160;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 264
int8_t $tmp161 = param0.value;
uint16_t $tmp162 = param1.value;
int32_t $tmp163 = ((int32_t) $tmp161) % ((int32_t) $tmp162);
frost$core$Int32 $tmp164 = frost$core$Int32$init$builtin_int32($tmp163);
return $tmp164;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 270
int8_t $tmp165 = param0.value;
uint32_t $tmp166 = param1.value;
int64_t $tmp167 = ((int64_t) $tmp165) % ((int64_t) $tmp166);
frost$core$Int64 $tmp168 = frost$core$Int64$init$builtin_int64($tmp167);
return $tmp168;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 276
int8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
frost$core$Real32 $tmp172 = frost$core$Real32$init$builtin_float32($tmp171);
return $tmp172;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 282
int8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
frost$core$Real32 $tmp176 = frost$core$Real32$init$builtin_float32($tmp175);
return $tmp176;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 288
int8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
frost$core$Real32 $tmp180 = frost$core$Real32$init$builtin_float32($tmp179);
return $tmp180;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 294
int8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
frost$core$Real64 $tmp184 = frost$core$Real64$init$builtin_float64($tmp183);
return $tmp184;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 300
int8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
frost$core$Real32 $tmp188 = frost$core$Real32$init$builtin_float32($tmp187);
return $tmp188;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 306
int8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
frost$core$Real32 $tmp192 = frost$core$Real32$init$builtin_float32($tmp191);
return $tmp192;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 312
int8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
frost$core$Real32 $tmp196 = frost$core$Real32$init$builtin_float32($tmp195);
return $tmp196;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// line 318
int8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
frost$core$Real64 $tmp200 = frost$core$Real64$init$builtin_float64($tmp199);
return $tmp200;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Real32 param1) {

// line 324
int8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
frost$core$Real32 $tmp204 = frost$core$Real32$init$builtin_float32($tmp203);
return $tmp204;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Real64 param1) {

// line 330
int8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
frost$core$Real64 $tmp208 = frost$core$Real64$init$builtin_float64($tmp207);
return $tmp208;

}
frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8(frost$core$Int8 param0) {

// line 335
int8_t $tmp209 = param0.value;
int8_t $tmp210 = !$tmp209;
frost$core$Int8 $tmp211 = (frost$core$Int8) {$tmp210};
return $tmp211;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 341
int8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
frost$core$Int32 $tmp215 = frost$core$Int32$init$builtin_int32($tmp214);
return $tmp215;

}
frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 346
int8_t $tmp216 = param0.value;
int8_t $tmp217 = param1.value;
int8_t $tmp218 = $tmp216 & $tmp217;
frost$core$Int8 $tmp219 = frost$core$Int8$init$builtin_int8($tmp218);
return $tmp219;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 352
int8_t $tmp220 = param0.value;
int16_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & ((int32_t) $tmp221);
frost$core$Int32 $tmp223 = frost$core$Int32$init$builtin_int32($tmp222);
return $tmp223;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 358
int8_t $tmp224 = param0.value;
int32_t $tmp225 = param1.value;
int32_t $tmp226 = ((int32_t) $tmp224) & $tmp225;
frost$core$Int32 $tmp227 = frost$core$Int32$init$builtin_int32($tmp226);
return $tmp227;

}
frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 364
int8_t $tmp228 = param0.value;
int64_t $tmp229 = param1.value;
int64_t $tmp230 = ((int64_t) $tmp228) & $tmp229;
frost$core$Int64 $tmp231 = frost$core$Int64$init$builtin_int64($tmp230);
return $tmp231;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 370
int8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint32_t $tmp234 = ((uint32_t) $tmp232) & ((uint32_t) $tmp233);
frost$core$UInt32 $tmp235 = frost$core$UInt32$init$builtin_uint32($tmp234);
return $tmp235;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 376
int8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
frost$core$UInt32 $tmp239 = frost$core$UInt32$init$builtin_uint32($tmp238);
return $tmp239;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 382
int8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
frost$core$UInt32 $tmp243 = frost$core$UInt32$init$builtin_uint32($tmp242);
return $tmp243;

}
frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// line 388
int8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
frost$core$UInt64 $tmp247 = frost$core$UInt64$init$builtin_uint64($tmp246);
return $tmp247;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 394
int8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
frost$core$Int32 $tmp251 = frost$core$Int32$init$builtin_int32($tmp250);
return $tmp251;

}
frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 399
int8_t $tmp252 = param0.value;
int8_t $tmp253 = param1.value;
int8_t $tmp254 = $tmp252 | $tmp253;
frost$core$Int8 $tmp255 = frost$core$Int8$init$builtin_int8($tmp254);
return $tmp255;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 405
int8_t $tmp256 = param0.value;
int16_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | ((int32_t) $tmp257);
frost$core$Int32 $tmp259 = frost$core$Int32$init$builtin_int32($tmp258);
return $tmp259;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 411
int8_t $tmp260 = param0.value;
int32_t $tmp261 = param1.value;
int32_t $tmp262 = ((int32_t) $tmp260) | $tmp261;
frost$core$Int32 $tmp263 = frost$core$Int32$init$builtin_int32($tmp262);
return $tmp263;

}
frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 417
int8_t $tmp264 = param0.value;
int64_t $tmp265 = param1.value;
int64_t $tmp266 = ((int64_t) $tmp264) | $tmp265;
frost$core$Int64 $tmp267 = frost$core$Int64$init$builtin_int64($tmp266);
return $tmp267;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 423
int8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint32_t $tmp270 = ((uint32_t) $tmp268) | ((uint32_t) $tmp269);
frost$core$UInt32 $tmp271 = frost$core$UInt32$init$builtin_uint32($tmp270);
return $tmp271;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 429
int8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
frost$core$UInt32 $tmp275 = frost$core$UInt32$init$builtin_uint32($tmp274);
return $tmp275;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 435
int8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
frost$core$UInt32 $tmp279 = frost$core$UInt32$init$builtin_uint32($tmp278);
return $tmp279;

}
frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// line 441
int8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
frost$core$UInt64 $tmp283 = frost$core$UInt64$init$builtin_uint64($tmp282);
return $tmp283;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 447
int8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
frost$core$Int32 $tmp287 = frost$core$Int32$init$builtin_int32($tmp286);
return $tmp287;

}
frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 452
int8_t $tmp288 = param0.value;
int8_t $tmp289 = param1.value;
int8_t $tmp290 = $tmp288 ^ $tmp289;
frost$core$Int8 $tmp291 = frost$core$Int8$init$builtin_int8($tmp290);
return $tmp291;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 458
int8_t $tmp292 = param0.value;
int16_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ ((int32_t) $tmp293);
frost$core$Int32 $tmp295 = frost$core$Int32$init$builtin_int32($tmp294);
return $tmp295;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 464
int8_t $tmp296 = param0.value;
int32_t $tmp297 = param1.value;
int32_t $tmp298 = ((int32_t) $tmp296) ^ $tmp297;
frost$core$Int32 $tmp299 = frost$core$Int32$init$builtin_int32($tmp298);
return $tmp299;

}
frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 470
int8_t $tmp300 = param0.value;
int64_t $tmp301 = param1.value;
int64_t $tmp302 = ((int64_t) $tmp300) ^ $tmp301;
frost$core$Int64 $tmp303 = frost$core$Int64$init$builtin_int64($tmp302);
return $tmp303;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 476
int8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint32_t $tmp306 = ((uint32_t) $tmp304) ^ ((uint32_t) $tmp305);
frost$core$UInt32 $tmp307 = frost$core$UInt32$init$builtin_uint32($tmp306);
return $tmp307;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 482
int8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
frost$core$UInt32 $tmp311 = frost$core$UInt32$init$builtin_uint32($tmp310);
return $tmp311;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 488
int8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
frost$core$UInt32 $tmp315 = frost$core$UInt32$init$builtin_uint32($tmp314);
return $tmp315;

}
frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// line 494
int8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
frost$core$UInt64 $tmp319 = frost$core$UInt64$init$builtin_uint64($tmp318);
return $tmp319;

}
frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 500
int8_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
int32_t $tmp322 = ((int32_t) $tmp320) << ((int32_t) $tmp321);
frost$core$Int32 $tmp323 = frost$core$Int32$init$builtin_int32($tmp322);
return $tmp323;

}
frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 505
int8_t $tmp324 = param0.value;
int8_t $tmp325 = param1.value;
int8_t $tmp326 = $tmp324 << $tmp325;
frost$core$Int8 $tmp327 = frost$core$Int8$init$builtin_int8($tmp326);
return $tmp327;

}
frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 511
int8_t $tmp328 = param0.value;
int8_t $tmp329 = param1.value;
int32_t $tmp330 = ((int32_t) $tmp328) >> ((int32_t) $tmp329);
frost$core$Int32 $tmp331 = frost$core$Int32$init$builtin_int32($tmp330);
return $tmp331;

}
frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 516
int8_t $tmp332 = param0.value;
int8_t $tmp333 = param1.value;
int8_t $tmp334 = $tmp332 >> $tmp333;
frost$core$Int8 $tmp335 = frost$core$Int8$init$builtin_int8($tmp334);
return $tmp335;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 523
int8_t $tmp336 = param0.value;
int8_t $tmp337 = param1.value;
bool $tmp338 = $tmp336 == $tmp337;
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338);
return $tmp339;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 529
int8_t $tmp340 = param0.value;
int16_t $tmp341 = param1.value;
bool $tmp342 = ((int16_t) $tmp340) == $tmp341;
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342);
return $tmp343;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 535
int8_t $tmp344 = param0.value;
int32_t $tmp345 = param1.value;
bool $tmp346 = ((int32_t) $tmp344) == $tmp345;
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346);
return $tmp347;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 541
int8_t $tmp348 = param0.value;
int64_t $tmp349 = param1.value;
bool $tmp350 = ((int64_t) $tmp348) == $tmp349;
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350);
return $tmp351;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 547
int8_t $tmp352 = param0.value;
uint8_t $tmp353 = param1.value;
bool $tmp354 = ((int16_t) $tmp352) == ((int16_t) $tmp353);
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354);
return $tmp355;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 553
int8_t $tmp356 = param0.value;
uint16_t $tmp357 = param1.value;
bool $tmp358 = ((int32_t) $tmp356) == ((int32_t) $tmp357);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358);
return $tmp359;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 559
int8_t $tmp360 = param0.value;
uint32_t $tmp361 = param1.value;
bool $tmp362 = ((int64_t) $tmp360) == ((int64_t) $tmp361);
frost$core$Bit $tmp363 = frost$core$Bit$init$builtin_bit($tmp362);
return $tmp363;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 566
int8_t $tmp364 = param0.value;
int8_t $tmp365 = param1.value;
bool $tmp366 = $tmp364 != $tmp365;
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366);
return $tmp367;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 572
int8_t $tmp368 = param0.value;
int16_t $tmp369 = param1.value;
bool $tmp370 = ((int16_t) $tmp368) != $tmp369;
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit($tmp370);
return $tmp371;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 578
int8_t $tmp372 = param0.value;
int32_t $tmp373 = param1.value;
bool $tmp374 = ((int32_t) $tmp372) != $tmp373;
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit($tmp374);
return $tmp375;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 584
int8_t $tmp376 = param0.value;
int64_t $tmp377 = param1.value;
bool $tmp378 = ((int64_t) $tmp376) != $tmp377;
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit($tmp378);
return $tmp379;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 590
int8_t $tmp380 = param0.value;
uint8_t $tmp381 = param1.value;
bool $tmp382 = ((int16_t) $tmp380) != ((int16_t) $tmp381);
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382);
return $tmp383;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 596
int8_t $tmp384 = param0.value;
uint16_t $tmp385 = param1.value;
bool $tmp386 = ((int32_t) $tmp384) != ((int32_t) $tmp385);
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
return $tmp387;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 602
int8_t $tmp388 = param0.value;
uint32_t $tmp389 = param1.value;
bool $tmp390 = ((int64_t) $tmp388) != ((int64_t) $tmp389);
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit($tmp390);
return $tmp391;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 609
int8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = $tmp392 < $tmp393;
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394);
return $tmp395;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 615
int8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int16_t) $tmp396) < $tmp397;
frost$core$Bit $tmp399 = frost$core$Bit$init$builtin_bit($tmp398);
return $tmp399;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 621
int8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int32_t) $tmp400) < $tmp401;
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
return $tmp403;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 627
int8_t $tmp404 = param0.value;
int64_t $tmp405 = param1.value;
bool $tmp406 = ((int64_t) $tmp404) < $tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406);
return $tmp407;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 633
int8_t $tmp408 = param0.value;
uint8_t $tmp409 = param1.value;
bool $tmp410 = ((int16_t) $tmp408) < ((int16_t) $tmp409);
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit($tmp410);
return $tmp411;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 639
int8_t $tmp412 = param0.value;
uint16_t $tmp413 = param1.value;
bool $tmp414 = ((int32_t) $tmp412) < ((int32_t) $tmp413);
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit($tmp414);
return $tmp415;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 645
int8_t $tmp416 = param0.value;
uint32_t $tmp417 = param1.value;
bool $tmp418 = ((int64_t) $tmp416) < ((int64_t) $tmp417);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418);
return $tmp419;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 652
int8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = $tmp420 > $tmp421;
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422);
return $tmp423;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 658
int8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int16_t) $tmp424) > $tmp425;
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit($tmp426);
return $tmp427;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 664
int8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int32_t) $tmp428) > $tmp429;
frost$core$Bit $tmp431 = frost$core$Bit$init$builtin_bit($tmp430);
return $tmp431;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 670
int8_t $tmp432 = param0.value;
int64_t $tmp433 = param1.value;
bool $tmp434 = ((int64_t) $tmp432) > $tmp433;
frost$core$Bit $tmp435 = frost$core$Bit$init$builtin_bit($tmp434);
return $tmp435;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 676
int8_t $tmp436 = param0.value;
uint8_t $tmp437 = param1.value;
bool $tmp438 = ((int16_t) $tmp436) > ((int16_t) $tmp437);
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438);
return $tmp439;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 682
int8_t $tmp440 = param0.value;
uint16_t $tmp441 = param1.value;
bool $tmp442 = ((int32_t) $tmp440) > ((int32_t) $tmp441);
frost$core$Bit $tmp443 = frost$core$Bit$init$builtin_bit($tmp442);
return $tmp443;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 688
int8_t $tmp444 = param0.value;
uint32_t $tmp445 = param1.value;
bool $tmp446 = ((int64_t) $tmp444) > ((int64_t) $tmp445);
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit($tmp446);
return $tmp447;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 695
int8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = $tmp448 >= $tmp449;
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit($tmp450);
return $tmp451;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 701
int8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int16_t) $tmp452) >= $tmp453;
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454);
return $tmp455;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 707
int8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int32_t) $tmp456) >= $tmp457;
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458);
return $tmp459;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 713
int8_t $tmp460 = param0.value;
int64_t $tmp461 = param1.value;
bool $tmp462 = ((int64_t) $tmp460) >= $tmp461;
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit($tmp462);
return $tmp463;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 719
int8_t $tmp464 = param0.value;
uint8_t $tmp465 = param1.value;
bool $tmp466 = ((int16_t) $tmp464) >= ((int16_t) $tmp465);
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466);
return $tmp467;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 725
int8_t $tmp468 = param0.value;
uint16_t $tmp469 = param1.value;
bool $tmp470 = ((int32_t) $tmp468) >= ((int32_t) $tmp469);
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit($tmp470);
return $tmp471;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 731
int8_t $tmp472 = param0.value;
uint32_t $tmp473 = param1.value;
bool $tmp474 = ((int64_t) $tmp472) >= ((int64_t) $tmp473);
frost$core$Bit $tmp475 = frost$core$Bit$init$builtin_bit($tmp474);
return $tmp475;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 738
int8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = $tmp476 <= $tmp477;
frost$core$Bit $tmp479 = frost$core$Bit$init$builtin_bit($tmp478);
return $tmp479;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 744
int8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int16_t) $tmp480) <= $tmp481;
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit($tmp482);
return $tmp483;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 750
int8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int32_t) $tmp484) <= $tmp485;
frost$core$Bit $tmp487 = frost$core$Bit$init$builtin_bit($tmp486);
return $tmp487;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 756
int8_t $tmp488 = param0.value;
int64_t $tmp489 = param1.value;
bool $tmp490 = ((int64_t) $tmp488) <= $tmp489;
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490);
return $tmp491;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 762
int8_t $tmp492 = param0.value;
uint8_t $tmp493 = param1.value;
bool $tmp494 = ((int16_t) $tmp492) <= ((int16_t) $tmp493);
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit($tmp494);
return $tmp495;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 768
int8_t $tmp496 = param0.value;
uint16_t $tmp497 = param1.value;
bool $tmp498 = ((int32_t) $tmp496) <= ((int32_t) $tmp497);
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498);
return $tmp499;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 774
int8_t $tmp500 = param0.value;
uint32_t $tmp501 = param1.value;
bool $tmp502 = ((int64_t) $tmp500) <= ((int64_t) $tmp501);
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit($tmp502);
return $tmp503;

}
frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8(frost$core$Int8 param0) {

// line 780
frost$core$Int8 $tmp504 = (frost$core$Int8) {0};
int8_t $tmp505 = param0.value;
int8_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 < $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block1; else goto block2;
block1:;
// line 781
frost$core$Int8 $tmp510 = frost$core$Int8$$SUB$R$frost$core$Int8(param0);
return $tmp510;
block2:;
// line 783
return param0;

}
frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 789
int8_t $tmp511 = param0.value;
int8_t $tmp512 = param1.value;
bool $tmp513 = $tmp511 < $tmp512;
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block1; else goto block2;
block1:;
// line 790
int8_t $tmp516 = param0.value;
frost$core$Int8 $tmp517 = frost$core$Int8$init$builtin_int8($tmp516);
return $tmp517;
block2:;
// line 792
int8_t $tmp518 = param1.value;
frost$core$Int8 $tmp519 = frost$core$Int8$init$builtin_int8($tmp518);
return $tmp519;

}
frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 798
int8_t $tmp520 = param0.value;
int16_t $tmp521 = param1.value;
bool $tmp522 = ((int16_t) $tmp520) < $tmp521;
frost$core$Bit $tmp523 = frost$core$Bit$init$builtin_bit($tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block1; else goto block2;
block1:;
// line 799
int8_t $tmp525 = param0.value;
frost$core$Int16 $tmp526 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp525));
return $tmp526;
block2:;
// line 801
int16_t $tmp527 = param1.value;
frost$core$Int16 $tmp528 = frost$core$Int16$init$builtin_int16($tmp527);
return $tmp528;

}
frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 807
int8_t $tmp529 = param0.value;
int32_t $tmp530 = param1.value;
bool $tmp531 = ((int32_t) $tmp529) < $tmp530;
frost$core$Bit $tmp532 = frost$core$Bit$init$builtin_bit($tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block1; else goto block2;
block1:;
// line 808
int8_t $tmp534 = param0.value;
frost$core$Int32 $tmp535 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp534));
return $tmp535;
block2:;
// line 810
int32_t $tmp536 = param1.value;
frost$core$Int32 $tmp537 = frost$core$Int32$init$builtin_int32($tmp536);
return $tmp537;

}
frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 816
int8_t $tmp538 = param0.value;
int64_t $tmp539 = param1.value;
bool $tmp540 = ((int64_t) $tmp538) < $tmp539;
frost$core$Bit $tmp541 = frost$core$Bit$init$builtin_bit($tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block1; else goto block2;
block1:;
// line 817
int8_t $tmp543 = param0.value;
frost$core$Int64 $tmp544 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp543));
return $tmp544;
block2:;
// line 819
int64_t $tmp545 = param1.value;
frost$core$Int64 $tmp546 = frost$core$Int64$init$builtin_int64($tmp545);
return $tmp546;

}
frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 825
int8_t $tmp547 = param0.value;
uint8_t $tmp548 = param1.value;
bool $tmp549 = ((int16_t) $tmp547) < ((int16_t) $tmp548);
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block1:;
// line 826
int8_t $tmp552 = param0.value;
frost$core$Int16 $tmp553 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp552));
return $tmp553;
block2:;
// line 828
uint8_t $tmp554 = param1.value;
frost$core$Int16 $tmp555 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp554));
return $tmp555;

}
frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 834
int8_t $tmp556 = param0.value;
uint16_t $tmp557 = param1.value;
bool $tmp558 = ((int32_t) $tmp556) < ((int32_t) $tmp557);
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block1; else goto block2;
block1:;
// line 835
int8_t $tmp561 = param0.value;
frost$core$Int32 $tmp562 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp561));
return $tmp562;
block2:;
// line 837
uint16_t $tmp563 = param1.value;
frost$core$Int32 $tmp564 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp563));
return $tmp564;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 843
int8_t $tmp565 = param0.value;
uint32_t $tmp566 = param1.value;
bool $tmp567 = ((int64_t) $tmp565) < ((int64_t) $tmp566);
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block1; else goto block2;
block1:;
// line 844
int8_t $tmp570 = param0.value;
frost$core$Int64 $tmp571 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp570));
return $tmp571;
block2:;
// line 846
uint32_t $tmp572 = param1.value;
frost$core$Int64 $tmp573 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp572));
return $tmp573;

}
frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// line 853
int8_t $tmp574 = param0.value;
int8_t $tmp575 = param1.value;
bool $tmp576 = $tmp574 > $tmp575;
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block1; else goto block2;
block1:;
// line 854
int8_t $tmp579 = param0.value;
frost$core$Int8 $tmp580 = frost$core$Int8$init$builtin_int8($tmp579);
return $tmp580;
block2:;
// line 856
int8_t $tmp581 = param1.value;
frost$core$Int8 $tmp582 = frost$core$Int8$init$builtin_int8($tmp581);
return $tmp582;

}
frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// line 862
int8_t $tmp583 = param0.value;
int16_t $tmp584 = param1.value;
bool $tmp585 = ((int16_t) $tmp583) > $tmp584;
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit($tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block1; else goto block2;
block1:;
// line 863
int8_t $tmp588 = param0.value;
frost$core$Int16 $tmp589 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp588));
return $tmp589;
block2:;
// line 865
int16_t $tmp590 = param1.value;
frost$core$Int16 $tmp591 = frost$core$Int16$init$builtin_int16($tmp590);
return $tmp591;

}
frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// line 871
int8_t $tmp592 = param0.value;
int32_t $tmp593 = param1.value;
bool $tmp594 = ((int32_t) $tmp592) > $tmp593;
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block1; else goto block2;
block1:;
// line 872
int8_t $tmp597 = param0.value;
frost$core$Int32 $tmp598 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp597));
return $tmp598;
block2:;
// line 874
int32_t $tmp599 = param1.value;
frost$core$Int32 $tmp600 = frost$core$Int32$init$builtin_int32($tmp599);
return $tmp600;

}
frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// line 880
int8_t $tmp601 = param0.value;
int64_t $tmp602 = param1.value;
bool $tmp603 = ((int64_t) $tmp601) > $tmp602;
frost$core$Bit $tmp604 = frost$core$Bit$init$builtin_bit($tmp603);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block1; else goto block2;
block1:;
// line 881
int8_t $tmp606 = param0.value;
frost$core$Int64 $tmp607 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp606));
return $tmp607;
block2:;
// line 883
int64_t $tmp608 = param1.value;
frost$core$Int64 $tmp609 = frost$core$Int64$init$builtin_int64($tmp608);
return $tmp609;

}
frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// line 889
int8_t $tmp610 = param0.value;
uint8_t $tmp611 = param1.value;
bool $tmp612 = ((int16_t) $tmp610) > ((int16_t) $tmp611);
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit($tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block1:;
// line 890
int8_t $tmp615 = param0.value;
frost$core$Int16 $tmp616 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp615));
return $tmp616;
block2:;
// line 892
uint8_t $tmp617 = param1.value;
frost$core$Int16 $tmp618 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp617));
return $tmp618;

}
frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// line 898
int8_t $tmp619 = param0.value;
uint16_t $tmp620 = param1.value;
bool $tmp621 = ((int32_t) $tmp619) > ((int32_t) $tmp620);
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit($tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block1; else goto block2;
block1:;
// line 899
int8_t $tmp624 = param0.value;
frost$core$Int32 $tmp625 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp624));
return $tmp625;
block2:;
// line 901
uint16_t $tmp626 = param1.value;
frost$core$Int32 $tmp627 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp626));
return $tmp627;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// line 907
int8_t $tmp628 = param0.value;
uint32_t $tmp629 = param1.value;
bool $tmp630 = ((int64_t) $tmp628) > ((int64_t) $tmp629);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block1; else goto block2;
block1:;
// line 908
int8_t $tmp633 = param0.value;
frost$core$Int64 $tmp634 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp633));
return $tmp634;
block2:;
// line 910
uint32_t $tmp635 = param1.value;
frost$core$Int64 $tmp636 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp635));
return $tmp636;

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$Range$LTfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$Range$LTfrost$core$Int8$GT param0) {

// line 916
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp637 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
frost$core$Int8 $tmp638 = param0.min;
frost$core$Int8 $tmp639 = param0.max;
frost$core$Int8 $tmp640 = (frost$core$Int8) {1};
frost$core$Bit $tmp641 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp642 = frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$init$frost$core$Int8$frost$core$Int8$frost$core$Int8$frost$core$Bit($tmp638, $tmp639, $tmp640, $tmp641);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp637, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp637)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
return ((frost$collections$ListView*) $tmp637);

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

// line 921
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp643 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp643, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp643)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
return ((frost$collections$ListView*) $tmp643);

}
frost$core$Bit frost$core$Int8$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp644 = (frost$core$Int64) {0};
int64_t $tmp645 = param1.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 >= $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block3; else goto block2;
block3:;
frost$core$Int8$wrapper* $tmp650;
$tmp650 = (frost$core$Int8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Int8$wrapperclass);
$tmp650->value = param0;
ITable* $tmp651 = ((frost$collections$CollectionView*) $tmp650)->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Int64 $tmp654 = $tmp652(((frost$collections$CollectionView*) $tmp650));
int64_t $tmp655 = param1.value;
int64_t $tmp656 = $tmp654.value;
bool $tmp657 = $tmp655 < $tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657};
bool $tmp659 = $tmp658.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp650)));
if ($tmp659) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {926};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s661, $tmp660, &$s662);
abort(); // unreachable
block1:;
// line 927
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
frost$core$Int64 $tmp664 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp663, param1);
frost$core$Int64 $tmp665 = frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp664);
frost$core$Int64 $tmp666 = (frost$core$Int64) {0};
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 != $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
return $tmp670;

}
frost$core$Int64 frost$core$Int8$get_count$R$frost$core$Int64(frost$core$Int8 param0) {

// line 933
frost$core$Int64 $tmp671 = (frost$core$Int64) {8};
return $tmp671;

}
frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int8 param0) {

// line 938
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp672 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp673 = frost$core$Int8$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp674 = (frost$core$UInt64) {128};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp672, $tmp673, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp672)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return ((frost$collections$Iterator*) $tmp672);

}
frost$core$Int64 frost$core$Int8$get_hash$R$frost$core$Int64(frost$core$Int8 param0) {

// line 943
int8_t $tmp675 = param0.value;
frost$core$Int64 $tmp676 = (frost$core$Int64) {((int64_t) $tmp675)};
return $tmp676;

}
frost$core$Int8$nullable frost$core$Int8$parse$frost$core$String$frost$core$Int64$R$frost$core$Int8$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp677 = (frost$core$Int64) {2};
int64_t $tmp678 = param1.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 >= $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {36};
int64_t $tmp684 = param1.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 <= $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp689 = (frost$core$Int64) {949};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s690, $tmp689, &$s691);
abort(); // unreachable
block1:;
// line 950
frost$core$Bit $tmp692 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s693);
bool $tmp694 = $tmp692.value;
if ($tmp694) goto block4; else goto block6;
block4:;
// line 951
frost$core$Int64 $tmp695 = (frost$core$Int64) {1};
frost$core$Bit $tmp696 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp697 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp695, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp696);
frost$core$String* $tmp698 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp697);
frost$core$UInt64$nullable $tmp699 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp698, param1);
*(&local0) = $tmp699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// line 952
frost$core$UInt64$nullable $tmp700 = *(&local0);
frost$core$Bit $tmp701 = frost$core$Bit$init$builtin_bit(!$tmp700.nonnull);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block7; else goto block8;
block7:;
// line 953
return ((frost$core$Int8$nullable) { .nonnull = false });
block8:;
// line 955
frost$core$UInt64$nullable $tmp703 = *(&local0);
frost$core$Int8 $tmp704 = frost$core$UInt64$get_asInt8$R$frost$core$Int8(((frost$core$UInt64) $tmp703.value));
frost$core$Int8 $tmp705 = frost$core$Int8$$SUB$R$frost$core$Int8($tmp704);
return ((frost$core$Int8$nullable) { $tmp705, true });
block6:;
// line 1
// line 958
frost$core$UInt64$nullable $tmp706 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp706;
// line 959
frost$core$UInt64$nullable $tmp707 = *(&local1);
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit(!$tmp707.nonnull);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block9; else goto block10;
block9:;
// line 960
return ((frost$core$Int8$nullable) { .nonnull = false });
block10:;
// line 962
frost$core$UInt64$nullable $tmp710 = *(&local1);
frost$core$Int8 $tmp711 = frost$core$UInt64$get_asInt8$R$frost$core$Int8(((frost$core$UInt64) $tmp710.value));
return ((frost$core$Int8$nullable) { $tmp711, true });
block5:;
goto block11;
block11:;

}
frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16(frost$core$Int8 param0) {

// line 969
int8_t $tmp712 = param0.value;
frost$core$Int16 $tmp713 = (frost$core$Int16) {((int16_t) $tmp712)};
return $tmp713;

}
frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32(frost$core$Int8 param0) {

// line 975
int8_t $tmp714 = param0.value;
frost$core$Int32 $tmp715 = (frost$core$Int32) {((int32_t) $tmp714)};
return $tmp715;

}
frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64(frost$core$Int8 param0) {

// line 981
int8_t $tmp716 = param0.value;
frost$core$Int64 $tmp717 = (frost$core$Int64) {((int64_t) $tmp716)};
return $tmp717;

}
frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8(frost$core$Int8 param0) {

// line 987
int8_t $tmp718 = param0.value;
frost$core$UInt8 $tmp719 = (frost$core$UInt8) {((uint8_t) $tmp718)};
return $tmp719;

}
frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16(frost$core$Int8 param0) {

// line 993
int8_t $tmp720 = param0.value;
frost$core$UInt16 $tmp721 = (frost$core$UInt16) {((uint16_t) $tmp720)};
return $tmp721;

}
frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32(frost$core$Int8 param0) {

// line 999
int8_t $tmp722 = param0.value;
frost$core$UInt32 $tmp723 = (frost$core$UInt32) {((uint32_t) $tmp722)};
return $tmp723;

}
frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64(frost$core$Int8 param0) {

// line 1005
int8_t $tmp724 = param0.value;
frost$core$UInt64 $tmp725 = (frost$core$UInt64) {((uint64_t) $tmp724)};
return $tmp725;

}
frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32(frost$core$Int8 param0) {

// line 1011
int8_t $tmp726 = param0.value;
frost$core$Real32 $tmp727 = (frost$core$Real32) {((float) $tmp726)};
return $tmp727;

}
frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64(frost$core$Int8 param0) {

// line 1017
int8_t $tmp728 = param0.value;
frost$core$Real64 $tmp729 = (frost$core$Real64) {((double) $tmp728)};
return $tmp729;

}
frost$core$String* frost$core$Int8$get_asString$R$frost$core$String(frost$core$Int8 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int8 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 1023
frost$core$Int64 $tmp730 = (frost$core$Int64) {4};
*(&local0) = $tmp730;
// line 1024
frost$core$Int64 $tmp731 = *(&local0);
int64_t $tmp732 = $tmp731.value;
frost$core$Char8* $tmp733 = ((frost$core$Char8*) frostAlloc($tmp732 * 1));
*(&local1) = $tmp733;
// line 1025
frost$core$Int64 $tmp734 = *(&local0);
frost$core$Int64 $tmp735 = (frost$core$Int64) {1};
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735.value;
int64_t $tmp738 = $tmp736 - $tmp737;
frost$core$Int64 $tmp739 = (frost$core$Int64) {$tmp738};
*(&local2) = $tmp739;
// line 1026
*(&local3) = param0;
// line 1027
frost$core$Int8 $tmp740 = *(&local3);
frost$core$Int8 $tmp741 = (frost$core$Int8) {0};
int8_t $tmp742 = $tmp740.value;
int8_t $tmp743 = $tmp741.value;
bool $tmp744 = $tmp742 >= $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block1; else goto block3;
block1:;
// line 1028
goto block4;
block4:;
// line 1029
frost$core$Char8* $tmp747 = *(&local1);
frost$core$Int64 $tmp748 = *(&local2);
frost$core$Int8 $tmp749 = *(&local3);
frost$core$Int8 $tmp750 = (frost$core$Int8) {10};
frost$core$Int32 $tmp751 = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32($tmp749, $tmp750);
frost$core$Int32 $tmp752 = (frost$core$Int32) {48};
int32_t $tmp753 = $tmp751.value;
int32_t $tmp754 = $tmp752.value;
int32_t $tmp755 = $tmp753 + $tmp754;
frost$core$Int32 $tmp756 = (frost$core$Int32) {$tmp755};
frost$core$UInt8 $tmp757 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp756);
frost$core$Char8 $tmp758 = frost$core$Char8$init$frost$core$UInt8($tmp757);
int64_t $tmp759 = $tmp748.value;
$tmp747[$tmp759] = $tmp758;
// line 1030
frost$core$Int8 $tmp760 = *(&local3);
frost$core$Int32 $tmp761 = frost$core$Int32$init$frost$core$Int8($tmp760);
frost$core$Int32 $tmp762 = (frost$core$Int32) {10};
int32_t $tmp763 = $tmp761.value;
int32_t $tmp764 = $tmp762.value;
int32_t $tmp765 = $tmp763 / $tmp764;
frost$core$Int32 $tmp766 = (frost$core$Int32) {$tmp765};
frost$core$Int8 $tmp767 = frost$core$Int32$get_asInt8$R$frost$core$Int8($tmp766);
*(&local3) = $tmp767;
// line 1031
frost$core$Int64 $tmp768 = *(&local2);
frost$core$Int64 $tmp769 = (frost$core$Int64) {1};
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770 - $tmp771;
frost$core$Int64 $tmp773 = (frost$core$Int64) {$tmp772};
*(&local2) = $tmp773;
goto block5;
block5:;
frost$core$Int8 $tmp774 = *(&local3);
frost$core$Int8 $tmp775 = (frost$core$Int8) {0};
int8_t $tmp776 = $tmp774.value;
int8_t $tmp777 = $tmp775.value;
bool $tmp778 = $tmp776 > $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block4; else goto block6;
block6:;
// line 1034
frost$core$Int64 $tmp781 = *(&local2);
frost$core$Int64 $tmp782 = (frost$core$Int64) {1};
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782.value;
int64_t $tmp785 = $tmp783 + $tmp784;
frost$core$Int64 $tmp786 = (frost$core$Int64) {$tmp785};
*(&local2) = $tmp786;
goto block2;
block3:;
// line 1
// line 1037
goto block7;
block7:;
// line 1038
frost$core$Char8* $tmp787 = *(&local1);
frost$core$Int64 $tmp788 = *(&local2);
frost$core$Int32 $tmp789 = (frost$core$Int32) {48};
frost$core$Int8 $tmp790 = *(&local3);
frost$core$Int8 $tmp791 = (frost$core$Int8) {10};
frost$core$Int32 $tmp792 = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32($tmp790, $tmp791);
int32_t $tmp793 = $tmp789.value;
int32_t $tmp794 = $tmp792.value;
int32_t $tmp795 = $tmp793 - $tmp794;
frost$core$Int32 $tmp796 = (frost$core$Int32) {$tmp795};
frost$core$UInt8 $tmp797 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp796);
frost$core$Char8 $tmp798 = frost$core$Char8$init$frost$core$UInt8($tmp797);
int64_t $tmp799 = $tmp788.value;
$tmp787[$tmp799] = $tmp798;
// line 1039
frost$core$Int8 $tmp800 = *(&local3);
frost$core$Int32 $tmp801 = frost$core$Int32$init$frost$core$Int8($tmp800);
frost$core$Int32 $tmp802 = (frost$core$Int32) {10};
int32_t $tmp803 = $tmp801.value;
int32_t $tmp804 = $tmp802.value;
int32_t $tmp805 = $tmp803 / $tmp804;
frost$core$Int32 $tmp806 = (frost$core$Int32) {$tmp805};
frost$core$Int8 $tmp807 = frost$core$Int32$get_asInt8$R$frost$core$Int8($tmp806);
*(&local3) = $tmp807;
// line 1040
frost$core$Int64 $tmp808 = *(&local2);
frost$core$Int64 $tmp809 = (frost$core$Int64) {1};
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810 - $tmp811;
frost$core$Int64 $tmp813 = (frost$core$Int64) {$tmp812};
*(&local2) = $tmp813;
goto block8;
block8:;
frost$core$Int8 $tmp814 = *(&local3);
frost$core$Int8 $tmp815 = (frost$core$Int8) {0};
int8_t $tmp816 = $tmp814.value;
int8_t $tmp817 = $tmp815.value;
bool $tmp818 = $tmp816 < $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block7; else goto block9;
block9:;
// line 1043
frost$core$Char8* $tmp821 = *(&local1);
frost$core$Int64 $tmp822 = *(&local2);
frost$core$UInt8 $tmp823 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp824 = frost$core$Char8$init$frost$core$UInt8($tmp823);
int64_t $tmp825 = $tmp822.value;
$tmp821[$tmp825] = $tmp824;
goto block2;
block2:;
// line 1045
frost$core$Int64 $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = *(&local2);
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828 - $tmp829;
frost$core$Int64 $tmp831 = (frost$core$Int64) {$tmp830};
*(&local4) = $tmp831;
// line 1046
frost$core$Int64 $tmp832 = (frost$core$Int64) {0};
frost$core$Int64 $tmp833 = *(&local4);
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp835 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp832, $tmp833, $tmp834);
frost$core$Int64 $tmp836 = $tmp835.min;
*(&local5) = $tmp836;
frost$core$Int64 $tmp837 = $tmp835.max;
frost$core$Bit $tmp838 = $tmp835.inclusive;
bool $tmp839 = $tmp838.value;
frost$core$Int64 $tmp840 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp841 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp840);
if ($tmp839) goto block13; else goto block14;
block13:;
int64_t $tmp842 = $tmp836.value;
int64_t $tmp843 = $tmp837.value;
bool $tmp844 = $tmp842 <= $tmp843;
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block10; else goto block11;
block14:;
int64_t $tmp847 = $tmp836.value;
int64_t $tmp848 = $tmp837.value;
bool $tmp849 = $tmp847 < $tmp848;
frost$core$Bit $tmp850 = (frost$core$Bit) {$tmp849};
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block10; else goto block11;
block10:;
// line 1047
frost$core$Char8* $tmp852 = *(&local1);
frost$core$Int64 $tmp853 = *(&local5);
frost$core$Char8* $tmp854 = *(&local1);
frost$core$Int64 $tmp855 = *(&local5);
frost$core$Int64 $tmp856 = *(&local2);
int64_t $tmp857 = $tmp855.value;
int64_t $tmp858 = $tmp856.value;
int64_t $tmp859 = $tmp857 + $tmp858;
frost$core$Int64 $tmp860 = (frost$core$Int64) {$tmp859};
int64_t $tmp861 = $tmp860.value;
frost$core$Char8 $tmp862 = $tmp854[$tmp861];
int64_t $tmp863 = $tmp853.value;
$tmp852[$tmp863] = $tmp862;
goto block12;
block12:;
frost$core$Int64 $tmp864 = *(&local5);
int64_t $tmp865 = $tmp837.value;
int64_t $tmp866 = $tmp864.value;
int64_t $tmp867 = $tmp865 - $tmp866;
frost$core$Int64 $tmp868 = (frost$core$Int64) {$tmp867};
frost$core$UInt64 $tmp869 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp868);
if ($tmp839) goto block16; else goto block17;
block16:;
uint64_t $tmp870 = $tmp869.value;
uint64_t $tmp871 = $tmp841.value;
bool $tmp872 = $tmp870 >= $tmp871;
frost$core$Bit $tmp873 = (frost$core$Bit) {$tmp872};
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block15; else goto block11;
block17:;
uint64_t $tmp875 = $tmp869.value;
uint64_t $tmp876 = $tmp841.value;
bool $tmp877 = $tmp875 > $tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block15; else goto block11;
block15:;
int64_t $tmp880 = $tmp864.value;
int64_t $tmp881 = $tmp840.value;
int64_t $tmp882 = $tmp880 + $tmp881;
frost$core$Int64 $tmp883 = (frost$core$Int64) {$tmp882};
*(&local5) = $tmp883;
goto block10;
block11:;
// line 1049
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp884 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp885 = *(&local1);
frost$core$Int64 $tmp886 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp884, $tmp885, $tmp886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
return $tmp884;

}
frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String(frost$core$Int8 param0, frost$core$String* param1) {

// line 1055
int8_t $tmp887 = param0.value;
bool $tmp888 = $tmp887 < 0;
frost$core$Bit $tmp889 = frost$core$Bit$init$builtin_bit($tmp888);
frost$core$Int8 $tmp890 = frost$core$Int8$get_abs$R$frost$core$Int8(param0);
frost$core$UInt64 $tmp891 = frost$core$Int8$get_asUInt64$R$frost$core$UInt64($tmp890);
frost$core$UInt64 $tmp892 = (frost$core$UInt64) {255};
frost$core$String* $tmp893 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp889, $tmp891, $tmp892, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
return $tmp893;

}
void frost$core$Int8$cleanup(frost$core$Int8 param0) {

return;

}

