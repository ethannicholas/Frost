#include "frost/core/UInt64.h"
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
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/UInt64List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_count$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_hash$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt64$format$frost$core$String$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt64$convert$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$BNOT$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt64$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt64$convert$R$frost$core$Int8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt64$convert$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt64$convert$R$frost$core$Int16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt64$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt64$convert$R$frost$core$Int32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$convert$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt64$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt64$convert$R$frost$core$UInt8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt64$convert$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt64$convert$R$frost$core$UInt16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt64$convert$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt64$convert$R$frost$core$UInt32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt64$convert$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt64$convert$R$frost$core$Real32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$convert$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt64$convert$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt64$cleanup(((frost$core$UInt64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$core$UInt64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$_frost$collections$CollectionView, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$_frost$core$Equatable, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int64$shim, frost$core$UInt64$convert$R$frost$core$Int8$shim, frost$core$UInt64$convert$R$frost$core$Int16$shim, frost$core$UInt64$convert$R$frost$core$Int32$shim, frost$core$UInt64$convert$R$frost$core$Int64$shim, frost$core$UInt64$convert$R$frost$core$UInt8$shim, frost$core$UInt64$convert$R$frost$core$UInt16$shim, frost$core$UInt64$convert$R$frost$core$UInt32$shim, frost$core$UInt64$convert$R$frost$core$Real32$shim, frost$core$UInt64$convert$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[7]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[7]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn331)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 5763903624548886351, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, -424783135773710871, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -8879437518421684442, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -1339440412019629644, NULL };

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t param0) {

frost$core$UInt64 local0;
// line 30
uint64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt64 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint64_t) $tmp6);
frost$core$UInt64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt64 local0;
// line 42
uint16_t $tmp9 = param0.value;
uint64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint64_t) $tmp9);
frost$core$UInt64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$UInt64 local0;
// line 48
uint32_t $tmp12 = param0.value;
uint64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((uint64_t) $tmp12);
frost$core$UInt64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 54
uint64_t $tmp15 = param0.value;
uint64_t $tmp16 = param1.value;
uint64_t $tmp17 = $tmp15 + $tmp16;
frost$core$UInt64 $tmp18 = frost$core$UInt64$init$builtin_uint64($tmp17);
return $tmp18;

}
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 60
uint64_t $tmp19 = param0.value;
uint64_t $tmp20 = param1.value;
uint64_t $tmp21 = $tmp19 - $tmp20;
frost$core$UInt64 $tmp22 = frost$core$UInt64$init$builtin_uint64($tmp21);
return $tmp22;

}
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 param0) {

// line 65
uint64_t $tmp23 = param0.value;
uint64_t $tmp24 = -$tmp23;
frost$core$UInt64 $tmp25 = (frost$core$UInt64) {$tmp24};
return $tmp25;

}
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 71
uint64_t $tmp26 = param0.value;
uint64_t $tmp27 = param1.value;
uint64_t $tmp28 = $tmp26 * $tmp27;
frost$core$UInt64 $tmp29 = frost$core$UInt64$init$builtin_uint64($tmp28);
return $tmp29;

}
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 77
uint64_t $tmp30 = param0.value;
uint64_t $tmp31 = param1.value;
uint64_t $tmp32 = $tmp30 / $tmp31;
frost$core$UInt64 $tmp33 = frost$core$UInt64$init$builtin_uint64($tmp32);
return $tmp33;

}
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 83
uint64_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = $tmp34 % $tmp35;
frost$core$UInt64 $tmp37 = frost$core$UInt64$init$builtin_uint64($tmp36);
return $tmp37;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int8 param1) {

// line 89
uint64_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
double $tmp40 = ((double) $tmp38) / ((double) $tmp39);
frost$core$Real64 $tmp41 = frost$core$Real64$init$builtin_float64($tmp40);
return $tmp41;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int16 param1) {

// line 95
uint64_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
double $tmp44 = ((double) $tmp42) / ((double) $tmp43);
frost$core$Real64 $tmp45 = frost$core$Real64$init$builtin_float64($tmp44);
return $tmp45;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int32 param1) {

// line 101
uint64_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
double $tmp48 = ((double) $tmp46) / ((double) $tmp47);
frost$core$Real64 $tmp49 = frost$core$Real64$init$builtin_float64($tmp48);
return $tmp49;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 107
uint64_t $tmp50 = param0.value;
int64_t $tmp51 = param1.value;
double $tmp52 = ((double) $tmp50) / ((double) $tmp51);
frost$core$Real64 $tmp53 = frost$core$Real64$init$builtin_float64($tmp52);
return $tmp53;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 113
uint64_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
double $tmp56 = ((double) $tmp54) / ((double) $tmp55);
frost$core$Real64 $tmp57 = frost$core$Real64$init$builtin_float64($tmp56);
return $tmp57;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 119
uint64_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) / ((double) $tmp59);
frost$core$Real64 $tmp61 = frost$core$Real64$init$builtin_float64($tmp60);
return $tmp61;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 125
uint64_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
double $tmp64 = ((double) $tmp62) / ((double) $tmp63);
frost$core$Real64 $tmp65 = frost$core$Real64$init$builtin_float64($tmp64);
return $tmp65;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 131
uint64_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
double $tmp68 = ((double) $tmp66) / ((double) $tmp67);
frost$core$Real64 $tmp69 = frost$core$Real64$init$builtin_float64($tmp68);
return $tmp69;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real32 param1) {

// line 137
uint64_t $tmp70 = param0.value;
float $tmp71 = param1.value;
double $tmp72 = ((double) $tmp70) / ((double) $tmp71);
frost$core$Real64 $tmp73 = frost$core$Real64$init$builtin_float64($tmp72);
return $tmp73;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real64 param1) {

// line 143
uint64_t $tmp74 = param0.value;
double $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / $tmp75;
frost$core$Real64 $tmp77 = frost$core$Real64$init$builtin_float64($tmp76);
return $tmp77;

}
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 param0) {

// line 148
uint64_t $tmp78 = param0.value;
uint64_t $tmp79 = !$tmp78;
frost$core$UInt64 $tmp80 = (frost$core$UInt64) {$tmp79};
return $tmp80;

}
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 154
uint64_t $tmp81 = param0.value;
int64_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) & $tmp82;
frost$core$Int64 $tmp84 = frost$core$Int64$init$builtin_int64($tmp83);
return $tmp84;

}
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 160
uint64_t $tmp85 = param0.value;
uint64_t $tmp86 = param1.value;
uint64_t $tmp87 = $tmp85 & $tmp86;
frost$core$UInt64 $tmp88 = frost$core$UInt64$init$builtin_uint64($tmp87);
return $tmp88;

}
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 166
uint64_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) | $tmp90;
frost$core$Int64 $tmp92 = frost$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 172
uint64_t $tmp93 = param0.value;
uint64_t $tmp94 = param1.value;
uint64_t $tmp95 = $tmp93 | $tmp94;
frost$core$UInt64 $tmp96 = frost$core$UInt64$init$builtin_uint64($tmp95);
return $tmp96;

}
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 178
uint64_t $tmp97 = param0.value;
int64_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) ^ $tmp98;
frost$core$Int64 $tmp100 = frost$core$Int64$init$builtin_int64($tmp99);
return $tmp100;

}
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 184
uint64_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = $tmp101 ^ $tmp102;
frost$core$UInt64 $tmp104 = frost$core$UInt64$init$builtin_uint64($tmp103);
return $tmp104;

}
frost$core$Int64 frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 190
uint64_t $tmp105 = param0.value;
int64_t $tmp106 = param1.value;
int64_t $tmp107 = ((int64_t) $tmp105) << $tmp106;
frost$core$Int64 $tmp108 = frost$core$Int64$init$builtin_int64($tmp107);
return $tmp108;

}
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 196
uint64_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
uint64_t $tmp111 = $tmp109 << $tmp110;
frost$core$UInt64 $tmp112 = frost$core$UInt64$init$builtin_uint64($tmp111);
return $tmp112;

}
frost$core$Int64 frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 202
uint64_t $tmp113 = param0.value;
int64_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) >> $tmp114;
frost$core$Int64 $tmp116 = frost$core$Int64$init$builtin_int64($tmp115);
return $tmp116;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 208
uint64_t $tmp117 = param0.value;
uint64_t $tmp118 = param1.value;
uint64_t $tmp119 = $tmp117 >> $tmp118;
frost$core$UInt64 $tmp120 = frost$core$UInt64$init$builtin_uint64($tmp119);
return $tmp120;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 214
uint64_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
bool $tmp123 = $tmp121 == ((uint64_t) $tmp122);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123);
return $tmp124;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 220
uint64_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == ((uint64_t) $tmp126);
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
return $tmp128;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 226
uint64_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 == ((uint64_t) $tmp130);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit($tmp131);
return $tmp132;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 233
uint64_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 == $tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135);
return $tmp136;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 239
uint64_t $tmp137 = param0.value;
uint8_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 != ((uint64_t) $tmp138);
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
return $tmp140;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 245
uint64_t $tmp141 = param0.value;
uint16_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 != ((uint64_t) $tmp142);
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143);
return $tmp144;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 251
uint64_t $tmp145 = param0.value;
uint32_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 != ((uint64_t) $tmp146);
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147);
return $tmp148;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 258
uint64_t $tmp149 = param0.value;
uint64_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 != $tmp150;
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151);
return $tmp152;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 264
uint64_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((uint64_t) $tmp154);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155);
return $tmp156;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 270
uint64_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 < ((uint64_t) $tmp158);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159);
return $tmp160;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 276
uint64_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 < ((uint64_t) $tmp162);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163);
return $tmp164;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 283
uint64_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 < $tmp166;
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167);
return $tmp168;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 289
uint64_t $tmp169 = param0.value;
uint8_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 > ((uint64_t) $tmp170);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171);
return $tmp172;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 295
uint64_t $tmp173 = param0.value;
uint16_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 > ((uint64_t) $tmp174);
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit($tmp175);
return $tmp176;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 301
uint64_t $tmp177 = param0.value;
uint32_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 > ((uint64_t) $tmp178);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179);
return $tmp180;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 308
uint64_t $tmp181 = param0.value;
uint64_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 > $tmp182;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183);
return $tmp184;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 314
uint64_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 >= ((uint64_t) $tmp186);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187);
return $tmp188;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 320
uint64_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 >= ((uint64_t) $tmp190);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191);
return $tmp192;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 326
uint64_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 >= ((uint64_t) $tmp194);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195);
return $tmp196;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 333
uint64_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 >= $tmp198;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199);
return $tmp200;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 339
uint64_t $tmp201 = param0.value;
uint8_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 <= ((uint64_t) $tmp202);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203);
return $tmp204;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 345
uint64_t $tmp205 = param0.value;
uint16_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 <= ((uint64_t) $tmp206);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
return $tmp208;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 351
uint64_t $tmp209 = param0.value;
uint32_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 <= ((uint64_t) $tmp210);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211);
return $tmp212;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 358
uint64_t $tmp213 = param0.value;
uint64_t $tmp214 = param1.value;
bool $tmp215 = $tmp213 <= $tmp214;
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit($tmp215);
return $tmp216;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 368
uint64_t $tmp217 = param0.value;
uint8_t $tmp218 = param1.value;
bool $tmp219 = $tmp217 < ((uint64_t) $tmp218);
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 369
uint64_t $tmp222 = param0.value;
frost$core$UInt64 $tmp223 = frost$core$UInt64$init$builtin_uint64($tmp222);
return $tmp223;
block2:;
// line 371
uint8_t $tmp224 = param1.value;
frost$core$UInt64 $tmp225 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp224));
return $tmp225;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 377
uint64_t $tmp226 = param0.value;
uint16_t $tmp227 = param1.value;
bool $tmp228 = $tmp226 < ((uint64_t) $tmp227);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block1; else goto block2;
block1:;
// line 378
uint64_t $tmp231 = param0.value;
frost$core$UInt64 $tmp232 = frost$core$UInt64$init$builtin_uint64($tmp231);
return $tmp232;
block2:;
// line 380
uint16_t $tmp233 = param1.value;
frost$core$UInt64 $tmp234 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp233));
return $tmp234;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 386
uint64_t $tmp235 = param0.value;
uint32_t $tmp236 = param1.value;
bool $tmp237 = $tmp235 < ((uint64_t) $tmp236);
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block1:;
// line 387
uint64_t $tmp240 = param0.value;
frost$core$UInt64 $tmp241 = frost$core$UInt64$init$builtin_uint64($tmp240);
return $tmp241;
block2:;
// line 389
uint32_t $tmp242 = param1.value;
frost$core$UInt64 $tmp243 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp242));
return $tmp243;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 395
uint64_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 < $tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block1:;
// line 396
uint64_t $tmp249 = param0.value;
frost$core$UInt64 $tmp250 = frost$core$UInt64$init$builtin_uint64($tmp249);
return $tmp250;
block2:;
// line 398
uint64_t $tmp251 = param1.value;
frost$core$UInt64 $tmp252 = frost$core$UInt64$init$builtin_uint64($tmp251);
return $tmp252;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 408
uint64_t $tmp253 = param0.value;
uint8_t $tmp254 = param1.value;
bool $tmp255 = $tmp253 > ((uint64_t) $tmp254);
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block1:;
// line 409
uint64_t $tmp258 = param0.value;
frost$core$UInt64 $tmp259 = frost$core$UInt64$init$builtin_uint64($tmp258);
return $tmp259;
block2:;
// line 411
uint8_t $tmp260 = param1.value;
frost$core$UInt64 $tmp261 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp260));
return $tmp261;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 417
uint64_t $tmp262 = param0.value;
uint16_t $tmp263 = param1.value;
bool $tmp264 = $tmp262 > ((uint64_t) $tmp263);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 418
uint64_t $tmp267 = param0.value;
frost$core$UInt64 $tmp268 = frost$core$UInt64$init$builtin_uint64($tmp267);
return $tmp268;
block2:;
// line 420
uint16_t $tmp269 = param1.value;
frost$core$UInt64 $tmp270 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp269));
return $tmp270;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 426
uint64_t $tmp271 = param0.value;
uint32_t $tmp272 = param1.value;
bool $tmp273 = $tmp271 > ((uint64_t) $tmp272);
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit($tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block1; else goto block2;
block1:;
// line 427
uint64_t $tmp276 = param0.value;
frost$core$UInt64 $tmp277 = frost$core$UInt64$init$builtin_uint64($tmp276);
return $tmp277;
block2:;
// line 429
uint32_t $tmp278 = param1.value;
frost$core$UInt64 $tmp279 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp278));
return $tmp279;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 435
uint64_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
bool $tmp282 = $tmp280 > $tmp281;
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 436
uint64_t $tmp285 = param0.value;
frost$core$UInt64 $tmp286 = frost$core$UInt64$init$builtin_uint64($tmp285);
return $tmp286;
block2:;
// line 438
uint64_t $tmp287 = param1.value;
frost$core$UInt64 $tmp288 = frost$core$UInt64$init$builtin_uint64($tmp287);
return $tmp288;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 $tmp289 = param0.max;
frost$core$UInt64 $tmp290 = param0.min;
uint64_t $tmp291 = $tmp289.value;
uint64_t $tmp292 = $tmp290.value;
uint64_t $tmp293 = $tmp291 - $tmp292;
frost$core$UInt64 $tmp294 = (frost$core$UInt64) {$tmp293};
frost$core$Int64 $tmp295 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp296 = frost$core$Int64$convert$R$frost$core$UInt64($tmp295);
uint64_t $tmp297 = $tmp294.value;
uint64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 < $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s303, $tmp302, &$s304);
abort(); // unreachable
block1:;
// line 444
org$frostlang$frost$UInt64List* $tmp305 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
frost$core$UInt64 $tmp306 = param0.min;
frost$core$UInt64 $tmp307 = param0.max;
frost$core$UInt64 $tmp308 = (frost$core$UInt64) {1};
frost$core$Bit $tmp309 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp310 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit($tmp306, $tmp307, $tmp308, $tmp309);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp305, $tmp310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing REF($18:org.frostlang.frost.UInt64List)
return ((frost$collections$ListView*) $tmp305);

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int64 $tmp311 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp312 = (frost$core$Int64) {0};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 > $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {449};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block1:;
// line 450
org$frostlang$frost$UInt64List* $tmp321 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp321, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($12:org.frostlang.frost.UInt64List)
return ((frost$collections$ListView*) $tmp321);

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
int64_t $tmp323 = param1.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 >= $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block2;
block1:;
frost$core$UInt64$wrapper* $tmp328;
$tmp328 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp328->value = param0;
ITable* $tmp329 = ((frost$collections$CollectionView*) $tmp328)->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
frost$core$Int64 $tmp332 = $tmp330(((frost$collections$CollectionView*) $tmp328));
int64_t $tmp333 = param1.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 < $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp328)));
// unreffing REF($7:frost.collections.CollectionView)
*(&local0) = $tmp336;
goto block3;
block2:;
*(&local0) = $tmp326;
goto block3;
block3:;
frost$core$Bit $tmp337 = *(&local0);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp339 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s340, $tmp339, &$s341);
abort(); // unreachable
block4:;
// line 456
frost$core$Int64 $tmp342 = (frost$core$Int64) {1};
frost$core$Int64 $tmp343 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp342, param1);
frost$core$Int64 $tmp344 = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp343);
frost$core$Int64 $tmp345 = (frost$core$Int64) {0};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 != $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
return $tmp349;

}
frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 462
frost$core$Int64 $tmp350 = (frost$core$Int64) {64};
return $tmp350;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

