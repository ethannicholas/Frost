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
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
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
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int, frost$core$String$get_byteLength$R$frost$core$Int, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$Q$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt$R$frost$core$Int$Q, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int$shim} };

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
typedef frost$core$Object* (*$fn94)(frost$core$String*);
typedef frost$core$Object* (*$fn95)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn96)(frost$core$Object*);
typedef frost$core$String* (*$fn97)(frost$core$Object*);
typedef frost$core$Object* (*$fn100)(frost$core$String*);
typedef frost$core$Object* (*$fn101)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn103)(frost$core$Object*);
typedef frost$core$Object* (*$fn104)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn105)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn106)(frost$core$Object*);
typedef frost$core$String* (*$fn107)(frost$core$Object*);
typedef frost$core$Object* (*$fn108)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn109)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn110)(frost$core$Object*);
typedef frost$core$String* (*$fn111)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn114)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn115)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn116)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn117)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn123)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn124)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn125)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn130)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn131)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn132)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn144)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 168332950343237285, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x22", 2, 671069362943044699, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e", 2, 671135333640737359, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x74", 2, 671128736570968093, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 114, 6085615713521127995, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 167, -3950450366484826733, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int param2) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Char8** _5;
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
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int param2, frost$core$String* param3) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Char8** _5;
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
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
frost$core$Int* _8;
frost$core$Int* _11;
frost$core$Int _12;
frost$core$Int64 _13;
int64_t _14;
frost$core$Char8* _15;
frost$core$Char8** _16;
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
frost$core$Char8** _44;
frost$core$Char8* _45;
frost$core$Int _46;
frost$core$Int64 _47;
frost$collections$ListView* _48;
frost$core$Int _49;
$fn3 _50;
frost$core$Object* _51;
frost$core$Char8 _52;
int64_t _53;
frost$core$Object* _55;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
int64_t _76;
int64_t _77;
int64_t _78;
frost$core$Int _79;
frost$core$Object* _83;
frost$core$String** _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$String** _89;
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
_13 = frost$core$Int64$init$frost$core$Int(_12);
_14 = _13.value;
_15 = ((frost$core$Char8*) frostAlloc(_14 * 1));
_16 = &param0->data;
*_16 = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:366
_19 = (frost$core$Int) {0u};
_20 = &param0->_length;
_21 = *_20;
_22 = (frost$core$Bit) {false};
_23 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_19, _21, _22);
_24 = _23.min;
*(&local0) = _24;
_26 = _23.max;
_27 = _23.inclusive;
_28 = _27.value;
_29 = (frost$core$Int) {1u};
if (_28) goto block4; else goto block5;
block4:;
_31 = _24.value;
_32 = _26.value;
_33 = _31 <= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block1; else goto block2;
block5:;
_37 = _24.value;
_38 = _26.value;
_39 = _37 < _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:367
_44 = &param0->data;
_45 = *_44;
_46 = *(&local0);
_47 = frost$core$Int64$init$frost$core$Int(_46);
_48 = param1;
_49 = *(&local0);
ITable* $tmp5 = _48->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp5 = $tmp5->next;
}
_50 = $tmp5->methods[0];
_51 = _50(_48, _49);
_52 = ((frost$core$Char8$wrapper*) _51)->value;
_53 = _47.value;
_45[_53] = _52;
_55 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_55);
_58 = *(&local0);
_59 = _26.value;
_60 = _58.value;
_61 = _59 - _60;
_62 = (frost$core$Int) {_61};
if (_28) goto block7; else goto block8;
block7:;
_64 = _62.value;
_65 = _29.value;
_66 = _64 >= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block6; else goto block2;
block8:;
_70 = _62.value;
_71 = _29.value;
_72 = _70 > _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block6; else goto block2;
block6:;
_76 = _58.value;
_77 = _29.value;
_78 = _76 + _77;
_79 = (frost$core$Int) {_78};
*(&local0) = _79;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:369
_83 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = &param0->owner;
_86 = *_85;
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = &param0->owner;
*_89 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Int local2;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$MutableString* _5;
frost$core$Object* _8;
frost$core$MutableString* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$collections$Iterable* _17;
frost$collections$Iterable* _18;
$fn6 _19;
frost$collections$Iterator* _20;
frost$collections$Iterator* _21;
frost$collections$Iterator* _23;
$fn7 _24;
frost$core$Bit _25;
bool _26;
frost$collections$Iterator* _28;
$fn8 _29;
frost$core$Object* _30;
frost$core$Char32 _31;
frost$core$MutableString* _34;
frost$core$Char32 _35;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$MutableString* _43;
frost$core$Int* _44;
frost$core$Int _45;
frost$core$Int64 _46;
int64_t _47;
frost$core$Char8* _48;
frost$core$Char8** _49;
frost$core$Int _52;
frost$core$MutableString* _53;
frost$core$Int* _54;
frost$core$Int _55;
frost$core$Bit _56;
frost$core$Range$LTfrost$core$Int$GT _57;
frost$core$Int _58;
frost$core$Int _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _63;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Char8** _78;
frost$core$Char8* _79;
frost$core$Int _80;
frost$core$Int64 _81;
frost$core$MutableString* _82;
frost$core$Char8** _83;
frost$core$Char8* _84;
frost$core$Int _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Char8 _88;
int64_t _89;
frost$core$Int _92;
int64_t _93;
int64_t _94;
int64_t _95;
frost$core$Int _96;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _108;
int64_t _110;
int64_t _111;
int64_t _112;
frost$core$Int _113;
frost$core$MutableString* _117;
frost$core$Int* _118;
frost$core$Int _119;
frost$core$Int* _120;
frost$core$Object* _123;
frost$core$String** _125;
frost$core$String* _126;
frost$core$Object* _127;
frost$core$String** _129;
frost$core$MutableString* _131;
frost$core$Object* _132;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_1 = (frost$core$Int) {0u};
_2 = &param0->dummy;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:373
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
_18 = _17;
ITable* $tmp9 = _18->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp9 = $tmp9->next;
}
_19 = $tmp9->methods[0];
_20 = _19(_18);
_21 = _20;
goto block1;
block1:;
_23 = _21;
ITable* $tmp10 = _23->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_24 = $tmp10->methods[0];
_25 = _24(_23);
_26 = _25.value;
if (_26) goto block3; else goto block2;
block2:;
_28 = _21;
ITable* $tmp11 = _28->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_29 = $tmp11->methods[1];
_30 = _29(_28);
_31 = ((frost$core$Char32$wrapper*) _30)->value;
*(&local1) = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:375
_34 = *(&local0);
_35 = *(&local1);
frost$core$MutableString$append$frost$core$Char32(_34, _35);
_37 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_37);
goto block1;
block3:;
_40 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:377
_43 = *(&local0);
_44 = &_43->_length;
_45 = *_44;
_46 = frost$core$Int64$init$frost$core$Int(_45);
_47 = _46.value;
_48 = ((frost$core$Char8*) frostAlloc(_47 * 1));
_49 = &param0->data;
*_49 = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:378
_52 = (frost$core$Int) {0u};
_53 = *(&local0);
_54 = &_53->_length;
_55 = *_54;
_56 = (frost$core$Bit) {false};
_57 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_52, _55, _56);
_58 = _57.min;
*(&local2) = _58;
_60 = _57.max;
_61 = _57.inclusive;
_62 = _61.value;
_63 = (frost$core$Int) {1u};
if (_62) goto block7; else goto block8;
block7:;
_65 = _58.value;
_66 = _60.value;
_67 = _65 <= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block4; else goto block5;
block8:;
_71 = _58.value;
_72 = _60.value;
_73 = _71 < _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:379
_78 = &param0->data;
_79 = *_78;
_80 = *(&local2);
_81 = frost$core$Int64$init$frost$core$Int(_80);
_82 = *(&local0);
_83 = &_82->data;
_84 = *_83;
_85 = *(&local2);
_86 = frost$core$Int64$init$frost$core$Int(_85);
_87 = _86.value;
_88 = _84[_87];
_89 = _81.value;
_79[_89] = _88;
_92 = *(&local2);
_93 = _60.value;
_94 = _92.value;
_95 = _93 - _94;
_96 = (frost$core$Int) {_95};
if (_62) goto block10; else goto block11;
block10:;
_98 = _96.value;
_99 = _63.value;
_100 = _98 >= _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block9; else goto block5;
block11:;
_104 = _96.value;
_105 = _63.value;
_106 = _104 > _105;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block9; else goto block5;
block9:;
_110 = _92.value;
_111 = _63.value;
_112 = _110 + _111;
_113 = (frost$core$Int) {_112};
*(&local2) = _113;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:381
_117 = *(&local0);
_118 = &_117->_length;
_119 = *_118;
_120 = &param0->_length;
*_120 = _119;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:382
_123 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = &param0->owner;
_126 = *_125;
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = &param0->owner;
*_129 = ((frost$core$String*) NULL);
_131 = *(&local0);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(frost$core$String* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_1 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_1);
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

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
frost$collections$Iterable* _35;
$fn12 _36;
frost$collections$Iterator* _37;
frost$collections$Iterator* _38;
frost$collections$Iterator* _40;
$fn13 _41;
frost$core$Bit _42;
bool _43;
frost$collections$Iterator* _45;
$fn14 _46;
frost$core$Object* _47;
frost$core$Char8 _48;
frost$core$Char8 _51;
frost$core$UInt8 _52;
frost$core$Char8 _53;
uint8_t _56;
uint8_t _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$MutableString* _64;
frost$core$UInt8 _67;
frost$core$Char8 _68;
uint8_t _71;
uint8_t _72;
bool _73;
frost$core$Bit _74;
bool _76;
frost$core$MutableString* _79;
frost$core$UInt8 _82;
frost$core$Char8 _83;
uint8_t _86;
uint8_t _87;
bool _88;
frost$core$Bit _89;
bool _91;
frost$core$MutableString* _94;
frost$core$UInt8 _97;
frost$core$Char8 _98;
uint8_t _101;
uint8_t _102;
bool _103;
frost$core$Bit _104;
bool _106;
frost$core$MutableString* _109;
frost$core$UInt8 _112;
frost$core$Char8 _113;
uint8_t _116;
uint8_t _117;
bool _118;
frost$core$Bit _119;
bool _121;
frost$core$MutableString* _124;
frost$core$Char8 _128;
uint8_t _131;
frost$core$UInt8 _132;
frost$core$UInt8 _134;
uint8_t _135;
uint8_t _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Char8 _141;
uint8_t _144;
frost$core$UInt8 _145;
frost$core$UInt8 _147;
uint8_t _148;
uint8_t _149;
bool _150;
frost$core$Bit _151;
bool _152;
frost$core$MutableString* _155;
frost$core$Char8 _156;
frost$core$MutableString* _161;
frost$core$Object* _165;
frost$core$Object* _168;
frost$core$Object* _170;
frost$core$MutableString* _173;
frost$core$MutableString* _176;
frost$core$String* _177;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$MutableString* _182;
frost$core$Object* _183;
frost$core$Int _188;
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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_12 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_26 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_26, param0);
_28 = ((frost$collections$ListView*) _26);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = ((frost$collections$Iterable*) _28);
_35 = _34;
ITable* $tmp18 = _35->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp18 = $tmp18->next;
}
_36 = $tmp18->methods[0];
_37 = _36(_35);
_38 = _37;
goto block7;
block7:;
_40 = _38;
ITable* $tmp19 = _40->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_41 = $tmp19->methods[0];
_42 = _41(_40);
_43 = _42.value;
if (_43) goto block9; else goto block8;
block8:;
_45 = _38;
ITable* $tmp20 = _45->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_46 = $tmp20->methods[1];
_47 = _46(_45);
_48 = ((frost$core$Char8$wrapper*) _47)->value;
*(&local1) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:410
_51 = *(&local1);
_52 = (frost$core$UInt8) {34u};
_53 = frost$core$Char8$init$frost$core$UInt8(_52);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:411:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_56 = _51.value;
_57 = _53.value;
_58 = _56 == _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:412
_64 = *(&local0);
frost$core$MutableString$append$frost$core$String(_64, &$s21);
goto block10;
block12:;
_67 = (frost$core$UInt8) {92u};
_68 = frost$core$Char8$init$frost$core$UInt8(_67);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:414:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_71 = _51.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:415
_79 = *(&local0);
frost$core$MutableString$append$frost$core$String(_79, &$s22);
goto block10;
block15:;
_82 = (frost$core$UInt8) {10u};
_83 = frost$core$Char8$init$frost$core$UInt8(_82);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:417:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_86 = _51.value;
_87 = _83.value;
_88 = _86 == _87;
_89 = (frost$core$Bit) {_88};
_91 = _89.value;
if (_91) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:418
_94 = *(&local0);
frost$core$MutableString$append$frost$core$String(_94, &$s23);
goto block10;
block18:;
_97 = (frost$core$UInt8) {13u};
_98 = frost$core$Char8$init$frost$core$UInt8(_97);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:420:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_101 = _51.value;
_102 = _98.value;
_103 = _101 == _102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:421
_109 = *(&local0);
frost$core$MutableString$append$frost$core$String(_109, &$s24);
goto block10;
block21:;
_112 = (frost$core$UInt8) {9u};
_113 = frost$core$Char8$init$frost$core$UInt8(_112);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:423:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_116 = _51.value;
_117 = _113.value;
_118 = _116 == _117;
_119 = (frost$core$Bit) {_118};
_121 = _119.value;
if (_121) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:424
_124 = *(&local0);
frost$core$MutableString$append$frost$core$String(_124, &$s25);
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:427
_128 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_131 = _128.value;
_132 = (frost$core$UInt8) {_131};
_134 = (frost$core$UInt8) {32u};
_135 = _132.value;
_136 = _134.value;
_137 = _135 >= _136;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block29; else goto block28;
block29:;
_141 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_144 = _141.value;
_145 = (frost$core$UInt8) {_144};
_147 = (frost$core$UInt8) {126u};
_148 = _145.value;
_149 = _147.value;
_150 = _148 <= _149;
_151 = (frost$core$Bit) {_150};
_152 = _151.value;
if (_152) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:428
_155 = *(&local0);
_156 = *(&local1);
frost$core$MutableString$append$frost$core$Char8(_155, _156);
goto block27;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:432
_161 = *(&local0);
frost$core$MutableString$append$frost$core$String(_161, &$s26);
goto block27;
block27:;
goto block10;
block10:;
_165 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_165);
goto block7;
block9:;
_168 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_170);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:437
_173 = *(&local0);
frost$core$MutableString$append$frost$core$String(_173, &$s27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:438
_176 = *(&local0);
_177 = frost$core$MutableString$finish$R$frost$core$String(_176);
_178 = ((frost$core$Object*) _177);
frost$core$Frost$ref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = *(&local0);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local0) = ((frost$core$MutableString*) NULL);
return _177;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:441
_188 = (frost$core$Int) {441u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s28, _188);
abort(); // unreachable
block1:;
goto block32;
block32:;

}
void frost$core$String$cleanup(frost$core$String* param0) {

frost$core$String** _1;
frost$core$String* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Char8** _8;
frost$core$Char8* _9;
frost$core$Immutable* _13;
frost$core$String** _15;
frost$core$String* _16;
frost$core$Object* _17;
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
frostFree(_9);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:448
_13 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_13);
_15 = &param0->owner;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

frost$core$String$UTF8List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_1 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

frost$core$String$UTF16Iterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:467
FROST_ASSERT(32 == sizeof(frost$core$String$UTF16Iterator));
_1 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

