#include "frost/core/String.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
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
__attribute__((weak)) frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String$shim(frost$core$String* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$String$format$frost$core$String$R$frost$core$String(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$String$get_hash$R$frost$core$Int$shim(frost$core$String* p0) {
    frost$core$Int result = frost$core$String$get_hash$R$frost$core$Int(p0);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$_frost$collections$Iterable, { frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$String$_frost$core$Equatable, { frost$core$String$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$collections$Key, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int, frost$core$String$get_byteLength$R$frost$core$Int, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$Q$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt$R$frost$core$Int$Q, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn56)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn87)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn179)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn183)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn188)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn278)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn282)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn690)(frost$core$Object*);
typedef frost$core$String* (*$fn798)(frost$core$Object*);
typedef frost$core$Bit (*$fn887)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn900)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn934)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1538)(frost$core$Object*);
typedef frost$core$String* (*$fn1730)(frost$core$Object*);
typedef frost$core$Object* (*$fn2412)(frost$core$String*);
typedef frost$core$Object* (*$fn2414)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2418)(frost$core$Object*);
typedef frost$core$String* (*$fn2432)(frost$core$Object*);
typedef frost$core$Object* (*$fn2496)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2498)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2502)(frost$core$Object*);
typedef frost$core$String* (*$fn2517)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2773)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2777)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2786)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2790)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2845)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2849)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2858)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2862)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2917)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2921)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2930)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2934)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn3070)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3138)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 168332950343237285, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x22", 2, 671069362943044699, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e", 2, 671135333640737359, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x74", 2, 671128736570968093, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 114, 6085615713521127995, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s3118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 167, -3950450366484826733, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:351
frost$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:352
frost$core$Int* $tmp5 = &param0->_length;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp6 = &param0->owner;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
frost$core$Int $tmp9 = (frost$core$Int) {0u};
frost$core$Int* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:358
frost$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:359
frost$core$Int* $tmp12 = &param0->_length;
*$tmp12 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp13 = &param0->owner;
frost$core$String* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String** $tmp15 = &param0->owner;
*$tmp15 = param3;
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
frost$core$Int $tmp16 = (frost$core$Int) {0u};
frost$core$Int* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:364
ITable* $tmp18 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int $tmp21 = $tmp19(((frost$collections$CollectionView*) param1));
frost$core$Int* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:365
frost$core$Int* $tmp23 = &param0->_length;
frost$core$Int $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = frost$core$Int64$init$frost$core$Int($tmp24);
int64_t $tmp26 = $tmp25.value;
frost$core$Char8* $tmp27 = ((frost$core$Char8*) frostAlloc($tmp26 * 1));
frost$core$Char8** $tmp28 = &param0->data;
*$tmp28 = $tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:366
frost$core$Int $tmp29 = (frost$core$Int) {0u};
frost$core$Int* $tmp30 = &param0->_length;
frost$core$Int $tmp31 = *$tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp29, $tmp31, $tmp32);
frost$core$Int $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int $tmp38 = (frost$core$Int) {1u};
if ($tmp37) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp34.value;
int64_t $tmp40 = $tmp35.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp34.value;
int64_t $tmp45 = $tmp35.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:367
frost$core$Char8** $tmp49 = &param0->data;
frost$core$Char8* $tmp50 = *$tmp49;
frost$core$Int $tmp51 = *(&local0);
frost$core$Int64 $tmp52 = frost$core$Int64$init$frost$core$Int($tmp51);
frost$core$Int $tmp53 = *(&local0);
ITable* $tmp54 = param1->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Object* $tmp57 = $tmp55(param1, $tmp53);
int64_t $tmp58 = $tmp52.value;
$tmp50[$tmp58] = ((frost$core$Char8$wrapper*) $tmp57)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Int $tmp59 = *(&local0);
int64_t $tmp60 = $tmp35.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 - $tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {$tmp62};
if ($tmp37) goto block7; else goto block8;
block7:;
int64_t $tmp64 = $tmp63.value;
int64_t $tmp65 = $tmp38.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
int64_t $tmp69 = $tmp63.value;
int64_t $tmp70 = $tmp38.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp59.value;
int64_t $tmp75 = $tmp38.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {$tmp76};
*(&local0) = $tmp77;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:369
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp78 = &param0->owner;
frost$core$String* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
frost$core$Int $tmp81 = (frost$core$Int) {0u};
frost$core$Int* $tmp82 = &param0->dummy;
*$tmp82 = $tmp81;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:373
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp83 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp83);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$MutableString* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:374
ITable* $tmp85 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$collections$Iterator* $tmp88 = $tmp86(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
frost$core$Object* $tmp97 = $tmp95($tmp88);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp97)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:375
frost$core$MutableString* $tmp98 = *(&local0);
frost$core$Char32 $tmp99 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp98, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:377
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$Int* $tmp101 = &$tmp100->_length;
frost$core$Int $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = frost$core$Int64$init$frost$core$Int($tmp102);
int64_t $tmp104 = $tmp103.value;
frost$core$Char8* $tmp105 = ((frost$core$Char8*) frostAlloc($tmp104 * 1));
frost$core$Char8** $tmp106 = &param0->data;
*$tmp106 = $tmp105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:378
frost$core$Int $tmp107 = (frost$core$Int) {0u};
frost$core$MutableString* $tmp108 = *(&local0);
frost$core$Int* $tmp109 = &$tmp108->_length;
frost$core$Int $tmp110 = *$tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp112 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp107, $tmp110, $tmp111);
frost$core$Int $tmp113 = $tmp112.min;
*(&local2) = $tmp113;
frost$core$Int $tmp114 = $tmp112.max;
frost$core$Bit $tmp115 = $tmp112.inclusive;
bool $tmp116 = $tmp115.value;
frost$core$Int $tmp117 = (frost$core$Int) {1u};
if ($tmp116) goto block7; else goto block8;
block7:;
int64_t $tmp118 = $tmp113.value;
int64_t $tmp119 = $tmp114.value;
bool $tmp120 = $tmp118 <= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block8:;
int64_t $tmp123 = $tmp113.value;
int64_t $tmp124 = $tmp114.value;
bool $tmp125 = $tmp123 < $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:379
frost$core$Char8** $tmp128 = &param0->data;
frost$core$Char8* $tmp129 = *$tmp128;
frost$core$Int $tmp130 = *(&local2);
frost$core$Int64 $tmp131 = frost$core$Int64$init$frost$core$Int($tmp130);
frost$core$MutableString* $tmp132 = *(&local0);
frost$core$Char8** $tmp133 = &$tmp132->data;
frost$core$Char8* $tmp134 = *$tmp133;
frost$core$Int $tmp135 = *(&local2);
frost$core$Int64 $tmp136 = frost$core$Int64$init$frost$core$Int($tmp135);
int64_t $tmp137 = $tmp136.value;
frost$core$Char8 $tmp138 = $tmp134[$tmp137];
int64_t $tmp139 = $tmp131.value;
$tmp129[$tmp139] = $tmp138;
frost$core$Int $tmp140 = *(&local2);
int64_t $tmp141 = $tmp114.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 - $tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {$tmp143};
if ($tmp116) goto block10; else goto block11;
block10:;
int64_t $tmp145 = $tmp144.value;
int64_t $tmp146 = $tmp117.value;
bool $tmp147 = $tmp145 >= $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block9; else goto block5;
block11:;
int64_t $tmp150 = $tmp144.value;
int64_t $tmp151 = $tmp117.value;
bool $tmp152 = $tmp150 > $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block9; else goto block5;
block9:;
int64_t $tmp155 = $tmp140.value;
int64_t $tmp156 = $tmp117.value;
int64_t $tmp157 = $tmp155 + $tmp156;
frost$core$Int $tmp158 = (frost$core$Int) {$tmp157};
*(&local2) = $tmp158;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:381
frost$core$MutableString* $tmp159 = *(&local0);
frost$core$Int* $tmp160 = &$tmp159->_length;
frost$core$Int $tmp161 = *$tmp160;
frost$core$Int* $tmp162 = &param0->_length;
*$tmp162 = $tmp161;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp163 = &param0->owner;
frost$core$String* $tmp164 = *$tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$String** $tmp165 = &param0->owner;
*$tmp165 = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:403
frost$core$Bit $tmp167 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s168);
bool $tmp169 = $tmp167.value;
if ($tmp169) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block3:;
frost$core$Bit $tmp170 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s171);
bool $tmp172 = $tmp170.value;
if ($tmp172) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:408
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp173 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp173, &$s174);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$MutableString* $tmp175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local0) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:409
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from String.frost:409:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp176 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp176, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp176)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
ITable* $tmp177 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp176))->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$collections$Iterator* $tmp180 = $tmp178(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp176)));
goto block7;
block7:;
ITable* $tmp181 = $tmp180->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[0];
frost$core$Bit $tmp184 = $tmp182($tmp180);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block9; else goto block8;
block8:;
ITable* $tmp186 = $tmp180->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[1];
frost$core$Object* $tmp189 = $tmp187($tmp180);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp189)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:410
frost$core$Char8 $tmp190 = *(&local1);
frost$core$UInt8 $tmp191 = (frost$core$UInt8) {34u};
frost$core$Char8 $tmp192 = frost$core$Char8$init$frost$core$UInt8($tmp191);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:411:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp193 = $tmp190.value;
uint8_t $tmp194 = $tmp192.value;
bool $tmp195 = $tmp193 == $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:412
frost$core$MutableString* $tmp198 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp198, &$s199);
goto block10;
block12:;
frost$core$UInt8 $tmp200 = (frost$core$UInt8) {92u};
frost$core$Char8 $tmp201 = frost$core$Char8$init$frost$core$UInt8($tmp200);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:414:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp202 = $tmp190.value;
uint8_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 == $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:415
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp207, &$s208);
goto block10;
block15:;
frost$core$UInt8 $tmp209 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp210 = frost$core$Char8$init$frost$core$UInt8($tmp209);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:417:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp211 = $tmp190.value;
uint8_t $tmp212 = $tmp210.value;
bool $tmp213 = $tmp211 == $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:418
frost$core$MutableString* $tmp216 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp216, &$s217);
goto block10;
block18:;
frost$core$UInt8 $tmp218 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp219 = frost$core$Char8$init$frost$core$UInt8($tmp218);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:420:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp220 = $tmp190.value;
uint8_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:421
frost$core$MutableString* $tmp225 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp225, &$s226);
goto block10;
block21:;
frost$core$UInt8 $tmp227 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp228 = frost$core$Char8$init$frost$core$UInt8($tmp227);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:423:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp229 = $tmp190.value;
uint8_t $tmp230 = $tmp228.value;
bool $tmp231 = $tmp229 == $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:424
frost$core$MutableString* $tmp234 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp234, &$s235);
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:427
frost$core$Char8 $tmp236 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
uint8_t $tmp237 = $tmp236.value;
frost$core$UInt8 $tmp238 = (frost$core$UInt8) {$tmp237};
frost$core$UInt8 $tmp239 = (frost$core$UInt8) {32u};
uint8_t $tmp240 = $tmp238.value;
uint8_t $tmp241 = $tmp239.value;
bool $tmp242 = $tmp240 >= $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block29; else goto block28;
block29:;
frost$core$Char8 $tmp245 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
uint8_t $tmp246 = $tmp245.value;
frost$core$UInt8 $tmp247 = (frost$core$UInt8) {$tmp246};
frost$core$UInt8 $tmp248 = (frost$core$UInt8) {126u};
uint8_t $tmp249 = $tmp247.value;
uint8_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 <= $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:428
frost$core$MutableString* $tmp254 = *(&local0);
frost$core$Char8 $tmp255 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp254, $tmp255);
goto block27;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:432
frost$core$MutableString* $tmp256 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp256, &$s257);
goto block27;
block27:;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp176)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:437
frost$core$MutableString* $tmp258 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp258, &$s259);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:438
frost$core$MutableString* $tmp260 = *(&local0);
frost$core$String* $tmp261 = frost$core$MutableString$finish$R$frost$core$String($tmp260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$MutableString* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp261;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:441
frost$core$Int $tmp263 = (frost$core$Int) {441u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s264, $tmp263);
abort(); // unreachable
block1:;
goto block32;
block32:;

}
void frost$core$String$cleanup(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:449
frost$core$String** $tmp265 = &param0->owner;
frost$core$String* $tmp266 = *$tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266 == NULL};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:450
frost$core$Char8** $tmp269 = &param0->data;
frost$core$Char8* $tmp270 = *$tmp269;
frostFree($tmp270);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:448
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp271 = &param0->owner;
frost$core$String* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp273 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp273, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
return ((frost$collections$ListView*) $tmp273);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:467
FROST_ASSERT(32 == sizeof(frost$core$String$UTF16Iterator));
frost$core$String$UTF16Iterator* $tmp274 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp274, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp274)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return ((frost$collections$Iterator*) $tmp274);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:475
FROST_ASSERT(32 == sizeof(frost$core$String$UTF32Iterator));
frost$core$String$UTF32Iterator* $tmp275 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp275, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
return ((frost$collections$Iterator*) $tmp275);

}
frost$core$Int frost$core$String$get_length$R$frost$core$Int(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp276 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$collections$Iterator* $tmp279 = $tmp277(((frost$collections$Iterable*) param0));
ITable* $tmp280 = $tmp279->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[2];
frost$core$Int $tmp283 = $tmp281($tmp279);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
return $tmp283;

}
frost$core$Int frost$core$String$get_byteLength$R$frost$core$Int(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp284 = &param0->_length;
frost$core$Int $tmp285 = *$tmp284;
return $tmp285;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:496
frost$core$Int* $tmp286 = &param0->_length;
frost$core$Int $tmp287 = *$tmp286;
frost$core$Int* $tmp288 = &param1->_length;
frost$core$Int $tmp289 = *$tmp288;
int64_t $tmp290 = $tmp287.value;
int64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 < $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:497
frost$core$Bit $tmp295 = (frost$core$Bit) {false};
return $tmp295;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:499
frost$core$Int $tmp296 = (frost$core$Int) {0u};
frost$core$Int* $tmp297 = &param1->_length;
frost$core$Int $tmp298 = *$tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp300 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp296, $tmp298, $tmp299);
frost$core$Int $tmp301 = $tmp300.min;
*(&local0) = $tmp301;
frost$core$Int $tmp302 = $tmp300.max;
frost$core$Bit $tmp303 = $tmp300.inclusive;
bool $tmp304 = $tmp303.value;
frost$core$Int $tmp305 = (frost$core$Int) {1u};
if ($tmp304) goto block6; else goto block7;
block6:;
int64_t $tmp306 = $tmp301.value;
int64_t $tmp307 = $tmp302.value;
bool $tmp308 = $tmp306 <= $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block3; else goto block4;
block7:;
int64_t $tmp311 = $tmp301.value;
int64_t $tmp312 = $tmp302.value;
bool $tmp313 = $tmp311 < $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:500
frost$core$Char8** $tmp316 = &param0->data;
frost$core$Char8* $tmp317 = *$tmp316;
frost$core$Int $tmp318 = *(&local0);
frost$core$Int64 $tmp319 = frost$core$Int64$init$frost$core$Int($tmp318);
int64_t $tmp320 = $tmp319.value;
frost$core$Char8 $tmp321 = $tmp317[$tmp320];
frost$core$Char8** $tmp322 = &param1->data;
frost$core$Char8* $tmp323 = *$tmp322;
frost$core$Int $tmp324 = *(&local0);
frost$core$Int64 $tmp325 = frost$core$Int64$init$frost$core$Int($tmp324);
int64_t $tmp326 = $tmp325.value;
frost$core$Char8 $tmp327 = $tmp323[$tmp326];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:500:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp328 = $tmp321.value;
uint8_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 != $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:501
frost$core$Bit $tmp333 = (frost$core$Bit) {false};
return $tmp333;
block9:;
frost$core$Int $tmp334 = *(&local0);
int64_t $tmp335 = $tmp302.value;
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335 - $tmp336;
frost$core$Int $tmp338 = (frost$core$Int) {$tmp337};
if ($tmp304) goto block12; else goto block13;
block12:;
int64_t $tmp339 = $tmp338.value;
int64_t $tmp340 = $tmp305.value;
bool $tmp341 = $tmp339 >= $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block11; else goto block4;
block13:;
int64_t $tmp344 = $tmp338.value;
int64_t $tmp345 = $tmp305.value;
bool $tmp346 = $tmp344 > $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block11; else goto block4;
block11:;
int64_t $tmp349 = $tmp334.value;
int64_t $tmp350 = $tmp305.value;
int64_t $tmp351 = $tmp349 + $tmp350;
frost$core$Int $tmp352 = (frost$core$Int) {$tmp351};
*(&local0) = $tmp352;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:504
frost$core$Bit $tmp353 = (frost$core$Bit) {true};
return $tmp353;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:508
frost$core$Int* $tmp354 = &param0->_length;
frost$core$Int $tmp355 = *$tmp354;
frost$core$Int* $tmp356 = &param1->_length;
frost$core$Int $tmp357 = *$tmp356;
int64_t $tmp358 = $tmp355.value;
int64_t $tmp359 = $tmp357.value;
bool $tmp360 = $tmp358 < $tmp359;
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:509
frost$core$Bit $tmp363 = (frost$core$Bit) {false};
return $tmp363;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:511
frost$core$Int $tmp364 = (frost$core$Int) {0u};
frost$core$Int* $tmp365 = &param1->_length;
frost$core$Int $tmp366 = *$tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp368 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp364, $tmp366, $tmp367);
frost$core$Int $tmp369 = $tmp368.min;
*(&local0) = $tmp369;
frost$core$Int $tmp370 = $tmp368.max;
frost$core$Bit $tmp371 = $tmp368.inclusive;
bool $tmp372 = $tmp371.value;
frost$core$Int $tmp373 = (frost$core$Int) {1u};
if ($tmp372) goto block6; else goto block7;
block6:;
int64_t $tmp374 = $tmp369.value;
int64_t $tmp375 = $tmp370.value;
bool $tmp376 = $tmp374 <= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block3; else goto block4;
block7:;
int64_t $tmp379 = $tmp369.value;
int64_t $tmp380 = $tmp370.value;
bool $tmp381 = $tmp379 < $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:512
frost$core$Char8** $tmp384 = &param0->data;
frost$core$Char8* $tmp385 = *$tmp384;
frost$core$Int* $tmp386 = &param0->_length;
frost$core$Int $tmp387 = *$tmp386;
frost$core$Int* $tmp388 = &param1->_length;
frost$core$Int $tmp389 = *$tmp388;
int64_t $tmp390 = $tmp387.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int $tmp393 = (frost$core$Int) {$tmp392};
frost$core$Int $tmp394 = *(&local0);
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395 + $tmp396;
frost$core$Int $tmp398 = (frost$core$Int) {$tmp397};
frost$core$Int64 $tmp399 = frost$core$Int64$init$frost$core$Int($tmp398);
int64_t $tmp400 = $tmp399.value;
frost$core$Char8 $tmp401 = $tmp385[$tmp400];
frost$core$Char8** $tmp402 = &param1->data;
frost$core$Char8* $tmp403 = *$tmp402;
frost$core$Int $tmp404 = *(&local0);
frost$core$Int64 $tmp405 = frost$core$Int64$init$frost$core$Int($tmp404);
int64_t $tmp406 = $tmp405.value;
frost$core$Char8 $tmp407 = $tmp403[$tmp406];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:512:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp408 = $tmp401.value;
uint8_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 != $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:513
frost$core$Bit $tmp413 = (frost$core$Bit) {false};
return $tmp413;
block9:;
frost$core$Int $tmp414 = *(&local0);
int64_t $tmp415 = $tmp370.value;
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415 - $tmp416;
frost$core$Int $tmp418 = (frost$core$Int) {$tmp417};
if ($tmp372) goto block12; else goto block13;
block12:;
int64_t $tmp419 = $tmp418.value;
int64_t $tmp420 = $tmp373.value;
bool $tmp421 = $tmp419 >= $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block11; else goto block4;
block13:;
int64_t $tmp424 = $tmp418.value;
int64_t $tmp425 = $tmp373.value;
bool $tmp426 = $tmp424 > $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block11; else goto block4;
block11:;
int64_t $tmp429 = $tmp414.value;
int64_t $tmp430 = $tmp373.value;
int64_t $tmp431 = $tmp429 + $tmp430;
frost$core$Int $tmp432 = (frost$core$Int) {$tmp431};
*(&local0) = $tmp432;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:516
frost$core$Bit $tmp433 = (frost$core$Bit) {true};
return $tmp433;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:525
frost$core$Int* $tmp434 = &param0->_length;
frost$core$Int $tmp435 = *$tmp434;
frost$core$Int $tmp436 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:525:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:528
frost$core$Int $tmp442 = (frost$core$Int) {0u};
*(&local0) = $tmp442;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:529
goto block4;
block4:;
frost$core$Int $tmp443 = *(&local0);
frost$core$Int* $tmp444 = &param0->_length;
frost$core$Int $tmp445 = *$tmp444;
int64_t $tmp446 = $tmp443.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 < $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block7; else goto block6;
block7:;
frost$core$Char8** $tmp451 = &param0->data;
frost$core$Char8* $tmp452 = *$tmp451;
frost$core$Int $tmp453 = *(&local0);
frost$core$Int64 $tmp454 = frost$core$Int64$init$frost$core$Int($tmp453);
int64_t $tmp455 = $tmp454.value;
frost$core$Char8 $tmp456 = $tmp452[$tmp455];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:529:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
frost$core$UInt8 $tmp457 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp458 = frost$core$Char8$init$frost$core$UInt8($tmp457);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp459 = $tmp456.value;
uint8_t $tmp460 = $tmp458.value;
bool $tmp461 = $tmp459 == $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block10; else goto block11;
block11:;
frost$core$UInt8 $tmp464 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp465 = frost$core$Char8$init$frost$core$UInt8($tmp464);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp466 = $tmp456.value;
uint8_t $tmp467 = $tmp465.value;
bool $tmp468 = $tmp466 == $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block10; else goto block13;
block13:;
frost$core$UInt8 $tmp471 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp472 = frost$core$Char8$init$frost$core$UInt8($tmp471);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp473 = $tmp456.value;
uint8_t $tmp474 = $tmp472.value;
bool $tmp475 = $tmp473 == $tmp474;
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block10; else goto block15;
block15:;
frost$core$UInt8 $tmp478 = (frost$core$UInt8) {32u};
frost$core$Char8 $tmp479 = frost$core$Char8$init$frost$core$UInt8($tmp478);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp480 = $tmp456.value;
uint8_t $tmp481 = $tmp479.value;
bool $tmp482 = $tmp480 == $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block10; else goto block17;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
frost$core$Bit $tmp485 = (frost$core$Bit) {true};
*(&local1) = $tmp485;
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
frost$core$Bit $tmp486 = (frost$core$Bit) {false};
*(&local1) = $tmp486;
goto block8;
block9:;
goto block8;
block8:;
frost$core$Bit $tmp487 = *(&local1);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:530
frost$core$Int $tmp489 = *(&local0);
frost$core$Int $tmp490 = (frost$core$Int) {1u};
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491 + $tmp492;
frost$core$Int $tmp494 = (frost$core$Int) {$tmp493};
*(&local0) = $tmp494;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:533
frost$core$Int* $tmp495 = &param0->_length;
frost$core$Int $tmp496 = *$tmp495;
frost$core$Int $tmp497 = (frost$core$Int) {1u};
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498 - $tmp499;
frost$core$Int $tmp501 = (frost$core$Int) {$tmp500};
*(&local2) = $tmp501;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:534
goto block19;
block19:;
frost$core$Int $tmp502 = *(&local2);
frost$core$Int $tmp503 = *(&local0);
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503.value;
bool $tmp506 = $tmp504 >= $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block22; else goto block21;
block22:;
frost$core$Char8** $tmp509 = &param0->data;
frost$core$Char8* $tmp510 = *$tmp509;
frost$core$Int $tmp511 = *(&local2);
frost$core$Int64 $tmp512 = frost$core$Int64$init$frost$core$Int($tmp511);
int64_t $tmp513 = $tmp512.value;
frost$core$Char8 $tmp514 = $tmp510[$tmp513];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:534:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:55
frost$core$UInt8 $tmp515 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp516 = frost$core$Char8$init$frost$core$UInt8($tmp515);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp517 = $tmp514.value;
uint8_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 == $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block25; else goto block26;
block26:;
frost$core$UInt8 $tmp522 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp523 = frost$core$Char8$init$frost$core$UInt8($tmp522);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp524 = $tmp514.value;
uint8_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 == $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block25; else goto block28;
block28:;
frost$core$UInt8 $tmp529 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp530 = frost$core$Char8$init$frost$core$UInt8($tmp529);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp531 = $tmp514.value;
uint8_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block25; else goto block30;
block30:;
frost$core$UInt8 $tmp536 = (frost$core$UInt8) {32u};
frost$core$Char8 $tmp537 = frost$core$Char8$init$frost$core$UInt8($tmp536);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp538 = $tmp514.value;
uint8_t $tmp539 = $tmp537.value;
bool $tmp540 = $tmp538 == $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block25; else goto block32;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:57
frost$core$Bit $tmp543 = (frost$core$Bit) {true};
*(&local3) = $tmp543;
goto block23;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:60
frost$core$Bit $tmp544 = (frost$core$Bit) {false};
*(&local3) = $tmp544;
goto block23;
block24:;
goto block23;
block23:;
frost$core$Bit $tmp545 = *(&local3);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:535
frost$core$Int $tmp547 = *(&local2);
frost$core$Int $tmp548 = (frost$core$Int) {1u};
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int $tmp552 = (frost$core$Int) {$tmp551};
*(&local2) = $tmp552;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:538
frost$core$Int $tmp553 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp554 = &(&local5)->value;
*$tmp554 = $tmp553;
frost$core$String$Index $tmp555 = *(&local5);
*(&local4) = $tmp555;
frost$core$String$Index $tmp556 = *(&local4);
frost$core$Int $tmp557 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:538:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp558 = &(&local7)->value;
*$tmp558 = $tmp557;
frost$core$String$Index $tmp559 = *(&local7);
*(&local6) = $tmp559;
frost$core$String$Index $tmp560 = *(&local6);
frost$core$Bit $tmp561 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$String$Index$GT $tmp562 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp556, $tmp560, $tmp561);
frost$core$String* $tmp563 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
return $tmp563;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:545
frost$core$Int* $tmp564 = &param0->_length;
frost$core$Int $tmp565 = *$tmp564;
frost$core$Int* $tmp566 = &param1->_length;
frost$core$Int $tmp567 = *$tmp566;
int64_t $tmp568 = $tmp565.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 + $tmp569;
frost$core$Int $tmp571 = (frost$core$Int) {$tmp570};
frost$core$Int64 $tmp572 = frost$core$Int64$init$frost$core$Int($tmp571);
int64_t $tmp573 = $tmp572.value;
frost$core$Char8* $tmp574 = ((frost$core$Char8*) frostAlloc($tmp573 * 1));
*(&local0) = $tmp574;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:546
frost$core$Int $tmp575 = (frost$core$Int) {0u};
frost$core$Int* $tmp576 = &param0->_length;
frost$core$Int $tmp577 = *$tmp576;
frost$core$Bit $tmp578 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp579 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp575, $tmp577, $tmp578);
frost$core$Int $tmp580 = $tmp579.min;
*(&local1) = $tmp580;
frost$core$Int $tmp581 = $tmp579.max;
frost$core$Bit $tmp582 = $tmp579.inclusive;
bool $tmp583 = $tmp582.value;
frost$core$Int $tmp584 = (frost$core$Int) {1u};
if ($tmp583) goto block4; else goto block5;
block4:;
int64_t $tmp585 = $tmp580.value;
int64_t $tmp586 = $tmp581.value;
bool $tmp587 = $tmp585 <= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block1; else goto block2;
block5:;
int64_t $tmp590 = $tmp580.value;
int64_t $tmp591 = $tmp581.value;
bool $tmp592 = $tmp590 < $tmp591;
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:547
frost$core$Char8* $tmp595 = *(&local0);
frost$core$Int $tmp596 = *(&local1);
frost$core$Int64 $tmp597 = frost$core$Int64$init$frost$core$Int($tmp596);
frost$core$Char8** $tmp598 = &param0->data;
frost$core$Char8* $tmp599 = *$tmp598;
frost$core$Int $tmp600 = *(&local1);
frost$core$Int64 $tmp601 = frost$core$Int64$init$frost$core$Int($tmp600);
int64_t $tmp602 = $tmp601.value;
frost$core$Char8 $tmp603 = $tmp599[$tmp602];
int64_t $tmp604 = $tmp597.value;
$tmp595[$tmp604] = $tmp603;
frost$core$Int $tmp605 = *(&local1);
int64_t $tmp606 = $tmp581.value;
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606 - $tmp607;
frost$core$Int $tmp609 = (frost$core$Int) {$tmp608};
if ($tmp583) goto block7; else goto block8;
block7:;
int64_t $tmp610 = $tmp609.value;
int64_t $tmp611 = $tmp584.value;
bool $tmp612 = $tmp610 >= $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block6; else goto block2;
block8:;
int64_t $tmp615 = $tmp609.value;
int64_t $tmp616 = $tmp584.value;
bool $tmp617 = $tmp615 > $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block6; else goto block2;
block6:;
int64_t $tmp620 = $tmp605.value;
int64_t $tmp621 = $tmp584.value;
int64_t $tmp622 = $tmp620 + $tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {$tmp622};
*(&local1) = $tmp623;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:549
frost$core$Int $tmp624 = (frost$core$Int) {0u};
frost$core$Int* $tmp625 = &param1->_length;
frost$core$Int $tmp626 = *$tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp628 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp624, $tmp626, $tmp627);
frost$core$Int $tmp629 = $tmp628.min;
*(&local2) = $tmp629;
frost$core$Int $tmp630 = $tmp628.max;
frost$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
frost$core$Int $tmp633 = (frost$core$Int) {1u};
if ($tmp632) goto block12; else goto block13;
block12:;
int64_t $tmp634 = $tmp629.value;
int64_t $tmp635 = $tmp630.value;
bool $tmp636 = $tmp634 <= $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block9; else goto block10;
block13:;
int64_t $tmp639 = $tmp629.value;
int64_t $tmp640 = $tmp630.value;
bool $tmp641 = $tmp639 < $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:550
frost$core$Char8* $tmp644 = *(&local0);
frost$core$Int* $tmp645 = &param0->_length;
frost$core$Int $tmp646 = *$tmp645;
frost$core$Int $tmp647 = *(&local2);
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647.value;
int64_t $tmp650 = $tmp648 + $tmp649;
frost$core$Int $tmp651 = (frost$core$Int) {$tmp650};
frost$core$Int64 $tmp652 = frost$core$Int64$init$frost$core$Int($tmp651);
frost$core$Char8** $tmp653 = &param1->data;
frost$core$Char8* $tmp654 = *$tmp653;
frost$core$Int $tmp655 = *(&local2);
frost$core$Int64 $tmp656 = frost$core$Int64$init$frost$core$Int($tmp655);
int64_t $tmp657 = $tmp656.value;
frost$core$Char8 $tmp658 = $tmp654[$tmp657];
int64_t $tmp659 = $tmp652.value;
$tmp644[$tmp659] = $tmp658;
frost$core$Int $tmp660 = *(&local2);
int64_t $tmp661 = $tmp630.value;
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = $tmp661 - $tmp662;
frost$core$Int $tmp664 = (frost$core$Int) {$tmp663};
if ($tmp632) goto block15; else goto block16;
block15:;
int64_t $tmp665 = $tmp664.value;
int64_t $tmp666 = $tmp633.value;
bool $tmp667 = $tmp665 >= $tmp666;
frost$core$Bit $tmp668 = (frost$core$Bit) {$tmp667};
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block14; else goto block10;
block16:;
int64_t $tmp670 = $tmp664.value;
int64_t $tmp671 = $tmp633.value;
bool $tmp672 = $tmp670 > $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block14; else goto block10;
block14:;
int64_t $tmp675 = $tmp660.value;
int64_t $tmp676 = $tmp633.value;
int64_t $tmp677 = $tmp675 + $tmp676;
frost$core$Int $tmp678 = (frost$core$Int) {$tmp677};
*(&local2) = $tmp678;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:552
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp679 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp680 = *(&local0);
frost$core$Int* $tmp681 = &param0->_length;
frost$core$Int $tmp682 = *$tmp681;
frost$core$Int* $tmp683 = &param1->_length;
frost$core$Int $tmp684 = *$tmp683;
int64_t $tmp685 = $tmp682.value;
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685 + $tmp686;
frost$core$Int $tmp688 = (frost$core$Int) {$tmp687};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp679, $tmp680, $tmp688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
return $tmp679;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn690 $tmp689 = ($fn690) param1->$class->vtable[0];
frost$core$String* $tmp691 = $tmp689(param1);
frost$core$String* $tmp692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
return $tmp692;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$Int $tmp693 = (frost$core$Int) {0u};
int64_t $tmp694 = param1.value;
int64_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 >= $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block1; else goto block2;
block2:;
frost$core$Int $tmp699 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s700, $tmp699, &$s701);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp702 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp702);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$MutableString* $tmp703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local0) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
frost$core$Int $tmp704 = (frost$core$Int) {0u};
frost$core$Bit $tmp705 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp706 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp704, param1, $tmp705);
frost$core$Int $tmp707 = $tmp706.min;
*(&local1) = $tmp707;
frost$core$Int $tmp708 = $tmp706.max;
frost$core$Bit $tmp709 = $tmp706.inclusive;
bool $tmp710 = $tmp709.value;
frost$core$Int $tmp711 = (frost$core$Int) {1u};
if ($tmp710) goto block6; else goto block7;
block6:;
int64_t $tmp712 = $tmp707.value;
int64_t $tmp713 = $tmp708.value;
bool $tmp714 = $tmp712 <= $tmp713;
frost$core$Bit $tmp715 = (frost$core$Bit) {$tmp714};
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block3; else goto block4;
block7:;
int64_t $tmp717 = $tmp707.value;
int64_t $tmp718 = $tmp708.value;
bool $tmp719 = $tmp717 < $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
frost$core$MutableString* $tmp722 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp722, param0);
frost$core$Int $tmp723 = *(&local1);
int64_t $tmp724 = $tmp708.value;
int64_t $tmp725 = $tmp723.value;
int64_t $tmp726 = $tmp724 - $tmp725;
frost$core$Int $tmp727 = (frost$core$Int) {$tmp726};
if ($tmp710) goto block9; else goto block10;
block9:;
int64_t $tmp728 = $tmp727.value;
int64_t $tmp729 = $tmp711.value;
bool $tmp730 = $tmp728 >= $tmp729;
frost$core$Bit $tmp731 = (frost$core$Bit) {$tmp730};
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block8; else goto block4;
block10:;
int64_t $tmp733 = $tmp727.value;
int64_t $tmp734 = $tmp711.value;
bool $tmp735 = $tmp733 > $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block8; else goto block4;
block8:;
int64_t $tmp738 = $tmp723.value;
int64_t $tmp739 = $tmp711.value;
int64_t $tmp740 = $tmp738 + $tmp739;
frost$core$Int $tmp741 = (frost$core$Int) {$tmp740};
*(&local1) = $tmp741;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
frost$core$MutableString* $tmp742 = *(&local0);
frost$core$String* $tmp743 = frost$core$MutableString$finish$R$frost$core$String($tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$MutableString* $tmp744 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp743;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int$frost$core$String$R$frost$core$String(frost$core$Int param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$Int $tmp745 = (frost$core$Int) {0u};
int64_t $tmp746 = param0.value;
int64_t $tmp747 = $tmp745.value;
bool $tmp748 = $tmp746 >= $tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block1; else goto block2;
block2:;
frost$core$Int $tmp751 = (frost$core$Int) {580u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s752, $tmp751, &$s753);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:581
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp754 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp754);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$MutableString* $tmp755 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local0) = $tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:582
frost$core$Int $tmp756 = (frost$core$Int) {0u};
frost$core$Bit $tmp757 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp758 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp756, param0, $tmp757);
frost$core$Int $tmp759 = $tmp758.min;
*(&local1) = $tmp759;
frost$core$Int $tmp760 = $tmp758.max;
frost$core$Bit $tmp761 = $tmp758.inclusive;
bool $tmp762 = $tmp761.value;
frost$core$Int $tmp763 = (frost$core$Int) {1u};
if ($tmp762) goto block6; else goto block7;
block6:;
int64_t $tmp764 = $tmp759.value;
int64_t $tmp765 = $tmp760.value;
bool $tmp766 = $tmp764 <= $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block3; else goto block4;
block7:;
int64_t $tmp769 = $tmp759.value;
int64_t $tmp770 = $tmp760.value;
bool $tmp771 = $tmp769 < $tmp770;
frost$core$Bit $tmp772 = (frost$core$Bit) {$tmp771};
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:583
frost$core$MutableString* $tmp774 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp774, param1);
frost$core$Int $tmp775 = *(&local1);
int64_t $tmp776 = $tmp760.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 - $tmp777;
frost$core$Int $tmp779 = (frost$core$Int) {$tmp778};
if ($tmp762) goto block9; else goto block10;
block9:;
int64_t $tmp780 = $tmp779.value;
int64_t $tmp781 = $tmp763.value;
bool $tmp782 = $tmp780 >= $tmp781;
frost$core$Bit $tmp783 = (frost$core$Bit) {$tmp782};
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block8; else goto block4;
block10:;
int64_t $tmp785 = $tmp779.value;
int64_t $tmp786 = $tmp763.value;
bool $tmp787 = $tmp785 > $tmp786;
frost$core$Bit $tmp788 = (frost$core$Bit) {$tmp787};
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block8; else goto block4;
block8:;
int64_t $tmp790 = $tmp775.value;
int64_t $tmp791 = $tmp763.value;
int64_t $tmp792 = $tmp790 + $tmp791;
frost$core$Int $tmp793 = (frost$core$Int) {$tmp792};
*(&local1) = $tmp793;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:585
frost$core$MutableString* $tmp794 = *(&local0);
frost$core$String* $tmp795 = frost$core$MutableString$finish$R$frost$core$String($tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$MutableString* $tmp796 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp795;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:594
$fn798 $tmp797 = ($fn798) param0->$class->vtable[0];
frost$core$String* $tmp799 = $tmp797(param0);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
return $tmp800;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:607
frost$core$Int* $tmp801 = &param0->_length;
frost$core$Int $tmp802 = *$tmp801;
frost$core$Int* $tmp803 = &param1->_length;
frost$core$Int $tmp804 = *$tmp803;
int64_t $tmp805 = $tmp802.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 != $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:608
frost$core$Bit $tmp810 = (frost$core$Bit) {false};
return $tmp810;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:610
frost$core$Int $tmp811 = (frost$core$Int) {0u};
frost$core$Int* $tmp812 = &param0->_length;
frost$core$Int $tmp813 = *$tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp815 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp811, $tmp813, $tmp814);
frost$core$Int $tmp816 = $tmp815.min;
*(&local0) = $tmp816;
frost$core$Int $tmp817 = $tmp815.max;
frost$core$Bit $tmp818 = $tmp815.inclusive;
bool $tmp819 = $tmp818.value;
frost$core$Int $tmp820 = (frost$core$Int) {1u};
if ($tmp819) goto block6; else goto block7;
block6:;
int64_t $tmp821 = $tmp816.value;
int64_t $tmp822 = $tmp817.value;
bool $tmp823 = $tmp821 <= $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block3; else goto block4;
block7:;
int64_t $tmp826 = $tmp816.value;
int64_t $tmp827 = $tmp817.value;
bool $tmp828 = $tmp826 < $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:611
frost$core$Char8** $tmp831 = &param0->data;
frost$core$Char8* $tmp832 = *$tmp831;
frost$core$Int $tmp833 = *(&local0);
frost$core$Int64 $tmp834 = frost$core$Int64$init$frost$core$Int($tmp833);
int64_t $tmp835 = $tmp834.value;
frost$core$Char8 $tmp836 = $tmp832[$tmp835];
frost$core$Char8** $tmp837 = &param1->data;
frost$core$Char8* $tmp838 = *$tmp837;
frost$core$Int $tmp839 = *(&local0);
frost$core$Int64 $tmp840 = frost$core$Int64$init$frost$core$Int($tmp839);
int64_t $tmp841 = $tmp840.value;
frost$core$Char8 $tmp842 = $tmp838[$tmp841];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:611:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp843 = $tmp836.value;
uint8_t $tmp844 = $tmp842.value;
bool $tmp845 = $tmp843 != $tmp844;
frost$core$Bit $tmp846 = (frost$core$Bit) {$tmp845};
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:612
frost$core$Bit $tmp848 = (frost$core$Bit) {false};
return $tmp848;
block9:;
frost$core$Int $tmp849 = *(&local0);
int64_t $tmp850 = $tmp817.value;
int64_t $tmp851 = $tmp849.value;
int64_t $tmp852 = $tmp850 - $tmp851;
frost$core$Int $tmp853 = (frost$core$Int) {$tmp852};
if ($tmp819) goto block12; else goto block13;
block12:;
int64_t $tmp854 = $tmp853.value;
int64_t $tmp855 = $tmp820.value;
bool $tmp856 = $tmp854 >= $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block11; else goto block4;
block13:;
int64_t $tmp859 = $tmp853.value;
int64_t $tmp860 = $tmp820.value;
bool $tmp861 = $tmp859 > $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block11; else goto block4;
block11:;
int64_t $tmp864 = $tmp849.value;
int64_t $tmp865 = $tmp820.value;
int64_t $tmp866 = $tmp864 + $tmp865;
frost$core$Int $tmp867 = (frost$core$Int) {$tmp866};
*(&local0) = $tmp867;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:615
frost$core$Bit $tmp868 = (frost$core$Bit) {true};
return $tmp868;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:626
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:626:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp869 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp870 = &(&local1)->value;
*$tmp870 = $tmp869;
frost$core$String$Index $tmp871 = *(&local1);
*(&local0) = $tmp871;
frost$core$String$Index $tmp872 = *(&local0);
*(&local2) = $tmp872;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:627
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:627:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp873 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp874 = &(&local4)->value;
*$tmp874 = $tmp873;
frost$core$String$Index $tmp875 = *(&local4);
*(&local3) = $tmp875;
frost$core$String$Index $tmp876 = *(&local3);
*(&local5) = $tmp876;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:628
goto block5;
block5:;
frost$core$String$Index $tmp877 = *(&local2);
frost$core$String$Index$wrapper* $tmp878;
$tmp878 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp878->value = $tmp877;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp879 = &param0->_length;
frost$core$Int $tmp880 = *$tmp879;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp881 = &(&local7)->value;
*$tmp881 = $tmp880;
frost$core$String$Index $tmp882 = *(&local7);
*(&local6) = $tmp882;
frost$core$String$Index $tmp883 = *(&local6);
frost$core$String$Index$wrapper* $tmp884;
$tmp884 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp884->value = $tmp883;
ITable* $tmp885 = ((frost$core$Comparable*) $tmp878)->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[1];
frost$core$Bit $tmp888 = $tmp886(((frost$core$Comparable*) $tmp878), ((frost$core$Comparable*) $tmp884));
bool $tmp889 = $tmp888.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp884)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp878)));
if ($tmp889) goto block8; else goto block7;
block8:;
frost$core$String$Index $tmp890 = *(&local5);
frost$core$String$Index$wrapper* $tmp891;
$tmp891 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp891->value = $tmp890;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp892 = &param1->_length;
frost$core$Int $tmp893 = *$tmp892;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp894 = &(&local9)->value;
*$tmp894 = $tmp893;
frost$core$String$Index $tmp895 = *(&local9);
*(&local8) = $tmp895;
frost$core$String$Index $tmp896 = *(&local8);
frost$core$String$Index$wrapper* $tmp897;
$tmp897 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp897->value = $tmp896;
ITable* $tmp898 = ((frost$core$Comparable*) $tmp891)->$class->itable;
while ($tmp898->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp898 = $tmp898->next;
}
$fn900 $tmp899 = $tmp898->methods[1];
frost$core$Bit $tmp901 = $tmp899(((frost$core$Comparable*) $tmp891), ((frost$core$Comparable*) $tmp897));
bool $tmp902 = $tmp901.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp897)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp891)));
if ($tmp902) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:629
frost$core$String$Index $tmp903 = *(&local2);
frost$core$Char32 $tmp904 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp903);
*(&local10) = $tmp904;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:630
frost$core$String$Index $tmp905 = *(&local5);
frost$core$Char32 $tmp906 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp905);
*(&local11) = $tmp906;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:631
frost$core$Char32 $tmp907 = *(&local10);
frost$core$Char32 $tmp908 = *(&local11);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from String.frost:631:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp909 = $tmp907.value;
int32_t $tmp910 = $tmp908.value;
bool $tmp911 = $tmp909 == $tmp910;
frost$core$Bit $tmp912 = (frost$core$Bit) {$tmp911};
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:632
frost$core$String$Index $tmp914 = *(&local2);
frost$core$String$Index $tmp915 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp914);
*(&local2) = $tmp915;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:633
frost$core$String$Index $tmp916 = *(&local5);
frost$core$String$Index $tmp917 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp916);
*(&local5) = $tmp917;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:634
goto block5;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:636
frost$core$Char32 $tmp918 = *(&local10);
frost$core$Char32 $tmp919 = *(&local11);
// begin inline call to function frost.core.Char32.>(other:frost.core.Char32):frost.core.Bit from String.frost:636:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:42
int32_t $tmp920 = $tmp918.value;
int32_t $tmp921 = $tmp919.value;
bool $tmp922 = $tmp920 > $tmp921;
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922};
return $tmp923;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:638
frost$core$String$Index $tmp924 = *(&local2);
frost$core$String$Index$wrapper* $tmp925;
$tmp925 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp925->value = $tmp924;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:638:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp926 = &param0->_length;
frost$core$Int $tmp927 = *$tmp926;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp928 = &(&local13)->value;
*$tmp928 = $tmp927;
frost$core$String$Index $tmp929 = *(&local13);
*(&local12) = $tmp929;
frost$core$String$Index $tmp930 = *(&local12);
frost$core$String$Index$wrapper* $tmp931;
$tmp931 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp931->value = $tmp930;
ITable* $tmp932 = ((frost$core$Equatable*) $tmp925)->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[1];
frost$core$Bit $tmp935 = $tmp933(((frost$core$Equatable*) $tmp925), ((frost$core$Equatable*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp925)));
return $tmp935;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:645
frost$core$Int $tmp936 = param1.value;
*(&local0) = $tmp936;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:646
frost$core$Char8** $tmp937 = &param0->data;
frost$core$Char8* $tmp938 = *$tmp937;
frost$core$Int $tmp939 = *(&local0);
frost$core$Int64 $tmp940 = frost$core$Int64$init$frost$core$Int($tmp939);
int64_t $tmp941 = $tmp940.value;
frost$core$Char8 $tmp942 = $tmp938[$tmp941];
*(&local1) = $tmp942;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:647
frost$core$Char8 $tmp943 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:647:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp944 = $tmp943.value;
int32_t $tmp945 = ((int32_t) $tmp944) & 255u;
frost$core$Int32 $tmp946 = (frost$core$Int32) {$tmp945};
*(&local2) = $tmp946;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:648
frost$core$Char8 $tmp947 = *(&local1);
uint8_t $tmp948 = $tmp947.value;
int64_t $tmp949 = ((int64_t) $tmp948) & 255u;
bool $tmp950 = $tmp949 < 192u;
frost$core$Bit $tmp951 = (frost$core$Bit) {$tmp950};
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:649
frost$core$Int32 $tmp953 = *(&local2);
frost$core$Char32 $tmp954 = frost$core$Char32$init$frost$core$Int32($tmp953);
return $tmp954;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:651
frost$core$Char8 $tmp955 = *(&local1);
uint8_t $tmp956 = $tmp955.value;
int64_t $tmp957 = ((int64_t) $tmp956) & 255u;
bool $tmp958 = $tmp957 < 224u;
frost$core$Bit $tmp959 = (frost$core$Bit) {$tmp958};
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:652
frost$core$Int $tmp961 = *(&local0);
frost$core$Int $tmp962 = (frost$core$Int) {1u};
int64_t $tmp963 = $tmp961.value;
int64_t $tmp964 = $tmp962.value;
int64_t $tmp965 = $tmp963 + $tmp964;
frost$core$Int $tmp966 = (frost$core$Int) {$tmp965};
frost$core$Int* $tmp967 = &param0->_length;
frost$core$Int $tmp968 = *$tmp967;
int64_t $tmp969 = $tmp966.value;
int64_t $tmp970 = $tmp968.value;
bool $tmp971 = $tmp969 < $tmp970;
frost$core$Bit $tmp972 = (frost$core$Bit) {$tmp971};
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block6; else goto block7;
block7:;
frost$core$Int $tmp974 = (frost$core$Int) {652u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s975, $tmp974);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:653
frost$core$Int32 $tmp976 = *(&local2);
frost$core$Int32 $tmp977 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp978 = $tmp976.value;
int32_t $tmp979 = $tmp977.value;
int32_t $tmp980 = $tmp978 & $tmp979;
frost$core$Int32 $tmp981 = (frost$core$Int32) {$tmp980};
frost$core$Char8** $tmp982 = &param0->data;
frost$core$Char8* $tmp983 = *$tmp982;
frost$core$Int $tmp984 = *(&local0);
frost$core$Int64 $tmp985 = frost$core$Int64$init$frost$core$Int($tmp984);
frost$core$Int64 $tmp986 = (frost$core$Int64) {1u};
int64_t $tmp987 = $tmp985.value;
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987 + $tmp988;
frost$core$Int64 $tmp990 = (frost$core$Int64) {$tmp989};
int64_t $tmp991 = $tmp990.value;
frost$core$Char8 $tmp992 = $tmp983[$tmp991];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:653:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp993 = $tmp992.value;
int32_t $tmp994 = ((int32_t) $tmp993) & 255u;
frost$core$Int32 $tmp995 = (frost$core$Int32) {$tmp994};
frost$core$Int32 $tmp996 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp997 = $tmp995.value;
int32_t $tmp998 = $tmp996.value;
int32_t $tmp999 = $tmp997 & $tmp998;
frost$core$Int32 $tmp1000 = (frost$core$Int32) {$tmp999};
int32_t $tmp1001 = $tmp981.value;
int32_t $tmp1002 = $tmp1000.value;
int32_t $tmp1003 = $tmp1001 + $tmp1002;
frost$core$Int32 $tmp1004 = (frost$core$Int32) {$tmp1003};
*(&local2) = $tmp1004;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:654
frost$core$Int32 $tmp1005 = *(&local2);
frost$core$Char32 $tmp1006 = frost$core$Char32$init$frost$core$Int32($tmp1005);
return $tmp1006;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:656
frost$core$Char8 $tmp1007 = *(&local1);
uint8_t $tmp1008 = $tmp1007.value;
int64_t $tmp1009 = ((int64_t) $tmp1008) & 255u;
bool $tmp1010 = $tmp1009 < 240u;
frost$core$Bit $tmp1011 = (frost$core$Bit) {$tmp1010};
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:657
frost$core$Int $tmp1013 = *(&local0);
frost$core$Int $tmp1014 = (frost$core$Int) {2u};
int64_t $tmp1015 = $tmp1013.value;
int64_t $tmp1016 = $tmp1014.value;
int64_t $tmp1017 = $tmp1015 + $tmp1016;
frost$core$Int $tmp1018 = (frost$core$Int) {$tmp1017};
frost$core$Int* $tmp1019 = &param0->_length;
frost$core$Int $tmp1020 = *$tmp1019;
int64_t $tmp1021 = $tmp1018.value;
int64_t $tmp1022 = $tmp1020.value;
bool $tmp1023 = $tmp1021 < $tmp1022;
frost$core$Bit $tmp1024 = (frost$core$Bit) {$tmp1023};
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1026 = (frost$core$Int) {657u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1027, $tmp1026);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:658
frost$core$Int32 $tmp1028 = *(&local2);
frost$core$Int32 $tmp1029 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1030 = $tmp1028.value;
int32_t $tmp1031 = $tmp1029.value;
int32_t $tmp1032 = $tmp1030 & $tmp1031;
frost$core$Int32 $tmp1033 = (frost$core$Int32) {$tmp1032};
frost$core$Char8** $tmp1034 = &param0->data;
frost$core$Char8* $tmp1035 = *$tmp1034;
frost$core$Int $tmp1036 = *(&local0);
frost$core$Int64 $tmp1037 = frost$core$Int64$init$frost$core$Int($tmp1036);
frost$core$Int64 $tmp1038 = (frost$core$Int64) {1u};
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 + $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
int64_t $tmp1043 = $tmp1042.value;
frost$core$Char8 $tmp1044 = $tmp1035[$tmp1043];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:658:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1045 = $tmp1044.value;
int32_t $tmp1046 = ((int32_t) $tmp1045) & 255u;
frost$core$Int32 $tmp1047 = (frost$core$Int32) {$tmp1046};
frost$core$Int32 $tmp1048 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1049 = $tmp1047.value;
int32_t $tmp1050 = $tmp1048.value;
int32_t $tmp1051 = $tmp1049 & $tmp1050;
frost$core$Int32 $tmp1052 = (frost$core$Int32) {$tmp1051};
int32_t $tmp1053 = $tmp1033.value;
int32_t $tmp1054 = $tmp1052.value;
int32_t $tmp1055 = $tmp1053 + $tmp1054;
frost$core$Int32 $tmp1056 = (frost$core$Int32) {$tmp1055};
frost$core$Char8** $tmp1057 = &param0->data;
frost$core$Char8* $tmp1058 = *$tmp1057;
frost$core$Int $tmp1059 = *(&local0);
frost$core$Int64 $tmp1060 = frost$core$Int64$init$frost$core$Int($tmp1059);
frost$core$Int64 $tmp1061 = (frost$core$Int64) {2u};
int64_t $tmp1062 = $tmp1060.value;
int64_t $tmp1063 = $tmp1061.value;
int64_t $tmp1064 = $tmp1062 + $tmp1063;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {$tmp1064};
int64_t $tmp1066 = $tmp1065.value;
frost$core$Char8 $tmp1067 = $tmp1058[$tmp1066];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:659:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1068 = $tmp1067.value;
int32_t $tmp1069 = ((int32_t) $tmp1068) & 255u;
frost$core$Int32 $tmp1070 = (frost$core$Int32) {$tmp1069};
frost$core$Int32 $tmp1071 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:659:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1072 = $tmp1070.value;
int32_t $tmp1073 = $tmp1071.value;
int32_t $tmp1074 = $tmp1072 & $tmp1073;
frost$core$Int32 $tmp1075 = (frost$core$Int32) {$tmp1074};
int32_t $tmp1076 = $tmp1056.value;
int32_t $tmp1077 = $tmp1075.value;
int32_t $tmp1078 = $tmp1076 + $tmp1077;
frost$core$Int32 $tmp1079 = (frost$core$Int32) {$tmp1078};
*(&local2) = $tmp1079;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:660
frost$core$Int32 $tmp1080 = *(&local2);
frost$core$Char32 $tmp1081 = frost$core$Char32$init$frost$core$Int32($tmp1080);
return $tmp1081;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:662
frost$core$Int $tmp1082 = *(&local0);
frost$core$Int $tmp1083 = (frost$core$Int) {3u};
int64_t $tmp1084 = $tmp1082.value;
int64_t $tmp1085 = $tmp1083.value;
int64_t $tmp1086 = $tmp1084 + $tmp1085;
frost$core$Int $tmp1087 = (frost$core$Int) {$tmp1086};
frost$core$Int* $tmp1088 = &param0->_length;
frost$core$Int $tmp1089 = *$tmp1088;
int64_t $tmp1090 = $tmp1087.value;
int64_t $tmp1091 = $tmp1089.value;
bool $tmp1092 = $tmp1090 < $tmp1091;
frost$core$Bit $tmp1093 = (frost$core$Bit) {$tmp1092};
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1095 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1096, $tmp1095);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:663
frost$core$Int32 $tmp1097 = *(&local2);
frost$core$Int32 $tmp1098 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1099 = $tmp1097.value;
int32_t $tmp1100 = $tmp1098.value;
int32_t $tmp1101 = $tmp1099 & $tmp1100;
frost$core$Int32 $tmp1102 = (frost$core$Int32) {$tmp1101};
frost$core$Char8** $tmp1103 = &param0->data;
frost$core$Char8* $tmp1104 = *$tmp1103;
frost$core$Int $tmp1105 = *(&local0);
frost$core$Int64 $tmp1106 = frost$core$Int64$init$frost$core$Int($tmp1105);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {1u};
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107.value;
int64_t $tmp1110 = $tmp1108 + $tmp1109;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {$tmp1110};
int64_t $tmp1112 = $tmp1111.value;
frost$core$Char8 $tmp1113 = $tmp1104[$tmp1112];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:663:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1114 = $tmp1113.value;
int32_t $tmp1115 = ((int32_t) $tmp1114) & 255u;
frost$core$Int32 $tmp1116 = (frost$core$Int32) {$tmp1115};
frost$core$Int32 $tmp1117 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1118 = $tmp1116.value;
int32_t $tmp1119 = $tmp1117.value;
int32_t $tmp1120 = $tmp1118 & $tmp1119;
frost$core$Int32 $tmp1121 = (frost$core$Int32) {$tmp1120};
int32_t $tmp1122 = $tmp1102.value;
int32_t $tmp1123 = $tmp1121.value;
int32_t $tmp1124 = $tmp1122 + $tmp1123;
frost$core$Int32 $tmp1125 = (frost$core$Int32) {$tmp1124};
frost$core$Char8** $tmp1126 = &param0->data;
frost$core$Char8* $tmp1127 = *$tmp1126;
frost$core$Int $tmp1128 = *(&local0);
frost$core$Int64 $tmp1129 = frost$core$Int64$init$frost$core$Int($tmp1128);
frost$core$Int64 $tmp1130 = (frost$core$Int64) {2u};
int64_t $tmp1131 = $tmp1129.value;
int64_t $tmp1132 = $tmp1130.value;
int64_t $tmp1133 = $tmp1131 + $tmp1132;
frost$core$Int64 $tmp1134 = (frost$core$Int64) {$tmp1133};
int64_t $tmp1135 = $tmp1134.value;
frost$core$Char8 $tmp1136 = $tmp1127[$tmp1135];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:664:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1137 = $tmp1136.value;
int32_t $tmp1138 = ((int32_t) $tmp1137) & 255u;
frost$core$Int32 $tmp1139 = (frost$core$Int32) {$tmp1138};
frost$core$Int32 $tmp1140 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:664:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1141 = $tmp1139.value;
int32_t $tmp1142 = $tmp1140.value;
int32_t $tmp1143 = $tmp1141 & $tmp1142;
frost$core$Int32 $tmp1144 = (frost$core$Int32) {$tmp1143};
int32_t $tmp1145 = $tmp1125.value;
int32_t $tmp1146 = $tmp1144.value;
int32_t $tmp1147 = $tmp1145 + $tmp1146;
frost$core$Int32 $tmp1148 = (frost$core$Int32) {$tmp1147};
frost$core$Char8** $tmp1149 = &param0->data;
frost$core$Char8* $tmp1150 = *$tmp1149;
frost$core$Int $tmp1151 = *(&local0);
frost$core$Int64 $tmp1152 = frost$core$Int64$init$frost$core$Int($tmp1151);
frost$core$Int64 $tmp1153 = (frost$core$Int64) {3u};
int64_t $tmp1154 = $tmp1152.value;
int64_t $tmp1155 = $tmp1153.value;
int64_t $tmp1156 = $tmp1154 + $tmp1155;
frost$core$Int64 $tmp1157 = (frost$core$Int64) {$tmp1156};
int64_t $tmp1158 = $tmp1157.value;
frost$core$Char8 $tmp1159 = $tmp1150[$tmp1158];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:665:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1160 = $tmp1159.value;
int32_t $tmp1161 = ((int32_t) $tmp1160) & 255u;
frost$core$Int32 $tmp1162 = (frost$core$Int32) {$tmp1161};
frost$core$Int32 $tmp1163 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:665:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1164 = $tmp1162.value;
int32_t $tmp1165 = $tmp1163.value;
int32_t $tmp1166 = $tmp1164 & $tmp1165;
frost$core$Int32 $tmp1167 = (frost$core$Int32) {$tmp1166};
int32_t $tmp1168 = $tmp1148.value;
int32_t $tmp1169 = $tmp1167.value;
int32_t $tmp1170 = $tmp1168 + $tmp1169;
frost$core$Int32 $tmp1171 = (frost$core$Int32) {$tmp1170};
*(&local2) = $tmp1171;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:666
frost$core$Int32 $tmp1172 = *(&local2);
frost$core$Char32 $tmp1173 = frost$core$Char32$init$frost$core$Int32($tmp1172);
return $tmp1173;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int$R$frost$core$Char32(frost$core$String* param0, frost$core$Int param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1174 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1175 = &(&local1)->value;
*$tmp1175 = $tmp1174;
frost$core$String$Index $tmp1176 = *(&local1);
*(&local0) = $tmp1176;
frost$core$String$Index $tmp1177 = *(&local0);
frost$core$String$Index $tmp1178 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1177, param1);
frost$core$Char32 $tmp1179 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1178);
return $tmp1179;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:688
frost$core$String$Index $tmp1180 = param1.max;
frost$core$Int $tmp1181 = $tmp1180.value;
frost$core$String$Index $tmp1182 = param1.min;
frost$core$Int $tmp1183 = $tmp1182.value;
int64_t $tmp1184 = $tmp1181.value;
int64_t $tmp1185 = $tmp1183.value;
int64_t $tmp1186 = $tmp1184 - $tmp1185;
frost$core$Int $tmp1187 = (frost$core$Int) {$tmp1186};
*(&local0) = $tmp1187;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:689
frost$core$Bit $tmp1188 = param1.inclusive;
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:690
frost$core$Int $tmp1190 = *(&local0);
frost$core$Int $tmp1191 = (frost$core$Int) {1u};
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191.value;
int64_t $tmp1194 = $tmp1192 + $tmp1193;
frost$core$Int $tmp1195 = (frost$core$Int) {$tmp1194};
*(&local0) = $tmp1195;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:692
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1196 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1197 = &param0->data;
frost$core$Char8* $tmp1198 = *$tmp1197;
frost$core$String$Index $tmp1199 = param1.min;
frost$core$Int $tmp1200 = $tmp1199.value;
frost$core$Int64 $tmp1201 = frost$core$Int64$init$frost$core$Int($tmp1200);
int64_t $tmp1202 = $tmp1201.value;
frost$core$Char8* $tmp1203 = $tmp1198 + $tmp1202;
frost$core$Int $tmp1204 = *(&local0);
// begin inline call to frost.core.String.init(data:frost.unsafe.Pointer<frost.core.Char8>, length:frost.core.Int, owner:frost.core.String) from String.frost:692:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:328
frost$core$Int $tmp1205 = (frost$core$Int) {0u};
frost$core$Int* $tmp1206 = &$tmp1196->dummy;
*$tmp1206 = $tmp1205;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:358
frost$core$Char8** $tmp1207 = &$tmp1196->data;
*$tmp1207 = $tmp1203;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:359
frost$core$Int* $tmp1208 = &$tmp1196->_length;
*$tmp1208 = $tmp1204;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$String** $tmp1209 = &$tmp1196->owner;
frost$core$String* $tmp1210 = *$tmp1209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$String** $tmp1211 = &$tmp1196->owner;
*$tmp1211 = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
return $tmp1196;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:708
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:709
frost$core$String$Index$nullable $tmp1212 = param1.min;
frost$core$Bit $tmp1213 = (frost$core$Bit) {$tmp1212.nonnull};
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:710
frost$core$String$Index$nullable $tmp1215 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1215.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:713
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:713:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1216 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1217 = &(&local2)->value;
*$tmp1217 = $tmp1216;
frost$core$String$Index $tmp1218 = *(&local2);
*(&local1) = $tmp1218;
frost$core$String$Index $tmp1219 = *(&local1);
*(&local0) = $tmp1219;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:716
frost$core$Bit $tmp1220 = param1.inclusive;
*(&local3) = $tmp1220;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:717
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:718
frost$core$String$Index$nullable $tmp1221 = param1.max;
frost$core$Bit $tmp1222 = (frost$core$Bit) {$tmp1221.nonnull};
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:719
frost$core$String$Index$nullable $tmp1224 = param1.max;
*(&local4) = ((frost$core$String$Index) $tmp1224.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:722
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:722:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1225 = &param0->_length;
frost$core$Int $tmp1226 = *$tmp1225;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1227 = &(&local6)->value;
*$tmp1227 = $tmp1226;
frost$core$String$Index $tmp1228 = *(&local6);
*(&local5) = $tmp1228;
frost$core$String$Index $tmp1229 = *(&local5);
*(&local4) = $tmp1229;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:723
frost$core$Bit $tmp1230 = (frost$core$Bit) {false};
*(&local3) = $tmp1230;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:725
frost$core$String$Index $tmp1231 = *(&local0);
frost$core$String$Index $tmp1232 = *(&local4);
frost$core$Bit $tmp1233 = *(&local3);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1234 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1231, $tmp1232, $tmp1233);
frost$core$String* $tmp1235 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
return $tmp1235;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
frost$core$Char8 local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:733
frost$core$String$Index $tmp1236 = param1.min;
frost$core$Int $tmp1237 = $tmp1236.value;
*(&local0) = $tmp1237;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:734
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1238 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1238);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$MutableString* $tmp1239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local1) = $tmp1238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:735
frost$core$String$Index $tmp1240 = param1.max;
frost$core$Int $tmp1241 = $tmp1240.value;
*(&local2) = $tmp1241;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:736
frost$core$Bit $tmp1242 = param1.inclusive;
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:737
frost$core$Int $tmp1244 = *(&local2);
frost$core$Int $tmp1245 = (frost$core$Int) {1u};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246 + $tmp1247;
frost$core$Int $tmp1249 = (frost$core$Int) {$tmp1248};
*(&local2) = $tmp1249;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:739
goto block3;
block3:;
frost$core$Int $tmp1250 = *(&local0);
frost$core$Int $tmp1251 = *(&local2);
int64_t $tmp1252 = $tmp1250.value;
int64_t $tmp1253 = $tmp1251.value;
bool $tmp1254 = $tmp1252 < $tmp1253;
frost$core$Bit $tmp1255 = (frost$core$Bit) {$tmp1254};
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:740
frost$core$Char8** $tmp1257 = &param0->data;
frost$core$Char8* $tmp1258 = *$tmp1257;
frost$core$Int $tmp1259 = *(&local0);
frost$core$Int64 $tmp1260 = frost$core$Int64$init$frost$core$Int($tmp1259);
int64_t $tmp1261 = $tmp1260.value;
frost$core$Char8 $tmp1262 = $tmp1258[$tmp1261];
*(&local3) = $tmp1262;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:741
frost$core$MutableString* $tmp1263 = *(&local1);
frost$core$Char8 $tmp1264 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1263, $tmp1264);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:742
frost$core$Int $tmp1265 = *(&local0);
frost$core$Int $tmp1266 = (frost$core$Int) {1u};
int64_t $tmp1267 = $tmp1265.value;
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267 + $tmp1268;
frost$core$Int $tmp1270 = (frost$core$Int) {$tmp1269};
*(&local0) = $tmp1270;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:743
frost$core$Char8 $tmp1271 = *(&local3);
uint8_t $tmp1272 = $tmp1271.value;
int64_t $tmp1273 = ((int64_t) $tmp1272) & 255u;
bool $tmp1274 = $tmp1273 >= 192u;
frost$core$Bit $tmp1275 = (frost$core$Bit) {$tmp1274};
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:744
frost$core$MutableString* $tmp1277 = *(&local1);
frost$core$Char8** $tmp1278 = &param0->data;
frost$core$Char8* $tmp1279 = *$tmp1278;
frost$core$Int $tmp1280 = *(&local0);
frost$core$Int64 $tmp1281 = frost$core$Int64$init$frost$core$Int($tmp1280);
int64_t $tmp1282 = $tmp1281.value;
frost$core$Char8 $tmp1283 = $tmp1279[$tmp1282];
frost$core$MutableString$append$frost$core$Char8($tmp1277, $tmp1283);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:745
frost$core$Int $tmp1284 = *(&local0);
frost$core$Int $tmp1285 = (frost$core$Int) {1u};
int64_t $tmp1286 = $tmp1284.value;
int64_t $tmp1287 = $tmp1285.value;
int64_t $tmp1288 = $tmp1286 + $tmp1287;
frost$core$Int $tmp1289 = (frost$core$Int) {$tmp1288};
*(&local0) = $tmp1289;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:747
frost$core$Char8 $tmp1290 = *(&local3);
uint8_t $tmp1291 = $tmp1290.value;
int64_t $tmp1292 = ((int64_t) $tmp1291) & 255u;
bool $tmp1293 = $tmp1292 >= 224u;
frost$core$Bit $tmp1294 = (frost$core$Bit) {$tmp1293};
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:748
frost$core$MutableString* $tmp1296 = *(&local1);
frost$core$Char8** $tmp1297 = &param0->data;
frost$core$Char8* $tmp1298 = *$tmp1297;
frost$core$Int $tmp1299 = *(&local0);
frost$core$Int64 $tmp1300 = frost$core$Int64$init$frost$core$Int($tmp1299);
int64_t $tmp1301 = $tmp1300.value;
frost$core$Char8 $tmp1302 = $tmp1298[$tmp1301];
frost$core$MutableString$append$frost$core$Char8($tmp1296, $tmp1302);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:749
frost$core$Int $tmp1303 = *(&local0);
frost$core$Int $tmp1304 = (frost$core$Int) {1u};
int64_t $tmp1305 = $tmp1303.value;
int64_t $tmp1306 = $tmp1304.value;
int64_t $tmp1307 = $tmp1305 + $tmp1306;
frost$core$Int $tmp1308 = (frost$core$Int) {$tmp1307};
*(&local0) = $tmp1308;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:751
frost$core$Char8 $tmp1309 = *(&local3);
uint8_t $tmp1310 = $tmp1309.value;
int64_t $tmp1311 = ((int64_t) $tmp1310) & 255u;
bool $tmp1312 = $tmp1311 >= 240u;
frost$core$Bit $tmp1313 = (frost$core$Bit) {$tmp1312};
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:752
frost$core$MutableString* $tmp1315 = *(&local1);
frost$core$Char8** $tmp1316 = &param0->data;
frost$core$Char8* $tmp1317 = *$tmp1316;
frost$core$Int $tmp1318 = *(&local0);
frost$core$Int64 $tmp1319 = frost$core$Int64$init$frost$core$Int($tmp1318);
int64_t $tmp1320 = $tmp1319.value;
frost$core$Char8 $tmp1321 = $tmp1317[$tmp1320];
frost$core$MutableString$append$frost$core$Char8($tmp1315, $tmp1321);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:753
frost$core$Int $tmp1322 = *(&local0);
frost$core$Int $tmp1323 = (frost$core$Int) {1u};
int64_t $tmp1324 = $tmp1322.value;
int64_t $tmp1325 = $tmp1323.value;
int64_t $tmp1326 = $tmp1324 + $tmp1325;
frost$core$Int $tmp1327 = (frost$core$Int) {$tmp1326};
*(&local0) = $tmp1327;
goto block11;
block11:;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:756
frost$core$MutableString* $tmp1328 = *(&local1);
frost$core$String* $tmp1329 = frost$core$MutableString$finish$R$frost$core$String($tmp1328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$MutableString* $tmp1330 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1329;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:767
frost$core$Int* $tmp1331 = &param0->_length;
frost$core$Int $tmp1332 = *$tmp1331;
frost$core$Int $tmp1333 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:767:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1334 = $tmp1332.value;
int64_t $tmp1335 = $tmp1333.value;
bool $tmp1336 = $tmp1334 == $tmp1335;
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1339));
return &$s1340;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:770
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:771
frost$core$String$Index$nullable $tmp1341 = param1.min;
frost$core$Bit $tmp1342 = (frost$core$Bit) {$tmp1341.nonnull};
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:772
frost$core$String$Index$nullable $tmp1344 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1344.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:775
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:775:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1345 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1346 = &(&local2)->value;
*$tmp1346 = $tmp1345;
frost$core$String$Index $tmp1347 = *(&local2);
*(&local1) = $tmp1347;
frost$core$String$Index $tmp1348 = *(&local1);
*(&local0) = $tmp1348;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:778
frost$core$Bit $tmp1349 = param1.inclusive;
*(&local3) = $tmp1349;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:779
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:780
frost$core$String$Index$nullable $tmp1350 = param1.max;
frost$core$Bit $tmp1351 = (frost$core$Bit) {$tmp1350.nonnull};
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:781
frost$core$String$Index$nullable $tmp1353 = param1.max;
*(&local4) = ((frost$core$String$Index) $tmp1353.value);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:784
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:784:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1354 = &param0->_length;
frost$core$Int $tmp1355 = *$tmp1354;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1356 = &(&local6)->value;
*$tmp1356 = $tmp1355;
frost$core$String$Index $tmp1357 = *(&local6);
*(&local5) = $tmp1357;
frost$core$String$Index $tmp1358 = *(&local5);
*(&local4) = $tmp1358;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:785
frost$core$Bit $tmp1359 = (frost$core$Bit) {false};
*(&local3) = $tmp1359;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:787
frost$core$String$Index $tmp1360 = *(&local0);
frost$core$String$Index $tmp1361 = *(&local4);
frost$core$Bit $tmp1362 = *(&local3);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1363 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1360, $tmp1361, $tmp1362);
frost$core$String* $tmp1364 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1363);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
return $tmp1364;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:803
frost$core$Int* $tmp1365 = &param0->_length;
frost$core$Int $tmp1366 = *$tmp1365;
frost$core$Int $tmp1367 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:803:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1368 = $tmp1366.value;
int64_t $tmp1369 = $tmp1367.value;
bool $tmp1370 = $tmp1368 == $tmp1369;
frost$core$Bit $tmp1371 = (frost$core$Bit) {$tmp1370};
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1373));
return &$s1374;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:806
frost$core$Int $tmp1375 = param1.step;
*(&local0) = $tmp1375;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:808
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:809
frost$core$String$Index$nullable $tmp1376 = param1.start;
frost$core$Bit $tmp1377 = (frost$core$Bit) {$tmp1376.nonnull};
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:810
frost$core$String$Index$nullable $tmp1379 = param1.start;
frost$core$Int $tmp1380 = ((frost$core$String$Index) $tmp1379.value).value;
*(&local1) = $tmp1380;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:812
frost$core$Int $tmp1381 = *(&local0);
frost$core$Int $tmp1382 = (frost$core$Int) {0u};
int64_t $tmp1383 = $tmp1381.value;
int64_t $tmp1384 = $tmp1382.value;
bool $tmp1385 = $tmp1383 > $tmp1384;
frost$core$Bit $tmp1386 = (frost$core$Bit) {$tmp1385};
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:813
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:813:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1388 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1389 = &(&local3)->value;
*$tmp1389 = $tmp1388;
frost$core$String$Index $tmp1390 = *(&local3);
*(&local2) = $tmp1390;
frost$core$String$Index $tmp1391 = *(&local2);
frost$core$Int $tmp1392 = $tmp1391.value;
*(&local1) = $tmp1392;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:816
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:816:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1393 = &param0->_length;
frost$core$Int $tmp1394 = *$tmp1393;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1395 = &(&local5)->value;
*$tmp1395 = $tmp1394;
frost$core$String$Index $tmp1396 = *(&local5);
*(&local4) = $tmp1396;
frost$core$String$Index $tmp1397 = *(&local4);
frost$core$String$Index $tmp1398 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1397);
frost$core$Int $tmp1399 = $tmp1398.value;
*(&local1) = $tmp1399;
goto block8;
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:819
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:820
frost$core$String$Index$nullable $tmp1400 = param1.end;
frost$core$Bit $tmp1401 = (frost$core$Bit) {$tmp1400.nonnull};
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:821
frost$core$String$Index$nullable $tmp1403 = param1.end;
frost$core$Int $tmp1404 = ((frost$core$String$Index) $tmp1403.value).value;
*(&local6) = $tmp1404;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:823
frost$core$Int $tmp1405 = *(&local0);
frost$core$Int $tmp1406 = (frost$core$Int) {0u};
int64_t $tmp1407 = $tmp1405.value;
int64_t $tmp1408 = $tmp1406.value;
bool $tmp1409 = $tmp1407 > $tmp1408;
frost$core$Bit $tmp1410 = (frost$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:824
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:824:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1412 = &param0->_length;
frost$core$Int $tmp1413 = *$tmp1412;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1414 = &(&local8)->value;
*$tmp1414 = $tmp1413;
frost$core$String$Index $tmp1415 = *(&local8);
*(&local7) = $tmp1415;
frost$core$String$Index $tmp1416 = *(&local7);
frost$core$Int $tmp1417 = $tmp1416.value;
*(&local6) = $tmp1417;
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:827
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:827:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1418 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1419 = &(&local10)->value;
*$tmp1419 = $tmp1418;
frost$core$String$Index $tmp1420 = *(&local10);
*(&local9) = $tmp1420;
frost$core$String$Index $tmp1421 = *(&local9);
frost$core$Int $tmp1422 = $tmp1421.value;
*(&local6) = $tmp1422;
goto block18;
block18:;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:830
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1423 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1423);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$core$MutableString* $tmp1424 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local11) = $tmp1423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:831
frost$core$Int $tmp1425 = param1.step;
frost$core$Int $tmp1426 = (frost$core$Int) {0u};
int64_t $tmp1427 = $tmp1425.value;
int64_t $tmp1428 = $tmp1426.value;
bool $tmp1429 = $tmp1427 > $tmp1428;
frost$core$Bit $tmp1430 = (frost$core$Bit) {$tmp1429};
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:832
goto block27;
block27:;
frost$core$Int $tmp1432 = *(&local1);
frost$core$Int $tmp1433 = *(&local6);
int64_t $tmp1434 = $tmp1432.value;
int64_t $tmp1435 = $tmp1433.value;
bool $tmp1436 = $tmp1434 < $tmp1435;
frost$core$Bit $tmp1437 = (frost$core$Bit) {$tmp1436};
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:833
frost$core$Char8** $tmp1439 = &param0->data;
frost$core$Char8* $tmp1440 = *$tmp1439;
frost$core$Int $tmp1441 = *(&local1);
frost$core$Int64 $tmp1442 = frost$core$Int64$init$frost$core$Int($tmp1441);
int64_t $tmp1443 = $tmp1442.value;
frost$core$Char8 $tmp1444 = $tmp1440[$tmp1443];
*(&local12) = $tmp1444;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:834
frost$core$MutableString* $tmp1445 = *(&local11);
frost$core$Char8 $tmp1446 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1445, $tmp1446);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:835
frost$core$Int $tmp1447 = *(&local1);
frost$core$Int $tmp1448 = (frost$core$Int) {1u};
int64_t $tmp1449 = $tmp1447.value;
int64_t $tmp1450 = $tmp1448.value;
int64_t $tmp1451 = $tmp1449 + $tmp1450;
frost$core$Int $tmp1452 = (frost$core$Int) {$tmp1451};
*(&local1) = $tmp1452;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:836
frost$core$Char8 $tmp1453 = *(&local12);
uint8_t $tmp1454 = $tmp1453.value;
int64_t $tmp1455 = ((int64_t) $tmp1454) & 255u;
bool $tmp1456 = $tmp1455 >= 192u;
frost$core$Bit $tmp1457 = (frost$core$Bit) {$tmp1456};
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:837
frost$core$MutableString* $tmp1459 = *(&local11);
frost$core$Char8** $tmp1460 = &param0->data;
frost$core$Char8* $tmp1461 = *$tmp1460;
frost$core$Int $tmp1462 = *(&local1);
frost$core$Int64 $tmp1463 = frost$core$Int64$init$frost$core$Int($tmp1462);
int64_t $tmp1464 = $tmp1463.value;
frost$core$Char8 $tmp1465 = $tmp1461[$tmp1464];
frost$core$MutableString$append$frost$core$Char8($tmp1459, $tmp1465);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:838
frost$core$Int $tmp1466 = *(&local1);
frost$core$Int $tmp1467 = (frost$core$Int) {1u};
int64_t $tmp1468 = $tmp1466.value;
int64_t $tmp1469 = $tmp1467.value;
int64_t $tmp1470 = $tmp1468 + $tmp1469;
frost$core$Int $tmp1471 = (frost$core$Int) {$tmp1470};
*(&local1) = $tmp1471;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:840
frost$core$Char8 $tmp1472 = *(&local12);
uint8_t $tmp1473 = $tmp1472.value;
int64_t $tmp1474 = ((int64_t) $tmp1473) & 255u;
bool $tmp1475 = $tmp1474 >= 224u;
frost$core$Bit $tmp1476 = (frost$core$Bit) {$tmp1475};
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:841
frost$core$MutableString* $tmp1478 = *(&local11);
frost$core$Char8** $tmp1479 = &param0->data;
frost$core$Char8* $tmp1480 = *$tmp1479;
frost$core$Int $tmp1481 = *(&local1);
frost$core$Int64 $tmp1482 = frost$core$Int64$init$frost$core$Int($tmp1481);
int64_t $tmp1483 = $tmp1482.value;
frost$core$Char8 $tmp1484 = $tmp1480[$tmp1483];
frost$core$MutableString$append$frost$core$Char8($tmp1478, $tmp1484);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:842
frost$core$Int $tmp1485 = *(&local1);
frost$core$Int $tmp1486 = (frost$core$Int) {1u};
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486.value;
int64_t $tmp1489 = $tmp1487 + $tmp1488;
frost$core$Int $tmp1490 = (frost$core$Int) {$tmp1489};
*(&local1) = $tmp1490;
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:844
frost$core$Char8 $tmp1491 = *(&local12);
uint8_t $tmp1492 = $tmp1491.value;
int64_t $tmp1493 = ((int64_t) $tmp1492) & 255u;
bool $tmp1494 = $tmp1493 >= 240u;
frost$core$Bit $tmp1495 = (frost$core$Bit) {$tmp1494};
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:845
frost$core$MutableString* $tmp1497 = *(&local11);
frost$core$Char8** $tmp1498 = &param0->data;
frost$core$Char8* $tmp1499 = *$tmp1498;
frost$core$Int $tmp1500 = *(&local1);
frost$core$Int64 $tmp1501 = frost$core$Int64$init$frost$core$Int($tmp1500);
int64_t $tmp1502 = $tmp1501.value;
frost$core$Char8 $tmp1503 = $tmp1499[$tmp1502];
frost$core$MutableString$append$frost$core$Char8($tmp1497, $tmp1503);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:846
frost$core$Int $tmp1504 = *(&local1);
frost$core$Int $tmp1505 = (frost$core$Int) {1u};
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505.value;
int64_t $tmp1508 = $tmp1506 + $tmp1507;
frost$core$Int $tmp1509 = (frost$core$Int) {$tmp1508};
*(&local1) = $tmp1509;
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:848
frost$core$Int $tmp1510 = (frost$core$Int) {1u};
frost$core$Int $tmp1511 = *(&local0);
frost$core$Bit $tmp1512 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1513 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1510, $tmp1511, $tmp1512);
frost$core$Int $tmp1514 = $tmp1513.min;
*(&local13) = $tmp1514;
frost$core$Int $tmp1515 = $tmp1513.max;
frost$core$Bit $tmp1516 = $tmp1513.inclusive;
bool $tmp1517 = $tmp1516.value;
frost$core$Int $tmp1518 = (frost$core$Int) {1u};
if ($tmp1517) goto block39; else goto block40;
block39:;
int64_t $tmp1519 = $tmp1514.value;
int64_t $tmp1520 = $tmp1515.value;
bool $tmp1521 = $tmp1519 <= $tmp1520;
frost$core$Bit $tmp1522 = (frost$core$Bit) {$tmp1521};
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block36; else goto block37;
block40:;
int64_t $tmp1524 = $tmp1514.value;
int64_t $tmp1525 = $tmp1515.value;
bool $tmp1526 = $tmp1524 < $tmp1525;
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:849
frost$core$Int $tmp1529 = *(&local1);
frost$core$Int $tmp1530 = *(&local6);
int64_t $tmp1531 = $tmp1529.value;
int64_t $tmp1532 = $tmp1530.value;
bool $tmp1533 = $tmp1531 >= $tmp1532;
frost$core$Bit $tmp1534 = (frost$core$Bit) {$tmp1533};
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:850
frost$core$MutableString* $tmp1536 = *(&local11);
$fn1538 $tmp1537 = ($fn1538) ((frost$core$Object*) $tmp1536)->$class->vtable[0];
frost$core$String* $tmp1539 = $tmp1537(((frost$core$Object*) $tmp1536));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$MutableString* $tmp1540 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1539;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:852
frost$core$Int $tmp1541 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:852:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1542 = &(&local15)->value;
*$tmp1542 = $tmp1541;
frost$core$String$Index $tmp1543 = *(&local15);
*(&local14) = $tmp1543;
frost$core$String$Index $tmp1544 = *(&local14);
frost$core$String$Index $tmp1545 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1544);
frost$core$Int $tmp1546 = $tmp1545.value;
*(&local1) = $tmp1546;
frost$core$Int $tmp1547 = *(&local13);
int64_t $tmp1548 = $tmp1515.value;
int64_t $tmp1549 = $tmp1547.value;
int64_t $tmp1550 = $tmp1548 - $tmp1549;
frost$core$Int $tmp1551 = (frost$core$Int) {$tmp1550};
if ($tmp1517) goto block45; else goto block46;
block45:;
int64_t $tmp1552 = $tmp1551.value;
int64_t $tmp1553 = $tmp1518.value;
bool $tmp1554 = $tmp1552 >= $tmp1553;
frost$core$Bit $tmp1555 = (frost$core$Bit) {$tmp1554};
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block44; else goto block37;
block46:;
int64_t $tmp1557 = $tmp1551.value;
int64_t $tmp1558 = $tmp1518.value;
bool $tmp1559 = $tmp1557 > $tmp1558;
frost$core$Bit $tmp1560 = (frost$core$Bit) {$tmp1559};
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block44; else goto block37;
block44:;
int64_t $tmp1562 = $tmp1547.value;
int64_t $tmp1563 = $tmp1518.value;
int64_t $tmp1564 = $tmp1562 + $tmp1563;
frost$core$Int $tmp1565 = (frost$core$Int) {$tmp1564};
*(&local13) = $tmp1565;
goto block36;
block37:;
goto block27;
block29:;
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:857
frost$core$Int $tmp1566 = param1.step;
frost$core$Int $tmp1567 = (frost$core$Int) {0u};
int64_t $tmp1568 = $tmp1566.value;
int64_t $tmp1569 = $tmp1567.value;
bool $tmp1570 = $tmp1568 < $tmp1569;
frost$core$Bit $tmp1571 = (frost$core$Bit) {$tmp1570};
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1573 = (frost$core$Int) {857u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1574, $tmp1573);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:858
goto block49;
block49:;
frost$core$Int $tmp1575 = *(&local1);
frost$core$Int $tmp1576 = *(&local6);
int64_t $tmp1577 = $tmp1575.value;
int64_t $tmp1578 = $tmp1576.value;
bool $tmp1579 = $tmp1577 > $tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:859
frost$core$Char8** $tmp1582 = &param0->data;
frost$core$Char8* $tmp1583 = *$tmp1582;
frost$core$Int $tmp1584 = *(&local1);
frost$core$Int64 $tmp1585 = frost$core$Int64$init$frost$core$Int($tmp1584);
int64_t $tmp1586 = $tmp1585.value;
frost$core$Char8 $tmp1587 = $tmp1583[$tmp1586];
*(&local16) = $tmp1587;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:860
frost$core$MutableString* $tmp1588 = *(&local11);
frost$core$Char8 $tmp1589 = *(&local16);
frost$core$MutableString$append$frost$core$Char8($tmp1588, $tmp1589);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:861
frost$core$Int $tmp1590 = *(&local1);
*(&local17) = $tmp1590;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:862
frost$core$Int $tmp1591 = *(&local1);
frost$core$Int $tmp1592 = (frost$core$Int) {1u};
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592.value;
int64_t $tmp1595 = $tmp1593 + $tmp1594;
frost$core$Int $tmp1596 = (frost$core$Int) {$tmp1595};
*(&local1) = $tmp1596;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:863
frost$core$Char8 $tmp1597 = *(&local16);
uint8_t $tmp1598 = $tmp1597.value;
int64_t $tmp1599 = ((int64_t) $tmp1598) & 255u;
bool $tmp1600 = $tmp1599 >= 192u;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:864
frost$core$MutableString* $tmp1603 = *(&local11);
frost$core$Char8** $tmp1604 = &param0->data;
frost$core$Char8* $tmp1605 = *$tmp1604;
frost$core$Int $tmp1606 = *(&local1);
frost$core$Int64 $tmp1607 = frost$core$Int64$init$frost$core$Int($tmp1606);
int64_t $tmp1608 = $tmp1607.value;
frost$core$Char8 $tmp1609 = $tmp1605[$tmp1608];
frost$core$MutableString$append$frost$core$Char8($tmp1603, $tmp1609);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:865
frost$core$Int $tmp1610 = *(&local1);
frost$core$Int $tmp1611 = (frost$core$Int) {1u};
int64_t $tmp1612 = $tmp1610.value;
int64_t $tmp1613 = $tmp1611.value;
int64_t $tmp1614 = $tmp1612 + $tmp1613;
frost$core$Int $tmp1615 = (frost$core$Int) {$tmp1614};
*(&local1) = $tmp1615;
goto block53;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:867
frost$core$Char8 $tmp1616 = *(&local16);
uint8_t $tmp1617 = $tmp1616.value;
int64_t $tmp1618 = ((int64_t) $tmp1617) & 255u;
bool $tmp1619 = $tmp1618 >= 224u;
frost$core$Bit $tmp1620 = (frost$core$Bit) {$tmp1619};
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:868
frost$core$MutableString* $tmp1622 = *(&local11);
frost$core$Char8** $tmp1623 = &param0->data;
frost$core$Char8* $tmp1624 = *$tmp1623;
frost$core$Int $tmp1625 = *(&local1);
frost$core$Int64 $tmp1626 = frost$core$Int64$init$frost$core$Int($tmp1625);
int64_t $tmp1627 = $tmp1626.value;
frost$core$Char8 $tmp1628 = $tmp1624[$tmp1627];
frost$core$MutableString$append$frost$core$Char8($tmp1622, $tmp1628);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:869
frost$core$Int $tmp1629 = *(&local1);
frost$core$Int $tmp1630 = (frost$core$Int) {1u};
int64_t $tmp1631 = $tmp1629.value;
int64_t $tmp1632 = $tmp1630.value;
int64_t $tmp1633 = $tmp1631 + $tmp1632;
frost$core$Int $tmp1634 = (frost$core$Int) {$tmp1633};
*(&local1) = $tmp1634;
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:871
frost$core$Char8 $tmp1635 = *(&local16);
uint8_t $tmp1636 = $tmp1635.value;
int64_t $tmp1637 = ((int64_t) $tmp1636) & 255u;
bool $tmp1638 = $tmp1637 >= 240u;
frost$core$Bit $tmp1639 = (frost$core$Bit) {$tmp1638};
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:872
frost$core$MutableString* $tmp1641 = *(&local11);
frost$core$Char8** $tmp1642 = &param0->data;
frost$core$Char8* $tmp1643 = *$tmp1642;
frost$core$Int $tmp1644 = *(&local1);
frost$core$Int64 $tmp1645 = frost$core$Int64$init$frost$core$Int($tmp1644);
int64_t $tmp1646 = $tmp1645.value;
frost$core$Char8 $tmp1647 = $tmp1643[$tmp1646];
frost$core$MutableString$append$frost$core$Char8($tmp1641, $tmp1647);
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:874
frost$core$Int $tmp1648 = *(&local17);
frost$core$Int $tmp1649 = (frost$core$Int) {1u};
int64_t $tmp1650 = $tmp1648.value;
int64_t $tmp1651 = $tmp1649.value;
int64_t $tmp1652 = $tmp1650 - $tmp1651;
frost$core$Int $tmp1653 = (frost$core$Int) {$tmp1652};
*(&local1) = $tmp1653;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:875
goto block58;
block58:;
frost$core$Char8** $tmp1654 = &param0->data;
frost$core$Char8* $tmp1655 = *$tmp1654;
frost$core$Int $tmp1656 = *(&local1);
frost$core$Int64 $tmp1657 = frost$core$Int64$init$frost$core$Int($tmp1656);
int64_t $tmp1658 = $tmp1657.value;
frost$core$Char8 $tmp1659 = $tmp1655[$tmp1658];
uint8_t $tmp1660 = $tmp1659.value;
int64_t $tmp1661 = ((int64_t) $tmp1660) & 255u;
bool $tmp1662 = $tmp1661 >= 128u;
frost$core$Bit $tmp1663 = (frost$core$Bit) {$tmp1662};
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block61; else goto block60;
block61:;
frost$core$Char8** $tmp1665 = &param0->data;
frost$core$Char8* $tmp1666 = *$tmp1665;
frost$core$Int $tmp1667 = *(&local1);
frost$core$Int64 $tmp1668 = frost$core$Int64$init$frost$core$Int($tmp1667);
int64_t $tmp1669 = $tmp1668.value;
frost$core$Char8 $tmp1670 = $tmp1666[$tmp1669];
uint8_t $tmp1671 = $tmp1670.value;
int64_t $tmp1672 = ((int64_t) $tmp1671) & 255u;
bool $tmp1673 = $tmp1672 < 192u;
frost$core$Bit $tmp1674 = (frost$core$Bit) {$tmp1673};
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:876
frost$core$Int $tmp1676 = *(&local1);
frost$core$Int $tmp1677 = (frost$core$Int) {1u};
int64_t $tmp1678 = $tmp1676.value;
int64_t $tmp1679 = $tmp1677.value;
int64_t $tmp1680 = $tmp1678 - $tmp1679;
frost$core$Int $tmp1681 = (frost$core$Int) {$tmp1680};
*(&local1) = $tmp1681;
goto block58;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:878
frost$core$Int $tmp1682 = (frost$core$Int) {18446744073709551615u};
frost$core$Int $tmp1683 = *(&local0);
frost$core$Int $tmp1684 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1685 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1686 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1682, $tmp1683, $tmp1684, $tmp1685);
frost$core$Int $tmp1687 = $tmp1686.start;
*(&local18) = $tmp1687;
frost$core$Int $tmp1688 = $tmp1686.end;
frost$core$Int $tmp1689 = $tmp1686.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:878:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp1690 = $tmp1689.value;
int64_t $tmp1691 = -$tmp1690;
frost$core$Int $tmp1692 = (frost$core$Int) {$tmp1691};
frost$core$Bit $tmp1693 = $tmp1686.inclusive;
bool $tmp1694 = $tmp1693.value;
frost$core$Int $tmp1695 = (frost$core$Int) {0u};
int64_t $tmp1696 = $tmp1689.value;
int64_t $tmp1697 = $tmp1695.value;
bool $tmp1698 = $tmp1696 >= $tmp1697;
frost$core$Bit $tmp1699 = (frost$core$Bit) {$tmp1698};
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block66; else goto block67;
block66:;
if ($tmp1694) goto block68; else goto block69;
block68:;
int64_t $tmp1701 = $tmp1687.value;
int64_t $tmp1702 = $tmp1688.value;
bool $tmp1703 = $tmp1701 <= $tmp1702;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block63; else goto block64;
block69:;
int64_t $tmp1706 = $tmp1687.value;
int64_t $tmp1707 = $tmp1688.value;
bool $tmp1708 = $tmp1706 < $tmp1707;
frost$core$Bit $tmp1709 = (frost$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block63; else goto block64;
block67:;
if ($tmp1694) goto block70; else goto block71;
block70:;
int64_t $tmp1711 = $tmp1687.value;
int64_t $tmp1712 = $tmp1688.value;
bool $tmp1713 = $tmp1711 >= $tmp1712;
frost$core$Bit $tmp1714 = (frost$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block63; else goto block64;
block71:;
int64_t $tmp1716 = $tmp1687.value;
int64_t $tmp1717 = $tmp1688.value;
bool $tmp1718 = $tmp1716 > $tmp1717;
frost$core$Bit $tmp1719 = (frost$core$Bit) {$tmp1718};
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:879
frost$core$Int $tmp1721 = *(&local1);
frost$core$Int $tmp1722 = *(&local6);
int64_t $tmp1723 = $tmp1721.value;
int64_t $tmp1724 = $tmp1722.value;
bool $tmp1725 = $tmp1723 <= $tmp1724;
frost$core$Bit $tmp1726 = (frost$core$Bit) {$tmp1725};
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:880
frost$core$MutableString* $tmp1728 = *(&local11);
$fn1730 $tmp1729 = ($fn1730) ((frost$core$Object*) $tmp1728)->$class->vtable[0];
frost$core$String* $tmp1731 = $tmp1729(((frost$core$Object*) $tmp1728));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$MutableString* $tmp1732 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1731;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:882
frost$core$Int $tmp1733 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:882:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1734 = &(&local20)->value;
*$tmp1734 = $tmp1733;
frost$core$String$Index $tmp1735 = *(&local20);
*(&local19) = $tmp1735;
frost$core$String$Index $tmp1736 = *(&local19);
frost$core$String$Index $tmp1737 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1736);
frost$core$Int $tmp1738 = $tmp1737.value;
*(&local1) = $tmp1738;
frost$core$Int $tmp1739 = *(&local18);
if ($tmp1700) goto block76; else goto block77;
block76:;
int64_t $tmp1740 = $tmp1688.value;
int64_t $tmp1741 = $tmp1739.value;
int64_t $tmp1742 = $tmp1740 - $tmp1741;
frost$core$Int $tmp1743 = (frost$core$Int) {$tmp1742};
if ($tmp1694) goto block78; else goto block79;
block78:;
int64_t $tmp1744 = $tmp1743.value;
int64_t $tmp1745 = $tmp1689.value;
bool $tmp1746 = $tmp1744 >= $tmp1745;
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block75; else goto block64;
block79:;
int64_t $tmp1749 = $tmp1743.value;
int64_t $tmp1750 = $tmp1689.value;
bool $tmp1751 = $tmp1749 > $tmp1750;
frost$core$Bit $tmp1752 = (frost$core$Bit) {$tmp1751};
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block75; else goto block64;
block77:;
int64_t $tmp1754 = $tmp1739.value;
int64_t $tmp1755 = $tmp1688.value;
int64_t $tmp1756 = $tmp1754 - $tmp1755;
frost$core$Int $tmp1757 = (frost$core$Int) {$tmp1756};
if ($tmp1694) goto block80; else goto block81;
block80:;
int64_t $tmp1758 = $tmp1757.value;
int64_t $tmp1759 = $tmp1692.value;
bool $tmp1760 = $tmp1758 >= $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block75; else goto block64;
block81:;
int64_t $tmp1763 = $tmp1757.value;
int64_t $tmp1764 = $tmp1692.value;
bool $tmp1765 = $tmp1763 > $tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block75; else goto block64;
block75:;
int64_t $tmp1768 = $tmp1739.value;
int64_t $tmp1769 = $tmp1689.value;
int64_t $tmp1770 = $tmp1768 + $tmp1769;
frost$core$Int $tmp1771 = (frost$core$Int) {$tmp1770};
*(&local18) = $tmp1771;
goto block63;
block64:;
goto block49;
block51:;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:886
frost$core$Bit $tmp1772 = param1.inclusive;
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block85; else goto block86;
block86:;
frost$core$String$Index$nullable $tmp1774 = param1.end;
frost$core$Bit $tmp1775 = (frost$core$Bit) {!$tmp1774.nonnull};
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block85; else goto block83;
block85:;
frost$core$Int $tmp1777 = *(&local1);
frost$core$Int $tmp1778 = *(&local6);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:886:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1779 = $tmp1777.value;
int64_t $tmp1780 = $tmp1778.value;
bool $tmp1781 = $tmp1779 == $tmp1780;
frost$core$Bit $tmp1782 = (frost$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block84; else goto block83;
block84:;
frost$core$Int $tmp1784 = *(&local6);
frost$core$Int* $tmp1785 = &param0->_length;
frost$core$Int $tmp1786 = *$tmp1785;
int64_t $tmp1787 = $tmp1784.value;
int64_t $tmp1788 = $tmp1786.value;
bool $tmp1789 = $tmp1787 < $tmp1788;
frost$core$Bit $tmp1790 = (frost$core$Bit) {$tmp1789};
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:887
frost$core$Char8** $tmp1792 = &param0->data;
frost$core$Char8* $tmp1793 = *$tmp1792;
frost$core$Int $tmp1794 = *(&local1);
frost$core$Int64 $tmp1795 = frost$core$Int64$init$frost$core$Int($tmp1794);
int64_t $tmp1796 = $tmp1795.value;
frost$core$Char8 $tmp1797 = $tmp1793[$tmp1796];
*(&local21) = $tmp1797;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:888
frost$core$MutableString* $tmp1798 = *(&local11);
frost$core$Char8 $tmp1799 = *(&local21);
frost$core$MutableString$append$frost$core$Char8($tmp1798, $tmp1799);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:889
frost$core$Int $tmp1800 = *(&local1);
frost$core$Int $tmp1801 = (frost$core$Int) {1u};
int64_t $tmp1802 = $tmp1800.value;
int64_t $tmp1803 = $tmp1801.value;
int64_t $tmp1804 = $tmp1802 + $tmp1803;
frost$core$Int $tmp1805 = (frost$core$Int) {$tmp1804};
*(&local1) = $tmp1805;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:890
frost$core$Char8 $tmp1806 = *(&local21);
uint8_t $tmp1807 = $tmp1806.value;
int64_t $tmp1808 = ((int64_t) $tmp1807) & 255u;
bool $tmp1809 = $tmp1808 >= 192u;
frost$core$Bit $tmp1810 = (frost$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:891
frost$core$MutableString* $tmp1812 = *(&local11);
frost$core$Char8** $tmp1813 = &param0->data;
frost$core$Char8* $tmp1814 = *$tmp1813;
frost$core$Int $tmp1815 = *(&local1);
frost$core$Int64 $tmp1816 = frost$core$Int64$init$frost$core$Int($tmp1815);
int64_t $tmp1817 = $tmp1816.value;
frost$core$Char8 $tmp1818 = $tmp1814[$tmp1817];
frost$core$MutableString$append$frost$core$Char8($tmp1812, $tmp1818);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:892
frost$core$Int $tmp1819 = *(&local1);
frost$core$Int $tmp1820 = (frost$core$Int) {1u};
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820.value;
int64_t $tmp1823 = $tmp1821 + $tmp1822;
frost$core$Int $tmp1824 = (frost$core$Int) {$tmp1823};
*(&local1) = $tmp1824;
goto block89;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:894
frost$core$Char8 $tmp1825 = *(&local21);
uint8_t $tmp1826 = $tmp1825.value;
int64_t $tmp1827 = ((int64_t) $tmp1826) & 255u;
bool $tmp1828 = $tmp1827 >= 224u;
frost$core$Bit $tmp1829 = (frost$core$Bit) {$tmp1828};
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:895
frost$core$MutableString* $tmp1831 = *(&local11);
frost$core$Char8** $tmp1832 = &param0->data;
frost$core$Char8* $tmp1833 = *$tmp1832;
frost$core$Int $tmp1834 = *(&local1);
frost$core$Int64 $tmp1835 = frost$core$Int64$init$frost$core$Int($tmp1834);
int64_t $tmp1836 = $tmp1835.value;
frost$core$Char8 $tmp1837 = $tmp1833[$tmp1836];
frost$core$MutableString$append$frost$core$Char8($tmp1831, $tmp1837);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:896
frost$core$Int $tmp1838 = *(&local1);
frost$core$Int $tmp1839 = (frost$core$Int) {1u};
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839.value;
int64_t $tmp1842 = $tmp1840 + $tmp1841;
frost$core$Int $tmp1843 = (frost$core$Int) {$tmp1842};
*(&local1) = $tmp1843;
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:898
frost$core$Char8 $tmp1844 = *(&local21);
uint8_t $tmp1845 = $tmp1844.value;
int64_t $tmp1846 = ((int64_t) $tmp1845) & 255u;
bool $tmp1847 = $tmp1846 >= 240u;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:899
frost$core$MutableString* $tmp1850 = *(&local11);
frost$core$Char8** $tmp1851 = &param0->data;
frost$core$Char8* $tmp1852 = *$tmp1851;
frost$core$Int $tmp1853 = *(&local1);
frost$core$Int64 $tmp1854 = frost$core$Int64$init$frost$core$Int($tmp1853);
int64_t $tmp1855 = $tmp1854.value;
frost$core$Char8 $tmp1856 = $tmp1852[$tmp1855];
frost$core$MutableString$append$frost$core$Char8($tmp1850, $tmp1856);
goto block93;
block93:;
goto block83;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:902
frost$core$MutableString* $tmp1857 = *(&local11);
frost$core$String* $tmp1858 = frost$core$MutableString$finish$R$frost$core$String($tmp1857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$MutableString* $tmp1859 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1858;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:911
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:912
frost$core$Int$nullable $tmp1860 = param1.min;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860.nonnull};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:913
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:913:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1863 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1864 = &(&local2)->value;
*$tmp1864 = $tmp1863;
frost$core$String$Index $tmp1865 = *(&local2);
*(&local1) = $tmp1865;
frost$core$String$Index $tmp1866 = *(&local1);
frost$core$Int$nullable $tmp1867 = param1.min;
frost$core$String$Index $tmp1868 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1866, ((frost$core$Int) $tmp1867.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1868, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:918
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:919
frost$core$Int$nullable $tmp1869 = param1.max;
frost$core$Bit $tmp1870 = (frost$core$Bit) {$tmp1869.nonnull};
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:920
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:920:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1872 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1873 = &(&local5)->value;
*$tmp1873 = $tmp1872;
frost$core$String$Index $tmp1874 = *(&local5);
*(&local4) = $tmp1874;
frost$core$String$Index $tmp1875 = *(&local4);
frost$core$Int$nullable $tmp1876 = param1.max;
frost$core$String$Index $tmp1877 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1875, ((frost$core$Int) $tmp1876.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1877, true });
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:923
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:925
frost$core$String$Index$nullable $tmp1878 = *(&local0);
frost$core$String$Index$nullable $tmp1879 = *(&local3);
frost$core$Bit $tmp1880 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1881 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1878, $tmp1879, $tmp1880);
frost$core$String* $tmp1882 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
return $tmp1882;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:934
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:935
frost$core$Int$nullable $tmp1883 = param1.start;
frost$core$Bit $tmp1884 = (frost$core$Bit) {$tmp1883.nonnull};
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:936
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:936:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1886 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1887 = &(&local2)->value;
*$tmp1887 = $tmp1886;
frost$core$String$Index $tmp1888 = *(&local2);
*(&local1) = $tmp1888;
frost$core$String$Index $tmp1889 = *(&local1);
frost$core$Int$nullable $tmp1890 = param1.start;
frost$core$String$Index $tmp1891 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1889, ((frost$core$Int) $tmp1890.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1891, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:941
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:942
frost$core$Int$nullable $tmp1892 = param1.end;
frost$core$Bit $tmp1893 = (frost$core$Bit) {$tmp1892.nonnull};
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:943
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:943:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1895 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1896 = &(&local5)->value;
*$tmp1896 = $tmp1895;
frost$core$String$Index $tmp1897 = *(&local5);
*(&local4) = $tmp1897;
frost$core$String$Index $tmp1898 = *(&local4);
frost$core$Int$nullable $tmp1899 = param1.end;
frost$core$String$Index $tmp1900 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1898, ((frost$core$Int) $tmp1899.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1900, true });
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:946
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:948
frost$core$String$Index$nullable $tmp1901 = *(&local0);
frost$core$String$Index$nullable $tmp1902 = *(&local3);
frost$core$Int $tmp1903 = param1.step;
frost$core$Bit $tmp1904 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT $tmp1905 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int$frost$core$Bit($tmp1901, $tmp1902, $tmp1903, $tmp1904);
frost$core$String* $tmp1906 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(param0, $tmp1905);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
return $tmp1906;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:955
frost$core$Int $tmp1907 = (frost$core$Int) {0u};
frost$core$Int* $tmp1908 = &param0->_length;
frost$core$Int $tmp1909 = *$tmp1908;
frost$core$Bit $tmp1910 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1911 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1907, $tmp1909, $tmp1910);
frost$core$Int $tmp1912 = $tmp1911.min;
*(&local0) = $tmp1912;
frost$core$Int $tmp1913 = $tmp1911.max;
frost$core$Bit $tmp1914 = $tmp1911.inclusive;
bool $tmp1915 = $tmp1914.value;
frost$core$Int $tmp1916 = (frost$core$Int) {1u};
if ($tmp1915) goto block4; else goto block5;
block4:;
int64_t $tmp1917 = $tmp1912.value;
int64_t $tmp1918 = $tmp1913.value;
bool $tmp1919 = $tmp1917 <= $tmp1918;
frost$core$Bit $tmp1920 = (frost$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block1; else goto block2;
block5:;
int64_t $tmp1922 = $tmp1912.value;
int64_t $tmp1923 = $tmp1913.value;
bool $tmp1924 = $tmp1922 < $tmp1923;
frost$core$Bit $tmp1925 = (frost$core$Bit) {$tmp1924};
bool $tmp1926 = $tmp1925.value;
if ($tmp1926) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:956
frost$core$Char8** $tmp1927 = &param0->data;
frost$core$Char8* $tmp1928 = *$tmp1927;
frost$core$Int $tmp1929 = *(&local0);
frost$core$Int64 $tmp1930 = frost$core$Int64$init$frost$core$Int($tmp1929);
int64_t $tmp1931 = $tmp1930.value;
frost$core$Char8 $tmp1932 = $tmp1928[$tmp1931];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:956:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp1933 = $tmp1932.value;
uint8_t $tmp1934 = param1.value;
bool $tmp1935 = $tmp1933 == $tmp1934;
frost$core$Bit $tmp1936 = (frost$core$Bit) {$tmp1935};
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:957
frost$core$Bit $tmp1938 = (frost$core$Bit) {true};
return $tmp1938;
block7:;
frost$core$Int $tmp1939 = *(&local0);
int64_t $tmp1940 = $tmp1913.value;
int64_t $tmp1941 = $tmp1939.value;
int64_t $tmp1942 = $tmp1940 - $tmp1941;
frost$core$Int $tmp1943 = (frost$core$Int) {$tmp1942};
if ($tmp1915) goto block10; else goto block11;
block10:;
int64_t $tmp1944 = $tmp1943.value;
int64_t $tmp1945 = $tmp1916.value;
bool $tmp1946 = $tmp1944 >= $tmp1945;
frost$core$Bit $tmp1947 = (frost$core$Bit) {$tmp1946};
bool $tmp1948 = $tmp1947.value;
if ($tmp1948) goto block9; else goto block2;
block11:;
int64_t $tmp1949 = $tmp1943.value;
int64_t $tmp1950 = $tmp1916.value;
bool $tmp1951 = $tmp1949 > $tmp1950;
frost$core$Bit $tmp1952 = (frost$core$Bit) {$tmp1951};
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block9; else goto block2;
block9:;
int64_t $tmp1954 = $tmp1939.value;
int64_t $tmp1955 = $tmp1916.value;
int64_t $tmp1956 = $tmp1954 + $tmp1955;
frost$core$Int $tmp1957 = (frost$core$Int) {$tmp1956};
*(&local0) = $tmp1957;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:960
frost$core$Bit $tmp1958 = (frost$core$Bit) {false};
return $tmp1958;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1959 = (frost$core$Int) {0u};
frost$core$String$Index $tmp1960 = frost$core$String$Index$init$frost$core$Int($tmp1959);
frost$core$String$Index$nullable $tmp1961 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1960);
frost$core$Bit $tmp1962 = (frost$core$Bit) {$tmp1961.nonnull};
return $tmp1962;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1963 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1964 = &(&local1)->value;
*$tmp1964 = $tmp1963;
frost$core$String$Index $tmp1965 = *(&local1);
*(&local0) = $tmp1965;
frost$core$String$Index $tmp1966 = *(&local0);
frost$core$String$Index$nullable $tmp1967 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1966);
return $tmp1967;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:990
frost$core$Int* $tmp1968 = &param0->_length;
frost$core$Int $tmp1969 = *$tmp1968;
frost$core$Int* $tmp1970 = &param1->_length;
frost$core$Int $tmp1971 = *$tmp1970;
int64_t $tmp1972 = $tmp1969.value;
int64_t $tmp1973 = $tmp1971.value;
bool $tmp1974 = $tmp1972 < $tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {$tmp1974};
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:993
frost$core$Int $tmp1977 = param2.value;
frost$core$Int* $tmp1978 = &param0->_length;
frost$core$Int $tmp1979 = *$tmp1978;
frost$core$Int* $tmp1980 = &param1->_length;
frost$core$Int $tmp1981 = *$tmp1980;
int64_t $tmp1982 = $tmp1979.value;
int64_t $tmp1983 = $tmp1981.value;
int64_t $tmp1984 = $tmp1982 - $tmp1983;
frost$core$Int $tmp1985 = (frost$core$Int) {$tmp1984};
frost$core$Bit $tmp1986 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp1987 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1977, $tmp1985, $tmp1986);
frost$core$Int $tmp1988 = $tmp1987.min;
*(&local0) = $tmp1988;
frost$core$Int $tmp1989 = $tmp1987.max;
frost$core$Bit $tmp1990 = $tmp1987.inclusive;
bool $tmp1991 = $tmp1990.value;
frost$core$Int $tmp1992 = (frost$core$Int) {1u};
if ($tmp1991) goto block6; else goto block7;
block6:;
int64_t $tmp1993 = $tmp1988.value;
int64_t $tmp1994 = $tmp1989.value;
bool $tmp1995 = $tmp1993 <= $tmp1994;
frost$core$Bit $tmp1996 = (frost$core$Bit) {$tmp1995};
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block3; else goto block4;
block7:;
int64_t $tmp1998 = $tmp1988.value;
int64_t $tmp1999 = $tmp1989.value;
bool $tmp2000 = $tmp1998 < $tmp1999;
frost$core$Bit $tmp2001 = (frost$core$Bit) {$tmp2000};
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:994
frost$core$Int $tmp2003 = (frost$core$Int) {0u};
frost$core$Int* $tmp2004 = &param1->_length;
frost$core$Int $tmp2005 = *$tmp2004;
frost$core$Bit $tmp2006 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2007 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2003, $tmp2005, $tmp2006);
frost$core$Int $tmp2008 = $tmp2007.min;
*(&local1) = $tmp2008;
frost$core$Int $tmp2009 = $tmp2007.max;
frost$core$Bit $tmp2010 = $tmp2007.inclusive;
bool $tmp2011 = $tmp2010.value;
frost$core$Int $tmp2012 = (frost$core$Int) {1u};
if ($tmp2011) goto block11; else goto block12;
block11:;
int64_t $tmp2013 = $tmp2008.value;
int64_t $tmp2014 = $tmp2009.value;
bool $tmp2015 = $tmp2013 <= $tmp2014;
frost$core$Bit $tmp2016 = (frost$core$Bit) {$tmp2015};
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block8; else goto block9;
block12:;
int64_t $tmp2018 = $tmp2008.value;
int64_t $tmp2019 = $tmp2009.value;
bool $tmp2020 = $tmp2018 < $tmp2019;
frost$core$Bit $tmp2021 = (frost$core$Bit) {$tmp2020};
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:995
frost$core$Char8** $tmp2023 = &param0->data;
frost$core$Char8* $tmp2024 = *$tmp2023;
frost$core$Int $tmp2025 = *(&local0);
frost$core$Int $tmp2026 = *(&local1);
int64_t $tmp2027 = $tmp2025.value;
int64_t $tmp2028 = $tmp2026.value;
int64_t $tmp2029 = $tmp2027 + $tmp2028;
frost$core$Int $tmp2030 = (frost$core$Int) {$tmp2029};
frost$core$Int64 $tmp2031 = frost$core$Int64$init$frost$core$Int($tmp2030);
int64_t $tmp2032 = $tmp2031.value;
frost$core$Char8 $tmp2033 = $tmp2024[$tmp2032];
frost$core$Char8** $tmp2034 = &param1->data;
frost$core$Char8* $tmp2035 = *$tmp2034;
frost$core$Int $tmp2036 = *(&local1);
frost$core$Int64 $tmp2037 = frost$core$Int64$init$frost$core$Int($tmp2036);
int64_t $tmp2038 = $tmp2037.value;
frost$core$Char8 $tmp2039 = $tmp2035[$tmp2038];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:995:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp2040 = $tmp2033.value;
uint8_t $tmp2041 = $tmp2039.value;
bool $tmp2042 = $tmp2040 != $tmp2041;
frost$core$Bit $tmp2043 = (frost$core$Bit) {$tmp2042};
bool $tmp2044 = $tmp2043.value;
if ($tmp2044) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:996
frost$core$Int $tmp2045 = *(&local0);
int64_t $tmp2046 = $tmp1989.value;
int64_t $tmp2047 = $tmp2045.value;
int64_t $tmp2048 = $tmp2046 - $tmp2047;
frost$core$Int $tmp2049 = (frost$core$Int) {$tmp2048};
if ($tmp1991) goto block23; else goto block24;
block14:;
frost$core$Int $tmp2050 = *(&local1);
int64_t $tmp2051 = $tmp2009.value;
int64_t $tmp2052 = $tmp2050.value;
int64_t $tmp2053 = $tmp2051 - $tmp2052;
frost$core$Int $tmp2054 = (frost$core$Int) {$tmp2053};
if ($tmp2011) goto block17; else goto block18;
block17:;
int64_t $tmp2055 = $tmp2054.value;
int64_t $tmp2056 = $tmp2012.value;
bool $tmp2057 = $tmp2055 >= $tmp2056;
frost$core$Bit $tmp2058 = (frost$core$Bit) {$tmp2057};
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block16; else goto block9;
block18:;
int64_t $tmp2060 = $tmp2054.value;
int64_t $tmp2061 = $tmp2012.value;
bool $tmp2062 = $tmp2060 > $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block16; else goto block9;
block16:;
int64_t $tmp2065 = $tmp2050.value;
int64_t $tmp2066 = $tmp2012.value;
int64_t $tmp2067 = $tmp2065 + $tmp2066;
frost$core$Int $tmp2068 = (frost$core$Int) {$tmp2067};
*(&local1) = $tmp2068;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:999
frost$core$Int $tmp2069 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:999:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2070 = &(&local3)->value;
*$tmp2070 = $tmp2069;
frost$core$String$Index $tmp2071 = *(&local3);
*(&local2) = $tmp2071;
frost$core$String$Index $tmp2072 = *(&local2);
frost$core$Bit $tmp2073 = (frost$core$Bit) {((frost$core$String$Index$nullable) { $tmp2072, true }).nonnull};
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block20; else goto block21;
block21:;
frost$core$Int $tmp2075 = (frost$core$Int) {999u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2076, $tmp2075, &$s2077);
abort(); // unreachable
block20:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2072, true }).value), true });
block23:;
int64_t $tmp2078 = $tmp2049.value;
int64_t $tmp2079 = $tmp1992.value;
bool $tmp2080 = $tmp2078 >= $tmp2079;
frost$core$Bit $tmp2081 = (frost$core$Bit) {$tmp2080};
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block22; else goto block4;
block24:;
int64_t $tmp2083 = $tmp2049.value;
int64_t $tmp2084 = $tmp1992.value;
bool $tmp2085 = $tmp2083 > $tmp2084;
frost$core$Bit $tmp2086 = (frost$core$Bit) {$tmp2085};
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block22; else goto block4;
block22:;
int64_t $tmp2088 = $tmp2045.value;
int64_t $tmp2089 = $tmp1992.value;
int64_t $tmp2090 = $tmp2088 + $tmp2089;
frost$core$Int $tmp2091 = (frost$core$Int) {$tmp2090};
*(&local0) = $tmp2091;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp2092 = &param0->_length;
frost$core$Int $tmp2093 = *$tmp2092;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2094 = &(&local1)->value;
*$tmp2094 = $tmp2093;
frost$core$String$Index $tmp2095 = *(&local1);
*(&local0) = $tmp2095;
frost$core$String$Index $tmp2096 = *(&local0);
frost$core$String$Index$nullable $tmp2097 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2096);
return $tmp2097;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1024
frost$core$Int* $tmp2098 = &param0->_length;
frost$core$Int $tmp2099 = *$tmp2098;
frost$core$Int* $tmp2100 = &param1->_length;
frost$core$Int $tmp2101 = *$tmp2100;
int64_t $tmp2102 = $tmp2099.value;
int64_t $tmp2103 = $tmp2101.value;
bool $tmp2104 = $tmp2102 < $tmp2103;
frost$core$Bit $tmp2105 = (frost$core$Bit) {$tmp2104};
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1027
frost$core$Int $tmp2107 = param2.value;
frost$core$Int* $tmp2108 = &param0->_length;
frost$core$Int $tmp2109 = *$tmp2108;
frost$core$Int* $tmp2110 = &param1->_length;
frost$core$Int $tmp2111 = *$tmp2110;
int64_t $tmp2112 = $tmp2109.value;
int64_t $tmp2113 = $tmp2111.value;
int64_t $tmp2114 = $tmp2112 - $tmp2113;
frost$core$Int $tmp2115 = (frost$core$Int) {$tmp2114};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from String.frost:1027:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
int64_t $tmp2116 = $tmp2107.value;
int64_t $tmp2117 = $tmp2115.value;
bool $tmp2118 = $tmp2116 < $tmp2117;
frost$core$Bit $tmp2119 = (frost$core$Bit) {$tmp2118};
bool $tmp2120 = $tmp2119.value;
if ($tmp2120) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
int64_t $tmp2121 = $tmp2107.value;
frost$core$Int $tmp2122 = (frost$core$Int) {$tmp2121};
*(&local0) = $tmp2122;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
int64_t $tmp2123 = $tmp2115.value;
frost$core$Int $tmp2124 = (frost$core$Int) {$tmp2123};
*(&local0) = $tmp2124;
goto block3;
block3:;
frost$core$Int $tmp2125 = *(&local0);
*(&local1) = $tmp2125;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1028
frost$core$Int $tmp2126 = *(&local1);
frost$core$Int $tmp2127 = (frost$core$Int) {0u};
frost$core$Int $tmp2128 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp2129 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp2130 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2126, $tmp2127, $tmp2128, $tmp2129);
frost$core$Int $tmp2131 = $tmp2130.start;
*(&local2) = $tmp2131;
frost$core$Int $tmp2132 = $tmp2130.end;
frost$core$Int $tmp2133 = $tmp2130.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1028:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp2134 = $tmp2133.value;
int64_t $tmp2135 = -$tmp2134;
frost$core$Int $tmp2136 = (frost$core$Int) {$tmp2135};
frost$core$Bit $tmp2137 = $tmp2130.inclusive;
bool $tmp2138 = $tmp2137.value;
frost$core$Int $tmp2139 = (frost$core$Int) {0u};
int64_t $tmp2140 = $tmp2133.value;
int64_t $tmp2141 = $tmp2139.value;
bool $tmp2142 = $tmp2140 >= $tmp2141;
frost$core$Bit $tmp2143 = (frost$core$Bit) {$tmp2142};
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block10; else goto block11;
block10:;
if ($tmp2138) goto block12; else goto block13;
block12:;
int64_t $tmp2145 = $tmp2131.value;
int64_t $tmp2146 = $tmp2132.value;
bool $tmp2147 = $tmp2145 <= $tmp2146;
frost$core$Bit $tmp2148 = (frost$core$Bit) {$tmp2147};
bool $tmp2149 = $tmp2148.value;
if ($tmp2149) goto block7; else goto block8;
block13:;
int64_t $tmp2150 = $tmp2131.value;
int64_t $tmp2151 = $tmp2132.value;
bool $tmp2152 = $tmp2150 < $tmp2151;
frost$core$Bit $tmp2153 = (frost$core$Bit) {$tmp2152};
bool $tmp2154 = $tmp2153.value;
if ($tmp2154) goto block7; else goto block8;
block11:;
if ($tmp2138) goto block14; else goto block15;
block14:;
int64_t $tmp2155 = $tmp2131.value;
int64_t $tmp2156 = $tmp2132.value;
bool $tmp2157 = $tmp2155 >= $tmp2156;
frost$core$Bit $tmp2158 = (frost$core$Bit) {$tmp2157};
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block7; else goto block8;
block15:;
int64_t $tmp2160 = $tmp2131.value;
int64_t $tmp2161 = $tmp2132.value;
bool $tmp2162 = $tmp2160 > $tmp2161;
frost$core$Bit $tmp2163 = (frost$core$Bit) {$tmp2162};
bool $tmp2164 = $tmp2163.value;
if ($tmp2164) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1029
frost$core$Int $tmp2165 = (frost$core$Int) {0u};
frost$core$Int* $tmp2166 = &param1->_length;
frost$core$Int $tmp2167 = *$tmp2166;
frost$core$Bit $tmp2168 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2169 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2165, $tmp2167, $tmp2168);
frost$core$Int $tmp2170 = $tmp2169.min;
*(&local3) = $tmp2170;
frost$core$Int $tmp2171 = $tmp2169.max;
frost$core$Bit $tmp2172 = $tmp2169.inclusive;
bool $tmp2173 = $tmp2172.value;
frost$core$Int $tmp2174 = (frost$core$Int) {1u};
if ($tmp2173) goto block19; else goto block20;
block19:;
int64_t $tmp2175 = $tmp2170.value;
int64_t $tmp2176 = $tmp2171.value;
bool $tmp2177 = $tmp2175 <= $tmp2176;
frost$core$Bit $tmp2178 = (frost$core$Bit) {$tmp2177};
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block16; else goto block17;
block20:;
int64_t $tmp2180 = $tmp2170.value;
int64_t $tmp2181 = $tmp2171.value;
bool $tmp2182 = $tmp2180 < $tmp2181;
frost$core$Bit $tmp2183 = (frost$core$Bit) {$tmp2182};
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1030
frost$core$Char8** $tmp2185 = &param0->data;
frost$core$Char8* $tmp2186 = *$tmp2185;
frost$core$Int $tmp2187 = *(&local2);
frost$core$Int $tmp2188 = *(&local3);
int64_t $tmp2189 = $tmp2187.value;
int64_t $tmp2190 = $tmp2188.value;
int64_t $tmp2191 = $tmp2189 + $tmp2190;
frost$core$Int $tmp2192 = (frost$core$Int) {$tmp2191};
frost$core$Int64 $tmp2193 = frost$core$Int64$init$frost$core$Int($tmp2192);
int64_t $tmp2194 = $tmp2193.value;
frost$core$Char8 $tmp2195 = $tmp2186[$tmp2194];
frost$core$Char8** $tmp2196 = &param1->data;
frost$core$Char8* $tmp2197 = *$tmp2196;
frost$core$Int $tmp2198 = *(&local3);
frost$core$Int64 $tmp2199 = frost$core$Int64$init$frost$core$Int($tmp2198);
int64_t $tmp2200 = $tmp2199.value;
frost$core$Char8 $tmp2201 = $tmp2197[$tmp2200];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:1030:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp2202 = $tmp2195.value;
uint8_t $tmp2203 = $tmp2201.value;
bool $tmp2204 = $tmp2202 != $tmp2203;
frost$core$Bit $tmp2205 = (frost$core$Bit) {$tmp2204};
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1031
frost$core$Int $tmp2207 = *(&local2);
if ($tmp2144) goto block31; else goto block32;
block22:;
frost$core$Int $tmp2208 = *(&local3);
int64_t $tmp2209 = $tmp2171.value;
int64_t $tmp2210 = $tmp2208.value;
int64_t $tmp2211 = $tmp2209 - $tmp2210;
frost$core$Int $tmp2212 = (frost$core$Int) {$tmp2211};
if ($tmp2173) goto block25; else goto block26;
block25:;
int64_t $tmp2213 = $tmp2212.value;
int64_t $tmp2214 = $tmp2174.value;
bool $tmp2215 = $tmp2213 >= $tmp2214;
frost$core$Bit $tmp2216 = (frost$core$Bit) {$tmp2215};
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block24; else goto block17;
block26:;
int64_t $tmp2218 = $tmp2212.value;
int64_t $tmp2219 = $tmp2174.value;
bool $tmp2220 = $tmp2218 > $tmp2219;
frost$core$Bit $tmp2221 = (frost$core$Bit) {$tmp2220};
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block24; else goto block17;
block24:;
int64_t $tmp2223 = $tmp2208.value;
int64_t $tmp2224 = $tmp2174.value;
int64_t $tmp2225 = $tmp2223 + $tmp2224;
frost$core$Int $tmp2226 = (frost$core$Int) {$tmp2225};
*(&local3) = $tmp2226;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1034
frost$core$Int $tmp2227 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1034:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2228 = &(&local5)->value;
*$tmp2228 = $tmp2227;
frost$core$String$Index $tmp2229 = *(&local5);
*(&local4) = $tmp2229;
frost$core$String$Index $tmp2230 = *(&local4);
frost$core$Bit $tmp2231 = (frost$core$Bit) {((frost$core$String$Index$nullable) { $tmp2230, true }).nonnull};
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block28; else goto block29;
block29:;
frost$core$Int $tmp2233 = (frost$core$Int) {1034u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2234, $tmp2233, &$s2235);
abort(); // unreachable
block28:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2230, true }).value), true });
block31:;
int64_t $tmp2236 = $tmp2132.value;
int64_t $tmp2237 = $tmp2207.value;
int64_t $tmp2238 = $tmp2236 - $tmp2237;
frost$core$Int $tmp2239 = (frost$core$Int) {$tmp2238};
if ($tmp2138) goto block33; else goto block34;
block33:;
int64_t $tmp2240 = $tmp2239.value;
int64_t $tmp2241 = $tmp2133.value;
bool $tmp2242 = $tmp2240 >= $tmp2241;
frost$core$Bit $tmp2243 = (frost$core$Bit) {$tmp2242};
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block30; else goto block8;
block34:;
int64_t $tmp2245 = $tmp2239.value;
int64_t $tmp2246 = $tmp2133.value;
bool $tmp2247 = $tmp2245 > $tmp2246;
frost$core$Bit $tmp2248 = (frost$core$Bit) {$tmp2247};
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block30; else goto block8;
block32:;
int64_t $tmp2250 = $tmp2207.value;
int64_t $tmp2251 = $tmp2132.value;
int64_t $tmp2252 = $tmp2250 - $tmp2251;
frost$core$Int $tmp2253 = (frost$core$Int) {$tmp2252};
if ($tmp2138) goto block35; else goto block36;
block35:;
int64_t $tmp2254 = $tmp2253.value;
int64_t $tmp2255 = $tmp2136.value;
bool $tmp2256 = $tmp2254 >= $tmp2255;
frost$core$Bit $tmp2257 = (frost$core$Bit) {$tmp2256};
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block30; else goto block8;
block36:;
int64_t $tmp2259 = $tmp2253.value;
int64_t $tmp2260 = $tmp2136.value;
bool $tmp2261 = $tmp2259 > $tmp2260;
frost$core$Bit $tmp2262 = (frost$core$Bit) {$tmp2261};
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block30; else goto block8;
block30:;
int64_t $tmp2264 = $tmp2207.value;
int64_t $tmp2265 = $tmp2133.value;
int64_t $tmp2266 = $tmp2264 + $tmp2265;
frost$core$Int $tmp2267 = (frost$core$Int) {$tmp2266};
*(&local2) = $tmp2267;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp2268 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2269;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2269, $tmp2268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
return $tmp2269;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1058
frost$core$Matcher* $tmp2270 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2271 = frost$core$Matcher$find$R$frost$core$Bit($tmp2270);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
return $tmp2271;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$Q$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp2272 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Matcher* $tmp2273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local0) = $tmp2272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp2274 = *(&local0);
frost$core$Bit $tmp2275;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2275, $tmp2274);
bool $tmp2276 = $tmp2275.value;
if ($tmp2276) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2277 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2277);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
frost$collections$Array* $tmp2278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local1) = $tmp2277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp2279 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp2280 = *(&local0);
frost$core$Int $tmp2281;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp2281, $tmp2280);
frost$core$Bit $tmp2282 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2283 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2279, $tmp2281, $tmp2282);
frost$core$Int $tmp2284 = $tmp2283.min;
*(&local2) = $tmp2284;
frost$core$Int $tmp2285 = $tmp2283.max;
frost$core$Bit $tmp2286 = $tmp2283.inclusive;
bool $tmp2287 = $tmp2286.value;
frost$core$Int $tmp2288 = (frost$core$Int) {1u};
if ($tmp2287) goto block6; else goto block7;
block6:;
int64_t $tmp2289 = $tmp2284.value;
int64_t $tmp2290 = $tmp2285.value;
bool $tmp2291 = $tmp2289 <= $tmp2290;
frost$core$Bit $tmp2292 = (frost$core$Bit) {$tmp2291};
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block3; else goto block4;
block7:;
int64_t $tmp2294 = $tmp2284.value;
int64_t $tmp2295 = $tmp2285.value;
bool $tmp2296 = $tmp2294 < $tmp2295;
frost$core$Bit $tmp2297 = (frost$core$Bit) {$tmp2296};
bool $tmp2298 = $tmp2297.value;
if ($tmp2298) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp2299 = *(&local1);
frost$core$Matcher* $tmp2300 = *(&local0);
frost$core$Int $tmp2301 = *(&local2);
frost$core$String* $tmp2302 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2300, $tmp2301);
frost$collections$Array$add$frost$collections$Array$T($tmp2299, ((frost$core$Object*) $tmp2302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
frost$core$Int $tmp2303 = *(&local2);
int64_t $tmp2304 = $tmp2285.value;
int64_t $tmp2305 = $tmp2303.value;
int64_t $tmp2306 = $tmp2304 - $tmp2305;
frost$core$Int $tmp2307 = (frost$core$Int) {$tmp2306};
if ($tmp2287) goto block9; else goto block10;
block9:;
int64_t $tmp2308 = $tmp2307.value;
int64_t $tmp2309 = $tmp2288.value;
bool $tmp2310 = $tmp2308 >= $tmp2309;
frost$core$Bit $tmp2311 = (frost$core$Bit) {$tmp2310};
bool $tmp2312 = $tmp2311.value;
if ($tmp2312) goto block8; else goto block4;
block10:;
int64_t $tmp2313 = $tmp2307.value;
int64_t $tmp2314 = $tmp2288.value;
bool $tmp2315 = $tmp2313 > $tmp2314;
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block8; else goto block4;
block8:;
int64_t $tmp2318 = $tmp2303.value;
int64_t $tmp2319 = $tmp2288.value;
int64_t $tmp2320 = $tmp2318 + $tmp2319;
frost$core$Int $tmp2321 = (frost$core$Int) {$tmp2320};
*(&local2) = $tmp2321;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp2322 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2322)));
frost$collections$Array* $tmp2323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2324 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2322);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1091
frost$core$Bit $tmp2326 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2327);
bool $tmp2328 = $tmp2326.value;
if ($tmp2328) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1094
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2329 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2329);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$MutableString* $tmp2330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local0) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1095
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1095:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2331 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2332 = &(&local2)->value;
*$tmp2332 = $tmp2331;
frost$core$String$Index $tmp2333 = *(&local2);
*(&local1) = $tmp2333;
frost$core$String$Index $tmp2334 = *(&local1);
*(&local3) = $tmp2334;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1096
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1097
frost$core$String$Index $tmp2335 = *(&local3);
frost$core$String$Index$nullable $tmp2336 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2335);
*(&local4) = $tmp2336;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1098
frost$core$String$Index$nullable $tmp2337 = *(&local4);
frost$core$Bit $tmp2338 = (frost$core$Bit) {!$tmp2337.nonnull};
bool $tmp2339 = $tmp2338.value;
if ($tmp2339) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1099
frost$core$MutableString* $tmp2340 = *(&local0);
frost$core$String$Index $tmp2341 = *(&local3);
frost$core$Bit $tmp2342 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2343 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2341, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2342);
frost$core$String* $tmp2344 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2343);
frost$core$MutableString$append$frost$core$String($tmp2340, $tmp2344);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1100
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1106
frost$core$MutableString* $tmp2345 = *(&local0);
frost$core$String* $tmp2346 = frost$core$MutableString$finish$R$frost$core$String($tmp2345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$MutableString* $tmp2347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2346;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1102
frost$core$MutableString* $tmp2348 = *(&local0);
frost$core$String$Index $tmp2349 = *(&local3);
frost$core$String$Index$nullable $tmp2350 = *(&local4);
frost$core$Bit $tmp2351 = (frost$core$Bit) {$tmp2350.nonnull};
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2353 = (frost$core$Int) {1102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2354, $tmp2353, &$s2355);
abort(); // unreachable
block9:;
frost$core$Bit $tmp2356 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp2357 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2349, ((frost$core$String$Index) $tmp2350.value), $tmp2356);
frost$core$String* $tmp2358 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2357);
frost$core$MutableString$append$frost$core$String($tmp2348, $tmp2358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1103
frost$core$MutableString* $tmp2359 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2359, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1104
frost$core$String$Index$nullable $tmp2360 = *(&local4);
frost$core$Int $tmp2361 = ((frost$core$String$Index) $tmp2360.value).value;
frost$core$Int* $tmp2362 = &param1->_length;
frost$core$Int $tmp2363 = *$tmp2362;
int64_t $tmp2364 = $tmp2361.value;
int64_t $tmp2365 = $tmp2363.value;
int64_t $tmp2366 = $tmp2364 + $tmp2365;
frost$core$Int $tmp2367 = (frost$core$Int) {$tmp2366};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1104:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2368 = &(&local6)->value;
*$tmp2368 = $tmp2367;
frost$core$String$Index $tmp2369 = *(&local6);
*(&local5) = $tmp2369;
frost$core$String$Index $tmp2370 = *(&local5);
*(&local3) = $tmp2370;
goto block5;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
frost$core$Bit $tmp2371 = (frost$core$Bit) {true};
frost$core$String* $tmp2372 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
return $tmp2372;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1125
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2373 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2373);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
frost$core$MutableString* $tmp2374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local0) = $tmp2373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1126
frost$core$Matcher* $tmp2375 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
frost$core$Matcher* $tmp2376 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local1) = $tmp2375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1127
goto block1;
block1:;
frost$core$Matcher* $tmp2377 = *(&local1);
frost$core$Bit $tmp2378 = frost$core$Matcher$find$R$frost$core$Bit($tmp2377);
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1128
frost$core$Matcher* $tmp2380 = *(&local1);
frost$core$MutableString* $tmp2381 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2380, $tmp2381, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1130
frost$core$Matcher* $tmp2382 = *(&local1);
frost$core$MutableString* $tmp2383 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1130:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2384 = &$tmp2382->searchText;
frost$core$String* $tmp2385 = *$tmp2384;
frost$core$String$Index* $tmp2386 = &$tmp2382->replacementIndex;
frost$core$String$Index $tmp2387 = *$tmp2386;
frost$core$Bit $tmp2388 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2389 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2387, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2388);
frost$core$String* $tmp2390 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2385, $tmp2389);
frost$core$MutableString$append$frost$core$String($tmp2383, $tmp2390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1131
frost$core$MutableString* $tmp2391 = *(&local0);
frost$core$String* $tmp2392 = frost$core$MutableString$finish$R$frost$core$String($tmp2391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Matcher* $tmp2393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2394 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2392;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1152
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2395 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2395);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
frost$core$MutableString* $tmp2396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local0) = $tmp2395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1153
frost$core$Matcher* $tmp2397 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$core$Matcher* $tmp2398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local1) = $tmp2397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1154
goto block1;
block1:;
frost$core$Matcher* $tmp2399 = *(&local1);
frost$core$Bit $tmp2400 = frost$core$Matcher$find$R$frost$core$Bit($tmp2399);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1155
frost$core$Matcher* $tmp2402 = *(&local1);
frost$core$MutableString* $tmp2403 = *(&local0);
frost$core$Matcher* $tmp2404 = *(&local1);
frost$core$Int $tmp2405 = (frost$core$Int) {0u};
frost$core$String* $tmp2406 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2404, $tmp2405);
frost$core$Int8** $tmp2407 = &param2->pointer;
frost$core$Int8* $tmp2408 = *$tmp2407;
frost$core$Object** $tmp2409 = &param2->target;
frost$core$Object* $tmp2410 = *$tmp2409;
bool $tmp2411 = $tmp2410 != ((frost$core$Object*) NULL);
if ($tmp2411) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2413 = (($fn2412) $tmp2408)($tmp2406);
*(&local2) = $tmp2413;
goto block6;
block4:;
frost$core$Object* $tmp2415 = (($fn2414) $tmp2408)($tmp2410, $tmp2406);
*(&local2) = $tmp2415;
goto block6;
block6:;
frost$core$Object* $tmp2416 = *(&local2);
$fn2418 $tmp2417 = ($fn2418) $tmp2416->$class->vtable[0];
frost$core$String* $tmp2419 = $tmp2417($tmp2416);
frost$core$Bit $tmp2420 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2402, $tmp2403, $tmp2419, $tmp2420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
frost$core$Frost$unref$frost$core$Object$Q($tmp2416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1157
frost$core$Matcher* $tmp2421 = *(&local1);
frost$core$MutableString* $tmp2422 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1157:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2423 = &$tmp2421->searchText;
frost$core$String* $tmp2424 = *$tmp2423;
frost$core$String$Index* $tmp2425 = &$tmp2421->replacementIndex;
frost$core$String$Index $tmp2426 = *$tmp2425;
frost$core$Bit $tmp2427 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2428 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2426, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2427);
frost$core$String* $tmp2429 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2424, $tmp2428);
frost$core$MutableString$append$frost$core$String($tmp2422, $tmp2429);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1158
frost$core$MutableString* $tmp2430 = *(&local0);
$fn2432 $tmp2431 = ($fn2432) ((frost$core$Object*) $tmp2430)->$class->vtable[0];
frost$core$String* $tmp2433 = $tmp2431(((frost$core$Object*) $tmp2430));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
frost$core$Matcher* $tmp2434 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2435 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2433;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$Object* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1172
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2436 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2436);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
frost$core$MutableString* $tmp2437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
*(&local0) = $tmp2436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1173
frost$core$Matcher* $tmp2438 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
frost$core$Matcher* $tmp2439 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
*(&local1) = $tmp2438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1174
goto block1;
block1:;
frost$core$Matcher* $tmp2440 = *(&local1);
frost$core$Bit $tmp2441 = frost$core$Matcher$find$R$frost$core$Bit($tmp2440);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1175
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2443 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2443);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
frost$collections$Array* $tmp2444 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local2) = $tmp2443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1176
frost$core$Int $tmp2445 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp2446 = *(&local1);
frost$core$Int $tmp2447;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp2447, $tmp2446);
frost$core$Bit $tmp2448 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2449 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2445, $tmp2447, $tmp2448);
frost$core$Int $tmp2450 = $tmp2449.min;
*(&local3) = $tmp2450;
frost$core$Int $tmp2451 = $tmp2449.max;
frost$core$Bit $tmp2452 = $tmp2449.inclusive;
bool $tmp2453 = $tmp2452.value;
frost$core$Int $tmp2454 = (frost$core$Int) {1u};
if ($tmp2453) goto block7; else goto block8;
block7:;
int64_t $tmp2455 = $tmp2450.value;
int64_t $tmp2456 = $tmp2451.value;
bool $tmp2457 = $tmp2455 <= $tmp2456;
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block4; else goto block5;
block8:;
int64_t $tmp2460 = $tmp2450.value;
int64_t $tmp2461 = $tmp2451.value;
bool $tmp2462 = $tmp2460 < $tmp2461;
frost$core$Bit $tmp2463 = (frost$core$Bit) {$tmp2462};
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1177
frost$collections$Array* $tmp2465 = *(&local2);
frost$core$Matcher* $tmp2466 = *(&local1);
frost$core$Int $tmp2467 = *(&local3);
frost$core$String* $tmp2468 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2466, $tmp2467);
frost$collections$Array$add$frost$collections$Array$T($tmp2465, ((frost$core$Object*) $tmp2468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
frost$core$Int $tmp2469 = *(&local3);
int64_t $tmp2470 = $tmp2451.value;
int64_t $tmp2471 = $tmp2469.value;
int64_t $tmp2472 = $tmp2470 - $tmp2471;
frost$core$Int $tmp2473 = (frost$core$Int) {$tmp2472};
if ($tmp2453) goto block10; else goto block11;
block10:;
int64_t $tmp2474 = $tmp2473.value;
int64_t $tmp2475 = $tmp2454.value;
bool $tmp2476 = $tmp2474 >= $tmp2475;
frost$core$Bit $tmp2477 = (frost$core$Bit) {$tmp2476};
bool $tmp2478 = $tmp2477.value;
if ($tmp2478) goto block9; else goto block5;
block11:;
int64_t $tmp2479 = $tmp2473.value;
int64_t $tmp2480 = $tmp2454.value;
bool $tmp2481 = $tmp2479 > $tmp2480;
frost$core$Bit $tmp2482 = (frost$core$Bit) {$tmp2481};
bool $tmp2483 = $tmp2482.value;
if ($tmp2483) goto block9; else goto block5;
block9:;
int64_t $tmp2484 = $tmp2469.value;
int64_t $tmp2485 = $tmp2454.value;
int64_t $tmp2486 = $tmp2484 + $tmp2485;
frost$core$Int $tmp2487 = (frost$core$Int) {$tmp2486};
*(&local3) = $tmp2487;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1179
frost$core$Matcher* $tmp2488 = *(&local1);
frost$core$MutableString* $tmp2489 = *(&local0);
frost$collections$Array* $tmp2490 = *(&local2);
frost$core$Int8** $tmp2491 = &param2->pointer;
frost$core$Int8* $tmp2492 = *$tmp2491;
frost$core$Object** $tmp2493 = &param2->target;
frost$core$Object* $tmp2494 = *$tmp2493;
bool $tmp2495 = $tmp2494 != ((frost$core$Object*) NULL);
if ($tmp2495) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2497 = (($fn2496) $tmp2492)(((frost$collections$ListView*) $tmp2490));
*(&local4) = $tmp2497;
goto block14;
block12:;
frost$core$Object* $tmp2499 = (($fn2498) $tmp2492)($tmp2494, ((frost$collections$ListView*) $tmp2490));
*(&local4) = $tmp2499;
goto block14;
block14:;
frost$core$Object* $tmp2500 = *(&local4);
$fn2502 $tmp2501 = ($fn2502) $tmp2500->$class->vtable[0];
frost$core$String* $tmp2503 = $tmp2501($tmp2500);
frost$core$Bit $tmp2504 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2488, $tmp2489, $tmp2503, $tmp2504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$Frost$unref$frost$core$Object$Q($tmp2500);
frost$collections$Array* $tmp2505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1181
frost$core$Matcher* $tmp2506 = *(&local1);
frost$core$MutableString* $tmp2507 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1181:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2508 = &$tmp2506->searchText;
frost$core$String* $tmp2509 = *$tmp2508;
frost$core$String$Index* $tmp2510 = &$tmp2506->replacementIndex;
frost$core$String$Index $tmp2511 = *$tmp2510;
frost$core$Bit $tmp2512 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2513 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2511, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2512);
frost$core$String* $tmp2514 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2509, $tmp2513);
frost$core$MutableString$append$frost$core$String($tmp2507, $tmp2514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1182
frost$core$MutableString* $tmp2515 = *(&local0);
$fn2517 $tmp2516 = ($fn2517) ((frost$core$Object*) $tmp2515)->$class->vtable[0];
frost$core$String* $tmp2518 = $tmp2516(((frost$core$Object*) $tmp2515));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
frost$core$Matcher* $tmp2519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2518;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
frost$core$Bit $tmp2521 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2522 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2522, param0, param1, $tmp2521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2522)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2522)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2522)));
return ((frost$collections$Iterator*) $tmp2522);

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2523 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2523, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2523)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
return ((frost$collections$Iterator*) $tmp2523);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1194
frost$core$Bit $tmp2524 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.RegularExpression, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Match> from String.frost:1194:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2525 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2525, param0, param1, $tmp2524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2525)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2525)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2525)));
return ((frost$collections$Iterator*) $tmp2525);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2526 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2526, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
return ((frost$collections$Iterator*) $tmp2526);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2527 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2528 = &(&local1)->value;
*$tmp2528 = $tmp2527;
frost$core$String$Index $tmp2529 = *(&local1);
*(&local0) = $tmp2529;
frost$core$String$Index $tmp2530 = *(&local0);
return $tmp2530;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp2531 = &param0->_length;
frost$core$Int $tmp2532 = *$tmp2531;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2533 = &(&local1)->value;
*$tmp2533 = $tmp2532;
frost$core$String$Index $tmp2534 = *(&local1);
*(&local0) = $tmp2534;
frost$core$String$Index $tmp2535 = *(&local0);
return $tmp2535;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1222
frost$core$Int $tmp2536 = param1.value;
frost$core$Int* $tmp2537 = &param0->_length;
frost$core$Int $tmp2538 = *$tmp2537;
int64_t $tmp2539 = $tmp2536.value;
int64_t $tmp2540 = $tmp2538.value;
bool $tmp2541 = $tmp2539 < $tmp2540;
frost$core$Bit $tmp2542 = (frost$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2544 = (frost$core$Int) {1222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2545, $tmp2544);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1223
frost$core$Char8** $tmp2546 = &param0->data;
frost$core$Char8* $tmp2547 = *$tmp2546;
frost$core$Int $tmp2548 = param1.value;
frost$core$Int64 $tmp2549 = frost$core$Int64$init$frost$core$Int($tmp2548);
int64_t $tmp2550 = $tmp2549.value;
frost$core$Char8 $tmp2551 = $tmp2547[$tmp2550];
uint8_t $tmp2552 = $tmp2551.value;
int64_t $tmp2553 = ((int64_t) $tmp2552) & 255u;
*(&local0) = $tmp2553;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1224
int64_t $tmp2554 = *(&local0);
bool $tmp2555 = $tmp2554 >= 240u;
frost$core$Bit $tmp2556 = (frost$core$Bit) {$tmp2555};
bool $tmp2557 = $tmp2556.value;
if ($tmp2557) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1225
frost$core$Int $tmp2558 = param1.value;
frost$core$Int $tmp2559 = (frost$core$Int) {4u};
int64_t $tmp2560 = $tmp2558.value;
int64_t $tmp2561 = $tmp2559.value;
int64_t $tmp2562 = $tmp2560 + $tmp2561;
frost$core$Int $tmp2563 = (frost$core$Int) {$tmp2562};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1225:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2564 = &(&local2)->value;
*$tmp2564 = $tmp2563;
frost$core$String$Index $tmp2565 = *(&local2);
*(&local1) = $tmp2565;
frost$core$String$Index $tmp2566 = *(&local1);
return $tmp2566;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1227
int64_t $tmp2567 = *(&local0);
bool $tmp2568 = $tmp2567 >= 224u;
frost$core$Bit $tmp2569 = (frost$core$Bit) {$tmp2568};
bool $tmp2570 = $tmp2569.value;
if ($tmp2570) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1228
frost$core$Int $tmp2571 = param1.value;
frost$core$Int $tmp2572 = (frost$core$Int) {3u};
int64_t $tmp2573 = $tmp2571.value;
int64_t $tmp2574 = $tmp2572.value;
int64_t $tmp2575 = $tmp2573 + $tmp2574;
frost$core$Int $tmp2576 = (frost$core$Int) {$tmp2575};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1228:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2577 = &(&local4)->value;
*$tmp2577 = $tmp2576;
frost$core$String$Index $tmp2578 = *(&local4);
*(&local3) = $tmp2578;
frost$core$String$Index $tmp2579 = *(&local3);
return $tmp2579;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1230
int64_t $tmp2580 = *(&local0);
bool $tmp2581 = $tmp2580 >= 192u;
frost$core$Bit $tmp2582 = (frost$core$Bit) {$tmp2581};
bool $tmp2583 = $tmp2582.value;
if ($tmp2583) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1231
frost$core$Int $tmp2584 = param1.value;
frost$core$Int $tmp2585 = (frost$core$Int) {2u};
int64_t $tmp2586 = $tmp2584.value;
int64_t $tmp2587 = $tmp2585.value;
int64_t $tmp2588 = $tmp2586 + $tmp2587;
frost$core$Int $tmp2589 = (frost$core$Int) {$tmp2588};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1231:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2590 = &(&local6)->value;
*$tmp2590 = $tmp2589;
frost$core$String$Index $tmp2591 = *(&local6);
*(&local5) = $tmp2591;
frost$core$String$Index $tmp2592 = *(&local5);
return $tmp2592;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1233
frost$core$Int $tmp2593 = param1.value;
frost$core$Int $tmp2594 = (frost$core$Int) {1u};
int64_t $tmp2595 = $tmp2593.value;
int64_t $tmp2596 = $tmp2594.value;
int64_t $tmp2597 = $tmp2595 + $tmp2596;
frost$core$Int $tmp2598 = (frost$core$Int) {$tmp2597};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1233:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2599 = &(&local8)->value;
*$tmp2599 = $tmp2598;
frost$core$String$Index $tmp2600 = *(&local8);
*(&local7) = $tmp2600;
frost$core$String$Index $tmp2601 = *(&local7);
return $tmp2601;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1243
frost$core$Int $tmp2602 = param1.value;
frost$core$Int $tmp2603 = (frost$core$Int) {0u};
int64_t $tmp2604 = $tmp2602.value;
int64_t $tmp2605 = $tmp2603.value;
bool $tmp2606 = $tmp2604 > $tmp2605;
frost$core$Bit $tmp2607 = (frost$core$Bit) {$tmp2606};
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2609 = (frost$core$Int) {1243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2610, $tmp2609);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1244
frost$core$Int $tmp2611 = param1.value;
frost$core$Int $tmp2612 = (frost$core$Int) {1u};
int64_t $tmp2613 = $tmp2611.value;
int64_t $tmp2614 = $tmp2612.value;
int64_t $tmp2615 = $tmp2613 - $tmp2614;
frost$core$Int $tmp2616 = (frost$core$Int) {$tmp2615};
*(&local0) = $tmp2616;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1245
goto block3;
block3:;
frost$core$Char8** $tmp2617 = &param0->data;
frost$core$Char8* $tmp2618 = *$tmp2617;
frost$core$Int $tmp2619 = *(&local0);
frost$core$Int64 $tmp2620 = frost$core$Int64$init$frost$core$Int($tmp2619);
int64_t $tmp2621 = $tmp2620.value;
frost$core$Char8 $tmp2622 = $tmp2618[$tmp2621];
uint8_t $tmp2623 = $tmp2622.value;
int64_t $tmp2624 = ((int64_t) $tmp2623) & 255u;
bool $tmp2625 = $tmp2624 >= 128u;
frost$core$Bit $tmp2626 = (frost$core$Bit) {$tmp2625};
bool $tmp2627 = $tmp2626.value;
if ($tmp2627) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp2628 = &param0->data;
frost$core$Char8* $tmp2629 = *$tmp2628;
frost$core$Int $tmp2630 = *(&local0);
frost$core$Int64 $tmp2631 = frost$core$Int64$init$frost$core$Int($tmp2630);
int64_t $tmp2632 = $tmp2631.value;
frost$core$Char8 $tmp2633 = $tmp2629[$tmp2632];
uint8_t $tmp2634 = $tmp2633.value;
int64_t $tmp2635 = ((int64_t) $tmp2634) & 255u;
bool $tmp2636 = $tmp2635 < 192u;
frost$core$Bit $tmp2637 = (frost$core$Bit) {$tmp2636};
bool $tmp2638 = $tmp2637.value;
if ($tmp2638) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1247
frost$core$Int $tmp2639 = *(&local0);
frost$core$Int $tmp2640 = (frost$core$Int) {1u};
int64_t $tmp2641 = $tmp2639.value;
int64_t $tmp2642 = $tmp2640.value;
int64_t $tmp2643 = $tmp2641 - $tmp2642;
frost$core$Int $tmp2644 = (frost$core$Int) {$tmp2643};
*(&local0) = $tmp2644;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1249
frost$core$Int $tmp2645 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1249:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2646 = &(&local2)->value;
*$tmp2646 = $tmp2645;
frost$core$String$Index $tmp2647 = *(&local2);
*(&local1) = $tmp2647;
frost$core$String$Index $tmp2648 = *(&local1);
return $tmp2648;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int param2) {

frost$core$String$Index local0;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1259
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1260
frost$core$Int $tmp2649 = (frost$core$Int) {0u};
int64_t $tmp2650 = param2.value;
int64_t $tmp2651 = $tmp2649.value;
bool $tmp2652 = $tmp2650 > $tmp2651;
frost$core$Bit $tmp2653 = (frost$core$Bit) {$tmp2652};
bool $tmp2654 = $tmp2653.value;
if ($tmp2654) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1261
frost$core$Int $tmp2655 = (frost$core$Int) {0u};
frost$core$Bit $tmp2656 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2657 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2655, param2, $tmp2656);
frost$core$Int $tmp2658 = $tmp2657.min;
*(&local1) = $tmp2658;
frost$core$Int $tmp2659 = $tmp2657.max;
frost$core$Bit $tmp2660 = $tmp2657.inclusive;
bool $tmp2661 = $tmp2660.value;
frost$core$Int $tmp2662 = (frost$core$Int) {1u};
if ($tmp2661) goto block7; else goto block8;
block7:;
int64_t $tmp2663 = $tmp2658.value;
int64_t $tmp2664 = $tmp2659.value;
bool $tmp2665 = $tmp2663 <= $tmp2664;
frost$core$Bit $tmp2666 = (frost$core$Bit) {$tmp2665};
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block4; else goto block5;
block8:;
int64_t $tmp2668 = $tmp2658.value;
int64_t $tmp2669 = $tmp2659.value;
bool $tmp2670 = $tmp2668 < $tmp2669;
frost$core$Bit $tmp2671 = (frost$core$Bit) {$tmp2670};
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1262
frost$core$String$Index $tmp2673 = *(&local0);
frost$core$String$Index $tmp2674 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2673);
*(&local0) = $tmp2674;
frost$core$Int $tmp2675 = *(&local1);
int64_t $tmp2676 = $tmp2659.value;
int64_t $tmp2677 = $tmp2675.value;
int64_t $tmp2678 = $tmp2676 - $tmp2677;
frost$core$Int $tmp2679 = (frost$core$Int) {$tmp2678};
if ($tmp2661) goto block10; else goto block11;
block10:;
int64_t $tmp2680 = $tmp2679.value;
int64_t $tmp2681 = $tmp2662.value;
bool $tmp2682 = $tmp2680 >= $tmp2681;
frost$core$Bit $tmp2683 = (frost$core$Bit) {$tmp2682};
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block9; else goto block5;
block11:;
int64_t $tmp2685 = $tmp2679.value;
int64_t $tmp2686 = $tmp2662.value;
bool $tmp2687 = $tmp2685 > $tmp2686;
frost$core$Bit $tmp2688 = (frost$core$Bit) {$tmp2687};
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block9; else goto block5;
block9:;
int64_t $tmp2690 = $tmp2675.value;
int64_t $tmp2691 = $tmp2662.value;
int64_t $tmp2692 = $tmp2690 + $tmp2691;
frost$core$Int $tmp2693 = (frost$core$Int) {$tmp2692};
*(&local1) = $tmp2693;
goto block4;
block5:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1266
frost$core$Int $tmp2694 = (frost$core$Int) {0u};
frost$core$Int $tmp2695 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp2696 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp2697 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2694, param2, $tmp2695, $tmp2696);
frost$core$Int $tmp2698 = $tmp2697.start;
*(&local2) = $tmp2698;
frost$core$Int $tmp2699 = $tmp2697.end;
frost$core$Int $tmp2700 = $tmp2697.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1266:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp2701 = $tmp2700.value;
int64_t $tmp2702 = -$tmp2701;
frost$core$Int $tmp2703 = (frost$core$Int) {$tmp2702};
frost$core$Bit $tmp2704 = $tmp2697.inclusive;
bool $tmp2705 = $tmp2704.value;
frost$core$Int $tmp2706 = (frost$core$Int) {0u};
int64_t $tmp2707 = $tmp2700.value;
int64_t $tmp2708 = $tmp2706.value;
bool $tmp2709 = $tmp2707 >= $tmp2708;
frost$core$Bit $tmp2710 = (frost$core$Bit) {$tmp2709};
bool $tmp2711 = $tmp2710.value;
if ($tmp2711) goto block16; else goto block17;
block16:;
if ($tmp2705) goto block18; else goto block19;
block18:;
int64_t $tmp2712 = $tmp2698.value;
int64_t $tmp2713 = $tmp2699.value;
bool $tmp2714 = $tmp2712 <= $tmp2713;
frost$core$Bit $tmp2715 = (frost$core$Bit) {$tmp2714};
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block13; else goto block14;
block19:;
int64_t $tmp2717 = $tmp2698.value;
int64_t $tmp2718 = $tmp2699.value;
bool $tmp2719 = $tmp2717 < $tmp2718;
frost$core$Bit $tmp2720 = (frost$core$Bit) {$tmp2719};
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block13; else goto block14;
block17:;
if ($tmp2705) goto block20; else goto block21;
block20:;
int64_t $tmp2722 = $tmp2698.value;
int64_t $tmp2723 = $tmp2699.value;
bool $tmp2724 = $tmp2722 >= $tmp2723;
frost$core$Bit $tmp2725 = (frost$core$Bit) {$tmp2724};
bool $tmp2726 = $tmp2725.value;
if ($tmp2726) goto block13; else goto block14;
block21:;
int64_t $tmp2727 = $tmp2698.value;
int64_t $tmp2728 = $tmp2699.value;
bool $tmp2729 = $tmp2727 > $tmp2728;
frost$core$Bit $tmp2730 = (frost$core$Bit) {$tmp2729};
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1267
frost$core$String$Index $tmp2732 = *(&local0);
frost$core$String$Index $tmp2733 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2732);
*(&local0) = $tmp2733;
frost$core$Int $tmp2734 = *(&local2);
if ($tmp2711) goto block23; else goto block24;
block23:;
int64_t $tmp2735 = $tmp2699.value;
int64_t $tmp2736 = $tmp2734.value;
int64_t $tmp2737 = $tmp2735 - $tmp2736;
frost$core$Int $tmp2738 = (frost$core$Int) {$tmp2737};
if ($tmp2705) goto block25; else goto block26;
block25:;
int64_t $tmp2739 = $tmp2738.value;
int64_t $tmp2740 = $tmp2700.value;
bool $tmp2741 = $tmp2739 >= $tmp2740;
frost$core$Bit $tmp2742 = (frost$core$Bit) {$tmp2741};
bool $tmp2743 = $tmp2742.value;
if ($tmp2743) goto block22; else goto block14;
block26:;
int64_t $tmp2744 = $tmp2738.value;
int64_t $tmp2745 = $tmp2700.value;
bool $tmp2746 = $tmp2744 > $tmp2745;
frost$core$Bit $tmp2747 = (frost$core$Bit) {$tmp2746};
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block22; else goto block14;
block24:;
int64_t $tmp2749 = $tmp2734.value;
int64_t $tmp2750 = $tmp2699.value;
int64_t $tmp2751 = $tmp2749 - $tmp2750;
frost$core$Int $tmp2752 = (frost$core$Int) {$tmp2751};
if ($tmp2705) goto block27; else goto block28;
block27:;
int64_t $tmp2753 = $tmp2752.value;
int64_t $tmp2754 = $tmp2703.value;
bool $tmp2755 = $tmp2753 >= $tmp2754;
frost$core$Bit $tmp2756 = (frost$core$Bit) {$tmp2755};
bool $tmp2757 = $tmp2756.value;
if ($tmp2757) goto block22; else goto block14;
block28:;
int64_t $tmp2758 = $tmp2752.value;
int64_t $tmp2759 = $tmp2703.value;
bool $tmp2760 = $tmp2758 > $tmp2759;
frost$core$Bit $tmp2761 = (frost$core$Bit) {$tmp2760};
bool $tmp2762 = $tmp2761.value;
if ($tmp2762) goto block22; else goto block14;
block22:;
int64_t $tmp2763 = $tmp2734.value;
int64_t $tmp2764 = $tmp2700.value;
int64_t $tmp2765 = $tmp2763 + $tmp2764;
frost$core$Int $tmp2766 = (frost$core$Int) {$tmp2765};
*(&local2) = $tmp2766;
goto block13;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1270
frost$core$String$Index $tmp2767 = *(&local0);
return $tmp2767;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1283
frost$core$Int32 $tmp2768 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2769 = frost$core$Char32$init$frost$core$Int32($tmp2768);
frost$core$String* $tmp2770 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
return $tmp2770;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1297
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1297:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2771 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2771->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2771 = $tmp2771->next;
}
$fn2773 $tmp2772 = $tmp2771->methods[0];
frost$collections$Iterator* $tmp2774 = $tmp2772(((frost$collections$Iterable*) param0));
ITable* $tmp2775 = $tmp2774->$class->itable;
while ($tmp2775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2775 = $tmp2775->next;
}
$fn2777 $tmp2776 = $tmp2775->methods[2];
frost$core$Int $tmp2778 = $tmp2776($tmp2774);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
int64_t $tmp2779 = $tmp2778.value;
int64_t $tmp2780 = param1.value;
bool $tmp2781 = $tmp2779 >= $tmp2780;
frost$core$Bit $tmp2782 = (frost$core$Bit) {$tmp2781};
bool $tmp2783 = $tmp2782.value;
if ($tmp2783) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1300
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1300:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2784 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2784->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2784 = $tmp2784->next;
}
$fn2786 $tmp2785 = $tmp2784->methods[0];
frost$collections$Iterator* $tmp2787 = $tmp2785(((frost$collections$Iterable*) param0));
ITable* $tmp2788 = $tmp2787->$class->itable;
while ($tmp2788->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2788 = $tmp2788->next;
}
$fn2790 $tmp2789 = $tmp2788->methods[2];
frost$core$Int $tmp2791 = $tmp2789($tmp2787);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
int64_t $tmp2792 = param1.value;
int64_t $tmp2793 = $tmp2791.value;
int64_t $tmp2794 = $tmp2792 - $tmp2793;
frost$core$Int $tmp2795 = (frost$core$Int) {$tmp2794};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1300:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2796 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2796);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$MutableString* $tmp2797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local0) = $tmp2796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp2798 = (frost$core$Int) {0u};
frost$core$Bit $tmp2799 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2800 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2798, $tmp2795, $tmp2799);
frost$core$Int $tmp2801 = $tmp2800.min;
*(&local1) = $tmp2801;
frost$core$Int $tmp2802 = $tmp2800.max;
frost$core$Bit $tmp2803 = $tmp2800.inclusive;
bool $tmp2804 = $tmp2803.value;
frost$core$Int $tmp2805 = (frost$core$Int) {1u};
if ($tmp2804) goto block9; else goto block10;
block9:;
int64_t $tmp2806 = $tmp2801.value;
int64_t $tmp2807 = $tmp2802.value;
bool $tmp2808 = $tmp2806 <= $tmp2807;
frost$core$Bit $tmp2809 = (frost$core$Bit) {$tmp2808};
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block6; else goto block7;
block10:;
int64_t $tmp2811 = $tmp2801.value;
int64_t $tmp2812 = $tmp2802.value;
bool $tmp2813 = $tmp2811 < $tmp2812;
frost$core$Bit $tmp2814 = (frost$core$Bit) {$tmp2813};
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2816 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2816, param2);
frost$core$Int $tmp2817 = *(&local1);
int64_t $tmp2818 = $tmp2802.value;
int64_t $tmp2819 = $tmp2817.value;
int64_t $tmp2820 = $tmp2818 - $tmp2819;
frost$core$Int $tmp2821 = (frost$core$Int) {$tmp2820};
if ($tmp2804) goto block12; else goto block13;
block12:;
int64_t $tmp2822 = $tmp2821.value;
int64_t $tmp2823 = $tmp2805.value;
bool $tmp2824 = $tmp2822 >= $tmp2823;
frost$core$Bit $tmp2825 = (frost$core$Bit) {$tmp2824};
bool $tmp2826 = $tmp2825.value;
if ($tmp2826) goto block11; else goto block7;
block13:;
int64_t $tmp2827 = $tmp2821.value;
int64_t $tmp2828 = $tmp2805.value;
bool $tmp2829 = $tmp2827 > $tmp2828;
frost$core$Bit $tmp2830 = (frost$core$Bit) {$tmp2829};
bool $tmp2831 = $tmp2830.value;
if ($tmp2831) goto block11; else goto block7;
block11:;
int64_t $tmp2832 = $tmp2817.value;
int64_t $tmp2833 = $tmp2805.value;
int64_t $tmp2834 = $tmp2832 + $tmp2833;
frost$core$Int $tmp2835 = (frost$core$Int) {$tmp2834};
*(&local1) = $tmp2835;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2836 = *(&local0);
frost$core$String* $tmp2837 = frost$core$MutableString$finish$R$frost$core$String($tmp2836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$MutableString* $tmp2838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
return $tmp2839;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1313
frost$core$Int32 $tmp2840 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2841 = frost$core$Char32$init$frost$core$Int32($tmp2840);
frost$core$String* $tmp2842 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
return $tmp2842;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1327
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1327:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2843 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2843->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2843 = $tmp2843->next;
}
$fn2845 $tmp2844 = $tmp2843->methods[0];
frost$collections$Iterator* $tmp2846 = $tmp2844(((frost$collections$Iterable*) param0));
ITable* $tmp2847 = $tmp2846->$class->itable;
while ($tmp2847->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2847 = $tmp2847->next;
}
$fn2849 $tmp2848 = $tmp2847->methods[2];
frost$core$Int $tmp2850 = $tmp2848($tmp2846);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
int64_t $tmp2851 = $tmp2850.value;
int64_t $tmp2852 = param1.value;
bool $tmp2853 = $tmp2851 >= $tmp2852;
frost$core$Bit $tmp2854 = (frost$core$Bit) {$tmp2853};
bool $tmp2855 = $tmp2854.value;
if ($tmp2855) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1330
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1330:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2856 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2856->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2856 = $tmp2856->next;
}
$fn2858 $tmp2857 = $tmp2856->methods[0];
frost$collections$Iterator* $tmp2859 = $tmp2857(((frost$collections$Iterable*) param0));
ITable* $tmp2860 = $tmp2859->$class->itable;
while ($tmp2860->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2860 = $tmp2860->next;
}
$fn2862 $tmp2861 = $tmp2860->methods[2];
frost$core$Int $tmp2863 = $tmp2861($tmp2859);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
int64_t $tmp2864 = param1.value;
int64_t $tmp2865 = $tmp2863.value;
int64_t $tmp2866 = $tmp2864 - $tmp2865;
frost$core$Int $tmp2867 = (frost$core$Int) {$tmp2866};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1330:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2868 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2868);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
frost$core$MutableString* $tmp2869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local0) = $tmp2868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp2870 = (frost$core$Int) {0u};
frost$core$Bit $tmp2871 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2872 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2870, $tmp2867, $tmp2871);
frost$core$Int $tmp2873 = $tmp2872.min;
*(&local1) = $tmp2873;
frost$core$Int $tmp2874 = $tmp2872.max;
frost$core$Bit $tmp2875 = $tmp2872.inclusive;
bool $tmp2876 = $tmp2875.value;
frost$core$Int $tmp2877 = (frost$core$Int) {1u};
if ($tmp2876) goto block9; else goto block10;
block9:;
int64_t $tmp2878 = $tmp2873.value;
int64_t $tmp2879 = $tmp2874.value;
bool $tmp2880 = $tmp2878 <= $tmp2879;
frost$core$Bit $tmp2881 = (frost$core$Bit) {$tmp2880};
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block6; else goto block7;
block10:;
int64_t $tmp2883 = $tmp2873.value;
int64_t $tmp2884 = $tmp2874.value;
bool $tmp2885 = $tmp2883 < $tmp2884;
frost$core$Bit $tmp2886 = (frost$core$Bit) {$tmp2885};
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2888 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2888, param2);
frost$core$Int $tmp2889 = *(&local1);
int64_t $tmp2890 = $tmp2874.value;
int64_t $tmp2891 = $tmp2889.value;
int64_t $tmp2892 = $tmp2890 - $tmp2891;
frost$core$Int $tmp2893 = (frost$core$Int) {$tmp2892};
if ($tmp2876) goto block12; else goto block13;
block12:;
int64_t $tmp2894 = $tmp2893.value;
int64_t $tmp2895 = $tmp2877.value;
bool $tmp2896 = $tmp2894 >= $tmp2895;
frost$core$Bit $tmp2897 = (frost$core$Bit) {$tmp2896};
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block11; else goto block7;
block13:;
int64_t $tmp2899 = $tmp2893.value;
int64_t $tmp2900 = $tmp2877.value;
bool $tmp2901 = $tmp2899 > $tmp2900;
frost$core$Bit $tmp2902 = (frost$core$Bit) {$tmp2901};
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block11; else goto block7;
block11:;
int64_t $tmp2904 = $tmp2889.value;
int64_t $tmp2905 = $tmp2877.value;
int64_t $tmp2906 = $tmp2904 + $tmp2905;
frost$core$Int $tmp2907 = (frost$core$Int) {$tmp2906};
*(&local1) = $tmp2907;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2908 = *(&local0);
frost$core$String* $tmp2909 = frost$core$MutableString$finish$R$frost$core$String($tmp2908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$core$MutableString* $tmp2910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2911 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2909, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
return $tmp2911;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1345
frost$core$Int32 $tmp2912 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2913 = frost$core$Char32$init$frost$core$Int32($tmp2912);
frost$core$String* $tmp2914 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
return $tmp2914;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$MutableString* local3 = NULL;
frost$core$Int local4;
frost$core$MutableString* local5 = NULL;
frost$core$Int local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1361
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1361:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2915 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2915->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2915 = $tmp2915->next;
}
$fn2917 $tmp2916 = $tmp2915->methods[0];
frost$collections$Iterator* $tmp2918 = $tmp2916(((frost$collections$Iterable*) param0));
ITable* $tmp2919 = $tmp2918->$class->itable;
while ($tmp2919->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2919 = $tmp2919->next;
}
$fn2921 $tmp2920 = $tmp2919->methods[2];
frost$core$Int $tmp2922 = $tmp2920($tmp2918);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
int64_t $tmp2923 = $tmp2922.value;
int64_t $tmp2924 = param1.value;
bool $tmp2925 = $tmp2923 >= $tmp2924;
frost$core$Bit $tmp2926 = (frost$core$Bit) {$tmp2925};
bool $tmp2927 = $tmp2926.value;
if ($tmp2927) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1364
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1364:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2928 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2928->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2928 = $tmp2928->next;
}
$fn2930 $tmp2929 = $tmp2928->methods[0];
frost$collections$Iterator* $tmp2931 = $tmp2929(((frost$collections$Iterable*) param0));
ITable* $tmp2932 = $tmp2931->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[2];
frost$core$Int $tmp2935 = $tmp2933($tmp2931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
int64_t $tmp2936 = param1.value;
int64_t $tmp2937 = $tmp2935.value;
int64_t $tmp2938 = $tmp2936 - $tmp2937;
frost$core$Int $tmp2939 = (frost$core$Int) {$tmp2938};
*(&local0) = $tmp2939;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1365
frost$core$Int $tmp2940 = *(&local0);
frost$core$Int $tmp2941 = (frost$core$Int) {2u};
int64_t $tmp2942 = $tmp2940.value;
int64_t $tmp2943 = $tmp2941.value;
int64_t $tmp2944 = $tmp2942 / $tmp2943;
frost$core$Int $tmp2945 = (frost$core$Int) {$tmp2944};
*(&local1) = $tmp2945;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1366
frost$core$Int $tmp2946 = *(&local0);
frost$core$Int $tmp2947 = *(&local1);
int64_t $tmp2948 = $tmp2946.value;
int64_t $tmp2949 = $tmp2947.value;
int64_t $tmp2950 = $tmp2948 - $tmp2949;
frost$core$Int $tmp2951 = (frost$core$Int) {$tmp2950};
*(&local2) = $tmp2951;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1367
frost$core$Int $tmp2952 = *(&local1);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2953 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2953);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$MutableString* $tmp2954 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local3) = $tmp2953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp2955 = (frost$core$Int) {0u};
frost$core$Bit $tmp2956 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2957 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2955, $tmp2952, $tmp2956);
frost$core$Int $tmp2958 = $tmp2957.min;
*(&local4) = $tmp2958;
frost$core$Int $tmp2959 = $tmp2957.max;
frost$core$Bit $tmp2960 = $tmp2957.inclusive;
bool $tmp2961 = $tmp2960.value;
frost$core$Int $tmp2962 = (frost$core$Int) {1u};
if ($tmp2961) goto block9; else goto block10;
block9:;
int64_t $tmp2963 = $tmp2958.value;
int64_t $tmp2964 = $tmp2959.value;
bool $tmp2965 = $tmp2963 <= $tmp2964;
frost$core$Bit $tmp2966 = (frost$core$Bit) {$tmp2965};
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block6; else goto block7;
block10:;
int64_t $tmp2968 = $tmp2958.value;
int64_t $tmp2969 = $tmp2959.value;
bool $tmp2970 = $tmp2968 < $tmp2969;
frost$core$Bit $tmp2971 = (frost$core$Bit) {$tmp2970};
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2973 = *(&local3);
frost$core$MutableString$append$frost$core$Char32($tmp2973, param2);
frost$core$Int $tmp2974 = *(&local4);
int64_t $tmp2975 = $tmp2959.value;
int64_t $tmp2976 = $tmp2974.value;
int64_t $tmp2977 = $tmp2975 - $tmp2976;
frost$core$Int $tmp2978 = (frost$core$Int) {$tmp2977};
if ($tmp2961) goto block12; else goto block13;
block12:;
int64_t $tmp2979 = $tmp2978.value;
int64_t $tmp2980 = $tmp2962.value;
bool $tmp2981 = $tmp2979 >= $tmp2980;
frost$core$Bit $tmp2982 = (frost$core$Bit) {$tmp2981};
bool $tmp2983 = $tmp2982.value;
if ($tmp2983) goto block11; else goto block7;
block13:;
int64_t $tmp2984 = $tmp2978.value;
int64_t $tmp2985 = $tmp2962.value;
bool $tmp2986 = $tmp2984 > $tmp2985;
frost$core$Bit $tmp2987 = (frost$core$Bit) {$tmp2986};
bool $tmp2988 = $tmp2987.value;
if ($tmp2988) goto block11; else goto block7;
block11:;
int64_t $tmp2989 = $tmp2974.value;
int64_t $tmp2990 = $tmp2962.value;
int64_t $tmp2991 = $tmp2989 + $tmp2990;
frost$core$Int $tmp2992 = (frost$core$Int) {$tmp2991};
*(&local4) = $tmp2992;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2993 = *(&local3);
frost$core$String* $tmp2994 = frost$core$MutableString$finish$R$frost$core$String($tmp2993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$MutableString* $tmp2995 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2996 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2994, param0);
frost$core$Int $tmp2997 = *(&local2);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2998 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2998);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$MutableString* $tmp2999 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local5) = $tmp2998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp3000 = (frost$core$Int) {0u};
frost$core$Bit $tmp3001 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3002 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3000, $tmp2997, $tmp3001);
frost$core$Int $tmp3003 = $tmp3002.min;
*(&local6) = $tmp3003;
frost$core$Int $tmp3004 = $tmp3002.max;
frost$core$Bit $tmp3005 = $tmp3002.inclusive;
bool $tmp3006 = $tmp3005.value;
frost$core$Int $tmp3007 = (frost$core$Int) {1u};
if ($tmp3006) goto block18; else goto block19;
block18:;
int64_t $tmp3008 = $tmp3003.value;
int64_t $tmp3009 = $tmp3004.value;
bool $tmp3010 = $tmp3008 <= $tmp3009;
frost$core$Bit $tmp3011 = (frost$core$Bit) {$tmp3010};
bool $tmp3012 = $tmp3011.value;
if ($tmp3012) goto block15; else goto block16;
block19:;
int64_t $tmp3013 = $tmp3003.value;
int64_t $tmp3014 = $tmp3004.value;
bool $tmp3015 = $tmp3013 < $tmp3014;
frost$core$Bit $tmp3016 = (frost$core$Bit) {$tmp3015};
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp3018 = *(&local5);
frost$core$MutableString$append$frost$core$Char32($tmp3018, param2);
frost$core$Int $tmp3019 = *(&local6);
int64_t $tmp3020 = $tmp3004.value;
int64_t $tmp3021 = $tmp3019.value;
int64_t $tmp3022 = $tmp3020 - $tmp3021;
frost$core$Int $tmp3023 = (frost$core$Int) {$tmp3022};
if ($tmp3006) goto block21; else goto block22;
block21:;
int64_t $tmp3024 = $tmp3023.value;
int64_t $tmp3025 = $tmp3007.value;
bool $tmp3026 = $tmp3024 >= $tmp3025;
frost$core$Bit $tmp3027 = (frost$core$Bit) {$tmp3026};
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block20; else goto block16;
block22:;
int64_t $tmp3029 = $tmp3023.value;
int64_t $tmp3030 = $tmp3007.value;
bool $tmp3031 = $tmp3029 > $tmp3030;
frost$core$Bit $tmp3032 = (frost$core$Bit) {$tmp3031};
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block20; else goto block16;
block20:;
int64_t $tmp3034 = $tmp3019.value;
int64_t $tmp3035 = $tmp3007.value;
int64_t $tmp3036 = $tmp3034 + $tmp3035;
frost$core$Int $tmp3037 = (frost$core$Int) {$tmp3036};
*(&local6) = $tmp3037;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp3038 = *(&local5);
frost$core$String* $tmp3039 = frost$core$MutableString$finish$R$frost$core$String($tmp3038);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
frost$core$MutableString* $tmp3040 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp3041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2996, $tmp3039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
return $tmp3041;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp3042 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3043 = $tmp3042.value;
frost$core$Int $tmp3044 = (frost$core$Int) {((int64_t) $tmp3043)};
frost$collections$Array* $tmp3045 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
return $tmp3045;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index$nullable local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1391
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3046 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3046);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
frost$collections$Array* $tmp3047 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
*(&local0) = $tmp3046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1392
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1392:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp3048 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3049 = &(&local2)->value;
*$tmp3049 = $tmp3048;
frost$core$String$Index $tmp3050 = *(&local2);
*(&local1) = $tmp3050;
frost$core$String$Index $tmp3051 = *(&local1);
*(&local3) = $tmp3051;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1393
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1394
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1395
frost$core$Int* $tmp3052 = &param1->_length;
frost$core$Int $tmp3053 = *$tmp3052;
frost$core$Int $tmp3054 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1395:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3055 = $tmp3053.value;
int64_t $tmp3056 = $tmp3054.value;
bool $tmp3057 = $tmp3055 == $tmp3056;
frost$core$Bit $tmp3058 = (frost$core$Bit) {$tmp3057};
bool $tmp3059 = $tmp3058.value;
if ($tmp3059) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1396
frost$core$String$Index $tmp3060 = *(&local3);
frost$core$String$Index $tmp3061 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp3060);
*(&local4) = ((frost$core$String$Index$nullable) { $tmp3061, true });
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1399
frost$core$String$Index $tmp3062 = *(&local3);
frost$core$String$Index$nullable $tmp3063 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp3062);
*(&local4) = $tmp3063;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1401
frost$core$String$Index$nullable $tmp3064 = *(&local4);
frost$core$Bit $tmp3065 = (frost$core$Bit) {!$tmp3064.nonnull};
bool $tmp3066 = $tmp3065.value;
if ($tmp3066) goto block9; else goto block11;
block11:;
frost$collections$Array* $tmp3067 = *(&local0);
ITable* $tmp3068 = ((frost$collections$CollectionView*) $tmp3067)->$class->itable;
while ($tmp3068->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3068 = $tmp3068->next;
}
$fn3070 $tmp3069 = $tmp3068->methods[0];
frost$core$Int $tmp3071 = $tmp3069(((frost$collections$CollectionView*) $tmp3067));
frost$core$Int $tmp3072 = (frost$core$Int) {1u};
int64_t $tmp3073 = param2.value;
int64_t $tmp3074 = $tmp3072.value;
int64_t $tmp3075 = $tmp3073 - $tmp3074;
frost$core$Int $tmp3076 = (frost$core$Int) {$tmp3075};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1401:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3077 = $tmp3071.value;
int64_t $tmp3078 = $tmp3076.value;
bool $tmp3079 = $tmp3077 == $tmp3078;
frost$core$Bit $tmp3080 = (frost$core$Bit) {$tmp3079};
bool $tmp3081 = $tmp3080.value;
if ($tmp3081) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1402
frost$collections$Array* $tmp3082 = *(&local0);
frost$core$String$Index $tmp3083 = *(&local3);
frost$core$Bit $tmp3084 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3085 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3083, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3084);
frost$core$String* $tmp3086 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3085);
frost$collections$Array$add$frost$collections$Array$T($tmp3082, ((frost$core$Object*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1403
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1408
frost$collections$Array* $tmp3087 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$collections$Array* $tmp3088 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3087;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1405
frost$collections$Array* $tmp3089 = *(&local0);
frost$core$String$Index $tmp3090 = *(&local3);
frost$core$String$Index$nullable $tmp3091 = *(&local4);
frost$core$Bit $tmp3092 = (frost$core$Bit) {$tmp3091.nonnull};
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block13; else goto block14;
block14:;
frost$core$Int $tmp3094 = (frost$core$Int) {1405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3095, $tmp3094, &$s3096);
abort(); // unreachable
block13:;
frost$core$Bit $tmp3097 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3098 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3090, ((frost$core$String$Index) $tmp3091.value), $tmp3097);
frost$core$String* $tmp3099 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3098);
frost$collections$Array$add$frost$collections$Array$T($tmp3089, ((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1406
frost$core$String$Index$nullable $tmp3100 = *(&local4);
frost$core$Int $tmp3101 = ((frost$core$String$Index) $tmp3100.value).value;
frost$core$Int* $tmp3102 = &param1->_length;
frost$core$Int $tmp3103 = *$tmp3102;
int64_t $tmp3104 = $tmp3101.value;
int64_t $tmp3105 = $tmp3103.value;
int64_t $tmp3106 = $tmp3104 + $tmp3105;
frost$core$Int $tmp3107 = (frost$core$Int) {$tmp3106};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1406:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3108 = &(&local6)->value;
*$tmp3108 = $tmp3107;
frost$core$String$Index $tmp3109 = *(&local6);
*(&local5) = $tmp3109;
frost$core$String$Index $tmp3110 = *(&local5);
*(&local3) = $tmp3110;
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
frost$core$Int $tmp3111 = (frost$core$Int) {0u};
int64_t $tmp3112 = param2.value;
int64_t $tmp3113 = $tmp3111.value;
bool $tmp3114 = $tmp3112 > $tmp3113;
frost$core$Bit $tmp3115 = (frost$core$Bit) {$tmp3114};
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block1; else goto block2;
block2:;
frost$core$Int $tmp3117 = (frost$core$Int) {1422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3118, $tmp3117, &$s3119);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3120 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3120);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$collections$Array* $tmp3121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local0) = $tmp3120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1424
frost$core$Matcher* $tmp3122 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
frost$core$Matcher* $tmp3123 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local1) = $tmp3122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1425
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1425:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp3124 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3125 = &(&local3)->value;
*$tmp3125 = $tmp3124;
frost$core$String$Index $tmp3126 = *(&local3);
*(&local2) = $tmp3126;
frost$core$String$Index $tmp3127 = *(&local2);
*(&local4) = $tmp3127;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1426
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1427
frost$core$Matcher* $tmp3128 = *(&local1);
frost$core$Bit $tmp3129 = frost$core$Matcher$find$R$frost$core$Bit($tmp3128);
*(&local5) = $tmp3129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1428
frost$core$Bit $tmp3130 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:1428:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3131 = $tmp3130.value;
bool $tmp3132 = !$tmp3131;
frost$core$Bit $tmp3133 = (frost$core$Bit) {$tmp3132};
bool $tmp3134 = $tmp3133.value;
if ($tmp3134) goto block7; else goto block9;
block9:;
frost$collections$Array* $tmp3135 = *(&local0);
ITable* $tmp3136 = ((frost$collections$CollectionView*) $tmp3135)->$class->itable;
while ($tmp3136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3136 = $tmp3136->next;
}
$fn3138 $tmp3137 = $tmp3136->methods[0];
frost$core$Int $tmp3139 = $tmp3137(((frost$collections$CollectionView*) $tmp3135));
frost$core$Int $tmp3140 = (frost$core$Int) {1u};
int64_t $tmp3141 = param2.value;
int64_t $tmp3142 = $tmp3140.value;
int64_t $tmp3143 = $tmp3141 - $tmp3142;
frost$core$Int $tmp3144 = (frost$core$Int) {$tmp3143};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1428:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3145 = $tmp3139.value;
int64_t $tmp3146 = $tmp3144.value;
bool $tmp3147 = $tmp3145 == $tmp3146;
frost$core$Bit $tmp3148 = (frost$core$Bit) {$tmp3147};
bool $tmp3149 = $tmp3148.value;
if ($tmp3149) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1429
frost$collections$Array* $tmp3150 = *(&local0);
frost$core$String$Index $tmp3151 = *(&local4);
frost$core$Bit $tmp3152 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3153 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3151, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3152);
frost$core$String* $tmp3154 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3153);
frost$collections$Array$add$frost$collections$Array$T($tmp3150, ((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1430
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1436
frost$collections$Array* $tmp3155 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
frost$core$Matcher* $tmp3156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp3157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3155;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1432
frost$core$Matcher* $tmp3158 = *(&local1);
frost$core$String$Index $tmp3159;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp3159, $tmp3158);
*(&local6) = $tmp3159;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1433
frost$collections$Array* $tmp3160 = *(&local0);
frost$core$String$Index $tmp3161 = *(&local4);
frost$core$String$Index $tmp3162 = *(&local6);
frost$core$Bit $tmp3163 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3164 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3161, $tmp3162, $tmp3163);
frost$core$String* $tmp3165 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3164);
frost$collections$Array$add$frost$collections$Array$T($tmp3160, ((frost$core$Object*) $tmp3165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1434
frost$core$String$Index $tmp3166 = *(&local6);
frost$core$Int $tmp3167 = $tmp3166.value;
frost$core$Matcher* $tmp3168 = *(&local1);
frost$core$String$Index $tmp3169;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp3169, $tmp3168);
frost$core$Int $tmp3170 = $tmp3169.value;
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from String.frost:1434:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp3171 = $tmp3167.value;
int64_t $tmp3172 = $tmp3170.value;
bool $tmp3173 = $tmp3171 > $tmp3172;
frost$core$Bit $tmp3174 = (frost$core$Bit) {$tmp3173};
bool $tmp3175 = $tmp3174.value;
if ($tmp3175) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp3176 = $tmp3167.value;
frost$core$Int $tmp3177 = (frost$core$Int) {$tmp3176};
*(&local7) = $tmp3177;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp3178 = $tmp3170.value;
frost$core$Int $tmp3179 = (frost$core$Int) {$tmp3178};
*(&local7) = $tmp3179;
goto block12;
block12:;
frost$core$Int $tmp3180 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1434:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3181 = &(&local9)->value;
*$tmp3181 = $tmp3180;
frost$core$String$Index $tmp3182 = *(&local9);
*(&local8) = $tmp3182;
frost$core$String$Index $tmp3183 = *(&local8);
*(&local4) = $tmp3183;
goto block5;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
frost$core$Int64 $tmp3184 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3185 = $tmp3184.value;
frost$core$Int $tmp3186 = (frost$core$Int) {((int64_t) $tmp3185)};
frost$collections$Array* $tmp3187 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
return $tmp3187;

}
frost$core$Int$nullable frost$core$String$get_asInt$R$frost$core$Int$Q(frost$core$String* param0) {

frost$core$Int64$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp3188 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(param0);
*(&local0) = $tmp3188;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp3189 = *(&local0);
frost$core$Bit $tmp3190 = (frost$core$Bit) {$tmp3189.nonnull};
bool $tmp3191 = $tmp3190.value;
if ($tmp3191) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp3192 = *(&local0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3193 = ((frost$core$Int64) $tmp3192.value).value;
frost$core$Int $tmp3194 = (frost$core$Int) {((int64_t) $tmp3193)};
return ((frost$core$Int$nullable) { $tmp3194, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
return ((frost$core$Int$nullable) { .nonnull = false });

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int64 local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1470
frost$core$Int* $tmp3195 = &param0->_length;
frost$core$Int $tmp3196 = *$tmp3195;
frost$core$Int $tmp3197 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1470:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3198 = $tmp3196.value;
int64_t $tmp3199 = $tmp3197.value;
bool $tmp3200 = $tmp3198 == $tmp3199;
frost$core$Bit $tmp3201 = (frost$core$Bit) {$tmp3200};
bool $tmp3202 = $tmp3201.value;
if ($tmp3202) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1471
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1473
frost$core$Int64 $tmp3203 = (frost$core$Int64) {0u};
*(&local0) = $tmp3203;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1474
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1475
frost$core$Char8** $tmp3204 = &param0->data;
frost$core$Char8* $tmp3205 = *$tmp3204;
frost$core$Int64 $tmp3206 = (frost$core$Int64) {0u};
int64_t $tmp3207 = $tmp3206.value;
frost$core$Char8 $tmp3208 = $tmp3205[$tmp3207];
frost$core$UInt8 $tmp3209 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3210 = frost$core$Char8$init$frost$core$UInt8($tmp3209);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1475:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp3211 = $tmp3208.value;
uint8_t $tmp3212 = $tmp3210.value;
bool $tmp3213 = $tmp3211 == $tmp3212;
frost$core$Bit $tmp3214 = (frost$core$Bit) {$tmp3213};
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1476
frost$core$Int $tmp3216 = (frost$core$Int) {1u};
*(&local1) = $tmp3216;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1479
frost$core$Int $tmp3217 = (frost$core$Int) {0u};
*(&local1) = $tmp3217;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1481
frost$core$Int $tmp3218 = *(&local1);
frost$core$Int* $tmp3219 = &param0->_length;
frost$core$Int $tmp3220 = *$tmp3219;
frost$core$Bit $tmp3221 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3222 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3218, $tmp3220, $tmp3221);
frost$core$Int $tmp3223 = $tmp3222.min;
*(&local2) = $tmp3223;
frost$core$Int $tmp3224 = $tmp3222.max;
frost$core$Bit $tmp3225 = $tmp3222.inclusive;
bool $tmp3226 = $tmp3225.value;
frost$core$Int $tmp3227 = (frost$core$Int) {1u};
if ($tmp3226) goto block11; else goto block12;
block11:;
int64_t $tmp3228 = $tmp3223.value;
int64_t $tmp3229 = $tmp3224.value;
bool $tmp3230 = $tmp3228 <= $tmp3229;
frost$core$Bit $tmp3231 = (frost$core$Bit) {$tmp3230};
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block8; else goto block9;
block12:;
int64_t $tmp3233 = $tmp3223.value;
int64_t $tmp3234 = $tmp3224.value;
bool $tmp3235 = $tmp3233 < $tmp3234;
frost$core$Bit $tmp3236 = (frost$core$Bit) {$tmp3235};
bool $tmp3237 = $tmp3236.value;
if ($tmp3237) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1482
frost$core$Char8** $tmp3238 = &param0->data;
frost$core$Char8* $tmp3239 = *$tmp3238;
frost$core$Int $tmp3240 = *(&local2);
frost$core$Int64 $tmp3241 = frost$core$Int64$init$frost$core$Int($tmp3240);
int64_t $tmp3242 = $tmp3241.value;
frost$core$Char8 $tmp3243 = $tmp3239[$tmp3242];
uint8_t $tmp3244 = $tmp3243.value;
frost$core$Int64 $tmp3245 = (frost$core$Int64) {((int64_t) $tmp3244)};
frost$core$Int64 $tmp3246 = (frost$core$Int64) {48u};
int64_t $tmp3247 = $tmp3245.value;
int64_t $tmp3248 = $tmp3246.value;
int64_t $tmp3249 = $tmp3247 - $tmp3248;
frost$core$Int64 $tmp3250 = (frost$core$Int64) {$tmp3249};
*(&local3) = $tmp3250;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1483
frost$core$Int64 $tmp3251 = *(&local3);
frost$core$Int64 $tmp3252 = (frost$core$Int64) {0u};
int64_t $tmp3253 = $tmp3251.value;
int64_t $tmp3254 = $tmp3252.value;
bool $tmp3255 = $tmp3253 < $tmp3254;
frost$core$Bit $tmp3256 = (frost$core$Bit) {$tmp3255};
bool $tmp3257 = $tmp3256.value;
if ($tmp3257) goto block13; else goto block15;
block15:;
frost$core$Int64 $tmp3258 = *(&local3);
frost$core$Int64 $tmp3259 = (frost$core$Int64) {9u};
int64_t $tmp3260 = $tmp3258.value;
int64_t $tmp3261 = $tmp3259.value;
bool $tmp3262 = $tmp3260 > $tmp3261;
frost$core$Bit $tmp3263 = (frost$core$Bit) {$tmp3262};
bool $tmp3264 = $tmp3263.value;
if ($tmp3264) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1484
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1486
frost$core$Int64 $tmp3265 = *(&local0);
frost$core$Int64 $tmp3266 = (frost$core$Int64) {10u};
int64_t $tmp3267 = $tmp3265.value;
int64_t $tmp3268 = $tmp3266.value;
int64_t $tmp3269 = $tmp3267 * $tmp3268;
frost$core$Int64 $tmp3270 = (frost$core$Int64) {$tmp3269};
frost$core$Int64 $tmp3271 = *(&local3);
int64_t $tmp3272 = $tmp3270.value;
int64_t $tmp3273 = $tmp3271.value;
int64_t $tmp3274 = $tmp3272 + $tmp3273;
frost$core$Int64 $tmp3275 = (frost$core$Int64) {$tmp3274};
*(&local0) = $tmp3275;
frost$core$Int $tmp3276 = *(&local2);
int64_t $tmp3277 = $tmp3224.value;
int64_t $tmp3278 = $tmp3276.value;
int64_t $tmp3279 = $tmp3277 - $tmp3278;
frost$core$Int $tmp3280 = (frost$core$Int) {$tmp3279};
if ($tmp3226) goto block17; else goto block18;
block17:;
int64_t $tmp3281 = $tmp3280.value;
int64_t $tmp3282 = $tmp3227.value;
bool $tmp3283 = $tmp3281 >= $tmp3282;
frost$core$Bit $tmp3284 = (frost$core$Bit) {$tmp3283};
bool $tmp3285 = $tmp3284.value;
if ($tmp3285) goto block16; else goto block9;
block18:;
int64_t $tmp3286 = $tmp3280.value;
int64_t $tmp3287 = $tmp3227.value;
bool $tmp3288 = $tmp3286 > $tmp3287;
frost$core$Bit $tmp3289 = (frost$core$Bit) {$tmp3288};
bool $tmp3290 = $tmp3289.value;
if ($tmp3290) goto block16; else goto block9;
block16:;
int64_t $tmp3291 = $tmp3276.value;
int64_t $tmp3292 = $tmp3227.value;
int64_t $tmp3293 = $tmp3291 + $tmp3292;
frost$core$Int $tmp3294 = (frost$core$Int) {$tmp3293};
*(&local2) = $tmp3294;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1488
frost$core$Char8** $tmp3295 = &param0->data;
frost$core$Char8* $tmp3296 = *$tmp3295;
frost$core$Int64 $tmp3297 = (frost$core$Int64) {0u};
int64_t $tmp3298 = $tmp3297.value;
frost$core$Char8 $tmp3299 = $tmp3296[$tmp3298];
frost$core$UInt8 $tmp3300 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3301 = frost$core$Char8$init$frost$core$UInt8($tmp3300);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1488:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp3302 = $tmp3299.value;
uint8_t $tmp3303 = $tmp3301.value;
bool $tmp3304 = $tmp3302 == $tmp3303;
frost$core$Bit $tmp3305 = (frost$core$Bit) {$tmp3304};
bool $tmp3306 = $tmp3305.value;
if ($tmp3306) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1489
frost$core$Int64 $tmp3307 = *(&local0);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1489:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp3308 = $tmp3307.value;
int64_t $tmp3309 = -$tmp3308;
frost$core$Int64 $tmp3310 = (frost$core$Int64) {$tmp3309};
*(&local0) = $tmp3310;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1491
frost$core$Int64 $tmp3311 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp3311, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int local1;
frost$core$UInt64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1502
frost$core$Int* $tmp3312 = &param0->_length;
frost$core$Int $tmp3313 = *$tmp3312;
frost$core$Int $tmp3314 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1502:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3315 = $tmp3313.value;
int64_t $tmp3316 = $tmp3314.value;
bool $tmp3317 = $tmp3315 == $tmp3316;
frost$core$Bit $tmp3318 = (frost$core$Bit) {$tmp3317};
bool $tmp3319 = $tmp3318.value;
if ($tmp3319) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1503
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1505
frost$core$UInt64 $tmp3320 = (frost$core$UInt64) {0u};
*(&local0) = $tmp3320;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1506
frost$core$Int $tmp3321 = (frost$core$Int) {0u};
frost$core$Int* $tmp3322 = &param0->_length;
frost$core$Int $tmp3323 = *$tmp3322;
frost$core$Bit $tmp3324 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3325 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3321, $tmp3323, $tmp3324);
frost$core$Int $tmp3326 = $tmp3325.min;
*(&local1) = $tmp3326;
frost$core$Int $tmp3327 = $tmp3325.max;
frost$core$Bit $tmp3328 = $tmp3325.inclusive;
bool $tmp3329 = $tmp3328.value;
frost$core$Int $tmp3330 = (frost$core$Int) {1u};
if ($tmp3329) goto block7; else goto block8;
block7:;
int64_t $tmp3331 = $tmp3326.value;
int64_t $tmp3332 = $tmp3327.value;
bool $tmp3333 = $tmp3331 <= $tmp3332;
frost$core$Bit $tmp3334 = (frost$core$Bit) {$tmp3333};
bool $tmp3335 = $tmp3334.value;
if ($tmp3335) goto block4; else goto block5;
block8:;
int64_t $tmp3336 = $tmp3326.value;
int64_t $tmp3337 = $tmp3327.value;
bool $tmp3338 = $tmp3336 < $tmp3337;
frost$core$Bit $tmp3339 = (frost$core$Bit) {$tmp3338};
bool $tmp3340 = $tmp3339.value;
if ($tmp3340) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1507
frost$core$Char8** $tmp3341 = &param0->data;
frost$core$Char8* $tmp3342 = *$tmp3341;
frost$core$Int $tmp3343 = *(&local1);
frost$core$Int64 $tmp3344 = frost$core$Int64$init$frost$core$Int($tmp3343);
int64_t $tmp3345 = $tmp3344.value;
frost$core$Char8 $tmp3346 = $tmp3342[$tmp3345];
uint8_t $tmp3347 = $tmp3346.value;
frost$core$UInt64 $tmp3348 = (frost$core$UInt64) {((uint64_t) $tmp3347)};
frost$core$UInt64 $tmp3349 = (frost$core$UInt64) {48u};
uint64_t $tmp3350 = $tmp3348.value;
uint64_t $tmp3351 = $tmp3349.value;
uint64_t $tmp3352 = $tmp3350 - $tmp3351;
frost$core$UInt64 $tmp3353 = (frost$core$UInt64) {$tmp3352};
*(&local2) = $tmp3353;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1508
frost$core$UInt64 $tmp3354 = *(&local2);
frost$core$UInt64 $tmp3355 = (frost$core$UInt64) {0u};
uint64_t $tmp3356 = $tmp3354.value;
uint64_t $tmp3357 = $tmp3355.value;
bool $tmp3358 = $tmp3356 < $tmp3357;
frost$core$Bit $tmp3359 = (frost$core$Bit) {$tmp3358};
bool $tmp3360 = $tmp3359.value;
if ($tmp3360) goto block9; else goto block11;
block11:;
frost$core$UInt64 $tmp3361 = *(&local2);
frost$core$UInt64 $tmp3362 = (frost$core$UInt64) {9u};
uint64_t $tmp3363 = $tmp3361.value;
uint64_t $tmp3364 = $tmp3362.value;
bool $tmp3365 = $tmp3363 > $tmp3364;
frost$core$Bit $tmp3366 = (frost$core$Bit) {$tmp3365};
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1509
return ((frost$core$UInt64$nullable) { .nonnull = false });
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1511
frost$core$UInt64 $tmp3368 = *(&local0);
frost$core$UInt64 $tmp3369 = (frost$core$UInt64) {10u};
uint64_t $tmp3370 = $tmp3368.value;
uint64_t $tmp3371 = $tmp3369.value;
uint64_t $tmp3372 = $tmp3370 * $tmp3371;
frost$core$UInt64 $tmp3373 = (frost$core$UInt64) {$tmp3372};
frost$core$UInt64 $tmp3374 = *(&local2);
uint64_t $tmp3375 = $tmp3373.value;
uint64_t $tmp3376 = $tmp3374.value;
uint64_t $tmp3377 = $tmp3375 + $tmp3376;
frost$core$UInt64 $tmp3378 = (frost$core$UInt64) {$tmp3377};
*(&local0) = $tmp3378;
frost$core$Int $tmp3379 = *(&local1);
int64_t $tmp3380 = $tmp3327.value;
int64_t $tmp3381 = $tmp3379.value;
int64_t $tmp3382 = $tmp3380 - $tmp3381;
frost$core$Int $tmp3383 = (frost$core$Int) {$tmp3382};
if ($tmp3329) goto block13; else goto block14;
block13:;
int64_t $tmp3384 = $tmp3383.value;
int64_t $tmp3385 = $tmp3330.value;
bool $tmp3386 = $tmp3384 >= $tmp3385;
frost$core$Bit $tmp3387 = (frost$core$Bit) {$tmp3386};
bool $tmp3388 = $tmp3387.value;
if ($tmp3388) goto block12; else goto block5;
block14:;
int64_t $tmp3389 = $tmp3383.value;
int64_t $tmp3390 = $tmp3330.value;
bool $tmp3391 = $tmp3389 > $tmp3390;
frost$core$Bit $tmp3392 = (frost$core$Bit) {$tmp3391};
bool $tmp3393 = $tmp3392.value;
if ($tmp3393) goto block12; else goto block5;
block12:;
int64_t $tmp3394 = $tmp3379.value;
int64_t $tmp3395 = $tmp3330.value;
int64_t $tmp3396 = $tmp3394 + $tmp3395;
frost$core$Int $tmp3397 = (frost$core$Int) {$tmp3396};
*(&local1) = $tmp3397;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1513
frost$core$UInt64 $tmp3398 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp3398, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Real64 $tmp3399;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp3399, param0);
return ((frost$core$Real64$nullable) { $tmp3399, true });

}
frost$core$Int frost$core$String$get_hash$R$frost$core$Int(frost$core$String* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1534
frost$core$Int $tmp3400 = (frost$core$Int) {14695981039346656037u};
*(&local0) = $tmp3400;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1535
frost$core$Int $tmp3401 = (frost$core$Int) {0u};
frost$core$Int* $tmp3402 = &param0->_length;
frost$core$Int $tmp3403 = *$tmp3402;
frost$core$Bit $tmp3404 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3405 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3401, $tmp3403, $tmp3404);
frost$core$Int $tmp3406 = $tmp3405.min;
*(&local1) = $tmp3406;
frost$core$Int $tmp3407 = $tmp3405.max;
frost$core$Bit $tmp3408 = $tmp3405.inclusive;
bool $tmp3409 = $tmp3408.value;
frost$core$Int $tmp3410 = (frost$core$Int) {1u};
if ($tmp3409) goto block4; else goto block5;
block4:;
int64_t $tmp3411 = $tmp3406.value;
int64_t $tmp3412 = $tmp3407.value;
bool $tmp3413 = $tmp3411 <= $tmp3412;
frost$core$Bit $tmp3414 = (frost$core$Bit) {$tmp3413};
bool $tmp3415 = $tmp3414.value;
if ($tmp3415) goto block1; else goto block2;
block5:;
int64_t $tmp3416 = $tmp3406.value;
int64_t $tmp3417 = $tmp3407.value;
bool $tmp3418 = $tmp3416 < $tmp3417;
frost$core$Bit $tmp3419 = (frost$core$Bit) {$tmp3418};
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1536
frost$core$Int $tmp3421 = *(&local0);
frost$core$Char8** $tmp3422 = &param0->data;
frost$core$Char8* $tmp3423 = *$tmp3422;
frost$core$Int $tmp3424 = *(&local1);
frost$core$Int64 $tmp3425 = frost$core$Int64$init$frost$core$Int($tmp3424);
int64_t $tmp3426 = $tmp3425.value;
frost$core$Char8 $tmp3427 = $tmp3423[$tmp3426];
// begin inline call to function frost.core.Char8.get_asInt8():frost.core.Int8 from String.frost:1536:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
uint8_t $tmp3428 = $tmp3427.value;
frost$core$Int8 $tmp3429 = (frost$core$Int8) {((int8_t) $tmp3428)};
frost$core$Int $tmp3430 = frost$core$Int$init$frost$core$Int8($tmp3429);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from String.frost:1536:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp3431 = $tmp3421.value;
int64_t $tmp3432 = $tmp3430.value;
int64_t $tmp3433 = $tmp3431 ^ $tmp3432;
frost$core$Int $tmp3434 = (frost$core$Int) {$tmp3433};
*(&local0) = $tmp3434;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1537
frost$core$Int $tmp3435 = *(&local0);
frost$core$Int $tmp3436 = (frost$core$Int) {1099511628211u};
int64_t $tmp3437 = $tmp3435.value;
int64_t $tmp3438 = $tmp3436.value;
int64_t $tmp3439 = $tmp3437 * $tmp3438;
frost$core$Int $tmp3440 = (frost$core$Int) {$tmp3439};
*(&local0) = $tmp3440;
frost$core$Int $tmp3441 = *(&local1);
int64_t $tmp3442 = $tmp3407.value;
int64_t $tmp3443 = $tmp3441.value;
int64_t $tmp3444 = $tmp3442 - $tmp3443;
frost$core$Int $tmp3445 = (frost$core$Int) {$tmp3444};
if ($tmp3409) goto block9; else goto block10;
block9:;
int64_t $tmp3446 = $tmp3445.value;
int64_t $tmp3447 = $tmp3410.value;
bool $tmp3448 = $tmp3446 >= $tmp3447;
frost$core$Bit $tmp3449 = (frost$core$Bit) {$tmp3448};
bool $tmp3450 = $tmp3449.value;
if ($tmp3450) goto block8; else goto block2;
block10:;
int64_t $tmp3451 = $tmp3445.value;
int64_t $tmp3452 = $tmp3410.value;
bool $tmp3453 = $tmp3451 > $tmp3452;
frost$core$Bit $tmp3454 = (frost$core$Bit) {$tmp3453};
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block8; else goto block2;
block8:;
int64_t $tmp3456 = $tmp3441.value;
int64_t $tmp3457 = $tmp3410.value;
int64_t $tmp3458 = $tmp3456 + $tmp3457;
frost$core$Int $tmp3459 = (frost$core$Int) {$tmp3458};
*(&local1) = $tmp3459;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1539
frost$core$Int $tmp3460 = *(&local0);
return $tmp3460;

}

