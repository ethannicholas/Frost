#include "frost/core/UInt32.h"
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
#include "frost/collections/Key.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
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

__attribute__((weak)) frost$core$Int64 frost$core$UInt32$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$get_count$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
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
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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
__attribute__((weak)) frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt32$format$frost$core$String$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$String* frost$core$UInt32$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt32$convert$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int8 frost$core$UInt32$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt32$convert$R$frost$core$Int8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt32$convert$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt32$convert$R$frost$core$Int16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt32$convert$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$convert$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt32$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt32$convert$R$frost$core$UInt8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt32$convert$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt32$convert$R$frost$core$UInt16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$convert$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt32$convert$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$convert$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt32$convert$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$convert$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt32$convert$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt32$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt32$cleanup(((frost$core$UInt32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$core$UInt32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$_frost$collections$CollectionView, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt32$_frost$collections$Iterable, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$core$UInt32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$_frost$collections$Key, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$_frost$core$Formattable, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$UInt32$class_type frost$core$UInt32$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$_frost$core$Equatable, { frost$core$UInt32$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt32$get_hash$R$frost$core$Int64$shim, frost$core$UInt32$convert$R$frost$core$Int8$shim, frost$core$UInt32$convert$R$frost$core$Int16$shim, frost$core$UInt32$convert$R$frost$core$Int32$shim, frost$core$UInt32$convert$R$frost$core$Int64$shim, frost$core$UInt32$convert$R$frost$core$UInt8$shim, frost$core$UInt32$convert$R$frost$core$UInt16$shim, frost$core$UInt32$convert$R$frost$core$UInt64$shim, frost$core$UInt32$convert$R$frost$core$Real32$shim, frost$core$UInt32$convert$R$frost$core$Real64$shim, frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[7]; } frost$core$UInt32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$CollectionView, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Iterable, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[7]; } frost$core$UInt32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Key, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Formattable, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$UInt32$wrapperclass_type frost$core$UInt32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Equatable, { frost$core$UInt32$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn508)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 8497875689263501798, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -7465585143252616643, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 8497875689263501798, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3f", 123, 5892241501069994574, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 8497875689263501798, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };

frost$core$UInt32 frost$core$UInt32$init$builtin_uint32(uint32_t param0) {

frost$core$UInt32 local0;
// line 30
uint32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt32 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint32_t) $tmp6);
frost$core$UInt32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt32 local0;
// line 42
uint16_t $tmp9 = param0.value;
uint32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint32_t) $tmp9);
frost$core$UInt32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 48
uint32_t $tmp12 = param0.value;
int32_t $tmp13 = param1.value;
int64_t $tmp14 = ((int64_t) $tmp12) + ((int64_t) $tmp13);
frost$core$Int64 $tmp15 = frost$core$Int64$init$builtin_int64($tmp14);
return $tmp15;

}
frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 54
uint32_t $tmp16 = param0.value;
uint32_t $tmp17 = param1.value;
uint32_t $tmp18 = $tmp16 + $tmp17;
frost$core$UInt32 $tmp19 = frost$core$UInt32$init$builtin_uint32($tmp18);
return $tmp19;

}
frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 60
uint32_t $tmp20 = param0.value;
uint64_t $tmp21 = param1.value;
uint64_t $tmp22 = ((uint64_t) $tmp20) + $tmp21;
frost$core$UInt64 $tmp23 = frost$core$UInt64$init$builtin_uint64($tmp22);
return $tmp23;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 66
uint32_t $tmp24 = param0.value;
int32_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) - ((int64_t) $tmp25);
frost$core$Int64 $tmp27 = frost$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 72
uint32_t $tmp28 = param0.value;
uint32_t $tmp29 = param1.value;
uint32_t $tmp30 = $tmp28 - $tmp29;
frost$core$UInt32 $tmp31 = frost$core$UInt32$init$builtin_uint32($tmp30);
return $tmp31;

}
frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 78
uint32_t $tmp32 = param0.value;
uint64_t $tmp33 = param1.value;
uint64_t $tmp34 = ((uint64_t) $tmp32) - $tmp33;
frost$core$UInt64 $tmp35 = frost$core$UInt64$init$builtin_uint64($tmp34);
return $tmp35;

}
frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32(frost$core$UInt32 param0) {

// line 83
uint32_t $tmp36 = param0.value;
uint32_t $tmp37 = -$tmp36;
frost$core$UInt32 $tmp38 = (frost$core$UInt32) {$tmp37};
return $tmp38;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 89
uint32_t $tmp39 = param0.value;
int32_t $tmp40 = param1.value;
int64_t $tmp41 = ((int64_t) $tmp39) * ((int64_t) $tmp40);
frost$core$Int64 $tmp42 = frost$core$Int64$init$builtin_int64($tmp41);
return $tmp42;

}
frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 95
uint32_t $tmp43 = param0.value;
uint32_t $tmp44 = param1.value;
uint32_t $tmp45 = $tmp43 * $tmp44;
frost$core$UInt32 $tmp46 = frost$core$UInt32$init$builtin_uint32($tmp45);
return $tmp46;

}
frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 101
uint32_t $tmp47 = param0.value;
uint64_t $tmp48 = param1.value;
uint64_t $tmp49 = ((uint64_t) $tmp47) * $tmp48;
frost$core$UInt64 $tmp50 = frost$core$UInt64$init$builtin_uint64($tmp49);
return $tmp50;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 107
uint32_t $tmp51 = param0.value;
int32_t $tmp52 = param1.value;
int64_t $tmp53 = ((int64_t) $tmp51) / ((int64_t) $tmp52);
frost$core$Int64 $tmp54 = frost$core$Int64$init$builtin_int64($tmp53);
return $tmp54;

}
frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 113
uint32_t $tmp55 = param0.value;
uint32_t $tmp56 = param1.value;
uint32_t $tmp57 = $tmp55 / $tmp56;
frost$core$UInt32 $tmp58 = frost$core$UInt32$init$builtin_uint32($tmp57);
return $tmp58;

}
frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 119
uint32_t $tmp59 = param0.value;
uint64_t $tmp60 = param1.value;
uint64_t $tmp61 = ((uint64_t) $tmp59) / $tmp60;
frost$core$UInt64 $tmp62 = frost$core$UInt64$init$builtin_uint64($tmp61);
return $tmp62;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 125
uint32_t $tmp63 = param0.value;
int32_t $tmp64 = param1.value;
int64_t $tmp65 = ((int64_t) $tmp63) % ((int64_t) $tmp64);
frost$core$Int64 $tmp66 = frost$core$Int64$init$builtin_int64($tmp65);
return $tmp66;

}
frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 131
uint32_t $tmp67 = param0.value;
uint32_t $tmp68 = param1.value;
uint32_t $tmp69 = $tmp67 % $tmp68;
frost$core$UInt32 $tmp70 = frost$core$UInt32$init$builtin_uint32($tmp69);
return $tmp70;

}
frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 137
uint32_t $tmp71 = param0.value;
uint64_t $tmp72 = param1.value;
uint64_t $tmp73 = ((uint64_t) $tmp71) % $tmp72;
frost$core$UInt64 $tmp74 = frost$core$UInt64$init$builtin_uint64($tmp73);
return $tmp74;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 143
uint32_t $tmp75 = param0.value;
int8_t $tmp76 = param1.value;
float $tmp77 = ((float) $tmp75) / ((float) $tmp76);
frost$core$Real32 $tmp78 = frost$core$Real32$init$builtin_float32($tmp77);
return $tmp78;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 149
uint32_t $tmp79 = param0.value;
int16_t $tmp80 = param1.value;
float $tmp81 = ((float) $tmp79) / ((float) $tmp80);
frost$core$Real32 $tmp82 = frost$core$Real32$init$builtin_float32($tmp81);
return $tmp82;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 155
uint32_t $tmp83 = param0.value;
int32_t $tmp84 = param1.value;
float $tmp85 = ((float) $tmp83) / ((float) $tmp84);
frost$core$Real32 $tmp86 = frost$core$Real32$init$builtin_float32($tmp85);
return $tmp86;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 161
uint32_t $tmp87 = param0.value;
int64_t $tmp88 = param1.value;
double $tmp89 = ((double) $tmp87) / ((double) $tmp88);
frost$core$Real64 $tmp90 = frost$core$Real64$init$builtin_float64($tmp89);
return $tmp90;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 167
uint32_t $tmp91 = param0.value;
uint8_t $tmp92 = param1.value;
float $tmp93 = ((float) $tmp91) / ((float) $tmp92);
frost$core$Real32 $tmp94 = frost$core$Real32$init$builtin_float32($tmp93);
return $tmp94;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 173
uint32_t $tmp95 = param0.value;
uint16_t $tmp96 = param1.value;
float $tmp97 = ((float) $tmp95) / ((float) $tmp96);
frost$core$Real32 $tmp98 = frost$core$Real32$init$builtin_float32($tmp97);
return $tmp98;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 179
uint32_t $tmp99 = param0.value;
uint32_t $tmp100 = param1.value;
float $tmp101 = ((float) $tmp99) / ((float) $tmp100);
frost$core$Real32 $tmp102 = frost$core$Real32$init$builtin_float32($tmp101);
return $tmp102;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 185
uint32_t $tmp103 = param0.value;
uint64_t $tmp104 = param1.value;
double $tmp105 = ((double) $tmp103) / ((double) $tmp104);
frost$core$Real64 $tmp106 = frost$core$Real64$init$builtin_float64($tmp105);
return $tmp106;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Real32 param1) {

// line 191
uint32_t $tmp107 = param0.value;
float $tmp108 = param1.value;
float $tmp109 = ((float) $tmp107) / $tmp108;
frost$core$Real32 $tmp110 = frost$core$Real32$init$builtin_float32($tmp109);
return $tmp110;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Real64 param1) {

// line 197
uint32_t $tmp111 = param0.value;
double $tmp112 = param1.value;
double $tmp113 = ((double) $tmp111) / $tmp112;
frost$core$Real64 $tmp114 = frost$core$Real64$init$builtin_float64($tmp113);
return $tmp114;

}
frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32(frost$core$UInt32 param0) {

// line 202
uint32_t $tmp115 = param0.value;
uint32_t $tmp116 = !$tmp115;
frost$core$UInt32 $tmp117 = (frost$core$UInt32) {$tmp116};
return $tmp117;

}
frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 208
uint32_t $tmp118 = param0.value;
int32_t $tmp119 = param1.value;
int32_t $tmp120 = ((int32_t) $tmp118) & $tmp119;
frost$core$Int32 $tmp121 = frost$core$Int32$init$builtin_int32($tmp120);
return $tmp121;

}
frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 214
uint32_t $tmp122 = param0.value;
int64_t $tmp123 = param1.value;
int64_t $tmp124 = ((int64_t) $tmp122) & $tmp123;
frost$core$Int64 $tmp125 = frost$core$Int64$init$builtin_int64($tmp124);
return $tmp125;

}
frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 220
uint32_t $tmp126 = param0.value;
uint32_t $tmp127 = param1.value;
uint32_t $tmp128 = $tmp126 & $tmp127;
frost$core$UInt32 $tmp129 = frost$core$UInt32$init$builtin_uint32($tmp128);
return $tmp129;

}
frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 226
uint32_t $tmp130 = param0.value;
uint64_t $tmp131 = param1.value;
uint64_t $tmp132 = ((uint64_t) $tmp130) & $tmp131;
frost$core$UInt64 $tmp133 = frost$core$UInt64$init$builtin_uint64($tmp132);
return $tmp133;

}
frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 232
uint32_t $tmp134 = param0.value;
int32_t $tmp135 = param1.value;
int32_t $tmp136 = ((int32_t) $tmp134) | $tmp135;
frost$core$Int32 $tmp137 = frost$core$Int32$init$builtin_int32($tmp136);
return $tmp137;

}
frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 238
uint32_t $tmp138 = param0.value;
int64_t $tmp139 = param1.value;
int64_t $tmp140 = ((int64_t) $tmp138) | $tmp139;
frost$core$Int64 $tmp141 = frost$core$Int64$init$builtin_int64($tmp140);
return $tmp141;

}
frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 244
uint32_t $tmp142 = param0.value;
uint32_t $tmp143 = param1.value;
uint32_t $tmp144 = $tmp142 | $tmp143;
frost$core$UInt32 $tmp145 = frost$core$UInt32$init$builtin_uint32($tmp144);
return $tmp145;

}
frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 250
uint32_t $tmp146 = param0.value;
uint64_t $tmp147 = param1.value;
uint64_t $tmp148 = ((uint64_t) $tmp146) | $tmp147;
frost$core$UInt64 $tmp149 = frost$core$UInt64$init$builtin_uint64($tmp148);
return $tmp149;

}
frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 256
uint32_t $tmp150 = param0.value;
int32_t $tmp151 = param1.value;
int32_t $tmp152 = ((int32_t) $tmp150) ^ $tmp151;
frost$core$Int32 $tmp153 = frost$core$Int32$init$builtin_int32($tmp152);
return $tmp153;

}
frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 262
uint32_t $tmp154 = param0.value;
int64_t $tmp155 = param1.value;
int64_t $tmp156 = ((int64_t) $tmp154) ^ $tmp155;
frost$core$Int64 $tmp157 = frost$core$Int64$init$builtin_int64($tmp156);
return $tmp157;

}
frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 268
uint32_t $tmp158 = param0.value;
uint32_t $tmp159 = param1.value;
uint32_t $tmp160 = $tmp158 ^ $tmp159;
frost$core$UInt32 $tmp161 = frost$core$UInt32$init$builtin_uint32($tmp160);
return $tmp161;

}
frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 274
uint32_t $tmp162 = param0.value;
uint64_t $tmp163 = param1.value;
uint64_t $tmp164 = ((uint64_t) $tmp162) ^ $tmp163;
frost$core$UInt64 $tmp165 = frost$core$UInt64$init$builtin_uint64($tmp164);
return $tmp165;

}
frost$core$Int32 frost$core$UInt32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 280
uint32_t $tmp166 = param0.value;
int32_t $tmp167 = param1.value;
int32_t $tmp168 = ((int32_t) $tmp166) << $tmp167;
frost$core$Int32 $tmp169 = frost$core$Int32$init$builtin_int32($tmp168);
return $tmp169;

}
frost$core$Int64 frost$core$UInt32$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 286
uint32_t $tmp170 = param0.value;
int64_t $tmp171 = param1.value;
int64_t $tmp172 = ((int64_t) $tmp170) << $tmp171;
frost$core$Int64 $tmp173 = frost$core$Int64$init$builtin_int64($tmp172);
return $tmp173;

}
frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 292
uint32_t $tmp174 = param0.value;
uint32_t $tmp175 = param1.value;
uint32_t $tmp176 = $tmp174 << $tmp175;
frost$core$UInt32 $tmp177 = frost$core$UInt32$init$builtin_uint32($tmp176);
return $tmp177;

}
frost$core$UInt64 frost$core$UInt32$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 298
uint32_t $tmp178 = param0.value;
uint64_t $tmp179 = param1.value;
uint64_t $tmp180 = ((uint64_t) $tmp178) << $tmp179;
frost$core$UInt64 $tmp181 = frost$core$UInt64$init$builtin_uint64($tmp180);
return $tmp181;

}
frost$core$Int32 frost$core$UInt32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 304
uint32_t $tmp182 = param0.value;
int32_t $tmp183 = param1.value;
int32_t $tmp184 = ((int32_t) $tmp182) >> $tmp183;
frost$core$Int32 $tmp185 = frost$core$Int32$init$builtin_int32($tmp184);
return $tmp185;

}
frost$core$Int64 frost$core$UInt32$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// line 310
uint32_t $tmp186 = param0.value;
int64_t $tmp187 = param1.value;
int64_t $tmp188 = ((int64_t) $tmp186) >> $tmp187;
frost$core$Int64 $tmp189 = frost$core$Int64$init$builtin_int64($tmp188);
return $tmp189;

}
frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 316
uint32_t $tmp190 = param0.value;
uint32_t $tmp191 = param1.value;
uint32_t $tmp192 = $tmp190 >> $tmp191;
frost$core$UInt32 $tmp193 = frost$core$UInt32$init$builtin_uint32($tmp192);
return $tmp193;

}
frost$core$UInt64 frost$core$UInt32$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 322
uint32_t $tmp194 = param0.value;
uint64_t $tmp195 = param1.value;
uint64_t $tmp196 = ((uint64_t) $tmp194) >> $tmp195;
frost$core$UInt64 $tmp197 = frost$core$UInt64$init$builtin_uint64($tmp196);
return $tmp197;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 328
uint32_t $tmp198 = param0.value;
int8_t $tmp199 = param1.value;
bool $tmp200 = ((int64_t) $tmp198) == ((int64_t) $tmp199);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200);
return $tmp201;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 334
uint32_t $tmp202 = param0.value;
int16_t $tmp203 = param1.value;
bool $tmp204 = ((int64_t) $tmp202) == ((int64_t) $tmp203);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204);
return $tmp205;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 340
uint32_t $tmp206 = param0.value;
int32_t $tmp207 = param1.value;
bool $tmp208 = ((int64_t) $tmp206) == ((int64_t) $tmp207);
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit($tmp208);
return $tmp209;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 346
uint32_t $tmp210 = param0.value;
uint8_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 == ((uint32_t) $tmp211);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212);
return $tmp213;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 352
uint32_t $tmp214 = param0.value;
uint16_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 == ((uint32_t) $tmp215);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
return $tmp217;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 359
uint32_t $tmp218 = param0.value;
uint32_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220);
return $tmp221;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 365
uint32_t $tmp222 = param0.value;
uint64_t $tmp223 = param1.value;
bool $tmp224 = ((uint64_t) $tmp222) == $tmp223;
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit($tmp224);
return $tmp225;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 371
uint32_t $tmp226 = param0.value;
int8_t $tmp227 = param1.value;
bool $tmp228 = ((int64_t) $tmp226) != ((int64_t) $tmp227);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228);
return $tmp229;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 377
uint32_t $tmp230 = param0.value;
int16_t $tmp231 = param1.value;
bool $tmp232 = ((int64_t) $tmp230) != ((int64_t) $tmp231);
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit($tmp232);
return $tmp233;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 383
uint32_t $tmp234 = param0.value;
int32_t $tmp235 = param1.value;
bool $tmp236 = ((int64_t) $tmp234) != ((int64_t) $tmp235);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236);
return $tmp237;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 389
uint32_t $tmp238 = param0.value;
uint8_t $tmp239 = param1.value;
bool $tmp240 = $tmp238 != ((uint32_t) $tmp239);
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit($tmp240);
return $tmp241;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 395
uint32_t $tmp242 = param0.value;
uint16_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 != ((uint32_t) $tmp243);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244);
return $tmp245;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 402
uint32_t $tmp246 = param0.value;
uint32_t $tmp247 = param1.value;
bool $tmp248 = $tmp246 != $tmp247;
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248);
return $tmp249;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 408
uint32_t $tmp250 = param0.value;
uint64_t $tmp251 = param1.value;
bool $tmp252 = ((uint64_t) $tmp250) != $tmp251;
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252);
return $tmp253;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 414
uint32_t $tmp254 = param0.value;
int8_t $tmp255 = param1.value;
bool $tmp256 = ((int64_t) $tmp254) < ((int64_t) $tmp255);
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256);
return $tmp257;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 420
uint32_t $tmp258 = param0.value;
int16_t $tmp259 = param1.value;
bool $tmp260 = ((int64_t) $tmp258) < ((int64_t) $tmp259);
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit($tmp260);
return $tmp261;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 426
uint32_t $tmp262 = param0.value;
int32_t $tmp263 = param1.value;
bool $tmp264 = ((int64_t) $tmp262) < ((int64_t) $tmp263);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264);
return $tmp265;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 432
uint32_t $tmp266 = param0.value;
uint8_t $tmp267 = param1.value;
bool $tmp268 = $tmp266 < ((uint32_t) $tmp267);
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit($tmp268);
return $tmp269;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 438
uint32_t $tmp270 = param0.value;
uint16_t $tmp271 = param1.value;
bool $tmp272 = $tmp270 < ((uint32_t) $tmp271);
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit($tmp272);
return $tmp273;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 445
uint32_t $tmp274 = param0.value;
uint32_t $tmp275 = param1.value;
bool $tmp276 = $tmp274 < $tmp275;
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit($tmp276);
return $tmp277;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 451
uint32_t $tmp278 = param0.value;
uint64_t $tmp279 = param1.value;
bool $tmp280 = ((uint64_t) $tmp278) < $tmp279;
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280);
return $tmp281;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 457
uint32_t $tmp282 = param0.value;
int8_t $tmp283 = param1.value;
bool $tmp284 = ((int64_t) $tmp282) > ((int64_t) $tmp283);
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284);
return $tmp285;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 463
uint32_t $tmp286 = param0.value;
int16_t $tmp287 = param1.value;
bool $tmp288 = ((int64_t) $tmp286) > ((int64_t) $tmp287);
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit($tmp288);
return $tmp289;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 469
uint32_t $tmp290 = param0.value;
int32_t $tmp291 = param1.value;
bool $tmp292 = ((int64_t) $tmp290) > ((int64_t) $tmp291);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292);
return $tmp293;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 475
uint32_t $tmp294 = param0.value;
uint8_t $tmp295 = param1.value;
bool $tmp296 = $tmp294 > ((uint32_t) $tmp295);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296);
return $tmp297;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 481
uint32_t $tmp298 = param0.value;
uint16_t $tmp299 = param1.value;
bool $tmp300 = $tmp298 > ((uint32_t) $tmp299);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300);
return $tmp301;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 488
uint32_t $tmp302 = param0.value;
uint32_t $tmp303 = param1.value;
bool $tmp304 = $tmp302 > $tmp303;
frost$core$Bit $tmp305 = frost$core$Bit$init$builtin_bit($tmp304);
return $tmp305;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 494
uint32_t $tmp306 = param0.value;
uint64_t $tmp307 = param1.value;
bool $tmp308 = ((uint64_t) $tmp306) > $tmp307;
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit($tmp308);
return $tmp309;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 500
uint32_t $tmp310 = param0.value;
int8_t $tmp311 = param1.value;
bool $tmp312 = ((int64_t) $tmp310) >= ((int64_t) $tmp311);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312);
return $tmp313;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 506
uint32_t $tmp314 = param0.value;
int16_t $tmp315 = param1.value;
bool $tmp316 = ((int64_t) $tmp314) >= ((int64_t) $tmp315);
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit($tmp316);
return $tmp317;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 512
uint32_t $tmp318 = param0.value;
int32_t $tmp319 = param1.value;
bool $tmp320 = ((int64_t) $tmp318) >= ((int64_t) $tmp319);
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320);
return $tmp321;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 518
uint32_t $tmp322 = param0.value;
uint8_t $tmp323 = param1.value;
bool $tmp324 = $tmp322 >= ((uint32_t) $tmp323);
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit($tmp324);
return $tmp325;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 524
uint32_t $tmp326 = param0.value;
uint16_t $tmp327 = param1.value;
bool $tmp328 = $tmp326 >= ((uint32_t) $tmp327);
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328);
return $tmp329;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 531
uint32_t $tmp330 = param0.value;
uint32_t $tmp331 = param1.value;
bool $tmp332 = $tmp330 >= $tmp331;
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332);
return $tmp333;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 537
uint32_t $tmp334 = param0.value;
uint64_t $tmp335 = param1.value;
bool $tmp336 = ((uint64_t) $tmp334) >= $tmp335;
frost$core$Bit $tmp337 = frost$core$Bit$init$builtin_bit($tmp336);
return $tmp337;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 543
uint32_t $tmp338 = param0.value;
int8_t $tmp339 = param1.value;
bool $tmp340 = ((int64_t) $tmp338) <= ((int64_t) $tmp339);
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit($tmp340);
return $tmp341;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 549
uint32_t $tmp342 = param0.value;
int16_t $tmp343 = param1.value;
bool $tmp344 = ((int64_t) $tmp342) <= ((int64_t) $tmp343);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344);
return $tmp345;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 555
uint32_t $tmp346 = param0.value;
int32_t $tmp347 = param1.value;
bool $tmp348 = ((int64_t) $tmp346) <= ((int64_t) $tmp347);
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348);
return $tmp349;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 561
uint32_t $tmp350 = param0.value;
uint8_t $tmp351 = param1.value;
bool $tmp352 = $tmp350 <= ((uint32_t) $tmp351);
frost$core$Bit $tmp353 = frost$core$Bit$init$builtin_bit($tmp352);
return $tmp353;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 567
uint32_t $tmp354 = param0.value;
uint16_t $tmp355 = param1.value;
bool $tmp356 = $tmp354 <= ((uint32_t) $tmp355);
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356);
return $tmp357;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 574
uint32_t $tmp358 = param0.value;
uint32_t $tmp359 = param1.value;
bool $tmp360 = $tmp358 <= $tmp359;
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360);
return $tmp361;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 580
uint32_t $tmp362 = param0.value;
uint64_t $tmp363 = param1.value;
bool $tmp364 = ((uint64_t) $tmp362) <= $tmp363;
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364);
return $tmp365;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 586
uint32_t $tmp366 = param0.value;
int8_t $tmp367 = param1.value;
bool $tmp368 = ((int64_t) $tmp366) < ((int64_t) $tmp367);
frost$core$Bit $tmp369 = frost$core$Bit$init$builtin_bit($tmp368);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block1; else goto block2;
block1:;
// line 587
uint32_t $tmp371 = param0.value;
frost$core$Int64 $tmp372 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp371));
return $tmp372;
block2:;
// line 589
int8_t $tmp373 = param1.value;
frost$core$Int64 $tmp374 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp373));
return $tmp374;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 595
uint32_t $tmp375 = param0.value;
int16_t $tmp376 = param1.value;
bool $tmp377 = ((int64_t) $tmp375) < ((int64_t) $tmp376);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block1:;
// line 596
uint32_t $tmp380 = param0.value;
frost$core$Int64 $tmp381 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp380));
return $tmp381;
block2:;
// line 598
int16_t $tmp382 = param1.value;
frost$core$Int64 $tmp383 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp382));
return $tmp383;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 604
uint32_t $tmp384 = param0.value;
int32_t $tmp385 = param1.value;
bool $tmp386 = ((int64_t) $tmp384) < ((int64_t) $tmp385);
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block1; else goto block2;
block1:;
// line 605
uint32_t $tmp389 = param0.value;
frost$core$Int64 $tmp390 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp389));
return $tmp390;
block2:;
// line 607
int32_t $tmp391 = param1.value;
frost$core$Int64 $tmp392 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp391));
return $tmp392;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 614
uint32_t $tmp393 = param0.value;
uint8_t $tmp394 = param1.value;
bool $tmp395 = $tmp393 < ((uint32_t) $tmp394);
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit($tmp395);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block1; else goto block2;
block1:;
// line 615
uint32_t $tmp398 = param0.value;
frost$core$UInt32 $tmp399 = frost$core$UInt32$init$builtin_uint32($tmp398);
return $tmp399;
block2:;
// line 617
uint8_t $tmp400 = param1.value;
frost$core$UInt32 $tmp401 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp400));
return $tmp401;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 623
uint32_t $tmp402 = param0.value;
uint16_t $tmp403 = param1.value;
bool $tmp404 = $tmp402 < ((uint32_t) $tmp403);
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block1; else goto block2;
block1:;
// line 624
uint32_t $tmp407 = param0.value;
frost$core$UInt32 $tmp408 = frost$core$UInt32$init$builtin_uint32($tmp407);
return $tmp408;
block2:;
// line 626
uint16_t $tmp409 = param1.value;
frost$core$UInt32 $tmp410 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp409));
return $tmp410;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 632
uint32_t $tmp411 = param0.value;
uint32_t $tmp412 = param1.value;
bool $tmp413 = $tmp411 < $tmp412;
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block1; else goto block2;
block1:;
// line 633
uint32_t $tmp416 = param0.value;
frost$core$UInt32 $tmp417 = frost$core$UInt32$init$builtin_uint32($tmp416);
return $tmp417;
block2:;
// line 635
uint32_t $tmp418 = param1.value;
frost$core$UInt32 $tmp419 = frost$core$UInt32$init$builtin_uint32($tmp418);
return $tmp419;

}
frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 641
uint32_t $tmp420 = param0.value;
uint64_t $tmp421 = param1.value;
bool $tmp422 = ((uint64_t) $tmp420) < $tmp421;
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block1:;
// line 642
uint32_t $tmp425 = param0.value;
frost$core$UInt64 $tmp426 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp425));
return $tmp426;
block2:;
// line 644
uint64_t $tmp427 = param1.value;
frost$core$UInt64 $tmp428 = frost$core$UInt64$init$builtin_uint64($tmp427);
return $tmp428;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// line 650
uint32_t $tmp429 = param0.value;
int8_t $tmp430 = param1.value;
bool $tmp431 = ((int64_t) $tmp429) > ((int64_t) $tmp430);
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit($tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block1; else goto block2;
block1:;
// line 651
uint32_t $tmp434 = param0.value;
frost$core$Int64 $tmp435 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp434));
return $tmp435;
block2:;
// line 653
int8_t $tmp436 = param1.value;
frost$core$Int64 $tmp437 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp436));
return $tmp437;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// line 659
uint32_t $tmp438 = param0.value;
int16_t $tmp439 = param1.value;
bool $tmp440 = ((int64_t) $tmp438) > ((int64_t) $tmp439);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block1; else goto block2;
block1:;
// line 660
uint32_t $tmp443 = param0.value;
frost$core$Int64 $tmp444 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp443));
return $tmp444;
block2:;
// line 662
int16_t $tmp445 = param1.value;
frost$core$Int64 $tmp446 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp445));
return $tmp446;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// line 668
uint32_t $tmp447 = param0.value;
int32_t $tmp448 = param1.value;
bool $tmp449 = ((int64_t) $tmp447) > ((int64_t) $tmp448);
frost$core$Bit $tmp450 = frost$core$Bit$init$builtin_bit($tmp449);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block1; else goto block2;
block1:;
// line 669
uint32_t $tmp452 = param0.value;
frost$core$Int64 $tmp453 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp452));
return $tmp453;
block2:;
// line 671
int32_t $tmp454 = param1.value;
frost$core$Int64 $tmp455 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp454));
return $tmp455;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// line 678
uint32_t $tmp456 = param0.value;
uint8_t $tmp457 = param1.value;
bool $tmp458 = $tmp456 > ((uint32_t) $tmp457);
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block1; else goto block2;
block1:;
// line 679
uint32_t $tmp461 = param0.value;
frost$core$UInt32 $tmp462 = frost$core$UInt32$init$builtin_uint32($tmp461);
return $tmp462;
block2:;
// line 681
uint8_t $tmp463 = param1.value;
frost$core$UInt32 $tmp464 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp463));
return $tmp464;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// line 687
uint32_t $tmp465 = param0.value;
uint16_t $tmp466 = param1.value;
bool $tmp467 = $tmp465 > ((uint32_t) $tmp466);
frost$core$Bit $tmp468 = frost$core$Bit$init$builtin_bit($tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block1; else goto block2;
block1:;
// line 688
uint32_t $tmp470 = param0.value;
frost$core$UInt32 $tmp471 = frost$core$UInt32$init$builtin_uint32($tmp470);
return $tmp471;
block2:;
// line 690
uint16_t $tmp472 = param1.value;
frost$core$UInt32 $tmp473 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp472));
return $tmp473;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// line 696
uint32_t $tmp474 = param0.value;
uint32_t $tmp475 = param1.value;
bool $tmp476 = $tmp474 > $tmp475;
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit($tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block1; else goto block2;
block1:;
// line 697
uint32_t $tmp479 = param0.value;
frost$core$UInt32 $tmp480 = frost$core$UInt32$init$builtin_uint32($tmp479);
return $tmp480;
block2:;
// line 699
uint32_t $tmp481 = param1.value;
frost$core$UInt32 $tmp482 = frost$core$UInt32$init$builtin_uint32($tmp481);
return $tmp482;

}
frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// line 705
uint32_t $tmp483 = param0.value;
uint64_t $tmp484 = param1.value;
bool $tmp485 = ((uint64_t) $tmp483) > $tmp484;
frost$core$Bit $tmp486 = frost$core$Bit$init$builtin_bit($tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 706
uint32_t $tmp488 = param0.value;
frost$core$UInt64 $tmp489 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp488));
return $tmp489;
block2:;
// line 708
uint64_t $tmp490 = param1.value;
frost$core$UInt64 $tmp491 = frost$core$UInt64$init$builtin_uint64($tmp490);
return $tmp491;

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$Range$LTfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$Range$LTfrost$core$UInt32$GT param0) {

// line 713
org$frostlang$frost$UInt32List* $tmp492 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
frost$core$UInt32 $tmp493 = param0.min;
frost$core$UInt32 $tmp494 = param0.max;
frost$core$UInt32 $tmp495 = (frost$core$UInt32) {1};
frost$core$Bit $tmp496 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp497 = frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit($tmp493, $tmp494, $tmp495, $tmp496);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp492, $tmp497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp492)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($1:org.frostlang.frost.UInt32List)
return ((frost$collections$ListView*) $tmp492);

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