frost$core$String$UTF32Iterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:475
FROST_ASSERT(32 == sizeof(frost$core$String$UTF32Iterator));
_1 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Int frost$core$String$get_length$R$frost$core$Int(frost$core$String* param0) {

frost$collections$Iterable* _1;
$fn29 _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
$fn30 _6;
frost$core$Int _7;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp31 = _1->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp31 = $tmp31->next;
}
_2 = $tmp31->methods[0];
_3 = _2(_1);
_4 = _3;
_5 = _4;
ITable* $tmp32 = _5->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp32 = $tmp32->next;
}
_6 = $tmp32->methods[2];
_7 = _6(_5);
_8 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _7;

}
frost$core$Int frost$core$String$get_byteLength$R$frost$core$Int(frost$core$String* param0) {

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
_1 = &param0->_length;
_2 = *_1;
return _2;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$Char8** _40;
frost$core$Char8* _41;
frost$core$Int _42;
frost$core$Int64 _43;
int64_t _44;
frost$core$Char8 _45;
frost$core$Char8** _46;
frost$core$Char8* _47;
frost$core$Int _48;
frost$core$Int64 _49;
int64_t _50;
frost$core$Char8 _51;
uint8_t _54;
uint8_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$Bit _62;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
frost$core$Bit _90;
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
_42 = *(&local0);
_43 = frost$core$Int64$init$frost$core$Int(_42);
_44 = _43.value;
_45 = _41[_44];
_46 = &param1->data;
_47 = *_46;
_48 = *(&local0);
_49 = frost$core$Int64$init$frost$core$Int(_48);
_50 = _49.value;
_51 = _47[_50];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:500:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_54 = _45.value;
_55 = _51.value;
_56 = _54 != _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:501
_62 = (frost$core$Bit) {false};
return _62;
block9:;
_65 = *(&local0);
_66 = _22.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
if (_24) goto block12; else goto block13;
block12:;
_71 = _69.value;
_72 = _25.value;
_73 = _71 >= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block11; else goto block4;
block13:;
_77 = _69.value;
_78 = _25.value;
_79 = _77 > _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block11; else goto block4;
block11:;
_83 = _65.value;
_84 = _25.value;
_85 = _83 + _84;
_86 = (frost$core$Int) {_85};
*(&local0) = _86;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:504
_90 = (frost$core$Bit) {true};
return _90;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$Char8** _40;
frost$core$Char8* _41;
frost$core$Int* _42;
frost$core$Int _43;
frost$core$Int* _44;
frost$core$Int _45;
int64_t _46;
int64_t _47;
int64_t _48;
frost$core$Int _49;
frost$core$Int _50;
int64_t _51;
int64_t _52;
int64_t _53;
frost$core$Int _54;
frost$core$Int64 _55;
int64_t _56;
frost$core$Char8 _57;
frost$core$Char8** _58;
frost$core$Char8* _59;
frost$core$Int _60;
frost$core$Int64 _61;
int64_t _62;
frost$core$Char8 _63;
uint8_t _66;
uint8_t _67;
bool _68;
frost$core$Bit _69;
bool _71;
frost$core$Bit _74;
frost$core$Int _77;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _87;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
int64_t _95;
int64_t _96;
int64_t _97;
frost$core$Int _98;
frost$core$Bit _102;
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
_42 = &param0->_length;
_43 = *_42;
_44 = &param1->_length;
_45 = *_44;
_46 = _43.value;
_47 = _45.value;
_48 = _46 - _47;
_49 = (frost$core$Int) {_48};
_50 = *(&local0);
_51 = _49.value;
_52 = _50.value;
_53 = _51 + _52;
_54 = (frost$core$Int) {_53};
_55 = frost$core$Int64$init$frost$core$Int(_54);
_56 = _55.value;
_57 = _41[_56];
_58 = &param1->data;
_59 = *_58;
_60 = *(&local0);
_61 = frost$core$Int64$init$frost$core$Int(_60);
_62 = _61.value;
_63 = _59[_62];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:512:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_66 = _57.value;
_67 = _63.value;
_68 = _66 != _67;
_69 = (frost$core$Bit) {_68};
_71 = _69.value;
if (_71) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:513
_74 = (frost$core$Bit) {false};
return _74;
block9:;
_77 = *(&local0);
_78 = _22.value;
_79 = _77.value;
_80 = _78 - _79;
_81 = (frost$core$Int) {_80};
if (_24) goto block12; else goto block13;
block12:;
_83 = _81.value;
_84 = _25.value;
_85 = _83 >= _84;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block11; else goto block4;
block13:;
_89 = _81.value;
_90 = _25.value;
_91 = _89 > _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block11; else goto block4;
block11:;
_95 = _77.value;
_96 = _25.value;
_97 = _95 + _96;
_98 = (frost$core$Int) {_97};
*(&local0) = _98;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:516
_102 = (frost$core$Bit) {true};
return _102;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

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
frost$core$Char8** _31;
frost$core$Char8* _32;
frost$core$Int _33;
frost$core$Int64 _34;
int64_t _35;
frost$core$Char8 _36;
frost$core$UInt8 _39;
frost$core$Char8 _40;
uint8_t _43;
uint8_t _44;
bool _45;
frost$core$Bit _46;
bool _48;
frost$core$UInt8 _50;
frost$core$Char8 _51;
uint8_t _54;
uint8_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$UInt8 _61;
frost$core$Char8 _62;
uint8_t _65;
uint8_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
frost$core$UInt8 _72;
frost$core$Char8 _73;
uint8_t _76;
uint8_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$core$Bit _84;
frost$core$Bit _88;
frost$core$Bit _92;
bool _93;
frost$core$Int _96;
frost$core$Int _97;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$core$Int* _105;
frost$core$Int _106;
frost$core$Int _107;
int64_t _108;
int64_t _109;
int64_t _110;
frost$core$Int _111;
frost$core$Int _115;
frost$core$Int _116;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
frost$core$Char8** _123;
frost$core$Char8* _124;
frost$core$Int _125;
frost$core$Int64 _126;
int64_t _127;
frost$core$Char8 _128;
frost$core$UInt8 _131;
frost$core$Char8 _132;
uint8_t _135;
uint8_t _136;
bool _137;
frost$core$Bit _138;
bool _140;
frost$core$UInt8 _142;
frost$core$Char8 _143;
uint8_t _146;
uint8_t _147;
bool _148;
frost$core$Bit _149;
bool _151;
frost$core$UInt8 _153;
frost$core$Char8 _154;
uint8_t _157;
uint8_t _158;
bool _159;
frost$core$Bit _160;
bool _162;
frost$core$UInt8 _164;
frost$core$Char8 _165;
uint8_t _168;
uint8_t _169;
bool _170;
frost$core$Bit _171;
bool _173;
frost$core$Bit _176;
frost$core$Bit _180;
frost$core$Bit _184;
bool _185;
frost$core$Int _188;
frost$core$Int _189;
int64_t _190;
int64_t _191;
int64_t _192;
frost$core$Int _193;
frost$core$Int _197;
frost$core$Int* _200;
frost$core$String$Index _202;
frost$core$String$Index _205;
frost$core$Int _206;
frost$core$Int* _209;
frost$core$String$Index _211;
frost$core$String$Index _214;
frost$core$Bit _215;
frost$core$Range$LTfrost$core$String$Index$GT _216;
frost$core$String* _217;
frost$core$Object* _218;
frost$core$Object* _220;
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
_33 = *(&local0);
_34 = frost$core$Int64$init$frost$core$Int(_33);
_35 = _34.value;
_36 = _32[_35];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:529:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
_39 = (frost$core$UInt8) {10u};
_40 = frost$core$Char8$init$frost$core$UInt8(_39);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_43 = _36.value;
_44 = _40.value;
_45 = _43 == _44;
_46 = (frost$core$Bit) {_45};
_48 = _46.value;
if (_48) goto block10; else goto block11;
block11:;
_50 = (frost$core$UInt8) {13u};
_51 = frost$core$Char8$init$frost$core$UInt8(_50);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_54 = _36.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block10; else goto block13;
block13:;
_61 = (frost$core$UInt8) {9u};
_62 = frost$core$Char8$init$frost$core$UInt8(_61);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_65 = _36.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block10; else goto block15;
block15:;
_72 = (frost$core$UInt8) {32u};
_73 = frost$core$Char8$init$frost$core$UInt8(_72);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_76 = _36.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block10; else goto block17;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
_84 = (frost$core$Bit) {true};
*(&local1) = _84;
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
_88 = (frost$core$Bit) {false};
*(&local1) = _88;
goto block8;
block9:;
goto block8;
block8:;
_92 = *(&local1);
_93 = _92.value;
if (_93) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:530
_96 = *(&local0);
_97 = (frost$core$Int) {1u};
_98 = _96.value;
_99 = _97.value;
_100 = _98 + _99;
_101 = (frost$core$Int) {_100};
*(&local0) = _101;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:533
_105 = &param0->_length;
_106 = *_105;
_107 = (frost$core$Int) {1u};
_108 = _106.value;
_109 = _107.value;
_110 = _108 - _109;
_111 = (frost$core$Int) {_110};
*(&local2) = _111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:534
goto block19;
block19:;
_115 = *(&local2);
_116 = *(&local0);
_117 = _115.value;
_118 = _116.value;
_119 = _117 >= _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block22; else goto block21;
block22:;
_123 = &param0->data;
_124 = *_123;
_125 = *(&local2);
_126 = frost$core$Int64$init$frost$core$Int(_125);
_127 = _126.value;
_128 = _124[_127];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:534:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
_131 = (frost$core$UInt8) {10u};
_132 = frost$core$Char8$init$frost$core$UInt8(_131);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_135 = _128.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block25; else goto block26;
block26:;
_142 = (frost$core$UInt8) {13u};
_143 = frost$core$Char8$init$frost$core$UInt8(_142);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_146 = _128.value;
_147 = _143.value;
_148 = _146 == _147;
_149 = (frost$core$Bit) {_148};
_151 = _149.value;
if (_151) goto block25; else goto block28;
block28:;
_153 = (frost$core$UInt8) {9u};
_154 = frost$core$Char8$init$frost$core$UInt8(_153);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_157 = _128.value;
_158 = _154.value;
_159 = _157 == _158;
_160 = (frost$core$Bit) {_159};
_162 = _160.value;
if (_162) goto block25; else goto block30;
block30:;
_164 = (frost$core$UInt8) {32u};
_165 = frost$core$Char8$init$frost$core$UInt8(_164);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_168 = _128.value;
_169 = _165.value;
_170 = _168 == _169;
_171 = (frost$core$Bit) {_170};
_173 = _171.value;
if (_173) goto block25; else goto block32;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
_176 = (frost$core$Bit) {true};
*(&local3) = _176;
goto block23;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
_180 = (frost$core$Bit) {false};
*(&local3) = _180;
goto block23;
block24:;
goto block23;
block23:;
_184 = *(&local3);
_185 = _184.value;
if (_185) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:535
_188 = *(&local2);
_189 = (frost$core$Int) {1u};
_190 = _188.value;
_191 = _189.value;
_192 = _190 - _191;
_193 = (frost$core$Int) {_192};
*(&local2) = _193;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:538
_197 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_200 = &(&local5)->value;
*_200 = _197;
_202 = *(&local5);
*(&local4) = _202;
_205 = *(&local4);
_206 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_209 = &(&local7)->value;
*_209 = _206;
_211 = *(&local7);
*(&local6) = _211;
_214 = *(&local6);
_215 = (frost$core$Bit) {true};
_216 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_205, _214, _215);
_217 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _216);
_218 = ((frost$core$Object*) _217);
frost$core$Frost$ref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_220);
return _217;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int64 _9;
int64_t _10;
frost$core$Char8* _11;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Bit _17;
frost$core$Range$LTfrost$core$Int$GT _18;
frost$core$Int _19;
frost$core$Int _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _24;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Char8* _39;
frost$core$Int _40;
frost$core$Int64 _41;
frost$core$Char8** _42;
frost$core$Char8* _43;
frost$core$Int _44;
frost$core$Int64 _45;
int64_t _46;
frost$core$Char8 _47;
int64_t _48;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
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
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
frost$core$Int _76;
frost$core$Int* _77;
frost$core$Int _78;
frost$core$Bit _79;
frost$core$Range$LTfrost$core$Int$GT _80;
frost$core$Int _81;
frost$core$Int _83;
frost$core$Bit _84;
bool _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Char8* _101;
frost$core$Int* _102;
frost$core$Int _103;
frost$core$Int _104;
int64_t _105;
int64_t _106;
int64_t _107;
frost$core$Int _108;
frost$core$Int64 _109;
frost$core$Char8** _110;
frost$core$Char8* _111;
frost$core$Int _112;
frost$core$Int64 _113;
int64_t _114;
frost$core$Char8 _115;
int64_t _116;
frost$core$Int _119;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int _140;
frost$core$String* _144;
frost$core$Char8* _145;
frost$core$Int* _146;
frost$core$Int _147;
frost$core$Int* _148;
frost$core$Int _149;
int64_t _150;
int64_t _151;
int64_t _152;
frost$core$Int _153;
frost$core$Object* _155;
frost$core$Object* _157;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:545
_1 = &param0->_length;
_2 = *_1;
_3 = &param1->_length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 + _6;
_8 = (frost$core$Int) {_7};
_9 = frost$core$Int64$init$frost$core$Int(_8);
_10 = _9.value;
_11 = ((frost$core$Char8*) frostAlloc(_10 * 1));
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:546
_14 = (frost$core$Int) {0u};
_15 = &param0->_length;
_16 = *_15;
_17 = (frost$core$Bit) {false};
_18 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_14, _16, _17);
_19 = _18.min;
*(&local1) = _19;
_21 = _18.max;
_22 = _18.inclusive;
_23 = _22.value;
_24 = (frost$core$Int) {1u};
if (_23) goto block4; else goto block5;
block4:;
_26 = _19.value;
_27 = _21.value;
_28 = _26 <= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block1; else goto block2;
block5:;
_32 = _19.value;
_33 = _21.value;
_34 = _32 < _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:547
_39 = *(&local0);
_40 = *(&local1);
_41 = frost$core$Int64$init$frost$core$Int(_40);
_42 = &param0->data;
_43 = *_42;
_44 = *(&local1);
_45 = frost$core$Int64$init$frost$core$Int(_44);
_46 = _45.value;
_47 = _43[_46];
_48 = _41.value;
_39[_48] = _47;
_51 = *(&local1);
_52 = _21.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
if (_23) goto block7; else goto block8;
block7:;
_57 = _55.value;
_58 = _24.value;
_59 = _57 >= _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block6; else goto block2;
block8:;
_63 = _55.value;
_64 = _24.value;
_65 = _63 > _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block6; else goto block2;
block6:;
_69 = _51.value;
_70 = _24.value;
_71 = _69 + _70;
_72 = (frost$core$Int) {_71};
*(&local1) = _72;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:549
_76 = (frost$core$Int) {0u};
_77 = &param1->_length;
_78 = *_77;
_79 = (frost$core$Bit) {false};
_80 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_76, _78, _79);
_81 = _80.min;
*(&local2) = _81;
_83 = _80.max;
_84 = _80.inclusive;
_85 = _84.value;
_86 = (frost$core$Int) {1u};
if (_85) goto block12; else goto block13;
block12:;
_88 = _81.value;
_89 = _83.value;
_90 = _88 <= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block9; else goto block10;
block13:;
_94 = _81.value;
_95 = _83.value;
_96 = _94 < _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:550
_101 = *(&local0);
_102 = &param0->_length;
_103 = *_102;
_104 = *(&local2);
_105 = _103.value;
_106 = _104.value;
_107 = _105 + _106;
_108 = (frost$core$Int) {_107};
_109 = frost$core$Int64$init$frost$core$Int(_108);
_110 = &param1->data;
_111 = *_110;
_112 = *(&local2);
_113 = frost$core$Int64$init$frost$core$Int(_112);
_114 = _113.value;
_115 = _111[_114];
_116 = _109.value;
_101[_116] = _115;
_119 = *(&local2);
_120 = _83.value;
_121 = _119.value;
_122 = _120 - _121;
_123 = (frost$core$Int) {_122};
if (_85) goto block15; else goto block16;
block15:;
_125 = _123.value;
_126 = _86.value;
_127 = _125 >= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block14; else goto block10;
block16:;
_131 = _123.value;
_132 = _86.value;
_133 = _131 > _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block14; else goto block10;
block14:;
_137 = _119.value;
_138 = _86.value;
_139 = _137 + _138;
_140 = (frost$core$Int) {_139};
*(&local2) = _140;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:552
FROST_ASSERT(48 == sizeof(frost$core$String));
_144 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_145 = *(&local0);
_146 = &param0->_length;
_147 = *_146;
_148 = &param1->_length;
_149 = *_148;
_150 = _147.value;
_151 = _149.value;
_152 = _150 + _151;
_153 = (frost$core$Int) {_152};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_144, _145, _153);
_155 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_157);
return _144;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

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
frost$core$String* frost$core$String$$MUL$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_11 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_11 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$Char8** _40;
frost$core$Char8* _41;
frost$core$Int _42;
frost$core$Int64 _43;
int64_t _44;
frost$core$Char8 _45;
frost$core$Char8** _46;
frost$core$Char8* _47;
frost$core$Int _48;
frost$core$Int64 _49;
int64_t _50;
frost$core$Char8 _51;
uint8_t _54;
uint8_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$Bit _62;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
frost$core$Bit _90;
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
_42 = *(&local0);
_43 = frost$core$Int64$init$frost$core$Int(_42);
_44 = _43.value;
_45 = _41[_44];
_46 = &param1->data;
_47 = *_46;
_48 = *(&local0);
_49 = frost$core$Int64$init$frost$core$Int(_48);
_50 = _49.value;
_51 = _47[_50];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:611:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_54 = _45.value;
_55 = _51.value;
_56 = _54 != _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:612
_62 = (frost$core$Bit) {false};
return _62;
block9:;
_65 = *(&local0);
_66 = _22.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
if (_24) goto block12; else goto block13;
block12:;
_71 = _69.value;
_72 = _25.value;
_73 = _71 >= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block11; else goto block4;
block13:;
_77 = _69.value;
_78 = _25.value;
_79 = _77 > _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block11; else goto block4;
block11:;
_83 = _65.value;
_84 = _25.value;
_85 = _83 + _84;
_86 = (frost$core$Int) {_85};
*(&local0) = _86;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:615
_90 = (frost$core$Bit) {true};
return _90;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$Comparable* _32;
frost$core$Int* _35;
frost$core$Int _36;
frost$core$Int* _39;
frost$core$String$Index _41;
frost$core$String$Index _44;
frost$core$Comparable* _46;
$fn41 _47;
frost$core$Bit _48;
bool _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$String$Index _55;
frost$core$Comparable* _56;
frost$core$Comparable* _57;
frost$core$Int* _60;
frost$core$Int _61;
frost$core$Int* _64;
frost$core$String$Index _66;
frost$core$String$Index _69;
frost$core$Comparable* _71;
$fn42 _72;
frost$core$Bit _73;
bool _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$String$Index _81;
frost$core$Char32 _82;
frost$core$String$Index _85;
frost$core$Char32 _86;
frost$core$Char32 _89;
frost$core$Char32 _90;
int32_t _93;
int32_t _94;
bool _95;
frost$core$Bit _96;
bool _98;
frost$core$String$Index _101;
frost$core$String$Index _102;
frost$core$String$Index _105;
frost$core$String$Index _106;
frost$core$Char32 _111;
frost$core$Char32 _112;
int32_t _115;
int32_t _116;
bool _117;
frost$core$Bit _118;
frost$core$String$Index _122;
frost$core$Equatable* _123;
frost$core$Equatable* _124;
frost$core$Int* _127;
frost$core$Int _128;
frost$core$Int* _131;
frost$core$String$Index _133;
frost$core$String$Index _136;
frost$core$Equatable* _138;
$fn43 _139;
frost$core$Bit _140;
frost$core$Object* _141;
frost$core$Object* _143;
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
$tmp44 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp44->value = _30;
_31 = ((frost$core$Comparable*) $tmp44);
_32 = _31;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_35 = &param0->_length;
_36 = *_35;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_39 = &(&local7)->value;
*_39 = _36;
_41 = *(&local7);
*(&local6) = _41;
_44 = *(&local6);
frost$core$String$Index$wrapper* $tmp45;
$tmp45 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp45->value = _44;
_46 = ((frost$core$Comparable*) $tmp45);
ITable* $tmp46 = _32->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp46 = $tmp46->next;
}
_47 = $tmp46->methods[1];
_48 = _47(_32, _46);
_49 = _48.value;
_50 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_52);
if (_49) goto block8; else goto block7;
block8:;
_55 = *(&local5);
frost$core$String$Index$wrapper* $tmp47;
$tmp47 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp47->value = _55;
_56 = ((frost$core$Comparable*) $tmp47);
_57 = _56;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_60 = &param1->_length;
_61 = *_60;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_64 = &(&local9)->value;
*_64 = _61;
_66 = *(&local9);
*(&local8) = _66;
_69 = *(&local8);
frost$core$String$Index$wrapper* $tmp48;
$tmp48 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp48->value = _69;
_71 = ((frost$core$Comparable*) $tmp48);
ITable* $tmp49 = _57->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp49 = $tmp49->next;
}
_72 = $tmp49->methods[1];
_73 = _72(_57, _71);
_74 = _73.value;
_75 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_77);
if (_74) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:629
_81 = *(&local2);
_82 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _81);
*(&local10) = _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:630
_85 = *(&local5);
_86 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _85);
*(&local11) = _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:631
_89 = *(&local10);
_90 = *(&local11);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from String.frost:631:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_93 = _89.value;
_94 = _90.value;
_95 = _93 == _94;
_96 = (frost$core$Bit) {_95};
_98 = _96.value;
if (_98) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:632
_101 = *(&local2);
_102 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _101);
*(&local2) = _102;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:633
_105 = *(&local5);
_106 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _105);
*(&local5) = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:634
goto block5;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:636
_111 = *(&local10);
_112 = *(&local11);
// begin inline call to function frost.core.Char32.>(other:frost.core.Char32):frost.core.Bit from String.frost:636:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:42
_115 = _111.value;
_116 = _112.value;
_117 = _115 > _116;
_118 = (frost$core$Bit) {_117};
return _118;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:638
_122 = *(&local2);
frost$core$String$Index$wrapper* $tmp50;
$tmp50 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp50->value = _122;
_123 = ((frost$core$Equatable*) $tmp50);
_124 = _123;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:638:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_127 = &param0->_length;
_128 = *_127;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_131 = &(&local13)->value;
*_131 = _128;
_133 = *(&local13);
*(&local12) = _133;
_136 = *(&local12);
frost$core$String$Index$wrapper* $tmp51;
$tmp51 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp51->value = _136;
_138 = ((frost$core$Equatable*) $tmp51);
ITable* $tmp52 = _124->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp52 = $tmp52->next;
}
_139 = $tmp52->methods[1];
_140 = _139(_124, _138);
_141 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_141);
_143 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_143);
return _140;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
frost$core$Int _1;
frost$core$Char8** _4;
frost$core$Char8* _5;
frost$core$Int _6;
frost$core$Int64 _7;
int64_t _8;
frost$core$Char8 _9;
frost$core$Char8 _12;
uint8_t _15;
int32_t _16;
int32_t _17;
frost$core$Int32 _18;
frost$core$Char8 _22;
uint8_t _25;
frost$core$UInt8 _26;
frost$core$UInt8 _28;
uint8_t _29;
uint8_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int32 _36;
frost$core$Char32 _37;
frost$core$Char8 _40;
uint8_t _43;
frost$core$UInt8 _44;
frost$core$UInt8 _46;
uint8_t _47;
uint8_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _54;
frost$core$Int _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$core$Int* _60;
frost$core$Int _61;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
frost$core$Int32 _72;
frost$core$Int32 _73;
int32_t _76;
int32_t _77;
int32_t _78;
frost$core$Int32 _79;
frost$core$Int32 _81;
int32_t _84;
int32_t _85;
int32_t _86;
frost$core$Int32 _87;
frost$core$Char8** _89;
frost$core$Char8* _90;
frost$core$Int _91;
frost$core$Int64 _92;
frost$core$Int64 _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int64 _97;
int64_t _98;
frost$core$Char8 _99;
uint8_t _102;
int32_t _103;
int32_t _104;
frost$core$Int32 _105;
frost$core$Int32 _107;
int32_t _110;
int32_t _111;
int32_t _112;
frost$core$Int32 _113;
int32_t _115;
int32_t _116;
int32_t _117;
frost$core$Int32 _118;
frost$core$Int32 _121;
frost$core$Char32 _122;
frost$core$Char8 _125;
uint8_t _128;
frost$core$UInt8 _129;
frost$core$UInt8 _131;
uint8_t _132;
uint8_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _139;
frost$core$Int _140;
int64_t _141;
int64_t _142;
int64_t _143;
frost$core$Int _144;
frost$core$Int* _145;
frost$core$Int _146;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _151;
frost$core$Int _153;
frost$core$Int32 _157;
frost$core$Int32 _158;
int32_t _161;
int32_t _162;
int32_t _163;
frost$core$Int32 _164;
frost$core$Int32 _166;
int32_t _169;
int32_t _170;
int32_t _171;
frost$core$Int32 _172;
frost$core$Char8** _174;
frost$core$Char8* _175;
frost$core$Int _176;
frost$core$Int64 _177;
frost$core$Int64 _178;
int64_t _179;
int64_t _180;
int64_t _181;
frost$core$Int64 _182;
int64_t _183;
frost$core$Char8 _184;
uint8_t _187;
int32_t _188;
int32_t _189;
frost$core$Int32 _190;
frost$core$Int32 _192;
int32_t _195;
int32_t _196;
int32_t _197;
frost$core$Int32 _198;
frost$core$Int32 _200;
int32_t _203;
int32_t _204;
int32_t _205;
frost$core$Int32 _206;
int32_t _208;
int32_t _209;
int32_t _210;
frost$core$Int32 _211;
frost$core$Char8** _212;
frost$core$Char8* _213;
frost$core$Int _214;
frost$core$Int64 _215;
frost$core$Int64 _216;
int64_t _217;
int64_t _218;
int64_t _219;
frost$core$Int64 _220;
int64_t _221;
frost$core$Char8 _222;
uint8_t _225;
int32_t _226;
int32_t _227;
frost$core$Int32 _228;
frost$core$Int32 _230;
int32_t _233;
int32_t _234;
int32_t _235;
frost$core$Int32 _236;
int32_t _238;
int32_t _239;
int32_t _240;
frost$core$Int32 _241;
frost$core$Int32 _244;
frost$core$Char32 _245;
frost$core$Int _248;
frost$core$Int _249;
int64_t _250;
int64_t _251;
int64_t _252;
frost$core$Int _253;
frost$core$Int* _254;
frost$core$Int _255;
int64_t _256;
int64_t _257;
bool _258;
frost$core$Bit _259;
bool _260;
frost$core$Int _262;
frost$core$Int32 _266;
frost$core$Int32 _267;
int32_t _270;
int32_t _271;
int32_t _272;
frost$core$Int32 _273;
frost$core$Int32 _275;
int32_t _278;
int32_t _279;
int32_t _280;
frost$core$Int32 _281;
frost$core$Char8** _283;
frost$core$Char8* _284;
frost$core$Int _285;
frost$core$Int64 _286;
frost$core$Int64 _287;
int64_t _288;
int64_t _289;
int64_t _290;
frost$core$Int64 _291;
int64_t _292;
frost$core$Char8 _293;
uint8_t _296;
int32_t _297;
int32_t _298;
frost$core$Int32 _299;
frost$core$Int32 _301;
int32_t _304;
int32_t _305;
int32_t _306;
frost$core$Int32 _307;
frost$core$Int32 _309;
int32_t _312;
int32_t _313;
int32_t _314;
frost$core$Int32 _315;
int32_t _317;
int32_t _318;
int32_t _319;
frost$core$Int32 _320;
frost$core$Char8** _321;
frost$core$Char8* _322;
frost$core$Int _323;
frost$core$Int64 _324;
frost$core$Int64 _325;
int64_t _326;
int64_t _327;
int64_t _328;
frost$core$Int64 _329;
int64_t _330;
frost$core$Char8 _331;
uint8_t _334;
int32_t _335;
int32_t _336;
frost$core$Int32 _337;
frost$core$Int32 _339;
int32_t _342;
int32_t _343;
int32_t _344;
frost$core$Int32 _345;
frost$core$Int32 _347;
int32_t _350;
int32_t _351;
int32_t _352;
frost$core$Int32 _353;
int32_t _355;
int32_t _356;
int32_t _357;
frost$core$Int32 _358;
frost$core$Char8** _359;
frost$core$Char8* _360;
frost$core$Int _361;
frost$core$Int64 _362;
frost$core$Int64 _363;
int64_t _364;
int64_t _365;
int64_t _366;
frost$core$Int64 _367;
int64_t _368;
frost$core$Char8 _369;
uint8_t _372;
int32_t _373;
int32_t _374;
frost$core$Int32 _375;
frost$core$Int32 _377;
int32_t _380;
int32_t _381;
int32_t _382;
frost$core$Int32 _383;
int32_t _385;
int32_t _386;
int32_t _387;
frost$core$Int32 _388;
frost$core$Int32 _391;
frost$core$Char32 _392;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:645
_1 = param1.value;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:646
_4 = &param0->data;
_5 = *_4;
_6 = *(&local0);
_7 = frost$core$Int64$init$frost$core$Int(_6);
_8 = _7.value;
_9 = _5[_8];
*(&local1) = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:647
_12 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:647:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_15 = _12.value;
_16 = ((int32_t) _15);
_17 = _16 & 255u;
_18 = (frost$core$Int32) {_17};
*(&local2) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:648
_22 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:648:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_25 = _22.value;
_26 = (frost$core$UInt8) {_25};
_28 = (frost$core$UInt8) {192u};
_29 = _26.value;
_30 = _28.value;
_31 = _29 < _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:649
_36 = *(&local2);
_37 = frost$core$Char32$init$frost$core$Int32(_36);
return _37;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:651
_40 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:651:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_43 = _40.value;
_44 = (frost$core$UInt8) {_43};
_46 = (frost$core$UInt8) {224u};
_47 = _44.value;
_48 = _46.value;
_49 = _47 < _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:652
_54 = *(&local0);
_55 = (frost$core$Int) {1u};
_56 = _54.value;
_57 = _55.value;
_58 = _56 + _57;
_59 = (frost$core$Int) {_58};
_60 = &param0->_length;
_61 = *_60;
_62 = _59.value;
_63 = _61.value;
_64 = _62 < _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block8; else goto block9;
block9:;
_68 = (frost$core$Int) {652u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _68);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:653
_72 = *(&local2);
_73 = (frost$core$Int32) {31u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_76 = _72.value;
_77 = _73.value;
_78 = _76 & _77;
_79 = (frost$core$Int32) {_78};
_81 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:653:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_84 = _79.value;
_85 = _81.value;
_86 = _84 << _85;
_87 = (frost$core$Int32) {_86};
_89 = &param0->data;
_90 = *_89;
_91 = *(&local0);
_92 = frost$core$Int64$init$frost$core$Int(_91);
_93 = (frost$core$Int64) {1u};
_94 = _92.value;
_95 = _93.value;
_96 = _94 + _95;
_97 = (frost$core$Int64) {_96};
_98 = _97.value;
_99 = _90[_98];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:653:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_102 = _99.value;
_103 = ((int32_t) _102);
_104 = _103 & 255u;
_105 = (frost$core$Int32) {_104};
_107 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_110 = _105.value;
_111 = _107.value;
_112 = _110 & _111;
_113 = (frost$core$Int32) {_112};
_115 = _87.value;
_116 = _113.value;
_117 = _115 + _116;
_118 = (frost$core$Int32) {_117};
*(&local2) = _118;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:654
_121 = *(&local2);
_122 = frost$core$Char32$init$frost$core$Int32(_121);
return _122;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:656
_125 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:656:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_128 = _125.value;
_129 = (frost$core$UInt8) {_128};
_131 = (frost$core$UInt8) {240u};
_132 = _129.value;
_133 = _131.value;
_134 = _132 < _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:657
_139 = *(&local0);
_140 = (frost$core$Int) {2u};
_141 = _139.value;
_142 = _140.value;
_143 = _141 + _142;
_144 = (frost$core$Int) {_143};
_145 = &param0->_length;
_146 = *_145;
_147 = _144.value;
_148 = _146.value;
_149 = _147 < _148;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block17; else goto block18;
block18:;
_153 = (frost$core$Int) {657u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s54, _153);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:658
_157 = *(&local2);
_158 = (frost$core$Int32) {15u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_161 = _157.value;
_162 = _158.value;
_163 = _161 & _162;
_164 = (frost$core$Int32) {_163};
_166 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:658:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_169 = _164.value;
_170 = _166.value;
_171 = _169 << _170;
_172 = (frost$core$Int32) {_171};
_174 = &param0->data;
_175 = *_174;
_176 = *(&local0);
_177 = frost$core$Int64$init$frost$core$Int(_176);
_178 = (frost$core$Int64) {1u};
_179 = _177.value;
_180 = _178.value;
_181 = _179 + _180;
_182 = (frost$core$Int64) {_181};
_183 = _182.value;
_184 = _175[_183];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:658:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_187 = _184.value;
_188 = ((int32_t) _187);
_189 = _188 & 255u;
_190 = (frost$core$Int32) {_189};
_192 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_195 = _190.value;
_196 = _192.value;
_197 = _195 & _196;
_198 = (frost$core$Int32) {_197};
_200 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:658:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_203 = _198.value;
_204 = _200.value;
_205 = _203 << _204;
_206 = (frost$core$Int32) {_205};
_208 = _172.value;
_209 = _206.value;
_210 = _208 + _209;
_211 = (frost$core$Int32) {_210};
_212 = &param0->data;
_213 = *_212;
_214 = *(&local0);
_215 = frost$core$Int64$init$frost$core$Int(_214);
_216 = (frost$core$Int64) {2u};
_217 = _215.value;
_218 = _216.value;
_219 = _217 + _218;
_220 = (frost$core$Int64) {_219};
_221 = _220.value;
_222 = _213[_221];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:659:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_225 = _222.value;
_226 = ((int32_t) _225);
_227 = _226 & 255u;
_228 = (frost$core$Int32) {_227};
_230 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:659:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_233 = _228.value;
_234 = _230.value;
_235 = _233 & _234;
_236 = (frost$core$Int32) {_235};
_238 = _211.value;
_239 = _236.value;
_240 = _238 + _239;
_241 = (frost$core$Int32) {_240};
*(&local2) = _241;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:660
_244 = *(&local2);
_245 = frost$core$Char32$init$frost$core$Int32(_244);
return _245;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:662
_248 = *(&local0);
_249 = (frost$core$Int) {3u};
_250 = _248.value;
_251 = _249.value;
_252 = _250 + _251;
_253 = (frost$core$Int) {_252};
_254 = &param0->_length;
_255 = *_254;
_256 = _253.value;
_257 = _255.value;
_258 = _256 < _257;
_259 = (frost$core$Bit) {_258};
_260 = _259.value;
if (_260) goto block26; else goto block27;
block27:;
_262 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _262);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:663
_266 = *(&local2);
_267 = (frost$core$Int32) {7u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_270 = _266.value;
_271 = _267.value;
_272 = _270 & _271;
_273 = (frost$core$Int32) {_272};
_275 = (frost$core$Int32) {18u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:663:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_278 = _273.value;
_279 = _275.value;
_280 = _278 << _279;
_281 = (frost$core$Int32) {_280};
_283 = &param0->data;
_284 = *_283;
_285 = *(&local0);
_286 = frost$core$Int64$init$frost$core$Int(_285);
_287 = (frost$core$Int64) {1u};
_288 = _286.value;
_289 = _287.value;
_290 = _288 + _289;
_291 = (frost$core$Int64) {_290};
_292 = _291.value;
_293 = _284[_292];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:663:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_296 = _293.value;
_297 = ((int32_t) _296);
_298 = _297 & 255u;
_299 = (frost$core$Int32) {_298};
_301 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_304 = _299.value;
_305 = _301.value;
_306 = _304 & _305;
_307 = (frost$core$Int32) {_306};
_309 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:663:81
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_312 = _307.value;
_313 = _309.value;
_314 = _312 << _313;
_315 = (frost$core$Int32) {_314};
_317 = _281.value;
_318 = _315.value;
_319 = _317 + _318;
_320 = (frost$core$Int32) {_319};
_321 = &param0->data;
_322 = *_321;
_323 = *(&local0);
_324 = frost$core$Int64$init$frost$core$Int(_323);
_325 = (frost$core$Int64) {2u};
_326 = _324.value;
_327 = _325.value;
_328 = _326 + _327;
_329 = (frost$core$Int64) {_328};
_330 = _329.value;
_331 = _322[_330];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:664:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_334 = _331.value;
_335 = ((int32_t) _334);
_336 = _335 & 255u;
_337 = (frost$core$Int32) {_336};
_339 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:664:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_342 = _337.value;
_343 = _339.value;
_344 = _342 & _343;
_345 = (frost$core$Int32) {_344};
_347 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:664:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_350 = _345.value;
_351 = _347.value;
_352 = _350 << _351;
_353 = (frost$core$Int32) {_352};
_355 = _320.value;
_356 = _353.value;
_357 = _355 + _356;
_358 = (frost$core$Int32) {_357};
_359 = &param0->data;
_360 = *_359;
_361 = *(&local0);
_362 = frost$core$Int64$init$frost$core$Int(_361);
_363 = (frost$core$Int64) {3u};
_364 = _362.value;
_365 = _363.value;
_366 = _364 + _365;
_367 = (frost$core$Int64) {_366};
_368 = _367.value;
_369 = _360[_368];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:665:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_372 = _369.value;
_373 = ((int32_t) _372);
_374 = _373 & 255u;
_375 = (frost$core$Int32) {_374};
_377 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:665:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_380 = _375.value;
_381 = _377.value;
_382 = _380 & _381;
_383 = (frost$core$Int32) {_382};
_385 = _358.value;
_386 = _383.value;
_387 = _385 + _386;
_388 = (frost$core$Int32) {_387};
*(&local2) = _388;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:666
_391 = *(&local2);
_392 = frost$core$Char32$init$frost$core$Int32(_391);
return _392;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32(frost$core$String* param0, frost$core$Int param1) {

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
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int local0;
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
frost$core$Char8** _25;
frost$core$Char8* _26;
frost$core$String$Index _27;
frost$core$Int _28;
frost$core$Int64 _29;
int64_t _30;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int _35;
frost$core$Int* _36;
frost$core$Char8** _39;
frost$core$Int* _42;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String** _48;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$String** _52;
frost$core$Object* _55;
frost$core$Object* _57;
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
FROST_ASSERT(48 == sizeof(frost$core$String));
_24 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_25 = &param0->data;
_26 = *_25;
_27 = param1.min;
_28 = _27.value;
_29 = frost$core$Int64$init$frost$core$Int(_28);
_30 = _29.value;
_31 = _26 + _30;
_32 = *(&local0);
// begin inline call to frost.core.String.init(data:frost.unsafe.Pointer<frost.core.Char8>, length:frost.core.Int, owner:frost.core.String) from String.frost:692:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
_35 = (frost$core$Int) {0u};
_36 = &_24->dummy;
*_36 = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:358
_39 = &_24->data;
*_39 = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:359
_42 = &_24->_length;
*_42 = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:360
_45 = param0;
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = &_24->owner;
_49 = *_48;
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = &_24->owner;
*_52 = _45;
_55 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_57);
return _24;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

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
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

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
frost$core$Char8** _44;
frost$core$Char8* _45;
frost$core$Int _46;
frost$core$Int64 _47;
int64_t _48;
frost$core$Char8 _49;
frost$core$MutableString* _52;
frost$core$Char8 _53;
frost$core$Int _56;
frost$core$Int _57;
int64_t _58;
int64_t _59;
int64_t _60;
frost$core$Int _61;
frost$core$Char8 _64;
uint8_t _67;
frost$core$UInt8 _68;
frost$core$UInt8 _70;
uint8_t _71;
uint8_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$MutableString* _78;
frost$core$Char8** _79;
frost$core$Char8* _80;
frost$core$Int _81;
frost$core$Int64 _82;
int64_t _83;
frost$core$Char8 _84;
frost$core$Int _87;
frost$core$Int _88;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
frost$core$Char8 _96;
uint8_t _99;
frost$core$UInt8 _100;
frost$core$UInt8 _102;
uint8_t _103;
uint8_t _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$MutableString* _110;
frost$core$Char8** _111;
frost$core$Char8* _112;
frost$core$Int _113;
frost$core$Int64 _114;
int64_t _115;
frost$core$Char8 _116;
frost$core$Int _119;
frost$core$Int _120;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
frost$core$Char8 _128;
uint8_t _131;
frost$core$UInt8 _132;
frost$core$UInt8 _134;
uint8_t _135;
uint8_t _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$MutableString* _142;
frost$core$Char8** _143;
frost$core$Char8* _144;
frost$core$Int _145;
frost$core$Int64 _146;
int64_t _147;
frost$core$Char8 _148;
frost$core$Int _151;
frost$core$Int _152;
int64_t _153;
int64_t _154;
int64_t _155;
frost$core$Int _156;
frost$core$MutableString* _161;
frost$core$String* _162;
frost$core$Object* _163;
frost$core$Object* _165;
frost$core$MutableString* _167;
frost$core$Object* _168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:733
_1 = param1.min;
_2 = _1.value;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:734
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
_46 = *(&local0);
_47 = frost$core$Int64$init$frost$core$Int(_46);
_48 = _47.value;
_49 = _45[_48];
*(&local3) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:741
_52 = *(&local1);
_53 = *(&local3);
frost$core$MutableString$append$frost$core$Char8(_52, _53);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:742
_56 = *(&local0);
_57 = (frost$core$Int) {1u};
_58 = _56.value;
_59 = _57.value;
_60 = _58 + _59;
_61 = (frost$core$Int) {_60};
*(&local0) = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:743
_64 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:743:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_67 = _64.value;
_68 = (frost$core$UInt8) {_67};
_70 = (frost$core$UInt8) {192u};
_71 = _68.value;
_72 = _70.value;
_73 = _71 >= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:744
_78 = *(&local1);
_79 = &param0->data;
_80 = *_79;
_81 = *(&local0);
_82 = frost$core$Int64$init$frost$core$Int(_81);
_83 = _82.value;
_84 = _80[_83];
frost$core$MutableString$append$frost$core$Char8(_78, _84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:745
_87 = *(&local0);
_88 = (frost$core$Int) {1u};
_89 = _87.value;
_90 = _88.value;
_91 = _89 + _90;
_92 = (frost$core$Int) {_91};
*(&local0) = _92;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:747
_96 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:747:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_99 = _96.value;
_100 = (frost$core$UInt8) {_99};
_102 = (frost$core$UInt8) {224u};
_103 = _100.value;
_104 = _102.value;
_105 = _103 >= _104;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:748
_110 = *(&local1);
_111 = &param0->data;
_112 = *_111;
_113 = *(&local0);
_114 = frost$core$Int64$init$frost$core$Int(_113);
_115 = _114.value;
_116 = _112[_115];
frost$core$MutableString$append$frost$core$Char8(_110, _116);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:749
_119 = *(&local0);
_120 = (frost$core$Int) {1u};
_121 = _119.value;
_122 = _120.value;
_123 = _121 + _122;
_124 = (frost$core$Int) {_123};
*(&local0) = _124;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:751
_128 = *(&local3);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:751:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_131 = _128.value;
_132 = (frost$core$UInt8) {_131};
_134 = (frost$core$UInt8) {240u};
_135 = _132.value;
_136 = _134.value;
_137 = _135 >= _136;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:752
_142 = *(&local1);
_143 = &param0->data;
_144 = *_143;
_145 = *(&local0);
_146 = frost$core$Int64$init$frost$core$Int(_145);
_147 = _146.value;
_148 = _144[_147];
frost$core$MutableString$append$frost$core$Char8(_142, _148);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:753
_151 = *(&local0);
_152 = (frost$core$Int) {1u};
_153 = _151.value;
_154 = _152.value;
_155 = _153 + _154;
_156 = (frost$core$Int) {_155};
*(&local0) = _156;
goto block13;
block13:;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:756
_161 = *(&local1);
_162 = frost$core$MutableString$finish$R$frost$core$String(_161);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_165 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = *(&local1);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local1) = ((frost$core$MutableString*) NULL);
return _162;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

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
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT param1) {

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
frost$core$Char8** _181;
frost$core$Char8* _182;
frost$core$Int _183;
frost$core$Int64 _184;
int64_t _185;
frost$core$Char8 _186;
frost$core$MutableString* _189;
frost$core$Char8 _190;
frost$core$Int _193;
frost$core$Int _194;
int64_t _195;
int64_t _196;
int64_t _197;
frost$core$Int _198;
frost$core$Char8 _201;
uint8_t _204;
frost$core$UInt8 _205;
frost$core$UInt8 _207;
uint8_t _208;
uint8_t _209;
bool _210;
frost$core$Bit _211;
bool _212;
frost$core$MutableString* _215;
frost$core$Char8** _216;
frost$core$Char8* _217;
frost$core$Int _218;
frost$core$Int64 _219;
int64_t _220;
frost$core$Char8 _221;
frost$core$Int _224;
frost$core$Int _225;
int64_t _226;
int64_t _227;
int64_t _228;
frost$core$Int _229;
frost$core$Char8 _233;
uint8_t _236;
frost$core$UInt8 _237;
frost$core$UInt8 _239;
uint8_t _240;
uint8_t _241;
bool _242;
frost$core$Bit _243;
bool _244;
frost$core$MutableString* _247;
frost$core$Char8** _248;
frost$core$Char8* _249;
frost$core$Int _250;
frost$core$Int64 _251;
int64_t _252;
frost$core$Char8 _253;
frost$core$Int _256;
frost$core$Int _257;
int64_t _258;
int64_t _259;
int64_t _260;
frost$core$Int _261;
frost$core$Char8 _265;
uint8_t _268;
frost$core$UInt8 _269;
frost$core$UInt8 _271;
uint8_t _272;
uint8_t _273;
bool _274;
frost$core$Bit _275;
bool _276;
frost$core$MutableString* _279;
frost$core$Char8** _280;
frost$core$Char8* _281;
frost$core$Int _282;
frost$core$Int64 _283;
int64_t _284;
frost$core$Char8 _285;
frost$core$Int _288;
frost$core$Int _289;
int64_t _290;
int64_t _291;
int64_t _292;
frost$core$Int _293;
frost$core$Int _297;
frost$core$Int _298;
frost$core$Bit _299;
frost$core$Range$LTfrost$core$Int$GT _300;
frost$core$Int _301;
frost$core$Int _303;
frost$core$Bit _304;
bool _305;
frost$core$Int _306;
int64_t _308;
int64_t _309;
bool _310;
frost$core$Bit _311;
bool _312;
int64_t _314;
int64_t _315;
bool _316;
frost$core$Bit _317;
bool _318;
frost$core$Int _321;
frost$core$Int _322;
int64_t _323;
int64_t _324;
bool _325;
frost$core$Bit _326;
bool _327;
frost$core$MutableString* _330;
frost$core$Object* _331;
$fn66 _332;
frost$core$String* _333;
frost$core$Object* _334;
frost$core$Object* _336;
frost$core$MutableString* _338;
frost$core$Object* _339;
frost$core$Int _344;
frost$core$Int* _347;
frost$core$String$Index _349;
frost$core$String$Index _352;
frost$core$String$Index _353;
frost$core$Int _354;
frost$core$Int _357;
int64_t _358;
int64_t _359;
int64_t _360;
frost$core$Int _361;
int64_t _363;
int64_t _364;
bool _365;
frost$core$Bit _366;
bool _367;
int64_t _369;
int64_t _370;
bool _371;
frost$core$Bit _372;
bool _373;
int64_t _375;
int64_t _376;
int64_t _377;
frost$core$Int _378;
frost$core$Int _385;
frost$core$Int _386;
int64_t _387;
int64_t _388;
bool _389;
frost$core$Bit _390;
bool _391;
frost$core$Int _393;
frost$core$Int _398;
frost$core$Int _399;
int64_t _400;
int64_t _401;
bool _402;
frost$core$Bit _403;
bool _404;
frost$core$Char8** _407;
frost$core$Char8* _408;
frost$core$Int _409;
frost$core$Int64 _410;
int64_t _411;
frost$core$Char8 _412;
frost$core$MutableString* _415;
frost$core$Char8 _416;
frost$core$Int _419;
frost$core$Int _422;
frost$core$Int _423;
int64_t _424;
int64_t _425;
int64_t _426;
frost$core$Int _427;
frost$core$Char8 _430;
uint8_t _433;
frost$core$UInt8 _434;
frost$core$UInt8 _436;
uint8_t _437;
uint8_t _438;
bool _439;
frost$core$Bit _440;
bool _441;
frost$core$MutableString* _444;
frost$core$Char8** _445;
frost$core$Char8* _446;
frost$core$Int _447;
frost$core$Int64 _448;
int64_t _449;
frost$core$Char8 _450;
frost$core$Int _453;
frost$core$Int _454;
int64_t _455;
int64_t _456;
int64_t _457;
frost$core$Int _458;
frost$core$Char8 _462;
uint8_t _465;
frost$core$UInt8 _466;
frost$core$UInt8 _468;
uint8_t _469;
uint8_t _470;
bool _471;
frost$core$Bit _472;
bool _473;
frost$core$MutableString* _476;
frost$core$Char8** _477;
frost$core$Char8* _478;
frost$core$Int _479;
frost$core$Int64 _480;
int64_t _481;
frost$core$Char8 _482;
frost$core$Int _485;
frost$core$Int _486;
int64_t _487;
int64_t _488;
int64_t _489;
frost$core$Int _490;
frost$core$Char8 _494;
uint8_t _497;
frost$core$UInt8 _498;
frost$core$UInt8 _500;
uint8_t _501;
uint8_t _502;
bool _503;
frost$core$Bit _504;
bool _505;
frost$core$MutableString* _508;
frost$core$Char8** _509;
frost$core$Char8* _510;
frost$core$Int _511;
frost$core$Int64 _512;
int64_t _513;
frost$core$Char8 _514;
frost$core$Int _518;
frost$core$Int _519;
int64_t _520;
int64_t _521;
int64_t _522;
frost$core$Int _523;
frost$core$Char8** _527;
frost$core$Char8* _528;
frost$core$Int _529;
frost$core$Int64 _530;
int64_t _531;
frost$core$Char8 _532;
uint8_t _535;
frost$core$UInt8 _536;
frost$core$UInt8 _538;
uint8_t _539;
uint8_t _540;
bool _541;
frost$core$Bit _542;
bool _543;
frost$core$Char8** _545;
frost$core$Char8* _546;
frost$core$Int _547;
frost$core$Int64 _548;
int64_t _549;
frost$core$Char8 _550;
uint8_t _553;
frost$core$UInt8 _554;
frost$core$UInt8 _556;
uint8_t _557;
uint8_t _558;
bool _559;
frost$core$Bit _560;
bool _561;
frost$core$Int _564;
frost$core$Int _565;
int64_t _566;
int64_t _567;
int64_t _568;
frost$core$Int _569;
frost$core$Int _573;
frost$core$Int _574;
frost$core$Int _575;
frost$core$Bit _576;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _577;
frost$core$Int _578;
frost$core$Int _580;
frost$core$Int _581;
int64_t _584;
int64_t _585;
frost$core$Int _586;
frost$core$Bit _588;
bool _589;
frost$core$Int _590;
int64_t _591;
int64_t _592;
bool _593;
frost$core$Bit _594;
bool _595;
int64_t _598;
int64_t _599;
bool _600;
frost$core$Bit _601;
bool _602;
int64_t _604;
int64_t _605;
bool _606;
frost$core$Bit _607;
bool _608;
int64_t _611;
int64_t _612;
bool _613;
frost$core$Bit _614;
bool _615;
int64_t _617;
int64_t _618;
bool _619;
frost$core$Bit _620;
bool _621;
frost$core$Int _624;
frost$core$Int _625;
int64_t _626;
int64_t _627;
bool _628;
frost$core$Bit _629;
bool _630;
frost$core$MutableString* _633;
frost$core$Object* _634;
$fn67 _635;
frost$core$String* _636;
frost$core$Object* _637;
frost$core$Object* _639;
frost$core$MutableString* _641;
frost$core$Object* _642;
frost$core$Int _647;
frost$core$Int* _650;
frost$core$String$Index _652;
frost$core$String$Index _655;
frost$core$String$Index _656;
frost$core$Int _657;
frost$core$Int _660;
int64_t _662;
int64_t _663;
int64_t _664;
frost$core$Int _665;
int64_t _667;
int64_t _668;
bool _669;
frost$core$Bit _670;
bool _671;
int64_t _673;
int64_t _674;
bool _675;
frost$core$Bit _676;
bool _677;
int64_t _679;
int64_t _680;
int64_t _681;
frost$core$Int _682;
int64_t _684;
int64_t _685;
bool _686;
frost$core$Bit _687;
bool _688;
int64_t _690;
int64_t _691;
bool _692;
frost$core$Bit _693;
bool _694;
int64_t _696;
int64_t _697;
int64_t _698;
frost$core$Int _699;
frost$core$Bit _705;
bool _706;
frost$core$String$Index$nullable _708;
bool _709;
frost$core$Bit _710;
bool _711;
frost$core$Int _713;
frost$core$Int _714;
int64_t _717;
int64_t _718;
bool _719;
frost$core$Bit _720;
bool _722;
frost$core$Int _724;
frost$core$Int* _725;
frost$core$Int _726;
int64_t _727;
int64_t _728;
bool _729;
frost$core$Bit _730;
bool _731;
frost$core$Char8** _734;
frost$core$Char8* _735;
frost$core$Int _736;
frost$core$Int64 _737;
int64_t _738;
frost$core$Char8 _739;
frost$core$MutableString* _742;
frost$core$Char8 _743;
frost$core$Int _746;
frost$core$Int _747;
int64_t _748;
int64_t _749;
int64_t _750;
frost$core$Int _751;
frost$core$Char8 _754;
uint8_t _757;
frost$core$UInt8 _758;
frost$core$UInt8 _760;
uint8_t _761;
uint8_t _762;
bool _763;
frost$core$Bit _764;
bool _765;
frost$core$MutableString* _768;
frost$core$Char8** _769;
frost$core$Char8* _770;
frost$core$Int _771;
frost$core$Int64 _772;
int64_t _773;
frost$core$Char8 _774;
frost$core$Int _777;
frost$core$Int _778;
int64_t _779;
int64_t _780;
int64_t _781;
frost$core$Int _782;
frost$core$Char8 _786;
uint8_t _789;
frost$core$UInt8 _790;
frost$core$UInt8 _792;
uint8_t _793;
uint8_t _794;
bool _795;
frost$core$Bit _796;
bool _797;
frost$core$MutableString* _800;
frost$core$Char8** _801;
frost$core$Char8* _802;
frost$core$Int _803;
frost$core$Int64 _804;
int64_t _805;
frost$core$Char8 _806;
frost$core$Int _809;
frost$core$Int _810;
int64_t _811;
int64_t _812;
int64_t _813;
frost$core$Int _814;
frost$core$Char8 _818;
uint8_t _821;
frost$core$UInt8 _822;
frost$core$UInt8 _824;
uint8_t _825;
uint8_t _826;
bool _827;
frost$core$Bit _828;
bool _829;
frost$core$MutableString* _832;
frost$core$Char8** _833;
frost$core$Char8* _834;
frost$core$Int _835;
frost$core$Int64 _836;
int64_t _837;
frost$core$Char8 _838;
frost$core$MutableString* _843;
frost$core$String* _844;
frost$core$Object* _845;
frost$core$Object* _847;
frost$core$MutableString* _849;
frost$core$Object* _850;
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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_150 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
_183 = *(&local1);
_184 = frost$core$Int64$init$frost$core$Int(_183);
_185 = _184.value;
_186 = _182[_185];
*(&local12) = _186;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:834
_189 = *(&local11);
_190 = *(&local12);
frost$core$MutableString$append$frost$core$Char8(_189, _190);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:835
_193 = *(&local1);
_194 = (frost$core$Int) {1u};
_195 = _193.value;
_196 = _194.value;
_197 = _195 + _196;
_198 = (frost$core$Int) {_197};
*(&local1) = _198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:836
_201 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:836:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_204 = _201.value;
_205 = (frost$core$UInt8) {_204};
_207 = (frost$core$UInt8) {192u};
_208 = _205.value;
_209 = _207.value;
_210 = _208 >= _209;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:837
_215 = *(&local11);
_216 = &param0->data;
_217 = *_216;
_218 = *(&local1);
_219 = frost$core$Int64$init$frost$core$Int(_218);
_220 = _219.value;
_221 = _217[_220];
frost$core$MutableString$append$frost$core$Char8(_215, _221);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:838
_224 = *(&local1);
_225 = (frost$core$Int) {1u};
_226 = _224.value;
_227 = _225.value;
_228 = _226 + _227;
_229 = (frost$core$Int) {_228};
*(&local1) = _229;
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:840
_233 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:840:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_236 = _233.value;
_237 = (frost$core$UInt8) {_236};
_239 = (frost$core$UInt8) {224u};
_240 = _237.value;
_241 = _239.value;
_242 = _240 >= _241;
_243 = (frost$core$Bit) {_242};
_244 = _243.value;
if (_244) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:841
_247 = *(&local11);
_248 = &param0->data;
_249 = *_248;
_250 = *(&local1);
_251 = frost$core$Int64$init$frost$core$Int(_250);
_252 = _251.value;
_253 = _249[_252];
frost$core$MutableString$append$frost$core$Char8(_247, _253);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:842
_256 = *(&local1);
_257 = (frost$core$Int) {1u};
_258 = _256.value;
_259 = _257.value;
_260 = _258 + _259;
_261 = (frost$core$Int) {_260};
*(&local1) = _261;
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:844
_265 = *(&local12);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:844:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_268 = _265.value;
_269 = (frost$core$UInt8) {_268};
_271 = (frost$core$UInt8) {240u};
_272 = _269.value;
_273 = _271.value;
_274 = _272 >= _273;
_275 = (frost$core$Bit) {_274};
_276 = _275.value;
if (_276) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:845
_279 = *(&local11);
_280 = &param0->data;
_281 = *_280;
_282 = *(&local1);
_283 = frost$core$Int64$init$frost$core$Int(_282);
_284 = _283.value;
_285 = _281[_284];
frost$core$MutableString$append$frost$core$Char8(_279, _285);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:846
_288 = *(&local1);
_289 = (frost$core$Int) {1u};
_290 = _288.value;
_291 = _289.value;
_292 = _290 + _291;
_293 = (frost$core$Int) {_292};
*(&local1) = _293;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:848
_297 = (frost$core$Int) {1u};
_298 = *(&local0);
_299 = (frost$core$Bit) {false};
_300 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_297, _298, _299);
_301 = _300.min;
*(&local13) = _301;
_303 = _300.max;
_304 = _300.inclusive;
_305 = _304.value;
_306 = (frost$core$Int) {1u};
if (_305) goto block46; else goto block47;
block46:;
_308 = _301.value;
_309 = _303.value;
_310 = _308 <= _309;
_311 = (frost$core$Bit) {_310};
_312 = _311.value;
if (_312) goto block43; else goto block44;
block47:;
_314 = _301.value;
_315 = _303.value;
_316 = _314 < _315;
_317 = (frost$core$Bit) {_316};
_318 = _317.value;
if (_318) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:849
_321 = *(&local1);
_322 = *(&local6);
_323 = _321.value;
_324 = _322.value;
_325 = _323 >= _324;
_326 = (frost$core$Bit) {_325};
_327 = _326.value;
if (_327) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:850
_330 = *(&local11);
_331 = ((frost$core$Object*) _330);
_332 = ($fn74) _331->$class->vtable[0];
_333 = _332(_331);
_334 = ((frost$core$Object*) _333);
frost$core$Frost$ref$frost$core$Object$Q(_334);
_336 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_336);
_338 = *(&local11);
_339 = ((frost$core$Object*) _338);
frost$core$Frost$unref$frost$core$Object$Q(_339);
*(&local11) = ((frost$core$MutableString*) NULL);
return _333;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:852
_344 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:852:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_347 = &(&local15)->value;
*_347 = _344;
_349 = *(&local15);
*(&local14) = _349;
_352 = *(&local14);
_353 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _352);
_354 = _353.value;
*(&local1) = _354;
_357 = *(&local13);
_358 = _303.value;
_359 = _357.value;
_360 = _358 - _359;
_361 = (frost$core$Int) {_360};
if (_305) goto block52; else goto block53;
block52:;
_363 = _361.value;
_364 = _306.value;
_365 = _363 >= _364;
_366 = (frost$core$Bit) {_365};
_367 = _366.value;
if (_367) goto block51; else goto block44;
block53:;
_369 = _361.value;
_370 = _306.value;
_371 = _369 > _370;
_372 = (frost$core$Bit) {_371};
_373 = _372.value;
if (_373) goto block51; else goto block44;
block51:;
_375 = _357.value;
_376 = _306.value;
_377 = _375 + _376;
_378 = (frost$core$Int) {_377};
*(&local13) = _378;
goto block43;
block44:;
goto block31;
block33:;
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:857
_385 = param1.step;
_386 = (frost$core$Int) {0u};
_387 = _385.value;
_388 = _386.value;
_389 = _387 < _388;
_390 = (frost$core$Bit) {_389};
_391 = _390.value;
if (_391) goto block54; else goto block55;
block55:;
_393 = (frost$core$Int) {857u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s75, _393);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:858
goto block56;
block56:;
_398 = *(&local1);
_399 = *(&local6);
_400 = _398.value;
_401 = _399.value;
_402 = _400 > _401;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:859
_407 = &param0->data;
_408 = *_407;
_409 = *(&local1);
_410 = frost$core$Int64$init$frost$core$Int(_409);
_411 = _410.value;
_412 = _408[_411];
*(&local16) = _412;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:860
_415 = *(&local11);
_416 = *(&local16);
frost$core$MutableString$append$frost$core$Char8(_415, _416);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:861
_419 = *(&local1);
*(&local17) = _419;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:862
_422 = *(&local1);
_423 = (frost$core$Int) {1u};
_424 = _422.value;
_425 = _423.value;
_426 = _424 + _425;
_427 = (frost$core$Int) {_426};
*(&local1) = _427;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:863
_430 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:863:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_433 = _430.value;
_434 = (frost$core$UInt8) {_433};
_436 = (frost$core$UInt8) {192u};
_437 = _434.value;
_438 = _436.value;
_439 = _437 >= _438;
_440 = (frost$core$Bit) {_439};
_441 = _440.value;
if (_441) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:864
_444 = *(&local11);
_445 = &param0->data;
_446 = *_445;
_447 = *(&local1);
_448 = frost$core$Int64$init$frost$core$Int(_447);
_449 = _448.value;
_450 = _446[_449];
frost$core$MutableString$append$frost$core$Char8(_444, _450);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:865
_453 = *(&local1);
_454 = (frost$core$Int) {1u};
_455 = _453.value;
_456 = _454.value;
_457 = _455 + _456;
_458 = (frost$core$Int) {_457};
*(&local1) = _458;
goto block60;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:867
_462 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:867:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_465 = _462.value;
_466 = (frost$core$UInt8) {_465};
_468 = (frost$core$UInt8) {224u};
_469 = _466.value;
_470 = _468.value;
_471 = _469 >= _470;
_472 = (frost$core$Bit) {_471};
_473 = _472.value;
if (_473) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:868
_476 = *(&local11);
_477 = &param0->data;
_478 = *_477;
_479 = *(&local1);
_480 = frost$core$Int64$init$frost$core$Int(_479);
_481 = _480.value;
_482 = _478[_481];
frost$core$MutableString$append$frost$core$Char8(_476, _482);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:869
_485 = *(&local1);
_486 = (frost$core$Int) {1u};
_487 = _485.value;
_488 = _486.value;
_489 = _487 + _488;
_490 = (frost$core$Int) {_489};
*(&local1) = _490;
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:871
_494 = *(&local16);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:871:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_497 = _494.value;
_498 = (frost$core$UInt8) {_497};
_500 = (frost$core$UInt8) {240u};
_501 = _498.value;
_502 = _500.value;
_503 = _501 >= _502;
_504 = (frost$core$Bit) {_503};
_505 = _504.value;
if (_505) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:872
_508 = *(&local11);
_509 = &param0->data;
_510 = *_509;
_511 = *(&local1);
_512 = frost$core$Int64$init$frost$core$Int(_511);
_513 = _512.value;
_514 = _510[_513];
frost$core$MutableString$append$frost$core$Char8(_508, _514);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:874
_518 = *(&local17);
_519 = (frost$core$Int) {1u};
_520 = _518.value;
_521 = _519.value;
_522 = _520 - _521;
_523 = (frost$core$Int) {_522};
*(&local1) = _523;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:875
goto block68;
block68:;
_527 = &param0->data;
_528 = *_527;
_529 = *(&local1);
_530 = frost$core$Int64$init$frost$core$Int(_529);
_531 = _530.value;
_532 = _528[_531];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:875:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_535 = _532.value;
_536 = (frost$core$UInt8) {_535};
_538 = (frost$core$UInt8) {128u};
_539 = _536.value;
_540 = _538.value;
_541 = _539 >= _540;
_542 = (frost$core$Bit) {_541};
_543 = _542.value;
if (_543) goto block71; else goto block70;
block71:;
_545 = &param0->data;
_546 = *_545;
_547 = *(&local1);
_548 = frost$core$Int64$init$frost$core$Int(_547);
_549 = _548.value;
_550 = _546[_549];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:875:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_553 = _550.value;
_554 = (frost$core$UInt8) {_553};
_556 = (frost$core$UInt8) {192u};
_557 = _554.value;
_558 = _556.value;
_559 = _557 < _558;
_560 = (frost$core$Bit) {_559};
_561 = _560.value;
if (_561) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:876
_564 = *(&local1);
_565 = (frost$core$Int) {1u};
_566 = _564.value;
_567 = _565.value;
_568 = _566 - _567;
_569 = (frost$core$Int) {_568};
*(&local1) = _569;
goto block68;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:878
_573 = (frost$core$Int) {18446744073709551615u};
_574 = *(&local0);
_575 = (frost$core$Int) {18446744073709551615u};
_576 = (frost$core$Bit) {false};
_577 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_573, _574, _575, _576);
_578 = _577.start;
*(&local18) = _578;
_580 = _577.end;
_581 = _577.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:878:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_584 = _581.value;
_585 = -_584;
_586 = (frost$core$Int) {_585};
_588 = _577.inclusive;
_589 = _588.value;
_590 = (frost$core$Int) {0u};
_591 = _581.value;
_592 = _590.value;
_593 = _591 >= _592;
_594 = (frost$core$Bit) {_593};
_595 = _594.value;
if (_595) goto block78; else goto block79;
block78:;
if (_589) goto block80; else goto block81;
block80:;
_598 = _578.value;
_599 = _580.value;
_600 = _598 <= _599;
_601 = (frost$core$Bit) {_600};
_602 = _601.value;
if (_602) goto block75; else goto block76;
block81:;
_604 = _578.value;
_605 = _580.value;
_606 = _604 < _605;
_607 = (frost$core$Bit) {_606};
_608 = _607.value;
if (_608) goto block75; else goto block76;
block79:;
if (_589) goto block82; else goto block83;
block82:;
_611 = _578.value;
_612 = _580.value;
_613 = _611 >= _612;
_614 = (frost$core$Bit) {_613};
_615 = _614.value;
if (_615) goto block75; else goto block76;
block83:;
_617 = _578.value;
_618 = _580.value;
_619 = _617 > _618;
_620 = (frost$core$Bit) {_619};
_621 = _620.value;
if (_621) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:879
_624 = *(&local1);
_625 = *(&local6);
_626 = _624.value;
_627 = _625.value;
_628 = _626 <= _627;
_629 = (frost$core$Bit) {_628};
_630 = _629.value;
if (_630) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:880
_633 = *(&local11);
_634 = ((frost$core$Object*) _633);
_635 = ($fn76) _634->$class->vtable[0];
_636 = _635(_634);
_637 = ((frost$core$Object*) _636);
frost$core$Frost$ref$frost$core$Object$Q(_637);
_639 = ((frost$core$Object*) _636);
frost$core$Frost$unref$frost$core$Object$Q(_639);
_641 = *(&local11);
_642 = ((frost$core$Object*) _641);
frost$core$Frost$unref$frost$core$Object$Q(_642);
*(&local11) = ((frost$core$MutableString*) NULL);
return _636;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:882
_647 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:882:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_650 = &(&local20)->value;
*_650 = _647;
_652 = *(&local20);
*(&local19) = _652;
_655 = *(&local19);
_656 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, _655);
_657 = _656.value;
*(&local1) = _657;
_660 = *(&local18);
if (_595) goto block88; else goto block89;
block88:;
_662 = _580.value;
_663 = _660.value;
_664 = _662 - _663;
_665 = (frost$core$Int) {_664};
if (_589) goto block90; else goto block91;
block90:;
_667 = _665.value;
_668 = _581.value;
_669 = _667 >= _668;
_670 = (frost$core$Bit) {_669};
_671 = _670.value;
if (_671) goto block87; else goto block76;
block91:;
_673 = _665.value;
_674 = _581.value;
_675 = _673 > _674;
_676 = (frost$core$Bit) {_675};
_677 = _676.value;
if (_677) goto block87; else goto block76;
block89:;
_679 = _660.value;
_680 = _580.value;
_681 = _679 - _680;
_682 = (frost$core$Int) {_681};
if (_589) goto block92; else goto block93;
block92:;
_684 = _682.value;
_685 = _586.value;
_686 = _684 >= _685;
_687 = (frost$core$Bit) {_686};
_688 = _687.value;
if (_688) goto block87; else goto block76;
block93:;
_690 = _682.value;
_691 = _586.value;
_692 = _690 > _691;
_693 = (frost$core$Bit) {_692};
_694 = _693.value;
if (_694) goto block87; else goto block76;
block87:;
_696 = _660.value;
_697 = _581.value;
_698 = _696 + _697;
_699 = (frost$core$Int) {_698};
*(&local18) = _699;
goto block75;
block76:;
goto block56;
block58:;
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:886
_705 = param1.inclusive;
_706 = _705.value;
if (_706) goto block97; else goto block98;
block98:;
_708 = param1.end;
_709 = !_708.nonnull;
_710 = (frost$core$Bit) {_709};
_711 = _710.value;
if (_711) goto block97; else goto block95;
block97:;
_713 = *(&local1);
_714 = *(&local6);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:886:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_717 = _713.value;
_718 = _714.value;
_719 = _717 == _718;
_720 = (frost$core$Bit) {_719};
_722 = _720.value;
if (_722) goto block96; else goto block95;
block96:;
_724 = *(&local6);
_725 = &param0->_length;
_726 = *_725;
_727 = _724.value;
_728 = _726.value;
_729 = _727 < _728;
_730 = (frost$core$Bit) {_729};
_731 = _730.value;
if (_731) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:887
_734 = &param0->data;
_735 = *_734;
_736 = *(&local1);
_737 = frost$core$Int64$init$frost$core$Int(_736);
_738 = _737.value;
_739 = _735[_738];
*(&local21) = _739;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:888
_742 = *(&local11);
_743 = *(&local21);
frost$core$MutableString$append$frost$core$Char8(_742, _743);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:889
_746 = *(&local1);
_747 = (frost$core$Int) {1u};
_748 = _746.value;
_749 = _747.value;
_750 = _748 + _749;
_751 = (frost$core$Int) {_750};
*(&local1) = _751;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:890
_754 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:890:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_757 = _754.value;
_758 = (frost$core$UInt8) {_757};
_760 = (frost$core$UInt8) {192u};
_761 = _758.value;
_762 = _760.value;
_763 = _761 >= _762;
_764 = (frost$core$Bit) {_763};
_765 = _764.value;
if (_765) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:891
_768 = *(&local11);
_769 = &param0->data;
_770 = *_769;
_771 = *(&local1);
_772 = frost$core$Int64$init$frost$core$Int(_771);
_773 = _772.value;
_774 = _770[_773];
frost$core$MutableString$append$frost$core$Char8(_768, _774);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:892
_777 = *(&local1);
_778 = (frost$core$Int) {1u};
_779 = _777.value;
_780 = _778.value;
_781 = _779 + _780;
_782 = (frost$core$Int) {_781};
*(&local1) = _782;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:894
_786 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:894:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_789 = _786.value;
_790 = (frost$core$UInt8) {_789};
_792 = (frost$core$UInt8) {224u};
_793 = _790.value;
_794 = _792.value;
_795 = _793 >= _794;
_796 = (frost$core$Bit) {_795};
_797 = _796.value;
if (_797) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:895
_800 = *(&local11);
_801 = &param0->data;
_802 = *_801;
_803 = *(&local1);
_804 = frost$core$Int64$init$frost$core$Int(_803);
_805 = _804.value;
_806 = _802[_805];
frost$core$MutableString$append$frost$core$Char8(_800, _806);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:896
_809 = *(&local1);
_810 = (frost$core$Int) {1u};
_811 = _809.value;
_812 = _810.value;
_813 = _811 + _812;
_814 = (frost$core$Int) {_813};
*(&local1) = _814;
goto block104;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:898
_818 = *(&local21);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:898:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_821 = _818.value;
_822 = (frost$core$UInt8) {_821};
_824 = (frost$core$UInt8) {240u};
_825 = _822.value;
_826 = _824.value;
_827 = _825 >= _826;
_828 = (frost$core$Bit) {_827};
_829 = _828.value;
if (_829) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:899
_832 = *(&local11);
_833 = &param0->data;
_834 = *_833;
_835 = *(&local1);
_836 = frost$core$Int64$init$frost$core$Int(_835);
_837 = _836.value;
_838 = _834[_837];
frost$core$MutableString$append$frost$core$Char8(_832, _838);
goto block107;
block107:;
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:902
_843 = *(&local11);
_844 = frost$core$MutableString$finish$R$frost$core$String(_843);
_845 = ((frost$core$Object*) _844);
frost$core$Frost$ref$frost$core$Object$Q(_845);
_847 = ((frost$core$Object*) _844);
frost$core$Frost$unref$frost$core$Object$Q(_847);
_849 = *(&local11);
_850 = ((frost$core$Object*) _849);
frost$core$Frost$unref$frost$core$Object$Q(_850);
*(&local11) = ((frost$core$MutableString*) NULL);
return _844;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

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
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

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
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

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
frost$core$Char8** _26;
frost$core$Char8* _27;
frost$core$Int _28;
frost$core$Int64 _29;
int64_t _30;
frost$core$Char8 _31;
uint8_t _34;
uint8_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Bit _42;
frost$core$Int _45;
int64_t _46;
int64_t _47;
int64_t _48;
frost$core$Int _49;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
frost$core$Bit _70;
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
_28 = *(&local0);
_29 = frost$core$Int64$init$frost$core$Int(_28);
_30 = _29.value;
_31 = _27[_30];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:956:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_34 = _31.value;
_35 = param1.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:957
_42 = (frost$core$Bit) {true};
return _42;
block7:;
_45 = *(&local0);
_46 = _8.value;
_47 = _45.value;
_48 = _46 - _47;
_49 = (frost$core$Int) {_48};
if (_10) goto block10; else goto block11;
block10:;
_51 = _49.value;
_52 = _11.value;
_53 = _51 >= _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block9; else goto block2;
block11:;
_57 = _49.value;
_58 = _11.value;
_59 = _57 > _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block9; else goto block2;
block9:;
_63 = _45.value;
_64 = _11.value;
_65 = _63 + _64;
_66 = (frost$core$Int) {_65};
*(&local0) = _66;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:960
_70 = (frost$core$Bit) {false};
return _70;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

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
frost$core$Char8** _70;
frost$core$Char8* _71;
frost$core$Int _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
int64_t _76;
frost$core$Int _77;
frost$core$Int64 _78;
int64_t _79;
frost$core$Char8 _80;
frost$core$Char8** _81;
frost$core$Char8* _82;
frost$core$Int _83;
frost$core$Int64 _84;
int64_t _85;
frost$core$Char8 _86;
uint8_t _89;
uint8_t _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$core$Int _144;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$Int _99;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _115;
int64_t _117;
int64_t _118;
int64_t _119;
frost$core$Int _120;
frost$core$Int _124;
frost$core$Int* _127;
frost$core$String$Index _129;
frost$core$String$Index _132;
frost$core$String$Index$nullable _133;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _138;
frost$core$String$Index _141;
frost$core$String$Index$nullable _142;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _154;
int64_t _156;
int64_t _157;
bool _158;
frost$core$Bit _159;
bool _160;
int64_t _162;
int64_t _163;
int64_t _164;
frost$core$Int _165;
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
_72 = *(&local0);
_73 = *(&local1);
_74 = _72.value;
_75 = _73.value;
_76 = _74 + _75;
_77 = (frost$core$Int) {_76};
_78 = frost$core$Int64$init$frost$core$Int(_77);
_79 = _78.value;
_80 = _71[_79];
_81 = &param1->data;
_82 = *_81;
_83 = *(&local1);
_84 = frost$core$Int64$init$frost$core$Int(_83);
_85 = _84.value;
_86 = _82[_85];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:995:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_89 = _80.value;
_90 = _86.value;
_91 = _89 != _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:996
_144 = *(&local0);
_145 = _27.value;
_146 = _144.value;
_147 = _145 - _146;
_148 = (frost$core$Int) {_147};
if (_29) goto block23; else goto block24;
block14:;
_99 = *(&local1);
_100 = _52.value;
_101 = _99.value;
_102 = _100 - _101;
_103 = (frost$core$Int) {_102};
if (_54) goto block17; else goto block18;
block17:;
_105 = _103.value;
_106 = _55.value;
_107 = _105 >= _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block16; else goto block9;
block18:;
_111 = _103.value;
_112 = _55.value;
_113 = _111 > _112;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block16; else goto block9;
block16:;
_117 = _99.value;
_118 = _55.value;
_119 = _117 + _118;
_120 = (frost$core$Int) {_119};
*(&local1) = _120;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:999
_124 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:999:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_127 = &(&local3)->value;
*_127 = _124;
_129 = *(&local3);
*(&local2) = _129;
_132 = *(&local2);
_133 = ((frost$core$String$Index$nullable) { _132, true });
_134 = _133.nonnull;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block20; else goto block21;
block21:;
_138 = (frost$core$Int) {999u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _138, &$s86);
abort(); // unreachable
block20:;
_141 = ((frost$core$String$Index) _133.value);
_142 = ((frost$core$String$Index$nullable) { _141, true });
return _142;
block23:;
_150 = _148.value;
_151 = _30.value;
_152 = _150 >= _151;
_153 = (frost$core$Bit) {_152};
_154 = _153.value;
if (_154) goto block22; else goto block4;
block24:;
_156 = _148.value;
_157 = _30.value;
_158 = _156 > _157;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block22; else goto block4;
block22:;
_162 = _144.value;
_163 = _30.value;
_164 = _162 + _163;
_165 = (frost$core$Int) {_164};
*(&local0) = _165;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

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
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

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
frost$core$Char8** _120;
frost$core$Char8* _121;
frost$core$Int _122;
frost$core$Int _123;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int64 _128;
int64_t _129;
frost$core$Char8 _130;
frost$core$Char8** _131;
frost$core$Char8* _132;
frost$core$Int _133;
frost$core$Int64 _134;
int64_t _135;
frost$core$Char8 _136;
uint8_t _139;
uint8_t _140;
bool _141;
frost$core$Bit _142;
bool _144;
frost$core$Int _194;
frost$core$Int _149;
int64_t _150;
int64_t _151;
int64_t _152;
frost$core$Int _153;
int64_t _155;
int64_t _156;
bool _157;
frost$core$Bit _158;
bool _159;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _165;
int64_t _167;
int64_t _168;
int64_t _169;
frost$core$Int _170;
frost$core$Int _174;
frost$core$Int* _177;
frost$core$String$Index _179;
frost$core$String$Index _182;
frost$core$String$Index$nullable _183;
bool _184;
frost$core$Bit _185;
bool _186;
frost$core$Int _188;
frost$core$String$Index _191;
frost$core$String$Index$nullable _192;
int64_t _196;
int64_t _197;
int64_t _198;
frost$core$Int _199;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _205;
int64_t _207;
int64_t _208;
bool _209;
frost$core$Bit _210;
bool _211;
int64_t _213;
int64_t _214;
int64_t _215;
frost$core$Int _216;
int64_t _218;
int64_t _219;
bool _220;
frost$core$Bit _221;
bool _222;
int64_t _224;
int64_t _225;
bool _226;
frost$core$Bit _227;
bool _228;
int64_t _230;
int64_t _231;
int64_t _232;
frost$core$Int _233;
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
_122 = *(&local2);
_123 = *(&local3);
_124 = _122.value;
_125 = _123.value;
_126 = _124 + _125;
_127 = (frost$core$Int) {_126};
_128 = frost$core$Int64$init$frost$core$Int(_127);
_129 = _128.value;
_130 = _121[_129];
_131 = &param1->data;
_132 = *_131;
_133 = *(&local3);
_134 = frost$core$Int64$init$frost$core$Int(_133);
_135 = _134.value;
_136 = _132[_135];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:1030:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
_139 = _130.value;
_140 = _136.value;
_141 = _139 != _140;
_142 = (frost$core$Bit) {_141};
_144 = _142.value;
if (_144) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1031
_194 = *(&local2);
if (_66) goto block31; else goto block32;
block22:;
_149 = *(&local3);
_150 = _102.value;
_151 = _149.value;
_152 = _150 - _151;
_153 = (frost$core$Int) {_152};
if (_104) goto block25; else goto block26;
block25:;
_155 = _153.value;
_156 = _105.value;
_157 = _155 >= _156;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block24; else goto block17;
block26:;
_161 = _153.value;
_162 = _105.value;
_163 = _161 > _162;
_164 = (frost$core$Bit) {_163};
_165 = _164.value;
if (_165) goto block24; else goto block17;
block24:;
_167 = _149.value;
_168 = _105.value;
_169 = _167 + _168;
_170 = (frost$core$Int) {_169};
*(&local3) = _170;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1034
_174 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1034:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_177 = &(&local5)->value;
*_177 = _174;
_179 = *(&local5);
*(&local4) = _179;
_182 = *(&local4);
_183 = ((frost$core$String$Index$nullable) { _182, true });
_184 = _183.nonnull;
_185 = (frost$core$Bit) {_184};
_186 = _185.value;
if (_186) goto block28; else goto block29;
block29:;
_188 = (frost$core$Int) {1034u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _188, &$s88);
abort(); // unreachable
block28:;
_191 = ((frost$core$String$Index) _183.value);
_192 = ((frost$core$String$Index$nullable) { _191, true });
return _192;
block31:;
_196 = _51.value;
_197 = _194.value;
_198 = _196 - _197;
_199 = (frost$core$Int) {_198};
if (_60) goto block33; else goto block34;
block33:;
_201 = _199.value;
_202 = _52.value;
_203 = _201 >= _202;
_204 = (frost$core$Bit) {_203};
_205 = _204.value;
if (_205) goto block30; else goto block8;
block34:;
_207 = _199.value;
_208 = _52.value;
_209 = _207 > _208;
_210 = (frost$core$Bit) {_209};
_211 = _210.value;
if (_211) goto block30; else goto block8;
block32:;
_213 = _194.value;
_214 = _51.value;
_215 = _213 - _214;
_216 = (frost$core$Int) {_215};
if (_60) goto block35; else goto block36;
block35:;
_218 = _216.value;
_219 = _57.value;
_220 = _218 >= _219;
_221 = (frost$core$Bit) {_220};
_222 = _221.value;
if (_222) goto block30; else goto block8;
block36:;
_224 = _216.value;
_225 = _57.value;
_226 = _224 > _225;
_227 = (frost$core$Bit) {_226};
_228 = _227.value;
if (_228) goto block30; else goto block8;
block30:;
_230 = _194.value;
_231 = _52.value;
_232 = _230 + _231;
_233 = (frost$core$Int) {_232};
*(&local2) = _233;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

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
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

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
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$Q$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

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
frost$collections$Array* _18;
frost$core$Object* _21;
frost$collections$Array* _23;
frost$core$Object* _24;
frost$core$Object* _27;
frost$core$Int _30;
frost$core$Matcher* _31;
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
frost$collections$Array* _55;
frost$collections$Array* _56;
frost$core$Matcher* _57;
frost$core$Int _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
frost$collections$Array* _90;
frost$collections$ListView* _91;
frost$core$Object* _92;
frost$collections$Array* _94;
frost$core$Object* _95;
frost$core$Matcher* _98;
frost$core$Object* _99;
frost$core$Object* _104;
frost$core$Matcher* _106;
frost$core$Object* _107;
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_17 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_18 = _17;
frost$collections$Array$init(_18);
*(&local1) = ((frost$collections$Array*) NULL);
_21 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local1);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local1) = _17;
_27 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
_30 = (frost$core$Int) {1u};
_31 = *(&local0);
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_32, _31);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
_55 = *(&local1);
_56 = _55;
_57 = *(&local0);
_58 = *(&local2);
_59 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_57, _58);
_60 = ((frost$core$Object*) _59);
frost$collections$Array$add$frost$collections$Array$T(_56, _60);
_62 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_65 = *(&local2);
_66 = _37.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
if (_39) goto block9; else goto block10;
block9:;
_71 = _69.value;
_72 = _40.value;
_73 = _71 >= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block8; else goto block4;
block10:;
_77 = _69.value;
_78 = _40.value;
_79 = _77 > _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block8; else goto block4;
block8:;
_83 = _65.value;
_84 = _40.value;
_85 = _83 + _84;
_86 = (frost$core$Int) {_85};
*(&local2) = _86;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
_90 = *(&local1);
_91 = ((frost$collections$ListView*) _90);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local1);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local1) = ((frost$collections$Array*) NULL);
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local0) = ((frost$core$Matcher*) NULL);
return _91;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
_104 = ((frost$core$Object*) ((frost$collections$ListView*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local0);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

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
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s89);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1092
_5 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_5);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1094
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_9 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s90, _66, &$s91);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _85, &$s93);
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
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

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
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
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
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

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
frost$core$Int8** _44;
frost$core$Int8* _45;
frost$core$Object** _46;
frost$core$Object* _47;
bool _48;
$fn94 _50;
frost$core$Object* _51;
$fn95 _54;
frost$core$Object* _55;
frost$core$Object* _58;
$fn96 _59;
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
$fn97 _90;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Matcher* _96;
frost$core$Object* _97;
frost$core$MutableString* _100;
frost$core$Object* _101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1152
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, _39, &$s99);
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
_50 = (($fn100) _45);
_51 = _50(_42);
*(&local2) = _51;
goto block8;
block6:;
_54 = (($fn101) _45);
_55 = _54(_47, _42);
*(&local2) = _55;
goto block8;
block8:;
_58 = *(&local2);
_59 = ($fn102) _58->$class->vtable[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
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
_90 = ($fn103) _89->$class->vtable[0];
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
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

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
frost$collections$Array* _31;
frost$core$Object* _34;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Int _43;
frost$core$Matcher* _44;
frost$core$Int _45;
frost$core$Bit _46;
frost$core$Range$LTfrost$core$Int$GT _47;
frost$core$Int _48;
frost$core$Int _50;
frost$core$Bit _51;
bool _52;
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
frost$collections$Array* _68;
frost$collections$Array* _69;
frost$core$Matcher* _70;
frost$core$Int _71;
frost$core$String* _72;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Int _78;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
frost$core$Matcher* _103;
frost$core$MutableString* _104;
frost$collections$Array* _105;
frost$collections$ListView* _106;
frost$core$MutableMethod* _107;
frost$core$Int8** _108;
frost$core$Int8* _109;
frost$core$Object** _110;
frost$core$Object* _111;
bool _112;
$fn104 _114;
frost$core$Object* _115;
$fn105 _118;
frost$core$Object* _119;
frost$core$Object* _122;
$fn106 _123;
frost$core$String* _124;
frost$core$Bit _125;
frost$core$Object* _127;
frost$core$Object* _129;
frost$collections$Array* _131;
frost$core$Object* _132;
frost$core$Matcher* _137;
frost$core$MutableString* _138;
frost$core$String** _141;
frost$core$String* _142;
frost$core$String$Index* _143;
frost$core$String$Index _144;
frost$core$String$Index$nullable _145;
frost$core$Bit _146;
frost$core$Range$LTfrost$core$String$Index$Q$GT _147;
frost$core$String* _148;
frost$core$Object* _150;
frost$core$MutableString* _154;
frost$core$Object* _155;
$fn107 _156;
frost$core$String* _157;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Matcher* _162;
frost$core$Object* _163;
frost$core$MutableString* _166;
frost$core$Object* _167;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1172
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_30 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_31 = _30;
frost$collections$Array$init(_31);
*(&local2) = ((frost$collections$Array*) NULL);
_34 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local2);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _30;
_40 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1176
_43 = (frost$core$Int) {0u};
_44 = *(&local1);
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_45, _44);
_46 = (frost$core$Bit) {false};
_47 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_43, _45, _46);
_48 = _47.min;
*(&local3) = _48;
_50 = _47.max;
_51 = _47.inclusive;
_52 = _51.value;
_53 = (frost$core$Int) {1u};
if (_52) goto block7; else goto block8;
block7:;
_55 = _48.value;
_56 = _50.value;
_57 = _55 <= _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block4; else goto block5;
block8:;
_61 = _48.value;
_62 = _50.value;
_63 = _61 < _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1177
_68 = *(&local2);
_69 = _68;
_70 = *(&local1);
_71 = *(&local3);
_72 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_70, _71);
_73 = ((frost$core$Object*) _72);
frost$collections$Array$add$frost$collections$Array$T(_69, _73);
_75 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_78 = *(&local3);
_79 = _50.value;
_80 = _78.value;
_81 = _79 - _80;
_82 = (frost$core$Int) {_81};
if (_52) goto block10; else goto block11;
block10:;
_84 = _82.value;
_85 = _53.value;
_86 = _84 >= _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block9; else goto block5;
block11:;
_90 = _82.value;
_91 = _53.value;
_92 = _90 > _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block9; else goto block5;
block9:;
_96 = _78.value;
_97 = _53.value;
_98 = _96 + _97;
_99 = (frost$core$Int) {_98};
*(&local3) = _99;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1179
_103 = *(&local1);
_104 = *(&local0);
_105 = *(&local2);
_106 = ((frost$collections$ListView*) _105);
_107 = param2;
_108 = &_107->pointer;
_109 = *_108;
_110 = &_107->target;
_111 = *_110;
_112 = _111 != ((frost$core$Object*) NULL);
if (_112) goto block12; else goto block13;
block13:;
_114 = (($fn108) _109);
_115 = _114(_106);
*(&local4) = _115;
goto block14;
block12:;
_118 = (($fn109) _109);
_119 = _118(_111, _106);
*(&local4) = _119;
goto block14;
block14:;
_122 = *(&local4);
_123 = ($fn110) _122->$class->vtable[0];
_124 = _123(_122);
_125 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_103, _104, _124, _125);
_127 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = *(&local2);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1181
_137 = *(&local1);
_138 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1181:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
_141 = &_137->searchText;
_142 = *_141;
_143 = &_137->replacementIndex;
_144 = *_143;
_145 = ((frost$core$String$Index$nullable) { _144, true });
_146 = (frost$core$Bit) {false};
_147 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_145, ((frost$core$String$Index$nullable) { .nonnull = false }), _146);
_148 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_142, _147);
frost$core$MutableString$append$frost$core$String(_138, _148);
_150 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_150);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1182
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
_156 = ($fn111) _155->$class->vtable[0];
_157 = _156(_155);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = *(&local1);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local1) = ((frost$core$Matcher*) NULL);
_166 = *(&local0);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local0) = ((frost$core$MutableString*) NULL);
return _157;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

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
FROST_ASSERT(56 == sizeof(frost$core$String$MatchIterator));
_4 = (frost$core$String$MatchIterator*) frostObjectAlloc(56, (frost$core$Class*) &frost$core$String$MatchIterator$class);
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
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

