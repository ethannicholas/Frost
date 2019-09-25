#include "frost/core/String.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char32.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/UInt8.h"
#include "frost/core/String/UTF16Iterator.h"
#include "frost/core/String/UTF32Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/Int32.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/core/String/RegexMatchIterator.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim(frost$core$String* p0) {
    frost$collections$Iterator* result = frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$String$get_hash$R$frost$core$Int$shim(frost$core$String* p0) {
    frost$core$Int result = frost$core$String$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String$shim(frost$core$String* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$String$format$frost$core$String$R$frost$core$String(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$String$$GT$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$String$get_asString$R$frost$core$String$shim(frost$core$String* p0) {
    frost$core$String* result = frost$core$String$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$cleanup$shim(frost$core$String* p0) {
    frost$core$String$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$String$_frost$collections$Iterable, { frost$core$String$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$_frost$collections$HashKey, { frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$String$_frost$core$Equatable, { frost$core$String$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int, frost$core$String$get_byteLength$R$frost$core$Int, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$Q$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt$R$frost$core$Int$Q, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn6)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn7)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn12)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn14)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn29)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn30)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$Bit (*$fn41)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn42)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn66)(frost$core$Object*);
typedef frost$core$String* (*$fn67)(frost$core$Object*);
typedef frost$core$String* (*$fn74)(frost$core$Object*);
typedef frost$core$String* (*$fn76)(frost$core$Object*);
typedef frost$core$String* (*$fn90)(frost$core$Object*);
typedef frost$core$String* (*$fn91)(frost$core$Object*);
typedef frost$core$Object* (*$fn94)(frost$core$String*);
typedef frost$core$Object* (*$fn95)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn96)(frost$core$Object*);
typedef frost$core$String* (*$fn97)(frost$core$Object*);
typedef frost$core$String* (*$fn98)(frost$core$Object*);
typedef frost$core$String* (*$fn99)(frost$core$Object*);
typedef frost$core$Object* (*$fn100)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn101)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn103)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn106)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn107)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn108)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn109)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn114)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn115)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn116)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn117)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn123)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn124)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn125)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn130)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn136)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 168332950343237285, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x22", 2, 671069362943044699, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x6e", 2, 671135333640737359, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x74", 2, 671128736570968093, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 114, 6085615713521127995, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 167, -3950450366484826733, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$unsafe$Pointer* _5;
frost$core$Int* _8;
frost$core$Object* _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _15;
frost$core$String** _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_1 = (frost$core$Int) {0u};
_2 = &param0->dummy;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:351
_5 = &param0->data;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:352
_8 = &param0->_length;
*_8 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:353
_11 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = &param0->owner;
_14 = *_13;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = &param0->owner;
*_17 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$frost$core$String(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2, frost$core$String* param3) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$unsafe$Pointer* _5;
frost$core$Int* _8;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$String** _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$String** _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_1 = (frost$core$Int) {0u};
_2 = &param0->dummy;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:358
_5 = &param0->data;
*_5 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:359
_8 = &param0->_length;
*_8 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:360
_11 = param3;
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &param0->owner;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &param0->owner;
*_18 = _11;
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
frost$core$Int local2;
frost$core$Int _1;
frost$core$Int* _2;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
frost$core$Int* _8;
frost$core$Int* _11;
frost$core$Int _12;
int64_t _15;
int64_t _16;
int64_t _17;
int64_t* _20;
frost$unsafe$Pointer _22;
frost$unsafe$Pointer _25;
frost$unsafe$Pointer* _27;
frost$core$Int _30;
frost$core$Int* _31;
frost$core$Int _32;
frost$core$Bit _33;
frost$core$Range$LTfrost$core$Int$GT _34;
frost$core$Int _35;
frost$core$Int _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _40;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$unsafe$Pointer* _55;
frost$unsafe$Pointer _56;
int64_t _57;
frost$core$Int _58;
frost$core$Int64 _59;
frost$core$Int _60;
$fn3 _61;
frost$core$Object* _62;
frost$core$Char8 _63;
int64_t _64;
frost$core$Object* _66;
frost$core$Int _69;
int64_t _70;
int64_t _71;
int64_t _72;
frost$core$Int _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _81;
int64_t _82;
bool _83;
frost$core$Bit _84;
bool _85;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
frost$core$Object* _94;
frost$core$String** _96;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$String** _100;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_1 = (frost$core$Int) {0u};
_2 = &param0->dummy;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:364
_5 = ((frost$collections$CollectionView*) param1);
ITable* $tmp4 = _5->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_6 = $tmp4->methods[0];
_7 = _6(_5);
_8 = &param0->_length;
*_8 = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:365
_11 = &param0->_length;
_12 = *_11;
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from String.frost:365:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_15 = _12.value;
_16 = _15 * 1u;
_17 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_16);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_20 = &(&local1)->value;
*_20 = _17;
_22 = *(&local1);
*(&local0) = _22;
_25 = *(&local0);
_27 = &param0->data;
*_27 = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:366
_30 = (frost$core$Int) {0u};
_31 = &param0->_length;
_32 = *_31;
_33 = (frost$core$Bit) {false};
_34 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_30, _32, _33);
_35 = _34.min;
*(&local2) = _35;
_37 = _34.max;
_38 = _34.inclusive;
_39 = _38.value;
_40 = (frost$core$Int) {1u};
if (_39) goto block6; else goto block7;
block6:;
_42 = _35.value;
_43 = _37.value;
_44 = _42 <= _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block3; else goto block4;
block7:;
_48 = _35.value;
_49 = _37.value;
_50 = _48 < _49;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:367
_55 = &param0->data;
_56 = *_55;
_57 = _56.value;
_58 = *(&local2);
_59 = frost$core$Int64$init$frost$core$Int(_58);
_60 = *(&local2);
ITable* $tmp5 = param1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp5 = $tmp5->next;
}
_61 = $tmp5->methods[0];
_62 = _61(param1, _60);
_63 = ((frost$core$Char8$wrapper*) _62)->value;
_64 = _59.value;
((frost$core$Char8*)_57)[_64] = _63;
_66 = _62;
frost$core$Frost$unref$frost$core$Object$Q(_66);
_69 = *(&local2);
_70 = _37.value;
_71 = _69.value;
_72 = _70 - _71;
_73 = (frost$core$Int) {_72};
if (_39) goto block9; else goto block10;
block9:;
_75 = _73.value;
_76 = _40.value;
_77 = _75 >= _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block8; else goto block4;
block10:;
_81 = _73.value;
_82 = _40.value;
_83 = _81 > _82;
_84 = (frost$core$Bit) {_83};
_85 = _84.value;
if (_85) goto block8; else goto block4;
block8:;
_87 = _69.value;
_88 = _40.value;
_89 = _87 + _88;
_90 = (frost$core$Int) {_89};
*(&local2) = _90;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:369
_94 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = &param0->owner;
_97 = *_96;
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = &param0->owner;
*_100 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$core$Int local4;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$MutableString* _5;
frost$core$Object* _8;
frost$core$MutableString* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$collections$Iterable* _17;
$fn6 _18;
frost$collections$Iterator* _19;
$fn7 _21;
frost$core$Bit _22;
bool _23;
$fn8 _25;
frost$core$Object* _26;
frost$core$Char32 _27;
frost$core$MutableString* _30;
frost$core$Char32 _31;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$MutableString* _39;
frost$core$Int* _40;
frost$core$Int _41;
int64_t _44;
int64_t _45;
int64_t _46;
int64_t* _49;
frost$unsafe$Pointer _51;
frost$unsafe$Pointer _54;
frost$unsafe$Pointer* _56;
frost$core$Int _59;
frost$core$MutableString* _60;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Bit _63;
frost$core$Range$LTfrost$core$Int$GT _64;
frost$core$Int _65;
frost$core$Int _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$unsafe$Pointer* _85;
frost$unsafe$Pointer _86;
int64_t _87;
frost$core$Int _88;
frost$core$Int64 _89;
frost$core$MutableString* _90;
frost$unsafe$Pointer* _91;
frost$unsafe$Pointer _92;
int64_t _93;
frost$core$Int _94;
frost$core$Int64 _95;
int64_t _96;
frost$core$Char8 _97;
int64_t _98;
frost$core$Int _101;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
frost$core$MutableString* _126;
frost$core$Int* _127;
frost$core$Int _128;
frost$core$Int* _129;
frost$core$Object* _132;
frost$core$String** _134;
frost$core$String* _135;
frost$core$Object* _136;
frost$core$String** _138;
frost$core$MutableString* _140;
frost$core$Object* _141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_1 = (frost$core$Int) {0u};
_2 = &param0->dummy;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:373
_5 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_5);
*(&local0) = ((frost$core$MutableString*) NULL);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _5;
_14 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:374
_17 = ((frost$collections$Iterable*) param1);
ITable* $tmp9 = _17->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp9 = $tmp9->next;
}
_18 = $tmp9->methods[0];
_19 = _18(_17);
goto block1;
block1:;
ITable* $tmp10 = _19->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_21 = $tmp10->methods[0];
_22 = _21(_19);
_23 = _22.value;
if (_23) goto block3; else goto block2;
block2:;
ITable* $tmp11 = _19->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_25 = $tmp11->methods[1];
_26 = _25(_19);
_27 = ((frost$core$Char32$wrapper*) _26)->value;
*(&local1) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:375
_30 = *(&local0);
_31 = *(&local1);
frost$core$MutableString$append$frost$core$Char32(_30, _31);
_33 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_33);
goto block1;
block3:;
_36 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:377
_39 = *(&local0);
_40 = &_39->_length;
_41 = *_40;
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from String.frost:377:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_44 = _41.value;
_45 = _44 * 1u;
_46 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_45);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_49 = &(&local3)->value;
*_49 = _46;
_51 = *(&local3);
*(&local2) = _51;
_54 = *(&local2);
_56 = &param0->data;
*_56 = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:378
_59 = (frost$core$Int) {0u};
_60 = *(&local0);
_61 = &_60->_length;
_62 = *_61;
_63 = (frost$core$Bit) {false};
_64 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_59, _62, _63);
_65 = _64.min;
*(&local4) = _65;
_67 = _64.max;
_68 = _64.inclusive;
_69 = _68.value;
_70 = (frost$core$Int) {1u};
if (_69) goto block9; else goto block10;
block9:;
_72 = _65.value;
_73 = _67.value;
_74 = _72 <= _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block6; else goto block7;
block10:;
_78 = _65.value;
_79 = _67.value;
_80 = _78 < _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:379
_85 = &param0->data;
_86 = *_85;
_87 = _86.value;
_88 = *(&local4);
_89 = frost$core$Int64$init$frost$core$Int(_88);
_90 = *(&local0);
_91 = &_90->data;
_92 = *_91;
_93 = _92.value;
_94 = *(&local4);
_95 = frost$core$Int64$init$frost$core$Int(_94);
_96 = _95.value;
_97 = ((frost$core$Char8*)_93)[_96];
_98 = _89.value;
((frost$core$Char8*)_87)[_98] = _97;
_101 = *(&local4);
_102 = _67.value;
_103 = _101.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_69) goto block12; else goto block13;
block12:;
_107 = _105.value;
_108 = _70.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block11; else goto block7;
block13:;
_113 = _105.value;
_114 = _70.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block11; else goto block7;
block11:;
_119 = _101.value;
_120 = _70.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local4) = _122;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:381
_126 = *(&local0);
_127 = &_126->_length;
_128 = *_127;
_129 = &param0->_length;
*_129 = _128;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:382
_132 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = &param0->owner;
_135 = *_134;
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = &param0->owner;
*_138 = ((frost$core$String*) NULL);
_140 = *(&local0);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_1 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_1);
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Char8 local1;
frost$core$Bit _1;
bool _2;
frost$core$Object* _5;
frost$core$Bit _8;
bool _9;
frost$core$MutableString* _12;
frost$core$Object* _15;
frost$core$MutableString* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$String$UTF8List* _26;
frost$collections$ListView* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$collections$Iterable* _34;
$fn12 _35;
frost$collections$Iterator* _36;
$fn13 _38;
frost$core$Bit _39;
bool _40;
$fn14 _42;
frost$core$Object* _43;
frost$core$Char8 _44;
frost$core$Char8 _47;
frost$core$UInt8 _48;
frost$core$Char8 _49;
uint8_t _52;
uint8_t _53;
bool _54;
frost$core$Bit _55;
bool _57;
frost$core$MutableString* _60;
frost$core$UInt8 _63;
frost$core$Char8 _64;
uint8_t _67;
uint8_t _68;
bool _69;
frost$core$Bit _70;
bool _72;
frost$core$MutableString* _75;
frost$core$UInt8 _78;
frost$core$Char8 _79;
uint8_t _82;
uint8_t _83;
bool _84;
frost$core$Bit _85;
bool _87;
frost$core$MutableString* _90;
frost$core$UInt8 _93;
frost$core$Char8 _94;
uint8_t _97;
uint8_t _98;
bool _99;
frost$core$Bit _100;
bool _102;
frost$core$MutableString* _105;
frost$core$UInt8 _108;
frost$core$Char8 _109;
uint8_t _112;
uint8_t _113;
bool _114;
frost$core$Bit _115;
bool _117;
frost$core$MutableString* _120;
frost$core$Char8 _124;
uint8_t _127;
frost$core$UInt8 _128;
frost$core$UInt8 _130;
uint8_t _131;
uint8_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Char8 _137;
uint8_t _140;
frost$core$UInt8 _141;
frost$core$UInt8 _143;
uint8_t _144;
uint8_t _145;
bool _146;
frost$core$Bit _147;
bool _148;
frost$core$MutableString* _151;
frost$core$Char8 _152;
frost$core$MutableString* _157;
frost$core$Object* _161;
frost$core$Object* _164;
frost$core$Object* _166;
frost$core$MutableString* _169;
frost$core$MutableString* _172;
frost$core$String* _173;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$MutableString* _178;
frost$core$Object* _179;
frost$core$Int _184;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:403
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s15);
_2 = _1.value;
if (_2) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:405
_5 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_5);
return param0;
block3:;
_8 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s16);
_9 = _8.value;
if (_9) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:408
_12 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_12, &$s17);
*(&local0) = ((frost$core$MutableString*) NULL);
_15 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local0);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local0) = _12;
_21 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:409
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from String.frost:409:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_26 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_26, param0);
_28 = ((frost$collections$ListView*) _26);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = ((frost$collections$Iterable*) _28);
ITable* $tmp18 = _34->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp18 = $tmp18->next;
}
_35 = $tmp18->methods[0];
_36 = _35(_34);
goto block7;
block7:;
ITable* $tmp19 = _36->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_38 = $tmp19->methods[0];
_39 = _38(_36);
_40 = _39.value;
if (_40) goto block9; else goto block8;
block8:;
ITable* $tmp20 = _36->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_42 = $tmp20->methods[1];
_43 = _42(_36);
_44 = ((frost$core$Char8$wrapper*) _43)->value;
*(&local1) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:410
_47 = *(&local1);
_48 = (frost$core$UInt8) {34u};
_49 = frost$core$Char8$init$frost$core$UInt8(_48);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:411:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_52 = _47.value;
_53 = _49.value;
_54 = _52 == _53;
_55 = (frost$core$Bit) {_54};
_57 = _55.value;
if (_57) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:412
_60 = *(&local0);
frost$core$MutableString$append$frost$core$String(_60, &$s21);
goto block10;
block12:;
_63 = (frost$core$UInt8) {92u};
_64 = frost$core$Char8$init$frost$core$UInt8(_63);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:414:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_67 = _47.value;
_68 = _64.value;
_69 = _67 == _68;
_70 = (frost$core$Bit) {_69};
_72 = _70.value;
if (_72) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:415
_75 = *(&local0);
frost$core$MutableString$append$frost$core$String(_75, &$s22);
goto block10;
block15:;
_78 = (frost$core$UInt8) {10u};
_79 = frost$core$Char8$init$frost$core$UInt8(_78);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:417:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_82 = _47.value;
_83 = _79.value;
_84 = _82 == _83;
_85 = (frost$core$Bit) {_84};
_87 = _85.value;
if (_87) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:418
_90 = *(&local0);
frost$core$MutableString$append$frost$core$String(_90, &$s23);
goto block10;
block18:;
_93 = (frost$core$UInt8) {13u};
_94 = frost$core$Char8$init$frost$core$UInt8(_93);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:420:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_97 = _47.value;
_98 = _94.value;
_99 = _97 == _98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:421
_105 = *(&local0);
frost$core$MutableString$append$frost$core$String(_105, &$s24);
goto block10;
block21:;
_108 = (frost$core$UInt8) {9u};
_109 = frost$core$Char8$init$frost$core$UInt8(_108);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:423:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_112 = _47.value;
_113 = _109.value;
_114 = _112 == _113;
_115 = (frost$core$Bit) {_114};
_117 = _115.value;
if (_117) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:424
_120 = *(&local0);
frost$core$MutableString$append$frost$core$String(_120, &$s25);
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:427
_124 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_127 = _124.value;
_128 = (frost$core$UInt8) {_127};
_130 = (frost$core$UInt8) {32u};
_131 = _128.value;
_132 = _130.value;
_133 = _131 >= _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block29; else goto block28;
block29:;
_137 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_140 = _137.value;
_141 = (frost$core$UInt8) {_140};
_143 = (frost$core$UInt8) {126u};
_144 = _141.value;
_145 = _143.value;
_146 = _144 <= _145;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:428
_151 = *(&local0);
_152 = *(&local1);
frost$core$MutableString$append$frost$core$Char8(_151, _152);
goto block27;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:432
_157 = *(&local0);
frost$core$MutableString$append$frost$core$String(_157, &$s26);
goto block27;
block27:;
goto block10;
block10:;
_161 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_161);
goto block7;
block9:;
_164 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_166 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_166);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:437
_169 = *(&local0);
frost$core$MutableString$append$frost$core$String(_169, &$s27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:438
_172 = *(&local0);
_173 = frost$core$MutableString$finish$R$frost$core$String(_172);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = *(&local0);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local0) = ((frost$core$MutableString*) NULL);
return _173;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:441
_184 = (frost$core$Int) {441u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s28, _184);
abort(); // unreachable
block1:;
goto block32;
block32:;

}
void frost$core$String$cleanup(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$unsafe$Pointer* _8;
frost$unsafe$Pointer _9;
int64_t _12;
frost$core$Immutable* _17;
frost$core$String** _19;
frost$core$String* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:449
_1 = &param0->owner;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:450
_8 = &param0->data;
_9 = *_8;
// begin inline call to method frost.unsafe.Pointer.destroy() from String.frost:450:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_12 = _9.value;
frost$core$Frost$destroy$builtin_int(_12);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:448
_17 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_17);
_19 = &param0->owner;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$UTF8List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_1 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$UTF16Iterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:467
_1 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(sizeof(frost$core$String$UTF16Iterator), (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$UTF32Iterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:475
_1 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(sizeof(frost$core$String$UTF32Iterator), (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Int frost$core$String$get_length$R$frost$core$Int(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$collections$Iterable* _1;
$fn29 _2;
frost$collections$Iterator* _3;
$fn30 _4;
frost$core$Int _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp31 = _1->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp31 = $tmp31->next;
}
_2 = $tmp31->methods[0];
_3 = _2(_1);
ITable* $tmp32 = _3->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp32 = $tmp32->next;
}
_4 = $tmp32->methods[2];
_5 = _4(_3);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _5;

}
frost$core$Int frost$core$String$get_byteLength$R$frost$core$Int(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
_1 = &param0->_length;
_2 = *_1;
return _2;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Bit _12;
frost$core$Int _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Bit _18;
frost$core$Range$LTfrost$core$Int$GT _19;
frost$core$Int _20;
frost$core$Int _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer* _40;
frost$unsafe$Pointer _41;
int64_t _42;
frost$core$Int _43;
frost$core$Int64 _44;
int64_t _45;
frost$core$Char8 _46;
frost$unsafe$Pointer* _47;
frost$unsafe$Pointer _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int64 _51;
int64_t _52;
frost$core$Char8 _53;
uint8_t _56;
uint8_t _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$Bit _64;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Bit _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:496
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 < _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:497
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:499
_15 = (frost$core$Int) {0u};
_16 = &param1->_length;
_17 = *_16;
_18 = (frost$core$Bit) {false};
_19 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_15, _17, _18);
_20 = _19.min;
*(&local0) = _20;
_22 = _19.max;
_23 = _19.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {1u};
if (_24) goto block6; else goto block7;
block6:;
_27 = _20.value;
_28 = _22.value;
_29 = _27 <= _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block3; else goto block4;
block7:;
_33 = _20.value;
_34 = _22.value;
_35 = _33 < _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:500
_40 = &param0->data;
_41 = *_40;
_42 = _41.value;
_43 = *(&local0);
_44 = frost$core$Int64$init$frost$core$Int(_43);
_45 = _44.value;
_46 = ((frost$core$Char8*)_42)[_45];
_47 = &param1->data;
_48 = *_47;
_49 = _48.value;
_50 = *(&local0);
_51 = frost$core$Int64$init$frost$core$Int(_50);
_52 = _51.value;
_53 = ((frost$core$Char8*)_49)[_52];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:500:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_56 = _46.value;
_57 = _53.value;
_58 = _56 != _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:501
_64 = (frost$core$Bit) {false};
return _64;
block9:;
_67 = *(&local0);
_68 = _22.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
if (_24) goto block12; else goto block13;
block12:;
_73 = _71.value;
_74 = _25.value;
_75 = _73 >= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block11; else goto block4;
block13:;
_79 = _71.value;
_80 = _25.value;
_81 = _79 > _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block11; else goto block4;
block11:;
_85 = _67.value;
_86 = _25.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
*(&local0) = _88;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:504
_92 = (frost$core$Bit) {true};
return _92;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Bit _12;
frost$core$Int _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Bit _18;
frost$core$Range$LTfrost$core$Int$GT _19;
frost$core$Int _20;
frost$core$Int _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer* _40;
frost$unsafe$Pointer _41;
int64_t _42;
frost$core$Int* _43;
frost$core$Int _44;
frost$core$Int* _45;
frost$core$Int _46;
int64_t _47;
int64_t _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
frost$core$Int64 _56;
int64_t _57;
frost$core$Char8 _58;
frost$unsafe$Pointer* _59;
frost$unsafe$Pointer _60;
int64_t _61;
frost$core$Int _62;
frost$core$Int64 _63;
int64_t _64;
frost$core$Char8 _65;
uint8_t _68;
uint8_t _69;
bool _70;
frost$core$Bit _71;
bool _73;
frost$core$Bit _76;
frost$core$Int _79;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _89;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
int64_t _97;
int64_t _98;
int64_t _99;
frost$core$Int _100;
frost$core$Bit _104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:508
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 < _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:509
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:511
_15 = (frost$core$Int) {0u};
_16 = &param1->_length;
_17 = *_16;
_18 = (frost$core$Bit) {false};
_19 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_15, _17, _18);
_20 = _19.min;
*(&local0) = _20;
_22 = _19.max;
_23 = _19.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {1u};
if (_24) goto block6; else goto block7;
block6:;
_27 = _20.value;
_28 = _22.value;
_29 = _27 <= _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block3; else goto block4;
block7:;
_33 = _20.value;
_34 = _22.value;
_35 = _33 < _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:512
_40 = &param0->data;
_41 = *_40;
_42 = _41.value;
_43 = &param0->_length;
_44 = *_43;
_45 = &param1->_length;
_46 = *_45;
_47 = _44.value;
_48 = _46.value;
_49 = _47 - _48;
_50 = (frost$core$Int) {_49};
_51 = *(&local0);
_52 = _50.value;
_53 = _51.value;
_54 = _52 + _53;
_55 = (frost$core$Int) {_54};
_56 = frost$core$Int64$init$frost$core$Int(_55);
_57 = _56.value;
_58 = ((frost$core$Char8*)_42)[_57];
_59 = &param1->data;
_60 = *_59;
_61 = _60.value;
_62 = *(&local0);
_63 = frost$core$Int64$init$frost$core$Int(_62);
_64 = _63.value;
_65 = ((frost$core$Char8*)_61)[_64];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:512:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_68 = _58.value;
_69 = _65.value;
_70 = _68 != _69;
_71 = (frost$core$Bit) {_70};
_73 = _71.value;
if (_73) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:513
_76 = (frost$core$Bit) {false};
return _76;
block9:;
_79 = *(&local0);
_80 = _22.value;
_81 = _79.value;
_82 = _80 - _81;
_83 = (frost$core$Int) {_82};
if (_24) goto block12; else goto block13;
block12:;
_85 = _83.value;
_86 = _25.value;
_87 = _85 >= _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block11; else goto block4;
block13:;
_91 = _83.value;
_92 = _25.value;
_93 = _91 > _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block11; else goto block4;
block11:;
_97 = _79.value;
_98 = _25.value;
_99 = _97 + _98;
_100 = (frost$core$Int) {_99};
*(&local0) = _100;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:516
_104 = (frost$core$Bit) {true};
return _104;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Bit local1;
frost$core$Int local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Int _18;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _24;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$unsafe$Pointer* _31;
frost$unsafe$Pointer _32;
int64_t _33;
frost$core$Int _34;
frost$core$Int64 _35;
int64_t _36;
frost$core$Char8 _37;
frost$core$UInt8 _40;
frost$core$Char8 _41;
uint8_t _44;
uint8_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$UInt8 _51;
frost$core$Char8 _52;
uint8_t _55;
uint8_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$UInt8 _62;
frost$core$Char8 _63;
uint8_t _66;
uint8_t _67;
bool _68;
frost$core$Bit _69;
bool _71;
frost$core$UInt8 _73;
frost$core$Char8 _74;
uint8_t _77;
uint8_t _78;
bool _79;
frost$core$Bit _80;
bool _82;
frost$core$Bit _85;
frost$core$Bit _89;
frost$core$Bit _93;
bool _94;
frost$core$Int _97;
frost$core$Int _98;
int64_t _99;
int64_t _100;
int64_t _101;
frost$core$Int _102;
frost$core$Int* _106;
frost$core$Int _107;
frost$core$Int _108;
int64_t _109;
int64_t _110;
int64_t _111;
frost$core$Int _112;
frost$core$Int _116;
frost$core$Int _117;
int64_t _118;
int64_t _119;
bool _120;
frost$core$Bit _121;
bool _122;
frost$unsafe$Pointer* _124;
frost$unsafe$Pointer _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int64 _128;
int64_t _129;
frost$core$Char8 _130;
frost$core$UInt8 _133;
frost$core$Char8 _134;
uint8_t _137;
uint8_t _138;
bool _139;
frost$core$Bit _140;
bool _142;
frost$core$UInt8 _144;
frost$core$Char8 _145;
uint8_t _148;
uint8_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$UInt8 _155;
frost$core$Char8 _156;
uint8_t _159;
uint8_t _160;
bool _161;
frost$core$Bit _162;
bool _164;
frost$core$UInt8 _166;
frost$core$Char8 _167;
uint8_t _170;
uint8_t _171;
bool _172;
frost$core$Bit _173;
bool _175;
frost$core$Bit _178;
frost$core$Bit _182;
frost$core$Bit _186;
bool _187;
frost$core$Int _190;
frost$core$Int _191;
int64_t _192;
int64_t _193;
int64_t _194;
frost$core$Int _195;
frost$core$Int _199;
frost$core$Int* _202;
frost$core$String$Index _204;
frost$core$String$Index _207;
frost$core$Int _208;
frost$core$Int* _211;
frost$core$String$Index _213;
frost$core$String$Index _216;
frost$core$Bit _217;
frost$core$Range$LTfrost$core$String$Index$GT _218;
frost$core$String* _219;
frost$core$Object* _220;
frost$core$Object* _222;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:525
_1 = &param0->_length;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:525:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:526
_14 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:528
_18 = (frost$core$Int) {0u};
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:529
goto block4;
block4:;
_22 = *(&local0);
_23 = &param0->_length;
_24 = *_23;
_25 = _22.value;
_26 = _24.value;
_27 = _25 < _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block7; else goto block6;
block7:;
_31 = &param0->data;
_32 = *_31;
_33 = _32.value;
_34 = *(&local0);
_35 = frost$core$Int64$init$frost$core$Int(_34);
_36 = _35.value;
_37 = ((frost$core$Char8*)_33)[_36];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:529:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
_40 = (frost$core$UInt8) {10u};
_41 = frost$core$Char8$init$frost$core$UInt8(_40);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_44 = _37.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block10; else goto block11;
block11:;
_51 = (frost$core$UInt8) {13u};
_52 = frost$core$Char8$init$frost$core$UInt8(_51);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_55 = _37.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block10; else goto block13;
block13:;
_62 = (frost$core$UInt8) {9u};
_63 = frost$core$Char8$init$frost$core$UInt8(_62);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_66 = _37.value;
_67 = _63.value;
_68 = _66 == _67;
_69 = (frost$core$Bit) {_68};
_71 = _69.value;
if (_71) goto block10; else goto block15;
block15:;
_73 = (frost$core$UInt8) {32u};
_74 = frost$core$Char8$init$frost$core$UInt8(_73);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_77 = _37.value;
_78 = _74.value;
_79 = _77 == _78;
_80 = (frost$core$Bit) {_79};
_82 = _80.value;
if (_82) goto block10; else goto block17;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
_85 = (frost$core$Bit) {true};
*(&local1) = _85;
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
_89 = (frost$core$Bit) {false};
*(&local1) = _89;
goto block8;
block9:;
goto block8;
block8:;
_93 = *(&local1);
_94 = _93.value;
if (_94) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:530
_97 = *(&local0);
_98 = (frost$core$Int) {1u};
_99 = _97.value;
_100 = _98.value;
_101 = _99 + _100;
_102 = (frost$core$Int) {_101};
*(&local0) = _102;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:533
_106 = &param0->_length;
_107 = *_106;
_108 = (frost$core$Int) {1u};
_109 = _107.value;
_110 = _108.value;
_111 = _109 - _110;
_112 = (frost$core$Int) {_111};
*(&local2) = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:534
goto block19;
block19:;
_116 = *(&local2);
_117 = *(&local0);
_118 = _116.value;
_119 = _117.value;
_120 = _118 >= _119;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block22; else goto block21;
block22:;
_124 = &param0->data;
_125 = *_124;
_126 = _125.value;
_127 = *(&local2);
_128 = frost$core$Int64$init$frost$core$Int(_127);
_129 = _128.value;
_130 = ((frost$core$Char8*)_126)[_129];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:534:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
_133 = (frost$core$UInt8) {10u};
_134 = frost$core$Char8$init$frost$core$UInt8(_133);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_137 = _130.value;
_138 = _134.value;
_139 = _137 == _138;
_140 = (frost$core$Bit) {_139};
_142 = _140.value;
if (_142) goto block25; else goto block26;
block26:;
_144 = (frost$core$UInt8) {13u};
_145 = frost$core$Char8$init$frost$core$UInt8(_144);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_148 = _130.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block25; else goto block28;
block28:;
_155 = (frost$core$UInt8) {9u};
_156 = frost$core$Char8$init$frost$core$UInt8(_155);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_159 = _130.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block25; else goto block30;
block30:;
_166 = (frost$core$UInt8) {32u};
_167 = frost$core$Char8$init$frost$core$UInt8(_166);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_170 = _130.value;
_171 = _167.value;
_172 = _170 == _171;
_173 = (frost$core$Bit) {_172};
_175 = _173.value;
if (_175) goto block25; else goto block32;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
_178 = (frost$core$Bit) {true};
*(&local3) = _178;
goto block23;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
_182 = (frost$core$Bit) {false};
*(&local3) = _182;
goto block23;
block24:;
goto block23;
block23:;
_186 = *(&local3);
_187 = _186.value;
if (_187) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:535
_190 = *(&local2);
_191 = (frost$core$Int) {1u};
_192 = _190.value;
_193 = _191.value;
_194 = _192 - _193;
_195 = (frost$core$Int) {_194};
*(&local2) = _195;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:538
_199 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_202 = &(&local5)->value;
*_202 = _199;
_204 = *(&local5);
*(&local4) = _204;
_207 = *(&local4);
_208 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_211 = &(&local7)->value;
*_211 = _208;
_213 = *(&local7);
*(&local6) = _213;
_216 = *(&local6);
_217 = (frost$core$Bit) {true};
_218 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_207, _216, _217);
_219 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _218);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$ref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_222);
return _219;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
int64_t _11;
int64_t _12;
int64_t _13;
int64_t* _16;
frost$unsafe$Pointer _18;
frost$unsafe$Pointer _21;
frost$core$Int _25;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Bit _28;
frost$core$Range$LTfrost$core$Int$GT _29;
frost$core$Int _30;
frost$core$Int _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _35;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$unsafe$Pointer _50;
int64_t _51;
frost$core$Int _52;
frost$core$Int64 _53;
frost$unsafe$Pointer* _54;
frost$unsafe$Pointer _55;
int64_t _56;
frost$core$Int _57;
frost$core$Int64 _58;
int64_t _59;
frost$core$Char8 _60;
int64_t _61;
frost$core$Int _64;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int _68;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
int64_t _82;
int64_t _83;
int64_t _84;
frost$core$Int _85;
frost$core$Int _89;
frost$core$Int* _90;
frost$core$Int _91;
frost$core$Bit _92;
frost$core$Range$LTfrost$core$Int$GT _93;
frost$core$Int _94;
frost$core$Int _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _99;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
frost$unsafe$Pointer _114;
int64_t _115;
frost$core$Int* _116;
frost$core$Int _117;
frost$core$Int _118;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
frost$core$Int64 _123;
frost$unsafe$Pointer* _124;
frost$unsafe$Pointer _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int64 _128;
int64_t _129;
frost$core$Char8 _130;
int64_t _131;
frost$core$Int _134;
int64_t _135;
int64_t _136;
int64_t _137;
frost$core$Int _138;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _150;
int64_t _152;
int64_t _153;
int64_t _154;
frost$core$Int _155;
frost$core$String* _159;
frost$unsafe$Pointer _160;
frost$core$Int* _161;
frost$core$Int _162;
frost$core$Int* _163;
frost$core$Int _164;
int64_t _165;
int64_t _166;
int64_t _167;
frost$core$Int _168;
frost$core$Object* _170;
frost$core$Object* _172;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:545
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 + _6;
_8 = (frost$core$Int) {_7};
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from String.frost:545:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_11 = _8.value;
_12 = _11 * 1u;
_13 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_12);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_16 = &(&local1)->value;
*_16 = _13;
_18 = *(&local1);
*(&local0) = _18;
_21 = *(&local0);
*(&local2) = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:546
_25 = (frost$core$Int) {0u};
_26 = &param0->_length;
_27 = *_26;
_28 = (frost$core$Bit) {false};
_29 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_25, _27, _28);
_30 = _29.min;
*(&local3) = _30;
_32 = _29.max;
_33 = _29.inclusive;
_34 = _33.value;
_35 = (frost$core$Int) {1u};
if (_34) goto block6; else goto block7;
block6:;
_37 = _30.value;
_38 = _32.value;
_39 = _37 <= _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block3; else goto block4;
block7:;
_43 = _30.value;
_44 = _32.value;
_45 = _43 < _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:547
_50 = *(&local2);
_51 = _50.value;
_52 = *(&local3);
_53 = frost$core$Int64$init$frost$core$Int(_52);
_54 = &param0->data;
_55 = *_54;
_56 = _55.value;
_57 = *(&local3);
_58 = frost$core$Int64$init$frost$core$Int(_57);
_59 = _58.value;
_60 = ((frost$core$Char8*)_56)[_59];
_61 = _53.value;
((frost$core$Char8*)_51)[_61] = _60;
_64 = *(&local3);
_65 = _32.value;
_66 = _64.value;
_67 = _65 - _66;
_68 = (frost$core$Int) {_67};
if (_34) goto block9; else goto block10;
block9:;
_70 = _68.value;
_71 = _35.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block8; else goto block4;
block10:;
_76 = _68.value;
_77 = _35.value;
_78 = _76 > _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block8; else goto block4;
block8:;
_82 = _64.value;
_83 = _35.value;
_84 = _82 + _83;
_85 = (frost$core$Int) {_84};
*(&local3) = _85;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:549
_89 = (frost$core$Int) {0u};
_90 = &param1->_length;
_91 = *_90;
_92 = (frost$core$Bit) {false};
_93 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_89, _91, _92);
_94 = _93.min;
*(&local4) = _94;
_96 = _93.max;
_97 = _93.inclusive;
_98 = _97.value;
_99 = (frost$core$Int) {1u};
if (_98) goto block14; else goto block15;
block14:;
_101 = _94.value;
_102 = _96.value;
_103 = _101 <= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block11; else goto block12;
block15:;
_107 = _94.value;
_108 = _96.value;
_109 = _107 < _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:550
_114 = *(&local2);
_115 = _114.value;
_116 = &param0->_length;
_117 = *_116;
_118 = *(&local4);
_119 = _117.value;
_120 = _118.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
_123 = frost$core$Int64$init$frost$core$Int(_122);
_124 = &param1->data;
_125 = *_124;
_126 = _125.value;
_127 = *(&local4);
_128 = frost$core$Int64$init$frost$core$Int(_127);
_129 = _128.value;
_130 = ((frost$core$Char8*)_126)[_129];
_131 = _123.value;
((frost$core$Char8*)_115)[_131] = _130;
_134 = *(&local4);
_135 = _96.value;
_136 = _134.value;
_137 = _135 - _136;
_138 = (frost$core$Int) {_137};
if (_98) goto block17; else goto block18;
block17:;
_140 = _138.value;
_141 = _99.value;
_142 = _140 >= _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block16; else goto block12;
block18:;
_146 = _138.value;
_147 = _99.value;
_148 = _146 > _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block16; else goto block12;
block16:;
_152 = _134.value;
_153 = _99.value;
_154 = _152 + _153;
_155 = (frost$core$Int) {_154};
*(&local4) = _155;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:552
_159 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_160 = *(&local2);
_161 = &param0->_length;
_162 = *_161;
_163 = &param1->_length;
_164 = *_163;
_165 = _162.value;
_166 = _164.value;
_167 = _165 + _166;
_168 = (frost$core$Int) {_167};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_159, _160, _168);
_170 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_172);
return _159;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(void* rawSelf, frost$core$Object* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

$fn33 _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_1 = ($fn34) param1->$class->vtable[0];
_2 = _1(param1);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, _2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _3;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$MutableString* _11;
frost$core$Object* _14;
frost$core$MutableString* _16;
frost$core$Object* _17;
frost$core$Object* _20;
frost$core$Int _23;
frost$core$Bit _24;
frost$core$Range$LTfrost$core$Int$GT _25;
frost$core$Int _26;
frost$core$Int _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$MutableString* _46;
frost$core$Int _49;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _65;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$MutableString* _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$MutableString* _80;
frost$core$Object* _81;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _7, &$s36);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
_11 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_11);
*(&local0) = ((frost$core$MutableString*) NULL);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = _11;
_20 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
_23 = (frost$core$Int) {0u};
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_23, param1, _24);
_26 = _25.min;
*(&local1) = _26;
_28 = _25.max;
_29 = _25.inclusive;
_30 = _29.value;
_31 = (frost$core$Int) {1u};
if (_30) goto block6; else goto block7;
block6:;
_33 = _26.value;
_34 = _28.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block7:;
_39 = _26.value;
_40 = _28.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
_46 = *(&local0);
frost$core$MutableString$append$frost$core$String(_46, param0);
_49 = *(&local1);
_50 = _28.value;
_51 = _49.value;
_52 = _50 - _51;
_53 = (frost$core$Int) {_52};
if (_30) goto block9; else goto block10;
block9:;
_55 = _53.value;
_56 = _31.value;
_57 = _55 >= _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block8; else goto block4;
block10:;
_61 = _53.value;
_62 = _31.value;
_63 = _61 > _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block8; else goto block4;
block8:;
_67 = _49.value;
_68 = _31.value;
_69 = _67 + _68;
_70 = (frost$core$Int) {_69};
*(&local1) = _70;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
_74 = *(&local0);
_75 = frost$core$MutableString$finish$R$frost$core$String(_74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local0);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local0) = ((frost$core$MutableString*) NULL);
return _75;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int$frost$core$String$R$frost$core$String(frost$core$Int param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$MutableString* _11;
frost$core$Object* _14;
frost$core$MutableString* _16;
frost$core$Object* _17;
frost$core$Object* _20;
frost$core$Int _23;
frost$core$Bit _24;
frost$core$Range$LTfrost$core$Int$GT _25;
frost$core$Int _26;
frost$core$Int _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$MutableString* _46;
frost$core$Int _49;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _65;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$MutableString* _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$MutableString* _80;
frost$core$Object* _81;
_0 = (frost$core$Int) {0u};
_1 = param0.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {580u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _7, &$s38);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:581
_11 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_11);
*(&local0) = ((frost$core$MutableString*) NULL);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = _11;
_20 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:582
_23 = (frost$core$Int) {0u};
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_23, param0, _24);
_26 = _25.min;
*(&local1) = _26;
_28 = _25.max;
_29 = _25.inclusive;
_30 = _29.value;
_31 = (frost$core$Int) {1u};
if (_30) goto block6; else goto block7;
block6:;
_33 = _26.value;
_34 = _28.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block7:;
_39 = _26.value;
_40 = _28.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:583
_46 = *(&local0);
frost$core$MutableString$append$frost$core$String(_46, param1);
_49 = *(&local1);
_50 = _28.value;
_51 = _49.value;
_52 = _50 - _51;
_53 = (frost$core$Int) {_52};
if (_30) goto block9; else goto block10;
block9:;
_55 = _53.value;
_56 = _31.value;
_57 = _55 >= _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block8; else goto block4;
block10:;
_61 = _53.value;
_62 = _31.value;
_63 = _61 > _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block8; else goto block4;
block8:;
_67 = _49.value;
_68 = _31.value;
_69 = _67 + _68;
_70 = (frost$core$Int) {_69};
*(&local1) = _70;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:585
_74 = *(&local0);
_75 = frost$core$MutableString$finish$R$frost$core$String(_74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local0);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local0) = ((frost$core$MutableString*) NULL);
return _75;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