// line 467
org$frostlang$frost$IntBitIterator* $tmp351 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp352 = (frost$core$UInt64) {9223372036854775808};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp351, param0, $tmp352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($1:org.frostlang.frost.IntBitIterator)
return ((frost$collections$Iterator*) $tmp351);

}
frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 472
uint64_t $tmp353 = param0.value;
frost$core$Int64 $tmp354 = (frost$core$Int64) {((int64_t) $tmp353)};
return $tmp354;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp355 = (frost$core$Int64) {2};
int64_t $tmp356 = param1.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 >= $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {36};
int64_t $tmp362 = param1.value;
int64_t $tmp363 = $tmp361.value;
bool $tmp364 = $tmp362 <= $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
*(&local0) = $tmp365;
goto block3;
block2:;
*(&local0) = $tmp359;
goto block3;
block3:;
frost$core$Bit $tmp366 = *(&local0);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {478};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block4:;
// line 479
frost$core$UInt64$nullable $tmp371 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp371;
// line 480
frost$core$UInt64$nullable $tmp372 = *(&local1);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit(!$tmp372.nonnull);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block6; else goto block7;
block6:;
// line 481
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 483
frost$core$UInt64$nullable $tmp375 = *(&local1);
return $tmp375;

}
frost$core$Int8 frost$core$UInt64$convert$R$frost$core$Int8(frost$core$UInt64 param0) {

// line 488
uint64_t $tmp376 = param0.value;
frost$core$Int8 $tmp377 = (frost$core$Int8) {((int8_t) $tmp376)};
return $tmp377;

}
frost$core$Int16 frost$core$UInt64$convert$R$frost$core$Int16(frost$core$UInt64 param0) {

// line 493
uint64_t $tmp378 = param0.value;
frost$core$Int16 $tmp379 = (frost$core$Int16) {((int16_t) $tmp378)};
return $tmp379;

}
frost$core$Int32 frost$core$UInt64$convert$R$frost$core$Int32(frost$core$UInt64 param0) {

// line 498
uint64_t $tmp380 = param0.value;
frost$core$Int32 $tmp381 = (frost$core$Int32) {((int32_t) $tmp380)};
return $tmp381;

}
frost$core$Int64 frost$core$UInt64$convert$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 503
uint64_t $tmp382 = param0.value;
frost$core$Int64 $tmp383 = (frost$core$Int64) {((int64_t) $tmp382)};
return $tmp383;

}
frost$core$UInt8 frost$core$UInt64$convert$R$frost$core$UInt8(frost$core$UInt64 param0) {

// line 508
uint64_t $tmp384 = param0.value;
frost$core$UInt8 $tmp385 = (frost$core$UInt8) {((uint8_t) $tmp384)};
return $tmp385;

}
frost$core$UInt16 frost$core$UInt64$convert$R$frost$core$UInt16(frost$core$UInt64 param0) {

// line 513
uint64_t $tmp386 = param0.value;
frost$core$UInt16 $tmp387 = (frost$core$UInt16) {((uint16_t) $tmp386)};
return $tmp387;

}
frost$core$UInt32 frost$core$UInt64$convert$R$frost$core$UInt32(frost$core$UInt64 param0) {

// line 518
uint64_t $tmp388 = param0.value;
frost$core$UInt32 $tmp389 = (frost$core$UInt32) {((uint32_t) $tmp388)};
return $tmp389;

}
frost$core$Real32 frost$core$UInt64$convert$R$frost$core$Real32(frost$core$UInt64 param0) {

// line 523
uint64_t $tmp390 = param0.value;
frost$core$Real32 $tmp391 = (frost$core$Real32) {((float) $tmp390)};
return $tmp391;

}
frost$core$Real64 frost$core$UInt64$convert$R$frost$core$Real64(frost$core$UInt64 param0) {

// line 528
uint64_t $tmp392 = param0.value;
frost$core$Real64 $tmp393 = (frost$core$Real64) {((double) $tmp392)};
return $tmp393;

}
frost$core$String* frost$core$UInt64$convert$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 534
frost$core$Int64 $tmp394 = (frost$core$Int64) {20};
*(&local0) = $tmp394;
// line 535
frost$core$Int64 $tmp395 = *(&local0);
int64_t $tmp396 = $tmp395.value;
frost$core$Char8* $tmp397 = ((frost$core$Char8*) frostAlloc($tmp396 * 1));
*(&local1) = $tmp397;
// line 536
frost$core$Int64 $tmp398 = *(&local0);
frost$core$Int64 $tmp399 = (frost$core$Int64) {1};
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400 - $tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {$tmp402};
*(&local2) = $tmp403;
// line 537
*(&local3) = param0;
// line 538
frost$core$UInt64 $tmp404 = *(&local3);
frost$core$UInt64 $tmp405 = (frost$core$UInt64) {0};
uint64_t $tmp406 = $tmp404.value;
uint64_t $tmp407 = $tmp405.value;
bool $tmp408 = $tmp406 >= $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block3;
block1:;
// line 539
goto block4;
block4:;
// line 540
frost$core$Char8* $tmp411 = *(&local1);
frost$core$Int64 $tmp412 = *(&local2);
frost$core$UInt64 $tmp413 = *(&local3);
frost$core$UInt64 $tmp414 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp415 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp413, $tmp414);
frost$core$UInt64 $tmp416 = (frost$core$UInt64) {48};
uint64_t $tmp417 = $tmp415.value;
uint64_t $tmp418 = $tmp416.value;
uint64_t $tmp419 = $tmp417 + $tmp418;
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {$tmp419};
frost$core$UInt8 $tmp421 = frost$core$UInt64$convert$R$frost$core$UInt8($tmp420);
frost$core$Char8 $tmp422 = frost$core$Char8$init$frost$core$UInt8($tmp421);
int64_t $tmp423 = $tmp412.value;
$tmp411[$tmp423] = $tmp422;
// line 541
frost$core$UInt64 $tmp424 = *(&local3);
frost$core$UInt64 $tmp425 = (frost$core$UInt64) {10};
uint64_t $tmp426 = $tmp424.value;
uint64_t $tmp427 = $tmp425.value;
uint64_t $tmp428 = $tmp426 / $tmp427;
frost$core$UInt64 $tmp429 = (frost$core$UInt64) {$tmp428};
*(&local3) = $tmp429;
// line 542
frost$core$Int64 $tmp430 = *(&local2);
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
frost$core$Int64 $tmp435 = (frost$core$Int64) {$tmp434};
*(&local2) = $tmp435;
goto block5;
block5:;
frost$core$UInt64 $tmp436 = *(&local3);
frost$core$UInt64 $tmp437 = (frost$core$UInt64) {0};
uint64_t $tmp438 = $tmp436.value;
uint64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 > $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block4; else goto block6;
block6:;
// line 545
frost$core$Int64 $tmp443 = *(&local2);
frost$core$Int64 $tmp444 = (frost$core$Int64) {1};
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445 + $tmp446;
frost$core$Int64 $tmp448 = (frost$core$Int64) {$tmp447};
*(&local2) = $tmp448;
goto block2;
block3:;
// line 1
// line 548
goto block7;
block7:;
// line 549
frost$core$Char8* $tmp449 = *(&local1);
frost$core$Int64 $tmp450 = *(&local2);
frost$core$UInt64 $tmp451 = (frost$core$UInt64) {48};
frost$core$UInt64 $tmp452 = *(&local3);
frost$core$UInt64 $tmp453 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp454 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp452, $tmp453);
uint64_t $tmp455 = $tmp451.value;
uint64_t $tmp456 = $tmp454.value;
uint64_t $tmp457 = $tmp455 - $tmp456;
frost$core$UInt64 $tmp458 = (frost$core$UInt64) {$tmp457};
frost$core$UInt8 $tmp459 = frost$core$UInt64$convert$R$frost$core$UInt8($tmp458);
frost$core$Char8 $tmp460 = frost$core$Char8$init$frost$core$UInt8($tmp459);
int64_t $tmp461 = $tmp450.value;
$tmp449[$tmp461] = $tmp460;
// line 550
frost$core$UInt64 $tmp462 = *(&local3);
frost$core$UInt64 $tmp463 = (frost$core$UInt64) {10};
uint64_t $tmp464 = $tmp462.value;
uint64_t $tmp465 = $tmp463.value;
uint64_t $tmp466 = $tmp464 / $tmp465;
frost$core$UInt64 $tmp467 = (frost$core$UInt64) {$tmp466};
*(&local3) = $tmp467;
// line 551
frost$core$Int64 $tmp468 = *(&local2);
frost$core$Int64 $tmp469 = (frost$core$Int64) {1};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
*(&local2) = $tmp473;
goto block8;
block8:;
frost$core$UInt64 $tmp474 = *(&local3);
frost$core$UInt64 $tmp475 = (frost$core$UInt64) {0};
uint64_t $tmp476 = $tmp474.value;
uint64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 < $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block7; else goto block9;
block9:;
// line 554
frost$core$Char8* $tmp481 = *(&local1);
frost$core$Int64 $tmp482 = *(&local2);
frost$core$UInt8 $tmp483 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp484 = frost$core$Char8$init$frost$core$UInt8($tmp483);
int64_t $tmp485 = $tmp482.value;
$tmp481[$tmp485] = $tmp484;
goto block2;
block2:;
// line 556
frost$core$Int64 $tmp486 = *(&local0);
frost$core$Int64 $tmp487 = *(&local2);
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 - $tmp489;
frost$core$Int64 $tmp491 = (frost$core$Int64) {$tmp490};
*(&local4) = $tmp491;
// line 557
frost$core$Int64 $tmp492 = (frost$core$Int64) {0};
frost$core$Int64 $tmp493 = *(&local4);
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp495 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp492, $tmp493, $tmp494);
frost$core$Int64 $tmp496 = $tmp495.min;
*(&local5) = $tmp496;
frost$core$Int64 $tmp497 = $tmp495.max;
frost$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
frost$core$Int64 $tmp500 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp501 = frost$core$Int64$convert$R$frost$core$UInt64($tmp500);
if ($tmp499) goto block13; else goto block14;
block13:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block10; else goto block11;
block14:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block10; else goto block11;
block10:;
// line 558
frost$core$Char8* $tmp512 = *(&local1);
frost$core$Int64 $tmp513 = *(&local5);
frost$core$Char8* $tmp514 = *(&local1);
frost$core$Int64 $tmp515 = *(&local5);
frost$core$Int64 $tmp516 = *(&local2);
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 + $tmp518;
frost$core$Int64 $tmp520 = (frost$core$Int64) {$tmp519};
int64_t $tmp521 = $tmp520.value;
frost$core$Char8 $tmp522 = $tmp514[$tmp521];
int64_t $tmp523 = $tmp513.value;
$tmp512[$tmp523] = $tmp522;
goto block12;
block12:;
frost$core$Int64 $tmp524 = *(&local5);
int64_t $tmp525 = $tmp497.value;
int64_t $tmp526 = $tmp524.value;
int64_t $tmp527 = $tmp525 - $tmp526;
frost$core$Int64 $tmp528 = (frost$core$Int64) {$tmp527};
frost$core$UInt64 $tmp529 = frost$core$Int64$convert$R$frost$core$UInt64($tmp528);
if ($tmp499) goto block16; else goto block17;
block16:;
uint64_t $tmp530 = $tmp529.value;
uint64_t $tmp531 = $tmp501.value;
bool $tmp532 = $tmp530 >= $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block15; else goto block11;
block17:;
uint64_t $tmp535 = $tmp529.value;
uint64_t $tmp536 = $tmp501.value;
bool $tmp537 = $tmp535 > $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block15; else goto block11;
block15:;
int64_t $tmp540 = $tmp524.value;
int64_t $tmp541 = $tmp500.value;
int64_t $tmp542 = $tmp540 + $tmp541;
frost$core$Int64 $tmp543 = (frost$core$Int64) {$tmp542};
*(&local5) = $tmp543;
goto block10;
block11:;
// line 560
frost$core$String* $tmp544 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp545 = *(&local1);
frost$core$Int64 $tmp546 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp544, $tmp545, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// unreffing REF($203:frost.core.String)
return $tmp544;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

// line 566
frost$core$Bit $tmp547 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp548 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp549 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp547, param0, $tmp548, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($3:frost.core.String)
return $tmp549;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