frost$core$String$MatchIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(56 == sizeof(frost$core$String$MatchIterator));
_1 = (frost$core$String$MatchIterator*) frostObjectAlloc(56, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(_1, param0, param1, param2);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

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
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
_4 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
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
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

frost$core$String$RegexMatchIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
_1 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(_1, param0, param1, param2);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

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
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

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
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

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
frost$core$Char8** _14;
frost$core$Char8* _15;
frost$core$Int _16;
frost$core$Int64 _17;
int64_t _18;
frost$core$Char8 _19;
uint8_t _22;
frost$core$UInt8 _23;
frost$core$UInt8 _27;
frost$core$UInt8 _28;
uint8_t _29;
uint8_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
int64_t _40;
frost$core$Int _41;
frost$core$Int* _44;
frost$core$String$Index _46;
frost$core$String$Index _49;
frost$core$UInt8 _52;
frost$core$UInt8 _53;
uint8_t _54;
uint8_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$Int _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
frost$core$Int* _69;
frost$core$String$Index _71;
frost$core$String$Index _74;
frost$core$UInt8 _77;
frost$core$UInt8 _78;
uint8_t _79;
uint8_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _86;
frost$core$Int _87;
int64_t _88;
int64_t _89;
int64_t _90;
frost$core$Int _91;
frost$core$Int* _94;
frost$core$String$Index _96;
frost$core$String$Index _99;
frost$core$Int _102;
frost$core$Int _103;
int64_t _104;
int64_t _105;
int64_t _106;
frost$core$Int _107;
frost$core$Int* _110;
frost$core$String$Index _112;
frost$core$String$Index _115;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s112, _10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1223
_14 = &param0->data;
_15 = *_14;
_16 = param1.value;
_17 = frost$core$Int64$init$frost$core$Int(_16);
_18 = _17.value;
_19 = _15[_18];
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:1223:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_22 = _19.value;
_23 = (frost$core$UInt8) {_22};
*(&local0) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1224
_27 = *(&local0);
_28 = (frost$core$UInt8) {240u};
_29 = _27.value;
_30 = _28.value;
_31 = _29 >= _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1225
_36 = param1.value;
_37 = (frost$core$Int) {4u};
_38 = _36.value;
_39 = _37.value;
_40 = _38 + _39;
_41 = (frost$core$Int) {_40};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1225:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_44 = &(&local2)->value;
*_44 = _41;
_46 = *(&local2);
*(&local1) = _46;
_49 = *(&local1);
return _49;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1227
_52 = *(&local0);
_53 = (frost$core$UInt8) {224u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 >= _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1228
_61 = param1.value;
_62 = (frost$core$Int) {3u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 + _64;
_66 = (frost$core$Int) {_65};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1228:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_69 = &(&local4)->value;
*_69 = _66;
_71 = *(&local4);
*(&local3) = _71;
_74 = *(&local3);
return _74;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1230
_77 = *(&local0);
_78 = (frost$core$UInt8) {192u};
_79 = _77.value;
_80 = _78.value;
_81 = _79 >= _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1231
_86 = param1.value;
_87 = (frost$core$Int) {2u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 + _89;
_91 = (frost$core$Int) {_90};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1231:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_94 = &(&local6)->value;
*_94 = _91;
_96 = *(&local6);
*(&local5) = _96;
_99 = *(&local5);
return _99;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1233
_102 = param1.value;
_103 = (frost$core$Int) {1u};
_104 = _102.value;
_105 = _103.value;
_106 = _104 + _105;
_107 = (frost$core$Int) {_106};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1233:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_110 = &(&local8)->value;
*_110 = _107;
_112 = *(&local8);
*(&local7) = _112;
_115 = *(&local7);
return _115;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

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
frost$core$Char8** _22;
frost$core$Char8* _23;
frost$core$Int _24;
frost$core$Int64 _25;
int64_t _26;
frost$core$Char8 _27;
uint8_t _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Char8** _35;
frost$core$Char8* _36;
frost$core$Int _37;
frost$core$Int64 _38;
int64_t _39;
frost$core$Char8 _40;
uint8_t _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _49;
frost$core$Int _50;
int64_t _51;
int64_t _52;
int64_t _53;
frost$core$Int _54;
frost$core$Int _58;
frost$core$Int* _61;
frost$core$String$Index _63;
frost$core$String$Index _66;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s113, _9);
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
_24 = *(&local0);
_25 = frost$core$Int64$init$frost$core$Int(_24);
_26 = _25.value;
_27 = _23[_26];
_28 = _27.value;
_29 = ((int64_t) _28);
_30 = _29 & 255u;
_31 = _30 >= 128u;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block6; else goto block5;
block6:;
_35 = &param0->data;
_36 = *_35;
_37 = *(&local0);
_38 = frost$core$Int64$init$frost$core$Int(_37);
_39 = _38.value;
_40 = _36[_39];
_41 = _40.value;
_42 = ((int64_t) _41);
_43 = _42 & 255u;
_44 = _43 < 192u;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1247
_49 = *(&local0);
_50 = (frost$core$Int) {1u};
_51 = _49.value;
_52 = _50.value;
_53 = _51 - _52;
_54 = (frost$core$Int) {_53};
*(&local0) = _54;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1249
_58 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1249:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_61 = &(&local2)->value;
*_61 = _58;
_63 = *(&local2);
*(&local1) = _63;
_66 = *(&local1);
return _66;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int param2) {

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
frost$core$String* frost$core$String$leftAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

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
frost$core$String* frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterable* _3;
$fn114 _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
$fn115 _8;
frost$core$Int _9;
frost$core$Object* _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _20;
frost$collections$Iterable* _26;
$fn116 _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _29;
frost$collections$Iterator* _30;
$fn117 _31;
frost$core$Int _32;
frost$core$Object* _33;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int _39;
frost$core$MutableString* _42;
frost$core$Object* _45;
frost$core$MutableString* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Int _54;
frost$core$Bit _55;
frost$core$Range$LTfrost$core$Int$GT _56;
frost$core$Int _57;
frost$core$Int _59;
frost$core$Bit _60;
bool _61;
frost$core$Int _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$MutableString* _77;
frost$core$Int _80;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
bool _90;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _96;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$core$MutableString* _105;
frost$core$String* _106;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$MutableString* _111;
frost$core$Object* _112;
frost$core$String* _116;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _121;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1297
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1297:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp118 = _3->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp118 = $tmp118->next;
}
_4 = $tmp118->methods[0];
_5 = _4(_3);
_6 = _5;
_7 = _6;
ITable* $tmp119 = _7->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
_8 = $tmp119->methods[2];
_9 = _8(_7);
_10 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_13 = _9.value;
_14 = param1.value;
_15 = _13 >= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1298
_20 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_20);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1300
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1300:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_26 = ((frost$collections$Iterable*) param0);
ITable* $tmp120 = _26->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp120 = $tmp120->next;
}
_27 = $tmp120->methods[0];
_28 = _27(_26);
_29 = _28;
_30 = _29;
ITable* $tmp121 = _30->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp121 = $tmp121->next;
}
_31 = $tmp121->methods[2];
_32 = _31(_30);
_33 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = param1.value;
_37 = _32.value;
_38 = _36 - _37;
_39 = (frost$core$Int) {_38};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1300:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_42 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_42);
*(&local0) = ((frost$core$MutableString*) NULL);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local0) = _42;
_51 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_51);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_54 = (frost$core$Int) {0u};
_55 = (frost$core$Bit) {false};
_56 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_54, _39, _55);
_57 = _56.min;
*(&local1) = _57;
_59 = _56.max;
_60 = _56.inclusive;
_61 = _60.value;
_62 = (frost$core$Int) {1u};
if (_61) goto block9; else goto block10;
block9:;
_64 = _57.value;
_65 = _59.value;
_66 = _64 <= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block6; else goto block7;
block10:;
_70 = _57.value;
_71 = _59.value;
_72 = _70 < _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_77 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_77, param2);
_80 = *(&local1);
_81 = _59.value;
_82 = _80.value;
_83 = _81 - _82;
_84 = (frost$core$Int) {_83};
if (_61) goto block12; else goto block13;
block12:;
_86 = _84.value;
_87 = _62.value;
_88 = _86 >= _87;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block11; else goto block7;
block13:;
_92 = _84.value;
_93 = _62.value;
_94 = _92 > _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block11; else goto block7;
block11:;
_98 = _80.value;
_99 = _62.value;
_100 = _98 + _99;
_101 = (frost$core$Int) {_100};
*(&local1) = _101;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_105 = *(&local0);
_106 = frost$core$MutableString$finish$R$frost$core$String(_105);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local0) = ((frost$core$MutableString*) NULL);
_116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, _106);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_121);
return _116;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

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
frost$core$String* frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterable* _3;
$fn122 _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
$fn123 _8;
frost$core$Int _9;
frost$core$Object* _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _20;
frost$collections$Iterable* _26;
$fn124 _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _29;
frost$collections$Iterator* _30;
$fn125 _31;
frost$core$Int _32;
frost$core$Object* _33;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int _39;
frost$core$MutableString* _42;
frost$core$Object* _45;
frost$core$MutableString* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Int _54;
frost$core$Bit _55;
frost$core$Range$LTfrost$core$Int$GT _56;
frost$core$Int _57;
frost$core$Int _59;
frost$core$Bit _60;
bool _61;
frost$core$Int _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$MutableString* _77;
frost$core$Int _80;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
bool _90;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _96;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$core$MutableString* _105;
frost$core$String* _106;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$MutableString* _111;
frost$core$Object* _112;
frost$core$String* _116;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _121;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1327
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1327:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp126 = _3->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp126 = $tmp126->next;
}
_4 = $tmp126->methods[0];
_5 = _4(_3);
_6 = _5;
_7 = _6;
ITable* $tmp127 = _7->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
_8 = $tmp127->methods[2];
_9 = _8(_7);
_10 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_13 = _9.value;
_14 = param1.value;
_15 = _13 >= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1328
_20 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_20);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1330
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1330:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_26 = ((frost$collections$Iterable*) param0);
ITable* $tmp128 = _26->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
_27 = $tmp128->methods[0];
_28 = _27(_26);
_29 = _28;
_30 = _29;
ITable* $tmp129 = _30->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
_31 = $tmp129->methods[2];
_32 = _31(_30);
_33 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = param1.value;
_37 = _32.value;
_38 = _36 - _37;
_39 = (frost$core$Int) {_38};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1330:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_42 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_42);
*(&local0) = ((frost$core$MutableString*) NULL);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local0) = _42;
_51 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_51);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_54 = (frost$core$Int) {0u};
_55 = (frost$core$Bit) {false};
_56 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_54, _39, _55);
_57 = _56.min;
*(&local1) = _57;
_59 = _56.max;
_60 = _56.inclusive;
_61 = _60.value;
_62 = (frost$core$Int) {1u};
if (_61) goto block9; else goto block10;
block9:;
_64 = _57.value;
_65 = _59.value;
_66 = _64 <= _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block6; else goto block7;
block10:;
_70 = _57.value;
_71 = _59.value;
_72 = _70 < _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_77 = *(&local0);
frost$core$MutableString$append$frost$core$Char32(_77, param2);
_80 = *(&local1);
_81 = _59.value;
_82 = _80.value;
_83 = _81 - _82;
_84 = (frost$core$Int) {_83};
if (_61) goto block12; else goto block13;
block12:;
_86 = _84.value;
_87 = _62.value;
_88 = _86 >= _87;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block11; else goto block7;
block13:;
_92 = _84.value;
_93 = _62.value;
_94 = _92 > _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block11; else goto block7;
block11:;
_98 = _80.value;
_99 = _62.value;
_100 = _98 + _99;
_101 = (frost$core$Int) {_100};
*(&local1) = _101;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_105 = *(&local0);
_106 = frost$core$MutableString$finish$R$frost$core$String(_105);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = *(&local0);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local0) = ((frost$core$MutableString*) NULL);
_116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_106, param0);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_121);
return _116;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

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
frost$core$String* frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$MutableString* local3 = NULL;
frost$core$Int local4;
frost$core$MutableString* local5 = NULL;
frost$core$Int local6;
frost$collections$Iterable* _3;
$fn130 _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
$fn131 _8;
frost$core$Int _9;
frost$core$Object* _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _20;
frost$collections$Iterable* _26;
$fn132 _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _29;
frost$collections$Iterator* _30;
$fn133 _31;
frost$core$Int _32;
frost$core$Object* _33;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int _39;
frost$core$Int _42;
frost$core$Int _43;
int64_t _44;
int64_t _45;
int64_t _46;
frost$core$Int _47;
frost$core$Int _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
frost$core$Int _58;
frost$core$MutableString* _61;
frost$core$Object* _64;
frost$core$MutableString* _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$core$Int _73;
frost$core$Bit _74;
frost$core$Range$LTfrost$core$Int$GT _75;
frost$core$Int _76;
frost$core$Int _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _81;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _87;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$MutableString* _96;
frost$core$Int _99;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _115;
int64_t _117;
int64_t _118;
int64_t _119;
frost$core$Int _120;
frost$core$MutableString* _124;
frost$core$String* _125;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$MutableString* _130;
frost$core$Object* _131;
frost$core$String* _135;
frost$core$Int _136;
frost$core$MutableString* _139;
frost$core$Object* _142;
frost$core$MutableString* _144;
frost$core$Object* _145;
frost$core$Object* _148;
frost$core$Int _151;
frost$core$Bit _152;
frost$core$Range$LTfrost$core$Int$GT _153;
frost$core$Int _154;
frost$core$Int _156;
frost$core$Bit _157;
bool _158;
frost$core$Int _159;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _165;
int64_t _167;
int64_t _168;
bool _169;
frost$core$Bit _170;
bool _171;
frost$core$MutableString* _174;
frost$core$Int _177;
int64_t _178;
int64_t _179;
int64_t _180;
frost$core$Int _181;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _187;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _193;
int64_t _195;
int64_t _196;
int64_t _197;
frost$core$Int _198;
frost$core$MutableString* _202;
frost$core$String* _203;
frost$core$Object* _204;
frost$core$Object* _206;
frost$core$MutableString* _208;
frost$core$Object* _209;
frost$core$String* _213;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$Object* _220;
frost$core$Object* _222;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1361
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1361:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param0);
ITable* $tmp134 = _3->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp134 = $tmp134->next;
}
_4 = $tmp134->methods[0];
_5 = _4(_3);
_6 = _5;
_7 = _6;
ITable* $tmp135 = _7->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp135 = $tmp135->next;
}
_8 = $tmp135->methods[2];
_9 = _8(_7);
_10 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_13 = _9.value;
_14 = param1.value;
_15 = _13 >= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1362
_20 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_20);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1364
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1364:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_26 = ((frost$collections$Iterable*) param0);
ITable* $tmp136 = _26->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp136 = $tmp136->next;
}
_27 = $tmp136->methods[0];
_28 = _27(_26);
_29 = _28;
_30 = _29;
ITable* $tmp137 = _30->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp137 = $tmp137->next;
}
_31 = $tmp137->methods[2];
_32 = _31(_30);
_33 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = param1.value;
_37 = _32.value;
_38 = _36 - _37;
_39 = (frost$core$Int) {_38};
*(&local0) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1365
_42 = *(&local0);
_43 = (frost$core$Int) {2u};
_44 = _42.value;
_45 = _43.value;
_46 = _44 / _45;
_47 = (frost$core$Int) {_46};
*(&local1) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1366
_50 = *(&local0);
_51 = *(&local1);
_52 = _50.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
*(&local2) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1367
_58 = *(&local1);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_61 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_61);
*(&local3) = ((frost$core$MutableString*) NULL);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local3);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local3) = _61;
_70 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_73 = (frost$core$Int) {0u};
_74 = (frost$core$Bit) {false};
_75 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_73, _58, _74);
_76 = _75.min;
*(&local4) = _76;
_78 = _75.max;
_79 = _75.inclusive;
_80 = _79.value;
_81 = (frost$core$Int) {1u};
if (_80) goto block9; else goto block10;
block9:;
_83 = _76.value;
_84 = _78.value;
_85 = _83 <= _84;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block6; else goto block7;
block10:;
_89 = _76.value;
_90 = _78.value;
_91 = _89 < _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_96 = *(&local3);
frost$core$MutableString$append$frost$core$Char32(_96, param2);
_99 = *(&local4);
_100 = _78.value;
_101 = _99.value;
_102 = _100 - _101;
_103 = (frost$core$Int) {_102};
if (_80) goto block12; else goto block13;
block12:;
_105 = _103.value;
_106 = _81.value;
_107 = _105 >= _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block11; else goto block7;
block13:;
_111 = _103.value;
_112 = _81.value;
_113 = _111 > _112;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block11; else goto block7;
block11:;
_117 = _99.value;
_118 = _81.value;
_119 = _117 + _118;
_120 = (frost$core$Int) {_119};
*(&local4) = _120;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_124 = *(&local3);
_125 = frost$core$MutableString$finish$R$frost$core$String(_124);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = *(&local3);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local3) = ((frost$core$MutableString*) NULL);
_135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_125, param0);
_136 = *(&local2);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_139 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_139);
*(&local5) = ((frost$core$MutableString*) NULL);
_142 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local5);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local5) = _139;
_148 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
_151 = (frost$core$Int) {0u};
_152 = (frost$core$Bit) {false};
_153 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_151, _136, _152);
_154 = _153.min;
*(&local6) = _154;
_156 = _153.max;
_157 = _153.inclusive;
_158 = _157.value;
_159 = (frost$core$Int) {1u};
if (_158) goto block18; else goto block19;
block18:;
_161 = _154.value;
_162 = _156.value;
_163 = _161 <= _162;
_164 = (frost$core$Bit) {_163};
_165 = _164.value;
if (_165) goto block15; else goto block16;
block19:;
_167 = _154.value;
_168 = _156.value;
_169 = _167 < _168;
_170 = (frost$core$Bit) {_169};
_171 = _170.value;
if (_171) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
_174 = *(&local5);
frost$core$MutableString$append$frost$core$Char32(_174, param2);
_177 = *(&local6);
_178 = _156.value;
_179 = _177.value;
_180 = _178 - _179;
_181 = (frost$core$Int) {_180};
if (_158) goto block21; else goto block22;
block21:;
_183 = _181.value;
_184 = _159.value;
_185 = _183 >= _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block20; else goto block16;
block22:;
_189 = _181.value;
_190 = _159.value;
_191 = _189 > _190;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block20; else goto block16;
block20:;
_195 = _177.value;
_196 = _159.value;
_197 = _195 + _196;
_198 = (frost$core$Int) {_197};
*(&local6) = _198;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
_202 = *(&local5);
_203 = frost$core$MutableString$finish$R$frost$core$String(_202);
_204 = ((frost$core$Object*) _203);
frost$core$Frost$ref$frost$core$Object$Q(_204);
_206 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = *(&local5);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_209);
*(&local5) = ((frost$core$MutableString*) NULL);
_213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_135, _203);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_222);
return _213;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

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
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index$nullable local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$core$Int _16;
frost$core$Int* _19;
frost$core$String$Index _21;
frost$core$String$Index _24;
frost$core$Int* _31;
frost$core$Int _32;
frost$core$Int _33;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _41;
frost$core$String$Index _44;
frost$core$String$Index _45;
frost$core$String$Index$nullable _46;
frost$core$String$Index _51;
frost$core$String$Index$nullable _52;
frost$core$String$Index$nullable _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$collections$Array* _61;
frost$collections$CollectionView* _62;
$fn138 _63;
frost$core$Int _64;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _77;
frost$collections$Array* _80;
frost$collections$Array* _81;
frost$core$String$Index _82;
frost$core$String$Index$nullable _83;
frost$core$Bit _84;
frost$core$Range$LTfrost$core$String$Index$Q$GT _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$collections$Array* _141;
frost$core$Object* _142;
frost$collections$Array* _144;
frost$core$Object* _145;
frost$collections$Array* _94;
frost$collections$Array* _95;
frost$core$String$Index _96;
frost$core$String$Index$nullable _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
frost$core$String$Index _105;
frost$core$Bit _106;
frost$core$Range$LTfrost$core$String$Index$GT _107;
frost$core$String* _108;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$String$Index$nullable _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _119;
frost$core$String$Index _122;
frost$core$Int _123;
frost$core$Int* _124;
frost$core$Int _125;
int64_t _126;
int64_t _127;
int64_t _128;
frost$core$Int _129;
frost$core$Int* _132;
frost$core$String$Index _134;
frost$core$String$Index _137;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1391
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1392
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1392:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_16 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_19 = &(&local2)->value;
*_19 = _16;
_21 = *(&local2);
*(&local1) = _21;
_24 = *(&local1);
*(&local3) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1393
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1394
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1395
_31 = &param1->_length;
_32 = *_31;
_33 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1395:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_36 = _32.value;
_37 = _33.value;
_38 = _36 == _37;
_39 = (frost$core$Bit) {_38};
_41 = _39.value;
if (_41) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1396
_44 = *(&local3);
_45 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _44);
_46 = ((frost$core$String$Index$nullable) { _45, true });
*(&local4) = _46;
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1399
_51 = *(&local3);
_52 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, _51);
*(&local4) = _52;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1401
_56 = *(&local4);
_57 = !_56.nonnull;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block9; else goto block11;
block11:;
_61 = *(&local0);
_62 = ((frost$collections$CollectionView*) _61);
ITable* $tmp139 = _62->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp139 = $tmp139->next;
}
_63 = $tmp139->methods[0];
_64 = _63(_62);
_65 = (frost$core$Int) {1u};
_66 = param2.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1401:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_72 = _64.value;
_73 = _69.value;
_74 = _72 == _73;
_75 = (frost$core$Bit) {_74};
_77 = _75.value;
if (_77) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1402
_80 = *(&local0);
_81 = _80;
_82 = *(&local3);
_83 = ((frost$core$String$Index$nullable) { _82, true });
_84 = (frost$core$Bit) {false};
_85 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_83, ((frost$core$String$Index$nullable) { .nonnull = false }), _84);
_86 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _85);
_87 = ((frost$core$Object*) _86);
frost$collections$Array$add$frost$collections$Array$T(_81, _87);
_89 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_89);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1403
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1408
_141 = *(&local0);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local0);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local0) = ((frost$collections$Array*) NULL);
return _141;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1405
_94 = *(&local0);
_95 = _94;
_96 = *(&local3);
_97 = *(&local4);
_98 = _97.nonnull;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block13; else goto block14;
block14:;
_102 = (frost$core$Int) {1405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, _102, &$s141);
abort(); // unreachable
block13:;
_105 = ((frost$core$String$Index) _97.value);
_106 = (frost$core$Bit) {false};
_107 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_96, _105, _106);
_108 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _107);
_109 = ((frost$core$Object*) _108);
frost$collections$Array$add$frost$collections$Array$T(_95, _109);
_111 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1406
_114 = *(&local4);
_115 = _114.nonnull;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block15; else goto block16;
block16:;
_119 = (frost$core$Int) {1406u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _119, &$s143);
abort(); // unreachable
block15:;
_122 = ((frost$core$String$Index) _114.value);
_123 = _122.value;
_124 = &param1->_length;
_125 = *_124;
_126 = _123.value;
_127 = _125.value;
_128 = _126 + _127;
_129 = (frost$core$Int) {_128};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1406:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_132 = &(&local6)->value;
*_132 = _129;
_134 = *(&local6);
*(&local5) = _134;
_137 = *(&local5);
*(&local3) = _137;
goto block3;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int param2) {

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
frost$collections$Array* _12;
frost$core$Object* _15;
frost$collections$Array* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Matcher* _24;
frost$core$Object* _26;
frost$core$Matcher* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$Int _37;
frost$core$Int* _40;
frost$core$String$Index _42;
frost$core$String$Index _45;
frost$core$Matcher* _51;
frost$core$Bit _52;
frost$core$Bit _55;
bool _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$collections$Array* _64;
frost$collections$CollectionView* _65;
$fn144 _66;
frost$core$Int _67;
frost$core$Int _68;
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$collections$Array* _83;
frost$collections$Array* _84;
frost$core$String$Index _85;
frost$core$String$Index$nullable _86;
frost$core$Bit _87;
frost$core$Range$LTfrost$core$String$Index$Q$GT _88;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$collections$Array* _148;
frost$core$Object* _149;
frost$core$Matcher* _151;
frost$core$Object* _152;
frost$collections$Array* _155;
frost$core$Object* _156;
frost$core$Matcher* _97;
frost$core$String$Index _98;
frost$collections$Array* _101;
frost$collections$Array* _102;
frost$core$String$Index _103;
frost$core$String$Index _104;
frost$core$Bit _105;
frost$core$Range$LTfrost$core$String$Index$GT _106;
frost$core$String* _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$String$Index _113;
frost$core$Int _114;
frost$core$Matcher* _115;
frost$core$String$Index _116;
frost$core$Int _117;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _124;
int64_t _127;
frost$core$Int _128;
int64_t _132;
frost$core$Int _133;
frost$core$Int _136;
frost$core$Int* _139;
frost$core$String$Index _141;
frost$core$String$Index _144;
_0 = (frost$core$Int) {0u};
_1 = param2.value;
_2 = _0.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {1422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, _7, &$s146);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_11 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_12 = _11;
frost$collections$Array$init(_12);
*(&local0) = ((frost$collections$Array*) NULL);
_15 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local0);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local0) = _11;
_21 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1424
_24 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
_26 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local1);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local1) = _24;
_32 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1425
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1425:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_37 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_40 = &(&local3)->value;
*_40 = _37;
_42 = *(&local3);
*(&local2) = _42;
_45 = *(&local2);
*(&local4) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1426
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1427
_51 = *(&local1);
_52 = frost$core$Matcher$find$R$frost$core$Bit(_51);
*(&local5) = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1428
_55 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:1428:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_58 = _55.value;
_59 = !_58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block7; else goto block9;
block9:;
_64 = *(&local0);
_65 = ((frost$collections$CollectionView*) _64);
ITable* $tmp147 = _65->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp147 = $tmp147->next;
}
_66 = $tmp147->methods[0];
_67 = _66(_65);
_68 = (frost$core$Int) {1u};
_69 = param2.value;
_70 = _68.value;
_71 = _69 - _70;
_72 = (frost$core$Int) {_71};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1428:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _67.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1429
_83 = *(&local0);
_84 = _83;
_85 = *(&local4);
_86 = ((frost$core$String$Index$nullable) { _85, true });
_87 = (frost$core$Bit) {false};
_88 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_86, ((frost$core$String$Index$nullable) { .nonnull = false }), _87);
_89 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, _88);
_90 = ((frost$core$Object*) _89);
frost$collections$Array$add$frost$collections$Array$T(_84, _90);
_92 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_92);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1430
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1436
_148 = *(&local0);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_151 = *(&local1);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local1) = ((frost$core$Matcher*) NULL);
_155 = *(&local0);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local0) = ((frost$collections$Array*) NULL);
return _148;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1432
_97 = *(&local1);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_98, _97);
*(&local6) = _98;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1433
_101 = *(&local0);
_102 = _101;
_103 = *(&local4);
_104 = *(&local6);
_105 = (frost$core$Bit) {false};
_106 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_103, _104, _105);
_107 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, _106);
_108 = ((frost$core$Object*) _107);
frost$collections$Array$add$frost$collections$Array$T(_102, _108);
_110 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1434
_113 = *(&local6);
_114 = _113.value;
_115 = *(&local1);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_116, _115);
_117 = _116.value;
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from String.frost:1434:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_120 = _114.value;
_121 = _117.value;
_122 = _120 > _121;
_123 = (frost$core$Bit) {_122};
_124 = _123.value;
if (_124) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_127 = _114.value;
_128 = (frost$core$Int) {_127};
*(&local7) = _128;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_132 = _117.value;
_133 = (frost$core$Int) {_132};
*(&local7) = _133;
goto block12;
block12:;
_136 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1434:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_139 = &(&local9)->value;
*_139 = _136;
_141 = *(&local9);
*(&local8) = _141;
_144 = *(&local8);
*(&local4) = _144;
goto block5;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

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
frost$core$Int$nullable frost$core$String$get_asInt$R$frost$core$Int$Q(frost$core$String* param0) {

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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s148, _15, &$s149);
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
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

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
frost$core$Char8** _20;
frost$core$Char8* _21;
frost$core$Int64 _22;
int64_t _23;
frost$core$Char8 _24;
frost$core$UInt8 _25;
frost$core$Char8 _26;
uint8_t _29;
uint8_t _30;
bool _31;
frost$core$Bit _32;
bool _34;
frost$core$Int _37;
frost$core$Int _42;
frost$core$Int _46;
frost$core$Int* _47;
frost$core$Int _48;
frost$core$Bit _49;
frost$core$Range$LTfrost$core$Int$GT _50;
frost$core$Int _51;
frost$core$Int _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _56;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Char8** _71;
frost$core$Char8* _72;
frost$core$Int _73;
frost$core$Int64 _74;
int64_t _75;
frost$core$Char8 _76;
uint8_t _77;
int64_t _78;
frost$core$Int64 _79;
frost$core$Int64 _80;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int64 _84;
frost$core$Int64 _87;
frost$core$Int64 _88;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$Int64 _95;
frost$core$Int64 _96;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int64 _106;
frost$core$Int64 _107;
int64_t _108;
int64_t _109;
int64_t _110;
frost$core$Int64 _111;
frost$core$Int64 _112;
int64_t _113;
int64_t _114;
int64_t _115;
frost$core$Int64 _116;
frost$core$Int _119;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int _140;
frost$core$Char8** _144;
frost$core$Char8* _145;
frost$core$Int64 _146;
int64_t _147;
frost$core$Char8 _148;
frost$core$UInt8 _149;
frost$core$Char8 _150;
uint8_t _153;
uint8_t _154;
bool _155;
frost$core$Bit _156;
bool _158;
frost$core$Int64 _161;
int64_t _164;
int64_t _165;
frost$core$Int64 _166;
frost$core$Int64 _171;
frost$core$Int64$nullable _172;
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
_22 = (frost$core$Int64) {0u};
_23 = _22.value;
_24 = _21[_23];
_25 = (frost$core$UInt8) {45u};
_26 = frost$core$Char8$init$frost$core$UInt8(_25);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1475:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_29 = _24.value;
_30 = _26.value;
_31 = _29 == _30;
_32 = (frost$core$Bit) {_31};
_34 = _32.value;
if (_34) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1476
_37 = (frost$core$Int) {1u};
*(&local1) = _37;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1479
_42 = (frost$core$Int) {0u};
*(&local1) = _42;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1481
_46 = *(&local1);
_47 = &param0->_length;
_48 = *_47;
_49 = (frost$core$Bit) {false};
_50 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_46, _48, _49);
_51 = _50.min;
*(&local2) = _51;
_53 = _50.max;
_54 = _50.inclusive;
_55 = _54.value;
_56 = (frost$core$Int) {1u};
if (_55) goto block11; else goto block12;
block11:;
_58 = _51.value;
_59 = _53.value;
_60 = _58 <= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block8; else goto block9;
block12:;
_64 = _51.value;
_65 = _53.value;
_66 = _64 < _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1482
_71 = &param0->data;
_72 = *_71;
_73 = *(&local2);
_74 = frost$core$Int64$init$frost$core$Int(_73);
_75 = _74.value;
_76 = _72[_75];
_77 = _76.value;
_78 = ((int64_t) _77);
_79 = (frost$core$Int64) {_78};
_80 = (frost$core$Int64) {48u};
_81 = _79.value;
_82 = _80.value;
_83 = _81 - _82;
_84 = (frost$core$Int64) {_83};
*(&local3) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1483
_87 = *(&local3);
_88 = (frost$core$Int64) {0u};
_89 = _87.value;
_90 = _88.value;
_91 = _89 < _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block13; else goto block15;
block15:;
_95 = *(&local3);
_96 = (frost$core$Int64) {9u};
_97 = _95.value;
_98 = _96.value;
_99 = _97 > _98;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1484
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1486
_106 = *(&local0);
_107 = (frost$core$Int64) {10u};
_108 = _106.value;
_109 = _107.value;
_110 = _108 * _109;
_111 = (frost$core$Int64) {_110};
_112 = *(&local3);
_113 = _111.value;
_114 = _112.value;
_115 = _113 + _114;
_116 = (frost$core$Int64) {_115};
*(&local0) = _116;
_119 = *(&local2);
_120 = _53.value;
_121 = _119.value;
_122 = _120 - _121;
_123 = (frost$core$Int) {_122};
if (_55) goto block17; else goto block18;
block17:;
_125 = _123.value;
_126 = _56.value;
_127 = _125 >= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block16; else goto block9;
block18:;
_131 = _123.value;
_132 = _56.value;
_133 = _131 > _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block16; else goto block9;
block16:;
_137 = _119.value;
_138 = _56.value;
_139 = _137 + _138;
_140 = (frost$core$Int) {_139};
*(&local2) = _140;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1488
_144 = &param0->data;
_145 = *_144;
_146 = (frost$core$Int64) {0u};
_147 = _146.value;
_148 = _145[_147];
_149 = (frost$core$UInt8) {45u};
_150 = frost$core$Char8$init$frost$core$UInt8(_149);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1488:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_153 = _148.value;
_154 = _150.value;
_155 = _153 == _154;
_156 = (frost$core$Bit) {_155};
_158 = _156.value;
if (_158) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1489
_161 = *(&local0);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1489:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_164 = _161.value;
_165 = -_164;
_166 = (frost$core$Int64) {_165};
*(&local0) = _166;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1491
_171 = *(&local0);
_172 = ((frost$core$Int64$nullable) { _171, true });
return _172;

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

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
frost$core$Char8** _44;
frost$core$Char8* _45;
frost$core$Int _46;
frost$core$Int64 _47;
int64_t _48;
frost$core$Char8 _49;
uint8_t _50;
uint64_t _51;
frost$core$UInt64 _52;
frost$core$UInt64 _53;
uint64_t _54;
uint64_t _55;
uint64_t _56;
frost$core$UInt64 _57;
frost$core$UInt64 _60;
frost$core$UInt64 _61;
uint64_t _62;
uint64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$UInt64 _68;
frost$core$UInt64 _69;
uint64_t _70;
uint64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$UInt64 _79;
frost$core$UInt64 _80;
uint64_t _81;
uint64_t _82;
uint64_t _83;
frost$core$UInt64 _84;
frost$core$UInt64 _85;
uint64_t _86;
uint64_t _87;
uint64_t _88;
frost$core$UInt64 _89;
frost$core$Int _92;
int64_t _93;
int64_t _94;
int64_t _95;
frost$core$Int _96;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _108;
int64_t _110;
int64_t _111;
int64_t _112;
frost$core$Int _113;
frost$core$UInt64 _117;
frost$core$UInt64$nullable _118;
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
_46 = *(&local1);
_47 = frost$core$Int64$init$frost$core$Int(_46);
_48 = _47.value;
_49 = _45[_48];
_50 = _49.value;
_51 = ((uint64_t) _50);
_52 = (frost$core$UInt64) {_51};
_53 = (frost$core$UInt64) {48u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 - _55;
_57 = (frost$core$UInt64) {_56};
*(&local2) = _57;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1508
_60 = *(&local2);
_61 = (frost$core$UInt64) {0u};
_62 = _60.value;
_63 = _61.value;
_64 = _62 < _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block9; else goto block11;
block11:;
_68 = *(&local2);
_69 = (frost$core$UInt64) {9u};
_70 = _68.value;
_71 = _69.value;
_72 = _70 > _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1509
return ((frost$core$UInt64$nullable) { .nonnull = false });
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1511
_79 = *(&local0);
_80 = (frost$core$UInt64) {10u};
_81 = _79.value;
_82 = _80.value;
_83 = _81 * _82;
_84 = (frost$core$UInt64) {_83};
_85 = *(&local2);
_86 = _84.value;
_87 = _85.value;
_88 = _86 + _87;
_89 = (frost$core$UInt64) {_88};
*(&local0) = _89;
_92 = *(&local1);
_93 = _26.value;
_94 = _92.value;
_95 = _93 - _94;
_96 = (frost$core$Int) {_95};
if (_28) goto block13; else goto block14;
block13:;
_98 = _96.value;
_99 = _29.value;
_100 = _98 >= _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block12; else goto block5;
block14:;
_104 = _96.value;
_105 = _29.value;
_106 = _104 > _105;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block12; else goto block5;
block12:;
_110 = _92.value;
_111 = _29.value;
_112 = _110 + _111;
_113 = (frost$core$Int) {_112};
*(&local1) = _113;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1513
_117 = *(&local0);
_118 = ((frost$core$UInt64$nullable) { _117, true });
return _118;

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

frost$core$Real64 _1;
frost$core$Real64$nullable _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&_1, param0);
_2 = ((frost$core$Real64$nullable) { _1, true });
return _2;

}
frost$core$Int frost$core$String$get_hash$R$frost$core$Int(frost$core$String* param0) {

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
frost$core$Char8** _30;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int64 _33;
int64_t _34;
frost$core$Char8 _35;
uint8_t _38;
int8_t _39;
frost$core$Int8 _40;
frost$core$Int _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int _52;
frost$core$Int _53;
int64_t _54;
int64_t _55;
int64_t _56;
frost$core$Int _57;
frost$core$Int _60;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
frost$core$Int _85;
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
_32 = *(&local1);
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = _33.value;
_35 = _31[_34];
// begin inline call to function frost.core.Char8.get_asInt8():frost.core.Int8 from String.frost:1536:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
_38 = _35.value;
_39 = ((int8_t) _38);
_40 = (frost$core$Int8) {_39};
_42 = frost$core$Int$init$frost$core$Int8(_40);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from String.frost:1536:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_45 = _29.value;
_46 = _42.value;
_47 = _45 ^ _46;
_48 = (frost$core$Int) {_47};
*(&local0) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1537
_52 = *(&local0);
_53 = (frost$core$Int) {1099511628211u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 * _55;
_57 = (frost$core$Int) {_56};
*(&local0) = _57;
_60 = *(&local1);
_61 = _11.value;
_62 = _60.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
if (_13) goto block9; else goto block10;
block9:;
_66 = _64.value;
_67 = _14.value;
_68 = _66 >= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block8; else goto block2;
block10:;
_72 = _64.value;
_73 = _14.value;
_74 = _72 > _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block8; else goto block2;
block8:;
_78 = _60.value;
_79 = _14.value;
_80 = _78 + _79;
_81 = (frost$core$Int) {_80};
*(&local1) = _81;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1539
_85 = *(&local0);
return _85;

}