$fn39 _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
_1 = ($fn40) param0->$class->vtable[0];
_2 = _1(param0);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, param1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _3;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Bit _12;
frost$core$Int _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Bit _18;
frost$core$Range$LTfrost$core$Int$GT _19;
frost$core$Int _20;
frost$core$Int _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer* _40;
frost$unsafe$Pointer _41;
int64_t _42;
frost$core$Int _43;
frost$core$Int64 _44;
int64_t _45;
frost$core$Char8 _46;
frost$unsafe$Pointer* _47;
frost$unsafe$Pointer _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int64 _51;
int64_t _52;
frost$core$Char8 _53;
uint8_t _56;
uint8_t _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$Bit _64;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Bit _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:607
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 != _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:608
_12 = (frost$core$Bit) {false};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:610
_15 = (frost$core$Int) {0u};
_16 = &param0->_length;
_17 = *_16;
_18 = (frost$core$Bit) {false};
_19 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_15, _17, _18);
_20 = _19.min;
*(&local0) = _20;
_22 = _19.max;
_23 = _19.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {1u};
if (_24) goto block6; else goto block7;
block6:;
_27 = _20.value;
_28 = _22.value;
_29 = _27 <= _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block3; else goto block4;
block7:;
_33 = _20.value;
_34 = _22.value;
_35 = _33 < _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:611
_40 = &param0->data;
_41 = *_40;
_42 = _41.value;
_43 = *(&local0);
_44 = frost$core$Int64$init$frost$core$Int(_43);
_45 = _44.value;
_46 = ((frost$core$Char8*)_42)[_45];
_47 = &param1->data;
_48 = *_47;
_49 = _48.value;
_50 = *(&local0);
_51 = frost$core$Int64$init$frost$core$Int(_50);
_52 = _51.value;
_53 = ((frost$core$Char8*)_49)[_52];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:611:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_56 = _46.value;
_57 = _53.value;
_58 = _56 != _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:612
_64 = (frost$core$Bit) {false};
return _64;
block9:;
_67 = *(&local0);
_68 = _22.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
if (_24) goto block12; else goto block13;
block12:;
_73 = _71.value;
_74 = _25.value;
_75 = _73 >= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block11; else goto block4;
block13:;
_79 = _71.value;
_80 = _25.value;
_81 = _79 > _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block11; else goto block4;
block11:;
_85 = _67.value;
_86 = _25.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
*(&local0) = _88;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:615
_92 = (frost$core$Bit) {true};
return _92;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$Char32 local10;
frost$core$Char32 local11;
frost$core$String$Index local12;
frost$core$String$Index local13;
frost$core$Int _3;
frost$core$Int* _6;
frost$core$String$Index _8;
frost$core$String$Index _11;
frost$core$Int _17;
frost$core$Int* _20;
frost$core$String$Index _22;
frost$core$String$Index _25;
frost$core$String$Index _30;
frost$core$Comparable* _31;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int* _38;
frost$core$String$Index _40;
frost$core$String$Index _43;
frost$core$Comparable* _45;
$fn41 _46;
frost$core$Bit _47;
bool _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$String$Index _54;
frost$core$Comparable* _55;
frost$core$Int* _58;
frost$core$Int _59;
frost$core$Int* _62;
frost$core$String$Index _64;
frost$core$String$Index _67;
frost$core$Comparable* _69;
$fn42 _70;
frost$core$Bit _71;
bool _72;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$String$Index _79;
frost$core$Char32 _80;
frost$core$String$Index _83;
frost$core$Char32 _84;
frost$core$Char32 _87;
frost$core$Char32 _88;
int32_t _91;
int32_t _92;
bool _93;
frost$core$Bit _94;
bool _96;
frost$core$String$Index _99;
frost$core$String$Index _100;
frost$core$String$Index _103;
frost$core$String$Index _104;
frost$core$Char32 _109;
frost$core$Char32 _110;
int32_t _113;
int32_t _114;
bool _115;
frost$core$Bit _116;
frost$core$String$Index _120;
frost$core$Equatable* _121;
frost$core$Int* _124;
frost$core$Int _125;
frost$core$Int* _128;
frost$core$String$Index _130;
frost$core$String$Index _133;
frost$core$Equatable* _135;
$fn43 _136;
frost$core$Bit _137;
frost$core$Object* _138;
frost$core$Object* _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:626
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:626:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
*(&local2) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:627
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:627:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_17 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_20 = &(&local4)->value;
*_20 = _17;
_22 = *(&local4);
*(&local3) = _22;
_25 = *(&local3);
*(&local5) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:628
goto block5;
block5:;
_30 = *(&local2);
frost$core$String$Index$wrapper* $tmp44;
$tmp44 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp44->value = _30;
_31 = ((frost$core$Comparable*) $tmp44);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_34 = &param0->_length;
_35 = *_34;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_38 = &(&local7)->value;
*_38 = _35;
_40 = *(&local7);
*(&local6) = _40;
_43 = *(&local6);
frost$core$String$Index$wrapper* $tmp45;
$tmp45 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp45->value = _43;
_45 = ((frost$core$Comparable*) $tmp45);
ITable* $tmp46 = _31->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp46 = $tmp46->next;
}
_46 = $tmp46->methods[1];
_47 = _46(_31, _45);
_48 = _47.value;
_49 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_51);
if (_48) goto block8; else goto block7;
block8:;
_54 = *(&local5);
frost$core$String$Index$wrapper* $tmp47;
$tmp47 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp47->value = _54;
_55 = ((frost$core$Comparable*) $tmp47);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_58 = &param1->_length;
_59 = *_58;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_62 = &(&local9)->value;
*_62 = _59;
_64 = *(&local9);
*(&local8) = _64;
_67 = *(&local8);
frost$core$String$Index$wrapper* $tmp48;
$tmp48 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp48->value = _67;
_69 = ((frost$core$Comparable*) $tmp48);
ITable* $tmp49 = _55->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp49 = $tmp49->next;
}
_70 = $tmp49->methods[1];
_71 = _70(_55, _69);
_72 = _71.value;
_73 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_75);
if (_72) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:629
_79 = *(&local2);
_80 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _79);
*(&local10) = _80;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:630
_83 = *(&local5);
_84 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _83);
*(&local11) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:631
_87 = *(&local10);
_88 = *(&local11);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from String.frost:631:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_91 = _87.value;
_92 = _88.value;
_93 = _91 == _92;
_94 = (frost$core$Bit) {_93};
_96 = _94.value;
if (_96) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:632
_99 = *(&local2);
_100 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _99);
*(&local2) = _100;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:633
_103 = *(&local5);
_104 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _103);
*(&local5) = _104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:634
goto block5;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:636
_109 = *(&local10);
_110 = *(&local11);
// begin inline call to function frost.core.Char32.>(other:frost.core.Char32):frost.core.Bit from String.frost:636:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:42
_113 = _109.value;
_114 = _110.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
return _116;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:638
_120 = *(&local2);
frost$core$String$Index$wrapper* $tmp50;
$tmp50 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp50->value = _120;
_121 = ((frost$core$Equatable*) $tmp50);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:638:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_124 = &param0->_length;
_125 = *_124;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_128 = &(&local13)->value;
*_128 = _125;
_130 = *(&local13);
*(&local12) = _130;
_133 = *(&local12);
frost$core$String$Index$wrapper* $tmp51;
$tmp51 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp51->value = _133;
_135 = ((frost$core$Equatable*) $tmp51);
ITable* $tmp52 = _121->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp52 = $tmp52->next;
}
_136 = $tmp52->methods[1];
_137 = _136(_121, _135);
_138 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_140);
return _137;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(void* rawSelf, frost$core$String$Index param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
frost$core$Int _1;
frost$unsafe$Pointer* _4;
frost$unsafe$Pointer _5;
int64_t _6;
frost$core$Int _7;
frost$core$Int64 _8;
int64_t _9;
frost$core$Char8 _10;
frost$core$Char8 _13;
uint8_t _16;
int32_t _17;
int32_t _18;
frost$core$Int32 _19;
frost$core$Char8 _23;
uint8_t _26;
frost$core$UInt8 _27;
frost$core$UInt8 _29;
uint8_t _30;
uint8_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int32 _37;
frost$core$Char32 _38;
frost$core$Char8 _41;
uint8_t _44;
frost$core$UInt8 _45;
frost$core$UInt8 _47;
uint8_t _48;
uint8_t _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int* _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$Int _69;
frost$core$Int32 _73;
frost$core$Int32 _74;
int32_t _77;
int32_t _78;
int32_t _79;
frost$core$Int32 _80;
frost$core$Int32 _82;
int32_t _85;
int32_t _86;
int32_t _87;
frost$core$Int32 _88;
frost$unsafe$Pointer* _90;
frost$unsafe$Pointer _91;
int64_t _92;
frost$core$Int _93;
frost$core$Int64 _94;
frost$core$Int64 _95;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int64 _99;
int64_t _100;
frost$core$Char8 _101;
uint8_t _104;
int32_t _105;
int32_t _106;
frost$core$Int32 _107;
frost$core$Int32 _109;
int32_t _112;
int32_t _113;
int32_t _114;
frost$core$Int32 _115;
int32_t _117;
int32_t _118;
int32_t _119;
frost$core$Int32 _120;
frost$core$Int32 _123;
frost$core$Char32 _124;
frost$core$Char8 _127;
uint8_t _130;
frost$core$UInt8 _131;
frost$core$UInt8 _133;
uint8_t _134;
uint8_t _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _141;
frost$core$Int _142;
int64_t _143;
int64_t _144;
int64_t _145;
frost$core$Int _146;
frost$core$Int* _147;
frost$core$Int _148;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
frost$core$Int _155;
frost$core$Int32 _159;
frost$core$Int32 _160;
int32_t _163;
int32_t _164;
int32_t _165;
frost$core$Int32 _166;
frost$core$Int32 _168;
int32_t _171;
int32_t _172;
int32_t _173;
frost$core$Int32 _174;
frost$unsafe$Pointer* _176;
frost$unsafe$Pointer _177;
int64_t _178;
frost$core$Int _179;
frost$core$Int64 _180;
frost$core$Int64 _181;
int64_t _182;
int64_t _183;
int64_t _184;
frost$core$Int64 _185;
int64_t _186;
frost$core$Char8 _187;
uint8_t _190;
int32_t _191;
int32_t _192;
frost$core$Int32 _193;
frost$core$Int32 _195;
int32_t _198;
int32_t _199;
int32_t _200;
frost$core$Int32 _201;
frost$core$Int32 _203;
int32_t _206;
int32_t _207;
int32_t _208;
frost$core$Int32 _209;
int32_t _211;
int32_t _212;
int32_t _213;
frost$core$Int32 _214;
frost$unsafe$Pointer* _215;
frost$unsafe$Pointer _216;
int64_t _217;
frost$core$Int _218;
frost$core$Int64 _219;
frost$core$Int64 _220;
int64_t _221;
int64_t _222;
int64_t _223;
frost$core$Int64 _224;
int64_t _225;
frost$core$Char8 _226;
uint8_t _229;
int32_t _230;
int32_t _231;
frost$core$Int32 _232;
frost$core$Int32 _234;
int32_t _237;
int32_t _238;
int32_t _239;
frost$core$Int32 _240;
int32_t _242;
int32_t _243;
int32_t _244;
frost$core$Int32 _245;
frost$core$Int32 _248;
frost$core$Char32 _249;
frost$core$Int _252;
frost$core$Int _253;
int64_t _254;
int64_t _255;
int64_t _256;
frost$core$Int _257;
frost$core$Int* _258;
frost$core$Int _259;
int64_t _260;
int64_t _261;
bool _262;
frost$core$Bit _263;
bool _264;
frost$core$Int _266;
frost$core$Int32 _270;
frost$core$Int32 _271;
int32_t _274;
int32_t _275;
int32_t _276;
frost$core$Int32 _277;
frost$core$Int32 _279;
int32_t _282;
int32_t _283;
int32_t _284;
frost$core$Int32 _285;
frost$unsafe$Pointer* _287;
frost$unsafe$Pointer _288;
int64_t _289;
frost$core$Int _290;
frost$core$Int64 _291;
frost$core$Int64 _292;
int64_t _293;
int64_t _294;
int64_t _295;
frost$core$Int64 _296;
int64_t _297;
frost$core$Char8 _298;
uint8_t _301;
int32_t _302;
int32_t _303;
frost$core$Int32 _304;
frost$core$Int32 _306;
int32_t _309;
int32_t _310;
int32_t _311;
frost$core$Int32 _312;
frost$core$Int32 _314;
int32_t _317;
int32_t _318;
int32_t _319;
frost$core$Int32 _320;
int32_t _322;
int32_t _323;
int32_t _324;
frost$core$Int32 _325;
frost$unsafe$Pointer* _326;
frost$unsafe$Pointer _327;
int64_t _328;
frost$core$Int _329;
frost$core$Int64 _330;
frost$core$Int64 _331;
int64_t _332;
int64_t _333;
int64_t _334;
frost$core$Int64 _335;
int64_t _336;
frost$core$Char8 _337;
uint8_t _340;
int32_t _341;
int32_t _342;
frost$core$Int32 _343;
frost$core$Int32 _345;
int32_t _348;
int32_t _349;
int32_t _350;
frost$core$Int32 _351;
frost$core$Int32 _353;
int32_t _356;
int32_t _357;
int32_t _358;
frost$core$Int32 _359;
int32_t _361;
int32_t _362;
int32_t _363;
frost$core$Int32 _364;
frost$unsafe$Pointer* _365;
frost$unsafe$Pointer _366;
int64_t _367;
frost$core$Int _368;
frost$core$Int64 _369;
frost$core$Int64 _370;
int64_t _371;
int64_t _372;
int64_t _373;
frost$core$Int64 _374;
int64_t _375;
frost$core$Char8 _376;
uint8_t _379;
int32_t _380;
int32_t _381;
frost$core$Int32 _382;
frost$core$Int32 _384;
int32_t _387;
int32_t _388;
int32_t _389;
frost$core$Int32 _390;
int32_t _392;
int32_t _393;
int32_t _394;
frost$core$Int32 _395;
frost$core$Int32 _398;
frost$core$Char32 _399;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:645
_1 = param1.value;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:646
_4 = &param0->data;
_5 = *_4;
_6 = _5.value;
_7 = *(&local0);
_8 = frost$core$Int64$init$frost$core$Int(_7);
_9 = _8.value;
_10 = ((frost$core$Char8*)_6)[_9];
*(&local1) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:647
_13 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:647:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_16 = _13.value;
_17 = ((int32_t) _16);
_18 = _17 & 255u;
_19 = (frost$core$Int32) {_18};
*(&local2) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:648
_23 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:648:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_26 = _23.value;
_27 = (frost$core$UInt8) {_26};
_29 = (frost$core$UInt8) {192u};
_30 = _27.value;
_31 = _29.value;
_32 = _30 < _31;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:649
_37 = *(&local2);
_38 = frost$core$Char32$init$frost$core$Int32(_37);
return _38;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:651
_41 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:651:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_44 = _41.value;
_45 = (frost$core$UInt8) {_44};
_47 = (frost$core$UInt8) {224u};
_48 = _45.value;
_49 = _47.value;
_50 = _48 < _49;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:652
_55 = *(&local0);
_56 = (frost$core$Int) {1u};
_57 = _55.value;
_58 = _56.value;
_59 = _57 + _58;
_60 = (frost$core$Int) {_59};
_61 = &param0->_length;
_62 = *_61;
_63 = _60.value;
_64 = _62.value;
_65 = _63 < _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block8; else goto block9;
block9:;
_69 = (frost$core$Int) {652u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _69);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:653
_73 = *(&local2);
_74 = (frost$core$Int32) {31u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_77 = _73.value;
_78 = _74.value;
_79 = _77 & _78;
_80 = (frost$core$Int32) {_79};
_82 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:653:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_85 = _80.value;
_86 = _82.value;
_87 = _85 << _86;
_88 = (frost$core$Int32) {_87};
_90 = &param0->data;
_91 = *_90;
_92 = _91.value;
_93 = *(&local0);
_94 = frost$core$Int64$init$frost$core$Int(_93);
_95 = (frost$core$Int64) {1u};
_96 = _94.value;
_97 = _95.value;
_98 = _96 + _97;
_99 = (frost$core$Int64) {_98};
_100 = _99.value;
_101 = ((frost$core$Char8*)_92)[_100];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:653:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_104 = _101.value;
_105 = ((int32_t) _104);
_106 = _105 & 255u;
_107 = (frost$core$Int32) {_106};
_109 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_112 = _107.value;
_113 = _109.value;
_114 = _112 & _113;
_115 = (frost$core$Int32) {_114};
_117 = _88.value;
_118 = _115.value;
_119 = _117 + _118;
_120 = (frost$core$Int32) {_119};
*(&local2) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:654
_123 = *(&local2);
_124 = frost$core$Char32$init$frost$core$Int32(_123);
return _124;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:656
_127 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:656:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_130 = _127.value;
_131 = (frost$core$UInt8) {_130};
_133 = (frost$core$UInt8) {240u};
_134 = _131.value;
_135 = _133.value;
_136 = _134 < _135;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:657
_141 = *(&local0);
_142 = (frost$core$Int) {2u};
_143 = _141.value;
_144 = _142.value;
_145 = _143 + _144;
_146 = (frost$core$Int) {_145};
_147 = &param0->_length;
_148 = *_147;
_149 = _146.value;
_150 = _148.value;
_151 = _149 < _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block17; else goto block18;
block18:;
_155 = (frost$core$Int) {657u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s54, _155);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:658
_159 = *(&local2);
_160 = (frost$core$Int32) {15u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_163 = _159.value;
_164 = _160.value;
_165 = _163 & _164;
_166 = (frost$core$Int32) {_165};
_168 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:658:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_171 = _166.value;
_172 = _168.value;
_173 = _171 << _172;
_174 = (frost$core$Int32) {_173};
_176 = &param0->data;
_177 = *_176;
_178 = _177.value;
_179 = *(&local0);
_180 = frost$core$Int64$init$frost$core$Int(_179);
_181 = (frost$core$Int64) {1u};
_182 = _180.value;
_183 = _181.value;
_184 = _182 + _183;
_185 = (frost$core$Int64) {_184};
_186 = _185.value;
_187 = ((frost$core$Char8*)_178)[_186];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:658:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_190 = _187.value;
_191 = ((int32_t) _190);
_192 = _191 & 255u;
_193 = (frost$core$Int32) {_192};
_195 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_198 = _193.value;
_199 = _195.value;
_200 = _198 & _199;
_201 = (frost$core$Int32) {_200};
_203 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:658:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_206 = _201.value;
_207 = _203.value;
_208 = _206 << _207;
_209 = (frost$core$Int32) {_208};
_211 = _174.value;
_212 = _209.value;
_213 = _211 + _212;
_214 = (frost$core$Int32) {_213};
_215 = &param0->data;
_216 = *_215;
_217 = _216.value;
_218 = *(&local0);
_219 = frost$core$Int64$init$frost$core$Int(_218);
_220 = (frost$core$Int64) {2u};
_221 = _219.value;
_222 = _220.value;
_223 = _221 + _222;
_224 = (frost$core$Int64) {_223};
_225 = _224.value;
_226 = ((frost$core$Char8*)_217)[_225];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:659:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_229 = _226.value;
_230 = ((int32_t) _229);
_231 = _230 & 255u;
_232 = (frost$core$Int32) {_231};
_234 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:659:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_237 = _232.value;
_238 = _234.value;
_239 = _237 & _238;
_240 = (frost$core$Int32) {_239};
_242 = _214.value;
_243 = _240.value;
_244 = _242 + _243;
_245 = (frost$core$Int32) {_244};
*(&local2) = _245;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:660
_248 = *(&local2);
_249 = frost$core$Char32$init$frost$core$Int32(_248);
return _249;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:662
_252 = *(&local0);
_253 = (frost$core$Int) {3u};
_254 = _252.value;
_255 = _253.value;
_256 = _254 + _255;
_257 = (frost$core$Int) {_256};
_258 = &param0->_length;
_259 = *_258;
_260 = _257.value;
_261 = _259.value;
_262 = _260 < _261;
_263 = (frost$core$Bit) {_262};
_264 = _263.value;
if (_264) goto block26; else goto block27;
block27:;
_266 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _266);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:663
_270 = *(&local2);
_271 = (frost$core$Int32) {7u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_274 = _270.value;
_275 = _271.value;
_276 = _274 & _275;
_277 = (frost$core$Int32) {_276};
_279 = (frost$core$Int32) {18u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:663:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_282 = _277.value;
_283 = _279.value;
_284 = _282 << _283;
_285 = (frost$core$Int32) {_284};
_287 = &param0->data;
_288 = *_287;
_289 = _288.value;
_290 = *(&local0);
_291 = frost$core$Int64$init$frost$core$Int(_290);
_292 = (frost$core$Int64) {1u};
_293 = _291.value;
_294 = _292.value;
_295 = _293 + _294;
_296 = (frost$core$Int64) {_295};
_297 = _296.value;
_298 = ((frost$core$Char8*)_289)[_297];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:663:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_301 = _298.value;
_302 = ((int32_t) _301);
_303 = _302 & 255u;
_304 = (frost$core$Int32) {_303};
_306 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_309 = _304.value;
_310 = _306.value;
_311 = _309 & _310;
_312 = (frost$core$Int32) {_311};
_314 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:663:81
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_317 = _312.value;
_318 = _314.value;
_319 = _317 << _318;
_320 = (frost$core$Int32) {_319};
_322 = _285.value;
_323 = _320.value;
_324 = _322 + _323;
_325 = (frost$core$Int32) {_324};
_326 = &param0->data;
_327 = *_326;
_328 = _327.value;
_329 = *(&local0);
_330 = frost$core$Int64$init$frost$core$Int(_329);
_331 = (frost$core$Int64) {2u};
_332 = _330.value;
_333 = _331.value;
_334 = _332 + _333;
_335 = (frost$core$Int64) {_334};
_336 = _335.value;
_337 = ((frost$core$Char8*)_328)[_336];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:664:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_340 = _337.value;
_341 = ((int32_t) _340);
_342 = _341 & 255u;
_343 = (frost$core$Int32) {_342};
_345 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:664:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_348 = _343.value;
_349 = _345.value;
_350 = _348 & _349;
_351 = (frost$core$Int32) {_350};
_353 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:664:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_356 = _351.value;
_357 = _353.value;
_358 = _356 << _357;
_359 = (frost$core$Int32) {_358};
_361 = _325.value;
_362 = _359.value;
_363 = _361 + _362;
_364 = (frost$core$Int32) {_363};
_365 = &param0->data;
_366 = *_365;
_367 = _366.value;
_368 = *(&local0);
_369 = frost$core$Int64$init$frost$core$Int(_368);
_370 = (frost$core$Int64) {3u};
_371 = _369.value;
_372 = _370.value;
_373 = _371 + _372;
_374 = (frost$core$Int64) {_373};
_375 = _374.value;
_376 = ((frost$core$Char8*)_367)[_375];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:665:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_379 = _376.value;
_380 = ((int32_t) _379);
_381 = _380 & 255u;
_382 = (frost$core$Int32) {_381};
_384 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:665:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_387 = _382.value;
_388 = _384.value;
_389 = _387 & _388;
_390 = (frost$core$Int32) {_389};
_392 = _364.value;
_393 = _390.value;
_394 = _392 + _393;
_395 = (frost$core$Int32) {_394};
*(&local2) = _395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:666
_398 = *(&local2);
_399 = frost$core$Char32$init$frost$core$Int32(_398);
return _399;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32(void* rawSelf, frost$core$Int param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Int _3;
frost$core$Int* _6;
frost$core$String$Index _8;
frost$core$String$Index _11;
frost$core$String$Index _13;
frost$core$Char32 _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
_13 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, _11, param1);
_14 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _13);
return _14;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
int64_t local1;
int64_t local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$String$Index _1;
frost$core$Int _2;
frost$core$String$Index _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Bit _11;
bool _12;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
int64_t _19;
frost$core$Int _20;
frost$core$String* _24;
frost$unsafe$Pointer* _25;
frost$unsafe$Pointer _26;
frost$core$String$Index _27;
frost$core$Int _28;
int64_t _31;
int64_t _36;
int64_t _37;
int64_t _38;
int64_t _39;
int64_t _40;
int64_t* _43;
frost$unsafe$Pointer _45;
frost$unsafe$Pointer _48;
frost$core$Int _50;
frost$core$Int _53;
frost$core$Int* _54;
frost$unsafe$Pointer* _57;
frost$core$Int* _60;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$String** _66;
frost$core$String* _67;
frost$core$Object* _68;
frost$core$String** _70;
frost$core$Object* _73;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:688
_1 = param1.max;
_2 = _1.value;
_3 = param1.min;
_4 = _3.value;
_5 = _2.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
*(&local0) = _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:689
_11 = param1.inclusive;
_12 = _11.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:690
_15 = *(&local0);
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 + _18;
_20 = (frost$core$Int) {_19};
*(&local0) = _20;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:692
_24 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_25 = &param0->data;
_26 = *_25;
_27 = param1.min;
_28 = _27.value;
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from String.frost:692:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_31 = _28.value;
*(&local1) = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local2) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_36 = _26.value;
_37 = *(&local1);
_38 = *(&local2);
_39 = _37 * _38;
_40 = _36 + _39;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_43 = &(&local4)->value;
*_43 = _40;
_45 = *(&local4);
*(&local3) = _45;
_48 = *(&local3);
_50 = *(&local0);
// begin inline call to frost.core.String.init(data:frost.unsafe.Pointer<frost.core.Char8>, length:frost.core.Int, owner:frost.core.String) from String.frost:692:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_53 = (frost$core$Int) {0u};
_54 = &_24->dummy;
*_54 = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:358
_57 = &_24->data;
*_57 = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:359
_60 = &_24->_length;
*_60 = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:360
_63 = param0;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = &_24->owner;
_67 = *_66;
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = &_24->owner;
*_70 = _63;
_73 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_75);
return _24;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$String$Index$nullable _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _13;
frost$core$String$Index _16;
frost$core$Int _23;
frost$core$Int* _26;
frost$core$String$Index _28;
frost$core$String$Index _31;
frost$core$Bit _36;
frost$core$String$Index$nullable _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$String$Index$nullable _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
frost$core$String$Index _54;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Int* _65;
frost$core$String$Index _67;
frost$core$String$Index _70;
frost$core$Bit _74;
frost$core$String$Index _78;
frost$core$String$Index _79;
frost$core$Bit _80;
frost$core$Range$LTfrost$core$String$Index$GT _81;
frost$core$String* _82;
frost$core$Object* _83;
frost$core$Object* _85;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:708
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:709
_2 = param1.min;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:710
_8 = param1.min;
_9 = _8.nonnull;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block5;
block5:;
_13 = (frost$core$Int) {710u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _13, &$s57);
abort(); // unreachable
block4:;
_16 = ((frost$core$String$Index) _8.value);
*(&local0) = _16;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:713
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:713:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_23 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_26 = &(&local2)->value;
*_26 = _23;
_28 = *(&local2);
*(&local1) = _28;
_31 = *(&local1);
*(&local0) = _31;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:716
_36 = param1.inclusive;
*(&local3) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:717
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:718
_40 = param1.max;
_41 = _40.nonnull;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:719
_46 = param1.max;
_47 = _46.nonnull;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block11; else goto block12;
block12:;
_51 = (frost$core$Int) {719u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _51, &$s59);
abort(); // unreachable
block11:;
_54 = ((frost$core$String$Index) _46.value);
*(&local4) = _54;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:722
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:722:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_61 = &param0->_length;
_62 = *_61;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_65 = &(&local6)->value;
*_65 = _62;
_67 = *(&local6);
*(&local5) = _67;
_70 = *(&local5);
*(&local4) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:723
_74 = (frost$core$Bit) {false};
*(&local3) = _74;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:725
_78 = *(&local0);
_79 = *(&local4);
_80 = *(&local3);
_81 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_78, _79, _80);
_82 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _81);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_85);
return _82;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
frost$core$Char8 local3;
frost$core$String$Index _1;
frost$core$Int _2;
frost$core$MutableString* _5;
frost$core$Object* _8;
frost$core$MutableString* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$String$Index _17;
frost$core$Int _18;
frost$core$Bit _21;
bool _22;
frost$core$Int _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
int64_t _29;
frost$core$Int _30;
frost$core$Int _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$unsafe$Pointer* _44;
frost$unsafe$Pointer _45;
int64_t _46;
frost$core$Int _47;
frost$core$Int64 _48;
int64_t _49;
frost$core$Char8 _50;
frost$core$MutableString* _53;
frost$core$Char8 _54;
frost$core$Int _57;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
frost$core$Char8 _65;
uint8_t _68;
frost$core$UInt8 _69;
frost$core$UInt8 _71;
uint8_t _72;
uint8_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$MutableString* _79;
frost$unsafe$Pointer* _80;
frost$unsafe$Pointer _81;
int64_t _82;
frost$core$Int _83;
frost$core$Int64 _84;
int64_t _85;
frost$core$Char8 _86;
frost$core$Int _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
int64_t _93;
frost$core$Int _94;
frost$core$Char8 _98;
uint8_t _101;
frost$core$UInt8 _102;
frost$core$UInt8 _104;
uint8_t _105;
uint8_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
frost$core$MutableString* _112;
frost$unsafe$Pointer* _113;
frost$unsafe$Pointer _114;
int64_t _115;
frost$core$Int _116;
frost$core$Int64 _117;
int64_t _118;
frost$core$Char8 _119;
frost$core$Int _122;
frost$core$Int _123;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Char8 _131;
uint8_t _134;
frost$core$UInt8 _135;
frost$core$UInt8 _137;
uint8_t _138;
uint8_t _139;
bool _140;
frost$core$Bit _141;
bool _142;
frost$core$MutableString* _145;
frost$unsafe$Pointer* _146;
frost$unsafe$Pointer _147;
int64_t _148;
frost$core$Int _149;
frost$core$Int64 _150;
int64_t _151;
frost$core$Char8 _152;
frost$core$Int _155;
frost$core$Int _156;
int64_t _157;
int64_t _158;
int64_t _159;
frost$core$Int _160;
frost$core$MutableString* _165;
frost$core$String* _166;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$MutableString* _171;
frost$core$Object* _172;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:733
_1 = param1.min;
_2 = _1.value;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:734
_5 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_5);
*(&local1) = ((frost$core$MutableString*) NULL);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _5;
_14 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:735
_17 = param1.max;
_18 = _17.value;
*(&local2) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:736
_21 = param1.inclusive;
_22 = _21.value;
if (_22) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:737
_25 = *(&local2);
_26 = (frost$core$Int) {1u};
_27 = _25.value;
_28 = _26.value;
_29 = _27 + _28;
_30 = (frost$core$Int) {_29};
*(&local2) = _30;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:739
goto block3;
block3:;
_35 = *(&local0);
_36 = *(&local2);
_37 = _35.value;
_38 = _36.value;
_39 = _37 < _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:740
_44 = &param0->data;
_45 = *_44;
_46 = _45.value;
_47 = *(&local0);
_48 = frost$core$Int64$init$frost$core$Int(_47);
_49 = _48.value;
_50 = ((frost$core$Char8*)_46)[_49];
*(&local3) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:741
_53 = *(&local1);
_54 = *(&local3);
frost$core$MutableString$append$frost$core$Char8(_53, _54);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:742
_57 = *(&local0);
_58 = (frost$core$Int) {1u};
_59 = _57.value;
_60 = _58.value;
_61 = _59 + _60;
_62 = (frost$core$Int) {_61};
*(&local0) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:743
_65 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:743:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_68 = _65.value;
_69 = (frost$core$UInt8) {_68};
_71 = (frost$core$UInt8) {192u};
_72 = _69.value;
_73 = _71.value;
_74 = _72 >= _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:744
_79 = *(&local1);
_80 = &param0->data;
_81 = *_80;
_82 = _81.value;
_83 = *(&local0);
_84 = frost$core$Int64$init$frost$core$Int(_83);
_85 = _84.value;
_86 = ((frost$core$Char8*)_82)[_85];
frost$core$MutableString$append$frost$core$Char8(_79, _86);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:745
_89 = *(&local0);
_90 = (frost$core$Int) {1u};
_91 = _89.value;
_92 = _90.value;
_93 = _91 + _92;
_94 = (frost$core$Int) {_93};
*(&local0) = _94;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:747
_98 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:747:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_101 = _98.value;
_102 = (frost$core$UInt8) {_101};
_104 = (frost$core$UInt8) {224u};
_105 = _102.value;
_106 = _104.value;
_107 = _105 >= _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:748
_112 = *(&local1);
_113 = &param0->data;
_114 = *_113;
_115 = _114.value;
_116 = *(&local0);
_117 = frost$core$Int64$init$frost$core$Int(_116);
_118 = _117.value;
_119 = ((frost$core$Char8*)_115)[_118];
frost$core$MutableString$append$frost$core$Char8(_112, _119);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:749
_122 = *(&local0);
_123 = (frost$core$Int) {1u};
_124 = _122.value;
_125 = _123.value;
_126 = _124 + _125;
_127 = (frost$core$Int) {_126};
*(&local0) = _127;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:751
_131 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:751:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_134 = _131.value;
_135 = (frost$core$UInt8) {_134};
_137 = (frost$core$UInt8) {240u};
_138 = _135.value;
_139 = _137.value;
_140 = _138 >= _139;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:752
_145 = *(&local1);
_146 = &param0->data;
_147 = *_146;
_148 = _147.value;
_149 = *(&local0);
_150 = frost$core$Int64$init$frost$core$Int(_149);
_151 = _150.value;
_152 = ((frost$core$Char8*)_148)[_151];
frost$core$MutableString$append$frost$core$Char8(_145, _152);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:753
_155 = *(&local0);
_156 = (frost$core$Int) {1u};
_157 = _155.value;
_158 = _156.value;
_159 = _157 + _158;
_160 = (frost$core$Int) {_159};
*(&local0) = _160;
goto block13;
block13:;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:756
_165 = *(&local1);
_166 = frost$core$MutableString$finish$R$frost$core$String(_165);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = *(&local1);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_172);
*(&local1) = ((frost$core$MutableString*) NULL);
return _166;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$String$Index$nullable _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$String$Index$nullable _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$String$Index _33;
frost$core$Int _40;
frost$core$Int* _43;
frost$core$String$Index _45;
frost$core$String$Index _48;
frost$core$Bit _53;
frost$core$String$Index$nullable _57;
bool _58;
frost$core$Bit _59;
bool _60;
frost$core$String$Index$nullable _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
frost$core$String$Index _71;
frost$core$Int* _78;
frost$core$Int _79;
frost$core$Int* _82;
frost$core$String$Index _84;
frost$core$String$Index _87;
frost$core$Bit _91;
frost$core$String$Index _95;
frost$core$String$Index _96;
frost$core$Bit _97;
frost$core$Range$LTfrost$core$String$Index$GT _98;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:767
_1 = &param0->_length;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:767:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:768
_14 = ((frost$core$Object*) &$s60);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s61;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:770
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:771
_19 = param1.min;
_20 = _19.nonnull;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:772
_25 = param1.min;
_26 = _25.nonnull;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block7; else goto block8;
block8:;
_30 = (frost$core$Int) {772u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _30, &$s63);
abort(); // unreachable
block7:;
_33 = ((frost$core$String$Index) _25.value);
*(&local0) = _33;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:775
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:775:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_40 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_43 = &(&local2)->value;
*_43 = _40;
_45 = *(&local2);
*(&local1) = _45;
_48 = *(&local1);
*(&local0) = _48;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:778
_53 = param1.inclusive;
*(&local3) = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:779
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:780
_57 = param1.max;
_58 = _57.nonnull;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:781
_63 = param1.max;
_64 = _63.nonnull;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block14; else goto block15;
block15:;
_68 = (frost$core$Int) {781u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _68, &$s65);
abort(); // unreachable
block14:;
_71 = ((frost$core$String$Index) _63.value);
*(&local4) = _71;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:784
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:784:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_78 = &param0->_length;
_79 = *_78;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_82 = &(&local6)->value;
*_82 = _79;
_84 = *(&local6);
*(&local5) = _84;
_87 = *(&local5);
*(&local4) = _87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:785
_91 = (frost$core$Bit) {false};
*(&local3) = _91;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:787
_95 = *(&local0);
_96 = *(&local4);
_97 = *(&local3);
_98 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_95, _96, _97);
_99 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_102);
return _99;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(void* rawSelf, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$core$MutableString* local11 = NULL;
frost$core$Char8 local12;
frost$core$Int local13;
frost$core$String$Index local14;
frost$core$String$Index local15;
frost$core$Char8 local16;
frost$core$Int local17;
frost$core$Int local18;
frost$core$String$Index local19;
frost$core$String$Index local20;
frost$core$Char8 local21;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Int _18;
frost$core$String$Index$nullable _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$String$Index$nullable _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$core$String$Index _36;
frost$core$Int _37;
frost$core$Int _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Int _52;
frost$core$Int* _55;
frost$core$String$Index _57;
frost$core$String$Index _60;
frost$core$Int _62;
frost$core$Int* _69;
frost$core$Int _70;
frost$core$Int* _73;
frost$core$String$Index _75;
frost$core$String$Index _78;
frost$core$String$Index _80;
frost$core$Int _81;
frost$core$String$Index$nullable _87;
bool _88;
frost$core$Bit _89;
bool _90;
frost$core$String$Index$nullable _93;
bool _94;
frost$core$Bit _95;
bool _96;
frost$core$Int _98;
frost$core$String$Index _101;
frost$core$Int _102;
frost$core$Int _106;
frost$core$Int _107;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int* _117;
frost$core$Int _118;
frost$core$Int* _121;
frost$core$String$Index _123;
frost$core$String$Index _126;
frost$core$Int _128;
frost$core$Int _135;
frost$core$Int* _138;
frost$core$String$Index _140;
frost$core$String$Index _143;
frost$core$Int _145;
frost$core$MutableString* _150;
frost$core$Object* _153;
frost$core$MutableString* _155;
frost$core$Object* _156;
frost$core$Object* _159;
frost$core$Int _162;
frost$core$Int _163;
int64_t _164;
int64_t _165;
bool _166;
frost$core$Bit _167;
bool _168;
frost$core$Int _172;
frost$core$Int _173;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _178;
frost$unsafe$Pointer* _181;
frost$unsafe$Pointer _182;
int64_t _183;
frost$core$Int _184;
frost$core$Int64 _185;
int64_t _186;
frost$core$Char8 _187;
frost$core$MutableString* _190;
frost$core$Char8 _191;
frost$core$Int _194;
frost$core$Int _195;
int64_t _196;
int64_t _197;
int64_t _198;
frost$core$Int _199;
frost$core$Char8 _202;
uint8_t _205;
frost$core$UInt8 _206;
frost$core$UInt8 _208;
uint8_t _209;
uint8_t _210;
bool _211;
frost$core$Bit _212;
bool _213;
frost$core$MutableString* _216;
frost$unsafe$Pointer* _217;
frost$unsafe$Pointer _218;
int64_t _219;
frost$core$Int _220;
frost$core$Int64 _221;
int64_t _222;
frost$core$Char8 _223;
frost$core$Int _226;
frost$core$Int _227;
int64_t _228;
int64_t _229;
int64_t _230;
frost$core$Int _231;
frost$core$Char8 _235;
uint8_t _238;
frost$core$UInt8 _239;
frost$core$UInt8 _241;
uint8_t _242;
uint8_t _243;
bool _244;
frost$core$Bit _245;
bool _246;
frost$core$MutableString* _249;
frost$unsafe$Pointer* _250;
frost$unsafe$Pointer _251;
int64_t _252;
frost$core$Int _253;
frost$core$Int64 _254;
int64_t _255;
frost$core$Char8 _256;
frost$core$Int _259;
frost$core$Int _260;
int64_t _261;
int64_t _262;
int64_t _263;
frost$core$Int _264;
frost$core$Char8 _268;
uint8_t _271;
frost$core$UInt8 _272;
frost$core$UInt8 _274;
uint8_t _275;
uint8_t _276;
bool _277;
frost$core$Bit _278;
bool _279;
frost$core$MutableString* _282;
frost$unsafe$Pointer* _283;
frost$unsafe$Pointer _284;
int64_t _285;
frost$core$Int _286;
frost$core$Int64 _287;
int64_t _288;
frost$core$Char8 _289;
frost$core$Int _292;
frost$core$Int _293;
int64_t _294;
int64_t _295;
int64_t _296;
frost$core$Int _297;
frost$core$Int _301;
frost$core$Int _302;
frost$core$Bit _303;
frost$core$Range$LTfrost$core$Int$GT _304;
frost$core$Int _305;
frost$core$Int _307;
frost$core$Bit _308;
bool _309;
frost$core$Int _310;
int64_t _312;
int64_t _313;
bool _314;
frost$core$Bit _315;
bool _316;
int64_t _318;
int64_t _319;
bool _320;
frost$core$Bit _321;
bool _322;
frost$core$Int _325;
frost$core$Int _326;
int64_t _327;
int64_t _328;
bool _329;
frost$core$Bit _330;
bool _331;
frost$core$MutableString* _334;
frost$core$Object* _335;
$fn66 _336;
frost$core$String* _337;
frost$core$Object* _338;
frost$core$Object* _340;
frost$core$MutableString* _342;
frost$core$Object* _343;
frost$core$Int _348;
frost$core$Int* _351;
frost$core$String$Index _353;
frost$core$String$Index _356;
frost$core$String$Index _357;
frost$core$Int _358;
frost$core$Int _361;
int64_t _362;
int64_t _363;
int64_t _364;
frost$core$Int _365;
int64_t _367;
int64_t _368;
bool _369;
frost$core$Bit _370;
bool _371;
int64_t _373;
int64_t _374;
bool _375;
frost$core$Bit _376;
bool _377;
int64_t _379;
int64_t _380;
int64_t _381;
frost$core$Int _382;
frost$core$Int _389;
frost$core$Int _390;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _395;
frost$core$Int _397;
frost$core$Int _402;
frost$core$Int _403;
int64_t _404;
int64_t _405;
bool _406;
frost$core$Bit _407;
bool _408;
frost$unsafe$Pointer* _411;
frost$unsafe$Pointer _412;
int64_t _413;
frost$core$Int _414;
frost$core$Int64 _415;
int64_t _416;
frost$core$Char8 _417;
frost$core$MutableString* _420;
frost$core$Char8 _421;
frost$core$Int _424;
frost$core$Int _427;
frost$core$Int _428;
int64_t _429;
int64_t _430;
int64_t _431;
frost$core$Int _432;
frost$core$Char8 _435;
uint8_t _438;
frost$core$UInt8 _439;
frost$core$UInt8 _441;
uint8_t _442;
uint8_t _443;
bool _444;
frost$core$Bit _445;
bool _446;
frost$core$MutableString* _449;
frost$unsafe$Pointer* _450;
frost$unsafe$Pointer _451;
int64_t _452;
frost$core$Int _453;
frost$core$Int64 _454;
int64_t _455;
frost$core$Char8 _456;
frost$core$Int _459;
frost$core$Int _460;
int64_t _461;
int64_t _462;
int64_t _463;
frost$core$Int _464;
frost$core$Char8 _468;
uint8_t _471;
frost$core$UInt8 _472;
frost$core$UInt8 _474;
uint8_t _475;
uint8_t _476;
bool _477;
frost$core$Bit _478;
bool _479;
frost$core$MutableString* _482;
frost$unsafe$Pointer* _483;
frost$unsafe$Pointer _484;
int64_t _485;
frost$core$Int _486;
frost$core$Int64 _487;
int64_t _488;
frost$core$Char8 _489;
frost$core$Int _492;
frost$core$Int _493;
int64_t _494;
int64_t _495;
int64_t _496;
frost$core$Int _497;
frost$core$Char8 _501;
uint8_t _504;
frost$core$UInt8 _505;
frost$core$UInt8 _507;
uint8_t _508;
uint8_t _509;
bool _510;
frost$core$Bit _511;
bool _512;
frost$core$MutableString* _515;
frost$unsafe$Pointer* _516;
frost$unsafe$Pointer _517;
int64_t _518;
frost$core$Int _519;
frost$core$Int64 _520;
int64_t _521;
frost$core$Char8 _522;
frost$core$Int _526;
frost$core$Int _527;
int64_t _528;
int64_t _529;
int64_t _530;
frost$core$Int _531;
frost$unsafe$Pointer* _535;
frost$unsafe$Pointer _536;
int64_t _537;
frost$core$Int _538;
frost$core$Int64 _539;
int64_t _540;
frost$core$Char8 _541;
uint8_t _544;
frost$core$UInt8 _545;
frost$core$UInt8 _547;
uint8_t _548;
uint8_t _549;
bool _550;
frost$core$Bit _551;
bool _552;
frost$unsafe$Pointer* _554;
frost$unsafe$Pointer _555;
int64_t _556;
frost$core$Int _557;
frost$core$Int64 _558;
int64_t _559;
frost$core$Char8 _560;
uint8_t _563;
frost$core$UInt8 _564;
frost$core$UInt8 _566;
uint8_t _567;
uint8_t _568;
bool _569;
frost$core$Bit _570;
bool _571;
frost$core$Int _574;
frost$core$Int _575;
int64_t _576;
int64_t _577;
int64_t _578;
frost$core$Int _579;
frost$core$Int _583;
frost$core$Int _584;
frost$core$Int _585;
frost$core$Bit _586;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _587;
frost$core$Int _588;
frost$core$Int _590;
frost$core$Int _591;
int64_t _594;
int64_t _595;
frost$core$Int _596;
frost$core$Bit _598;
bool _599;
frost$core$Int _600;
int64_t _601;
int64_t _602;
bool _603;
frost$core$Bit _604;
bool _605;
int64_t _608;
int64_t _609;
bool _610;
frost$core$Bit _611;
bool _612;
int64_t _614;
int64_t _615;
bool _616;
frost$core$Bit _617;
bool _618;
int64_t _621;
int64_t _622;
bool _623;
frost$core$Bit _624;
bool _625;
int64_t _627;
int64_t _628;
bool _629;
frost$core$Bit _630;
bool _631;
frost$core$Int _634;
frost$core$Int _635;
int64_t _636;
int64_t _637;
bool _638;
frost$core$Bit _639;
bool _640;
frost$core$MutableString* _643;
frost$core$Object* _644;
$fn67 _645;
frost$core$String* _646;
frost$core$Object* _647;
frost$core$Object* _649;
frost$core$MutableString* _651;
frost$core$Object* _652;
frost$core$Int _657;
frost$core$Int* _660;
frost$core$String$Index _662;
frost$core$String$Index _665;
frost$core$String$Index _666;
frost$core$Int _667;
frost$core$Int _670;
int64_t _672;
int64_t _673;
int64_t _674;
frost$core$Int _675;
int64_t _677;
int64_t _678;
bool _679;
frost$core$Bit _680;
bool _681;
int64_t _683;
int64_t _684;
bool _685;
frost$core$Bit _686;
bool _687;
int64_t _689;
int64_t _690;
int64_t _691;
frost$core$Int _692;
int64_t _694;
int64_t _695;
bool _696;
frost$core$Bit _697;
bool _698;
int64_t _700;
int64_t _701;
bool _702;
frost$core$Bit _703;
bool _704;
int64_t _706;
int64_t _707;
int64_t _708;
frost$core$Int _709;
frost$core$Bit _715;
bool _716;
frost$core$String$Index$nullable _718;
bool _719;
frost$core$Bit _720;
bool _721;
frost$core$Int _723;
frost$core$Int _724;
int64_t _727;
int64_t _728;
bool _729;
frost$core$Bit _730;
bool _732;
frost$core$Int _734;
frost$core$Int* _735;
frost$core$Int _736;
int64_t _737;
int64_t _738;
bool _739;
frost$core$Bit _740;
bool _741;
frost$unsafe$Pointer* _744;
frost$unsafe$Pointer _745;
int64_t _746;
frost$core$Int _747;
frost$core$Int64 _748;
int64_t _749;
frost$core$Char8 _750;
frost$core$MutableString* _753;
frost$core$Char8 _754;
frost$core$Int _757;
frost$core$Int _758;
int64_t _759;
int64_t _760;
int64_t _761;
frost$core$Int _762;
frost$core$Char8 _765;
uint8_t _768;
frost$core$UInt8 _769;
frost$core$UInt8 _771;
uint8_t _772;
uint8_t _773;
bool _774;
frost$core$Bit _775;
bool _776;
frost$core$MutableString* _779;
frost$unsafe$Pointer* _780;
frost$unsafe$Pointer _781;
int64_t _782;
frost$core$Int _783;
frost$core$Int64 _784;
int64_t _785;
frost$core$Char8 _786;
frost$core$Int _789;
frost$core$Int _790;
int64_t _791;
int64_t _792;
int64_t _793;
frost$core$Int _794;
frost$core$Char8 _798;
uint8_t _801;
frost$core$UInt8 _802;
frost$core$UInt8 _804;
uint8_t _805;
uint8_t _806;
bool _807;
frost$core$Bit _808;
bool _809;
frost$core$MutableString* _812;
frost$unsafe$Pointer* _813;
frost$unsafe$Pointer _814;
int64_t _815;
frost$core$Int _816;
frost$core$Int64 _817;
int64_t _818;
frost$core$Char8 _819;
frost$core$Int _822;
frost$core$Int _823;
int64_t _824;
int64_t _825;
int64_t _826;
frost$core$Int _827;
frost$core$Char8 _831;
uint8_t _834;
frost$core$UInt8 _835;
frost$core$UInt8 _837;
uint8_t _838;
uint8_t _839;
bool _840;
frost$core$Bit _841;
bool _842;
frost$core$MutableString* _845;
frost$unsafe$Pointer* _846;
frost$unsafe$Pointer _847;
int64_t _848;
frost$core$Int _849;
frost$core$Int64 _850;
int64_t _851;
frost$core$Char8 _852;
frost$core$MutableString* _857;
frost$core$String* _858;
frost$core$Object* _859;
frost$core$Object* _861;
frost$core$MutableString* _863;
frost$core$Object* _864;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:803
_1 = &param0->_length;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:803:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:804
_14 = ((frost$core$Object*) &$s68);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s69;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:806
_18 = param1.step;
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:808
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:809
_22 = param1.start;
_23 = _22.nonnull;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:810
_28 = param1.start;
_29 = _28.nonnull;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block7; else goto block8;
block8:;
_33 = (frost$core$Int) {810u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _33, &$s71);
abort(); // unreachable
block7:;
_36 = ((frost$core$String$Index) _28.value);
_37 = _36.value;
*(&local1) = _37;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:812
_41 = *(&local0);
_42 = (frost$core$Int) {0u};
_43 = _41.value;
_44 = _42.value;
_45 = _43 > _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:813
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:813:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_52 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_55 = &(&local3)->value;
*_55 = _52;
_57 = *(&local3);
*(&local2) = _57;
_60 = *(&local2);
_62 = _60.value;
*(&local1) = _62;
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:816
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:816:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_69 = &param0->_length;
_70 = *_69;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_73 = &(&local5)->value;
*_73 = _70;
_75 = *(&local5);
*(&local4) = _75;
_78 = *(&local4);
_80 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, _78);
_81 = _80.value;
*(&local1) = _81;
goto block10;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:819
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:820
_87 = param1.end;
_88 = _87.nonnull;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:821
_93 = param1.end;
_94 = _93.nonnull;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block19; else goto block20;
block20:;
_98 = (frost$core$Int) {821u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _98, &$s73);
abort(); // unreachable
block19:;
_101 = ((frost$core$String$Index) _93.value);
_102 = _101.value;
*(&local6) = _102;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:823
_106 = *(&local0);
_107 = (frost$core$Int) {0u};
_108 = _106.value;
_109 = _107.value;
_110 = _108 > _109;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:824
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:824:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_117 = &param0->_length;
_118 = *_117;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_121 = &(&local8)->value;
*_121 = _118;
_123 = *(&local8);
*(&local7) = _123;
_126 = *(&local7);
_128 = _126.value;
*(&local6) = _128;
goto block22;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:827
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:827:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_135 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_138 = &(&local10)->value;
*_138 = _135;
_140 = *(&local10);
*(&local9) = _140;
_143 = *(&local9);
_145 = _143.value;
*(&local6) = _145;
goto block22;
block22:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:830
_150 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_150);
*(&local11) = ((frost$core$MutableString*) NULL);
_153 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = *(&local11);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local11) = _150;
_159 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_159);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:831
_162 = param1.step;
_163 = (frost$core$Int) {0u};
_164 = _162.value;
_165 = _163.value;
_166 = _164 > _165;
_167 = (frost$core$Bit) {_166};
_168 = _167.value;
if (_168) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:832
goto block31;
block31:;
_172 = *(&local1);
_173 = *(&local6);
_174 = _172.value;
_175 = _173.value;
_176 = _174 < _175;
_177 = (frost$core$Bit) {_176};
_178 = _177.value;
if (_178) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:833
_181 = &param0->data;
_182 = *_181;
_183 = _182.value;
_184 = *(&local1);
_185 = frost$core$Int64$init$frost$core$Int(_184);
_186 = _185.value;
_187 = ((frost$core$Char8*)_183)[_186];
*(&local12) = _187;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:834
_190 = *(&local11);
_191 = *(&local12);
frost$core$MutableString$append$frost$core$Char8(_190, _191);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:835
_194 = *(&local1);
_195 = (frost$core$Int) {1u};
_196 = _194.value;
_197 = _195.value;
_198 = _196 + _197;
_199 = (frost$core$Int) {_198};
*(&local1) = _199;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:836
_202 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:836:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_205 = _202.value;
_206 = (frost$core$UInt8) {_205};
_208 = (frost$core$UInt8) {192u};
_209 = _206.value;
_210 = _208.value;
_211 = _209 >= _210;
_212 = (frost$core$Bit) {_211};
_213 = _212.value;
if (_213) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:837
_216 = *(&local11);
_217 = &param0->data;
_218 = *_217;
_219 = _218.value;
_220 = *(&local1);
_221 = frost$core$Int64$init$frost$core$Int(_220);
_222 = _221.value;
_223 = ((frost$core$Char8*)_219)[_222];
frost$core$MutableString$append$frost$core$Char8(_216, _223);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:838
_226 = *(&local1);
_227 = (frost$core$Int) {1u};
_228 = _226.value;
_229 = _227.value;
_230 = _228 + _229;
_231 = (frost$core$Int) {_230};
*(&local1) = _231;
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:840
_235 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:840:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_238 = _235.value;
_239 = (frost$core$UInt8) {_238};
_241 = (frost$core$UInt8) {224u};
_242 = _239.value;
_243 = _241.value;
_244 = _242 >= _243;
_245 = (frost$core$Bit) {_244};
_246 = _245.value;
if (_246) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:841
_249 = *(&local11);
_250 = &param0->data;
_251 = *_250;
_252 = _251.value;
_253 = *(&local1);
_254 = frost$core$Int64$init$frost$core$Int(_253);
_255 = _254.value;
_256 = ((frost$core$Char8*)_252)[_255];
frost$core$MutableString$append$frost$core$Char8(_249, _256);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:842
_259 = *(&local1);
_260 = (frost$core$Int) {1u};
_261 = _259.value;
_262 = _260.value;
_263 = _261 + _262;
_264 = (frost$core$Int) {_263};
*(&local1) = _264;
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:844
_268 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:844:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_271 = _268.value;
_272 = (frost$core$UInt8) {_271};
_274 = (frost$core$UInt8) {240u};
_275 = _272.value;
_276 = _274.value;
_277 = _275 >= _276;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:845
_282 = *(&local11);
_283 = &param0->data;
_284 = *_283;
_285 = _284.value;
_286 = *(&local1);
_287 = frost$core$Int64$init$frost$core$Int(_286);
_288 = _287.value;
_289 = ((frost$core$Char8*)_285)[_288];
frost$core$MutableString$append$frost$core$Char8(_282, _289);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:846
_292 = *(&local1);
_293 = (frost$core$Int) {1u};
_294 = _292.value;
_295 = _293.value;
_296 = _294 + _295;
_297 = (frost$core$Int) {_296};
*(&local1) = _297;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:848
_301 = (frost$core$Int) {1u};
_302 = *(&local0);
_303 = (frost$core$Bit) {false};
_304 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_301, _302, _303);
_305 = _304.min;
*(&local13) = _305;
_307 = _304.max;
_308 = _304.inclusive;
_309 = _308.value;
_310 = (frost$core$Int) {1u};
if (_309) goto block46; else goto block47;
block46:;
_312 = _305.value;
_313 = _307.value;
_314 = _312 <= _313;
_315 = (frost$core$Bit) {_314};
_316 = _315.value;
if (_316) goto block43; else goto block44;
block47:;
_318 = _305.value;
_319 = _307.value;
_320 = _318 < _319;
_321 = (frost$core$Bit) {_320};
_322 = _321.value;
if (_322) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:849
_325 = *(&local1);
_326 = *(&local6);
_327 = _325.value;
_328 = _326.value;
_329 = _327 >= _328;
_330 = (frost$core$Bit) {_329};
_331 = _330.value;
if (_331) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:850
_334 = *(&local11);
_335 = ((frost$core$Object*) _334);
_336 = ($fn74) _335->$class->vtable[0];
_337 = _336(_335);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$ref$frost$core$Object$Q(_338);
_340 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_340);
_342 = *(&local11);
_343 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_343);
*(&local11) = ((frost$core$MutableString*) NULL);
return _337;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:852
_348 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:852:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_351 = &(&local15)->value;
*_351 = _348;
_353 = *(&local15);
*(&local14) = _353;
_356 = *(&local14);
_357 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _356);
_358 = _357.value;
*(&local1) = _358;
_361 = *(&local13);
_362 = _307.value;
_363 = _361.value;
_364 = _362 - _363;
_365 = (frost$core$Int) {_364};
if (_309) goto block52; else goto block53;
block52:;
_367 = _365.value;
_368 = _310.value;
_369 = _367 >= _368;
_370 = (frost$core$Bit) {_369};
_371 = _370.value;
if (_371) goto block51; else goto block44;
block53:;
_373 = _365.value;
_374 = _310.value;
_375 = _373 > _374;
_376 = (frost$core$Bit) {_375};
_377 = _376.value;
if (_377) goto block51; else goto block44;
block51:;
_379 = _361.value;
_380 = _310.value;
_381 = _379 + _380;
_382 = (frost$core$Int) {_381};
*(&local13) = _382;
goto block43;
block44:;
goto block31;
block33:;
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:857
_389 = param1.step;
_390 = (frost$core$Int) {0u};
_391 = _389.value;
_392 = _390.value;
_393 = _391 < _392;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block54; else goto block55;
block55:;
_397 = (frost$core$Int) {857u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s75, _397);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:858
goto block56;
block56:;
_402 = *(&local1);
_403 = *(&local6);
_404 = _402.value;
_405 = _403.value;
_406 = _404 > _405;
_407 = (frost$core$Bit) {_406};
_408 = _407.value;
if (_408) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:859
_411 = &param0->data;
_412 = *_411;
_413 = _412.value;
_414 = *(&local1);
_415 = frost$core$Int64$init$frost$core$Int(_414);
_416 = _415.value;
_417 = ((frost$core$Char8*)_413)[_416];
*(&local16) = _417;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:860
_420 = *(&local11);
_421 = *(&local16);
frost$core$MutableString$append$frost$core$Char8(_420, _421);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:861
_424 = *(&local1);
*(&local17) = _424;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:862
_427 = *(&local1);
_428 = (frost$core$Int) {1u};
_429 = _427.value;
_430 = _428.value;
_431 = _429 + _430;
_432 = (frost$core$Int) {_431};
*(&local1) = _432;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:863
_435 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:863:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_438 = _435.value;
_439 = (frost$core$UInt8) {_438};
_441 = (frost$core$UInt8) {192u};
_442 = _439.value;
_443 = _441.value;
_444 = _442 >= _443;
_445 = (frost$core$Bit) {_444};
_446 = _445.value;
if (_446) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:864
_449 = *(&local11);
_450 = &param0->data;
_451 = *_450;
_452 = _451.value;
_453 = *(&local1);
_454 = frost$core$Int64$init$frost$core$Int(_453);
_455 = _454.value;
_456 = ((frost$core$Char8*)_452)[_455];
frost$core$MutableString$append$frost$core$Char8(_449, _456);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:865
_459 = *(&local1);
_460 = (frost$core$Int) {1u};
_461 = _459.value;
_462 = _460.value;
_463 = _461 + _462;
_464 = (frost$core$Int) {_463};
*(&local1) = _464;
goto block60;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:867
_468 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:867:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_471 = _468.value;
_472 = (frost$core$UInt8) {_471};
_474 = (frost$core$UInt8) {224u};
_475 = _472.value;
_476 = _474.value;
_477 = _475 >= _476;
_478 = (frost$core$Bit) {_477};
_479 = _478.value;
if (_479) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:868
_482 = *(&local11);
_483 = &param0->data;
_484 = *_483;
_485 = _484.value;
_486 = *(&local1);
_487 = frost$core$Int64$init$frost$core$Int(_486);
_488 = _487.value;
_489 = ((frost$core$Char8*)_485)[_488];
frost$core$MutableString$append$frost$core$Char8(_482, _489);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:869
_492 = *(&local1);
_493 = (frost$core$Int) {1u};
_494 = _492.value;
_495 = _493.value;
_496 = _494 + _495;
_497 = (frost$core$Int) {_496};
*(&local1) = _497;
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:871
_501 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:871:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_504 = _501.value;
_505 = (frost$core$UInt8) {_504};
_507 = (frost$core$UInt8) {240u};
_508 = _505.value;
_509 = _507.value;
_510 = _508 >= _509;
_511 = (frost$core$Bit) {_510};
_512 = _511.value;
if (_512) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:872
_515 = *(&local11);
_516 = &param0->data;
_517 = *_516;
_518 = _517.value;
_519 = *(&local1);
_520 = frost$core$Int64$init$frost$core$Int(_519);
_521 = _520.value;
_522 = ((frost$core$Char8*)_518)[_521];
frost$core$MutableString$append$frost$core$Char8(_515, _522);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:874
_526 = *(&local17);
_527 = (frost$core$Int) {1u};
_528 = _526.value;
_529 = _527.value;
_530 = _528 - _529;
_531 = (frost$core$Int) {_530};
*(&local1) = _531;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:875
goto block68;
block68:;
_535 = &param0->data;
_536 = *_535;
_537 = _536.value;
_538 = *(&local1);
_539 = frost$core$Int64$init$frost$core$Int(_538);
_540 = _539.value;
_541 = ((frost$core$Char8*)_537)[_540];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:875:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_544 = _541.value;
_545 = (frost$core$UInt8) {_544};
_547 = (frost$core$UInt8) {128u};
_548 = _545.value;
_549 = _547.value;
_550 = _548 >= _549;
_551 = (frost$core$Bit) {_550};
_552 = _551.value;
if (_552) goto block71; else goto block70;
block71:;
_554 = &param0->data;
_555 = *_554;
_556 = _555.value;
_557 = *(&local1);
_558 = frost$core$Int64$init$frost$core$Int(_557);
_559 = _558.value;
_560 = ((frost$core$Char8*)_556)[_559];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:875:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_563 = _560.value;
_564 = (frost$core$UInt8) {_563};
_566 = (frost$core$UInt8) {192u};
_567 = _564.value;
_568 = _566.value;
_569 = _567 < _568;
_570 = (frost$core$Bit) {_569};
_571 = _570.value;
if (_571) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:876
_574 = *(&local1);
_575 = (frost$core$Int) {1u};
_576 = _574.value;
_577 = _575.value;
_578 = _576 - _577;
_579 = (frost$core$Int) {_578};
*(&local1) = _579;
goto block68;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:878
_583 = (frost$core$Int) {18446744073709551615u};
_584 = *(&local0);
_585 = (frost$core$Int) {18446744073709551615u};
_586 = (frost$core$Bit) {false};
_587 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_583, _584, _585, _586);
_588 = _587.start;
*(&local18) = _588;
_590 = _587.end;
_591 = _587.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:878:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_594 = _591.value;
_595 = -_594;
_596 = (frost$core$Int) {_595};
_598 = _587.inclusive;
_599 = _598.value;
_600 = (frost$core$Int) {0u};
_601 = _591.value;
_602 = _600.value;
_603 = _601 >= _602;
_604 = (frost$core$Bit) {_603};
_605 = _604.value;
if (_605) goto block78; else goto block79;
block78:;
if (_599) goto block80; else goto block81;
block80:;
_608 = _588.value;
_609 = _590.value;
_610 = _608 <= _609;
_611 = (frost$core$Bit) {_610};
_612 = _611.value;
if (_612) goto block75; else goto block76;
block81:;
_614 = _588.value;
_615 = _590.value;
_616 = _614 < _615;
_617 = (frost$core$Bit) {_616};
_618 = _617.value;
if (_618) goto block75; else goto block76;
block79:;
if (_599) goto block82; else goto block83;
block82:;
_621 = _588.value;
_622 = _590.value;
_623 = _621 >= _622;
_624 = (frost$core$Bit) {_623};
_625 = _624.value;
if (_625) goto block75; else goto block76;
block83:;
_627 = _588.value;
_628 = _590.value;
_629 = _627 > _628;
_630 = (frost$core$Bit) {_629};
_631 = _630.value;
if (_631) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:879
_634 = *(&local1);
_635 = *(&local6);
_636 = _634.value;
_637 = _635.value;
_638 = _636 <= _637;
_639 = (frost$core$Bit) {_638};
_640 = _639.value;
if (_640) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:880
_643 = *(&local11);
_644 = ((frost$core$Object*) _643);
_645 = ($fn76) _644->$class->vtable[0];
_646 = _645(_644);
_647 = ((frost$core$Object*) _646);
frost$core$Frost$ref$frost$core$Object$Q(_647);
_649 = ((frost$core$Object*) _646);
frost$core$Frost$unref$frost$core$Object$Q(_649);
_651 = *(&local11);
_652 = ((frost$core$Object*) _651);
frost$core$Frost$unref$frost$core$Object$Q(_652);
*(&local11) = ((frost$core$MutableString*) NULL);
return _646;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:882
_657 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:882:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_660 = &(&local20)->value;
*_660 = _657;
_662 = *(&local20);
*(&local19) = _662;
_665 = *(&local19);
_666 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, _665);
_667 = _666.value;
*(&local1) = _667;
_670 = *(&local18);
if (_605) goto block88; else goto block89;
block88:;
_672 = _590.value;
_673 = _670.value;
_674 = _672 - _673;
_675 = (frost$core$Int) {_674};
if (_599) goto block90; else goto block91;
block90:;
_677 = _675.value;
_678 = _591.value;
_679 = _677 >= _678;
_680 = (frost$core$Bit) {_679};
_681 = _680.value;
if (_681) goto block87; else goto block76;
block91:;
_683 = _675.value;
_684 = _591.value;
_685 = _683 > _684;
_686 = (frost$core$Bit) {_685};
_687 = _686.value;
if (_687) goto block87; else goto block76;
block89:;
_689 = _670.value;
_690 = _590.value;
_691 = _689 - _690;
_692 = (frost$core$Int) {_691};
if (_599) goto block92; else goto block93;
block92:;
_694 = _692.value;
_695 = _596.value;
_696 = _694 >= _695;
_697 = (frost$core$Bit) {_696};
_698 = _697.value;
if (_698) goto block87; else goto block76;
block93:;
_700 = _692.value;
_701 = _596.value;
_702 = _700 > _701;
_703 = (frost$core$Bit) {_702};
_704 = _703.value;
if (_704) goto block87; else goto block76;
block87:;
_706 = _670.value;
_707 = _591.value;
_708 = _706 + _707;
_709 = (frost$core$Int) {_708};
*(&local18) = _709;
goto block75;
block76:;
goto block56;
block58:;
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:886
_715 = param1.inclusive;
_716 = _715.value;
if (_716) goto block97; else goto block98;
block98:;
_718 = param1.end;
_719 = !_718.nonnull;
_720 = (frost$core$Bit) {_719};
_721 = _720.value;
if (_721) goto block97; else goto block95;
block97:;
_723 = *(&local1);
_724 = *(&local6);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:886:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_727 = _723.value;
_728 = _724.value;
_729 = _727 == _728;
_730 = (frost$core$Bit) {_729};
_732 = _730.value;
if (_732) goto block96; else goto block95;
block96:;
_734 = *(&local6);
_735 = &param0->_length;
_736 = *_735;
_737 = _734.value;
_738 = _736.value;
_739 = _737 < _738;
_740 = (frost$core$Bit) {_739};
_741 = _740.value;
if (_741) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:887
_744 = &param0->data;
_745 = *_744;
_746 = _745.value;
_747 = *(&local1);
_748 = frost$core$Int64$init$frost$core$Int(_747);
_749 = _748.value;
_750 = ((frost$core$Char8*)_746)[_749];
*(&local21) = _750;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:888
_753 = *(&local11);
_754 = *(&local21);
frost$core$MutableString$append$frost$core$Char8(_753, _754);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:889
_757 = *(&local1);
_758 = (frost$core$Int) {1u};
_759 = _757.value;
_760 = _758.value;
_761 = _759 + _760;
_762 = (frost$core$Int) {_761};
*(&local1) = _762;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:890
_765 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:890:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_768 = _765.value;
_769 = (frost$core$UInt8) {_768};
_771 = (frost$core$UInt8) {192u};
_772 = _769.value;
_773 = _771.value;
_774 = _772 >= _773;
_775 = (frost$core$Bit) {_774};
_776 = _775.value;
if (_776) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:891
_779 = *(&local11);
_780 = &param0->data;
_781 = *_780;
_782 = _781.value;
_783 = *(&local1);
_784 = frost$core$Int64$init$frost$core$Int(_783);
_785 = _784.value;
_786 = ((frost$core$Char8*)_782)[_785];
frost$core$MutableString$append$frost$core$Char8(_779, _786);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:892
_789 = *(&local1);
_790 = (frost$core$Int) {1u};
_791 = _789.value;
_792 = _790.value;
_793 = _791 + _792;
_794 = (frost$core$Int) {_793};
*(&local1) = _794;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:894
_798 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:894:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_801 = _798.value;
_802 = (frost$core$UInt8) {_801};
_804 = (frost$core$UInt8) {224u};
_805 = _802.value;
_806 = _804.value;
_807 = _805 >= _806;
_808 = (frost$core$Bit) {_807};
_809 = _808.value;
if (_809) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:895
_812 = *(&local11);
_813 = &param0->data;
_814 = *_813;
_815 = _814.value;
_816 = *(&local1);
_817 = frost$core$Int64$init$frost$core$Int(_816);
_818 = _817.value;
_819 = ((frost$core$Char8*)_815)[_818];
frost$core$MutableString$append$frost$core$Char8(_812, _819);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:896
_822 = *(&local1);
_823 = (frost$core$Int) {1u};
_824 = _822.value;
_825 = _823.value;
_826 = _824 + _825;
_827 = (frost$core$Int) {_826};
*(&local1) = _827;
goto block104;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:898
_831 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:898:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_834 = _831.value;
_835 = (frost$core$UInt8) {_834};
_837 = (frost$core$UInt8) {240u};
_838 = _835.value;
_839 = _837.value;
_840 = _838 >= _839;
_841 = (frost$core$Bit) {_840};
_842 = _841.value;
if (_842) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:899
_845 = *(&local11);
_846 = &param0->data;
_847 = *_846;
_848 = _847.value;
_849 = *(&local1);
_850 = frost$core$Int64$init$frost$core$Int(_849);
_851 = _850.value;
_852 = ((frost$core$Char8*)_848)[_851];
frost$core$MutableString$append$frost$core$Char8(_845, _852);
goto block107;
block107:;
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:902
_857 = *(&local11);
_858 = frost$core$MutableString$finish$R$frost$core$String(_857);
_859 = ((frost$core$Object*) _858);
frost$core$Frost$ref$frost$core$Object$Q(_859);
_861 = ((frost$core$Object*) _858);
frost$core$Frost$unref$frost$core$Object$Q(_861);
_863 = *(&local11);
_864 = ((frost$core$Object*) _863);
frost$core$Frost$unref$frost$core$Object$Q(_864);
*(&local11) = ((frost$core$MutableString*) NULL);
return _858;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _10;
frost$core$Int* _13;
frost$core$String$Index _15;
frost$core$String$Index _18;
frost$core$Int$nullable _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
frost$core$Int _28;
frost$core$String$Index _29;
frost$core$String$Index$nullable _30;
frost$core$Int$nullable _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _47;
frost$core$Int* _50;
frost$core$String$Index _52;
frost$core$String$Index _55;
frost$core$Int$nullable _57;
bool _58;
frost$core$Bit _59;
bool _60;
frost$core$Int _62;
frost$core$Int _65;
frost$core$String$Index _66;
frost$core$String$Index$nullable _67;
frost$core$String$Index$nullable _75;
frost$core$String$Index$nullable _76;
frost$core$Bit _77;
frost$core$Range$LTfrost$core$String$Index$Q$GT _78;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Object* _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:911
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:912
_2 = param1.min;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:913
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:913:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_10 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_13 = &(&local2)->value;
*_13 = _10;
_15 = *(&local2);
*(&local1) = _15;
_18 = *(&local1);
_20 = param1.min;
_21 = _20.nonnull;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block6; else goto block7;
block7:;
_25 = (frost$core$Int) {913u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, _25, &$s78);
abort(); // unreachable
block6:;
_28 = ((frost$core$Int) _20.value);
_29 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, _18, _28);
_30 = ((frost$core$String$Index$nullable) { _29, true });
*(&local0) = _30;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:918
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:919
_39 = param1.max;
_40 = _39.nonnull;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:920
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:920:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_47 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_50 = &(&local5)->value;
*_50 = _47;
_52 = *(&local5);
*(&local4) = _52;
_55 = *(&local4);
_57 = param1.max;
_58 = _57.nonnull;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block13; else goto block14;
block14:;
_62 = (frost$core$Int) {920u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, _62, &$s80);
abort(); // unreachable
block13:;
_65 = ((frost$core$Int) _57.value);
_66 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, _55, _65);
_67 = ((frost$core$String$Index$nullable) { _66, true });
*(&local3) = _67;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:923
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:925
_75 = *(&local0);
_76 = *(&local3);
_77 = param1.inclusive;
_78 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_75, _76, _77);
_79 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _78);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_82);
return _79;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _10;
frost$core$Int* _13;
frost$core$String$Index _15;
frost$core$String$Index _18;
frost$core$Int$nullable _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
frost$core$Int _28;
frost$core$String$Index _29;
frost$core$String$Index$nullable _30;
frost$core$Int$nullable _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _47;
frost$core$Int* _50;
frost$core$String$Index _52;
frost$core$String$Index _55;
frost$core$Int$nullable _57;
bool _58;
frost$core$Bit _59;
bool _60;
frost$core$Int _62;
frost$core$Int _65;
frost$core$String$Index _66;
frost$core$String$Index$nullable _67;
frost$core$String$Index$nullable _75;
frost$core$String$Index$nullable _76;
frost$core$Int _77;
frost$core$Bit _78;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT _79;
frost$core$String* _80;
frost$core$Object* _81;
frost$core$Object* _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:934
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:935
_2 = param1.start;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:936
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:936:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_10 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_13 = &(&local2)->value;
*_13 = _10;
_15 = *(&local2);
*(&local1) = _15;
_18 = *(&local1);
_20 = param1.start;
_21 = _20.nonnull;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block6; else goto block7;
block7:;
_25 = (frost$core$Int) {936u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _25, &$s82);
abort(); // unreachable
block6:;
_28 = ((frost$core$Int) _20.value);
_29 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, _18, _28);
_30 = ((frost$core$String$Index$nullable) { _29, true });
*(&local0) = _30;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:941
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:942
_39 = param1.end;
_40 = _39.nonnull;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:943
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:943:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_47 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_50 = &(&local5)->value;
*_50 = _47;
_52 = *(&local5);
*(&local4) = _52;
_55 = *(&local4);
_57 = param1.end;
_58 = _57.nonnull;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block13; else goto block14;
block14:;
_62 = (frost$core$Int) {943u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _62, &$s84);
abort(); // unreachable
block13:;
_65 = ((frost$core$Int) _57.value);
_66 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, _55, _65);
_67 = ((frost$core$String$Index$nullable) { _66, true });
*(&local3) = _67;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:946
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:948
_75 = *(&local0);
_76 = *(&local3);
_77 = param1.step;
_78 = param1.inclusive;
_79 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int$frost$core$Bit(_75, _76, _77, _78);
_80 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(param0, _79);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_83);
return _80;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(void* rawSelf, frost$core$Char8 param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$core$Bit _4;
frost$core$Range$LTfrost$core$Int$GT _5;
frost$core$Int _6;
frost$core$Int _8;
frost$core$Bit _9;
bool _10;
frost$core$Int _11;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$unsafe$Pointer* _26;
frost$unsafe$Pointer _27;
int64_t _28;
frost$core$Int _29;
frost$core$Int64 _30;
int64_t _31;
frost$core$Char8 _32;
uint8_t _35;
uint8_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$Bit _43;
frost$core$Int _46;
int64_t _47;
int64_t _48;
int64_t _49;
frost$core$Int _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Bit _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:955
_1 = (frost$core$Int) {0u};
_2 = &param0->_length;
_3 = *_2;
_4 = (frost$core$Bit) {false};
_5 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1, _3, _4);
_6 = _5.min;
*(&local0) = _6;
_8 = _5.max;
_9 = _5.inclusive;
_10 = _9.value;
_11 = (frost$core$Int) {1u};
if (_10) goto block4; else goto block5;
block4:;
_13 = _6.value;
_14 = _8.value;
_15 = _13 <= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block5:;
_19 = _6.value;
_20 = _8.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:956
_26 = &param0->data;
_27 = *_26;
_28 = _27.value;
_29 = *(&local0);
_30 = frost$core$Int64$init$frost$core$Int(_29);
_31 = _30.value;
_32 = ((frost$core$Char8*)_28)[_31];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:956:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_35 = _32.value;
_36 = param1.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:957
_43 = (frost$core$Bit) {true};
return _43;
block7:;
_46 = *(&local0);
_47 = _8.value;
_48 = _46.value;
_49 = _47 - _48;
_50 = (frost$core$Int) {_49};
if (_10) goto block10; else goto block11;
block10:;
_52 = _50.value;
_53 = _11.value;
_54 = _52 >= _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block9; else goto block2;
block11:;
_58 = _50.value;
_59 = _11.value;
_60 = _58 > _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block9; else goto block2;
block9:;
_64 = _46.value;
_65 = _11.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
*(&local0) = _67;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:960
_71 = (frost$core$Bit) {false};
return _71;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int _5;
frost$core$String$Index _6;
frost$core$String$Index$nullable _8;
bool _10;
frost$core$Bit _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_5 = (frost$core$Int) {0u};
_6 = frost$core$String$Index$init$frost$core$Int(_5);
_8 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _6);
_10 = _8.nonnull;
_11 = (frost$core$Bit) {_10};
return _11;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Int _3;
frost$core$Int* _6;
frost$core$String$Index _8;
frost$core$String$Index _11;
frost$core$String$Index$nullable _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
_13 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _11);
return _13;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* param1, frost$core$String$Index param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int* _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
frost$core$Bit _23;
frost$core$Range$LTfrost$core$Int$GT _24;
frost$core$Int _25;
frost$core$Int _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _30;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _45;
frost$core$Int* _46;
frost$core$Int _47;
frost$core$Bit _48;
frost$core$Range$LTfrost$core$Int$GT _49;
frost$core$Int _50;
frost$core$Int _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$unsafe$Pointer* _70;
frost$unsafe$Pointer _71;
int64_t _72;
frost$core$Int _73;
frost$core$Int _74;
int64_t _75;
int64_t _76;
int64_t _77;
frost$core$Int _78;
frost$core$Int64 _79;
int64_t _80;
frost$core$Char8 _81;
frost$unsafe$Pointer* _82;
frost$unsafe$Pointer _83;
int64_t _84;
frost$core$Int _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Char8 _88;
uint8_t _91;
uint8_t _92;
bool _93;
frost$core$Bit _94;
bool _96;
frost$core$Int _137;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
frost$core$Int _101;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
frost$core$Int _126;
frost$core$Int* _129;
frost$core$String$Index _131;
frost$core$String$Index _134;
frost$core$String$Index$nullable _135;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _147;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
int64_t _155;
int64_t _156;
int64_t _157;
frost$core$Int _158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:990
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 < _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:993
_14 = param2.value;
_15 = &param0->_length;
_16 = *_15;
_17 = &param1->_length;
_18 = *_17;
_19 = _16.value;
_20 = _18.value;
_21 = _19 - _20;
_22 = (frost$core$Int) {_21};
_23 = (frost$core$Bit) {true};
_24 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_14, _22, _23);
_25 = _24.min;
*(&local0) = _25;
_27 = _24.max;
_28 = _24.inclusive;
_29 = _28.value;
_30 = (frost$core$Int) {1u};
if (_29) goto block6; else goto block7;
block6:;
_32 = _25.value;
_33 = _27.value;
_34 = _32 <= _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block3; else goto block4;
block7:;
_38 = _25.value;
_39 = _27.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:994
_45 = (frost$core$Int) {0u};
_46 = &param1->_length;
_47 = *_46;
_48 = (frost$core$Bit) {false};
_49 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_45, _47, _48);
_50 = _49.min;
*(&local1) = _50;
_52 = _49.max;
_53 = _49.inclusive;
_54 = _53.value;
_55 = (frost$core$Int) {1u};
if (_54) goto block11; else goto block12;
block11:;
_57 = _50.value;
_58 = _52.value;
_59 = _57 <= _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block8; else goto block9;
block12:;
_63 = _50.value;
_64 = _52.value;
_65 = _63 < _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:995
_70 = &param0->data;
_71 = *_70;
_72 = _71.value;
_73 = *(&local0);
_74 = *(&local1);
_75 = _73.value;
_76 = _74.value;
_77 = _75 + _76;
_78 = (frost$core$Int) {_77};
_79 = frost$core$Int64$init$frost$core$Int(_78);
_80 = _79.value;
_81 = ((frost$core$Char8*)_72)[_80];
_82 = &param1->data;
_83 = *_82;
_84 = _83.value;
_85 = *(&local1);
_86 = frost$core$Int64$init$frost$core$Int(_85);
_87 = _86.value;
_88 = ((frost$core$Char8*)_84)[_87];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:995:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_91 = _81.value;
_92 = _88.value;
_93 = _91 != _92;
_94 = (frost$core$Bit) {_93};
_96 = _94.value;
if (_96) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:996
_137 = *(&local0);
_138 = _27.value;
_139 = _137.value;
_140 = _138 - _139;
_141 = (frost$core$Int) {_140};
if (_29) goto block21; else goto block22;
block14:;
_101 = *(&local1);
_102 = _52.value;
_103 = _101.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_54) goto block17; else goto block18;
block17:;
_107 = _105.value;
_108 = _55.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block16; else goto block9;
block18:;
_113 = _105.value;
_114 = _55.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block16; else goto block9;
block16:;
_119 = _101.value;
_120 = _55.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local1) = _122;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:999
_126 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:999:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_129 = &(&local3)->value;
*_129 = _126;
_131 = *(&local3);
*(&local2) = _131;
_134 = *(&local2);
_135 = ((frost$core$String$Index$nullable) { _134, true });
return _135;
block21:;
_143 = _141.value;
_144 = _30.value;
_145 = _143 >= _144;
_146 = (frost$core$Bit) {_145};
_147 = _146.value;
if (_147) goto block20; else goto block4;
block22:;
_149 = _141.value;
_150 = _30.value;
_151 = _149 > _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block20; else goto block4;
block20:;
_155 = _137.value;
_156 = _30.value;
_157 = _155 + _156;
_158 = (frost$core$Int) {_157};
*(&local0) = _158;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$Int* _7;
frost$core$String$Index _9;
frost$core$String$Index _12;
frost$core$String$Index$nullable _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_3 = &param0->_length;
_4 = *_3;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_7 = &(&local1)->value;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
_14 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _12);
return _14;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(void* rawSelf, frost$core$String* param1, frost$core$String$Index param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int* _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
int64_t _32;
frost$core$Int _33;
int64_t _37;
frost$core$Int _38;
frost$core$Int _41;
frost$core$Int _44;
frost$core$Int _45;
frost$core$Int _46;
frost$core$Bit _47;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _48;
frost$core$Int _49;
frost$core$Int _51;
frost$core$Int _52;
int64_t _55;
int64_t _56;
frost$core$Int _57;
frost$core$Bit _59;
bool _60;
frost$core$Int _61;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
frost$core$Int _95;
frost$core$Int* _96;
frost$core$Int _97;
frost$core$Bit _98;
frost$core$Range$LTfrost$core$Int$GT _99;
frost$core$Int _100;
frost$core$Int _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$unsafe$Pointer* _120;
frost$unsafe$Pointer _121;
int64_t _122;
frost$core$Int _123;
frost$core$Int _124;
int64_t _125;
int64_t _126;
int64_t _127;
frost$core$Int _128;
frost$core$Int64 _129;
int64_t _130;
frost$core$Char8 _131;
frost$unsafe$Pointer* _132;
frost$unsafe$Pointer _133;
int64_t _134;
frost$core$Int _135;
frost$core$Int64 _136;
int64_t _137;
frost$core$Char8 _138;
uint8_t _141;
uint8_t _142;
bool _143;
frost$core$Bit _144;
bool _146;
frost$core$Int _187;
frost$core$Int _151;
int64_t _152;
int64_t _153;
int64_t _154;
frost$core$Int _155;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
int64_t _163;
int64_t _164;
bool _165;
frost$core$Bit _166;
bool _167;
int64_t _169;
int64_t _170;
int64_t _171;
frost$core$Int _172;
frost$core$Int _176;
frost$core$Int* _179;
frost$core$String$Index _181;
frost$core$String$Index _184;
frost$core$String$Index$nullable _185;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
int64_t _200;
int64_t _201;
bool _202;
frost$core$Bit _203;
bool _204;
int64_t _206;
int64_t _207;
int64_t _208;
frost$core$Int _209;
int64_t _211;
int64_t _212;
bool _213;
frost$core$Bit _214;
bool _215;
int64_t _217;
int64_t _218;
bool _219;
frost$core$Bit _220;
bool _221;
int64_t _223;
int64_t _224;
int64_t _225;
frost$core$Int _226;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1024
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 < _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1027
_14 = param2.value;
_15 = &param0->_length;
_16 = *_15;
_17 = &param1->_length;
_18 = *_17;
_19 = _16.value;
_20 = _18.value;
_21 = _19 - _20;
_22 = (frost$core$Int) {_21};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from String.frost:1027:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_25 = _14.value;
_26 = _22.value;
_27 = _25 < _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_32 = _14.value;
_33 = (frost$core$Int) {_32};
*(&local0) = _33;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_37 = _22.value;
_38 = (frost$core$Int) {_37};
*(&local0) = _38;
goto block3;
block3:;
_41 = *(&local0);
*(&local1) = _41;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1028
_44 = *(&local1);
_45 = (frost$core$Int) {0u};
_46 = (frost$core$Int) {18446744073709551615u};
_47 = (frost$core$Bit) {true};
_48 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_44, _45, _46, _47);
_49 = _48.start;
*(&local2) = _49;
_51 = _48.end;
_52 = _48.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1028:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_55 = _52.value;
_56 = -_55;
_57 = (frost$core$Int) {_56};
_59 = _48.inclusive;
_60 = _59.value;
_61 = (frost$core$Int) {0u};
_62 = _52.value;
_63 = _61.value;
_64 = _62 >= _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block10; else goto block11;
block10:;
if (_60) goto block12; else goto block13;
block12:;
_69 = _49.value;
_70 = _51.value;
_71 = _69 <= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block7; else goto block8;
block13:;
_75 = _49.value;
_76 = _51.value;
_77 = _75 < _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block7; else goto block8;
block11:;
if (_60) goto block14; else goto block15;
block14:;
_82 = _49.value;
_83 = _51.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block7; else goto block8;
block15:;
_88 = _49.value;
_89 = _51.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1029
_95 = (frost$core$Int) {0u};
_96 = &param1->_length;
_97 = *_96;
_98 = (frost$core$Bit) {false};
_99 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_95, _97, _98);
_100 = _99.min;
*(&local3) = _100;
_102 = _99.max;
_103 = _99.inclusive;
_104 = _103.value;
_105 = (frost$core$Int) {1u};
if (_104) goto block19; else goto block20;
block19:;
_107 = _100.value;
_108 = _102.value;
_109 = _107 <= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block16; else goto block17;
block20:;
_113 = _100.value;
_114 = _102.value;
_115 = _113 < _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1030
_120 = &param0->data;
_121 = *_120;
_122 = _121.value;
_123 = *(&local2);
_124 = *(&local3);
_125 = _123.value;
_126 = _124.value;
_127 = _125 + _126;
_128 = (frost$core$Int) {_127};
_129 = frost$core$Int64$init$frost$core$Int(_128);
_130 = _129.value;
_131 = ((frost$core$Char8*)_122)[_130];
_132 = &param1->data;
_133 = *_132;
_134 = _133.value;
_135 = *(&local3);
_136 = frost$core$Int64$init$frost$core$Int(_135);
_137 = _136.value;
_138 = ((frost$core$Char8*)_134)[_137];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:1030:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_141 = _131.value;
_142 = _138.value;
_143 = _141 != _142;
_144 = (frost$core$Bit) {_143};
_146 = _144.value;
if (_146) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1031
_187 = *(&local2);
if (_66) goto block29; else goto block30;
block22:;
_151 = *(&local3);
_152 = _102.value;
_153 = _151.value;
_154 = _152 - _153;
_155 = (frost$core$Int) {_154};
if (_104) goto block25; else goto block26;
block25:;
_157 = _155.value;
_158 = _105.value;
_159 = _157 >= _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block24; else goto block17;
block26:;
_163 = _155.value;
_164 = _105.value;
_165 = _163 > _164;
_166 = (frost$core$Bit) {_165};
_167 = _166.value;
if (_167) goto block24; else goto block17;
block24:;
_169 = _151.value;
_170 = _105.value;
_171 = _169 + _170;
_172 = (frost$core$Int) {_171};
*(&local3) = _172;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1034
_176 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1034:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_179 = &(&local5)->value;
*_179 = _176;
_181 = *(&local5);
*(&local4) = _181;
_184 = *(&local4);
_185 = ((frost$core$String$Index$nullable) { _184, true });
return _185;
block29:;
_189 = _51.value;
_190 = _187.value;
_191 = _189 - _190;
_192 = (frost$core$Int) {_191};
if (_60) goto block31; else goto block32;
block31:;
_194 = _192.value;
_195 = _52.value;
_196 = _194 >= _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block28; else goto block8;
block32:;
_200 = _192.value;
_201 = _52.value;
_202 = _200 > _201;
_203 = (frost$core$Bit) {_202};
_204 = _203.value;
if (_204) goto block28; else goto block8;
block30:;
_206 = _187.value;
_207 = _51.value;
_208 = _206 - _207;
_209 = (frost$core$Int) {_208};
if (_60) goto block33; else goto block34;
block33:;
_211 = _209.value;
_212 = _57.value;
_213 = _211 >= _212;
_214 = (frost$core$Bit) {_213};
_215 = _214.value;
if (_215) goto block28; else goto block8;
block34:;
_217 = _209.value;
_218 = _57.value;
_219 = _217 > _218;
_220 = (frost$core$Bit) {_219};
_221 = _220.value;
if (_221) goto block28; else goto block8;
block28:;
_223 = _187.value;
_224 = _52.value;
_225 = _223 + _224;
_226 = (frost$core$Int) {_225};
*(&local2) = _226;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Matcher* _1;
frost$core$Bit _2;
frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
_1 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Matcher$matches$R$frost$core$Bit(&_2, _1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_3);
return _2;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Matcher* _1;
frost$core$Bit _2;
frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1058
_1 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
_2 = frost$core$Matcher$find$R$frost$core$Bit(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_3);
return _2;

}
frost$collections$Array* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$Q$GT$Q(void* rawSelf, frost$core$RegularExpression* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Matcher* _1;
frost$core$Object* _3;
frost$core$Matcher* _5;
frost$core$Object* _6;
frost$core$Object* _9;
frost$core$Matcher* _12;
frost$core$Bit _13;
bool _14;
frost$collections$Array* _17;
frost$core$Object* _20;
frost$collections$Array* _22;
frost$core$Object* _23;
frost$core$Object* _26;
frost$core$Int _29;
frost$core$Matcher* _30;
frost$core$Int _31;
frost$core$Bit _32;
frost$core$Range$LTfrost$core$Int$GT _33;
frost$core$Int _34;
frost$core$Int _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _39;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$collections$Array* _54;
frost$core$Matcher* _55;
frost$core$Int _56;
frost$core$String* _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$collections$Array* _88;
frost$collections$Array* _89;
frost$core$Object* _90;
frost$collections$Array* _92;
frost$core$Object* _93;
frost$core$Matcher* _96;
frost$core$Object* _97;
frost$core$Object* _102;
frost$core$Matcher* _104;
frost$core$Object* _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
_1 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = *(&local0);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
*(&local0) = _1;
_9 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_9);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
_12 = *(&local0);
frost$core$Matcher$matches$R$frost$core$Bit(&_13, _12);
_14 = _13.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
_17 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_17);
*(&local1) = ((frost$collections$Array*) NULL);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local1);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local1) = _17;
_26 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
_29 = (frost$core$Int) {1u};
_30 = *(&local0);
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_31, _30);
_32 = (frost$core$Bit) {false};
_33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_29, _31, _32);
_34 = _33.min;
*(&local2) = _34;
_36 = _33.max;
_37 = _33.inclusive;
_38 = _37.value;
_39 = (frost$core$Int) {1u};
if (_38) goto block6; else goto block7;
block6:;
_41 = _34.value;
_42 = _36.value;
_43 = _41 <= _42;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block3; else goto block4;
block7:;
_47 = _34.value;
_48 = _36.value;
_49 = _47 < _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
_54 = *(&local1);
_55 = *(&local0);
_56 = *(&local2);
_57 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_55, _56);
_58 = ((frost$core$Object*) _57);
frost$collections$Array$add$frost$collections$Array$T(_54, _58);
_60 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_63 = *(&local2);
_64 = _36.value;
_65 = _63.value;
_66 = _64 - _65;
_67 = (frost$core$Int) {_66};
if (_38) goto block9; else goto block10;
block9:;
_69 = _67.value;
_70 = _39.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block8; else goto block4;
block10:;
_75 = _67.value;
_76 = _39.value;
_77 = _75 > _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block8; else goto block4;
block8:;
_81 = _63.value;
_82 = _39.value;
_83 = _81 + _82;
_84 = (frost$core$Int) {_83};
*(&local2) = _84;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
_88 = *(&local1);
_89 = _88;
_90 = ((frost$core$Object*) _89);
frost$core$Frost$ref$frost$core$Object$Q(_90);
_92 = *(&local1);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local1) = ((frost$collections$Array*) NULL);
_96 = *(&local0);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local0) = ((frost$core$Matcher*) NULL);
return _89;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
_102 = ((frost$core$Object*) ((frost$collections$Array*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$Array*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1, frost$core$String* param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index$nullable local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Bit _1;
bool _2;
frost$core$Object* _5;
frost$core$MutableString* _9;
frost$core$Object* _12;
frost$core$MutableString* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Int _23;
frost$core$Int* _26;
frost$core$String$Index _28;
frost$core$String$Index _31;
frost$core$String$Index _37;
frost$core$String$Index$nullable _38;
frost$core$String$Index$nullable _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$MutableString* _47;
frost$core$String$Index _48;
frost$core$String$Index$nullable _49;
frost$core$Bit _50;
frost$core$Range$LTfrost$core$String$Index$Q$GT _51;
frost$core$String* _52;
frost$core$Object* _54;
frost$core$MutableString* _107;
frost$core$String* _108;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$MutableString* _113;
frost$core$Object* _114;
frost$core$MutableString* _59;
frost$core$String$Index _60;
frost$core$String$Index$nullable _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$core$Int _66;
frost$core$String$Index _69;
frost$core$Bit _70;
frost$core$Range$LTfrost$core$String$Index$GT _71;
frost$core$String* _72;
frost$core$Object* _74;
frost$core$MutableString* _77;
frost$core$String$Index$nullable _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _85;
frost$core$String$Index _88;
frost$core$Int _89;
frost$core$Int* _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int* _98;
frost$core$String$Index _100;
frost$core$String$Index _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1091
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s85);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1092
_5 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_5);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1094
_9 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_9);
*(&local0) = ((frost$core$MutableString*) NULL);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _9;
_18 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1095
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1095:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_23 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_26 = &(&local2)->value;
*_26 = _23;
_28 = *(&local2);
*(&local1) = _28;
_31 = *(&local1);
*(&local3) = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1096
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1097
_37 = *(&local3);
_38 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _37);
*(&local4) = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1098
_41 = *(&local4);
_42 = !_41.nonnull;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1099
_47 = *(&local0);
_48 = *(&local3);
_49 = ((frost$core$String$Index$nullable) { _48, true });
_50 = (frost$core$Bit) {false};
_51 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_49, ((frost$core$String$Index$nullable) { .nonnull = false }), _50);
_52 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _51);
frost$core$MutableString$append$frost$core$String(_47, _52);
_54 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_54);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1100
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1106
_107 = *(&local0);
_108 = frost$core$MutableString$finish$R$frost$core$String(_107);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = *(&local0);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local0) = ((frost$core$MutableString*) NULL);
return _108;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1102
_59 = *(&local0);
_60 = *(&local3);
_61 = *(&local4);
_62 = _61.nonnull;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block9; else goto block10;
block10:;
_66 = (frost$core$Int) {1102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, _66, &$s87);
abort(); // unreachable
block9:;
_69 = ((frost$core$String$Index) _61.value);
_70 = (frost$core$Bit) {false};
_71 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_60, _69, _70);
_72 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _71);
frost$core$MutableString$append$frost$core$String(_59, _72);
_74 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1103
_77 = *(&local0);
frost$core$MutableString$append$frost$core$String(_77, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1104
_80 = *(&local4);
_81 = _80.nonnull;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block11; else goto block12;
block12:;
_85 = (frost$core$Int) {1104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s88, _85, &$s89);
abort(); // unreachable
block11:;
_88 = ((frost$core$String$Index) _80.value);
_89 = _88.value;
_90 = &param1->_length;
_91 = *_90;
_92 = _89.value;
_93 = _91.value;
_94 = _92 + _93;
_95 = (frost$core$Int) {_94};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1104:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_98 = &(&local6)->value;
*_98 = _95;
_100 = *(&local6);
*(&local5) = _100;
_103 = *(&local5);
*(&local3) = _103;
goto block5;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* param1, frost$core$String* param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Bit _1;
frost$core$String* _2;
frost$core$Object* _3;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_1 = (frost$core$Bit) {true};
_2 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, _1);
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return _2;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Matcher* _13;
frost$core$Object* _15;
frost$core$Matcher* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Matcher* _25;
frost$core$Bit _26;
bool _27;
frost$core$Matcher* _30;
frost$core$MutableString* _31;
frost$core$Matcher* _35;
frost$core$MutableString* _36;
frost$core$String** _39;
frost$core$String* _40;
frost$core$String$Index* _41;
frost$core$String$Index _42;
frost$core$String$Index$nullable _43;
frost$core$Bit _44;
frost$core$Range$LTfrost$core$String$Index$Q$GT _45;
frost$core$String* _46;
frost$core$Object* _48;
frost$core$MutableString* _52;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Matcher* _58;
frost$core$Object* _59;
frost$core$MutableString* _62;
frost$core$Object* _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1125
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1126
_13 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
_15 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local1);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local1) = _13;
_21 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1127
goto block1;
block1:;
_25 = *(&local1);
_26 = frost$core$Matcher$find$R$frost$core$Bit(_25);
_27 = _26.value;
if (_27) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1128
_30 = *(&local1);
_31 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_30, _31, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1130
_35 = *(&local1);
_36 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1130:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_39 = &_35->searchText;
_40 = *_39;
_41 = &_35->replacementIndex;
_42 = *_41;
_43 = ((frost$core$String$Index$nullable) { _42, true });
_44 = (frost$core$Bit) {false};
_45 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_43, ((frost$core$String$Index$nullable) { .nonnull = false }), _44);
_46 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_40, _45);
frost$core$MutableString$append$frost$core$String(_36, _46);
_48 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1131
_52 = *(&local0);
_53 = frost$core$MutableString$finish$R$frost$core$String(_52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = ((frost$core$Matcher*) NULL);
_62 = *(&local0);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local0) = ((frost$core$MutableString*) NULL);
return _53;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Matcher* _13;
frost$core$Object* _15;
frost$core$Matcher* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Matcher* _25;
frost$core$Bit _26;
bool _27;
frost$core$Matcher* _30;
frost$core$MutableString* _31;
frost$core$Matcher* _32;
frost$core$Int _33;
frost$core$String* _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
frost$core$String* _42;
frost$core$MutableMethod* _43;
int64_t* _44;
int64_t _45;
frost$core$Object** _46;
frost$core$Object* _47;
bool _48;
frost$unsafe$Pointer _50;
frost$core$Object* _51;
frost$unsafe$Pointer _54;
frost$core$Object* _55;
frost$core$Object* _58;
$fn90 _59;
frost$core$String* _60;
frost$core$Bit _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Matcher* _71;
frost$core$MutableString* _72;
frost$core$String** _75;
frost$core$String* _76;
frost$core$String$Index* _77;
frost$core$String$Index _78;
frost$core$String$Index$nullable _79;
frost$core$Bit _80;
frost$core$Range$LTfrost$core$String$Index$Q$GT _81;
frost$core$String* _82;
frost$core$Object* _84;
frost$core$MutableString* _88;
frost$core$Object* _89;
$fn91 _90;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Matcher* _96;
frost$core$Object* _97;
frost$core$MutableString* _100;
frost$core$Object* _101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1152
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1153
_13 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
_15 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local1);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local1) = _13;
_21 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1154
goto block1;
block1:;
_25 = *(&local1);
_26 = frost$core$Matcher$find$R$frost$core$Bit(_25);
_27 = _26.value;
if (_27) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1155
_30 = *(&local1);
_31 = *(&local0);
_32 = *(&local1);
_33 = (frost$core$Int) {0u};
_34 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_32, _33);
_35 = _34 != NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block4; else goto block5;
block5:;
_39 = (frost$core$Int) {1155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _39, &$s93);
abort(); // unreachable
block4:;
_42 = _34;
_43 = param2;
_44 = &_43->pointer;
_45 = *_44;
_46 = &_43->target;
_47 = *_46;
_48 = _47 != ((frost$core$Object*) NULL);
if (_48) goto block6; else goto block7;
block7:;
_50 = (frost$unsafe$Pointer) {_45};
_51 = (($fn94) _50.value)(_42);
*(&local2) = _51;
goto block8;
block6:;
_54 = (frost$unsafe$Pointer) {_45};
_55 = (($fn95) _54.value)(_47, _42);
*(&local2) = _55;
goto block8;
block8:;
_58 = *(&local2);
_59 = ($fn96) _58->$class->vtable[0];
_60 = _59(_58);
_61 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_30, _31, _60, _61);
_63 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_67);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1157
_71 = *(&local1);
_72 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1157:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_75 = &_71->searchText;
_76 = *_75;
_77 = &_71->replacementIndex;
_78 = *_77;
_79 = ((frost$core$String$Index$nullable) { _78, true });
_80 = (frost$core$Bit) {false};
_81 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_79, ((frost$core$String$Index$nullable) { .nonnull = false }), _80);
_82 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_76, _81);
frost$core$MutableString$append$frost$core$String(_72, _82);
_84 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1158
_88 = *(&local0);
_89 = ((frost$core$Object*) _88);
_90 = ($fn97) _89->$class->vtable[0];
_91 = _90(_89);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local1);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local1) = ((frost$core$Matcher*) NULL);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = ((frost$core$MutableString*) NULL);
return _91;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(void* rawSelf, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$Object* local4 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Matcher* _13;
frost$core$Object* _15;
frost$core$Matcher* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Matcher* _25;
frost$core$Bit _26;
bool _27;
frost$collections$Array* _30;
frost$core$Object* _33;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$Int _42;
frost$core$Matcher* _43;
frost$core$Int _44;
frost$core$Bit _45;
frost$core$Range$LTfrost$core$Int$GT _46;
frost$core$Int _47;
frost$core$Int _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _52;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$collections$Array* _67;
frost$core$Matcher* _68;
frost$core$Int _69;
frost$core$String* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$Matcher* _101;
frost$core$MutableString* _102;
frost$collections$Array* _103;
frost$collections$ListView* _104;
frost$core$MutableMethod* _105;
int64_t* _106;
int64_t _107;
frost$core$Object** _108;
frost$core$Object* _109;
bool _110;
frost$unsafe$Pointer _112;
frost$core$Object* _113;
frost$unsafe$Pointer _116;
frost$core$Object* _117;
frost$core$Object* _120;
$fn98 _121;
frost$core$String* _122;
frost$core$Bit _123;
frost$core$Object* _125;
frost$core$Object* _127;
frost$collections$Array* _129;
frost$core$Object* _130;
frost$core$Matcher* _135;
frost$core$MutableString* _136;
frost$core$String** _139;
frost$core$String* _140;
frost$core$String$Index* _141;
frost$core$String$Index _142;
frost$core$String$Index$nullable _143;
frost$core$Bit _144;
frost$core$Range$LTfrost$core$String$Index$Q$GT _145;
frost$core$String* _146;
frost$core$Object* _148;
frost$core$MutableString* _152;
frost$core$Object* _153;
$fn99 _154;
frost$core$String* _155;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$Matcher* _160;
frost$core$Object* _161;
frost$core$MutableString* _164;
frost$core$Object* _165;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1172
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1173
_13 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
_15 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local1);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local1) = _13;
_21 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1174
goto block1;
block1:;
_25 = *(&local1);
_26 = frost$core$Matcher$find$R$frost$core$Bit(_25);
_27 = _26.value;
if (_27) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1175
_30 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_30);
*(&local2) = ((frost$collections$Array*) NULL);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local2);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local2) = _30;
_39 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1176
_42 = (frost$core$Int) {0u};
_43 = *(&local1);
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_44, _43);
_45 = (frost$core$Bit) {false};
_46 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_42, _44, _45);
_47 = _46.min;
*(&local3) = _47;
_49 = _46.max;
_50 = _46.inclusive;
_51 = _50.value;
_52 = (frost$core$Int) {1u};
if (_51) goto block7; else goto block8;
block7:;
_54 = _47.value;
_55 = _49.value;
_56 = _54 <= _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block5;
block8:;
_60 = _47.value;
_61 = _49.value;
_62 = _60 < _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1177
_67 = *(&local2);
_68 = *(&local1);
_69 = *(&local3);
_70 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_68, _69);
_71 = ((frost$core$Object*) _70);
frost$collections$Array$add$frost$collections$Array$T(_67, _71);
_73 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_76 = *(&local3);
_77 = _49.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
if (_51) goto block10; else goto block11;
block10:;
_82 = _80.value;
_83 = _52.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block9; else goto block5;
block11:;
_88 = _80.value;
_89 = _52.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block9; else goto block5;
block9:;
_94 = _76.value;
_95 = _52.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
*(&local3) = _97;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1179
_101 = *(&local1);
_102 = *(&local0);
_103 = *(&local2);
_104 = ((frost$collections$ListView*) _103);
_105 = param2;
_106 = &_105->pointer;
_107 = *_106;
_108 = &_105->target;
_109 = *_108;
_110 = _109 != ((frost$core$Object*) NULL);
if (_110) goto block12; else goto block13;
block13:;
_112 = (frost$unsafe$Pointer) {_107};
_113 = (($fn100) _112.value)(_104);
*(&local4) = _113;
goto block14;
block12:;
_116 = (frost$unsafe$Pointer) {_107};
_117 = (($fn101) _116.value)(_109, _104);
*(&local4) = _117;
goto block14;
block14:;
_120 = *(&local4);
_121 = ($fn102) _120->$class->vtable[0];
_122 = _121(_120);
_123 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_101, _102, _122, _123);
_125 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = _120;
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = *(&local2);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1181
_135 = *(&local1);
_136 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1181:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_139 = &_135->searchText;
_140 = *_139;
_141 = &_135->replacementIndex;
_142 = *_141;
_143 = ((frost$core$String$Index$nullable) { _142, true });
_144 = (frost$core$Bit) {false};
_145 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_143, ((frost$core$String$Index$nullable) { .nonnull = false }), _144);
_146 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_140, _145);
frost$core$MutableString$append$frost$core$String(_136, _146);
_148 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1182
_152 = *(&local0);
_153 = ((frost$core$Object*) _152);
_154 = ($fn103) _153->$class->vtable[0];
_155 = _154(_153);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = *(&local1);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local1) = ((frost$core$Matcher*) NULL);
_164 = *(&local0);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local0) = ((frost$core$MutableString*) NULL);
return _155;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Bit _1;
frost$core$String$MatchIterator* _4;
frost$collections$Iterator* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
_4 = (frost$core$String$MatchIterator*) frostObjectAlloc(sizeof(frost$core$String$MatchIterator), (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(_4, param0, param1, _1);
_6 = ((frost$collections$Iterator*) _4);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _6;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(void* rawSelf, frost$core$String* param1, frost$core$Bit param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$MatchIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
_1 = (frost$core$String$MatchIterator*) frostObjectAlloc(sizeof(frost$core$String$MatchIterator), (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(_1, param0, param1, param2);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(void* rawSelf, frost$core$RegularExpression* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Bit _1;
frost$core$String$RegexMatchIterator* _4;
frost$collections$Iterator* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1194
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.RegularExpression, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Match> from String.frost:1194:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
_4 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(sizeof(frost$core$String$RegexMatchIterator), (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(_4, param0, param1, _1);
_6 = ((frost$collections$Iterator*) _4);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _6;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(void* rawSelf, frost$core$RegularExpression* param1, frost$core$Bit param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$RegexMatchIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
_1 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(sizeof(frost$core$String$RegexMatchIterator), (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(_1, param0, param1, param2);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Int _1;
frost$core$Int* _4;
frost$core$String$Index _6;
frost$core$String$Index _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_1 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_4 = &(&local1)->value;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
return _9;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _5;
frost$core$String$Index _7;
frost$core$String$Index _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_1 = &param0->_length;
_2 = *_1;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_5 = &(&local1)->value;
*_5 = _2;
_7 = *(&local1);
*(&local0) = _7;
_10 = *(&local0);
return _10;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$UInt8 local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$unsafe$Pointer* _14;
frost$unsafe$Pointer _15;
int64_t _16;
frost$core$Int _17;
frost$core$Int64 _18;
int64_t _19;
frost$core$Char8 _20;
uint8_t _23;
frost$core$UInt8 _24;
frost$core$UInt8 _28;
frost$core$UInt8 _29;
uint8_t _30;
uint8_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _37;
frost$core$Int _38;
int64_t _39;
int64_t _40;
int64_t _41;
frost$core$Int _42;
frost$core$Int* _45;
frost$core$String$Index _47;
frost$core$String$Index _50;
frost$core$UInt8 _53;
frost$core$UInt8 _54;
uint8_t _55;
uint8_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Int* _70;
frost$core$String$Index _72;
frost$core$String$Index _75;
frost$core$UInt8 _78;
frost$core$UInt8 _79;
uint8_t _80;
uint8_t _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$Int _87;
frost$core$Int _88;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
frost$core$Int* _95;
frost$core$String$Index _97;
frost$core$String$Index _100;
frost$core$Int _103;
frost$core$Int _104;
int64_t _105;
int64_t _106;
int64_t _107;
frost$core$Int _108;
frost$core$Int* _111;
frost$core$String$Index _113;
frost$core$String$Index _116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1222
_1 = param1.value;
_2 = &param0->_length;
_3 = *_2;
_4 = _1.value;
_5 = _3.value;
_6 = _4 < _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {1222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s104, _10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1223
_14 = &param0->data;
_15 = *_14;
_16 = _15.value;
_17 = param1.value;
_18 = frost$core$Int64$init$frost$core$Int(_17);
_19 = _18.value;
_20 = ((frost$core$Char8*)_16)[_19];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:1223:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_23 = _20.value;
_24 = (frost$core$UInt8) {_23};
*(&local0) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1224
_28 = *(&local0);
_29 = (frost$core$UInt8) {240u};
_30 = _28.value;
_31 = _29.value;
_32 = _30 >= _31;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1225
_37 = param1.value;
_38 = (frost$core$Int) {4u};
_39 = _37.value;
_40 = _38.value;
_41 = _39 + _40;
_42 = (frost$core$Int) {_41};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1225:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_45 = &(&local2)->value;
*_45 = _42;
_47 = *(&local2);
*(&local1) = _47;
_50 = *(&local1);
return _50;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1227
_53 = *(&local0);
_54 = (frost$core$UInt8) {224u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 >= _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1228
_62 = param1.value;
_63 = (frost$core$Int) {3u};
_64 = _62.value;
_65 = _63.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1228:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_70 = &(&local4)->value;
*_70 = _67;
_72 = *(&local4);
*(&local3) = _72;
_75 = *(&local3);
return _75;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1230
_78 = *(&local0);
_79 = (frost$core$UInt8) {192u};
_80 = _78.value;
_81 = _79.value;
_82 = _80 >= _81;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1231
_87 = param1.value;
_88 = (frost$core$Int) {2u};
_89 = _87.value;
_90 = _88.value;
_91 = _89 + _90;
_92 = (frost$core$Int) {_91};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1231:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_95 = &(&local6)->value;
*_95 = _92;
_97 = *(&local6);
*(&local5) = _97;
_100 = *(&local5);
return _100;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1233
_103 = param1.value;
_104 = (frost$core$Int) {1u};
_105 = _103.value;
_106 = _104.value;
_107 = _105 + _106;
_108 = (frost$core$Int) {_107};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1233:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_111 = &(&local8)->value;
*_111 = _108;
_113 = *(&local8);
*(&local7) = _113;
_116 = *(&local7);
return _116;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
frost$core$Int _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
int64_t _17;
frost$core$Int _18;
frost$unsafe$Pointer* _22;
frost$unsafe$Pointer _23;
int64_t _24;
frost$core$Int _25;
frost$core$Int64 _26;
int64_t _27;
frost$core$Char8 _28;
uint8_t _29;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$unsafe$Pointer* _36;
frost$unsafe$Pointer _37;
int64_t _38;
frost$core$Int _39;
frost$core$Int64 _40;
int64_t _41;
frost$core$Char8 _42;
uint8_t _43;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
frost$core$Int _60;
frost$core$Int* _63;
frost$core$String$Index _65;
frost$core$String$Index _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1243
_1 = param1.value;
_2 = (frost$core$Int) {0u};
_3 = _1.value;
_4 = _2.value;
_5 = _3 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block2:;
_9 = (frost$core$Int) {1243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s105, _9);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1244
_13 = param1.value;
_14 = (frost$core$Int) {1u};
_15 = _13.value;
_16 = _14.value;
_17 = _15 - _16;
_18 = (frost$core$Int) {_17};
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1245
goto block3;
block3:;
_22 = &param0->data;
_23 = *_22;
_24 = _23.value;
_25 = *(&local0);
_26 = frost$core$Int64$init$frost$core$Int(_25);
_27 = _26.value;
_28 = ((frost$core$Char8*)_24)[_27];
_29 = _28.value;
_30 = ((int64_t) _29);
_31 = _30 & 255u;
_32 = _31 >= 128u;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block6; else goto block5;
block6:;
_36 = &param0->data;
_37 = *_36;
_38 = _37.value;
_39 = *(&local0);
_40 = frost$core$Int64$init$frost$core$Int(_39);
_41 = _40.value;
_42 = ((frost$core$Char8*)_38)[_41];
_43 = _42.value;
_44 = ((int64_t) _43);
_45 = _44 & 255u;
_46 = _45 < 192u;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1247
_51 = *(&local0);
_52 = (frost$core$Int) {1u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 - _54;
_56 = (frost$core$Int) {_55};
*(&local0) = _56;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1249
_60 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1249:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_63 = &(&local2)->value;
*_63 = _60;
_65 = *(&local2);
*(&local1) = _65;
_68 = *(&local1);
return _68;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(void* rawSelf, frost$core$String$Index param1, frost$core$Int param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$String$Index local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _11;
frost$core$Bit _12;
frost$core$Range$LTfrost$core$Int$GT _13;
frost$core$Int _14;
frost$core$Int _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _19;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$String$Index _34;
frost$core$String$Index _35;
frost$core$Int _38;
int64_t _39;
int64_t _40;
int64_t _41;
frost$core$Int _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _54;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$core$Int _65;
frost$core$Int _66;
frost$core$Bit _67;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _68;
frost$core$Int _69;
frost$core$Int _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
frost$core$Int _77;
frost$core$Bit _79;
bool _80;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _99;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _106;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$String$Index _115;
frost$core$String$Index _116;
frost$core$Int _119;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _147;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
int64_t _155;
int64_t _156;
int64_t _157;
frost$core$Int _158;
frost$core$String$Index _163;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1259
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1260
_3 = (frost$core$Int) {0u};
_4 = param2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1261
_11 = (frost$core$Int) {0u};
_12 = (frost$core$Bit) {false};
_13 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_11, param2, _12);
_14 = _13.min;
*(&local1) = _14;
_16 = _13.max;
_17 = _13.inclusive;
_18 = _17.value;
_19 = (frost$core$Int) {1u};
if (_18) goto block7; else goto block8;
block7:;
_21 = _14.value;
_22 = _16.value;
_23 = _21 <= _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block4; else goto block5;
block8:;
_27 = _14.value;
_28 = _16.value;
_29 = _27 < _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1262
_34 = *(&local0);
_35 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _34);
*(&local0) = _35;
_38 = *(&local1);
_39 = _16.value;
_40 = _38.value;
_41 = _39 - _40;
_42 = (frost$core$Int) {_41};
if (_18) goto block10; else goto block11;
block10:;
_44 = _42.value;
_45 = _19.value;
_46 = _44 >= _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block9; else goto block5;
block11:;
_50 = _42.value;
_51 = _19.value;
_52 = _50 > _51;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block9; else goto block5;
block9:;
_56 = _38.value;
_57 = _19.value;
_58 = _56 + _57;
_59 = (frost$core$Int) {_58};
*(&local1) = _59;
goto block4;
block5:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1266
_65 = (frost$core$Int) {0u};
_66 = (frost$core$Int) {18446744073709551615u};
_67 = (frost$core$Bit) {false};
_68 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_65, param2, _66, _67);
_69 = _68.start;
*(&local2) = _69;
_71 = _68.end;
_72 = _68.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1266:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_75 = _72.value;
_76 = -_75;
_77 = (frost$core$Int) {_76};
_79 = _68.inclusive;
_80 = _79.value;
_81 = (frost$core$Int) {0u};
_82 = _72.value;
_83 = _81.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block16; else goto block17;
block16:;
if (_80) goto block18; else goto block19;
block18:;
_89 = _69.value;
_90 = _71.value;
_91 = _89 <= _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block13; else goto block14;
block19:;
_95 = _69.value;
_96 = _71.value;
_97 = _95 < _96;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block13; else goto block14;
block17:;
if (_80) goto block20; else goto block21;
block20:;
_102 = _69.value;
_103 = _71.value;
_104 = _102 >= _103;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block13; else goto block14;
block21:;
_108 = _69.value;
_109 = _71.value;
_110 = _108 > _109;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1267
_115 = *(&local0);
_116 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, _115);
*(&local0) = _116;
_119 = *(&local2);
if (_86) goto block23; else goto block24;
block23:;
_121 = _71.value;
_122 = _119.value;
_123 = _121 - _122;
_124 = (frost$core$Int) {_123};
if (_80) goto block25; else goto block26;
block25:;
_126 = _124.value;
_127 = _72.value;
_128 = _126 >= _127;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block22; else goto block14;
block26:;
_132 = _124.value;
_133 = _72.value;
_134 = _132 > _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block22; else goto block14;
block24:;
_138 = _119.value;
_139 = _71.value;
_140 = _138 - _139;
_141 = (frost$core$Int) {_140};
if (_80) goto block27; else goto block28;
block27:;
_143 = _141.value;
_144 = _77.value;
_145 = _143 >= _144;
_146 = (frost$core$Bit) {_145};
_147 = _146.value;
if (_147) goto block22; else goto block14;
block28:;
_149 = _141.value;
_150 = _77.value;
_151 = _149 > _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block22; else goto block14;
block22:;
_155 = _119.value;
_156 = _72.value;
_157 = _155 + _156;
_158 = (frost$core$Int) {_157};
*(&local2) = _158;
goto block13;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1270
_163 = *(&local0);
return _163;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int32 _1;
frost$core$Char32 _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1283
_1 = (frost$core$Int32) {32u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
_3 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, _2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$Char32 param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterable* _3;
$fn106 _4;
frost$collections$Iterator* _5;
$fn107 _6;
frost$core$Int _7;
frost$core$Object* _8;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _18;
frost$collections$Iterable* _24;
$fn108 _25;
frost$collections$Iterator* _26;
$fn109 _27;
frost$core$Int _28;
frost$core$Object* _29;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$MutableString* _38;
frost$core$Object* _41;
frost$core$MutableString* _43;
frost$core$Object* _44;
frost$core$Object* _47;
frost$core$Int _50;
frost$core$Bit _51;
frost$core$Range$LTfrost$core$Int$GT _52;
frost$core$Int _53;
frost$core$Int _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _58;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$MutableString* _73;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$MutableString* _101;
frost$core$String* _102;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$MutableString* _107;
frost$core$Object* _108;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1297
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1297:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp110 = _3->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp110 = $tmp110->next;
}
_4 = $tmp110->methods[0];
_5 = _4(_3);
ITable* $tmp111 = _5->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
_6 = $tmp111->methods[2];
_7 = _6(_5);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_11 = _7.value;
_12 = param1.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1298
_18 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_18);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1300
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1300:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_24 = ((frost$collections$Iterable*) param0);
ITable* $tmp112 = _24->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp112 = $tmp112->next;
}
_25 = $tmp112->methods[0];
_26 = _25(_24);
ITable* $tmp113 = _26->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
_27 = $tmp113->methods[2];
_28 = _27(_26);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = param1.value;
_33 = _28.value;
_34 = _32 - _33;
_35 = (frost$core$Int) {_34};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1300:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
_38 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_38);
*(&local0) = ((frost$core$MutableString*) NULL);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local0);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _38;
_47 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_47);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_50 = (frost$core$Int) {0u};
_51 = (frost$core$Bit) {false};
_52 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_50, _35, _51);
_53 = _52.min;
*(&local1) = _53;
_55 = _52.max;
_56 = _52.inclusive;
_57 = _56.value;
_58 = (frost$core$Int) {1u};
if (_57) goto block9; else goto block10;
block9:;
_60 = _53.value;
_61 = _55.value;
_62 = _60 <= _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block6; else goto block7;
block10:;
_66 = _53.value;
_67 = _55.value;
_68 = _66 < _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_73 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_73, param2);
_76 = *(&local1);
_77 = _55.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
if (_57) goto block12; else goto block13;
block12:;
_82 = _80.value;
_83 = _58.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block11; else goto block7;
block13:;
_88 = _80.value;
_89 = _58.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block11; else goto block7;
block11:;
_94 = _76.value;
_95 = _58.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
*(&local1) = _97;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_101 = *(&local0);
_102 = frost$core$MutableString$finish$R$frost$core$String(_101);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local0);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local0) = ((frost$core$MutableString*) NULL);
_112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, _102);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_117);
return _112;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int32 _1;
frost$core$Char32 _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1313
_1 = (frost$core$Int32) {32u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
_3 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, _2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$Char32 param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterable* _3;
$fn114 _4;
frost$collections$Iterator* _5;
$fn115 _6;
frost$core$Int _7;
frost$core$Object* _8;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _18;
frost$collections$Iterable* _24;
$fn116 _25;
frost$collections$Iterator* _26;
$fn117 _27;
frost$core$Int _28;
frost$core$Object* _29;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$MutableString* _38;
frost$core$Object* _41;
frost$core$MutableString* _43;
frost$core$Object* _44;
frost$core$Object* _47;
frost$core$Int _50;
frost$core$Bit _51;
frost$core$Range$LTfrost$core$Int$GT _52;
frost$core$Int _53;
frost$core$Int _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _58;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$MutableString* _73;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$MutableString* _101;
frost$core$String* _102;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$MutableString* _107;
frost$core$Object* _108;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1327
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1327:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp118 = _3->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp118 = $tmp118->next;
}
_4 = $tmp118->methods[0];
_5 = _4(_3);
ITable* $tmp119 = _5->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
_6 = $tmp119->methods[2];
_7 = _6(_5);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_11 = _7.value;
_12 = param1.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1328
_18 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_18);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1330
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1330:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_24 = ((frost$collections$Iterable*) param0);
ITable* $tmp120 = _24->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp120 = $tmp120->next;
}
_25 = $tmp120->methods[0];
_26 = _25(_24);
ITable* $tmp121 = _26->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp121 = $tmp121->next;
}
_27 = $tmp121->methods[2];
_28 = _27(_26);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = param1.value;
_33 = _28.value;
_34 = _32 - _33;
_35 = (frost$core$Int) {_34};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1330:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
_38 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_38);
*(&local0) = ((frost$core$MutableString*) NULL);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local0);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _38;
_47 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_47);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_50 = (frost$core$Int) {0u};
_51 = (frost$core$Bit) {false};
_52 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_50, _35, _51);
_53 = _52.min;
*(&local1) = _53;
_55 = _52.max;
_56 = _52.inclusive;
_57 = _56.value;
_58 = (frost$core$Int) {1u};
if (_57) goto block9; else goto block10;
block9:;
_60 = _53.value;
_61 = _55.value;
_62 = _60 <= _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block6; else goto block7;
block10:;
_66 = _53.value;
_67 = _55.value;
_68 = _66 < _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_73 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_73, param2);
_76 = *(&local1);
_77 = _55.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
if (_57) goto block12; else goto block13;
block12:;
_82 = _80.value;
_83 = _58.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block11; else goto block7;
block13:;
_88 = _80.value;
_89 = _58.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block11; else goto block7;
block11:;
_94 = _76.value;
_95 = _58.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
*(&local1) = _97;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_101 = *(&local0);
_102 = frost$core$MutableString$finish$R$frost$core$String(_101);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local0);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local0) = ((frost$core$MutableString*) NULL);
_112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_102, param0);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_117);
return _112;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$R$frost$core$String(void* rawSelf, frost$core$Int param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int32 _1;
frost$core$Char32 _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1345
_1 = (frost$core$Int32) {32u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
_3 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, _2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$Char32 param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$MutableString* local3 = NULL;
frost$core$Int local4;
frost$core$MutableString* local5 = NULL;
frost$core$Int local6;
frost$collections$Iterable* _3;
$fn122 _4;
frost$collections$Iterator* _5;
$fn123 _6;
frost$core$Int _7;
frost$core$Object* _8;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _18;
frost$collections$Iterable* _24;
$fn124 _25;
frost$collections$Iterator* _26;
$fn125 _27;
frost$core$Int _28;
frost$core$Object* _29;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$Int _38;
frost$core$Int _39;
int64_t _40;
int64_t _41;
int64_t _42;
frost$core$Int _43;
frost$core$Int _46;
frost$core$Int _47;
int64_t _48;
int64_t _49;
int64_t _50;
frost$core$Int _51;
frost$core$Int _54;
frost$core$MutableString* _57;
frost$core$Object* _60;
frost$core$MutableString* _62;
frost$core$Object* _63;
frost$core$Object* _66;
frost$core$Int _69;
frost$core$Bit _70;
frost$core$Range$LTfrost$core$Int$GT _71;
frost$core$Int _72;
frost$core$Int _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _77;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$MutableString* _92;
frost$core$Int _95;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
int64_t _115;
frost$core$Int _116;
frost$core$MutableString* _120;
frost$core$String* _121;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$MutableString* _126;
frost$core$Object* _127;
frost$core$String* _131;
frost$core$Int _132;
frost$core$MutableString* _135;
frost$core$Object* _138;
frost$core$MutableString* _140;
frost$core$Object* _141;
frost$core$Object* _144;
frost$core$Int _147;
frost$core$Bit _148;
frost$core$Range$LTfrost$core$Int$GT _149;
frost$core$Int _150;
frost$core$Int _152;
frost$core$Bit _153;
bool _154;
frost$core$Int _155;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
int64_t _163;
int64_t _164;
bool _165;
frost$core$Bit _166;
bool _167;
frost$core$MutableString* _170;
frost$core$Int _173;
int64_t _174;
int64_t _175;
int64_t _176;
frost$core$Int _177;
int64_t _179;
int64_t _180;
bool _181;
frost$core$Bit _182;
bool _183;
int64_t _185;
int64_t _186;
bool _187;
frost$core$Bit _188;
bool _189;
int64_t _191;
int64_t _192;
int64_t _193;
frost$core$Int _194;
frost$core$MutableString* _198;
frost$core$String* _199;
frost$core$Object* _200;
frost$core$Object* _202;
frost$core$MutableString* _204;
frost$core$Object* _205;
frost$core$String* _209;
frost$core$Object* _210;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$Object* _218;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1361
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1361:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp126 = _3->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp126 = $tmp126->next;
}
_4 = $tmp126->methods[0];
_5 = _4(_3);
ITable* $tmp127 = _5->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
_6 = $tmp127->methods[2];
_7 = _6(_5);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_11 = _7.value;
_12 = param1.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1362
_18 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_18);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1364
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1364:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_24 = ((frost$collections$Iterable*) param0);
ITable* $tmp128 = _24->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
_25 = $tmp128->methods[0];
_26 = _25(_24);
ITable* $tmp129 = _26->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
_27 = $tmp129->methods[2];
_28 = _27(_26);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_32 = param1.value;
_33 = _28.value;
_34 = _32 - _33;
_35 = (frost$core$Int) {_34};
*(&local0) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1365
_38 = *(&local0);
_39 = (frost$core$Int) {2u};
_40 = _38.value;
_41 = _39.value;
_42 = _40 / _41;
_43 = (frost$core$Int) {_42};
*(&local1) = _43;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1366
_46 = *(&local0);
_47 = *(&local1);
_48 = _46.value;
_49 = _47.value;
_50 = _48 - _49;
_51 = (frost$core$Int) {_50};
*(&local2) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1367
_54 = *(&local1);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
_57 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_57);
*(&local3) = ((frost$core$MutableString*) NULL);
_60 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = *(&local3);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local3) = _57;
_66 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_66);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_69 = (frost$core$Int) {0u};
_70 = (frost$core$Bit) {false};
_71 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_69, _54, _70);
_72 = _71.min;
*(&local4) = _72;
_74 = _71.max;
_75 = _71.inclusive;
_76 = _75.value;
_77 = (frost$core$Int) {1u};
if (_76) goto block9; else goto block10;
block9:;
_79 = _72.value;
_80 = _74.value;
_81 = _79 <= _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block6; else goto block7;
block10:;
_85 = _72.value;
_86 = _74.value;
_87 = _85 < _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_92 = *(&local3);
frost$core$MutableString$append$frost$core$Char32(_92, param2);
_95 = *(&local4);
_96 = _74.value;
_97 = _95.value;
_98 = _96 - _97;
_99 = (frost$core$Int) {_98};
if (_76) goto block12; else goto block13;
block12:;
_101 = _99.value;
_102 = _77.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block11; else goto block7;
block13:;
_107 = _99.value;
_108 = _77.value;
_109 = _107 > _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block11; else goto block7;
block11:;
_113 = _95.value;
_114 = _77.value;
_115 = _113 + _114;
_116 = (frost$core$Int) {_115};
*(&local4) = _116;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_120 = *(&local3);
_121 = frost$core$MutableString$finish$R$frost$core$String(_120);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = *(&local3);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local3) = ((frost$core$MutableString*) NULL);
_131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_121, param0);
_132 = *(&local2);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
_135 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_135);
*(&local5) = ((frost$core$MutableString*) NULL);
_138 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = *(&local5);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local5) = _135;
_144 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_144);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_147 = (frost$core$Int) {0u};
_148 = (frost$core$Bit) {false};
_149 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_147, _132, _148);
_150 = _149.min;
*(&local6) = _150;
_152 = _149.max;
_153 = _149.inclusive;
_154 = _153.value;
_155 = (frost$core$Int) {1u};
if (_154) goto block18; else goto block19;
block18:;
_157 = _150.value;
_158 = _152.value;
_159 = _157 <= _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block15; else goto block16;
block19:;
_163 = _150.value;
_164 = _152.value;
_165 = _163 < _164;
_166 = (frost$core$Bit) {_165};
_167 = _166.value;
if (_167) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_170 = *(&local5);
frost$core$MutableString$append$frost$core$Char32(_170, param2);
_173 = *(&local6);
_174 = _152.value;
_175 = _173.value;
_176 = _174 - _175;
_177 = (frost$core$Int) {_176};
if (_154) goto block21; else goto block22;
block21:;
_179 = _177.value;
_180 = _155.value;
_181 = _179 >= _180;
_182 = (frost$core$Bit) {_181};
_183 = _182.value;
if (_183) goto block20; else goto block16;
block22:;
_185 = _177.value;
_186 = _155.value;
_187 = _185 > _186;
_188 = (frost$core$Bit) {_187};
_189 = _188.value;
if (_189) goto block20; else goto block16;
block20:;
_191 = _173.value;
_192 = _155.value;
_193 = _191 + _192;
_194 = (frost$core$Int) {_193};
*(&local6) = _194;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_198 = *(&local5);
_199 = frost$core$MutableString$finish$R$frost$core$String(_198);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$ref$frost$core$Object$Q(_200);
_202 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = *(&local5);
_205 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_205);
*(&local5) = ((frost$core$MutableString*) NULL);
_209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_131, _199);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_212);
_214 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_218);
return _209;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$String* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int64 _1;
int64_t _4;
int64_t _5;
frost$core$Int _6;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_1 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_4 = _1.value;
_5 = ((int64_t) _4);
_6 = (frost$core$Int) {_5};
_8 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, _6);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$String* param1, frost$core$Int param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index$nullable local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int _15;
frost$core$Int* _18;
frost$core$String$Index _20;
frost$core$String$Index _23;
frost$core$Int* _30;
frost$core$Int _31;
frost$core$Int _32;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$String$Index _43;
frost$core$String$Index _44;
frost$core$String$Index$nullable _45;
frost$core$String$Index _50;
frost$core$String$Index$nullable _51;
frost$core$String$Index$nullable _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$collections$Array* _60;
frost$collections$CollectionView* _61;
$fn130 _62;
frost$core$Int _63;
frost$core$Int _64;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int _68;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _76;
frost$collections$Array* _79;
frost$core$String$Index _80;
frost$core$String$Index$nullable _81;
frost$core$Bit _82;
frost$core$Range$LTfrost$core$String$Index$Q$GT _83;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$collections$Array* _138;
frost$core$Object* _139;
frost$collections$Array* _141;
frost$core$Object* _142;
frost$collections$Array* _92;
frost$core$String$Index _93;
frost$core$String$Index$nullable _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Int _99;
frost$core$String$Index _102;
frost$core$Bit _103;
frost$core$Range$LTfrost$core$String$Index$GT _104;
frost$core$String* _105;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$String$Index$nullable _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _116;
frost$core$String$Index _119;
frost$core$Int _120;
frost$core$Int* _121;
frost$core$Int _122;
int64_t _123;
int64_t _124;
int64_t _125;
frost$core$Int _126;
frost$core$Int* _129;
frost$core$String$Index _131;
frost$core$String$Index _134;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1391
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1392
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1392:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_15 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_18 = &(&local2)->value;
*_18 = _15;
_20 = *(&local2);
*(&local1) = _20;
_23 = *(&local1);
*(&local3) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1393
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1394
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1395
_30 = &param1->_length;
_31 = *_30;
_32 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1395:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_35 = _31.value;
_36 = _32.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1396
_43 = *(&local3);
_44 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _43);
_45 = ((frost$core$String$Index$nullable) { _44, true });
*(&local4) = _45;
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1399
_50 = *(&local3);
_51 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _50);
*(&local4) = _51;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1401
_55 = *(&local4);
_56 = !_55.nonnull;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block9; else goto block11;
block11:;
_60 = *(&local0);
_61 = ((frost$collections$CollectionView*) _60);
ITable* $tmp131 = _61->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
_62 = $tmp131->methods[0];
_63 = _62(_61);
_64 = (frost$core$Int) {1u};
_65 = param2.value;
_66 = _64.value;
_67 = _65 - _66;
_68 = (frost$core$Int) {_67};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1401:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_71 = _63.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1402
_79 = *(&local0);
_80 = *(&local3);
_81 = ((frost$core$String$Index$nullable) { _80, true });
_82 = (frost$core$Bit) {false};
_83 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_81, ((frost$core$String$Index$nullable) { .nonnull = false }), _82);
_84 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _83);
_85 = ((frost$core$Object*) _84);
frost$collections$Array$add$frost$collections$Array$T(_79, _85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1403
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1408
_138 = *(&local0);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = *(&local0);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local0) = ((frost$collections$Array*) NULL);
return _138;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1405
_92 = *(&local0);
_93 = *(&local3);
_94 = *(&local4);
_95 = _94.nonnull;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block13; else goto block14;
block14:;
_99 = (frost$core$Int) {1405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _99, &$s133);
abort(); // unreachable
block13:;
_102 = ((frost$core$String$Index) _94.value);
_103 = (frost$core$Bit) {false};
_104 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_93, _102, _103);
_105 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _104);
_106 = ((frost$core$Object*) _105);
frost$collections$Array$add$frost$collections$Array$T(_92, _106);
_108 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_108);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1406
_111 = *(&local4);
_112 = _111.nonnull;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block15; else goto block16;
block16:;
_116 = (frost$core$Int) {1406u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, _116, &$s135);
abort(); // unreachable
block15:;
_119 = ((frost$core$String$Index) _111.value);
_120 = _119.value;
_121 = &param1->_length;
_122 = *_121;
_123 = _120.value;
_124 = _122.value;
_125 = _123 + _124;
_126 = (frost$core$Int) {_125};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1406:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_129 = &(&local6)->value;
*_129 = _126;
_131 = *(&local6);
*(&local5) = _131;
_134 = *(&local5);
*(&local3) = _134;
goto block3;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$RegularExpression* param1, frost$core$Int param2) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Bit local5;
frost$core$String$Index local6;
frost$core$Int local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$collections$Array* _11;
frost$core$Object* _14;
frost$collections$Array* _16;
frost$core$Object* _17;
frost$core$Object* _20;
frost$core$Matcher* _23;
frost$core$Object* _25;
frost$core$Matcher* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$core$Int _36;
frost$core$Int* _39;
frost$core$String$Index _41;
frost$core$String$Index _44;
frost$core$Matcher* _50;
frost$core$Bit _51;
frost$core$Bit _54;
bool _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$collections$Array* _63;
frost$collections$CollectionView* _64;
$fn136 _65;
frost$core$Int _66;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _79;
frost$collections$Array* _82;
frost$core$String$Index _83;
frost$core$String$Index$nullable _84;
frost$core$Bit _85;
frost$core$Range$LTfrost$core$String$Index$Q$GT _86;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$collections$Array* _145;
frost$core$Object* _146;
frost$core$Matcher* _148;
frost$core$Object* _149;
frost$collections$Array* _152;
frost$core$Object* _153;
frost$core$Matcher* _95;
frost$core$String$Index _96;
frost$collections$Array* _99;
frost$core$String$Index _100;
frost$core$String$Index _101;
frost$core$Bit _102;
frost$core$Range$LTfrost$core$String$Index$GT _103;
frost$core$String* _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$String$Index _110;
frost$core$Int _111;
frost$core$Matcher* _112;
frost$core$String$Index _113;
frost$core$Int _114;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
int64_t _124;
frost$core$Int _125;
int64_t _129;
frost$core$Int _130;
frost$core$Int _133;
frost$core$Int* _136;
frost$core$String$Index _138;
frost$core$String$Index _141;
_0 = (frost$core$Int) {0u};
_1 = param2.value;
_2 = _0.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {1422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s137, _7, &$s138);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1423
_11 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_11);
*(&local0) = ((frost$collections$Array*) NULL);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = _11;
_20 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1424
_23 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _23;
_31 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1425
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1425:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_36 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_39 = &(&local3)->value;
*_39 = _36;
_41 = *(&local3);
*(&local2) = _41;
_44 = *(&local2);
*(&local4) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1426
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1427
_50 = *(&local1);
_51 = frost$core$Matcher$find$R$frost$core$Bit(_50);
*(&local5) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1428
_54 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:1428:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_57 = _54.value;
_58 = !_57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block7; else goto block9;
block9:;
_63 = *(&local0);
_64 = ((frost$collections$CollectionView*) _63);
ITable* $tmp139 = _64->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp139 = $tmp139->next;
}
_65 = $tmp139->methods[0];
_66 = _65(_64);
_67 = (frost$core$Int) {1u};
_68 = param2.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1428:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_74 = _66.value;
_75 = _71.value;
_76 = _74 == _75;
_77 = (frost$core$Bit) {_76};
_79 = _77.value;
if (_79) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1429
_82 = *(&local0);
_83 = *(&local4);
_84 = ((frost$core$String$Index$nullable) { _83, true });
_85 = (frost$core$Bit) {false};
_86 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_84, ((frost$core$String$Index$nullable) { .nonnull = false }), _85);
_87 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _86);
_88 = ((frost$core$Object*) _87);
frost$collections$Array$add$frost$collections$Array$T(_82, _88);
_90 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1430
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1436
_145 = *(&local0);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$ref$frost$core$Object$Q(_146);
_148 = *(&local1);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
*(&local1) = ((frost$core$Matcher*) NULL);
_152 = *(&local0);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local0) = ((frost$collections$Array*) NULL);
return _145;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1432
_95 = *(&local1);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_96, _95);
*(&local6) = _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1433
_99 = *(&local0);
_100 = *(&local4);
_101 = *(&local6);
_102 = (frost$core$Bit) {false};
_103 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_100, _101, _102);
_104 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _103);
_105 = ((frost$core$Object*) _104);
frost$collections$Array$add$frost$collections$Array$T(_99, _105);
_107 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_107);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1434
_110 = *(&local6);
_111 = _110.value;
_112 = *(&local1);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_113, _112);
_114 = _113.value;
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from String.frost:1434:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_117 = _111.value;
_118 = _114.value;
_119 = _117 > _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_124 = _111.value;
_125 = (frost$core$Int) {_124};
*(&local7) = _125;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_129 = _114.value;
_130 = (frost$core$Int) {_129};
*(&local7) = _130;
goto block12;
block12:;
_133 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1434:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_136 = &(&local9)->value;
*_136 = _133;
_138 = *(&local9);
*(&local8) = _138;
_141 = *(&local8);
*(&local4) = _141;
goto block5;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(void* rawSelf, frost$core$RegularExpression* param1) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int64 _1;
int64_t _4;
int64_t _5;
frost$core$Int _6;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
_1 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_4 = _1.value;
_5 = ((int64_t) _4);
_6 = (frost$core$Int) {_5};
_8 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, _6);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$core$Int$nullable frost$core$String$get_asInt$R$frost$core$Int$Q(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int64$nullable local0;
frost$core$Int64$nullable _1;
frost$core$Int64$nullable _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int64$nullable _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _15;
frost$core$Int64 _18;
int64_t _21;
int64_t _22;
frost$core$Int _23;
frost$core$Int$nullable _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_1 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_4 = *(&local0);
_5 = _4.nonnull;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_10 = *(&local0);
_11 = _10.nonnull;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block3; else goto block4;
block4:;
_15 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, _15, &$s141);
abort(); // unreachable
block3:;
_18 = ((frost$core$Int64) _10.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_21 = _18.value;
_22 = ((int64_t) _21);
_23 = (frost$core$Int) {_22};
_25 = ((frost$core$Int$nullable) { _23, true });
return _25;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
return ((frost$core$Int$nullable) { .nonnull = false });

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int64 local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int64 local3;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int64 _16;
frost$unsafe$Pointer* _20;
frost$unsafe$Pointer _21;
int64_t _22;
frost$core$Int64 _23;
int64_t _24;
frost$core$Char8 _25;
frost$core$UInt8 _26;
frost$core$Char8 _27;
uint8_t _30;
uint8_t _31;
bool _32;
frost$core$Bit _33;
bool _35;
frost$core$Int _38;
frost$core$Int _43;
frost$core$Int _47;
frost$core$Int* _48;
frost$core$Int _49;
frost$core$Bit _50;
frost$core$Range$LTfrost$core$Int$GT _51;
frost$core$Int _52;
frost$core$Int _54;
frost$core$Bit _55;
bool _56;
frost$core$Int _57;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$unsafe$Pointer* _72;
frost$unsafe$Pointer _73;
int64_t _74;
frost$core$Int _75;
frost$core$Int64 _76;
int64_t _77;
frost$core$Char8 _78;
uint8_t _79;
int64_t _80;
frost$core$Int64 _81;
frost$core$Int64 _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int64 _86;
frost$core$Int64 _89;
frost$core$Int64 _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int64 _97;
frost$core$Int64 _98;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
frost$core$Int64 _108;
frost$core$Int64 _109;
int64_t _110;
int64_t _111;
int64_t _112;
frost$core$Int64 _113;
frost$core$Int64 _114;
int64_t _115;
int64_t _116;
int64_t _117;
frost$core$Int64 _118;
frost$core$Int _121;
int64_t _122;
int64_t _123;
int64_t _124;
frost$core$Int _125;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _131;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _137;
int64_t _139;
int64_t _140;
int64_t _141;
frost$core$Int _142;
frost$unsafe$Pointer* _146;
frost$unsafe$Pointer _147;
int64_t _148;
frost$core$Int64 _149;
int64_t _150;
frost$core$Char8 _151;
frost$core$UInt8 _152;
frost$core$Char8 _153;
uint8_t _156;
uint8_t _157;
bool _158;
frost$core$Bit _159;
bool _161;
frost$core$Int64 _164;
int64_t _167;
int64_t _168;
frost$core$Int64 _169;
frost$core$Int64 _174;
frost$core$Int64$nullable _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1470
_1 = &param0->_length;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1470:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1471
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1473
_16 = (frost$core$Int64) {0u};
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1474
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1475
_20 = &param0->data;
_21 = *_20;
_22 = _21.value;
_23 = (frost$core$Int64) {0u};
_24 = _23.value;
_25 = ((frost$core$Char8*)_22)[_24];
_26 = (frost$core$UInt8) {45u};
_27 = frost$core$Char8$init$frost$core$UInt8(_26);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1475:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_30 = _25.value;
_31 = _27.value;
_32 = _30 == _31;
_33 = (frost$core$Bit) {_32};
_35 = _33.value;
if (_35) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1476
_38 = (frost$core$Int) {1u};
*(&local1) = _38;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1479
_43 = (frost$core$Int) {0u};
*(&local1) = _43;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1481
_47 = *(&local1);
_48 = &param0->_length;
_49 = *_48;
_50 = (frost$core$Bit) {false};
_51 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_47, _49, _50);
_52 = _51.min;
*(&local2) = _52;
_54 = _51.max;
_55 = _51.inclusive;
_56 = _55.value;
_57 = (frost$core$Int) {1u};
if (_56) goto block11; else goto block12;
block11:;
_59 = _52.value;
_60 = _54.value;
_61 = _59 <= _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block8; else goto block9;
block12:;
_65 = _52.value;
_66 = _54.value;
_67 = _65 < _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1482
_72 = &param0->data;
_73 = *_72;
_74 = _73.value;
_75 = *(&local2);
_76 = frost$core$Int64$init$frost$core$Int(_75);
_77 = _76.value;
_78 = ((frost$core$Char8*)_74)[_77];
_79 = _78.value;
_80 = ((int64_t) _79);
_81 = (frost$core$Int64) {_80};
_82 = (frost$core$Int64) {48u};
_83 = _81.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int64) {_85};
*(&local3) = _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1483
_89 = *(&local3);
_90 = (frost$core$Int64) {0u};
_91 = _89.value;
_92 = _90.value;
_93 = _91 < _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block13; else goto block15;
block15:;
_97 = *(&local3);
_98 = (frost$core$Int64) {9u};
_99 = _97.value;
_100 = _98.value;
_101 = _99 > _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1484
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1486
_108 = *(&local0);
_109 = (frost$core$Int64) {10u};
_110 = _108.value;
_111 = _109.value;
_112 = _110 * _111;
_113 = (frost$core$Int64) {_112};
_114 = *(&local3);
_115 = _113.value;
_116 = _114.value;
_117 = _115 + _116;
_118 = (frost$core$Int64) {_117};
*(&local0) = _118;
_121 = *(&local2);
_122 = _54.value;
_123 = _121.value;
_124 = _122 - _123;
_125 = (frost$core$Int) {_124};
if (_56) goto block17; else goto block18;
block17:;
_127 = _125.value;
_128 = _57.value;
_129 = _127 >= _128;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block16; else goto block9;
block18:;
_133 = _125.value;
_134 = _57.value;
_135 = _133 > _134;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block16; else goto block9;
block16:;
_139 = _121.value;
_140 = _57.value;
_141 = _139 + _140;
_142 = (frost$core$Int) {_141};
*(&local2) = _142;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1488
_146 = &param0->data;
_147 = *_146;
_148 = _147.value;
_149 = (frost$core$Int64) {0u};
_150 = _149.value;
_151 = ((frost$core$Char8*)_148)[_150];
_152 = (frost$core$UInt8) {45u};
_153 = frost$core$Char8$init$frost$core$UInt8(_152);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1488:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_156 = _151.value;
_157 = _153.value;
_158 = _156 == _157;
_159 = (frost$core$Bit) {_158};
_161 = _159.value;
if (_161) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1489
_164 = *(&local0);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1489:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_167 = _164.value;
_168 = -_167;
_169 = (frost$core$Int64) {_168};
*(&local0) = _169;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1491
_174 = *(&local0);
_175 = ((frost$core$Int64$nullable) { _174, true });
return _175;

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$UInt64 local0;
frost$core$Int local1;
frost$core$UInt64 local2;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$UInt64 _16;
frost$core$Int _19;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Bit _22;
frost$core$Range$LTfrost$core$Int$GT _23;
frost$core$Int _24;
frost$core$Int _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _29;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$unsafe$Pointer* _44;
frost$unsafe$Pointer _45;
int64_t _46;
frost$core$Int _47;
frost$core$Int64 _48;
int64_t _49;
frost$core$Char8 _50;
uint8_t _51;
uint64_t _52;
frost$core$UInt64 _53;
frost$core$UInt64 _54;
uint64_t _55;
uint64_t _56;
uint64_t _57;
frost$core$UInt64 _58;
frost$core$UInt64 _61;
frost$core$UInt64 _62;
uint64_t _63;
uint64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$UInt64 _69;
frost$core$UInt64 _70;
uint64_t _71;
uint64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$UInt64 _80;
frost$core$UInt64 _81;
uint64_t _82;
uint64_t _83;
uint64_t _84;
frost$core$UInt64 _85;
frost$core$UInt64 _86;
uint64_t _87;
uint64_t _88;
uint64_t _89;
frost$core$UInt64 _90;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
frost$core$UInt64 _118;
frost$core$UInt64$nullable _119;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1502
_1 = &param0->_length;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1502:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1503
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1505
_16 = (frost$core$UInt64) {0u};
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1506
_19 = (frost$core$Int) {0u};
_20 = &param0->_length;
_21 = *_20;
_22 = (frost$core$Bit) {false};
_23 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_19, _21, _22);
_24 = _23.min;
*(&local1) = _24;
_26 = _23.max;
_27 = _23.inclusive;
_28 = _27.value;
_29 = (frost$core$Int) {1u};
if (_28) goto block7; else goto block8;
block7:;
_31 = _24.value;
_32 = _26.value;
_33 = _31 <= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block4; else goto block5;
block8:;
_37 = _24.value;
_38 = _26.value;
_39 = _37 < _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1507
_44 = &param0->data;
_45 = *_44;
_46 = _45.value;
_47 = *(&local1);
_48 = frost$core$Int64$init$frost$core$Int(_47);
_49 = _48.value;
_50 = ((frost$core$Char8*)_46)[_49];
_51 = _50.value;
_52 = ((uint64_t) _51);
_53 = (frost$core$UInt64) {_52};
_54 = (frost$core$UInt64) {48u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 - _56;
_58 = (frost$core$UInt64) {_57};
*(&local2) = _58;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1508
_61 = *(&local2);
_62 = (frost$core$UInt64) {0u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 < _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block9; else goto block11;
block11:;
_69 = *(&local2);
_70 = (frost$core$UInt64) {9u};
_71 = _69.value;
_72 = _70.value;
_73 = _71 > _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1509
return ((frost$core$UInt64$nullable) { .nonnull = false });
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1511
_80 = *(&local0);
_81 = (frost$core$UInt64) {10u};
_82 = _80.value;
_83 = _81.value;
_84 = _82 * _83;
_85 = (frost$core$UInt64) {_84};
_86 = *(&local2);
_87 = _85.value;
_88 = _86.value;
_89 = _87 + _88;
_90 = (frost$core$UInt64) {_89};
*(&local0) = _90;
_93 = *(&local1);
_94 = _26.value;
_95 = _93.value;
_96 = _94 - _95;
_97 = (frost$core$Int) {_96};
if (_28) goto block13; else goto block14;
block13:;
_99 = _97.value;
_100 = _29.value;
_101 = _99 >= _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block12; else goto block5;
block14:;
_105 = _97.value;
_106 = _29.value;
_107 = _105 > _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block12; else goto block5;
block12:;
_111 = _93.value;
_112 = _29.value;
_113 = _111 + _112;
_114 = (frost$core$Int) {_113};
*(&local1) = _114;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1513
_118 = *(&local0);
_119 = ((frost$core$UInt64$nullable) { _118, true });
return _119;

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Real64 _1;
frost$core$Real64$nullable _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&_1, param0);
_2 = ((frost$core$Real64$nullable) { _1, true });
return _2;

}
frost$core$Int frost$core$String$get_hash$R$frost$core$Int(void* rawSelf) {
frost$core$String* param0 = (frost$core$String*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Bit _7;
frost$core$Range$LTfrost$core$Int$GT _8;
frost$core$Int _9;
frost$core$Int _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _14;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _29;
frost$unsafe$Pointer* _30;
frost$unsafe$Pointer _31;
int64_t _32;
frost$core$Int _33;
frost$core$Int64 _34;
int64_t _35;
frost$core$Char8 _36;
uint8_t _39;
int8_t _40;
frost$core$Int8 _41;
frost$core$Int _43;
int64_t _46;
int64_t _47;
int64_t _48;
frost$core$Int _49;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
frost$core$Int _61;
int64_t _62;
int64_t _63;
int64_t _64;
frost$core$Int _65;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
frost$core$Int _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1534
_1 = (frost$core$Int) {14695981039346656037u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1535
_4 = (frost$core$Int) {0u};
_5 = &param0->_length;
_6 = *_5;
_7 = (frost$core$Bit) {false};
_8 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_4, _6, _7);
_9 = _8.min;
*(&local1) = _9;
_11 = _8.max;
_12 = _8.inclusive;
_13 = _12.value;
_14 = (frost$core$Int) {1u};
if (_13) goto block4; else goto block5;
block4:;
_16 = _9.value;
_17 = _11.value;
_18 = _16 <= _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block5:;
_22 = _9.value;
_23 = _11.value;
_24 = _22 < _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1536
_29 = *(&local0);
_30 = &param0->data;
_31 = *_30;
_32 = _31.value;
_33 = *(&local1);
_34 = frost$core$Int64$init$frost$core$Int(_33);
_35 = _34.value;
_36 = ((frost$core$Char8*)_32)[_35];
// begin inline call to function frost.core.Char8.get_asInt8():frost.core.Int8 from String.frost:1536:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
_39 = _36.value;
_40 = ((int8_t) _39);
_41 = (frost$core$Int8) {_40};
_43 = frost$core$Int$init$frost$core$Int8(_41);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from String.frost:1536:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_46 = _29.value;
_47 = _43.value;
_48 = _46 ^ _47;
_49 = (frost$core$Int) {_48};
*(&local0) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1537
_53 = *(&local0);
_54 = (frost$core$Int) {1099511628211u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 * _56;
_58 = (frost$core$Int) {_57};
*(&local0) = _58;
_61 = *(&local1);
_62 = _11.value;
_63 = _61.value;
_64 = _62 - _63;
_65 = (frost$core$Int) {_64};
if (_13) goto block9; else goto block10;
block9:;
_67 = _65.value;
_68 = _14.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block8; else goto block2;
block10:;
_73 = _65.value;
_74 = _14.value;
_75 = _73 > _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block8; else goto block2;
block8:;
_79 = _61.value;
_80 = _14.value;
_81 = _79 + _80;
_82 = (frost$core$Int) {_81};
*(&local1) = _82;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1539
_86 = *(&local0);
return _86;

}