// line 718
org$frostlang$frost$UInt32List* $tmp498 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp498, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp498)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($1:org.frostlang.frost.UInt32List)
return ((frost$collections$ListView*) $tmp498);

}
frost$core$Bit frost$core$UInt32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp499 = (frost$core$Int64) {0};
int64_t $tmp500 = param1.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 >= $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block1; else goto block2;
block1:;
frost$core$UInt32$wrapper* $tmp505;
$tmp505 = (frost$core$UInt32$wrapper*) frostObjectAlloc(16, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp505->value = param0;
ITable* $tmp506 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Int64 $tmp509 = $tmp507(((frost$collections$CollectionView*) $tmp505));
int64_t $tmp510 = param1.value;
int64_t $tmp511 = $tmp509.value;
bool $tmp512 = $tmp510 < $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp505)));
// unreffing REF($7:frost.collections.CollectionView)
*(&local0) = $tmp513;
goto block3;
block2:;
*(&local0) = $tmp503;
goto block3;
block3:;
frost$core$Bit $tmp514 = *(&local0);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {723};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block4:;
// line 724
frost$core$Int64 $tmp519 = (frost$core$Int64) {1};
frost$core$Int64 $tmp520 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp519, param1);
frost$core$Int64 $tmp521 = frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp520);
frost$core$Int64 $tmp522 = (frost$core$Int64) {0};
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 != $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
return $tmp526;

}
frost$core$Int64 frost$core$UInt32$get_count$R$frost$core$Int64(frost$core$UInt32 param0) {

// line 730
frost$core$Int64 $tmp527 = (frost$core$Int64) {32};
return $tmp527;

}
frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt32 param0) {

// line 735
org$frostlang$frost$IntBitIterator* $tmp528 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp529 = frost$core$UInt32$convert$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp530 = (frost$core$UInt64) {2147483648};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp528, $tmp529, $tmp530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp528)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($1:org.frostlang.frost.IntBitIterator)
return ((frost$collections$Iterator*) $tmp528);

}
frost$core$Int64 frost$core$UInt32$get_hash$R$frost$core$Int64(frost$core$UInt32 param0) {

// line 740
uint32_t $tmp531 = param0.value;
frost$core$Int64 $tmp532 = (frost$core$Int64) {((int64_t) $tmp531)};
return $tmp532;

}
frost$core$UInt32$nullable frost$core$UInt32$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt32$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp533 = (frost$core$Int64) {2};
int64_t $tmp534 = param1.value;
int64_t $tmp535 = $tmp533.value;
bool $tmp536 = $tmp534 >= $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {36};
int64_t $tmp540 = param1.value;
int64_t $tmp541 = $tmp539.value;
bool $tmp542 = $tmp540 <= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
*(&local0) = $tmp543;
goto block3;
block2:;
*(&local0) = $tmp537;
goto block3;
block3:;
frost$core$Bit $tmp544 = *(&local0);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {746};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s547, $tmp546, &$s548);
abort(); // unreachable
block4:;
// line 747
frost$core$UInt64$nullable $tmp549 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp549;
// line 748
frost$core$UInt64$nullable $tmp550 = *(&local1);
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit(!$tmp550.nonnull);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block6; else goto block7;
block6:;
// line 749
return ((frost$core$UInt32$nullable) { .nonnull = false });
block7:;
// line 751
frost$core$UInt64$nullable $tmp553 = *(&local1);
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit($tmp553.nonnull);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {751};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block8:;
frost$core$UInt32 $tmp559 = frost$core$UInt64$convert$R$frost$core$UInt32(((frost$core$UInt64) $tmp553.value));
return ((frost$core$UInt32$nullable) { $tmp559, true });

}
frost$core$Int8 frost$core$UInt32$convert$R$frost$core$Int8(frost$core$UInt32 param0) {

// line 756
uint32_t $tmp560 = param0.value;
frost$core$Int8 $tmp561 = (frost$core$Int8) {((int8_t) $tmp560)};
return $tmp561;

}
frost$core$Int16 frost$core$UInt32$convert$R$frost$core$Int16(frost$core$UInt32 param0) {

// line 761
uint32_t $tmp562 = param0.value;
frost$core$Int16 $tmp563 = (frost$core$Int16) {((int16_t) $tmp562)};
return $tmp563;

}
frost$core$Int32 frost$core$UInt32$convert$R$frost$core$Int32(frost$core$UInt32 param0) {

// line 766
uint32_t $tmp564 = param0.value;
frost$core$Int32 $tmp565 = (frost$core$Int32) {((int32_t) $tmp564)};
return $tmp565;

}
frost$core$Int64 frost$core$UInt32$convert$R$frost$core$Int64(frost$core$UInt32 param0) {

// line 771
uint32_t $tmp566 = param0.value;
frost$core$Int64 $tmp567 = (frost$core$Int64) {((int64_t) $tmp566)};
return $tmp567;

}
frost$core$UInt8 frost$core$UInt32$convert$R$frost$core$UInt8(frost$core$UInt32 param0) {

// line 776
uint32_t $tmp568 = param0.value;
frost$core$UInt8 $tmp569 = (frost$core$UInt8) {((uint8_t) $tmp568)};
return $tmp569;

}
frost$core$UInt16 frost$core$UInt32$convert$R$frost$core$UInt16(frost$core$UInt32 param0) {

// line 781
uint32_t $tmp570 = param0.value;
frost$core$UInt16 $tmp571 = (frost$core$UInt16) {((uint16_t) $tmp570)};
return $tmp571;

}
frost$core$UInt64 frost$core$UInt32$convert$R$frost$core$UInt64(frost$core$UInt32 param0) {

// line 786
uint32_t $tmp572 = param0.value;
frost$core$UInt64 $tmp573 = (frost$core$UInt64) {((uint64_t) $tmp572)};
return $tmp573;

}
frost$core$Real32 frost$core$UInt32$convert$R$frost$core$Real32(frost$core$UInt32 param0) {

// line 791
uint32_t $tmp574 = param0.value;
frost$core$Real32 $tmp575 = (frost$core$Real32) {((float) $tmp574)};
return $tmp575;

}
frost$core$Real64 frost$core$UInt32$convert$R$frost$core$Real64(frost$core$UInt32 param0) {

// line 796
uint32_t $tmp576 = param0.value;
frost$core$Real64 $tmp577 = (frost$core$Real64) {((double) $tmp576)};
return $tmp577;

}
frost$core$String* frost$core$UInt32$convert$R$frost$core$String(frost$core$UInt32 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt32 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 802
frost$core$Int64 $tmp578 = (frost$core$Int64) {10};
*(&local0) = $tmp578;
// line 803
frost$core$Int64 $tmp579 = *(&local0);
int64_t $tmp580 = $tmp579.value;
frost$core$Char8* $tmp581 = ((frost$core$Char8*) frostAlloc($tmp580 * 1));
*(&local1) = $tmp581;
// line 804
frost$core$Int64 $tmp582 = *(&local0);
frost$core$Int64 $tmp583 = (frost$core$Int64) {1};
int64_t $tmp584 = $tmp582.value;
int64_t $tmp585 = $tmp583.value;
int64_t $tmp586 = $tmp584 - $tmp585;
frost$core$Int64 $tmp587 = (frost$core$Int64) {$tmp586};
*(&local2) = $tmp587;
// line 805
*(&local3) = param0;
// line 806
frost$core$UInt32 $tmp588 = *(&local3);
frost$core$UInt32 $tmp589 = (frost$core$UInt32) {0};
uint32_t $tmp590 = $tmp588.value;
uint32_t $tmp591 = $tmp589.value;
bool $tmp592 = $tmp590 >= $tmp591;
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block1; else goto block3;
block1:;
// line 807
goto block4;
block4:;
// line 808
frost$core$Char8* $tmp595 = *(&local1);
frost$core$Int64 $tmp596 = *(&local2);
frost$core$UInt32 $tmp597 = *(&local3);
frost$core$UInt32 $tmp598 = (frost$core$UInt32) {10};
frost$core$UInt32 $tmp599 = frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32($tmp597, $tmp598);
frost$core$UInt32 $tmp600 = (frost$core$UInt32) {48};
uint32_t $tmp601 = $tmp599.value;
uint32_t $tmp602 = $tmp600.value;
uint32_t $tmp603 = $tmp601 + $tmp602;
frost$core$UInt32 $tmp604 = (frost$core$UInt32) {$tmp603};
frost$core$UInt8 $tmp605 = frost$core$UInt32$convert$R$frost$core$UInt8($tmp604);
frost$core$Char8 $tmp606 = frost$core$Char8$init$frost$core$UInt8($tmp605);
int64_t $tmp607 = $tmp596.value;
$tmp595[$tmp607] = $tmp606;
// line 809
frost$core$UInt32 $tmp608 = *(&local3);
frost$core$UInt32 $tmp609 = (frost$core$UInt32) {10};
uint32_t $tmp610 = $tmp608.value;
uint32_t $tmp611 = $tmp609.value;
uint32_t $tmp612 = $tmp610 / $tmp611;
frost$core$UInt32 $tmp613 = (frost$core$UInt32) {$tmp612};
*(&local3) = $tmp613;
// line 810
frost$core$Int64 $tmp614 = *(&local2);
frost$core$Int64 $tmp615 = (frost$core$Int64) {1};
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
*(&local2) = $tmp619;
goto block5;
block5:;
frost$core$UInt32 $tmp620 = *(&local3);
frost$core$UInt32 $tmp621 = (frost$core$UInt32) {0};
uint32_t $tmp622 = $tmp620.value;
uint32_t $tmp623 = $tmp621.value;
bool $tmp624 = $tmp622 > $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block4; else goto block6;
block6:;
// line 813
frost$core$Int64 $tmp627 = *(&local2);
frost$core$Int64 $tmp628 = (frost$core$Int64) {1};
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629 + $tmp630;
frost$core$Int64 $tmp632 = (frost$core$Int64) {$tmp631};
*(&local2) = $tmp632;
goto block2;
block3:;
// line 1
// line 816
goto block7;
block7:;
// line 817
frost$core$Char8* $tmp633 = *(&local1);
frost$core$Int64 $tmp634 = *(&local2);
frost$core$UInt32 $tmp635 = (frost$core$UInt32) {48};
frost$core$UInt32 $tmp636 = *(&local3);
frost$core$UInt32 $tmp637 = (frost$core$UInt32) {10};
frost$core$UInt32 $tmp638 = frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32($tmp636, $tmp637);
uint32_t $tmp639 = $tmp635.value;
uint32_t $tmp640 = $tmp638.value;
uint32_t $tmp641 = $tmp639 - $tmp640;
frost$core$UInt32 $tmp642 = (frost$core$UInt32) {$tmp641};
frost$core$UInt8 $tmp643 = frost$core$UInt32$convert$R$frost$core$UInt8($tmp642);
frost$core$Char8 $tmp644 = frost$core$Char8$init$frost$core$UInt8($tmp643);
int64_t $tmp645 = $tmp634.value;
$tmp633[$tmp645] = $tmp644;
// line 818
frost$core$UInt32 $tmp646 = *(&local3);
frost$core$UInt32 $tmp647 = (frost$core$UInt32) {10};
uint32_t $tmp648 = $tmp646.value;
uint32_t $tmp649 = $tmp647.value;
uint32_t $tmp650 = $tmp648 / $tmp649;
frost$core$UInt32 $tmp651 = (frost$core$UInt32) {$tmp650};
*(&local3) = $tmp651;
// line 819
frost$core$Int64 $tmp652 = *(&local2);
frost$core$Int64 $tmp653 = (frost$core$Int64) {1};
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 - $tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {$tmp656};
*(&local2) = $tmp657;
goto block8;
block8:;
frost$core$UInt32 $tmp658 = *(&local3);
frost$core$UInt32 $tmp659 = (frost$core$UInt32) {0};
uint32_t $tmp660 = $tmp658.value;
uint32_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 < $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block7; else goto block9;
block9:;
// line 822
frost$core$Char8* $tmp665 = *(&local1);
frost$core$Int64 $tmp666 = *(&local2);
frost$core$UInt8 $tmp667 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp668 = frost$core$Char8$init$frost$core$UInt8($tmp667);
int64_t $tmp669 = $tmp666.value;
$tmp665[$tmp669] = $tmp668;
goto block2;
block2:;
// line 824
frost$core$Int64 $tmp670 = *(&local0);
frost$core$Int64 $tmp671 = *(&local2);
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 - $tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {$tmp674};
*(&local4) = $tmp675;
// line 825
frost$core$Int64 $tmp676 = (frost$core$Int64) {0};
frost$core$Int64 $tmp677 = *(&local4);
frost$core$Bit $tmp678 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp679 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp676, $tmp677, $tmp678);
frost$core$Int64 $tmp680 = $tmp679.min;
*(&local5) = $tmp680;
frost$core$Int64 $tmp681 = $tmp679.max;
frost$core$Bit $tmp682 = $tmp679.inclusive;
bool $tmp683 = $tmp682.value;
frost$core$Int64 $tmp684 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp685 = frost$core$Int64$convert$R$frost$core$UInt64($tmp684);
if ($tmp683) goto block13; else goto block14;
block13:;
int64_t $tmp686 = $tmp680.value;
int64_t $tmp687 = $tmp681.value;
bool $tmp688 = $tmp686 <= $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block10; else goto block11;
block14:;
int64_t $tmp691 = $tmp680.value;
int64_t $tmp692 = $tmp681.value;
bool $tmp693 = $tmp691 < $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block10; else goto block11;
block10:;
// line 826
frost$core$Char8* $tmp696 = *(&local1);
frost$core$Int64 $tmp697 = *(&local5);
frost$core$Char8* $tmp698 = *(&local1);
frost$core$Int64 $tmp699 = *(&local5);
frost$core$Int64 $tmp700 = *(&local2);
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701 + $tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {$tmp703};
int64_t $tmp705 = $tmp704.value;
frost$core$Char8 $tmp706 = $tmp698[$tmp705];
int64_t $tmp707 = $tmp697.value;
$tmp696[$tmp707] = $tmp706;
goto block12;
block12:;
frost$core$Int64 $tmp708 = *(&local5);
int64_t $tmp709 = $tmp681.value;
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709 - $tmp710;
frost$core$Int64 $tmp712 = (frost$core$Int64) {$tmp711};
frost$core$UInt64 $tmp713 = frost$core$Int64$convert$R$frost$core$UInt64($tmp712);
if ($tmp683) goto block16; else goto block17;
block16:;
uint64_t $tmp714 = $tmp713.value;
uint64_t $tmp715 = $tmp685.value;
bool $tmp716 = $tmp714 >= $tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block15; else goto block11;
block17:;
uint64_t $tmp719 = $tmp713.value;
uint64_t $tmp720 = $tmp685.value;
bool $tmp721 = $tmp719 > $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block15; else goto block11;
block15:;
int64_t $tmp724 = $tmp708.value;
int64_t $tmp725 = $tmp684.value;
int64_t $tmp726 = $tmp724 + $tmp725;
frost$core$Int64 $tmp727 = (frost$core$Int64) {$tmp726};
*(&local5) = $tmp727;
goto block10;
block11:;
// line 828
frost$core$String* $tmp728 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp729 = *(&local1);
frost$core$Int64 $tmp730 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp728, $tmp729, $tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($203:frost.core.String)
return $tmp728;

}
frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String(frost$core$UInt32 param0, frost$core$String* param1) {

// line 834
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp732 = frost$core$UInt32$convert$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp733 = (frost$core$UInt64) {4294967295};
frost$core$String* $tmp734 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp731, $tmp732, $tmp733, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($4:frost.core.String)
return $tmp734;

}
void frost$core$UInt32$cleanup(frost$core$UInt32 param0) {

return;

}

