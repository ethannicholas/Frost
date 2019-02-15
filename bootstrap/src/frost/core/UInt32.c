#include "frost/core/UInt32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/Range.LTfrost/core/UInt32.GT.h"
#include "org/frostlang/frost/UInt32List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$get_hash$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt32$format$frost$core$String$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$get_count$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt32$get_asString$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt32$$SUB$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt32$$BNOT$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt32$get_bitCount$R$frost$core$UInt32$shim(frost$core$UInt32* sret, frost$core$Object* p0) {
    frost$core$UInt32$get_bitCount$R$frost$core$UInt32(sret, ((frost$core$UInt32$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt32$get_asInt8$R$frost$core$Int8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt32$get_asInt16$R$frost$core$Int16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt32$get_asInt32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$get_asInt64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt32$get_asReal32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt32$get_asReal64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt32$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt32$cleanup(((frost$core$UInt32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$_frost$collections$Key, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt32$class_type frost$core$UInt32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$_frost$collections$CollectionView, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$core$UInt32$get_bitCount$R$frost$core$UInt32$shim, frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt32$get_hash$R$frost$core$Int64$shim, frost$core$UInt32$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt32$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt32$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt32$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt32$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt32$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Key, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt32$wrapperclass_type frost$core$UInt32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$CollectionView, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn484)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -6720006764078159129, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3f", 123, -8523196487543880556, NULL };

frost$core$UInt32 frost$core$UInt32$init$builtin_uint32(uint32_t param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:30
uint32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:36
uint8_t $tmp6 = param0.value;
uint32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint32_t) $tmp6);
frost$core$UInt32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:42
uint16_t $tmp9 = param0.value;
uint32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint32_t) $tmp9);
frost$core$UInt32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:48
uint32_t $tmp12 = param0.value;
int32_t $tmp13 = param1.value;
int64_t $tmp14 = ((int64_t) $tmp12) + ((int64_t) $tmp13);
frost$core$Int64 $tmp15 = (frost$core$Int64) {$tmp14};
return $tmp15;

}
frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:54
uint32_t $tmp16 = param0.value;
uint32_t $tmp17 = param1.value;
uint32_t $tmp18 = $tmp16 + $tmp17;
frost$core$UInt32 $tmp19 = (frost$core$UInt32) {$tmp18};
return $tmp19;

}
frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:60
uint32_t $tmp20 = param0.value;
uint64_t $tmp21 = param1.value;
uint64_t $tmp22 = ((uint64_t) $tmp20) + $tmp21;
frost$core$UInt64 $tmp23 = (frost$core$UInt64) {$tmp22};
return $tmp23;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:66
uint32_t $tmp24 = param0.value;
int32_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) - ((int64_t) $tmp25);
frost$core$Int64 $tmp27 = (frost$core$Int64) {$tmp26};
return $tmp27;

}
frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:72
uint32_t $tmp28 = param0.value;
uint32_t $tmp29 = param1.value;
uint32_t $tmp30 = $tmp28 - $tmp29;
frost$core$UInt32 $tmp31 = (frost$core$UInt32) {$tmp30};
return $tmp31;

}
frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:78
uint32_t $tmp32 = param0.value;
uint64_t $tmp33 = param1.value;
uint64_t $tmp34 = ((uint64_t) $tmp32) - $tmp33;
frost$core$UInt64 $tmp35 = (frost$core$UInt64) {$tmp34};
return $tmp35;

}
frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:83
uint32_t $tmp36 = param0.value;
uint32_t $tmp37 = -$tmp36;
frost$core$UInt32 $tmp38 = (frost$core$UInt32) {$tmp37};
return $tmp38;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:89
uint32_t $tmp39 = param0.value;
int32_t $tmp40 = param1.value;
int64_t $tmp41 = ((int64_t) $tmp39) * ((int64_t) $tmp40);
frost$core$Int64 $tmp42 = (frost$core$Int64) {$tmp41};
return $tmp42;

}
frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:95
uint32_t $tmp43 = param0.value;
uint32_t $tmp44 = param1.value;
uint32_t $tmp45 = $tmp43 * $tmp44;
frost$core$UInt32 $tmp46 = (frost$core$UInt32) {$tmp45};
return $tmp46;

}
frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:101
uint32_t $tmp47 = param0.value;
uint64_t $tmp48 = param1.value;
uint64_t $tmp49 = ((uint64_t) $tmp47) * $tmp48;
frost$core$UInt64 $tmp50 = (frost$core$UInt64) {$tmp49};
return $tmp50;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:107
uint32_t $tmp51 = param0.value;
int32_t $tmp52 = param1.value;
int64_t $tmp53 = ((int64_t) $tmp51) / ((int64_t) $tmp52);
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
return $tmp54;

}
frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:113
uint32_t $tmp55 = param0.value;
uint32_t $tmp56 = param1.value;
uint32_t $tmp57 = $tmp55 / $tmp56;
frost$core$UInt32 $tmp58 = (frost$core$UInt32) {$tmp57};
return $tmp58;

}
frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:119
uint32_t $tmp59 = param0.value;
uint64_t $tmp60 = param1.value;
uint64_t $tmp61 = ((uint64_t) $tmp59) / $tmp60;
frost$core$UInt64 $tmp62 = (frost$core$UInt64) {$tmp61};
return $tmp62;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:125
uint32_t $tmp63 = param0.value;
int32_t $tmp64 = param1.value;
int64_t $tmp65 = ((int64_t) $tmp63) % ((int64_t) $tmp64);
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
return $tmp66;

}
frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:131
uint32_t $tmp67 = param0.value;
uint32_t $tmp68 = param1.value;
uint32_t $tmp69 = $tmp67 % $tmp68;
frost$core$UInt32 $tmp70 = (frost$core$UInt32) {$tmp69};
return $tmp70;

}
frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:137
uint32_t $tmp71 = param0.value;
uint64_t $tmp72 = param1.value;
uint64_t $tmp73 = ((uint64_t) $tmp71) % $tmp72;
frost$core$UInt64 $tmp74 = (frost$core$UInt64) {$tmp73};
return $tmp74;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:143
uint32_t $tmp75 = param0.value;
int8_t $tmp76 = param1.value;
float $tmp77 = ((float) $tmp75) / ((float) $tmp76);
frost$core$Real32 $tmp78 = (frost$core$Real32) {$tmp77};
return $tmp78;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:149
uint32_t $tmp79 = param0.value;
int16_t $tmp80 = param1.value;
float $tmp81 = ((float) $tmp79) / ((float) $tmp80);
frost$core$Real32 $tmp82 = (frost$core$Real32) {$tmp81};
return $tmp82;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:155
uint32_t $tmp83 = param0.value;
int32_t $tmp84 = param1.value;
float $tmp85 = ((float) $tmp83) / ((float) $tmp84);
frost$core$Real32 $tmp86 = (frost$core$Real32) {$tmp85};
return $tmp86;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:161
uint32_t $tmp87 = param0.value;
int64_t $tmp88 = param1.value;
double $tmp89 = ((double) $tmp87) / ((double) $tmp88);
frost$core$Real64 $tmp90 = (frost$core$Real64) {$tmp89};
return $tmp90;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:167
uint32_t $tmp91 = param0.value;
uint8_t $tmp92 = param1.value;
float $tmp93 = ((float) $tmp91) / ((float) $tmp92);
frost$core$Real32 $tmp94 = (frost$core$Real32) {$tmp93};
return $tmp94;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:173
uint32_t $tmp95 = param0.value;
uint16_t $tmp96 = param1.value;
float $tmp97 = ((float) $tmp95) / ((float) $tmp96);
frost$core$Real32 $tmp98 = (frost$core$Real32) {$tmp97};
return $tmp98;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:179
uint32_t $tmp99 = param0.value;
uint32_t $tmp100 = param1.value;
float $tmp101 = ((float) $tmp99) / ((float) $tmp100);
frost$core$Real32 $tmp102 = (frost$core$Real32) {$tmp101};
return $tmp102;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:185
uint32_t $tmp103 = param0.value;
uint64_t $tmp104 = param1.value;
double $tmp105 = ((double) $tmp103) / ((double) $tmp104);
frost$core$Real64 $tmp106 = (frost$core$Real64) {$tmp105};
return $tmp106;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:191
uint32_t $tmp107 = param0.value;
float $tmp108 = param1.value;
float $tmp109 = ((float) $tmp107) / $tmp108;
frost$core$Real32 $tmp110 = (frost$core$Real32) {$tmp109};
return $tmp110;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:197
uint32_t $tmp111 = param0.value;
double $tmp112 = param1.value;
double $tmp113 = ((double) $tmp111) / $tmp112;
frost$core$Real64 $tmp114 = (frost$core$Real64) {$tmp113};
return $tmp114;

}
frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:202
uint32_t $tmp115 = param0.value;
uint32_t $tmp116 = !$tmp115;
frost$core$UInt32 $tmp117 = (frost$core$UInt32) {$tmp116};
return $tmp117;

}
frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:208
uint32_t $tmp118 = param0.value;
int32_t $tmp119 = param1.value;
int32_t $tmp120 = ((int32_t) $tmp118) & $tmp119;
frost$core$Int32 $tmp121 = (frost$core$Int32) {$tmp120};
return $tmp121;

}
frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:214
uint32_t $tmp122 = param0.value;
int64_t $tmp123 = param1.value;
int64_t $tmp124 = ((int64_t) $tmp122) & $tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {$tmp124};
return $tmp125;

}
frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:220
uint32_t $tmp126 = param0.value;
uint32_t $tmp127 = param1.value;
uint32_t $tmp128 = $tmp126 & $tmp127;
frost$core$UInt32 $tmp129 = (frost$core$UInt32) {$tmp128};
return $tmp129;

}
frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:226
uint32_t $tmp130 = param0.value;
uint64_t $tmp131 = param1.value;
uint64_t $tmp132 = ((uint64_t) $tmp130) & $tmp131;
frost$core$UInt64 $tmp133 = (frost$core$UInt64) {$tmp132};
return $tmp133;

}
frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:232
uint32_t $tmp134 = param0.value;
int32_t $tmp135 = param1.value;
int32_t $tmp136 = ((int32_t) $tmp134) | $tmp135;
frost$core$Int32 $tmp137 = (frost$core$Int32) {$tmp136};
return $tmp137;

}
frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:238
uint32_t $tmp138 = param0.value;
int64_t $tmp139 = param1.value;
int64_t $tmp140 = ((int64_t) $tmp138) | $tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {$tmp140};
return $tmp141;

}
frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:244
uint32_t $tmp142 = param0.value;
uint32_t $tmp143 = param1.value;
uint32_t $tmp144 = $tmp142 | $tmp143;
frost$core$UInt32 $tmp145 = (frost$core$UInt32) {$tmp144};
return $tmp145;

}
frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:250
uint32_t $tmp146 = param0.value;
uint64_t $tmp147 = param1.value;
uint64_t $tmp148 = ((uint64_t) $tmp146) | $tmp147;
frost$core$UInt64 $tmp149 = (frost$core$UInt64) {$tmp148};
return $tmp149;

}
frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:256
uint32_t $tmp150 = param0.value;
int32_t $tmp151 = param1.value;
int32_t $tmp152 = ((int32_t) $tmp150) ^ $tmp151;
frost$core$Int32 $tmp153 = (frost$core$Int32) {$tmp152};
return $tmp153;

}
frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:262
uint32_t $tmp154 = param0.value;
int64_t $tmp155 = param1.value;
int64_t $tmp156 = ((int64_t) $tmp154) ^ $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {$tmp156};
return $tmp157;

}
frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:268
uint32_t $tmp158 = param0.value;
uint32_t $tmp159 = param1.value;
uint32_t $tmp160 = $tmp158 ^ $tmp159;
frost$core$UInt32 $tmp161 = (frost$core$UInt32) {$tmp160};
return $tmp161;

}
frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:274
uint32_t $tmp162 = param0.value;
uint64_t $tmp163 = param1.value;
uint64_t $tmp164 = ((uint64_t) $tmp162) ^ $tmp163;
frost$core$UInt64 $tmp165 = (frost$core$UInt64) {$tmp164};
return $tmp165;

}
frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:280
uint32_t $tmp166 = param0.value;
uint32_t $tmp167 = param1.value;
uint32_t $tmp168 = $tmp166 << $tmp167;
frost$core$UInt32 $tmp169 = (frost$core$UInt32) {$tmp168};
return $tmp169;

}
frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:286
uint32_t $tmp170 = param0.value;
uint32_t $tmp171 = param1.value;
uint32_t $tmp172 = $tmp170 >> $tmp171;
frost$core$UInt32 $tmp173 = (frost$core$UInt32) {$tmp172};
return $tmp173;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:292
uint32_t $tmp174 = param0.value;
int8_t $tmp175 = param1.value;
bool $tmp176 = ((int64_t) $tmp174) == ((int64_t) $tmp175);
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
return $tmp177;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:298
uint32_t $tmp178 = param0.value;
int16_t $tmp179 = param1.value;
bool $tmp180 = ((int64_t) $tmp178) == ((int64_t) $tmp179);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
return $tmp181;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:304
uint32_t $tmp182 = param0.value;
int32_t $tmp183 = param1.value;
bool $tmp184 = ((int64_t) $tmp182) == ((int64_t) $tmp183);
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
return $tmp185;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:310
uint32_t $tmp186 = param0.value;
uint8_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 == ((uint32_t) $tmp187);
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
return $tmp189;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:316
uint32_t $tmp190 = param0.value;
uint16_t $tmp191 = param1.value;
bool $tmp192 = $tmp190 == ((uint32_t) $tmp191);
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
return $tmp193;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:323
uint32_t $tmp194 = param0.value;
uint32_t $tmp195 = param1.value;
bool $tmp196 = $tmp194 == $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
return $tmp197;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:329
uint32_t $tmp198 = param0.value;
uint64_t $tmp199 = param1.value;
bool $tmp200 = ((uint64_t) $tmp198) == $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
return $tmp201;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:335
uint32_t $tmp202 = param0.value;
int8_t $tmp203 = param1.value;
bool $tmp204 = ((int64_t) $tmp202) != ((int64_t) $tmp203);
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
return $tmp205;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:341
uint32_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
bool $tmp208 = ((int64_t) $tmp206) != ((int64_t) $tmp207);
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
return $tmp209;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:347
uint32_t $tmp210 = param0.value;
int32_t $tmp211 = param1.value;
bool $tmp212 = ((int64_t) $tmp210) != ((int64_t) $tmp211);
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
return $tmp213;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:353
uint32_t $tmp214 = param0.value;
uint8_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 != ((uint32_t) $tmp215);
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
return $tmp217;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:359
uint32_t $tmp218 = param0.value;
uint16_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 != ((uint32_t) $tmp219);
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
return $tmp221;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:366
uint32_t $tmp222 = param0.value;
uint32_t $tmp223 = param1.value;
bool $tmp224 = $tmp222 != $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
return $tmp225;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:372
uint32_t $tmp226 = param0.value;
uint64_t $tmp227 = param1.value;
bool $tmp228 = ((uint64_t) $tmp226) != $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
return $tmp229;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:378
uint32_t $tmp230 = param0.value;
int8_t $tmp231 = param1.value;
bool $tmp232 = ((int64_t) $tmp230) < ((int64_t) $tmp231);
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
return $tmp233;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:384
uint32_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
bool $tmp236 = ((int64_t) $tmp234) < ((int64_t) $tmp235);
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
return $tmp237;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:390
uint32_t $tmp238 = param0.value;
int32_t $tmp239 = param1.value;
bool $tmp240 = ((int64_t) $tmp238) < ((int64_t) $tmp239);
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
return $tmp241;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:396
uint32_t $tmp242 = param0.value;
uint8_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 < ((uint32_t) $tmp243);
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
return $tmp245;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:402
uint32_t $tmp246 = param0.value;
uint16_t $tmp247 = param1.value;
bool $tmp248 = $tmp246 < ((uint32_t) $tmp247);
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
return $tmp249;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:409
uint32_t $tmp250 = param0.value;
uint32_t $tmp251 = param1.value;
bool $tmp252 = $tmp250 < $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
return $tmp253;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:415
uint32_t $tmp254 = param0.value;
uint64_t $tmp255 = param1.value;
bool $tmp256 = ((uint64_t) $tmp254) < $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
return $tmp257;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:421
uint32_t $tmp258 = param0.value;
int8_t $tmp259 = param1.value;
bool $tmp260 = ((int64_t) $tmp258) > ((int64_t) $tmp259);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
return $tmp261;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:427
uint32_t $tmp262 = param0.value;
int16_t $tmp263 = param1.value;
bool $tmp264 = ((int64_t) $tmp262) > ((int64_t) $tmp263);
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
return $tmp265;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:433
uint32_t $tmp266 = param0.value;
int32_t $tmp267 = param1.value;
bool $tmp268 = ((int64_t) $tmp266) > ((int64_t) $tmp267);
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
return $tmp269;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:439
uint32_t $tmp270 = param0.value;
uint8_t $tmp271 = param1.value;
bool $tmp272 = $tmp270 > ((uint32_t) $tmp271);
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
return $tmp273;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:445
uint32_t $tmp274 = param0.value;
uint16_t $tmp275 = param1.value;
bool $tmp276 = $tmp274 > ((uint32_t) $tmp275);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
return $tmp277;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:452
uint32_t $tmp278 = param0.value;
uint32_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 > $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
return $tmp281;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:458
uint32_t $tmp282 = param0.value;
uint64_t $tmp283 = param1.value;
bool $tmp284 = ((uint64_t) $tmp282) > $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
return $tmp285;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:464
uint32_t $tmp286 = param0.value;
int8_t $tmp287 = param1.value;
bool $tmp288 = ((int64_t) $tmp286) >= ((int64_t) $tmp287);
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
return $tmp289;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:470
uint32_t $tmp290 = param0.value;
int16_t $tmp291 = param1.value;
bool $tmp292 = ((int64_t) $tmp290) >= ((int64_t) $tmp291);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
return $tmp293;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:476
uint32_t $tmp294 = param0.value;
int32_t $tmp295 = param1.value;
bool $tmp296 = ((int64_t) $tmp294) >= ((int64_t) $tmp295);
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
return $tmp297;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:482
uint32_t $tmp298 = param0.value;
uint8_t $tmp299 = param1.value;
bool $tmp300 = $tmp298 >= ((uint32_t) $tmp299);
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
return $tmp301;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:488
uint32_t $tmp302 = param0.value;
uint16_t $tmp303 = param1.value;
bool $tmp304 = $tmp302 >= ((uint32_t) $tmp303);
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
return $tmp305;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:495
uint32_t $tmp306 = param0.value;
uint32_t $tmp307 = param1.value;
bool $tmp308 = $tmp306 >= $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
return $tmp309;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:501
uint32_t $tmp310 = param0.value;
uint64_t $tmp311 = param1.value;
bool $tmp312 = ((uint64_t) $tmp310) >= $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
return $tmp313;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:507
uint32_t $tmp314 = param0.value;
int8_t $tmp315 = param1.value;
bool $tmp316 = ((int64_t) $tmp314) <= ((int64_t) $tmp315);
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
return $tmp317;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:513
uint32_t $tmp318 = param0.value;
int16_t $tmp319 = param1.value;
bool $tmp320 = ((int64_t) $tmp318) <= ((int64_t) $tmp319);
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
return $tmp321;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:519
uint32_t $tmp322 = param0.value;
int32_t $tmp323 = param1.value;
bool $tmp324 = ((int64_t) $tmp322) <= ((int64_t) $tmp323);
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
return $tmp325;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:525
uint32_t $tmp326 = param0.value;
uint8_t $tmp327 = param1.value;
bool $tmp328 = $tmp326 <= ((uint32_t) $tmp327);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
return $tmp329;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:531
uint32_t $tmp330 = param0.value;
uint16_t $tmp331 = param1.value;
bool $tmp332 = $tmp330 <= ((uint32_t) $tmp331);
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
return $tmp333;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:538
uint32_t $tmp334 = param0.value;
uint32_t $tmp335 = param1.value;
bool $tmp336 = $tmp334 <= $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
return $tmp337;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:544
uint32_t $tmp338 = param0.value;
uint64_t $tmp339 = param1.value;
bool $tmp340 = ((uint64_t) $tmp338) <= $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
return $tmp341;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:550
uint32_t $tmp342 = param0.value;
int8_t $tmp343 = param1.value;
bool $tmp344 = ((int64_t) $tmp342) < ((int64_t) $tmp343);
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:551
uint32_t $tmp347 = param0.value;
frost$core$Int64 $tmp348 = (frost$core$Int64) {((int64_t) $tmp347)};
return $tmp348;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:553
int8_t $tmp349 = param1.value;
frost$core$Int64 $tmp350 = (frost$core$Int64) {((int64_t) $tmp349)};
return $tmp350;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:559
uint32_t $tmp351 = param0.value;
int16_t $tmp352 = param1.value;
bool $tmp353 = ((int64_t) $tmp351) < ((int64_t) $tmp352);
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:560
uint32_t $tmp356 = param0.value;
frost$core$Int64 $tmp357 = (frost$core$Int64) {((int64_t) $tmp356)};
return $tmp357;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:562
int16_t $tmp358 = param1.value;
frost$core$Int64 $tmp359 = (frost$core$Int64) {((int64_t) $tmp358)};
return $tmp359;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:568
uint32_t $tmp360 = param0.value;
int32_t $tmp361 = param1.value;
bool $tmp362 = ((int64_t) $tmp360) < ((int64_t) $tmp361);
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:569
uint32_t $tmp365 = param0.value;
frost$core$Int64 $tmp366 = (frost$core$Int64) {((int64_t) $tmp365)};
return $tmp366;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:571
int32_t $tmp367 = param1.value;
frost$core$Int64 $tmp368 = (frost$core$Int64) {((int64_t) $tmp367)};
return $tmp368;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:578
uint32_t $tmp369 = param0.value;
uint8_t $tmp370 = param1.value;
bool $tmp371 = $tmp369 < ((uint32_t) $tmp370);
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:579
uint32_t $tmp374 = param0.value;
frost$core$UInt32 $tmp375 = (frost$core$UInt32) {$tmp374};
return $tmp375;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:581
uint8_t $tmp376 = param1.value;
frost$core$UInt32 $tmp377 = (frost$core$UInt32) {((uint32_t) $tmp376)};
return $tmp377;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:587
uint32_t $tmp378 = param0.value;
uint16_t $tmp379 = param1.value;
bool $tmp380 = $tmp378 < ((uint32_t) $tmp379);
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:588
uint32_t $tmp383 = param0.value;
frost$core$UInt32 $tmp384 = (frost$core$UInt32) {$tmp383};
return $tmp384;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:590
uint16_t $tmp385 = param1.value;
frost$core$UInt32 $tmp386 = (frost$core$UInt32) {((uint32_t) $tmp385)};
return $tmp386;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:596
uint32_t $tmp387 = param0.value;
uint32_t $tmp388 = param1.value;
bool $tmp389 = $tmp387 < $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:597
uint32_t $tmp392 = param0.value;
frost$core$UInt32 $tmp393 = (frost$core$UInt32) {$tmp392};
return $tmp393;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:599
uint32_t $tmp394 = param1.value;
frost$core$UInt32 $tmp395 = (frost$core$UInt32) {$tmp394};
return $tmp395;

}
frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:605
uint32_t $tmp396 = param0.value;
uint64_t $tmp397 = param1.value;
bool $tmp398 = ((uint64_t) $tmp396) < $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:606
uint32_t $tmp401 = param0.value;
frost$core$UInt64 $tmp402 = (frost$core$UInt64) {((uint64_t) $tmp401)};
return $tmp402;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:608
uint64_t $tmp403 = param1.value;
frost$core$UInt64 $tmp404 = (frost$core$UInt64) {$tmp403};
return $tmp404;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:614
uint32_t $tmp405 = param0.value;
int8_t $tmp406 = param1.value;
bool $tmp407 = ((int64_t) $tmp405) > ((int64_t) $tmp406);
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:615
uint32_t $tmp410 = param0.value;
frost$core$Int64 $tmp411 = (frost$core$Int64) {((int64_t) $tmp410)};
return $tmp411;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:617
int8_t $tmp412 = param1.value;
frost$core$Int64 $tmp413 = (frost$core$Int64) {((int64_t) $tmp412)};
return $tmp413;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:623
uint32_t $tmp414 = param0.value;
int16_t $tmp415 = param1.value;
bool $tmp416 = ((int64_t) $tmp414) > ((int64_t) $tmp415);
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:624
uint32_t $tmp419 = param0.value;
frost$core$Int64 $tmp420 = (frost$core$Int64) {((int64_t) $tmp419)};
return $tmp420;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:626
int16_t $tmp421 = param1.value;
frost$core$Int64 $tmp422 = (frost$core$Int64) {((int64_t) $tmp421)};
return $tmp422;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:632
uint32_t $tmp423 = param0.value;
int32_t $tmp424 = param1.value;
bool $tmp425 = ((int64_t) $tmp423) > ((int64_t) $tmp424);
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:633
uint32_t $tmp428 = param0.value;
frost$core$Int64 $tmp429 = (frost$core$Int64) {((int64_t) $tmp428)};
return $tmp429;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:635
int32_t $tmp430 = param1.value;
frost$core$Int64 $tmp431 = (frost$core$Int64) {((int64_t) $tmp430)};
return $tmp431;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:642
uint32_t $tmp432 = param0.value;
uint8_t $tmp433 = param1.value;
bool $tmp434 = $tmp432 > ((uint32_t) $tmp433);
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:643
uint32_t $tmp437 = param0.value;
frost$core$UInt32 $tmp438 = (frost$core$UInt32) {$tmp437};
return $tmp438;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:645
uint8_t $tmp439 = param1.value;
frost$core$UInt32 $tmp440 = (frost$core$UInt32) {((uint32_t) $tmp439)};
return $tmp440;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:651
uint32_t $tmp441 = param0.value;
uint16_t $tmp442 = param1.value;
bool $tmp443 = $tmp441 > ((uint32_t) $tmp442);
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:652
uint32_t $tmp446 = param0.value;
frost$core$UInt32 $tmp447 = (frost$core$UInt32) {$tmp446};
return $tmp447;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:654
uint16_t $tmp448 = param1.value;
frost$core$UInt32 $tmp449 = (frost$core$UInt32) {((uint32_t) $tmp448)};
return $tmp449;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:660
uint32_t $tmp450 = param0.value;
uint32_t $tmp451 = param1.value;
bool $tmp452 = $tmp450 > $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:661
uint32_t $tmp455 = param0.value;
frost$core$UInt32 $tmp456 = (frost$core$UInt32) {$tmp455};
return $tmp456;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:663
uint32_t $tmp457 = param1.value;
frost$core$UInt32 $tmp458 = (frost$core$UInt32) {$tmp457};
return $tmp458;

}
frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:669
uint32_t $tmp459 = param0.value;
uint64_t $tmp460 = param1.value;
bool $tmp461 = ((uint64_t) $tmp459) > $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:670
uint32_t $tmp464 = param0.value;
frost$core$UInt64 $tmp465 = (frost$core$UInt64) {((uint64_t) $tmp464)};
return $tmp465;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:672
uint64_t $tmp466 = param1.value;
frost$core$UInt64 $tmp467 = (frost$core$UInt64) {$tmp466};
return $tmp467;

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$Range$LTfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$Range$LTfrost$core$UInt32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:677
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
org$frostlang$frost$UInt32List* $tmp468 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
frost$core$UInt32 $tmp469 = param0.min;
frost$core$UInt32 $tmp470 = param0.max;
frost$core$UInt32 $tmp471 = (frost$core$UInt32) {1u};
frost$core$Bit $tmp472 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp473 = frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit($tmp469, $tmp470, $tmp471, $tmp472);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp468, $tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp468)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
return ((frost$collections$ListView*) $tmp468);

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:682
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
org$frostlang$frost$UInt32List* $tmp474 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp474, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp474)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
return ((frost$collections$ListView*) $tmp474);

}
frost$core$Bit frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp475 = (frost$core$Int64) {0u};
int64_t $tmp476 = param1.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 >= $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block3; else goto block2;
block3:;
frost$core$UInt32$wrapper* $tmp481;
$tmp481 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp481->value = param0;
ITable* $tmp482 = ((frost$collections$CollectionView*) $tmp481)->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
frost$core$Int64 $tmp485 = $tmp483(((frost$collections$CollectionView*) $tmp481));
int64_t $tmp486 = param1.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 < $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp481)));
if ($tmp490) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp491 = (frost$core$Int64) {687u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s492, $tmp491, &$s493);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:688
frost$core$Int64 $tmp494 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from UInt32.frost:688:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:209
int64_t $tmp495 = $tmp494.value;
int64_t $tmp496 = param1.value;
int64_t $tmp497 = $tmp495 << $tmp496;
frost$core$Int64 $tmp498 = (frost$core$Int64) {$tmp497};
// begin inline call to function frost.core.UInt32.&&(other:frost.core.Int64):frost.core.Int64 from UInt32.frost:688:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:214
uint32_t $tmp499 = param0.value;
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = ((int64_t) $tmp499) & $tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {$tmp501};
frost$core$Int64 $tmp503 = (frost$core$Int64) {0u};
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503.value;
bool $tmp506 = $tmp504 != $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
return $tmp507;

}
frost$core$Int64 frost$core$UInt32$get_count$R$frost$core$Int64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:694
frost$core$Int64 $tmp508 = (frost$core$Int64) {32u};
return $tmp508;

}
frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:704
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp509 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:704:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:762
uint32_t $tmp510 = param0.value;
frost$core$UInt64 $tmp511 = (frost$core$UInt64) {((uint64_t) $tmp510)};
frost$core$UInt64 $tmp512 = (frost$core$UInt64) {2147483648u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp509, $tmp511, $tmp512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
return ((frost$collections$Iterator*) $tmp509);

}
frost$core$Int64 frost$core$UInt32$get_hash$R$frost$core$Int64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:709
uint32_t $tmp513 = param0.value;
frost$core$Int64 $tmp514 = (frost$core$Int64) {((int64_t) $tmp513)};
return $tmp514;

}
frost$core$UInt32$nullable frost$core$UInt32$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt32$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp515 = (frost$core$Int64) {2u};
int64_t $tmp516 = param1.value;
int64_t $tmp517 = $tmp515.value;
bool $tmp518 = $tmp516 >= $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp521 = (frost$core$Int64) {36u};
int64_t $tmp522 = param1.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 <= $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {715u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s528, $tmp527, &$s529);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:716
frost$core$UInt64$nullable $tmp530 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp530;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:717
frost$core$UInt64$nullable $tmp531 = *(&local0);
frost$core$Bit $tmp532 = (frost$core$Bit) {!$tmp531.nonnull};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:718
return ((frost$core$UInt32$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:720
frost$core$UInt64$nullable $tmp534 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from UInt32.frost:720:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:518
uint64_t $tmp535 = ((frost$core$UInt64) $tmp534.value).value;
frost$core$UInt32 $tmp536 = (frost$core$UInt32) {((uint32_t) $tmp535)};
return ((frost$core$UInt32$nullable) { $tmp536, true });

}
frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:726
uint32_t $tmp537 = param0.value;
frost$core$Int8 $tmp538 = (frost$core$Int8) {((int8_t) $tmp537)};
return $tmp538;

}
frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:732
uint32_t $tmp539 = param0.value;
frost$core$Int16 $tmp540 = (frost$core$Int16) {((int16_t) $tmp539)};
return $tmp540;

}
frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:738
uint32_t $tmp541 = param0.value;
frost$core$Int32 $tmp542 = (frost$core$Int32) {((int32_t) $tmp541)};
return $tmp542;

}
frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:744
uint32_t $tmp543 = param0.value;
frost$core$Int64 $tmp544 = (frost$core$Int64) {((int64_t) $tmp543)};
return $tmp544;

}
frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:750
uint32_t $tmp545 = param0.value;
frost$core$UInt8 $tmp546 = (frost$core$UInt8) {((uint8_t) $tmp545)};
return $tmp546;

}
frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:756
uint32_t $tmp547 = param0.value;
frost$core$UInt16 $tmp548 = (frost$core$UInt16) {((uint16_t) $tmp547)};
return $tmp548;

}
frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:762
uint32_t $tmp549 = param0.value;
frost$core$UInt64 $tmp550 = (frost$core$UInt64) {((uint64_t) $tmp549)};
return $tmp550;

}
frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:768
uint32_t $tmp551 = param0.value;
frost$core$Real32 $tmp552 = (frost$core$Real32) {((float) $tmp551)};
return $tmp552;

}
frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:774
uint32_t $tmp553 = param0.value;
frost$core$Real64 $tmp554 = (frost$core$Real64) {((double) $tmp553)};
return $tmp554;

}
frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String(frost$core$UInt32 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt32 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:780
frost$core$Int64 $tmp555 = (frost$core$Int64) {10u};
*(&local0) = $tmp555;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:781
frost$core$Int64 $tmp556 = *(&local0);
int64_t $tmp557 = $tmp556.value;
frost$core$Char8* $tmp558 = ((frost$core$Char8*) frostAlloc($tmp557 * 1));
*(&local1) = $tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:782
frost$core$Int64 $tmp559 = *(&local0);
frost$core$Int64 $tmp560 = (frost$core$Int64) {1u};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 - $tmp562;
frost$core$Int64 $tmp564 = (frost$core$Int64) {$tmp563};
*(&local2) = $tmp564;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:783
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:784
frost$core$UInt32 $tmp565 = *(&local3);
frost$core$UInt32 $tmp566 = (frost$core$UInt32) {0u};
uint32_t $tmp567 = $tmp565.value;
uint32_t $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 >= $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:785
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:786
frost$core$Char8* $tmp572 = *(&local1);
frost$core$Int64 $tmp573 = *(&local2);
frost$core$UInt32 $tmp574 = *(&local3);
frost$core$UInt32 $tmp575 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:786:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:131
uint32_t $tmp576 = $tmp574.value;
uint32_t $tmp577 = $tmp575.value;
uint32_t $tmp578 = $tmp576 % $tmp577;
frost$core$UInt32 $tmp579 = (frost$core$UInt32) {$tmp578};
frost$core$UInt32 $tmp580 = (frost$core$UInt32) {48u};
uint32_t $tmp581 = $tmp579.value;
uint32_t $tmp582 = $tmp580.value;
uint32_t $tmp583 = $tmp581 + $tmp582;
frost$core$UInt32 $tmp584 = (frost$core$UInt32) {$tmp583};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:786:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:750
uint32_t $tmp585 = $tmp584.value;
frost$core$UInt8 $tmp586 = (frost$core$UInt8) {((uint8_t) $tmp585)};
frost$core$Char8 $tmp587 = frost$core$Char8$init$frost$core$UInt8($tmp586);
int64_t $tmp588 = $tmp573.value;
$tmp572[$tmp588] = $tmp587;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:787
frost$core$UInt32 $tmp589 = *(&local3);
frost$core$UInt32 $tmp590 = (frost$core$UInt32) {10u};
uint32_t $tmp591 = $tmp589.value;
uint32_t $tmp592 = $tmp590.value;
uint32_t $tmp593 = $tmp591 / $tmp592;
frost$core$UInt32 $tmp594 = (frost$core$UInt32) {$tmp593};
*(&local3) = $tmp594;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:788
frost$core$Int64 $tmp595 = *(&local2);
frost$core$Int64 $tmp596 = (frost$core$Int64) {1u};
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596.value;
int64_t $tmp599 = $tmp597 - $tmp598;
frost$core$Int64 $tmp600 = (frost$core$Int64) {$tmp599};
*(&local2) = $tmp600;
frost$core$UInt32 $tmp601 = *(&local3);
frost$core$UInt32 $tmp602 = (frost$core$UInt32) {0u};
uint32_t $tmp603 = $tmp601.value;
uint32_t $tmp604 = $tmp602.value;
bool $tmp605 = $tmp603 > $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:791
frost$core$Int64 $tmp608 = *(&local2);
frost$core$Int64 $tmp609 = (frost$core$Int64) {1u};
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 + $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {$tmp612};
*(&local2) = $tmp613;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:794
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:795
frost$core$Char8* $tmp614 = *(&local1);
frost$core$Int64 $tmp615 = *(&local2);
frost$core$UInt32 $tmp616 = (frost$core$UInt32) {48u};
frost$core$UInt32 $tmp617 = *(&local3);
frost$core$UInt32 $tmp618 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:795:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:131
uint32_t $tmp619 = $tmp617.value;
uint32_t $tmp620 = $tmp618.value;
uint32_t $tmp621 = $tmp619 % $tmp620;
frost$core$UInt32 $tmp622 = (frost$core$UInt32) {$tmp621};
uint32_t $tmp623 = $tmp616.value;
uint32_t $tmp624 = $tmp622.value;
uint32_t $tmp625 = $tmp623 - $tmp624;
frost$core$UInt32 $tmp626 = (frost$core$UInt32) {$tmp625};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:795:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:750
uint32_t $tmp627 = $tmp626.value;
frost$core$UInt8 $tmp628 = (frost$core$UInt8) {((uint8_t) $tmp627)};
frost$core$Char8 $tmp629 = frost$core$Char8$init$frost$core$UInt8($tmp628);
int64_t $tmp630 = $tmp615.value;
$tmp614[$tmp630] = $tmp629;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:796
frost$core$UInt32 $tmp631 = *(&local3);
frost$core$UInt32 $tmp632 = (frost$core$UInt32) {10u};
uint32_t $tmp633 = $tmp631.value;
uint32_t $tmp634 = $tmp632.value;
uint32_t $tmp635 = $tmp633 / $tmp634;
frost$core$UInt32 $tmp636 = (frost$core$UInt32) {$tmp635};
*(&local3) = $tmp636;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:797
frost$core$Int64 $tmp637 = *(&local2);
frost$core$Int64 $tmp638 = (frost$core$Int64) {1u};
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639 - $tmp640;
frost$core$Int64 $tmp642 = (frost$core$Int64) {$tmp641};
*(&local2) = $tmp642;
frost$core$UInt32 $tmp643 = *(&local3);
frost$core$UInt32 $tmp644 = (frost$core$UInt32) {0u};
uint32_t $tmp645 = $tmp643.value;
uint32_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 < $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:800
frost$core$Char8* $tmp650 = *(&local1);
frost$core$Int64 $tmp651 = *(&local2);
frost$core$UInt8 $tmp652 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp653 = frost$core$Char8$init$frost$core$UInt8($tmp652);
int64_t $tmp654 = $tmp651.value;
$tmp650[$tmp654] = $tmp653;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:802
frost$core$Int64 $tmp655 = *(&local0);
frost$core$Int64 $tmp656 = *(&local2);
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656.value;
int64_t $tmp659 = $tmp657 - $tmp658;
frost$core$Int64 $tmp660 = (frost$core$Int64) {$tmp659};
*(&local4) = $tmp660;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:803
frost$core$Int64 $tmp661 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp662 = *(&local4);
frost$core$Bit $tmp663 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp664 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp661, $tmp662, $tmp663);
frost$core$Int64 $tmp665 = $tmp664.min;
*(&local5) = $tmp665;
frost$core$Int64 $tmp666 = $tmp664.max;
frost$core$Bit $tmp667 = $tmp664.inclusive;
bool $tmp668 = $tmp667.value;
frost$core$Int64 $tmp669 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp670 = $tmp669.value;
frost$core$UInt64 $tmp671 = (frost$core$UInt64) {((uint64_t) $tmp670)};
if ($tmp668) goto block18; else goto block19;
block18:;
int64_t $tmp672 = $tmp665.value;
int64_t $tmp673 = $tmp666.value;
bool $tmp674 = $tmp672 <= $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block15; else goto block16;
block19:;
int64_t $tmp677 = $tmp665.value;
int64_t $tmp678 = $tmp666.value;
bool $tmp679 = $tmp677 < $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:804
frost$core$Char8* $tmp682 = *(&local1);
frost$core$Int64 $tmp683 = *(&local5);
frost$core$Char8* $tmp684 = *(&local1);
frost$core$Int64 $tmp685 = *(&local5);
frost$core$Int64 $tmp686 = *(&local2);
int64_t $tmp687 = $tmp685.value;
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687 + $tmp688;
frost$core$Int64 $tmp690 = (frost$core$Int64) {$tmp689};
int64_t $tmp691 = $tmp690.value;
frost$core$Char8 $tmp692 = $tmp684[$tmp691];
int64_t $tmp693 = $tmp683.value;
$tmp682[$tmp693] = $tmp692;
frost$core$Int64 $tmp694 = *(&local5);
int64_t $tmp695 = $tmp666.value;
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695 - $tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {$tmp697};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp699 = $tmp698.value;
frost$core$UInt64 $tmp700 = (frost$core$UInt64) {((uint64_t) $tmp699)};
if ($tmp668) goto block22; else goto block23;
block22:;
uint64_t $tmp701 = $tmp700.value;
uint64_t $tmp702 = $tmp671.value;
bool $tmp703 = $tmp701 >= $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block20; else goto block16;
block23:;
uint64_t $tmp706 = $tmp700.value;
uint64_t $tmp707 = $tmp671.value;
bool $tmp708 = $tmp706 > $tmp707;
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block20; else goto block16;
block20:;
int64_t $tmp711 = $tmp694.value;
int64_t $tmp712 = $tmp669.value;
int64_t $tmp713 = $tmp711 + $tmp712;
frost$core$Int64 $tmp714 = (frost$core$Int64) {$tmp713};
*(&local5) = $tmp714;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:806
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp715 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp716 = *(&local1);
frost$core$Int64 $tmp717 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp715, $tmp716, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
return $tmp715;

}
frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String(frost$core$UInt32 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:812
frost$core$Bit $tmp718 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:812:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:762
uint32_t $tmp719 = param0.value;
frost$core$UInt64 $tmp720 = (frost$core$UInt64) {((uint64_t) $tmp719)};
frost$core$UInt64 $tmp721 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp722 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp718, $tmp720, $tmp721, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
return $tmp722;

}
void frost$core$UInt32$cleanup(frost$core$UInt32 param0) {

return;

}

