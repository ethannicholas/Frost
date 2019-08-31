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
typedef frost$core$String* (*$fn1568)(frost$core$Object*);
typedef frost$core$String* (*$fn1760)(frost$core$Object*);
typedef frost$core$Object* (*$fn2472)(frost$core$String*);
typedef frost$core$Object* (*$fn2474)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2478)(frost$core$Object*);
typedef frost$core$String* (*$fn2492)(frost$core$Object*);
typedef frost$core$Object* (*$fn2556)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2558)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2562)(frost$core$Object*);
typedef frost$core$String* (*$fn2577)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2833)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2837)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2846)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2850)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2905)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2909)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2918)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2922)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2977)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2981)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2990)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2994)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn3130)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3203)(frost$collections$CollectionView*);

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
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s1604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s1915 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s1934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s1948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s2605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s3164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s3183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 167, -3950450366484826733, NULL };
static frost$core$String $s3261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };

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
frost$core$Bit $tmp1216 = (frost$core$Bit) {$tmp1215.nonnull};
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block4; else goto block5;
block5:;
frost$core$Int $tmp1218 = (frost$core$Int) {710u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1219, $tmp1218, &$s1220);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$String$Index) $tmp1215.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:713
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:713:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1221 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1222 = &(&local2)->value;
*$tmp1222 = $tmp1221;
frost$core$String$Index $tmp1223 = *(&local2);
*(&local1) = $tmp1223;
frost$core$String$Index $tmp1224 = *(&local1);
*(&local0) = $tmp1224;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:716
frost$core$Bit $tmp1225 = param1.inclusive;
*(&local3) = $tmp1225;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:717
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:718
frost$core$String$Index$nullable $tmp1226 = param1.max;
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226.nonnull};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:719
frost$core$String$Index$nullable $tmp1229 = param1.max;
frost$core$Bit $tmp1230 = (frost$core$Bit) {$tmp1229.nonnull};
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block11; else goto block12;
block12:;
frost$core$Int $tmp1232 = (frost$core$Int) {719u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1233, $tmp1232, &$s1234);
abort(); // unreachable
block11:;
*(&local4) = ((frost$core$String$Index) $tmp1229.value);
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:722
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:722:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1235 = &param0->_length;
frost$core$Int $tmp1236 = *$tmp1235;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1237 = &(&local6)->value;
*$tmp1237 = $tmp1236;
frost$core$String$Index $tmp1238 = *(&local6);
*(&local5) = $tmp1238;
frost$core$String$Index $tmp1239 = *(&local5);
*(&local4) = $tmp1239;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:723
frost$core$Bit $tmp1240 = (frost$core$Bit) {false};
*(&local3) = $tmp1240;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:725
frost$core$String$Index $tmp1241 = *(&local0);
frost$core$String$Index $tmp1242 = *(&local4);
frost$core$Bit $tmp1243 = *(&local3);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1244 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1241, $tmp1242, $tmp1243);
frost$core$String* $tmp1245 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
return $tmp1245;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
frost$core$Char8 local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:733
frost$core$String$Index $tmp1246 = param1.min;
frost$core$Int $tmp1247 = $tmp1246.value;
*(&local0) = $tmp1247;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:734
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1248 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1248);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
frost$core$MutableString* $tmp1249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local1) = $tmp1248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:735
frost$core$String$Index $tmp1250 = param1.max;
frost$core$Int $tmp1251 = $tmp1250.value;
*(&local2) = $tmp1251;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:736
frost$core$Bit $tmp1252 = param1.inclusive;
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:737
frost$core$Int $tmp1254 = *(&local2);
frost$core$Int $tmp1255 = (frost$core$Int) {1u};
int64_t $tmp1256 = $tmp1254.value;
int64_t $tmp1257 = $tmp1255.value;
int64_t $tmp1258 = $tmp1256 + $tmp1257;
frost$core$Int $tmp1259 = (frost$core$Int) {$tmp1258};
*(&local2) = $tmp1259;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:739
goto block3;
block3:;
frost$core$Int $tmp1260 = *(&local0);
frost$core$Int $tmp1261 = *(&local2);
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 < $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:740
frost$core$Char8** $tmp1267 = &param0->data;
frost$core$Char8* $tmp1268 = *$tmp1267;
frost$core$Int $tmp1269 = *(&local0);
frost$core$Int64 $tmp1270 = frost$core$Int64$init$frost$core$Int($tmp1269);
int64_t $tmp1271 = $tmp1270.value;
frost$core$Char8 $tmp1272 = $tmp1268[$tmp1271];
*(&local3) = $tmp1272;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:741
frost$core$MutableString* $tmp1273 = *(&local1);
frost$core$Char8 $tmp1274 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1273, $tmp1274);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:742
frost$core$Int $tmp1275 = *(&local0);
frost$core$Int $tmp1276 = (frost$core$Int) {1u};
int64_t $tmp1277 = $tmp1275.value;
int64_t $tmp1278 = $tmp1276.value;
int64_t $tmp1279 = $tmp1277 + $tmp1278;
frost$core$Int $tmp1280 = (frost$core$Int) {$tmp1279};
*(&local0) = $tmp1280;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:743
frost$core$Char8 $tmp1281 = *(&local3);
uint8_t $tmp1282 = $tmp1281.value;
int64_t $tmp1283 = ((int64_t) $tmp1282) & 255u;
bool $tmp1284 = $tmp1283 >= 192u;
frost$core$Bit $tmp1285 = (frost$core$Bit) {$tmp1284};
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:744
frost$core$MutableString* $tmp1287 = *(&local1);
frost$core$Char8** $tmp1288 = &param0->data;
frost$core$Char8* $tmp1289 = *$tmp1288;
frost$core$Int $tmp1290 = *(&local0);
frost$core$Int64 $tmp1291 = frost$core$Int64$init$frost$core$Int($tmp1290);
int64_t $tmp1292 = $tmp1291.value;
frost$core$Char8 $tmp1293 = $tmp1289[$tmp1292];
frost$core$MutableString$append$frost$core$Char8($tmp1287, $tmp1293);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:745
frost$core$Int $tmp1294 = *(&local0);
frost$core$Int $tmp1295 = (frost$core$Int) {1u};
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295.value;
int64_t $tmp1298 = $tmp1296 + $tmp1297;
frost$core$Int $tmp1299 = (frost$core$Int) {$tmp1298};
*(&local0) = $tmp1299;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:747
frost$core$Char8 $tmp1300 = *(&local3);
uint8_t $tmp1301 = $tmp1300.value;
int64_t $tmp1302 = ((int64_t) $tmp1301) & 255u;
bool $tmp1303 = $tmp1302 >= 224u;
frost$core$Bit $tmp1304 = (frost$core$Bit) {$tmp1303};
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:748
frost$core$MutableString* $tmp1306 = *(&local1);
frost$core$Char8** $tmp1307 = &param0->data;
frost$core$Char8* $tmp1308 = *$tmp1307;
frost$core$Int $tmp1309 = *(&local0);
frost$core$Int64 $tmp1310 = frost$core$Int64$init$frost$core$Int($tmp1309);
int64_t $tmp1311 = $tmp1310.value;
frost$core$Char8 $tmp1312 = $tmp1308[$tmp1311];
frost$core$MutableString$append$frost$core$Char8($tmp1306, $tmp1312);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:749
frost$core$Int $tmp1313 = *(&local0);
frost$core$Int $tmp1314 = (frost$core$Int) {1u};
int64_t $tmp1315 = $tmp1313.value;
int64_t $tmp1316 = $tmp1314.value;
int64_t $tmp1317 = $tmp1315 + $tmp1316;
frost$core$Int $tmp1318 = (frost$core$Int) {$tmp1317};
*(&local0) = $tmp1318;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:751
frost$core$Char8 $tmp1319 = *(&local3);
uint8_t $tmp1320 = $tmp1319.value;
int64_t $tmp1321 = ((int64_t) $tmp1320) & 255u;
bool $tmp1322 = $tmp1321 >= 240u;
frost$core$Bit $tmp1323 = (frost$core$Bit) {$tmp1322};
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:752
frost$core$MutableString* $tmp1325 = *(&local1);
frost$core$Char8** $tmp1326 = &param0->data;
frost$core$Char8* $tmp1327 = *$tmp1326;
frost$core$Int $tmp1328 = *(&local0);
frost$core$Int64 $tmp1329 = frost$core$Int64$init$frost$core$Int($tmp1328);
int64_t $tmp1330 = $tmp1329.value;
frost$core$Char8 $tmp1331 = $tmp1327[$tmp1330];
frost$core$MutableString$append$frost$core$Char8($tmp1325, $tmp1331);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:753
frost$core$Int $tmp1332 = *(&local0);
frost$core$Int $tmp1333 = (frost$core$Int) {1u};
int64_t $tmp1334 = $tmp1332.value;
int64_t $tmp1335 = $tmp1333.value;
int64_t $tmp1336 = $tmp1334 + $tmp1335;
frost$core$Int $tmp1337 = (frost$core$Int) {$tmp1336};
*(&local0) = $tmp1337;
goto block11;
block11:;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:756
frost$core$MutableString* $tmp1338 = *(&local1);
frost$core$String* $tmp1339 = frost$core$MutableString$finish$R$frost$core$String($tmp1338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$core$MutableString* $tmp1340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1339;

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
frost$core$Int* $tmp1341 = &param0->_length;
frost$core$Int $tmp1342 = *$tmp1341;
frost$core$Int $tmp1343 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:767:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1344 = $tmp1342.value;
int64_t $tmp1345 = $tmp1343.value;
bool $tmp1346 = $tmp1344 == $tmp1345;
frost$core$Bit $tmp1347 = (frost$core$Bit) {$tmp1346};
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1349));
return &$s1350;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:770
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:771
frost$core$String$Index$nullable $tmp1351 = param1.min;
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351.nonnull};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:772
frost$core$String$Index$nullable $tmp1354 = param1.min;
frost$core$Bit $tmp1355 = (frost$core$Bit) {$tmp1354.nonnull};
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1357 = (frost$core$Int) {772u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1358, $tmp1357, &$s1359);
abort(); // unreachable
block7:;
*(&local0) = ((frost$core$String$Index) $tmp1354.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:775
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:775:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1360 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1361 = &(&local2)->value;
*$tmp1361 = $tmp1360;
frost$core$String$Index $tmp1362 = *(&local2);
*(&local1) = $tmp1362;
frost$core$String$Index $tmp1363 = *(&local1);
*(&local0) = $tmp1363;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:778
frost$core$Bit $tmp1364 = param1.inclusive;
*(&local3) = $tmp1364;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:779
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:780
frost$core$String$Index$nullable $tmp1365 = param1.max;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365.nonnull};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:781
frost$core$String$Index$nullable $tmp1368 = param1.max;
frost$core$Bit $tmp1369 = (frost$core$Bit) {$tmp1368.nonnull};
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block14; else goto block15;
block15:;
frost$core$Int $tmp1371 = (frost$core$Int) {781u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1372, $tmp1371, &$s1373);
abort(); // unreachable
block14:;
*(&local4) = ((frost$core$String$Index) $tmp1368.value);
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:784
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:784:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1374 = &param0->_length;
frost$core$Int $tmp1375 = *$tmp1374;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1376 = &(&local6)->value;
*$tmp1376 = $tmp1375;
frost$core$String$Index $tmp1377 = *(&local6);
*(&local5) = $tmp1377;
frost$core$String$Index $tmp1378 = *(&local5);
*(&local4) = $tmp1378;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:785
frost$core$Bit $tmp1379 = (frost$core$Bit) {false};
*(&local3) = $tmp1379;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:787
frost$core$String$Index $tmp1380 = *(&local0);
frost$core$String$Index $tmp1381 = *(&local4);
frost$core$Bit $tmp1382 = *(&local3);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1383 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1380, $tmp1381, $tmp1382);
frost$core$String* $tmp1384 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
return $tmp1384;

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
frost$core$Int* $tmp1385 = &param0->_length;
frost$core$Int $tmp1386 = *$tmp1385;
frost$core$Int $tmp1387 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:803:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387.value;
bool $tmp1390 = $tmp1388 == $tmp1389;
frost$core$Bit $tmp1391 = (frost$core$Bit) {$tmp1390};
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1393));
return &$s1394;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:806
frost$core$Int $tmp1395 = param1.step;
*(&local0) = $tmp1395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:808
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:809
frost$core$String$Index$nullable $tmp1396 = param1.start;
frost$core$Bit $tmp1397 = (frost$core$Bit) {$tmp1396.nonnull};
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:810
frost$core$String$Index$nullable $tmp1399 = param1.start;
frost$core$Bit $tmp1400 = (frost$core$Bit) {$tmp1399.nonnull};
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block7; else goto block8;
block8:;
frost$core$Int $tmp1402 = (frost$core$Int) {810u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1403, $tmp1402, &$s1404);
abort(); // unreachable
block7:;
frost$core$Int $tmp1405 = ((frost$core$String$Index) $tmp1399.value).value;
*(&local1) = $tmp1405;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:812
frost$core$Int $tmp1406 = *(&local0);
frost$core$Int $tmp1407 = (frost$core$Int) {0u};
int64_t $tmp1408 = $tmp1406.value;
int64_t $tmp1409 = $tmp1407.value;
bool $tmp1410 = $tmp1408 > $tmp1409;
frost$core$Bit $tmp1411 = (frost$core$Bit) {$tmp1410};
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:813
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:813:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1413 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1414 = &(&local3)->value;
*$tmp1414 = $tmp1413;
frost$core$String$Index $tmp1415 = *(&local3);
*(&local2) = $tmp1415;
frost$core$String$Index $tmp1416 = *(&local2);
frost$core$Int $tmp1417 = $tmp1416.value;
*(&local1) = $tmp1417;
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:816
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:816:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1418 = &param0->_length;
frost$core$Int $tmp1419 = *$tmp1418;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1420 = &(&local5)->value;
*$tmp1420 = $tmp1419;
frost$core$String$Index $tmp1421 = *(&local5);
*(&local4) = $tmp1421;
frost$core$String$Index $tmp1422 = *(&local4);
frost$core$String$Index $tmp1423 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1422);
frost$core$Int $tmp1424 = $tmp1423.value;
*(&local1) = $tmp1424;
goto block10;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:819
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:820
frost$core$String$Index$nullable $tmp1425 = param1.end;
frost$core$Bit $tmp1426 = (frost$core$Bit) {$tmp1425.nonnull};
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:821
frost$core$String$Index$nullable $tmp1428 = param1.end;
frost$core$Bit $tmp1429 = (frost$core$Bit) {$tmp1428.nonnull};
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block19; else goto block20;
block20:;
frost$core$Int $tmp1431 = (frost$core$Int) {821u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1432, $tmp1431, &$s1433);
abort(); // unreachable
block19:;
frost$core$Int $tmp1434 = ((frost$core$String$Index) $tmp1428.value).value;
*(&local6) = $tmp1434;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:823
frost$core$Int $tmp1435 = *(&local0);
frost$core$Int $tmp1436 = (frost$core$Int) {0u};
int64_t $tmp1437 = $tmp1435.value;
int64_t $tmp1438 = $tmp1436.value;
bool $tmp1439 = $tmp1437 > $tmp1438;
frost$core$Bit $tmp1440 = (frost$core$Bit) {$tmp1439};
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:824
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:824:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp1442 = &param0->_length;
frost$core$Int $tmp1443 = *$tmp1442;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1444 = &(&local8)->value;
*$tmp1444 = $tmp1443;
frost$core$String$Index $tmp1445 = *(&local8);
*(&local7) = $tmp1445;
frost$core$String$Index $tmp1446 = *(&local7);
frost$core$Int $tmp1447 = $tmp1446.value;
*(&local6) = $tmp1447;
goto block22;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:827
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:827:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1448 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1449 = &(&local10)->value;
*$tmp1449 = $tmp1448;
frost$core$String$Index $tmp1450 = *(&local10);
*(&local9) = $tmp1450;
frost$core$String$Index $tmp1451 = *(&local9);
frost$core$Int $tmp1452 = $tmp1451.value;
*(&local6) = $tmp1452;
goto block22;
block22:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:830
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1453 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1453);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$MutableString* $tmp1454 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local11) = $tmp1453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:831
frost$core$Int $tmp1455 = param1.step;
frost$core$Int $tmp1456 = (frost$core$Int) {0u};
int64_t $tmp1457 = $tmp1455.value;
int64_t $tmp1458 = $tmp1456.value;
bool $tmp1459 = $tmp1457 > $tmp1458;
frost$core$Bit $tmp1460 = (frost$core$Bit) {$tmp1459};
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:832
goto block31;
block31:;
frost$core$Int $tmp1462 = *(&local1);
frost$core$Int $tmp1463 = *(&local6);
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463.value;
bool $tmp1466 = $tmp1464 < $tmp1465;
frost$core$Bit $tmp1467 = (frost$core$Bit) {$tmp1466};
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:833
frost$core$Char8** $tmp1469 = &param0->data;
frost$core$Char8* $tmp1470 = *$tmp1469;
frost$core$Int $tmp1471 = *(&local1);
frost$core$Int64 $tmp1472 = frost$core$Int64$init$frost$core$Int($tmp1471);
int64_t $tmp1473 = $tmp1472.value;
frost$core$Char8 $tmp1474 = $tmp1470[$tmp1473];
*(&local12) = $tmp1474;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:834
frost$core$MutableString* $tmp1475 = *(&local11);
frost$core$Char8 $tmp1476 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1475, $tmp1476);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:835
frost$core$Int $tmp1477 = *(&local1);
frost$core$Int $tmp1478 = (frost$core$Int) {1u};
int64_t $tmp1479 = $tmp1477.value;
int64_t $tmp1480 = $tmp1478.value;
int64_t $tmp1481 = $tmp1479 + $tmp1480;
frost$core$Int $tmp1482 = (frost$core$Int) {$tmp1481};
*(&local1) = $tmp1482;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:836
frost$core$Char8 $tmp1483 = *(&local12);
uint8_t $tmp1484 = $tmp1483.value;
int64_t $tmp1485 = ((int64_t) $tmp1484) & 255u;
bool $tmp1486 = $tmp1485 >= 192u;
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:837
frost$core$MutableString* $tmp1489 = *(&local11);
frost$core$Char8** $tmp1490 = &param0->data;
frost$core$Char8* $tmp1491 = *$tmp1490;
frost$core$Int $tmp1492 = *(&local1);
frost$core$Int64 $tmp1493 = frost$core$Int64$init$frost$core$Int($tmp1492);
int64_t $tmp1494 = $tmp1493.value;
frost$core$Char8 $tmp1495 = $tmp1491[$tmp1494];
frost$core$MutableString$append$frost$core$Char8($tmp1489, $tmp1495);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:838
frost$core$Int $tmp1496 = *(&local1);
frost$core$Int $tmp1497 = (frost$core$Int) {1u};
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497.value;
int64_t $tmp1500 = $tmp1498 + $tmp1499;
frost$core$Int $tmp1501 = (frost$core$Int) {$tmp1500};
*(&local1) = $tmp1501;
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:840
frost$core$Char8 $tmp1502 = *(&local12);
uint8_t $tmp1503 = $tmp1502.value;
int64_t $tmp1504 = ((int64_t) $tmp1503) & 255u;
bool $tmp1505 = $tmp1504 >= 224u;
frost$core$Bit $tmp1506 = (frost$core$Bit) {$tmp1505};
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:841
frost$core$MutableString* $tmp1508 = *(&local11);
frost$core$Char8** $tmp1509 = &param0->data;
frost$core$Char8* $tmp1510 = *$tmp1509;
frost$core$Int $tmp1511 = *(&local1);
frost$core$Int64 $tmp1512 = frost$core$Int64$init$frost$core$Int($tmp1511);
int64_t $tmp1513 = $tmp1512.value;
frost$core$Char8 $tmp1514 = $tmp1510[$tmp1513];
frost$core$MutableString$append$frost$core$Char8($tmp1508, $tmp1514);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:842
frost$core$Int $tmp1515 = *(&local1);
frost$core$Int $tmp1516 = (frost$core$Int) {1u};
int64_t $tmp1517 = $tmp1515.value;
int64_t $tmp1518 = $tmp1516.value;
int64_t $tmp1519 = $tmp1517 + $tmp1518;
frost$core$Int $tmp1520 = (frost$core$Int) {$tmp1519};
*(&local1) = $tmp1520;
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:844
frost$core$Char8 $tmp1521 = *(&local12);
uint8_t $tmp1522 = $tmp1521.value;
int64_t $tmp1523 = ((int64_t) $tmp1522) & 255u;
bool $tmp1524 = $tmp1523 >= 240u;
frost$core$Bit $tmp1525 = (frost$core$Bit) {$tmp1524};
bool $tmp1526 = $tmp1525.value;
if ($tmp1526) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:845
frost$core$MutableString* $tmp1527 = *(&local11);
frost$core$Char8** $tmp1528 = &param0->data;
frost$core$Char8* $tmp1529 = *$tmp1528;
frost$core$Int $tmp1530 = *(&local1);
frost$core$Int64 $tmp1531 = frost$core$Int64$init$frost$core$Int($tmp1530);
int64_t $tmp1532 = $tmp1531.value;
frost$core$Char8 $tmp1533 = $tmp1529[$tmp1532];
frost$core$MutableString$append$frost$core$Char8($tmp1527, $tmp1533);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:846
frost$core$Int $tmp1534 = *(&local1);
frost$core$Int $tmp1535 = (frost$core$Int) {1u};
int64_t $tmp1536 = $tmp1534.value;
int64_t $tmp1537 = $tmp1535.value;
int64_t $tmp1538 = $tmp1536 + $tmp1537;
frost$core$Int $tmp1539 = (frost$core$Int) {$tmp1538};
*(&local1) = $tmp1539;
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:848
frost$core$Int $tmp1540 = (frost$core$Int) {1u};
frost$core$Int $tmp1541 = *(&local0);
frost$core$Bit $tmp1542 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1543 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1540, $tmp1541, $tmp1542);
frost$core$Int $tmp1544 = $tmp1543.min;
*(&local13) = $tmp1544;
frost$core$Int $tmp1545 = $tmp1543.max;
frost$core$Bit $tmp1546 = $tmp1543.inclusive;
bool $tmp1547 = $tmp1546.value;
frost$core$Int $tmp1548 = (frost$core$Int) {1u};
if ($tmp1547) goto block43; else goto block44;
block43:;
int64_t $tmp1549 = $tmp1544.value;
int64_t $tmp1550 = $tmp1545.value;
bool $tmp1551 = $tmp1549 <= $tmp1550;
frost$core$Bit $tmp1552 = (frost$core$Bit) {$tmp1551};
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block40; else goto block41;
block44:;
int64_t $tmp1554 = $tmp1544.value;
int64_t $tmp1555 = $tmp1545.value;
bool $tmp1556 = $tmp1554 < $tmp1555;
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:849
frost$core$Int $tmp1559 = *(&local1);
frost$core$Int $tmp1560 = *(&local6);
int64_t $tmp1561 = $tmp1559.value;
int64_t $tmp1562 = $tmp1560.value;
bool $tmp1563 = $tmp1561 >= $tmp1562;
frost$core$Bit $tmp1564 = (frost$core$Bit) {$tmp1563};
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:850
frost$core$MutableString* $tmp1566 = *(&local11);
$fn1568 $tmp1567 = ($fn1568) ((frost$core$Object*) $tmp1566)->$class->vtable[0];
frost$core$String* $tmp1569 = $tmp1567(((frost$core$Object*) $tmp1566));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$MutableString* $tmp1570 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1569;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:852
frost$core$Int $tmp1571 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:852:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1572 = &(&local15)->value;
*$tmp1572 = $tmp1571;
frost$core$String$Index $tmp1573 = *(&local15);
*(&local14) = $tmp1573;
frost$core$String$Index $tmp1574 = *(&local14);
frost$core$String$Index $tmp1575 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1574);
frost$core$Int $tmp1576 = $tmp1575.value;
*(&local1) = $tmp1576;
frost$core$Int $tmp1577 = *(&local13);
int64_t $tmp1578 = $tmp1545.value;
int64_t $tmp1579 = $tmp1577.value;
int64_t $tmp1580 = $tmp1578 - $tmp1579;
frost$core$Int $tmp1581 = (frost$core$Int) {$tmp1580};
if ($tmp1547) goto block49; else goto block50;
block49:;
int64_t $tmp1582 = $tmp1581.value;
int64_t $tmp1583 = $tmp1548.value;
bool $tmp1584 = $tmp1582 >= $tmp1583;
frost$core$Bit $tmp1585 = (frost$core$Bit) {$tmp1584};
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block48; else goto block41;
block50:;
int64_t $tmp1587 = $tmp1581.value;
int64_t $tmp1588 = $tmp1548.value;
bool $tmp1589 = $tmp1587 > $tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block48; else goto block41;
block48:;
int64_t $tmp1592 = $tmp1577.value;
int64_t $tmp1593 = $tmp1548.value;
int64_t $tmp1594 = $tmp1592 + $tmp1593;
frost$core$Int $tmp1595 = (frost$core$Int) {$tmp1594};
*(&local13) = $tmp1595;
goto block40;
block41:;
goto block31;
block33:;
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:857
frost$core$Int $tmp1596 = param1.step;
frost$core$Int $tmp1597 = (frost$core$Int) {0u};
int64_t $tmp1598 = $tmp1596.value;
int64_t $tmp1599 = $tmp1597.value;
bool $tmp1600 = $tmp1598 < $tmp1599;
frost$core$Bit $tmp1601 = (frost$core$Bit) {$tmp1600};
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block51; else goto block52;
block52:;
frost$core$Int $tmp1603 = (frost$core$Int) {857u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1604, $tmp1603);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:858
goto block53;
block53:;
frost$core$Int $tmp1605 = *(&local1);
frost$core$Int $tmp1606 = *(&local6);
int64_t $tmp1607 = $tmp1605.value;
int64_t $tmp1608 = $tmp1606.value;
bool $tmp1609 = $tmp1607 > $tmp1608;
frost$core$Bit $tmp1610 = (frost$core$Bit) {$tmp1609};
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:859
frost$core$Char8** $tmp1612 = &param0->data;
frost$core$Char8* $tmp1613 = *$tmp1612;
frost$core$Int $tmp1614 = *(&local1);
frost$core$Int64 $tmp1615 = frost$core$Int64$init$frost$core$Int($tmp1614);
int64_t $tmp1616 = $tmp1615.value;
frost$core$Char8 $tmp1617 = $tmp1613[$tmp1616];
*(&local16) = $tmp1617;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:860
frost$core$MutableString* $tmp1618 = *(&local11);
frost$core$Char8 $tmp1619 = *(&local16);
frost$core$MutableString$append$frost$core$Char8($tmp1618, $tmp1619);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:861
frost$core$Int $tmp1620 = *(&local1);
*(&local17) = $tmp1620;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:862
frost$core$Int $tmp1621 = *(&local1);
frost$core$Int $tmp1622 = (frost$core$Int) {1u};
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623 + $tmp1624;
frost$core$Int $tmp1626 = (frost$core$Int) {$tmp1625};
*(&local1) = $tmp1626;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:863
frost$core$Char8 $tmp1627 = *(&local16);
uint8_t $tmp1628 = $tmp1627.value;
int64_t $tmp1629 = ((int64_t) $tmp1628) & 255u;
bool $tmp1630 = $tmp1629 >= 192u;
frost$core$Bit $tmp1631 = (frost$core$Bit) {$tmp1630};
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:864
frost$core$MutableString* $tmp1633 = *(&local11);
frost$core$Char8** $tmp1634 = &param0->data;
frost$core$Char8* $tmp1635 = *$tmp1634;
frost$core$Int $tmp1636 = *(&local1);
frost$core$Int64 $tmp1637 = frost$core$Int64$init$frost$core$Int($tmp1636);
int64_t $tmp1638 = $tmp1637.value;
frost$core$Char8 $tmp1639 = $tmp1635[$tmp1638];
frost$core$MutableString$append$frost$core$Char8($tmp1633, $tmp1639);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:865
frost$core$Int $tmp1640 = *(&local1);
frost$core$Int $tmp1641 = (frost$core$Int) {1u};
int64_t $tmp1642 = $tmp1640.value;
int64_t $tmp1643 = $tmp1641.value;
int64_t $tmp1644 = $tmp1642 + $tmp1643;
frost$core$Int $tmp1645 = (frost$core$Int) {$tmp1644};
*(&local1) = $tmp1645;
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:867
frost$core$Char8 $tmp1646 = *(&local16);
uint8_t $tmp1647 = $tmp1646.value;
int64_t $tmp1648 = ((int64_t) $tmp1647) & 255u;
bool $tmp1649 = $tmp1648 >= 224u;
frost$core$Bit $tmp1650 = (frost$core$Bit) {$tmp1649};
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:868
frost$core$MutableString* $tmp1652 = *(&local11);
frost$core$Char8** $tmp1653 = &param0->data;
frost$core$Char8* $tmp1654 = *$tmp1653;
frost$core$Int $tmp1655 = *(&local1);
frost$core$Int64 $tmp1656 = frost$core$Int64$init$frost$core$Int($tmp1655);
int64_t $tmp1657 = $tmp1656.value;
frost$core$Char8 $tmp1658 = $tmp1654[$tmp1657];
frost$core$MutableString$append$frost$core$Char8($tmp1652, $tmp1658);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:869
frost$core$Int $tmp1659 = *(&local1);
frost$core$Int $tmp1660 = (frost$core$Int) {1u};
int64_t $tmp1661 = $tmp1659.value;
int64_t $tmp1662 = $tmp1660.value;
int64_t $tmp1663 = $tmp1661 + $tmp1662;
frost$core$Int $tmp1664 = (frost$core$Int) {$tmp1663};
*(&local1) = $tmp1664;
goto block59;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:871
frost$core$Char8 $tmp1665 = *(&local16);
uint8_t $tmp1666 = $tmp1665.value;
int64_t $tmp1667 = ((int64_t) $tmp1666) & 255u;
bool $tmp1668 = $tmp1667 >= 240u;
frost$core$Bit $tmp1669 = (frost$core$Bit) {$tmp1668};
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:872
frost$core$MutableString* $tmp1671 = *(&local11);
frost$core$Char8** $tmp1672 = &param0->data;
frost$core$Char8* $tmp1673 = *$tmp1672;
frost$core$Int $tmp1674 = *(&local1);
frost$core$Int64 $tmp1675 = frost$core$Int64$init$frost$core$Int($tmp1674);
int64_t $tmp1676 = $tmp1675.value;
frost$core$Char8 $tmp1677 = $tmp1673[$tmp1676];
frost$core$MutableString$append$frost$core$Char8($tmp1671, $tmp1677);
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:874
frost$core$Int $tmp1678 = *(&local17);
frost$core$Int $tmp1679 = (frost$core$Int) {1u};
int64_t $tmp1680 = $tmp1678.value;
int64_t $tmp1681 = $tmp1679.value;
int64_t $tmp1682 = $tmp1680 - $tmp1681;
frost$core$Int $tmp1683 = (frost$core$Int) {$tmp1682};
*(&local1) = $tmp1683;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:875
goto block62;
block62:;
frost$core$Char8** $tmp1684 = &param0->data;
frost$core$Char8* $tmp1685 = *$tmp1684;
frost$core$Int $tmp1686 = *(&local1);
frost$core$Int64 $tmp1687 = frost$core$Int64$init$frost$core$Int($tmp1686);
int64_t $tmp1688 = $tmp1687.value;
frost$core$Char8 $tmp1689 = $tmp1685[$tmp1688];
uint8_t $tmp1690 = $tmp1689.value;
int64_t $tmp1691 = ((int64_t) $tmp1690) & 255u;
bool $tmp1692 = $tmp1691 >= 128u;
frost$core$Bit $tmp1693 = (frost$core$Bit) {$tmp1692};
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block65; else goto block64;
block65:;
frost$core$Char8** $tmp1695 = &param0->data;
frost$core$Char8* $tmp1696 = *$tmp1695;
frost$core$Int $tmp1697 = *(&local1);
frost$core$Int64 $tmp1698 = frost$core$Int64$init$frost$core$Int($tmp1697);
int64_t $tmp1699 = $tmp1698.value;
frost$core$Char8 $tmp1700 = $tmp1696[$tmp1699];
uint8_t $tmp1701 = $tmp1700.value;
int64_t $tmp1702 = ((int64_t) $tmp1701) & 255u;
bool $tmp1703 = $tmp1702 < 192u;
frost$core$Bit $tmp1704 = (frost$core$Bit) {$tmp1703};
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:876
frost$core$Int $tmp1706 = *(&local1);
frost$core$Int $tmp1707 = (frost$core$Int) {1u};
int64_t $tmp1708 = $tmp1706.value;
int64_t $tmp1709 = $tmp1707.value;
int64_t $tmp1710 = $tmp1708 - $tmp1709;
frost$core$Int $tmp1711 = (frost$core$Int) {$tmp1710};
*(&local1) = $tmp1711;
goto block62;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:878
frost$core$Int $tmp1712 = (frost$core$Int) {18446744073709551615u};
frost$core$Int $tmp1713 = *(&local0);
frost$core$Int $tmp1714 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1715 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1716 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1712, $tmp1713, $tmp1714, $tmp1715);
frost$core$Int $tmp1717 = $tmp1716.start;
*(&local18) = $tmp1717;
frost$core$Int $tmp1718 = $tmp1716.end;
frost$core$Int $tmp1719 = $tmp1716.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:878:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp1720 = $tmp1719.value;
int64_t $tmp1721 = -$tmp1720;
frost$core$Int $tmp1722 = (frost$core$Int) {$tmp1721};
frost$core$Bit $tmp1723 = $tmp1716.inclusive;
bool $tmp1724 = $tmp1723.value;
frost$core$Int $tmp1725 = (frost$core$Int) {0u};
int64_t $tmp1726 = $tmp1719.value;
int64_t $tmp1727 = $tmp1725.value;
bool $tmp1728 = $tmp1726 >= $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block70; else goto block71;
block70:;
if ($tmp1724) goto block72; else goto block73;
block72:;
int64_t $tmp1731 = $tmp1717.value;
int64_t $tmp1732 = $tmp1718.value;
bool $tmp1733 = $tmp1731 <= $tmp1732;
frost$core$Bit $tmp1734 = (frost$core$Bit) {$tmp1733};
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block67; else goto block68;
block73:;
int64_t $tmp1736 = $tmp1717.value;
int64_t $tmp1737 = $tmp1718.value;
bool $tmp1738 = $tmp1736 < $tmp1737;
frost$core$Bit $tmp1739 = (frost$core$Bit) {$tmp1738};
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block67; else goto block68;
block71:;
if ($tmp1724) goto block74; else goto block75;
block74:;
int64_t $tmp1741 = $tmp1717.value;
int64_t $tmp1742 = $tmp1718.value;
bool $tmp1743 = $tmp1741 >= $tmp1742;
frost$core$Bit $tmp1744 = (frost$core$Bit) {$tmp1743};
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block67; else goto block68;
block75:;
int64_t $tmp1746 = $tmp1717.value;
int64_t $tmp1747 = $tmp1718.value;
bool $tmp1748 = $tmp1746 > $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:879
frost$core$Int $tmp1751 = *(&local1);
frost$core$Int $tmp1752 = *(&local6);
int64_t $tmp1753 = $tmp1751.value;
int64_t $tmp1754 = $tmp1752.value;
bool $tmp1755 = $tmp1753 <= $tmp1754;
frost$core$Bit $tmp1756 = (frost$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:880
frost$core$MutableString* $tmp1758 = *(&local11);
$fn1760 $tmp1759 = ($fn1760) ((frost$core$Object*) $tmp1758)->$class->vtable[0];
frost$core$String* $tmp1761 = $tmp1759(((frost$core$Object*) $tmp1758));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$MutableString* $tmp1762 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1761;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:882
frost$core$Int $tmp1763 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:882:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1764 = &(&local20)->value;
*$tmp1764 = $tmp1763;
frost$core$String$Index $tmp1765 = *(&local20);
*(&local19) = $tmp1765;
frost$core$String$Index $tmp1766 = *(&local19);
frost$core$String$Index $tmp1767 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1766);
frost$core$Int $tmp1768 = $tmp1767.value;
*(&local1) = $tmp1768;
frost$core$Int $tmp1769 = *(&local18);
if ($tmp1730) goto block80; else goto block81;
block80:;
int64_t $tmp1770 = $tmp1718.value;
int64_t $tmp1771 = $tmp1769.value;
int64_t $tmp1772 = $tmp1770 - $tmp1771;
frost$core$Int $tmp1773 = (frost$core$Int) {$tmp1772};
if ($tmp1724) goto block82; else goto block83;
block82:;
int64_t $tmp1774 = $tmp1773.value;
int64_t $tmp1775 = $tmp1719.value;
bool $tmp1776 = $tmp1774 >= $tmp1775;
frost$core$Bit $tmp1777 = (frost$core$Bit) {$tmp1776};
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block79; else goto block68;
block83:;
int64_t $tmp1779 = $tmp1773.value;
int64_t $tmp1780 = $tmp1719.value;
bool $tmp1781 = $tmp1779 > $tmp1780;
frost$core$Bit $tmp1782 = (frost$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block79; else goto block68;
block81:;
int64_t $tmp1784 = $tmp1769.value;
int64_t $tmp1785 = $tmp1718.value;
int64_t $tmp1786 = $tmp1784 - $tmp1785;
frost$core$Int $tmp1787 = (frost$core$Int) {$tmp1786};
if ($tmp1724) goto block84; else goto block85;
block84:;
int64_t $tmp1788 = $tmp1787.value;
int64_t $tmp1789 = $tmp1722.value;
bool $tmp1790 = $tmp1788 >= $tmp1789;
frost$core$Bit $tmp1791 = (frost$core$Bit) {$tmp1790};
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block79; else goto block68;
block85:;
int64_t $tmp1793 = $tmp1787.value;
int64_t $tmp1794 = $tmp1722.value;
bool $tmp1795 = $tmp1793 > $tmp1794;
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block79; else goto block68;
block79:;
int64_t $tmp1798 = $tmp1769.value;
int64_t $tmp1799 = $tmp1719.value;
int64_t $tmp1800 = $tmp1798 + $tmp1799;
frost$core$Int $tmp1801 = (frost$core$Int) {$tmp1800};
*(&local18) = $tmp1801;
goto block67;
block68:;
goto block53;
block55:;
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:886
frost$core$Bit $tmp1802 = param1.inclusive;
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block89; else goto block90;
block90:;
frost$core$String$Index$nullable $tmp1804 = param1.end;
frost$core$Bit $tmp1805 = (frost$core$Bit) {!$tmp1804.nonnull};
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block89; else goto block87;
block89:;
frost$core$Int $tmp1807 = *(&local1);
frost$core$Int $tmp1808 = *(&local6);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:886:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1809 = $tmp1807.value;
int64_t $tmp1810 = $tmp1808.value;
bool $tmp1811 = $tmp1809 == $tmp1810;
frost$core$Bit $tmp1812 = (frost$core$Bit) {$tmp1811};
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block88; else goto block87;
block88:;
frost$core$Int $tmp1814 = *(&local6);
frost$core$Int* $tmp1815 = &param0->_length;
frost$core$Int $tmp1816 = *$tmp1815;
int64_t $tmp1817 = $tmp1814.value;
int64_t $tmp1818 = $tmp1816.value;
bool $tmp1819 = $tmp1817 < $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:887
frost$core$Char8** $tmp1822 = &param0->data;
frost$core$Char8* $tmp1823 = *$tmp1822;
frost$core$Int $tmp1824 = *(&local1);
frost$core$Int64 $tmp1825 = frost$core$Int64$init$frost$core$Int($tmp1824);
int64_t $tmp1826 = $tmp1825.value;
frost$core$Char8 $tmp1827 = $tmp1823[$tmp1826];
*(&local21) = $tmp1827;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:888
frost$core$MutableString* $tmp1828 = *(&local11);
frost$core$Char8 $tmp1829 = *(&local21);
frost$core$MutableString$append$frost$core$Char8($tmp1828, $tmp1829);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:889
frost$core$Int $tmp1830 = *(&local1);
frost$core$Int $tmp1831 = (frost$core$Int) {1u};
int64_t $tmp1832 = $tmp1830.value;
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832 + $tmp1833;
frost$core$Int $tmp1835 = (frost$core$Int) {$tmp1834};
*(&local1) = $tmp1835;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:890
frost$core$Char8 $tmp1836 = *(&local21);
uint8_t $tmp1837 = $tmp1836.value;
int64_t $tmp1838 = ((int64_t) $tmp1837) & 255u;
bool $tmp1839 = $tmp1838 >= 192u;
frost$core$Bit $tmp1840 = (frost$core$Bit) {$tmp1839};
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:891
frost$core$MutableString* $tmp1842 = *(&local11);
frost$core$Char8** $tmp1843 = &param0->data;
frost$core$Char8* $tmp1844 = *$tmp1843;
frost$core$Int $tmp1845 = *(&local1);
frost$core$Int64 $tmp1846 = frost$core$Int64$init$frost$core$Int($tmp1845);
int64_t $tmp1847 = $tmp1846.value;
frost$core$Char8 $tmp1848 = $tmp1844[$tmp1847];
frost$core$MutableString$append$frost$core$Char8($tmp1842, $tmp1848);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:892
frost$core$Int $tmp1849 = *(&local1);
frost$core$Int $tmp1850 = (frost$core$Int) {1u};
int64_t $tmp1851 = $tmp1849.value;
int64_t $tmp1852 = $tmp1850.value;
int64_t $tmp1853 = $tmp1851 + $tmp1852;
frost$core$Int $tmp1854 = (frost$core$Int) {$tmp1853};
*(&local1) = $tmp1854;
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:894
frost$core$Char8 $tmp1855 = *(&local21);
uint8_t $tmp1856 = $tmp1855.value;
int64_t $tmp1857 = ((int64_t) $tmp1856) & 255u;
bool $tmp1858 = $tmp1857 >= 224u;
frost$core$Bit $tmp1859 = (frost$core$Bit) {$tmp1858};
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:895
frost$core$MutableString* $tmp1861 = *(&local11);
frost$core$Char8** $tmp1862 = &param0->data;
frost$core$Char8* $tmp1863 = *$tmp1862;
frost$core$Int $tmp1864 = *(&local1);
frost$core$Int64 $tmp1865 = frost$core$Int64$init$frost$core$Int($tmp1864);
int64_t $tmp1866 = $tmp1865.value;
frost$core$Char8 $tmp1867 = $tmp1863[$tmp1866];
frost$core$MutableString$append$frost$core$Char8($tmp1861, $tmp1867);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:896
frost$core$Int $tmp1868 = *(&local1);
frost$core$Int $tmp1869 = (frost$core$Int) {1u};
int64_t $tmp1870 = $tmp1868.value;
int64_t $tmp1871 = $tmp1869.value;
int64_t $tmp1872 = $tmp1870 + $tmp1871;
frost$core$Int $tmp1873 = (frost$core$Int) {$tmp1872};
*(&local1) = $tmp1873;
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:898
frost$core$Char8 $tmp1874 = *(&local21);
uint8_t $tmp1875 = $tmp1874.value;
int64_t $tmp1876 = ((int64_t) $tmp1875) & 255u;
bool $tmp1877 = $tmp1876 >= 240u;
frost$core$Bit $tmp1878 = (frost$core$Bit) {$tmp1877};
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:899
frost$core$MutableString* $tmp1880 = *(&local11);
frost$core$Char8** $tmp1881 = &param0->data;
frost$core$Char8* $tmp1882 = *$tmp1881;
frost$core$Int $tmp1883 = *(&local1);
frost$core$Int64 $tmp1884 = frost$core$Int64$init$frost$core$Int($tmp1883);
int64_t $tmp1885 = $tmp1884.value;
frost$core$Char8 $tmp1886 = $tmp1882[$tmp1885];
frost$core$MutableString$append$frost$core$Char8($tmp1880, $tmp1886);
goto block97;
block97:;
goto block87;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:902
frost$core$MutableString* $tmp1887 = *(&local11);
frost$core$String* $tmp1888 = frost$core$MutableString$finish$R$frost$core$String($tmp1887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
frost$core$MutableString* $tmp1889 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1888;

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
frost$core$Int$nullable $tmp1890 = param1.min;
frost$core$Bit $tmp1891 = (frost$core$Bit) {$tmp1890.nonnull};
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:913
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:913:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1893 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1894 = &(&local2)->value;
*$tmp1894 = $tmp1893;
frost$core$String$Index $tmp1895 = *(&local2);
*(&local1) = $tmp1895;
frost$core$String$Index $tmp1896 = *(&local1);
frost$core$Int$nullable $tmp1897 = param1.min;
frost$core$Bit $tmp1898 = (frost$core$Bit) {$tmp1897.nonnull};
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1900 = (frost$core$Int) {913u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1901, $tmp1900, &$s1902);
abort(); // unreachable
block6:;
frost$core$String$Index $tmp1903 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1896, ((frost$core$Int) $tmp1897.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1903, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:918
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:919
frost$core$Int$nullable $tmp1904 = param1.max;
frost$core$Bit $tmp1905 = (frost$core$Bit) {$tmp1904.nonnull};
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:920
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:920:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1907 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1908 = &(&local5)->value;
*$tmp1908 = $tmp1907;
frost$core$String$Index $tmp1909 = *(&local5);
*(&local4) = $tmp1909;
frost$core$String$Index $tmp1910 = *(&local4);
frost$core$Int$nullable $tmp1911 = param1.max;
frost$core$Bit $tmp1912 = (frost$core$Bit) {$tmp1911.nonnull};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1914 = (frost$core$Int) {920u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1915, $tmp1914, &$s1916);
abort(); // unreachable
block13:;
frost$core$String$Index $tmp1917 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1910, ((frost$core$Int) $tmp1911.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1917, true });
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:923
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:925
frost$core$String$Index$nullable $tmp1918 = *(&local0);
frost$core$String$Index$nullable $tmp1919 = *(&local3);
frost$core$Bit $tmp1920 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1921 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1918, $tmp1919, $tmp1920);
frost$core$String* $tmp1922 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1921);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
return $tmp1922;

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
frost$core$Int$nullable $tmp1923 = param1.start;
frost$core$Bit $tmp1924 = (frost$core$Bit) {$tmp1923.nonnull};
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:936
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:936:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1926 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1927 = &(&local2)->value;
*$tmp1927 = $tmp1926;
frost$core$String$Index $tmp1928 = *(&local2);
*(&local1) = $tmp1928;
frost$core$String$Index $tmp1929 = *(&local1);
frost$core$Int$nullable $tmp1930 = param1.start;
frost$core$Bit $tmp1931 = (frost$core$Bit) {$tmp1930.nonnull};
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1933 = (frost$core$Int) {936u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1934, $tmp1933, &$s1935);
abort(); // unreachable
block6:;
frost$core$String$Index $tmp1936 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1929, ((frost$core$Int) $tmp1930.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1936, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:941
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:942
frost$core$Int$nullable $tmp1937 = param1.end;
frost$core$Bit $tmp1938 = (frost$core$Bit) {$tmp1937.nonnull};
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:943
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:943:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp1940 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp1941 = &(&local5)->value;
*$tmp1941 = $tmp1940;
frost$core$String$Index $tmp1942 = *(&local5);
*(&local4) = $tmp1942;
frost$core$String$Index $tmp1943 = *(&local4);
frost$core$Int$nullable $tmp1944 = param1.end;
frost$core$Bit $tmp1945 = (frost$core$Bit) {$tmp1944.nonnull};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1947 = (frost$core$Int) {943u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1948, $tmp1947, &$s1949);
abort(); // unreachable
block13:;
frost$core$String$Index $tmp1950 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(param0, $tmp1943, ((frost$core$Int) $tmp1944.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1950, true });
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:946
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:948
frost$core$String$Index$nullable $tmp1951 = *(&local0);
frost$core$String$Index$nullable $tmp1952 = *(&local3);
frost$core$Int $tmp1953 = param1.step;
frost$core$Bit $tmp1954 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT $tmp1955 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int$frost$core$Bit($tmp1951, $tmp1952, $tmp1953, $tmp1954);
frost$core$String* $tmp1956 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int$GT$R$frost$core$String(param0, $tmp1955);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
return $tmp1956;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:955
frost$core$Int $tmp1957 = (frost$core$Int) {0u};
frost$core$Int* $tmp1958 = &param0->_length;
frost$core$Int $tmp1959 = *$tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1961 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1957, $tmp1959, $tmp1960);
frost$core$Int $tmp1962 = $tmp1961.min;
*(&local0) = $tmp1962;
frost$core$Int $tmp1963 = $tmp1961.max;
frost$core$Bit $tmp1964 = $tmp1961.inclusive;
bool $tmp1965 = $tmp1964.value;
frost$core$Int $tmp1966 = (frost$core$Int) {1u};
if ($tmp1965) goto block4; else goto block5;
block4:;
int64_t $tmp1967 = $tmp1962.value;
int64_t $tmp1968 = $tmp1963.value;
bool $tmp1969 = $tmp1967 <= $tmp1968;
frost$core$Bit $tmp1970 = (frost$core$Bit) {$tmp1969};
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block1; else goto block2;
block5:;
int64_t $tmp1972 = $tmp1962.value;
int64_t $tmp1973 = $tmp1963.value;
bool $tmp1974 = $tmp1972 < $tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {$tmp1974};
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:956
frost$core$Char8** $tmp1977 = &param0->data;
frost$core$Char8* $tmp1978 = *$tmp1977;
frost$core$Int $tmp1979 = *(&local0);
frost$core$Int64 $tmp1980 = frost$core$Int64$init$frost$core$Int($tmp1979);
int64_t $tmp1981 = $tmp1980.value;
frost$core$Char8 $tmp1982 = $tmp1978[$tmp1981];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:956:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp1983 = $tmp1982.value;
uint8_t $tmp1984 = param1.value;
bool $tmp1985 = $tmp1983 == $tmp1984;
frost$core$Bit $tmp1986 = (frost$core$Bit) {$tmp1985};
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:957
frost$core$Bit $tmp1988 = (frost$core$Bit) {true};
return $tmp1988;
block7:;
frost$core$Int $tmp1989 = *(&local0);
int64_t $tmp1990 = $tmp1963.value;
int64_t $tmp1991 = $tmp1989.value;
int64_t $tmp1992 = $tmp1990 - $tmp1991;
frost$core$Int $tmp1993 = (frost$core$Int) {$tmp1992};
if ($tmp1965) goto block10; else goto block11;
block10:;
int64_t $tmp1994 = $tmp1993.value;
int64_t $tmp1995 = $tmp1966.value;
bool $tmp1996 = $tmp1994 >= $tmp1995;
frost$core$Bit $tmp1997 = (frost$core$Bit) {$tmp1996};
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block9; else goto block2;
block11:;
int64_t $tmp1999 = $tmp1993.value;
int64_t $tmp2000 = $tmp1966.value;
bool $tmp2001 = $tmp1999 > $tmp2000;
frost$core$Bit $tmp2002 = (frost$core$Bit) {$tmp2001};
bool $tmp2003 = $tmp2002.value;
if ($tmp2003) goto block9; else goto block2;
block9:;
int64_t $tmp2004 = $tmp1989.value;
int64_t $tmp2005 = $tmp1966.value;
int64_t $tmp2006 = $tmp2004 + $tmp2005;
frost$core$Int $tmp2007 = (frost$core$Int) {$tmp2006};
*(&local0) = $tmp2007;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:960
frost$core$Bit $tmp2008 = (frost$core$Bit) {false};
return $tmp2008;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2009 = (frost$core$Int) {0u};
frost$core$String$Index $tmp2010 = frost$core$String$Index$init$frost$core$Int($tmp2009);
frost$core$String$Index$nullable $tmp2011 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2010);
frost$core$Bit $tmp2012 = (frost$core$Bit) {$tmp2011.nonnull};
return $tmp2012;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2013 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2014 = &(&local1)->value;
*$tmp2014 = $tmp2013;
frost$core$String$Index $tmp2015 = *(&local1);
*(&local0) = $tmp2015;
frost$core$String$Index $tmp2016 = *(&local0);
frost$core$String$Index$nullable $tmp2017 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2016);
return $tmp2017;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:990
frost$core$Int* $tmp2018 = &param0->_length;
frost$core$Int $tmp2019 = *$tmp2018;
frost$core$Int* $tmp2020 = &param1->_length;
frost$core$Int $tmp2021 = *$tmp2020;
int64_t $tmp2022 = $tmp2019.value;
int64_t $tmp2023 = $tmp2021.value;
bool $tmp2024 = $tmp2022 < $tmp2023;
frost$core$Bit $tmp2025 = (frost$core$Bit) {$tmp2024};
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:993
frost$core$Int $tmp2027 = param2.value;
frost$core$Int* $tmp2028 = &param0->_length;
frost$core$Int $tmp2029 = *$tmp2028;
frost$core$Int* $tmp2030 = &param1->_length;
frost$core$Int $tmp2031 = *$tmp2030;
int64_t $tmp2032 = $tmp2029.value;
int64_t $tmp2033 = $tmp2031.value;
int64_t $tmp2034 = $tmp2032 - $tmp2033;
frost$core$Int $tmp2035 = (frost$core$Int) {$tmp2034};
frost$core$Bit $tmp2036 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp2037 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2027, $tmp2035, $tmp2036);
frost$core$Int $tmp2038 = $tmp2037.min;
*(&local0) = $tmp2038;
frost$core$Int $tmp2039 = $tmp2037.max;
frost$core$Bit $tmp2040 = $tmp2037.inclusive;
bool $tmp2041 = $tmp2040.value;
frost$core$Int $tmp2042 = (frost$core$Int) {1u};
if ($tmp2041) goto block6; else goto block7;
block6:;
int64_t $tmp2043 = $tmp2038.value;
int64_t $tmp2044 = $tmp2039.value;
bool $tmp2045 = $tmp2043 <= $tmp2044;
frost$core$Bit $tmp2046 = (frost$core$Bit) {$tmp2045};
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block3; else goto block4;
block7:;
int64_t $tmp2048 = $tmp2038.value;
int64_t $tmp2049 = $tmp2039.value;
bool $tmp2050 = $tmp2048 < $tmp2049;
frost$core$Bit $tmp2051 = (frost$core$Bit) {$tmp2050};
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:994
frost$core$Int $tmp2053 = (frost$core$Int) {0u};
frost$core$Int* $tmp2054 = &param1->_length;
frost$core$Int $tmp2055 = *$tmp2054;
frost$core$Bit $tmp2056 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2057 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2053, $tmp2055, $tmp2056);
frost$core$Int $tmp2058 = $tmp2057.min;
*(&local1) = $tmp2058;
frost$core$Int $tmp2059 = $tmp2057.max;
frost$core$Bit $tmp2060 = $tmp2057.inclusive;
bool $tmp2061 = $tmp2060.value;
frost$core$Int $tmp2062 = (frost$core$Int) {1u};
if ($tmp2061) goto block11; else goto block12;
block11:;
int64_t $tmp2063 = $tmp2058.value;
int64_t $tmp2064 = $tmp2059.value;
bool $tmp2065 = $tmp2063 <= $tmp2064;
frost$core$Bit $tmp2066 = (frost$core$Bit) {$tmp2065};
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block8; else goto block9;
block12:;
int64_t $tmp2068 = $tmp2058.value;
int64_t $tmp2069 = $tmp2059.value;
bool $tmp2070 = $tmp2068 < $tmp2069;
frost$core$Bit $tmp2071 = (frost$core$Bit) {$tmp2070};
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:995
frost$core$Char8** $tmp2073 = &param0->data;
frost$core$Char8* $tmp2074 = *$tmp2073;
frost$core$Int $tmp2075 = *(&local0);
frost$core$Int $tmp2076 = *(&local1);
int64_t $tmp2077 = $tmp2075.value;
int64_t $tmp2078 = $tmp2076.value;
int64_t $tmp2079 = $tmp2077 + $tmp2078;
frost$core$Int $tmp2080 = (frost$core$Int) {$tmp2079};
frost$core$Int64 $tmp2081 = frost$core$Int64$init$frost$core$Int($tmp2080);
int64_t $tmp2082 = $tmp2081.value;
frost$core$Char8 $tmp2083 = $tmp2074[$tmp2082];
frost$core$Char8** $tmp2084 = &param1->data;
frost$core$Char8* $tmp2085 = *$tmp2084;
frost$core$Int $tmp2086 = *(&local1);
frost$core$Int64 $tmp2087 = frost$core$Int64$init$frost$core$Int($tmp2086);
int64_t $tmp2088 = $tmp2087.value;
frost$core$Char8 $tmp2089 = $tmp2085[$tmp2088];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:995:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp2090 = $tmp2083.value;
uint8_t $tmp2091 = $tmp2089.value;
bool $tmp2092 = $tmp2090 != $tmp2091;
frost$core$Bit $tmp2093 = (frost$core$Bit) {$tmp2092};
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:996
frost$core$Int $tmp2095 = *(&local0);
int64_t $tmp2096 = $tmp2039.value;
int64_t $tmp2097 = $tmp2095.value;
int64_t $tmp2098 = $tmp2096 - $tmp2097;
frost$core$Int $tmp2099 = (frost$core$Int) {$tmp2098};
if ($tmp2041) goto block23; else goto block24;
block14:;
frost$core$Int $tmp2100 = *(&local1);
int64_t $tmp2101 = $tmp2059.value;
int64_t $tmp2102 = $tmp2100.value;
int64_t $tmp2103 = $tmp2101 - $tmp2102;
frost$core$Int $tmp2104 = (frost$core$Int) {$tmp2103};
if ($tmp2061) goto block17; else goto block18;
block17:;
int64_t $tmp2105 = $tmp2104.value;
int64_t $tmp2106 = $tmp2062.value;
bool $tmp2107 = $tmp2105 >= $tmp2106;
frost$core$Bit $tmp2108 = (frost$core$Bit) {$tmp2107};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block16; else goto block9;
block18:;
int64_t $tmp2110 = $tmp2104.value;
int64_t $tmp2111 = $tmp2062.value;
bool $tmp2112 = $tmp2110 > $tmp2111;
frost$core$Bit $tmp2113 = (frost$core$Bit) {$tmp2112};
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block16; else goto block9;
block16:;
int64_t $tmp2115 = $tmp2100.value;
int64_t $tmp2116 = $tmp2062.value;
int64_t $tmp2117 = $tmp2115 + $tmp2116;
frost$core$Int $tmp2118 = (frost$core$Int) {$tmp2117};
*(&local1) = $tmp2118;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:999
frost$core$Int $tmp2119 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:999:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2120 = &(&local3)->value;
*$tmp2120 = $tmp2119;
frost$core$String$Index $tmp2121 = *(&local3);
*(&local2) = $tmp2121;
frost$core$String$Index $tmp2122 = *(&local2);
frost$core$Bit $tmp2123 = (frost$core$Bit) {((frost$core$String$Index$nullable) { $tmp2122, true }).nonnull};
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block20; else goto block21;
block21:;
frost$core$Int $tmp2125 = (frost$core$Int) {999u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2126, $tmp2125, &$s2127);
abort(); // unreachable
block20:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2122, true }).value), true });
block23:;
int64_t $tmp2128 = $tmp2099.value;
int64_t $tmp2129 = $tmp2042.value;
bool $tmp2130 = $tmp2128 >= $tmp2129;
frost$core$Bit $tmp2131 = (frost$core$Bit) {$tmp2130};
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block22; else goto block4;
block24:;
int64_t $tmp2133 = $tmp2099.value;
int64_t $tmp2134 = $tmp2042.value;
bool $tmp2135 = $tmp2133 > $tmp2134;
frost$core$Bit $tmp2136 = (frost$core$Bit) {$tmp2135};
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block22; else goto block4;
block22:;
int64_t $tmp2138 = $tmp2095.value;
int64_t $tmp2139 = $tmp2042.value;
int64_t $tmp2140 = $tmp2138 + $tmp2139;
frost$core$Int $tmp2141 = (frost$core$Int) {$tmp2140};
*(&local0) = $tmp2141;
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
frost$core$Int* $tmp2142 = &param0->_length;
frost$core$Int $tmp2143 = *$tmp2142;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2144 = &(&local1)->value;
*$tmp2144 = $tmp2143;
frost$core$String$Index $tmp2145 = *(&local1);
*(&local0) = $tmp2145;
frost$core$String$Index $tmp2146 = *(&local0);
frost$core$String$Index$nullable $tmp2147 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2146);
return $tmp2147;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1024
frost$core$Int* $tmp2148 = &param0->_length;
frost$core$Int $tmp2149 = *$tmp2148;
frost$core$Int* $tmp2150 = &param1->_length;
frost$core$Int $tmp2151 = *$tmp2150;
int64_t $tmp2152 = $tmp2149.value;
int64_t $tmp2153 = $tmp2151.value;
bool $tmp2154 = $tmp2152 < $tmp2153;
frost$core$Bit $tmp2155 = (frost$core$Bit) {$tmp2154};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1027
frost$core$Int $tmp2157 = param2.value;
frost$core$Int* $tmp2158 = &param0->_length;
frost$core$Int $tmp2159 = *$tmp2158;
frost$core$Int* $tmp2160 = &param1->_length;
frost$core$Int $tmp2161 = *$tmp2160;
int64_t $tmp2162 = $tmp2159.value;
int64_t $tmp2163 = $tmp2161.value;
int64_t $tmp2164 = $tmp2162 - $tmp2163;
frost$core$Int $tmp2165 = (frost$core$Int) {$tmp2164};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from String.frost:1027:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
int64_t $tmp2166 = $tmp2157.value;
int64_t $tmp2167 = $tmp2165.value;
bool $tmp2168 = $tmp2166 < $tmp2167;
frost$core$Bit $tmp2169 = (frost$core$Bit) {$tmp2168};
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
int64_t $tmp2171 = $tmp2157.value;
frost$core$Int $tmp2172 = (frost$core$Int) {$tmp2171};
*(&local0) = $tmp2172;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
int64_t $tmp2173 = $tmp2165.value;
frost$core$Int $tmp2174 = (frost$core$Int) {$tmp2173};
*(&local0) = $tmp2174;
goto block3;
block3:;
frost$core$Int $tmp2175 = *(&local0);
*(&local1) = $tmp2175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1028
frost$core$Int $tmp2176 = *(&local1);
frost$core$Int $tmp2177 = (frost$core$Int) {0u};
frost$core$Int $tmp2178 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp2179 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp2180 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2176, $tmp2177, $tmp2178, $tmp2179);
frost$core$Int $tmp2181 = $tmp2180.start;
*(&local2) = $tmp2181;
frost$core$Int $tmp2182 = $tmp2180.end;
frost$core$Int $tmp2183 = $tmp2180.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1028:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp2184 = $tmp2183.value;
int64_t $tmp2185 = -$tmp2184;
frost$core$Int $tmp2186 = (frost$core$Int) {$tmp2185};
frost$core$Bit $tmp2187 = $tmp2180.inclusive;
bool $tmp2188 = $tmp2187.value;
frost$core$Int $tmp2189 = (frost$core$Int) {0u};
int64_t $tmp2190 = $tmp2183.value;
int64_t $tmp2191 = $tmp2189.value;
bool $tmp2192 = $tmp2190 >= $tmp2191;
frost$core$Bit $tmp2193 = (frost$core$Bit) {$tmp2192};
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block10; else goto block11;
block10:;
if ($tmp2188) goto block12; else goto block13;
block12:;
int64_t $tmp2195 = $tmp2181.value;
int64_t $tmp2196 = $tmp2182.value;
bool $tmp2197 = $tmp2195 <= $tmp2196;
frost$core$Bit $tmp2198 = (frost$core$Bit) {$tmp2197};
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block7; else goto block8;
block13:;
int64_t $tmp2200 = $tmp2181.value;
int64_t $tmp2201 = $tmp2182.value;
bool $tmp2202 = $tmp2200 < $tmp2201;
frost$core$Bit $tmp2203 = (frost$core$Bit) {$tmp2202};
bool $tmp2204 = $tmp2203.value;
if ($tmp2204) goto block7; else goto block8;
block11:;
if ($tmp2188) goto block14; else goto block15;
block14:;
int64_t $tmp2205 = $tmp2181.value;
int64_t $tmp2206 = $tmp2182.value;
bool $tmp2207 = $tmp2205 >= $tmp2206;
frost$core$Bit $tmp2208 = (frost$core$Bit) {$tmp2207};
bool $tmp2209 = $tmp2208.value;
if ($tmp2209) goto block7; else goto block8;
block15:;
int64_t $tmp2210 = $tmp2181.value;
int64_t $tmp2211 = $tmp2182.value;
bool $tmp2212 = $tmp2210 > $tmp2211;
frost$core$Bit $tmp2213 = (frost$core$Bit) {$tmp2212};
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1029
frost$core$Int $tmp2215 = (frost$core$Int) {0u};
frost$core$Int* $tmp2216 = &param1->_length;
frost$core$Int $tmp2217 = *$tmp2216;
frost$core$Bit $tmp2218 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2219 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2215, $tmp2217, $tmp2218);
frost$core$Int $tmp2220 = $tmp2219.min;
*(&local3) = $tmp2220;
frost$core$Int $tmp2221 = $tmp2219.max;
frost$core$Bit $tmp2222 = $tmp2219.inclusive;
bool $tmp2223 = $tmp2222.value;
frost$core$Int $tmp2224 = (frost$core$Int) {1u};
if ($tmp2223) goto block19; else goto block20;
block19:;
int64_t $tmp2225 = $tmp2220.value;
int64_t $tmp2226 = $tmp2221.value;
bool $tmp2227 = $tmp2225 <= $tmp2226;
frost$core$Bit $tmp2228 = (frost$core$Bit) {$tmp2227};
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block16; else goto block17;
block20:;
int64_t $tmp2230 = $tmp2220.value;
int64_t $tmp2231 = $tmp2221.value;
bool $tmp2232 = $tmp2230 < $tmp2231;
frost$core$Bit $tmp2233 = (frost$core$Bit) {$tmp2232};
bool $tmp2234 = $tmp2233.value;
if ($tmp2234) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1030
frost$core$Char8** $tmp2235 = &param0->data;
frost$core$Char8* $tmp2236 = *$tmp2235;
frost$core$Int $tmp2237 = *(&local2);
frost$core$Int $tmp2238 = *(&local3);
int64_t $tmp2239 = $tmp2237.value;
int64_t $tmp2240 = $tmp2238.value;
int64_t $tmp2241 = $tmp2239 + $tmp2240;
frost$core$Int $tmp2242 = (frost$core$Int) {$tmp2241};
frost$core$Int64 $tmp2243 = frost$core$Int64$init$frost$core$Int($tmp2242);
int64_t $tmp2244 = $tmp2243.value;
frost$core$Char8 $tmp2245 = $tmp2236[$tmp2244];
frost$core$Char8** $tmp2246 = &param1->data;
frost$core$Char8* $tmp2247 = *$tmp2246;
frost$core$Int $tmp2248 = *(&local3);
frost$core$Int64 $tmp2249 = frost$core$Int64$init$frost$core$Int($tmp2248);
int64_t $tmp2250 = $tmp2249.value;
frost$core$Char8 $tmp2251 = $tmp2247[$tmp2250];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:1030:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp2252 = $tmp2245.value;
uint8_t $tmp2253 = $tmp2251.value;
bool $tmp2254 = $tmp2252 != $tmp2253;
frost$core$Bit $tmp2255 = (frost$core$Bit) {$tmp2254};
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1031
frost$core$Int $tmp2257 = *(&local2);
if ($tmp2194) goto block31; else goto block32;
block22:;
frost$core$Int $tmp2258 = *(&local3);
int64_t $tmp2259 = $tmp2221.value;
int64_t $tmp2260 = $tmp2258.value;
int64_t $tmp2261 = $tmp2259 - $tmp2260;
frost$core$Int $tmp2262 = (frost$core$Int) {$tmp2261};
if ($tmp2223) goto block25; else goto block26;
block25:;
int64_t $tmp2263 = $tmp2262.value;
int64_t $tmp2264 = $tmp2224.value;
bool $tmp2265 = $tmp2263 >= $tmp2264;
frost$core$Bit $tmp2266 = (frost$core$Bit) {$tmp2265};
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block24; else goto block17;
block26:;
int64_t $tmp2268 = $tmp2262.value;
int64_t $tmp2269 = $tmp2224.value;
bool $tmp2270 = $tmp2268 > $tmp2269;
frost$core$Bit $tmp2271 = (frost$core$Bit) {$tmp2270};
bool $tmp2272 = $tmp2271.value;
if ($tmp2272) goto block24; else goto block17;
block24:;
int64_t $tmp2273 = $tmp2258.value;
int64_t $tmp2274 = $tmp2224.value;
int64_t $tmp2275 = $tmp2273 + $tmp2274;
frost$core$Int $tmp2276 = (frost$core$Int) {$tmp2275};
*(&local3) = $tmp2276;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1034
frost$core$Int $tmp2277 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1034:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2278 = &(&local5)->value;
*$tmp2278 = $tmp2277;
frost$core$String$Index $tmp2279 = *(&local5);
*(&local4) = $tmp2279;
frost$core$String$Index $tmp2280 = *(&local4);
frost$core$Bit $tmp2281 = (frost$core$Bit) {((frost$core$String$Index$nullable) { $tmp2280, true }).nonnull};
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block28; else goto block29;
block29:;
frost$core$Int $tmp2283 = (frost$core$Int) {1034u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2284, $tmp2283, &$s2285);
abort(); // unreachable
block28:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2280, true }).value), true });
block31:;
int64_t $tmp2286 = $tmp2182.value;
int64_t $tmp2287 = $tmp2257.value;
int64_t $tmp2288 = $tmp2286 - $tmp2287;
frost$core$Int $tmp2289 = (frost$core$Int) {$tmp2288};
if ($tmp2188) goto block33; else goto block34;
block33:;
int64_t $tmp2290 = $tmp2289.value;
int64_t $tmp2291 = $tmp2183.value;
bool $tmp2292 = $tmp2290 >= $tmp2291;
frost$core$Bit $tmp2293 = (frost$core$Bit) {$tmp2292};
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block30; else goto block8;
block34:;
int64_t $tmp2295 = $tmp2289.value;
int64_t $tmp2296 = $tmp2183.value;
bool $tmp2297 = $tmp2295 > $tmp2296;
frost$core$Bit $tmp2298 = (frost$core$Bit) {$tmp2297};
bool $tmp2299 = $tmp2298.value;
if ($tmp2299) goto block30; else goto block8;
block32:;
int64_t $tmp2300 = $tmp2257.value;
int64_t $tmp2301 = $tmp2182.value;
int64_t $tmp2302 = $tmp2300 - $tmp2301;
frost$core$Int $tmp2303 = (frost$core$Int) {$tmp2302};
if ($tmp2188) goto block35; else goto block36;
block35:;
int64_t $tmp2304 = $tmp2303.value;
int64_t $tmp2305 = $tmp2186.value;
bool $tmp2306 = $tmp2304 >= $tmp2305;
frost$core$Bit $tmp2307 = (frost$core$Bit) {$tmp2306};
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block30; else goto block8;
block36:;
int64_t $tmp2309 = $tmp2303.value;
int64_t $tmp2310 = $tmp2186.value;
bool $tmp2311 = $tmp2309 > $tmp2310;
frost$core$Bit $tmp2312 = (frost$core$Bit) {$tmp2311};
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block30; else goto block8;
block30:;
int64_t $tmp2314 = $tmp2257.value;
int64_t $tmp2315 = $tmp2183.value;
int64_t $tmp2316 = $tmp2314 + $tmp2315;
frost$core$Int $tmp2317 = (frost$core$Int) {$tmp2316};
*(&local2) = $tmp2317;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp2318 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2319;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2319, $tmp2318);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
return $tmp2319;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1058
frost$core$Matcher* $tmp2320 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2321 = frost$core$Matcher$find$R$frost$core$Bit($tmp2320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
return $tmp2321;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$Q$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp2322 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$Matcher* $tmp2323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local0) = $tmp2322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp2324 = *(&local0);
frost$core$Bit $tmp2325;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2325, $tmp2324);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2327 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2327);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
frost$collections$Array* $tmp2328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local1) = $tmp2327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp2329 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp2330 = *(&local0);
frost$core$Int $tmp2331;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp2331, $tmp2330);
frost$core$Bit $tmp2332 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2333 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2329, $tmp2331, $tmp2332);
frost$core$Int $tmp2334 = $tmp2333.min;
*(&local2) = $tmp2334;
frost$core$Int $tmp2335 = $tmp2333.max;
frost$core$Bit $tmp2336 = $tmp2333.inclusive;
bool $tmp2337 = $tmp2336.value;
frost$core$Int $tmp2338 = (frost$core$Int) {1u};
if ($tmp2337) goto block6; else goto block7;
block6:;
int64_t $tmp2339 = $tmp2334.value;
int64_t $tmp2340 = $tmp2335.value;
bool $tmp2341 = $tmp2339 <= $tmp2340;
frost$core$Bit $tmp2342 = (frost$core$Bit) {$tmp2341};
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block3; else goto block4;
block7:;
int64_t $tmp2344 = $tmp2334.value;
int64_t $tmp2345 = $tmp2335.value;
bool $tmp2346 = $tmp2344 < $tmp2345;
frost$core$Bit $tmp2347 = (frost$core$Bit) {$tmp2346};
bool $tmp2348 = $tmp2347.value;
if ($tmp2348) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp2349 = *(&local1);
frost$core$Matcher* $tmp2350 = *(&local0);
frost$core$Int $tmp2351 = *(&local2);
frost$core$String* $tmp2352 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2350, $tmp2351);
frost$collections$Array$add$frost$collections$Array$T($tmp2349, ((frost$core$Object*) $tmp2352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
frost$core$Int $tmp2353 = *(&local2);
int64_t $tmp2354 = $tmp2335.value;
int64_t $tmp2355 = $tmp2353.value;
int64_t $tmp2356 = $tmp2354 - $tmp2355;
frost$core$Int $tmp2357 = (frost$core$Int) {$tmp2356};
if ($tmp2337) goto block9; else goto block10;
block9:;
int64_t $tmp2358 = $tmp2357.value;
int64_t $tmp2359 = $tmp2338.value;
bool $tmp2360 = $tmp2358 >= $tmp2359;
frost$core$Bit $tmp2361 = (frost$core$Bit) {$tmp2360};
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block8; else goto block4;
block10:;
int64_t $tmp2363 = $tmp2357.value;
int64_t $tmp2364 = $tmp2338.value;
bool $tmp2365 = $tmp2363 > $tmp2364;
frost$core$Bit $tmp2366 = (frost$core$Bit) {$tmp2365};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block8; else goto block4;
block8:;
int64_t $tmp2368 = $tmp2353.value;
int64_t $tmp2369 = $tmp2338.value;
int64_t $tmp2370 = $tmp2368 + $tmp2369;
frost$core$Int $tmp2371 = (frost$core$Int) {$tmp2370};
*(&local2) = $tmp2371;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp2372 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2372)));
frost$collections$Array* $tmp2373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2372);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
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
frost$core$Bit $tmp2376 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2377);
bool $tmp2378 = $tmp2376.value;
if ($tmp2378) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1094
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2379 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2379);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
frost$core$MutableString* $tmp2380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local0) = $tmp2379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1095
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1095:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2381 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2382 = &(&local2)->value;
*$tmp2382 = $tmp2381;
frost$core$String$Index $tmp2383 = *(&local2);
*(&local1) = $tmp2383;
frost$core$String$Index $tmp2384 = *(&local1);
*(&local3) = $tmp2384;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1096
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1097
frost$core$String$Index $tmp2385 = *(&local3);
frost$core$String$Index$nullable $tmp2386 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2385);
*(&local4) = $tmp2386;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1098
frost$core$String$Index$nullable $tmp2387 = *(&local4);
frost$core$Bit $tmp2388 = (frost$core$Bit) {!$tmp2387.nonnull};
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1099
frost$core$MutableString* $tmp2390 = *(&local0);
frost$core$String$Index $tmp2391 = *(&local3);
frost$core$Bit $tmp2392 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2393 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2391, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2392);
frost$core$String* $tmp2394 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2393);
frost$core$MutableString$append$frost$core$String($tmp2390, $tmp2394);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1100
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1106
frost$core$MutableString* $tmp2395 = *(&local0);
frost$core$String* $tmp2396 = frost$core$MutableString$finish$R$frost$core$String($tmp2395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
frost$core$MutableString* $tmp2397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2396;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1102
frost$core$MutableString* $tmp2398 = *(&local0);
frost$core$String$Index $tmp2399 = *(&local3);
frost$core$String$Index$nullable $tmp2400 = *(&local4);
frost$core$Bit $tmp2401 = (frost$core$Bit) {$tmp2400.nonnull};
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2403 = (frost$core$Int) {1102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2404, $tmp2403, &$s2405);
abort(); // unreachable
block9:;
frost$core$Bit $tmp2406 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp2407 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2399, ((frost$core$String$Index) $tmp2400.value), $tmp2406);
frost$core$String* $tmp2408 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2407);
frost$core$MutableString$append$frost$core$String($tmp2398, $tmp2408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1103
frost$core$MutableString* $tmp2409 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2409, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1104
frost$core$String$Index$nullable $tmp2410 = *(&local4);
frost$core$Bit $tmp2411 = (frost$core$Bit) {$tmp2410.nonnull};
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block11; else goto block12;
block12:;
frost$core$Int $tmp2413 = (frost$core$Int) {1104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2414, $tmp2413, &$s2415);
abort(); // unreachable
block11:;
frost$core$Int $tmp2416 = ((frost$core$String$Index) $tmp2410.value).value;
frost$core$Int* $tmp2417 = &param1->_length;
frost$core$Int $tmp2418 = *$tmp2417;
int64_t $tmp2419 = $tmp2416.value;
int64_t $tmp2420 = $tmp2418.value;
int64_t $tmp2421 = $tmp2419 + $tmp2420;
frost$core$Int $tmp2422 = (frost$core$Int) {$tmp2421};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1104:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2423 = &(&local6)->value;
*$tmp2423 = $tmp2422;
frost$core$String$Index $tmp2424 = *(&local6);
*(&local5) = $tmp2424;
frost$core$String$Index $tmp2425 = *(&local5);
*(&local3) = $tmp2425;
goto block5;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
frost$core$Bit $tmp2426 = (frost$core$Bit) {true};
frost$core$String* $tmp2427 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
return $tmp2427;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1125
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2428 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2428);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
frost$core$MutableString* $tmp2429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
*(&local0) = $tmp2428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1126
frost$core$Matcher* $tmp2430 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
frost$core$Matcher* $tmp2431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
*(&local1) = $tmp2430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1127
goto block1;
block1:;
frost$core$Matcher* $tmp2432 = *(&local1);
frost$core$Bit $tmp2433 = frost$core$Matcher$find$R$frost$core$Bit($tmp2432);
bool $tmp2434 = $tmp2433.value;
if ($tmp2434) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1128
frost$core$Matcher* $tmp2435 = *(&local1);
frost$core$MutableString* $tmp2436 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2435, $tmp2436, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1130
frost$core$Matcher* $tmp2437 = *(&local1);
frost$core$MutableString* $tmp2438 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1130:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2439 = &$tmp2437->searchText;
frost$core$String* $tmp2440 = *$tmp2439;
frost$core$String$Index* $tmp2441 = &$tmp2437->replacementIndex;
frost$core$String$Index $tmp2442 = *$tmp2441;
frost$core$Bit $tmp2443 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2444 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2442, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2443);
frost$core$String* $tmp2445 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2440, $tmp2444);
frost$core$MutableString$append$frost$core$String($tmp2438, $tmp2445);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1131
frost$core$MutableString* $tmp2446 = *(&local0);
frost$core$String* $tmp2447 = frost$core$MutableString$finish$R$frost$core$String($tmp2446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
frost$core$Matcher* $tmp2448 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2447;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1152
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2450 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2450);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$MutableString* $tmp2451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local0) = $tmp2450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1153
frost$core$Matcher* $tmp2452 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
frost$core$Matcher* $tmp2453 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local1) = $tmp2452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1154
goto block1;
block1:;
frost$core$Matcher* $tmp2454 = *(&local1);
frost$core$Bit $tmp2455 = frost$core$Matcher$find$R$frost$core$Bit($tmp2454);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1155
frost$core$Matcher* $tmp2457 = *(&local1);
frost$core$MutableString* $tmp2458 = *(&local0);
frost$core$Matcher* $tmp2459 = *(&local1);
frost$core$Int $tmp2460 = (frost$core$Int) {0u};
frost$core$String* $tmp2461 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2459, $tmp2460);
frost$core$Bit $tmp2462 = (frost$core$Bit) {$tmp2461 != NULL};
bool $tmp2463 = $tmp2462.value;
if ($tmp2463) goto block4; else goto block5;
block5:;
frost$core$Int $tmp2464 = (frost$core$Int) {1155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2465, $tmp2464, &$s2466);
abort(); // unreachable
block4:;
frost$core$Int8** $tmp2467 = &param2->pointer;
frost$core$Int8* $tmp2468 = *$tmp2467;
frost$core$Object** $tmp2469 = &param2->target;
frost$core$Object* $tmp2470 = *$tmp2469;
bool $tmp2471 = $tmp2470 != ((frost$core$Object*) NULL);
if ($tmp2471) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp2473 = (($fn2472) $tmp2468)($tmp2461);
*(&local2) = $tmp2473;
goto block8;
block6:;
frost$core$Object* $tmp2475 = (($fn2474) $tmp2468)($tmp2470, $tmp2461);
*(&local2) = $tmp2475;
goto block8;
block8:;
frost$core$Object* $tmp2476 = *(&local2);
$fn2478 $tmp2477 = ($fn2478) $tmp2476->$class->vtable[0];
frost$core$String* $tmp2479 = $tmp2477($tmp2476);
frost$core$Bit $tmp2480 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2457, $tmp2458, $tmp2479, $tmp2480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
frost$core$Frost$unref$frost$core$Object$Q($tmp2476);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1157
frost$core$Matcher* $tmp2481 = *(&local1);
frost$core$MutableString* $tmp2482 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1157:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2483 = &$tmp2481->searchText;
frost$core$String* $tmp2484 = *$tmp2483;
frost$core$String$Index* $tmp2485 = &$tmp2481->replacementIndex;
frost$core$String$Index $tmp2486 = *$tmp2485;
frost$core$Bit $tmp2487 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2488 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2486, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2487);
frost$core$String* $tmp2489 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2484, $tmp2488);
frost$core$MutableString$append$frost$core$String($tmp2482, $tmp2489);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1158
frost$core$MutableString* $tmp2490 = *(&local0);
$fn2492 $tmp2491 = ($fn2492) ((frost$core$Object*) $tmp2490)->$class->vtable[0];
frost$core$String* $tmp2493 = $tmp2491(((frost$core$Object*) $tmp2490));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
frost$core$Matcher* $tmp2494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2495 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2493;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int local3;
frost$core$Object* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1172
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2496 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2496);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
frost$core$MutableString* $tmp2497 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local0) = $tmp2496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1173
frost$core$Matcher* $tmp2498 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
frost$core$Matcher* $tmp2499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local1) = $tmp2498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1174
goto block1;
block1:;
frost$core$Matcher* $tmp2500 = *(&local1);
frost$core$Bit $tmp2501 = frost$core$Matcher$find$R$frost$core$Bit($tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1175
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2503 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2503);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$collections$Array* $tmp2504 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local2) = $tmp2503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1176
frost$core$Int $tmp2505 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp2506 = *(&local1);
frost$core$Int $tmp2507;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp2507, $tmp2506);
frost$core$Bit $tmp2508 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2509 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2505, $tmp2507, $tmp2508);
frost$core$Int $tmp2510 = $tmp2509.min;
*(&local3) = $tmp2510;
frost$core$Int $tmp2511 = $tmp2509.max;
frost$core$Bit $tmp2512 = $tmp2509.inclusive;
bool $tmp2513 = $tmp2512.value;
frost$core$Int $tmp2514 = (frost$core$Int) {1u};
if ($tmp2513) goto block7; else goto block8;
block7:;
int64_t $tmp2515 = $tmp2510.value;
int64_t $tmp2516 = $tmp2511.value;
bool $tmp2517 = $tmp2515 <= $tmp2516;
frost$core$Bit $tmp2518 = (frost$core$Bit) {$tmp2517};
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block4; else goto block5;
block8:;
int64_t $tmp2520 = $tmp2510.value;
int64_t $tmp2521 = $tmp2511.value;
bool $tmp2522 = $tmp2520 < $tmp2521;
frost$core$Bit $tmp2523 = (frost$core$Bit) {$tmp2522};
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1177
frost$collections$Array* $tmp2525 = *(&local2);
frost$core$Matcher* $tmp2526 = *(&local1);
frost$core$Int $tmp2527 = *(&local3);
frost$core$String* $tmp2528 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp2526, $tmp2527);
frost$collections$Array$add$frost$collections$Array$T($tmp2525, ((frost$core$Object*) $tmp2528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$core$Int $tmp2529 = *(&local3);
int64_t $tmp2530 = $tmp2511.value;
int64_t $tmp2531 = $tmp2529.value;
int64_t $tmp2532 = $tmp2530 - $tmp2531;
frost$core$Int $tmp2533 = (frost$core$Int) {$tmp2532};
if ($tmp2513) goto block10; else goto block11;
block10:;
int64_t $tmp2534 = $tmp2533.value;
int64_t $tmp2535 = $tmp2514.value;
bool $tmp2536 = $tmp2534 >= $tmp2535;
frost$core$Bit $tmp2537 = (frost$core$Bit) {$tmp2536};
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block9; else goto block5;
block11:;
int64_t $tmp2539 = $tmp2533.value;
int64_t $tmp2540 = $tmp2514.value;
bool $tmp2541 = $tmp2539 > $tmp2540;
frost$core$Bit $tmp2542 = (frost$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block9; else goto block5;
block9:;
int64_t $tmp2544 = $tmp2529.value;
int64_t $tmp2545 = $tmp2514.value;
int64_t $tmp2546 = $tmp2544 + $tmp2545;
frost$core$Int $tmp2547 = (frost$core$Int) {$tmp2546};
*(&local3) = $tmp2547;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1179
frost$core$Matcher* $tmp2548 = *(&local1);
frost$core$MutableString* $tmp2549 = *(&local0);
frost$collections$Array* $tmp2550 = *(&local2);
frost$core$Int8** $tmp2551 = &param2->pointer;
frost$core$Int8* $tmp2552 = *$tmp2551;
frost$core$Object** $tmp2553 = &param2->target;
frost$core$Object* $tmp2554 = *$tmp2553;
bool $tmp2555 = $tmp2554 != ((frost$core$Object*) NULL);
if ($tmp2555) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2557 = (($fn2556) $tmp2552)(((frost$collections$ListView*) $tmp2550));
*(&local4) = $tmp2557;
goto block14;
block12:;
frost$core$Object* $tmp2559 = (($fn2558) $tmp2552)($tmp2554, ((frost$collections$ListView*) $tmp2550));
*(&local4) = $tmp2559;
goto block14;
block14:;
frost$core$Object* $tmp2560 = *(&local4);
$fn2562 $tmp2561 = ($fn2562) $tmp2560->$class->vtable[0];
frost$core$String* $tmp2563 = $tmp2561($tmp2560);
frost$core$Bit $tmp2564 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2548, $tmp2549, $tmp2563, $tmp2564);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
frost$core$Frost$unref$frost$core$Object$Q($tmp2560);
frost$collections$Array* $tmp2565 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1181
frost$core$Matcher* $tmp2566 = *(&local1);
frost$core$MutableString* $tmp2567 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1181:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2568 = &$tmp2566->searchText;
frost$core$String* $tmp2569 = *$tmp2568;
frost$core$String$Index* $tmp2570 = &$tmp2566->replacementIndex;
frost$core$String$Index $tmp2571 = *$tmp2570;
frost$core$Bit $tmp2572 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2573 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2571, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2572);
frost$core$String* $tmp2574 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2569, $tmp2573);
frost$core$MutableString$append$frost$core$String($tmp2567, $tmp2574);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1182
frost$core$MutableString* $tmp2575 = *(&local0);
$fn2577 $tmp2576 = ($fn2577) ((frost$core$Object*) $tmp2575)->$class->vtable[0];
frost$core$String* $tmp2578 = $tmp2576(((frost$core$Object*) $tmp2575));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
frost$core$Matcher* $tmp2579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2578;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
frost$core$Bit $tmp2581 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(56 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2582 = (frost$core$String$MatchIterator*) frostObjectAlloc(56, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2582, param0, param1, $tmp2581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2582)));
return ((frost$collections$Iterator*) $tmp2582);

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(56 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2583 = (frost$core$String$MatchIterator*) frostObjectAlloc(56, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2583, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2583)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
return ((frost$collections$Iterator*) $tmp2583);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1194
frost$core$Bit $tmp2584 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.RegularExpression, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Match> from String.frost:1194:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2585 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2585, param0, param1, $tmp2584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2585)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2585)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2585)));
return ((frost$collections$Iterator*) $tmp2585);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2586 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2586, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2586)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
return ((frost$collections$Iterator*) $tmp2586);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp2587 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2588 = &(&local1)->value;
*$tmp2588 = $tmp2587;
frost$core$String$Index $tmp2589 = *(&local1);
*(&local0) = $tmp2589;
frost$core$String$Index $tmp2590 = *(&local0);
return $tmp2590;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp2591 = &param0->_length;
frost$core$Int $tmp2592 = *$tmp2591;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2593 = &(&local1)->value;
*$tmp2593 = $tmp2592;
frost$core$String$Index $tmp2594 = *(&local1);
*(&local0) = $tmp2594;
frost$core$String$Index $tmp2595 = *(&local0);
return $tmp2595;

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
frost$core$Int $tmp2596 = param1.value;
frost$core$Int* $tmp2597 = &param0->_length;
frost$core$Int $tmp2598 = *$tmp2597;
int64_t $tmp2599 = $tmp2596.value;
int64_t $tmp2600 = $tmp2598.value;
bool $tmp2601 = $tmp2599 < $tmp2600;
frost$core$Bit $tmp2602 = (frost$core$Bit) {$tmp2601};
bool $tmp2603 = $tmp2602.value;
if ($tmp2603) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2604 = (frost$core$Int) {1222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2605, $tmp2604);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1223
frost$core$Char8** $tmp2606 = &param0->data;
frost$core$Char8* $tmp2607 = *$tmp2606;
frost$core$Int $tmp2608 = param1.value;
frost$core$Int64 $tmp2609 = frost$core$Int64$init$frost$core$Int($tmp2608);
int64_t $tmp2610 = $tmp2609.value;
frost$core$Char8 $tmp2611 = $tmp2607[$tmp2610];
uint8_t $tmp2612 = $tmp2611.value;
int64_t $tmp2613 = ((int64_t) $tmp2612) & 255u;
*(&local0) = $tmp2613;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1224
int64_t $tmp2614 = *(&local0);
bool $tmp2615 = $tmp2614 >= 240u;
frost$core$Bit $tmp2616 = (frost$core$Bit) {$tmp2615};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1225
frost$core$Int $tmp2618 = param1.value;
frost$core$Int $tmp2619 = (frost$core$Int) {4u};
int64_t $tmp2620 = $tmp2618.value;
int64_t $tmp2621 = $tmp2619.value;
int64_t $tmp2622 = $tmp2620 + $tmp2621;
frost$core$Int $tmp2623 = (frost$core$Int) {$tmp2622};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1225:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2624 = &(&local2)->value;
*$tmp2624 = $tmp2623;
frost$core$String$Index $tmp2625 = *(&local2);
*(&local1) = $tmp2625;
frost$core$String$Index $tmp2626 = *(&local1);
return $tmp2626;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1227
int64_t $tmp2627 = *(&local0);
bool $tmp2628 = $tmp2627 >= 224u;
frost$core$Bit $tmp2629 = (frost$core$Bit) {$tmp2628};
bool $tmp2630 = $tmp2629.value;
if ($tmp2630) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1228
frost$core$Int $tmp2631 = param1.value;
frost$core$Int $tmp2632 = (frost$core$Int) {3u};
int64_t $tmp2633 = $tmp2631.value;
int64_t $tmp2634 = $tmp2632.value;
int64_t $tmp2635 = $tmp2633 + $tmp2634;
frost$core$Int $tmp2636 = (frost$core$Int) {$tmp2635};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1228:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2637 = &(&local4)->value;
*$tmp2637 = $tmp2636;
frost$core$String$Index $tmp2638 = *(&local4);
*(&local3) = $tmp2638;
frost$core$String$Index $tmp2639 = *(&local3);
return $tmp2639;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1230
int64_t $tmp2640 = *(&local0);
bool $tmp2641 = $tmp2640 >= 192u;
frost$core$Bit $tmp2642 = (frost$core$Bit) {$tmp2641};
bool $tmp2643 = $tmp2642.value;
if ($tmp2643) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1231
frost$core$Int $tmp2644 = param1.value;
frost$core$Int $tmp2645 = (frost$core$Int) {2u};
int64_t $tmp2646 = $tmp2644.value;
int64_t $tmp2647 = $tmp2645.value;
int64_t $tmp2648 = $tmp2646 + $tmp2647;
frost$core$Int $tmp2649 = (frost$core$Int) {$tmp2648};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1231:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2650 = &(&local6)->value;
*$tmp2650 = $tmp2649;
frost$core$String$Index $tmp2651 = *(&local6);
*(&local5) = $tmp2651;
frost$core$String$Index $tmp2652 = *(&local5);
return $tmp2652;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1233
frost$core$Int $tmp2653 = param1.value;
frost$core$Int $tmp2654 = (frost$core$Int) {1u};
int64_t $tmp2655 = $tmp2653.value;
int64_t $tmp2656 = $tmp2654.value;
int64_t $tmp2657 = $tmp2655 + $tmp2656;
frost$core$Int $tmp2658 = (frost$core$Int) {$tmp2657};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1233:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2659 = &(&local8)->value;
*$tmp2659 = $tmp2658;
frost$core$String$Index $tmp2660 = *(&local8);
*(&local7) = $tmp2660;
frost$core$String$Index $tmp2661 = *(&local7);
return $tmp2661;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1243
frost$core$Int $tmp2662 = param1.value;
frost$core$Int $tmp2663 = (frost$core$Int) {0u};
int64_t $tmp2664 = $tmp2662.value;
int64_t $tmp2665 = $tmp2663.value;
bool $tmp2666 = $tmp2664 > $tmp2665;
frost$core$Bit $tmp2667 = (frost$core$Bit) {$tmp2666};
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2669 = (frost$core$Int) {1243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2670, $tmp2669);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1244
frost$core$Int $tmp2671 = param1.value;
frost$core$Int $tmp2672 = (frost$core$Int) {1u};
int64_t $tmp2673 = $tmp2671.value;
int64_t $tmp2674 = $tmp2672.value;
int64_t $tmp2675 = $tmp2673 - $tmp2674;
frost$core$Int $tmp2676 = (frost$core$Int) {$tmp2675};
*(&local0) = $tmp2676;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1245
goto block3;
block3:;
frost$core$Char8** $tmp2677 = &param0->data;
frost$core$Char8* $tmp2678 = *$tmp2677;
frost$core$Int $tmp2679 = *(&local0);
frost$core$Int64 $tmp2680 = frost$core$Int64$init$frost$core$Int($tmp2679);
int64_t $tmp2681 = $tmp2680.value;
frost$core$Char8 $tmp2682 = $tmp2678[$tmp2681];
uint8_t $tmp2683 = $tmp2682.value;
int64_t $tmp2684 = ((int64_t) $tmp2683) & 255u;
bool $tmp2685 = $tmp2684 >= 128u;
frost$core$Bit $tmp2686 = (frost$core$Bit) {$tmp2685};
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp2688 = &param0->data;
frost$core$Char8* $tmp2689 = *$tmp2688;
frost$core$Int $tmp2690 = *(&local0);
frost$core$Int64 $tmp2691 = frost$core$Int64$init$frost$core$Int($tmp2690);
int64_t $tmp2692 = $tmp2691.value;
frost$core$Char8 $tmp2693 = $tmp2689[$tmp2692];
uint8_t $tmp2694 = $tmp2693.value;
int64_t $tmp2695 = ((int64_t) $tmp2694) & 255u;
bool $tmp2696 = $tmp2695 < 192u;
frost$core$Bit $tmp2697 = (frost$core$Bit) {$tmp2696};
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1247
frost$core$Int $tmp2699 = *(&local0);
frost$core$Int $tmp2700 = (frost$core$Int) {1u};
int64_t $tmp2701 = $tmp2699.value;
int64_t $tmp2702 = $tmp2700.value;
int64_t $tmp2703 = $tmp2701 - $tmp2702;
frost$core$Int $tmp2704 = (frost$core$Int) {$tmp2703};
*(&local0) = $tmp2704;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1249
frost$core$Int $tmp2705 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1249:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp2706 = &(&local2)->value;
*$tmp2706 = $tmp2705;
frost$core$String$Index $tmp2707 = *(&local2);
*(&local1) = $tmp2707;
frost$core$String$Index $tmp2708 = *(&local1);
return $tmp2708;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int param2) {

frost$core$String$Index local0;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1259
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1260
frost$core$Int $tmp2709 = (frost$core$Int) {0u};
int64_t $tmp2710 = param2.value;
int64_t $tmp2711 = $tmp2709.value;
bool $tmp2712 = $tmp2710 > $tmp2711;
frost$core$Bit $tmp2713 = (frost$core$Bit) {$tmp2712};
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1261
frost$core$Int $tmp2715 = (frost$core$Int) {0u};
frost$core$Bit $tmp2716 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2717 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2715, param2, $tmp2716);
frost$core$Int $tmp2718 = $tmp2717.min;
*(&local1) = $tmp2718;
frost$core$Int $tmp2719 = $tmp2717.max;
frost$core$Bit $tmp2720 = $tmp2717.inclusive;
bool $tmp2721 = $tmp2720.value;
frost$core$Int $tmp2722 = (frost$core$Int) {1u};
if ($tmp2721) goto block7; else goto block8;
block7:;
int64_t $tmp2723 = $tmp2718.value;
int64_t $tmp2724 = $tmp2719.value;
bool $tmp2725 = $tmp2723 <= $tmp2724;
frost$core$Bit $tmp2726 = (frost$core$Bit) {$tmp2725};
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block4; else goto block5;
block8:;
int64_t $tmp2728 = $tmp2718.value;
int64_t $tmp2729 = $tmp2719.value;
bool $tmp2730 = $tmp2728 < $tmp2729;
frost$core$Bit $tmp2731 = (frost$core$Bit) {$tmp2730};
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1262
frost$core$String$Index $tmp2733 = *(&local0);
frost$core$String$Index $tmp2734 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2733);
*(&local0) = $tmp2734;
frost$core$Int $tmp2735 = *(&local1);
int64_t $tmp2736 = $tmp2719.value;
int64_t $tmp2737 = $tmp2735.value;
int64_t $tmp2738 = $tmp2736 - $tmp2737;
frost$core$Int $tmp2739 = (frost$core$Int) {$tmp2738};
if ($tmp2721) goto block10; else goto block11;
block10:;
int64_t $tmp2740 = $tmp2739.value;
int64_t $tmp2741 = $tmp2722.value;
bool $tmp2742 = $tmp2740 >= $tmp2741;
frost$core$Bit $tmp2743 = (frost$core$Bit) {$tmp2742};
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block9; else goto block5;
block11:;
int64_t $tmp2745 = $tmp2739.value;
int64_t $tmp2746 = $tmp2722.value;
bool $tmp2747 = $tmp2745 > $tmp2746;
frost$core$Bit $tmp2748 = (frost$core$Bit) {$tmp2747};
bool $tmp2749 = $tmp2748.value;
if ($tmp2749) goto block9; else goto block5;
block9:;
int64_t $tmp2750 = $tmp2735.value;
int64_t $tmp2751 = $tmp2722.value;
int64_t $tmp2752 = $tmp2750 + $tmp2751;
frost$core$Int $tmp2753 = (frost$core$Int) {$tmp2752};
*(&local1) = $tmp2753;
goto block4;
block5:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1266
frost$core$Int $tmp2754 = (frost$core$Int) {0u};
frost$core$Int $tmp2755 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp2756 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp2757 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2754, param2, $tmp2755, $tmp2756);
frost$core$Int $tmp2758 = $tmp2757.start;
*(&local2) = $tmp2758;
frost$core$Int $tmp2759 = $tmp2757.end;
frost$core$Int $tmp2760 = $tmp2757.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from String.frost:1266:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp2761 = $tmp2760.value;
int64_t $tmp2762 = -$tmp2761;
frost$core$Int $tmp2763 = (frost$core$Int) {$tmp2762};
frost$core$Bit $tmp2764 = $tmp2757.inclusive;
bool $tmp2765 = $tmp2764.value;
frost$core$Int $tmp2766 = (frost$core$Int) {0u};
int64_t $tmp2767 = $tmp2760.value;
int64_t $tmp2768 = $tmp2766.value;
bool $tmp2769 = $tmp2767 >= $tmp2768;
frost$core$Bit $tmp2770 = (frost$core$Bit) {$tmp2769};
bool $tmp2771 = $tmp2770.value;
if ($tmp2771) goto block16; else goto block17;
block16:;
if ($tmp2765) goto block18; else goto block19;
block18:;
int64_t $tmp2772 = $tmp2758.value;
int64_t $tmp2773 = $tmp2759.value;
bool $tmp2774 = $tmp2772 <= $tmp2773;
frost$core$Bit $tmp2775 = (frost$core$Bit) {$tmp2774};
bool $tmp2776 = $tmp2775.value;
if ($tmp2776) goto block13; else goto block14;
block19:;
int64_t $tmp2777 = $tmp2758.value;
int64_t $tmp2778 = $tmp2759.value;
bool $tmp2779 = $tmp2777 < $tmp2778;
frost$core$Bit $tmp2780 = (frost$core$Bit) {$tmp2779};
bool $tmp2781 = $tmp2780.value;
if ($tmp2781) goto block13; else goto block14;
block17:;
if ($tmp2765) goto block20; else goto block21;
block20:;
int64_t $tmp2782 = $tmp2758.value;
int64_t $tmp2783 = $tmp2759.value;
bool $tmp2784 = $tmp2782 >= $tmp2783;
frost$core$Bit $tmp2785 = (frost$core$Bit) {$tmp2784};
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block13; else goto block14;
block21:;
int64_t $tmp2787 = $tmp2758.value;
int64_t $tmp2788 = $tmp2759.value;
bool $tmp2789 = $tmp2787 > $tmp2788;
frost$core$Bit $tmp2790 = (frost$core$Bit) {$tmp2789};
bool $tmp2791 = $tmp2790.value;
if ($tmp2791) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1267
frost$core$String$Index $tmp2792 = *(&local0);
frost$core$String$Index $tmp2793 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2792);
*(&local0) = $tmp2793;
frost$core$Int $tmp2794 = *(&local2);
if ($tmp2771) goto block23; else goto block24;
block23:;
int64_t $tmp2795 = $tmp2759.value;
int64_t $tmp2796 = $tmp2794.value;
int64_t $tmp2797 = $tmp2795 - $tmp2796;
frost$core$Int $tmp2798 = (frost$core$Int) {$tmp2797};
if ($tmp2765) goto block25; else goto block26;
block25:;
int64_t $tmp2799 = $tmp2798.value;
int64_t $tmp2800 = $tmp2760.value;
bool $tmp2801 = $tmp2799 >= $tmp2800;
frost$core$Bit $tmp2802 = (frost$core$Bit) {$tmp2801};
bool $tmp2803 = $tmp2802.value;
if ($tmp2803) goto block22; else goto block14;
block26:;
int64_t $tmp2804 = $tmp2798.value;
int64_t $tmp2805 = $tmp2760.value;
bool $tmp2806 = $tmp2804 > $tmp2805;
frost$core$Bit $tmp2807 = (frost$core$Bit) {$tmp2806};
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block22; else goto block14;
block24:;
int64_t $tmp2809 = $tmp2794.value;
int64_t $tmp2810 = $tmp2759.value;
int64_t $tmp2811 = $tmp2809 - $tmp2810;
frost$core$Int $tmp2812 = (frost$core$Int) {$tmp2811};
if ($tmp2765) goto block27; else goto block28;
block27:;
int64_t $tmp2813 = $tmp2812.value;
int64_t $tmp2814 = $tmp2763.value;
bool $tmp2815 = $tmp2813 >= $tmp2814;
frost$core$Bit $tmp2816 = (frost$core$Bit) {$tmp2815};
bool $tmp2817 = $tmp2816.value;
if ($tmp2817) goto block22; else goto block14;
block28:;
int64_t $tmp2818 = $tmp2812.value;
int64_t $tmp2819 = $tmp2763.value;
bool $tmp2820 = $tmp2818 > $tmp2819;
frost$core$Bit $tmp2821 = (frost$core$Bit) {$tmp2820};
bool $tmp2822 = $tmp2821.value;
if ($tmp2822) goto block22; else goto block14;
block22:;
int64_t $tmp2823 = $tmp2794.value;
int64_t $tmp2824 = $tmp2760.value;
int64_t $tmp2825 = $tmp2823 + $tmp2824;
frost$core$Int $tmp2826 = (frost$core$Int) {$tmp2825};
*(&local2) = $tmp2826;
goto block13;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1270
frost$core$String$Index $tmp2827 = *(&local0);
return $tmp2827;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1283
frost$core$Int32 $tmp2828 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2829 = frost$core$Char32$init$frost$core$Int32($tmp2828);
frost$core$String* $tmp2830 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
return $tmp2830;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1297
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1297:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2831 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2831->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2831 = $tmp2831->next;
}
$fn2833 $tmp2832 = $tmp2831->methods[0];
frost$collections$Iterator* $tmp2834 = $tmp2832(((frost$collections$Iterable*) param0));
ITable* $tmp2835 = $tmp2834->$class->itable;
while ($tmp2835->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2835 = $tmp2835->next;
}
$fn2837 $tmp2836 = $tmp2835->methods[2];
frost$core$Int $tmp2838 = $tmp2836($tmp2834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
int64_t $tmp2839 = $tmp2838.value;
int64_t $tmp2840 = param1.value;
bool $tmp2841 = $tmp2839 >= $tmp2840;
frost$core$Bit $tmp2842 = (frost$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1300
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1300:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2844 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2844->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2844 = $tmp2844->next;
}
$fn2846 $tmp2845 = $tmp2844->methods[0];
frost$collections$Iterator* $tmp2847 = $tmp2845(((frost$collections$Iterable*) param0));
ITable* $tmp2848 = $tmp2847->$class->itable;
while ($tmp2848->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2848 = $tmp2848->next;
}
$fn2850 $tmp2849 = $tmp2848->methods[2];
frost$core$Int $tmp2851 = $tmp2849($tmp2847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
int64_t $tmp2852 = param1.value;
int64_t $tmp2853 = $tmp2851.value;
int64_t $tmp2854 = $tmp2852 - $tmp2853;
frost$core$Int $tmp2855 = (frost$core$Int) {$tmp2854};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1300:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2856 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2856);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$MutableString* $tmp2857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local0) = $tmp2856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp2858 = (frost$core$Int) {0u};
frost$core$Bit $tmp2859 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2860 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2858, $tmp2855, $tmp2859);
frost$core$Int $tmp2861 = $tmp2860.min;
*(&local1) = $tmp2861;
frost$core$Int $tmp2862 = $tmp2860.max;
frost$core$Bit $tmp2863 = $tmp2860.inclusive;
bool $tmp2864 = $tmp2863.value;
frost$core$Int $tmp2865 = (frost$core$Int) {1u};
if ($tmp2864) goto block9; else goto block10;
block9:;
int64_t $tmp2866 = $tmp2861.value;
int64_t $tmp2867 = $tmp2862.value;
bool $tmp2868 = $tmp2866 <= $tmp2867;
frost$core$Bit $tmp2869 = (frost$core$Bit) {$tmp2868};
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block6; else goto block7;
block10:;
int64_t $tmp2871 = $tmp2861.value;
int64_t $tmp2872 = $tmp2862.value;
bool $tmp2873 = $tmp2871 < $tmp2872;
frost$core$Bit $tmp2874 = (frost$core$Bit) {$tmp2873};
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2876 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2876, param2);
frost$core$Int $tmp2877 = *(&local1);
int64_t $tmp2878 = $tmp2862.value;
int64_t $tmp2879 = $tmp2877.value;
int64_t $tmp2880 = $tmp2878 - $tmp2879;
frost$core$Int $tmp2881 = (frost$core$Int) {$tmp2880};
if ($tmp2864) goto block12; else goto block13;
block12:;
int64_t $tmp2882 = $tmp2881.value;
int64_t $tmp2883 = $tmp2865.value;
bool $tmp2884 = $tmp2882 >= $tmp2883;
frost$core$Bit $tmp2885 = (frost$core$Bit) {$tmp2884};
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block11; else goto block7;
block13:;
int64_t $tmp2887 = $tmp2881.value;
int64_t $tmp2888 = $tmp2865.value;
bool $tmp2889 = $tmp2887 > $tmp2888;
frost$core$Bit $tmp2890 = (frost$core$Bit) {$tmp2889};
bool $tmp2891 = $tmp2890.value;
if ($tmp2891) goto block11; else goto block7;
block11:;
int64_t $tmp2892 = $tmp2877.value;
int64_t $tmp2893 = $tmp2865.value;
int64_t $tmp2894 = $tmp2892 + $tmp2893;
frost$core$Int $tmp2895 = (frost$core$Int) {$tmp2894};
*(&local1) = $tmp2895;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2896 = *(&local0);
frost$core$String* $tmp2897 = frost$core$MutableString$finish$R$frost$core$String($tmp2896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$MutableString* $tmp2898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
return $tmp2899;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1313
frost$core$Int32 $tmp2900 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2901 = frost$core$Char32$init$frost$core$Int32($tmp2900);
frost$core$String* $tmp2902 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
return $tmp2902;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1327
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1327:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2903 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2903->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2903 = $tmp2903->next;
}
$fn2905 $tmp2904 = $tmp2903->methods[0];
frost$collections$Iterator* $tmp2906 = $tmp2904(((frost$collections$Iterable*) param0));
ITable* $tmp2907 = $tmp2906->$class->itable;
while ($tmp2907->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2907 = $tmp2907->next;
}
$fn2909 $tmp2908 = $tmp2907->methods[2];
frost$core$Int $tmp2910 = $tmp2908($tmp2906);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
int64_t $tmp2911 = $tmp2910.value;
int64_t $tmp2912 = param1.value;
bool $tmp2913 = $tmp2911 >= $tmp2912;
frost$core$Bit $tmp2914 = (frost$core$Bit) {$tmp2913};
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1330
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1330:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2916 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2916->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2916 = $tmp2916->next;
}
$fn2918 $tmp2917 = $tmp2916->methods[0];
frost$collections$Iterator* $tmp2919 = $tmp2917(((frost$collections$Iterable*) param0));
ITable* $tmp2920 = $tmp2919->$class->itable;
while ($tmp2920->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2920 = $tmp2920->next;
}
$fn2922 $tmp2921 = $tmp2920->methods[2];
frost$core$Int $tmp2923 = $tmp2921($tmp2919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
int64_t $tmp2924 = param1.value;
int64_t $tmp2925 = $tmp2923.value;
int64_t $tmp2926 = $tmp2924 - $tmp2925;
frost$core$Int $tmp2927 = (frost$core$Int) {$tmp2926};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1330:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2928 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2928);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$MutableString* $tmp2929 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
*(&local0) = $tmp2928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp2930 = (frost$core$Int) {0u};
frost$core$Bit $tmp2931 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2932 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2930, $tmp2927, $tmp2931);
frost$core$Int $tmp2933 = $tmp2932.min;
*(&local1) = $tmp2933;
frost$core$Int $tmp2934 = $tmp2932.max;
frost$core$Bit $tmp2935 = $tmp2932.inclusive;
bool $tmp2936 = $tmp2935.value;
frost$core$Int $tmp2937 = (frost$core$Int) {1u};
if ($tmp2936) goto block9; else goto block10;
block9:;
int64_t $tmp2938 = $tmp2933.value;
int64_t $tmp2939 = $tmp2934.value;
bool $tmp2940 = $tmp2938 <= $tmp2939;
frost$core$Bit $tmp2941 = (frost$core$Bit) {$tmp2940};
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block6; else goto block7;
block10:;
int64_t $tmp2943 = $tmp2933.value;
int64_t $tmp2944 = $tmp2934.value;
bool $tmp2945 = $tmp2943 < $tmp2944;
frost$core$Bit $tmp2946 = (frost$core$Bit) {$tmp2945};
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2948 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2948, param2);
frost$core$Int $tmp2949 = *(&local1);
int64_t $tmp2950 = $tmp2934.value;
int64_t $tmp2951 = $tmp2949.value;
int64_t $tmp2952 = $tmp2950 - $tmp2951;
frost$core$Int $tmp2953 = (frost$core$Int) {$tmp2952};
if ($tmp2936) goto block12; else goto block13;
block12:;
int64_t $tmp2954 = $tmp2953.value;
int64_t $tmp2955 = $tmp2937.value;
bool $tmp2956 = $tmp2954 >= $tmp2955;
frost$core$Bit $tmp2957 = (frost$core$Bit) {$tmp2956};
bool $tmp2958 = $tmp2957.value;
if ($tmp2958) goto block11; else goto block7;
block13:;
int64_t $tmp2959 = $tmp2953.value;
int64_t $tmp2960 = $tmp2937.value;
bool $tmp2961 = $tmp2959 > $tmp2960;
frost$core$Bit $tmp2962 = (frost$core$Bit) {$tmp2961};
bool $tmp2963 = $tmp2962.value;
if ($tmp2963) goto block11; else goto block7;
block11:;
int64_t $tmp2964 = $tmp2949.value;
int64_t $tmp2965 = $tmp2937.value;
int64_t $tmp2966 = $tmp2964 + $tmp2965;
frost$core$Int $tmp2967 = (frost$core$Int) {$tmp2966};
*(&local1) = $tmp2967;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2968 = *(&local0);
frost$core$String* $tmp2969 = frost$core$MutableString$finish$R$frost$core$String($tmp2968);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
frost$core$MutableString* $tmp2970 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2969, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
return $tmp2971;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int$R$frost$core$String(frost$core$String* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1345
frost$core$Int32 $tmp2972 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2973 = frost$core$Char32$init$frost$core$Int32($tmp2972);
frost$core$String* $tmp2974 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
return $tmp2974;

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
ITable* $tmp2975 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2975->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2975 = $tmp2975->next;
}
$fn2977 $tmp2976 = $tmp2975->methods[0];
frost$collections$Iterator* $tmp2978 = $tmp2976(((frost$collections$Iterable*) param0));
ITable* $tmp2979 = $tmp2978->$class->itable;
while ($tmp2979->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2979 = $tmp2979->next;
}
$fn2981 $tmp2980 = $tmp2979->methods[2];
frost$core$Int $tmp2982 = $tmp2980($tmp2978);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
int64_t $tmp2983 = $tmp2982.value;
int64_t $tmp2984 = param1.value;
bool $tmp2985 = $tmp2983 >= $tmp2984;
frost$core$Bit $tmp2986 = (frost$core$Bit) {$tmp2985};
bool $tmp2987 = $tmp2986.value;
if ($tmp2987) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1364
// begin inline call to function frost.core.String.get_length():frost.core.Int from String.frost:1364:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2988 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2988->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2988 = $tmp2988->next;
}
$fn2990 $tmp2989 = $tmp2988->methods[0];
frost$collections$Iterator* $tmp2991 = $tmp2989(((frost$collections$Iterable*) param0));
ITable* $tmp2992 = $tmp2991->$class->itable;
while ($tmp2992->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2992 = $tmp2992->next;
}
$fn2994 $tmp2993 = $tmp2992->methods[2];
frost$core$Int $tmp2995 = $tmp2993($tmp2991);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
int64_t $tmp2996 = param1.value;
int64_t $tmp2997 = $tmp2995.value;
int64_t $tmp2998 = $tmp2996 - $tmp2997;
frost$core$Int $tmp2999 = (frost$core$Int) {$tmp2998};
*(&local0) = $tmp2999;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1365
frost$core$Int $tmp3000 = *(&local0);
frost$core$Int $tmp3001 = (frost$core$Int) {2u};
int64_t $tmp3002 = $tmp3000.value;
int64_t $tmp3003 = $tmp3001.value;
int64_t $tmp3004 = $tmp3002 / $tmp3003;
frost$core$Int $tmp3005 = (frost$core$Int) {$tmp3004};
*(&local1) = $tmp3005;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1366
frost$core$Int $tmp3006 = *(&local0);
frost$core$Int $tmp3007 = *(&local1);
int64_t $tmp3008 = $tmp3006.value;
int64_t $tmp3009 = $tmp3007.value;
int64_t $tmp3010 = $tmp3008 - $tmp3009;
frost$core$Int $tmp3011 = (frost$core$Int) {$tmp3010};
*(&local2) = $tmp3011;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1367
frost$core$Int $tmp3012 = *(&local1);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp3013 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp3013);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$MutableString* $tmp3014 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local3) = $tmp3013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp3015 = (frost$core$Int) {0u};
frost$core$Bit $tmp3016 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3017 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3015, $tmp3012, $tmp3016);
frost$core$Int $tmp3018 = $tmp3017.min;
*(&local4) = $tmp3018;
frost$core$Int $tmp3019 = $tmp3017.max;
frost$core$Bit $tmp3020 = $tmp3017.inclusive;
bool $tmp3021 = $tmp3020.value;
frost$core$Int $tmp3022 = (frost$core$Int) {1u};
if ($tmp3021) goto block9; else goto block10;
block9:;
int64_t $tmp3023 = $tmp3018.value;
int64_t $tmp3024 = $tmp3019.value;
bool $tmp3025 = $tmp3023 <= $tmp3024;
frost$core$Bit $tmp3026 = (frost$core$Bit) {$tmp3025};
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block6; else goto block7;
block10:;
int64_t $tmp3028 = $tmp3018.value;
int64_t $tmp3029 = $tmp3019.value;
bool $tmp3030 = $tmp3028 < $tmp3029;
frost$core$Bit $tmp3031 = (frost$core$Bit) {$tmp3030};
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp3033 = *(&local3);
frost$core$MutableString$append$frost$core$Char32($tmp3033, param2);
frost$core$Int $tmp3034 = *(&local4);
int64_t $tmp3035 = $tmp3019.value;
int64_t $tmp3036 = $tmp3034.value;
int64_t $tmp3037 = $tmp3035 - $tmp3036;
frost$core$Int $tmp3038 = (frost$core$Int) {$tmp3037};
if ($tmp3021) goto block12; else goto block13;
block12:;
int64_t $tmp3039 = $tmp3038.value;
int64_t $tmp3040 = $tmp3022.value;
bool $tmp3041 = $tmp3039 >= $tmp3040;
frost$core$Bit $tmp3042 = (frost$core$Bit) {$tmp3041};
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block11; else goto block7;
block13:;
int64_t $tmp3044 = $tmp3038.value;
int64_t $tmp3045 = $tmp3022.value;
bool $tmp3046 = $tmp3044 > $tmp3045;
frost$core$Bit $tmp3047 = (frost$core$Bit) {$tmp3046};
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block11; else goto block7;
block11:;
int64_t $tmp3049 = $tmp3034.value;
int64_t $tmp3050 = $tmp3022.value;
int64_t $tmp3051 = $tmp3049 + $tmp3050;
frost$core$Int $tmp3052 = (frost$core$Int) {$tmp3051};
*(&local4) = $tmp3052;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp3053 = *(&local3);
frost$core$String* $tmp3054 = frost$core$MutableString$finish$R$frost$core$String($tmp3053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
frost$core$MutableString* $tmp3055 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp3056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3054, param0);
frost$core$Int $tmp3057 = *(&local2);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int):frost.core.String from String.frost:1367:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp3058 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp3058);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$MutableString* $tmp3059 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
*(&local5) = $tmp3058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:65
frost$core$Int $tmp3060 = (frost$core$Int) {0u};
frost$core$Bit $tmp3061 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3062 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3060, $tmp3057, $tmp3061);
frost$core$Int $tmp3063 = $tmp3062.min;
*(&local6) = $tmp3063;
frost$core$Int $tmp3064 = $tmp3062.max;
frost$core$Bit $tmp3065 = $tmp3062.inclusive;
bool $tmp3066 = $tmp3065.value;
frost$core$Int $tmp3067 = (frost$core$Int) {1u};
if ($tmp3066) goto block18; else goto block19;
block18:;
int64_t $tmp3068 = $tmp3063.value;
int64_t $tmp3069 = $tmp3064.value;
bool $tmp3070 = $tmp3068 <= $tmp3069;
frost$core$Bit $tmp3071 = (frost$core$Bit) {$tmp3070};
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block15; else goto block16;
block19:;
int64_t $tmp3073 = $tmp3063.value;
int64_t $tmp3074 = $tmp3064.value;
bool $tmp3075 = $tmp3073 < $tmp3074;
frost$core$Bit $tmp3076 = (frost$core$Bit) {$tmp3075};
bool $tmp3077 = $tmp3076.value;
if ($tmp3077) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp3078 = *(&local5);
frost$core$MutableString$append$frost$core$Char32($tmp3078, param2);
frost$core$Int $tmp3079 = *(&local6);
int64_t $tmp3080 = $tmp3064.value;
int64_t $tmp3081 = $tmp3079.value;
int64_t $tmp3082 = $tmp3080 - $tmp3081;
frost$core$Int $tmp3083 = (frost$core$Int) {$tmp3082};
if ($tmp3066) goto block21; else goto block22;
block21:;
int64_t $tmp3084 = $tmp3083.value;
int64_t $tmp3085 = $tmp3067.value;
bool $tmp3086 = $tmp3084 >= $tmp3085;
frost$core$Bit $tmp3087 = (frost$core$Bit) {$tmp3086};
bool $tmp3088 = $tmp3087.value;
if ($tmp3088) goto block20; else goto block16;
block22:;
int64_t $tmp3089 = $tmp3083.value;
int64_t $tmp3090 = $tmp3067.value;
bool $tmp3091 = $tmp3089 > $tmp3090;
frost$core$Bit $tmp3092 = (frost$core$Bit) {$tmp3091};
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block20; else goto block16;
block20:;
int64_t $tmp3094 = $tmp3079.value;
int64_t $tmp3095 = $tmp3067.value;
int64_t $tmp3096 = $tmp3094 + $tmp3095;
frost$core$Int $tmp3097 = (frost$core$Int) {$tmp3096};
*(&local6) = $tmp3097;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp3098 = *(&local5);
frost$core$String* $tmp3099 = frost$core$MutableString$finish$R$frost$core$String($tmp3098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$MutableString* $tmp3100 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp3101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3056, $tmp3099);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
return $tmp3101;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp3102 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3103 = $tmp3102.value;
frost$core$Int $tmp3104 = (frost$core$Int) {((int64_t) $tmp3103)};
frost$collections$Array* $tmp3105 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
return $tmp3105;

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
frost$collections$Array* $tmp3106 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3106);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$collections$Array* $tmp3107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local0) = $tmp3106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1392
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1392:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp3108 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3109 = &(&local2)->value;
*$tmp3109 = $tmp3108;
frost$core$String$Index $tmp3110 = *(&local2);
*(&local1) = $tmp3110;
frost$core$String$Index $tmp3111 = *(&local1);
*(&local3) = $tmp3111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1393
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1394
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1395
frost$core$Int* $tmp3112 = &param1->_length;
frost$core$Int $tmp3113 = *$tmp3112;
frost$core$Int $tmp3114 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1395:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3115 = $tmp3113.value;
int64_t $tmp3116 = $tmp3114.value;
bool $tmp3117 = $tmp3115 == $tmp3116;
frost$core$Bit $tmp3118 = (frost$core$Bit) {$tmp3117};
bool $tmp3119 = $tmp3118.value;
if ($tmp3119) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1396
frost$core$String$Index $tmp3120 = *(&local3);
frost$core$String$Index $tmp3121 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp3120);
*(&local4) = ((frost$core$String$Index$nullable) { $tmp3121, true });
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1399
frost$core$String$Index $tmp3122 = *(&local3);
frost$core$String$Index$nullable $tmp3123 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp3122);
*(&local4) = $tmp3123;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1401
frost$core$String$Index$nullable $tmp3124 = *(&local4);
frost$core$Bit $tmp3125 = (frost$core$Bit) {!$tmp3124.nonnull};
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block9; else goto block11;
block11:;
frost$collections$Array* $tmp3127 = *(&local0);
ITable* $tmp3128 = ((frost$collections$CollectionView*) $tmp3127)->$class->itable;
while ($tmp3128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3128 = $tmp3128->next;
}
$fn3130 $tmp3129 = $tmp3128->methods[0];
frost$core$Int $tmp3131 = $tmp3129(((frost$collections$CollectionView*) $tmp3127));
frost$core$Int $tmp3132 = (frost$core$Int) {1u};
int64_t $tmp3133 = param2.value;
int64_t $tmp3134 = $tmp3132.value;
int64_t $tmp3135 = $tmp3133 - $tmp3134;
frost$core$Int $tmp3136 = (frost$core$Int) {$tmp3135};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1401:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3137 = $tmp3131.value;
int64_t $tmp3138 = $tmp3136.value;
bool $tmp3139 = $tmp3137 == $tmp3138;
frost$core$Bit $tmp3140 = (frost$core$Bit) {$tmp3139};
bool $tmp3141 = $tmp3140.value;
if ($tmp3141) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1402
frost$collections$Array* $tmp3142 = *(&local0);
frost$core$String$Index $tmp3143 = *(&local3);
frost$core$Bit $tmp3144 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3145 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3143, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3144);
frost$core$String* $tmp3146 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3145);
frost$collections$Array$add$frost$collections$Array$T($tmp3142, ((frost$core$Object*) $tmp3146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1403
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1408
frost$collections$Array* $tmp3147 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
frost$collections$Array* $tmp3148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3147;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1405
frost$collections$Array* $tmp3149 = *(&local0);
frost$core$String$Index $tmp3150 = *(&local3);
frost$core$String$Index$nullable $tmp3151 = *(&local4);
frost$core$Bit $tmp3152 = (frost$core$Bit) {$tmp3151.nonnull};
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block13; else goto block14;
block14:;
frost$core$Int $tmp3154 = (frost$core$Int) {1405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3155, $tmp3154, &$s3156);
abort(); // unreachable
block13:;
frost$core$Bit $tmp3157 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3158 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3150, ((frost$core$String$Index) $tmp3151.value), $tmp3157);
frost$core$String* $tmp3159 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3158);
frost$collections$Array$add$frost$collections$Array$T($tmp3149, ((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1406
frost$core$String$Index$nullable $tmp3160 = *(&local4);
frost$core$Bit $tmp3161 = (frost$core$Bit) {$tmp3160.nonnull};
bool $tmp3162 = $tmp3161.value;
if ($tmp3162) goto block15; else goto block16;
block16:;
frost$core$Int $tmp3163 = (frost$core$Int) {1406u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3164, $tmp3163, &$s3165);
abort(); // unreachable
block15:;
frost$core$Int $tmp3166 = ((frost$core$String$Index) $tmp3160.value).value;
frost$core$Int* $tmp3167 = &param1->_length;
frost$core$Int $tmp3168 = *$tmp3167;
int64_t $tmp3169 = $tmp3166.value;
int64_t $tmp3170 = $tmp3168.value;
int64_t $tmp3171 = $tmp3169 + $tmp3170;
frost$core$Int $tmp3172 = (frost$core$Int) {$tmp3171};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1406:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3173 = &(&local6)->value;
*$tmp3173 = $tmp3172;
frost$core$String$Index $tmp3174 = *(&local6);
*(&local5) = $tmp3174;
frost$core$String$Index $tmp3175 = *(&local5);
*(&local3) = $tmp3175;
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
frost$core$Int $tmp3176 = (frost$core$Int) {0u};
int64_t $tmp3177 = param2.value;
int64_t $tmp3178 = $tmp3176.value;
bool $tmp3179 = $tmp3177 > $tmp3178;
frost$core$Bit $tmp3180 = (frost$core$Bit) {$tmp3179};
bool $tmp3181 = $tmp3180.value;
if ($tmp3181) goto block1; else goto block2;
block2:;
frost$core$Int $tmp3182 = (frost$core$Int) {1422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3183, $tmp3182, &$s3184);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3185 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3185);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$collections$Array* $tmp3186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local0) = $tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1424
frost$core$Matcher* $tmp3187 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
frost$core$Matcher* $tmp3188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local1) = $tmp3187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1425
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1425:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp3189 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3190 = &(&local3)->value;
*$tmp3190 = $tmp3189;
frost$core$String$Index $tmp3191 = *(&local3);
*(&local2) = $tmp3191;
frost$core$String$Index $tmp3192 = *(&local2);
*(&local4) = $tmp3192;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1426
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1427
frost$core$Matcher* $tmp3193 = *(&local1);
frost$core$Bit $tmp3194 = frost$core$Matcher$find$R$frost$core$Bit($tmp3193);
*(&local5) = $tmp3194;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1428
frost$core$Bit $tmp3195 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:1428:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3196 = $tmp3195.value;
bool $tmp3197 = !$tmp3196;
frost$core$Bit $tmp3198 = (frost$core$Bit) {$tmp3197};
bool $tmp3199 = $tmp3198.value;
if ($tmp3199) goto block7; else goto block9;
block9:;
frost$collections$Array* $tmp3200 = *(&local0);
ITable* $tmp3201 = ((frost$collections$CollectionView*) $tmp3200)->$class->itable;
while ($tmp3201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3201 = $tmp3201->next;
}
$fn3203 $tmp3202 = $tmp3201->methods[0];
frost$core$Int $tmp3204 = $tmp3202(((frost$collections$CollectionView*) $tmp3200));
frost$core$Int $tmp3205 = (frost$core$Int) {1u};
int64_t $tmp3206 = param2.value;
int64_t $tmp3207 = $tmp3205.value;
int64_t $tmp3208 = $tmp3206 - $tmp3207;
frost$core$Int $tmp3209 = (frost$core$Int) {$tmp3208};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1428:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3210 = $tmp3204.value;
int64_t $tmp3211 = $tmp3209.value;
bool $tmp3212 = $tmp3210 == $tmp3211;
frost$core$Bit $tmp3213 = (frost$core$Bit) {$tmp3212};
bool $tmp3214 = $tmp3213.value;
if ($tmp3214) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1429
frost$collections$Array* $tmp3215 = *(&local0);
frost$core$String$Index $tmp3216 = *(&local4);
frost$core$Bit $tmp3217 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3218 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3216, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3217);
frost$core$String* $tmp3219 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3218);
frost$collections$Array$add$frost$collections$Array$T($tmp3215, ((frost$core$Object*) $tmp3219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1430
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1436
frost$collections$Array* $tmp3220 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Matcher* $tmp3221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp3222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3220;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1432
frost$core$Matcher* $tmp3223 = *(&local1);
frost$core$String$Index $tmp3224;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp3224, $tmp3223);
*(&local6) = $tmp3224;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1433
frost$collections$Array* $tmp3225 = *(&local0);
frost$core$String$Index $tmp3226 = *(&local4);
frost$core$String$Index $tmp3227 = *(&local6);
frost$core$Bit $tmp3228 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3229 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3226, $tmp3227, $tmp3228);
frost$core$String* $tmp3230 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3229);
frost$collections$Array$add$frost$collections$Array$T($tmp3225, ((frost$core$Object*) $tmp3230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1434
frost$core$String$Index $tmp3231 = *(&local6);
frost$core$Int $tmp3232 = $tmp3231.value;
frost$core$Matcher* $tmp3233 = *(&local1);
frost$core$String$Index $tmp3234;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp3234, $tmp3233);
frost$core$Int $tmp3235 = $tmp3234.value;
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from String.frost:1434:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp3236 = $tmp3232.value;
int64_t $tmp3237 = $tmp3235.value;
bool $tmp3238 = $tmp3236 > $tmp3237;
frost$core$Bit $tmp3239 = (frost$core$Bit) {$tmp3238};
bool $tmp3240 = $tmp3239.value;
if ($tmp3240) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp3241 = $tmp3232.value;
frost$core$Int $tmp3242 = (frost$core$Int) {$tmp3241};
*(&local7) = $tmp3242;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp3243 = $tmp3235.value;
frost$core$Int $tmp3244 = (frost$core$Int) {$tmp3243};
*(&local7) = $tmp3244;
goto block12;
block12:;
frost$core$Int $tmp3245 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1434:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp3246 = &(&local9)->value;
*$tmp3246 = $tmp3245;
frost$core$String$Index $tmp3247 = *(&local9);
*(&local8) = $tmp3247;
frost$core$String$Index $tmp3248 = *(&local8);
*(&local4) = $tmp3248;
goto block5;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1449
frost$core$Int64 $tmp3249 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3250 = $tmp3249.value;
frost$core$Int $tmp3251 = (frost$core$Int) {((int64_t) $tmp3250)};
frost$collections$Array* $tmp3252 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
return $tmp3252;

}
frost$core$Int$nullable frost$core$String$get_asInt$R$frost$core$Int$Q(frost$core$String* param0) {

frost$core$Int64$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp3253 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(param0);
*(&local0) = $tmp3253;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp3254 = *(&local0);
frost$core$Bit $tmp3255 = (frost$core$Bit) {$tmp3254.nonnull};
bool $tmp3256 = $tmp3255.value;
if ($tmp3256) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp3257 = *(&local0);
frost$core$Bit $tmp3258 = (frost$core$Bit) {$tmp3257.nonnull};
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block3; else goto block4;
block4:;
frost$core$Int $tmp3260 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3261, $tmp3260, &$s3262);
abort(); // unreachable
block3:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp3263 = ((frost$core$Int64) $tmp3257.value).value;
frost$core$Int $tmp3264 = (frost$core$Int) {((int64_t) $tmp3263)};
return ((frost$core$Int$nullable) { $tmp3264, true });
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
frost$core$Int* $tmp3265 = &param0->_length;
frost$core$Int $tmp3266 = *$tmp3265;
frost$core$Int $tmp3267 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1470:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3268 = $tmp3266.value;
int64_t $tmp3269 = $tmp3267.value;
bool $tmp3270 = $tmp3268 == $tmp3269;
frost$core$Bit $tmp3271 = (frost$core$Bit) {$tmp3270};
bool $tmp3272 = $tmp3271.value;
if ($tmp3272) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1471
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1473
frost$core$Int64 $tmp3273 = (frost$core$Int64) {0u};
*(&local0) = $tmp3273;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1474
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1475
frost$core$Char8** $tmp3274 = &param0->data;
frost$core$Char8* $tmp3275 = *$tmp3274;
frost$core$Int64 $tmp3276 = (frost$core$Int64) {0u};
int64_t $tmp3277 = $tmp3276.value;
frost$core$Char8 $tmp3278 = $tmp3275[$tmp3277];
frost$core$UInt8 $tmp3279 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3280 = frost$core$Char8$init$frost$core$UInt8($tmp3279);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1475:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp3281 = $tmp3278.value;
uint8_t $tmp3282 = $tmp3280.value;
bool $tmp3283 = $tmp3281 == $tmp3282;
frost$core$Bit $tmp3284 = (frost$core$Bit) {$tmp3283};
bool $tmp3285 = $tmp3284.value;
if ($tmp3285) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1476
frost$core$Int $tmp3286 = (frost$core$Int) {1u};
*(&local1) = $tmp3286;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1479
frost$core$Int $tmp3287 = (frost$core$Int) {0u};
*(&local1) = $tmp3287;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1481
frost$core$Int $tmp3288 = *(&local1);
frost$core$Int* $tmp3289 = &param0->_length;
frost$core$Int $tmp3290 = *$tmp3289;
frost$core$Bit $tmp3291 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3292 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3288, $tmp3290, $tmp3291);
frost$core$Int $tmp3293 = $tmp3292.min;
*(&local2) = $tmp3293;
frost$core$Int $tmp3294 = $tmp3292.max;
frost$core$Bit $tmp3295 = $tmp3292.inclusive;
bool $tmp3296 = $tmp3295.value;
frost$core$Int $tmp3297 = (frost$core$Int) {1u};
if ($tmp3296) goto block11; else goto block12;
block11:;
int64_t $tmp3298 = $tmp3293.value;
int64_t $tmp3299 = $tmp3294.value;
bool $tmp3300 = $tmp3298 <= $tmp3299;
frost$core$Bit $tmp3301 = (frost$core$Bit) {$tmp3300};
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block8; else goto block9;
block12:;
int64_t $tmp3303 = $tmp3293.value;
int64_t $tmp3304 = $tmp3294.value;
bool $tmp3305 = $tmp3303 < $tmp3304;
frost$core$Bit $tmp3306 = (frost$core$Bit) {$tmp3305};
bool $tmp3307 = $tmp3306.value;
if ($tmp3307) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1482
frost$core$Char8** $tmp3308 = &param0->data;
frost$core$Char8* $tmp3309 = *$tmp3308;
frost$core$Int $tmp3310 = *(&local2);
frost$core$Int64 $tmp3311 = frost$core$Int64$init$frost$core$Int($tmp3310);
int64_t $tmp3312 = $tmp3311.value;
frost$core$Char8 $tmp3313 = $tmp3309[$tmp3312];
uint8_t $tmp3314 = $tmp3313.value;
frost$core$Int64 $tmp3315 = (frost$core$Int64) {((int64_t) $tmp3314)};
frost$core$Int64 $tmp3316 = (frost$core$Int64) {48u};
int64_t $tmp3317 = $tmp3315.value;
int64_t $tmp3318 = $tmp3316.value;
int64_t $tmp3319 = $tmp3317 - $tmp3318;
frost$core$Int64 $tmp3320 = (frost$core$Int64) {$tmp3319};
*(&local3) = $tmp3320;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1483
frost$core$Int64 $tmp3321 = *(&local3);
frost$core$Int64 $tmp3322 = (frost$core$Int64) {0u};
int64_t $tmp3323 = $tmp3321.value;
int64_t $tmp3324 = $tmp3322.value;
bool $tmp3325 = $tmp3323 < $tmp3324;
frost$core$Bit $tmp3326 = (frost$core$Bit) {$tmp3325};
bool $tmp3327 = $tmp3326.value;
if ($tmp3327) goto block13; else goto block15;
block15:;
frost$core$Int64 $tmp3328 = *(&local3);
frost$core$Int64 $tmp3329 = (frost$core$Int64) {9u};
int64_t $tmp3330 = $tmp3328.value;
int64_t $tmp3331 = $tmp3329.value;
bool $tmp3332 = $tmp3330 > $tmp3331;
frost$core$Bit $tmp3333 = (frost$core$Bit) {$tmp3332};
bool $tmp3334 = $tmp3333.value;
if ($tmp3334) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1484
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1486
frost$core$Int64 $tmp3335 = *(&local0);
frost$core$Int64 $tmp3336 = (frost$core$Int64) {10u};
int64_t $tmp3337 = $tmp3335.value;
int64_t $tmp3338 = $tmp3336.value;
int64_t $tmp3339 = $tmp3337 * $tmp3338;
frost$core$Int64 $tmp3340 = (frost$core$Int64) {$tmp3339};
frost$core$Int64 $tmp3341 = *(&local3);
int64_t $tmp3342 = $tmp3340.value;
int64_t $tmp3343 = $tmp3341.value;
int64_t $tmp3344 = $tmp3342 + $tmp3343;
frost$core$Int64 $tmp3345 = (frost$core$Int64) {$tmp3344};
*(&local0) = $tmp3345;
frost$core$Int $tmp3346 = *(&local2);
int64_t $tmp3347 = $tmp3294.value;
int64_t $tmp3348 = $tmp3346.value;
int64_t $tmp3349 = $tmp3347 - $tmp3348;
frost$core$Int $tmp3350 = (frost$core$Int) {$tmp3349};
if ($tmp3296) goto block17; else goto block18;
block17:;
int64_t $tmp3351 = $tmp3350.value;
int64_t $tmp3352 = $tmp3297.value;
bool $tmp3353 = $tmp3351 >= $tmp3352;
frost$core$Bit $tmp3354 = (frost$core$Bit) {$tmp3353};
bool $tmp3355 = $tmp3354.value;
if ($tmp3355) goto block16; else goto block9;
block18:;
int64_t $tmp3356 = $tmp3350.value;
int64_t $tmp3357 = $tmp3297.value;
bool $tmp3358 = $tmp3356 > $tmp3357;
frost$core$Bit $tmp3359 = (frost$core$Bit) {$tmp3358};
bool $tmp3360 = $tmp3359.value;
if ($tmp3360) goto block16; else goto block9;
block16:;
int64_t $tmp3361 = $tmp3346.value;
int64_t $tmp3362 = $tmp3297.value;
int64_t $tmp3363 = $tmp3361 + $tmp3362;
frost$core$Int $tmp3364 = (frost$core$Int) {$tmp3363};
*(&local2) = $tmp3364;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1488
frost$core$Char8** $tmp3365 = &param0->data;
frost$core$Char8* $tmp3366 = *$tmp3365;
frost$core$Int64 $tmp3367 = (frost$core$Int64) {0u};
int64_t $tmp3368 = $tmp3367.value;
frost$core$Char8 $tmp3369 = $tmp3366[$tmp3368];
frost$core$UInt8 $tmp3370 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3371 = frost$core$Char8$init$frost$core$UInt8($tmp3370);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1488:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp3372 = $tmp3369.value;
uint8_t $tmp3373 = $tmp3371.value;
bool $tmp3374 = $tmp3372 == $tmp3373;
frost$core$Bit $tmp3375 = (frost$core$Bit) {$tmp3374};
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1489
frost$core$Int64 $tmp3377 = *(&local0);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1489:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp3378 = $tmp3377.value;
int64_t $tmp3379 = -$tmp3378;
frost$core$Int64 $tmp3380 = (frost$core$Int64) {$tmp3379};
*(&local0) = $tmp3380;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1491
frost$core$Int64 $tmp3381 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp3381, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int local1;
frost$core$UInt64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1502
frost$core$Int* $tmp3382 = &param0->_length;
frost$core$Int $tmp3383 = *$tmp3382;
frost$core$Int $tmp3384 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:1502:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3385 = $tmp3383.value;
int64_t $tmp3386 = $tmp3384.value;
bool $tmp3387 = $tmp3385 == $tmp3386;
frost$core$Bit $tmp3388 = (frost$core$Bit) {$tmp3387};
bool $tmp3389 = $tmp3388.value;
if ($tmp3389) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1503
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1505
frost$core$UInt64 $tmp3390 = (frost$core$UInt64) {0u};
*(&local0) = $tmp3390;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1506
frost$core$Int $tmp3391 = (frost$core$Int) {0u};
frost$core$Int* $tmp3392 = &param0->_length;
frost$core$Int $tmp3393 = *$tmp3392;
frost$core$Bit $tmp3394 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3395 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3391, $tmp3393, $tmp3394);
frost$core$Int $tmp3396 = $tmp3395.min;
*(&local1) = $tmp3396;
frost$core$Int $tmp3397 = $tmp3395.max;
frost$core$Bit $tmp3398 = $tmp3395.inclusive;
bool $tmp3399 = $tmp3398.value;
frost$core$Int $tmp3400 = (frost$core$Int) {1u};
if ($tmp3399) goto block7; else goto block8;
block7:;
int64_t $tmp3401 = $tmp3396.value;
int64_t $tmp3402 = $tmp3397.value;
bool $tmp3403 = $tmp3401 <= $tmp3402;
frost$core$Bit $tmp3404 = (frost$core$Bit) {$tmp3403};
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block4; else goto block5;
block8:;
int64_t $tmp3406 = $tmp3396.value;
int64_t $tmp3407 = $tmp3397.value;
bool $tmp3408 = $tmp3406 < $tmp3407;
frost$core$Bit $tmp3409 = (frost$core$Bit) {$tmp3408};
bool $tmp3410 = $tmp3409.value;
if ($tmp3410) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1507
frost$core$Char8** $tmp3411 = &param0->data;
frost$core$Char8* $tmp3412 = *$tmp3411;
frost$core$Int $tmp3413 = *(&local1);
frost$core$Int64 $tmp3414 = frost$core$Int64$init$frost$core$Int($tmp3413);
int64_t $tmp3415 = $tmp3414.value;
frost$core$Char8 $tmp3416 = $tmp3412[$tmp3415];
uint8_t $tmp3417 = $tmp3416.value;
frost$core$UInt64 $tmp3418 = (frost$core$UInt64) {((uint64_t) $tmp3417)};
frost$core$UInt64 $tmp3419 = (frost$core$UInt64) {48u};
uint64_t $tmp3420 = $tmp3418.value;
uint64_t $tmp3421 = $tmp3419.value;
uint64_t $tmp3422 = $tmp3420 - $tmp3421;
frost$core$UInt64 $tmp3423 = (frost$core$UInt64) {$tmp3422};
*(&local2) = $tmp3423;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1508
frost$core$UInt64 $tmp3424 = *(&local2);
frost$core$UInt64 $tmp3425 = (frost$core$UInt64) {0u};
uint64_t $tmp3426 = $tmp3424.value;
uint64_t $tmp3427 = $tmp3425.value;
bool $tmp3428 = $tmp3426 < $tmp3427;
frost$core$Bit $tmp3429 = (frost$core$Bit) {$tmp3428};
bool $tmp3430 = $tmp3429.value;
if ($tmp3430) goto block9; else goto block11;
block11:;
frost$core$UInt64 $tmp3431 = *(&local2);
frost$core$UInt64 $tmp3432 = (frost$core$UInt64) {9u};
uint64_t $tmp3433 = $tmp3431.value;
uint64_t $tmp3434 = $tmp3432.value;
bool $tmp3435 = $tmp3433 > $tmp3434;
frost$core$Bit $tmp3436 = (frost$core$Bit) {$tmp3435};
bool $tmp3437 = $tmp3436.value;
if ($tmp3437) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1509
return ((frost$core$UInt64$nullable) { .nonnull = false });
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1511
frost$core$UInt64 $tmp3438 = *(&local0);
frost$core$UInt64 $tmp3439 = (frost$core$UInt64) {10u};
uint64_t $tmp3440 = $tmp3438.value;
uint64_t $tmp3441 = $tmp3439.value;
uint64_t $tmp3442 = $tmp3440 * $tmp3441;
frost$core$UInt64 $tmp3443 = (frost$core$UInt64) {$tmp3442};
frost$core$UInt64 $tmp3444 = *(&local2);
uint64_t $tmp3445 = $tmp3443.value;
uint64_t $tmp3446 = $tmp3444.value;
uint64_t $tmp3447 = $tmp3445 + $tmp3446;
frost$core$UInt64 $tmp3448 = (frost$core$UInt64) {$tmp3447};
*(&local0) = $tmp3448;
frost$core$Int $tmp3449 = *(&local1);
int64_t $tmp3450 = $tmp3397.value;
int64_t $tmp3451 = $tmp3449.value;
int64_t $tmp3452 = $tmp3450 - $tmp3451;
frost$core$Int $tmp3453 = (frost$core$Int) {$tmp3452};
if ($tmp3399) goto block13; else goto block14;
block13:;
int64_t $tmp3454 = $tmp3453.value;
int64_t $tmp3455 = $tmp3400.value;
bool $tmp3456 = $tmp3454 >= $tmp3455;
frost$core$Bit $tmp3457 = (frost$core$Bit) {$tmp3456};
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block12; else goto block5;
block14:;
int64_t $tmp3459 = $tmp3453.value;
int64_t $tmp3460 = $tmp3400.value;
bool $tmp3461 = $tmp3459 > $tmp3460;
frost$core$Bit $tmp3462 = (frost$core$Bit) {$tmp3461};
bool $tmp3463 = $tmp3462.value;
if ($tmp3463) goto block12; else goto block5;
block12:;
int64_t $tmp3464 = $tmp3449.value;
int64_t $tmp3465 = $tmp3400.value;
int64_t $tmp3466 = $tmp3464 + $tmp3465;
frost$core$Int $tmp3467 = (frost$core$Int) {$tmp3466};
*(&local1) = $tmp3467;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1513
frost$core$UInt64 $tmp3468 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp3468, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Real64 $tmp3469;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp3469, param0);
return ((frost$core$Real64$nullable) { $tmp3469, true });

}
frost$core$Int frost$core$String$get_hash$R$frost$core$Int(frost$core$String* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1534
frost$core$Int $tmp3470 = (frost$core$Int) {14695981039346656037u};
*(&local0) = $tmp3470;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1535
frost$core$Int $tmp3471 = (frost$core$Int) {0u};
frost$core$Int* $tmp3472 = &param0->_length;
frost$core$Int $tmp3473 = *$tmp3472;
frost$core$Bit $tmp3474 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp3475 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp3471, $tmp3473, $tmp3474);
frost$core$Int $tmp3476 = $tmp3475.min;
*(&local1) = $tmp3476;
frost$core$Int $tmp3477 = $tmp3475.max;
frost$core$Bit $tmp3478 = $tmp3475.inclusive;
bool $tmp3479 = $tmp3478.value;
frost$core$Int $tmp3480 = (frost$core$Int) {1u};
if ($tmp3479) goto block4; else goto block5;
block4:;
int64_t $tmp3481 = $tmp3476.value;
int64_t $tmp3482 = $tmp3477.value;
bool $tmp3483 = $tmp3481 <= $tmp3482;
frost$core$Bit $tmp3484 = (frost$core$Bit) {$tmp3483};
bool $tmp3485 = $tmp3484.value;
if ($tmp3485) goto block1; else goto block2;
block5:;
int64_t $tmp3486 = $tmp3476.value;
int64_t $tmp3487 = $tmp3477.value;
bool $tmp3488 = $tmp3486 < $tmp3487;
frost$core$Bit $tmp3489 = (frost$core$Bit) {$tmp3488};
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1536
frost$core$Int $tmp3491 = *(&local0);
frost$core$Char8** $tmp3492 = &param0->data;
frost$core$Char8* $tmp3493 = *$tmp3492;
frost$core$Int $tmp3494 = *(&local1);
frost$core$Int64 $tmp3495 = frost$core$Int64$init$frost$core$Int($tmp3494);
int64_t $tmp3496 = $tmp3495.value;
frost$core$Char8 $tmp3497 = $tmp3493[$tmp3496];
// begin inline call to function frost.core.Char8.get_asInt8():frost.core.Int8 from String.frost:1536:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:106
uint8_t $tmp3498 = $tmp3497.value;
frost$core$Int8 $tmp3499 = (frost$core$Int8) {((int8_t) $tmp3498)};
frost$core$Int $tmp3500 = frost$core$Int$init$frost$core$Int8($tmp3499);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from String.frost:1536:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp3501 = $tmp3491.value;
int64_t $tmp3502 = $tmp3500.value;
int64_t $tmp3503 = $tmp3501 ^ $tmp3502;
frost$core$Int $tmp3504 = (frost$core$Int) {$tmp3503};
*(&local0) = $tmp3504;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1537
frost$core$Int $tmp3505 = *(&local0);
frost$core$Int $tmp3506 = (frost$core$Int) {1099511628211u};
int64_t $tmp3507 = $tmp3505.value;
int64_t $tmp3508 = $tmp3506.value;
int64_t $tmp3509 = $tmp3507 * $tmp3508;
frost$core$Int $tmp3510 = (frost$core$Int) {$tmp3509};
*(&local0) = $tmp3510;
frost$core$Int $tmp3511 = *(&local1);
int64_t $tmp3512 = $tmp3477.value;
int64_t $tmp3513 = $tmp3511.value;
int64_t $tmp3514 = $tmp3512 - $tmp3513;
frost$core$Int $tmp3515 = (frost$core$Int) {$tmp3514};
if ($tmp3479) goto block9; else goto block10;
block9:;
int64_t $tmp3516 = $tmp3515.value;
int64_t $tmp3517 = $tmp3480.value;
bool $tmp3518 = $tmp3516 >= $tmp3517;
frost$core$Bit $tmp3519 = (frost$core$Bit) {$tmp3518};
bool $tmp3520 = $tmp3519.value;
if ($tmp3520) goto block8; else goto block2;
block10:;
int64_t $tmp3521 = $tmp3515.value;
int64_t $tmp3522 = $tmp3480.value;
bool $tmp3523 = $tmp3521 > $tmp3522;
frost$core$Bit $tmp3524 = (frost$core$Bit) {$tmp3523};
bool $tmp3525 = $tmp3524.value;
if ($tmp3525) goto block8; else goto block2;
block8:;
int64_t $tmp3526 = $tmp3511.value;
int64_t $tmp3527 = $tmp3480.value;
int64_t $tmp3528 = $tmp3526 + $tmp3527;
frost$core$Int $tmp3529 = (frost$core$Int) {$tmp3528};
*(&local1) = $tmp3529;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1539
frost$core$Int $tmp3530 = *(&local0);
return $tmp3530;

}

