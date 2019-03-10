#include "frost/core/String.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Comparable.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
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
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/core/String/RegexMatchIterator.h"
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
__attribute__((weak)) frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64$shim(frost$core$String* p0) {
    frost$core$Int64 result = frost$core$String$get_hash$R$frost$core$Int64(p0);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$collections$Key, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt$R$frost$core$Int64$Q, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn56)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn89)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn93)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn182)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn186)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn191)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn281)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn285)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn698)(frost$core$Object*);
typedef frost$core$String* (*$fn814)(frost$core$Object*);
typedef frost$core$Bit (*$fn905)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn918)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn952)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1542)(frost$core$Object*);
typedef frost$core$String* (*$fn1734)(frost$core$Object*);
typedef frost$core$Object* (*$fn2424)(frost$core$String*);
typedef frost$core$Object* (*$fn2426)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2430)(frost$core$Object*);
typedef frost$core$String* (*$fn2444)(frost$core$Object*);
typedef frost$core$Object* (*$fn2512)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2514)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2518)(frost$core$Object*);
typedef frost$core$String* (*$fn2533)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2798)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2802)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2811)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2815)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2874)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2878)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2887)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2891)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2950)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2954)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2963)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2967)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3109)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3172)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 168332950343237285, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x22", 2, 671069362943044699, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 671084756105839653, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e", 2, 671135333640737359, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 671122139501198827, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x74", 2, 671128736570968093, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, -978164725716003980, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8663788357375497011, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s2625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -1509635422317059187, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:328
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:351
frost$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:352
frost$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp6 = &param0->owner;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2, frost$core$String* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:328
frost$core$Int64 $tmp9 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:358
frost$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:359
frost$core$Int64* $tmp12 = &param0->_length;
*$tmp12 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp13 = &param0->owner;
frost$core$String* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String** $tmp15 = &param0->owner;
*$tmp15 = param3;
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:328
frost$core$Int64 $tmp16 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:364
ITable* $tmp18 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int64 $tmp21 = $tmp19(((frost$collections$CollectionView*) param1));
frost$core$Int64* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:365
frost$core$Int64* $tmp23 = &param0->_length;
frost$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
frost$core$Char8* $tmp26 = ((frost$core$Char8*) frostAlloc($tmp25 * 1));
frost$core$Char8** $tmp27 = &param0->data;
*$tmp27 = $tmp26;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:366
frost$core$Int64 $tmp28 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp29 = &param0->_length;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp32 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp28, $tmp30, $tmp31);
frost$core$Int64 $tmp33 = $tmp32.min;
*(&local0) = $tmp33;
frost$core$Int64 $tmp34 = $tmp32.max;
frost$core$Bit $tmp35 = $tmp32.inclusive;
bool $tmp36 = $tmp35.value;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp38 = $tmp37.value;
frost$core$UInt64 $tmp39 = (frost$core$UInt64) {((uint64_t) $tmp38)};
if ($tmp36) goto block5; else goto block6;
block5:;
int64_t $tmp40 = $tmp33.value;
int64_t $tmp41 = $tmp34.value;
bool $tmp42 = $tmp40 <= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block2; else goto block3;
block6:;
int64_t $tmp45 = $tmp33.value;
int64_t $tmp46 = $tmp34.value;
bool $tmp47 = $tmp45 < $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:367
frost$core$Char8** $tmp50 = &param0->data;
frost$core$Char8* $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Int64 $tmp53 = *(&local0);
ITable* $tmp54 = param1->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Object* $tmp57 = $tmp55(param1, $tmp53);
int64_t $tmp58 = $tmp52.value;
$tmp51[$tmp58] = ((frost$core$Char8$wrapper*) $tmp57)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Int64 $tmp59 = *(&local0);
int64_t $tmp60 = $tmp34.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 - $tmp61;
frost$core$Int64 $tmp63 = (frost$core$Int64) {$tmp62};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp64 = $tmp63.value;
frost$core$UInt64 $tmp65 = (frost$core$UInt64) {((uint64_t) $tmp64)};
if ($tmp36) goto block9; else goto block10;
block9:;
uint64_t $tmp66 = $tmp65.value;
uint64_t $tmp67 = $tmp39.value;
bool $tmp68 = $tmp66 >= $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block7; else goto block3;
block10:;
uint64_t $tmp71 = $tmp65.value;
uint64_t $tmp72 = $tmp39.value;
bool $tmp73 = $tmp71 > $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block7; else goto block3;
block7:;
int64_t $tmp76 = $tmp59.value;
int64_t $tmp77 = $tmp37.value;
int64_t $tmp78 = $tmp76 + $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
*(&local0) = $tmp79;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:369
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp80 = &param0->owner;
frost$core$String* $tmp81 = *$tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String** $tmp82 = &param0->owner;
*$tmp82 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:328
frost$core$Int64 $tmp83 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp84 = &param0->dummy;
*$tmp84 = $tmp83;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:373
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp85 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp85);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$MutableString* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:374
ITable* $tmp87 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$collections$Iterator* $tmp90 = $tmp88(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp91 = $tmp90->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Bit $tmp94 = $tmp92($tmp90);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block3; else goto block2;
block2:;
ITable* $tmp96 = $tmp90->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
frost$core$Object* $tmp99 = $tmp97($tmp90);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp99)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:375
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$Char32 $tmp101 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp100, $tmp101);
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:377
frost$core$MutableString* $tmp102 = *(&local0);
frost$core$Int64* $tmp103 = &$tmp102->_length;
frost$core$Int64 $tmp104 = *$tmp103;
int64_t $tmp105 = $tmp104.value;
frost$core$Char8* $tmp106 = ((frost$core$Char8*) frostAlloc($tmp105 * 1));
frost$core$Char8** $tmp107 = &param0->data;
*$tmp107 = $tmp106;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:378
frost$core$Int64 $tmp108 = (frost$core$Int64) {0u};
frost$core$MutableString* $tmp109 = *(&local0);
frost$core$Int64* $tmp110 = &$tmp109->_length;
frost$core$Int64 $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp113 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp108, $tmp111, $tmp112);
frost$core$Int64 $tmp114 = $tmp113.min;
*(&local2) = $tmp114;
frost$core$Int64 $tmp115 = $tmp113.max;
frost$core$Bit $tmp116 = $tmp113.inclusive;
bool $tmp117 = $tmp116.value;
frost$core$Int64 $tmp118 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp119 = $tmp118.value;
frost$core$UInt64 $tmp120 = (frost$core$UInt64) {((uint64_t) $tmp119)};
if ($tmp117) goto block8; else goto block9;
block8:;
int64_t $tmp121 = $tmp114.value;
int64_t $tmp122 = $tmp115.value;
bool $tmp123 = $tmp121 <= $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block5; else goto block6;
block9:;
int64_t $tmp126 = $tmp114.value;
int64_t $tmp127 = $tmp115.value;
bool $tmp128 = $tmp126 < $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:379
frost$core$Char8** $tmp131 = &param0->data;
frost$core$Char8* $tmp132 = *$tmp131;
frost$core$Int64 $tmp133 = *(&local2);
frost$core$MutableString* $tmp134 = *(&local0);
frost$core$Char8** $tmp135 = &$tmp134->data;
frost$core$Char8* $tmp136 = *$tmp135;
frost$core$Int64 $tmp137 = *(&local2);
int64_t $tmp138 = $tmp137.value;
frost$core$Char8 $tmp139 = $tmp136[$tmp138];
int64_t $tmp140 = $tmp133.value;
$tmp132[$tmp140] = $tmp139;
frost$core$Int64 $tmp141 = *(&local2);
int64_t $tmp142 = $tmp115.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 - $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {$tmp144};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp146 = $tmp145.value;
frost$core$UInt64 $tmp147 = (frost$core$UInt64) {((uint64_t) $tmp146)};
if ($tmp117) goto block12; else goto block13;
block12:;
uint64_t $tmp148 = $tmp147.value;
uint64_t $tmp149 = $tmp120.value;
bool $tmp150 = $tmp148 >= $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block10; else goto block6;
block13:;
uint64_t $tmp153 = $tmp147.value;
uint64_t $tmp154 = $tmp120.value;
bool $tmp155 = $tmp153 > $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block10; else goto block6;
block10:;
int64_t $tmp158 = $tmp141.value;
int64_t $tmp159 = $tmp118.value;
int64_t $tmp160 = $tmp158 + $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {$tmp160};
*(&local2) = $tmp161;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:381
frost$core$MutableString* $tmp162 = *(&local0);
frost$core$Int64* $tmp163 = &$tmp162->_length;
frost$core$Int64 $tmp164 = *$tmp163;
frost$core$Int64* $tmp165 = &param0->_length;
*$tmp165 = $tmp164;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp166 = &param0->owner;
frost$core$String* $tmp167 = *$tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$String** $tmp168 = &param0->owner;
*$tmp168 = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:403
frost$core$Bit $tmp170 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s171);
bool $tmp172 = $tmp170.value;
if ($tmp172) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block3:;
frost$core$Bit $tmp173 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s174);
bool $tmp175 = $tmp173.value;
if ($tmp175) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:408
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp176 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp176, &$s177);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$MutableString* $tmp178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local0) = $tmp176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:409
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from String.frost:409:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp179 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp179, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp179)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
ITable* $tmp180 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp179))->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$collections$Iterator* $tmp183 = $tmp181(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp179)));
goto block7;
block7:;
ITable* $tmp184 = $tmp183->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Bit $tmp187 = $tmp185($tmp183);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block9; else goto block8;
block8:;
ITable* $tmp189 = $tmp183->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
frost$core$Object* $tmp192 = $tmp190($tmp183);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp192)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:410
frost$core$Char8 $tmp193 = *(&local1);
frost$core$UInt8 $tmp194 = (frost$core$UInt8) {34u};
frost$core$Char8 $tmp195 = frost$core$Char8$init$frost$core$UInt8($tmp194);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:411:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp196 = $tmp193.value;
uint8_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 == $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:412
frost$core$MutableString* $tmp201 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp201, &$s202);
goto block10;
block12:;
frost$core$UInt8 $tmp203 = (frost$core$UInt8) {92u};
frost$core$Char8 $tmp204 = frost$core$Char8$init$frost$core$UInt8($tmp203);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:414:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp205 = $tmp193.value;
uint8_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:415
frost$core$MutableString* $tmp210 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp210, &$s211);
goto block10;
block15:;
frost$core$UInt8 $tmp212 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp213 = frost$core$Char8$init$frost$core$UInt8($tmp212);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:417:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp214 = $tmp193.value;
uint8_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 == $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:418
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp219, &$s220);
goto block10;
block18:;
frost$core$UInt8 $tmp221 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp222 = frost$core$Char8$init$frost$core$UInt8($tmp221);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:420:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp223 = $tmp193.value;
uint8_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 == $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:421
frost$core$MutableString* $tmp228 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp228, &$s229);
goto block10;
block21:;
frost$core$UInt8 $tmp230 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp231 = frost$core$Char8$init$frost$core$UInt8($tmp230);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:423:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp232 = $tmp193.value;
uint8_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 == $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:424
frost$core$MutableString* $tmp237 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp237, &$s238);
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:427
frost$core$Char8 $tmp239 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp240 = $tmp239.value;
frost$core$UInt8 $tmp241 = (frost$core$UInt8) {$tmp240};
frost$core$UInt8 $tmp242 = (frost$core$UInt8) {32u};
uint8_t $tmp243 = $tmp241.value;
uint8_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 >= $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block29; else goto block28;
block29:;
frost$core$Char8 $tmp248 = *(&local1);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from String.frost:427:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp249 = $tmp248.value;
frost$core$UInt8 $tmp250 = (frost$core$UInt8) {$tmp249};
frost$core$UInt8 $tmp251 = (frost$core$UInt8) {126u};
uint8_t $tmp252 = $tmp250.value;
uint8_t $tmp253 = $tmp251.value;
bool $tmp254 = $tmp252 <= $tmp253;
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block26; else goto block28;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:428
frost$core$MutableString* $tmp257 = *(&local0);
frost$core$Char8 $tmp258 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp257, $tmp258);
goto block27;
block28:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:432
frost$core$MutableString* $tmp259 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp259, &$s260);
goto block27;
block27:;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp179)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:437
frost$core$MutableString* $tmp261 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp261, &$s262);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:438
frost$core$MutableString* $tmp263 = *(&local0);
frost$core$String* $tmp264 = frost$core$MutableString$finish$R$frost$core$String($tmp263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$MutableString* $tmp265 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp264;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:441
frost$core$Int64 $tmp266 = (frost$core$Int64) {441u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s267, $tmp266);
abort(); // unreachable
block1:;
goto block32;
block32:;

}
void frost$core$String$cleanup(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:449
frost$core$String** $tmp268 = &param0->owner;
frost$core$String* $tmp269 = *$tmp268;
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269 == NULL};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:450
frost$core$Char8** $tmp272 = &param0->data;
frost$core$Char8* $tmp273 = *$tmp272;
frostFree($tmp273);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:448
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp274 = &param0->owner;
frost$core$String* $tmp275 = *$tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp276 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp276, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp276)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
return ((frost$collections$ListView*) $tmp276);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:467
FROST_ASSERT(32 == sizeof(frost$core$String$UTF16Iterator));
frost$core$String$UTF16Iterator* $tmp277 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp277, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp277)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
return ((frost$collections$Iterator*) $tmp277);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:475
FROST_ASSERT(32 == sizeof(frost$core$String$UTF32Iterator));
frost$core$String$UTF32Iterator* $tmp278 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp278, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp278)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
return ((frost$collections$Iterator*) $tmp278);

}
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp279 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$collections$Iterator* $tmp282 = $tmp280(((frost$collections$Iterable*) param0));
ITable* $tmp283 = $tmp282->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[2];
frost$core$Int64 $tmp286 = $tmp284($tmp282);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
return $tmp286;

}
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int64* $tmp287 = &param0->_length;
frost$core$Int64 $tmp288 = *$tmp287;
return $tmp288;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:496
frost$core$Int64* $tmp289 = &param0->_length;
frost$core$Int64 $tmp290 = *$tmp289;
frost$core$Int64* $tmp291 = &param1->_length;
frost$core$Int64 $tmp292 = *$tmp291;
int64_t $tmp293 = $tmp290.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 < $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:497
frost$core$Bit $tmp298 = (frost$core$Bit) {false};
return $tmp298;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:499
frost$core$Int64 $tmp299 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp300 = &param1->_length;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp303 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp299, $tmp301, $tmp302);
frost$core$Int64 $tmp304 = $tmp303.min;
*(&local0) = $tmp304;
frost$core$Int64 $tmp305 = $tmp303.max;
frost$core$Bit $tmp306 = $tmp303.inclusive;
bool $tmp307 = $tmp306.value;
frost$core$Int64 $tmp308 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp309 = $tmp308.value;
frost$core$UInt64 $tmp310 = (frost$core$UInt64) {((uint64_t) $tmp309)};
if ($tmp307) goto block7; else goto block8;
block7:;
int64_t $tmp311 = $tmp304.value;
int64_t $tmp312 = $tmp305.value;
bool $tmp313 = $tmp311 <= $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block4; else goto block5;
block8:;
int64_t $tmp316 = $tmp304.value;
int64_t $tmp317 = $tmp305.value;
bool $tmp318 = $tmp316 < $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:500
frost$core$Char8** $tmp321 = &param0->data;
frost$core$Char8* $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = *(&local0);
int64_t $tmp324 = $tmp323.value;
frost$core$Char8 $tmp325 = $tmp322[$tmp324];
frost$core$Char8** $tmp326 = &param1->data;
frost$core$Char8* $tmp327 = *$tmp326;
frost$core$Int64 $tmp328 = *(&local0);
int64_t $tmp329 = $tmp328.value;
frost$core$Char8 $tmp330 = $tmp327[$tmp329];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:500:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp331 = $tmp325.value;
uint8_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 != $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:501
frost$core$Bit $tmp336 = (frost$core$Bit) {false};
return $tmp336;
block10:;
frost$core$Int64 $tmp337 = *(&local0);
int64_t $tmp338 = $tmp305.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 - $tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp342 = $tmp341.value;
frost$core$UInt64 $tmp343 = (frost$core$UInt64) {((uint64_t) $tmp342)};
if ($tmp307) goto block14; else goto block15;
block14:;
uint64_t $tmp344 = $tmp343.value;
uint64_t $tmp345 = $tmp310.value;
bool $tmp346 = $tmp344 >= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block12; else goto block5;
block15:;
uint64_t $tmp349 = $tmp343.value;
uint64_t $tmp350 = $tmp310.value;
bool $tmp351 = $tmp349 > $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block12; else goto block5;
block12:;
int64_t $tmp354 = $tmp337.value;
int64_t $tmp355 = $tmp308.value;
int64_t $tmp356 = $tmp354 + $tmp355;
frost$core$Int64 $tmp357 = (frost$core$Int64) {$tmp356};
*(&local0) = $tmp357;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:504
frost$core$Bit $tmp358 = (frost$core$Bit) {true};
return $tmp358;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:508
frost$core$Int64* $tmp359 = &param0->_length;
frost$core$Int64 $tmp360 = *$tmp359;
frost$core$Int64* $tmp361 = &param1->_length;
frost$core$Int64 $tmp362 = *$tmp361;
int64_t $tmp363 = $tmp360.value;
int64_t $tmp364 = $tmp362.value;
bool $tmp365 = $tmp363 < $tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:509
frost$core$Bit $tmp368 = (frost$core$Bit) {false};
return $tmp368;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:511
frost$core$Int64 $tmp369 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp370 = &param1->_length;
frost$core$Int64 $tmp371 = *$tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp373 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp369, $tmp371, $tmp372);
frost$core$Int64 $tmp374 = $tmp373.min;
*(&local0) = $tmp374;
frost$core$Int64 $tmp375 = $tmp373.max;
frost$core$Bit $tmp376 = $tmp373.inclusive;
bool $tmp377 = $tmp376.value;
frost$core$Int64 $tmp378 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp379 = $tmp378.value;
frost$core$UInt64 $tmp380 = (frost$core$UInt64) {((uint64_t) $tmp379)};
if ($tmp377) goto block7; else goto block8;
block7:;
int64_t $tmp381 = $tmp374.value;
int64_t $tmp382 = $tmp375.value;
bool $tmp383 = $tmp381 <= $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block4; else goto block5;
block8:;
int64_t $tmp386 = $tmp374.value;
int64_t $tmp387 = $tmp375.value;
bool $tmp388 = $tmp386 < $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:512
frost$core$Char8** $tmp391 = &param0->data;
frost$core$Char8* $tmp392 = *$tmp391;
frost$core$Int64* $tmp393 = &param0->_length;
frost$core$Int64 $tmp394 = *$tmp393;
frost$core$Int64* $tmp395 = &param1->_length;
frost$core$Int64 $tmp396 = *$tmp395;
int64_t $tmp397 = $tmp394.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 - $tmp398;
frost$core$Int64 $tmp400 = (frost$core$Int64) {$tmp399};
frost$core$Int64 $tmp401 = *(&local0);
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401.value;
int64_t $tmp404 = $tmp402 + $tmp403;
frost$core$Int64 $tmp405 = (frost$core$Int64) {$tmp404};
int64_t $tmp406 = $tmp405.value;
frost$core$Char8 $tmp407 = $tmp392[$tmp406];
frost$core$Char8** $tmp408 = &param1->data;
frost$core$Char8* $tmp409 = *$tmp408;
frost$core$Int64 $tmp410 = *(&local0);
int64_t $tmp411 = $tmp410.value;
frost$core$Char8 $tmp412 = $tmp409[$tmp411];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:512:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp413 = $tmp407.value;
uint8_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 != $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:513
frost$core$Bit $tmp418 = (frost$core$Bit) {false};
return $tmp418;
block10:;
frost$core$Int64 $tmp419 = *(&local0);
int64_t $tmp420 = $tmp375.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 - $tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {$tmp422};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp424 = $tmp423.value;
frost$core$UInt64 $tmp425 = (frost$core$UInt64) {((uint64_t) $tmp424)};
if ($tmp377) goto block14; else goto block15;
block14:;
uint64_t $tmp426 = $tmp425.value;
uint64_t $tmp427 = $tmp380.value;
bool $tmp428 = $tmp426 >= $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block12; else goto block5;
block15:;
uint64_t $tmp431 = $tmp425.value;
uint64_t $tmp432 = $tmp380.value;
bool $tmp433 = $tmp431 > $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block12; else goto block5;
block12:;
int64_t $tmp436 = $tmp419.value;
int64_t $tmp437 = $tmp378.value;
int64_t $tmp438 = $tmp436 + $tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {$tmp438};
*(&local0) = $tmp439;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:516
frost$core$Bit $tmp440 = (frost$core$Bit) {true};
return $tmp440;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:525
frost$core$Int64* $tmp441 = &param0->_length;
frost$core$Int64 $tmp442 = *$tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:525:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 == $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:528
frost$core$Int64 $tmp449 = (frost$core$Int64) {0u};
*(&local0) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:529
goto block4;
block4:;
frost$core$Int64 $tmp450 = *(&local0);
frost$core$Int64* $tmp451 = &param0->_length;
frost$core$Int64 $tmp452 = *$tmp451;
int64_t $tmp453 = $tmp450.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 < $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block7; else goto block6;
block7:;
frost$core$Char8** $tmp458 = &param0->data;
frost$core$Char8* $tmp459 = *$tmp458;
frost$core$Int64 $tmp460 = *(&local0);
int64_t $tmp461 = $tmp460.value;
frost$core$Char8 $tmp462 = $tmp459[$tmp461];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:529:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:55
frost$core$UInt8 $tmp463 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp464 = frost$core$Char8$init$frost$core$UInt8($tmp463);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp465 = $tmp462.value;
uint8_t $tmp466 = $tmp464.value;
bool $tmp467 = $tmp465 == $tmp466;
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block10; else goto block11;
block11:;
frost$core$UInt8 $tmp470 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp471 = frost$core$Char8$init$frost$core$UInt8($tmp470);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp472 = $tmp462.value;
uint8_t $tmp473 = $tmp471.value;
bool $tmp474 = $tmp472 == $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block10; else goto block13;
block13:;
frost$core$UInt8 $tmp477 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp478 = frost$core$Char8$init$frost$core$UInt8($tmp477);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp479 = $tmp462.value;
uint8_t $tmp480 = $tmp478.value;
bool $tmp481 = $tmp479 == $tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block10; else goto block15;
block15:;
frost$core$UInt8 $tmp484 = (frost$core$UInt8) {32u};
frost$core$Char8 $tmp485 = frost$core$Char8$init$frost$core$UInt8($tmp484);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp486 = $tmp462.value;
uint8_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 == $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block10; else goto block17;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:57
frost$core$Bit $tmp491 = (frost$core$Bit) {true};
*(&local1) = $tmp491;
goto block8;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:60
frost$core$Bit $tmp492 = (frost$core$Bit) {false};
*(&local1) = $tmp492;
goto block8;
block9:;
goto block8;
block8:;
frost$core$Bit $tmp493 = *(&local1);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:530
frost$core$Int64 $tmp495 = *(&local0);
frost$core$Int64 $tmp496 = (frost$core$Int64) {1u};
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497 + $tmp498;
frost$core$Int64 $tmp500 = (frost$core$Int64) {$tmp499};
*(&local0) = $tmp500;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:533
frost$core$Int64* $tmp501 = &param0->_length;
frost$core$Int64 $tmp502 = *$tmp501;
frost$core$Int64 $tmp503 = (frost$core$Int64) {1u};
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503.value;
int64_t $tmp506 = $tmp504 - $tmp505;
frost$core$Int64 $tmp507 = (frost$core$Int64) {$tmp506};
*(&local2) = $tmp507;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:534
goto block19;
block19:;
frost$core$Int64 $tmp508 = *(&local2);
frost$core$Int64 $tmp509 = *(&local0);
int64_t $tmp510 = $tmp508.value;
int64_t $tmp511 = $tmp509.value;
bool $tmp512 = $tmp510 >= $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block22; else goto block21;
block22:;
frost$core$Char8** $tmp515 = &param0->data;
frost$core$Char8* $tmp516 = *$tmp515;
frost$core$Int64 $tmp517 = *(&local2);
int64_t $tmp518 = $tmp517.value;
frost$core$Char8 $tmp519 = $tmp516[$tmp518];
// begin inline call to function frost.core.Char8.isWhitespace():frost.core.Bit from String.frost:534:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:55
frost$core$UInt8 $tmp520 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp521 = frost$core$Char8$init$frost$core$UInt8($tmp520);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp522 = $tmp519.value;
uint8_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 == $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block25; else goto block26;
block26:;
frost$core$UInt8 $tmp527 = (frost$core$UInt8) {13u};
frost$core$Char8 $tmp528 = frost$core$Char8$init$frost$core$UInt8($tmp527);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp529 = $tmp519.value;
uint8_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 == $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block25; else goto block28;
block28:;
frost$core$UInt8 $tmp534 = (frost$core$UInt8) {9u};
frost$core$Char8 $tmp535 = frost$core$Char8$init$frost$core$UInt8($tmp534);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp536 = $tmp519.value;
uint8_t $tmp537 = $tmp535.value;
bool $tmp538 = $tmp536 == $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block25; else goto block30;
block30:;
frost$core$UInt8 $tmp541 = (frost$core$UInt8) {32u};
frost$core$Char8 $tmp542 = frost$core$Char8$init$frost$core$UInt8($tmp541);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Char8.frost:56:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp543 = $tmp519.value;
uint8_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 == $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block25; else goto block32;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:57
frost$core$Bit $tmp548 = (frost$core$Bit) {true};
*(&local3) = $tmp548;
goto block23;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:60
frost$core$Bit $tmp549 = (frost$core$Bit) {false};
*(&local3) = $tmp549;
goto block23;
block24:;
goto block23;
block23:;
frost$core$Bit $tmp550 = *(&local3);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:535
frost$core$Int64 $tmp552 = *(&local2);
frost$core$Int64 $tmp553 = (frost$core$Int64) {1u};
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554 - $tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {$tmp556};
*(&local2) = $tmp557;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:538
frost$core$Int64 $tmp558 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:538:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp559 = &(&local5)->value;
*$tmp559 = $tmp558;
frost$core$String$Index $tmp560 = *(&local5);
*(&local4) = $tmp560;
frost$core$String$Index $tmp561 = *(&local4);
frost$core$Int64 $tmp562 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:538:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp563 = &(&local7)->value;
*$tmp563 = $tmp562;
frost$core$String$Index $tmp564 = *(&local7);
*(&local6) = $tmp564;
frost$core$String$Index $tmp565 = *(&local6);
frost$core$Bit $tmp566 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$String$Index$GT $tmp567 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp561, $tmp565, $tmp566);
frost$core$String* $tmp568 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
return $tmp568;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:545
frost$core$Int64* $tmp569 = &param0->_length;
frost$core$Int64 $tmp570 = *$tmp569;
frost$core$Int64* $tmp571 = &param1->_length;
frost$core$Int64 $tmp572 = *$tmp571;
int64_t $tmp573 = $tmp570.value;
int64_t $tmp574 = $tmp572.value;
int64_t $tmp575 = $tmp573 + $tmp574;
frost$core$Int64 $tmp576 = (frost$core$Int64) {$tmp575};
int64_t $tmp577 = $tmp576.value;
frost$core$Char8* $tmp578 = ((frost$core$Char8*) frostAlloc($tmp577 * 1));
*(&local0) = $tmp578;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:546
frost$core$Int64 $tmp579 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp580 = &param0->_length;
frost$core$Int64 $tmp581 = *$tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp583 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp579, $tmp581, $tmp582);
frost$core$Int64 $tmp584 = $tmp583.min;
*(&local1) = $tmp584;
frost$core$Int64 $tmp585 = $tmp583.max;
frost$core$Bit $tmp586 = $tmp583.inclusive;
bool $tmp587 = $tmp586.value;
frost$core$Int64 $tmp588 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp589 = $tmp588.value;
frost$core$UInt64 $tmp590 = (frost$core$UInt64) {((uint64_t) $tmp589)};
if ($tmp587) goto block5; else goto block6;
block5:;
int64_t $tmp591 = $tmp584.value;
int64_t $tmp592 = $tmp585.value;
bool $tmp593 = $tmp591 <= $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block2; else goto block3;
block6:;
int64_t $tmp596 = $tmp584.value;
int64_t $tmp597 = $tmp585.value;
bool $tmp598 = $tmp596 < $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:547
frost$core$Char8* $tmp601 = *(&local0);
frost$core$Int64 $tmp602 = *(&local1);
frost$core$Char8** $tmp603 = &param0->data;
frost$core$Char8* $tmp604 = *$tmp603;
frost$core$Int64 $tmp605 = *(&local1);
int64_t $tmp606 = $tmp605.value;
frost$core$Char8 $tmp607 = $tmp604[$tmp606];
int64_t $tmp608 = $tmp602.value;
$tmp601[$tmp608] = $tmp607;
frost$core$Int64 $tmp609 = *(&local1);
int64_t $tmp610 = $tmp585.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 - $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {$tmp612};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp614 = $tmp613.value;
frost$core$UInt64 $tmp615 = (frost$core$UInt64) {((uint64_t) $tmp614)};
if ($tmp587) goto block9; else goto block10;
block9:;
uint64_t $tmp616 = $tmp615.value;
uint64_t $tmp617 = $tmp590.value;
bool $tmp618 = $tmp616 >= $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block7; else goto block3;
block10:;
uint64_t $tmp621 = $tmp615.value;
uint64_t $tmp622 = $tmp590.value;
bool $tmp623 = $tmp621 > $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block7; else goto block3;
block7:;
int64_t $tmp626 = $tmp609.value;
int64_t $tmp627 = $tmp588.value;
int64_t $tmp628 = $tmp626 + $tmp627;
frost$core$Int64 $tmp629 = (frost$core$Int64) {$tmp628};
*(&local1) = $tmp629;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:549
frost$core$Int64 $tmp630 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp631 = &param1->_length;
frost$core$Int64 $tmp632 = *$tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp634 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp630, $tmp632, $tmp633);
frost$core$Int64 $tmp635 = $tmp634.min;
*(&local2) = $tmp635;
frost$core$Int64 $tmp636 = $tmp634.max;
frost$core$Bit $tmp637 = $tmp634.inclusive;
bool $tmp638 = $tmp637.value;
frost$core$Int64 $tmp639 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp640 = $tmp639.value;
frost$core$UInt64 $tmp641 = (frost$core$UInt64) {((uint64_t) $tmp640)};
if ($tmp638) goto block15; else goto block16;
block15:;
int64_t $tmp642 = $tmp635.value;
int64_t $tmp643 = $tmp636.value;
bool $tmp644 = $tmp642 <= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block12; else goto block13;
block16:;
int64_t $tmp647 = $tmp635.value;
int64_t $tmp648 = $tmp636.value;
bool $tmp649 = $tmp647 < $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:550
frost$core$Char8* $tmp652 = *(&local0);
frost$core$Int64* $tmp653 = &param0->_length;
frost$core$Int64 $tmp654 = *$tmp653;
frost$core$Int64 $tmp655 = *(&local2);
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656 + $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
frost$core$Char8** $tmp660 = &param1->data;
frost$core$Char8* $tmp661 = *$tmp660;
frost$core$Int64 $tmp662 = *(&local2);
int64_t $tmp663 = $tmp662.value;
frost$core$Char8 $tmp664 = $tmp661[$tmp663];
int64_t $tmp665 = $tmp659.value;
$tmp652[$tmp665] = $tmp664;
frost$core$Int64 $tmp666 = *(&local2);
int64_t $tmp667 = $tmp636.value;
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667 - $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {$tmp669};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp671 = $tmp670.value;
frost$core$UInt64 $tmp672 = (frost$core$UInt64) {((uint64_t) $tmp671)};
if ($tmp638) goto block19; else goto block20;
block19:;
uint64_t $tmp673 = $tmp672.value;
uint64_t $tmp674 = $tmp641.value;
bool $tmp675 = $tmp673 >= $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block17; else goto block13;
block20:;
uint64_t $tmp678 = $tmp672.value;
uint64_t $tmp679 = $tmp641.value;
bool $tmp680 = $tmp678 > $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block17; else goto block13;
block17:;
int64_t $tmp683 = $tmp666.value;
int64_t $tmp684 = $tmp639.value;
int64_t $tmp685 = $tmp683 + $tmp684;
frost$core$Int64 $tmp686 = (frost$core$Int64) {$tmp685};
*(&local2) = $tmp686;
goto block12;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:552
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp687 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp688 = *(&local0);
frost$core$Int64* $tmp689 = &param0->_length;
frost$core$Int64 $tmp690 = *$tmp689;
frost$core$Int64* $tmp691 = &param1->_length;
frost$core$Int64 $tmp692 = *$tmp691;
int64_t $tmp693 = $tmp690.value;
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693 + $tmp694;
frost$core$Int64 $tmp696 = (frost$core$Int64) {$tmp695};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp687, $tmp688, $tmp696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
return $tmp687;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn698 $tmp697 = ($fn698) param1->$class->vtable[0];
frost$core$String* $tmp699 = $tmp697(param1);
frost$core$String* $tmp700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
return $tmp700;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp701 = (frost$core$Int64) {0u};
int64_t $tmp702 = param1.value;
int64_t $tmp703 = $tmp701.value;
bool $tmp704 = $tmp702 >= $tmp703;
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp707 = (frost$core$Int64) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s708, $tmp707, &$s709);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp710 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp710);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$MutableString* $tmp711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local0) = $tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:569
frost$core$Int64 $tmp712 = (frost$core$Int64) {0u};
frost$core$Bit $tmp713 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp714 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp712, param1, $tmp713);
frost$core$Int64 $tmp715 = $tmp714.min;
*(&local1) = $tmp715;
frost$core$Int64 $tmp716 = $tmp714.max;
frost$core$Bit $tmp717 = $tmp714.inclusive;
bool $tmp718 = $tmp717.value;
frost$core$Int64 $tmp719 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp720 = $tmp719.value;
frost$core$UInt64 $tmp721 = (frost$core$UInt64) {((uint64_t) $tmp720)};
if ($tmp718) goto block7; else goto block8;
block7:;
int64_t $tmp722 = $tmp715.value;
int64_t $tmp723 = $tmp716.value;
bool $tmp724 = $tmp722 <= $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block4; else goto block5;
block8:;
int64_t $tmp727 = $tmp715.value;
int64_t $tmp728 = $tmp716.value;
bool $tmp729 = $tmp727 < $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:570
frost$core$MutableString* $tmp732 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp732, param0);
frost$core$Int64 $tmp733 = *(&local1);
int64_t $tmp734 = $tmp716.value;
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734 - $tmp735;
frost$core$Int64 $tmp737 = (frost$core$Int64) {$tmp736};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp738 = $tmp737.value;
frost$core$UInt64 $tmp739 = (frost$core$UInt64) {((uint64_t) $tmp738)};
if ($tmp718) goto block11; else goto block12;
block11:;
uint64_t $tmp740 = $tmp739.value;
uint64_t $tmp741 = $tmp721.value;
bool $tmp742 = $tmp740 >= $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block9; else goto block5;
block12:;
uint64_t $tmp745 = $tmp739.value;
uint64_t $tmp746 = $tmp721.value;
bool $tmp747 = $tmp745 > $tmp746;
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block9; else goto block5;
block9:;
int64_t $tmp750 = $tmp733.value;
int64_t $tmp751 = $tmp719.value;
int64_t $tmp752 = $tmp750 + $tmp751;
frost$core$Int64 $tmp753 = (frost$core$Int64) {$tmp752};
*(&local1) = $tmp753;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:572
frost$core$MutableString* $tmp754 = *(&local0);
frost$core$String* $tmp755 = frost$core$MutableString$finish$R$frost$core$String($tmp754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$MutableString* $tmp756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp755;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp757 = (frost$core$Int64) {0u};
int64_t $tmp758 = param0.value;
int64_t $tmp759 = $tmp757.value;
bool $tmp760 = $tmp758 >= $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp763 = (frost$core$Int64) {580u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s764, $tmp763, &$s765);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:581
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp766 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp766);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$MutableString* $tmp767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local0) = $tmp766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:582
frost$core$Int64 $tmp768 = (frost$core$Int64) {0u};
frost$core$Bit $tmp769 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp770 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp768, param0, $tmp769);
frost$core$Int64 $tmp771 = $tmp770.min;
*(&local1) = $tmp771;
frost$core$Int64 $tmp772 = $tmp770.max;
frost$core$Bit $tmp773 = $tmp770.inclusive;
bool $tmp774 = $tmp773.value;
frost$core$Int64 $tmp775 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp776 = $tmp775.value;
frost$core$UInt64 $tmp777 = (frost$core$UInt64) {((uint64_t) $tmp776)};
if ($tmp774) goto block7; else goto block8;
block7:;
int64_t $tmp778 = $tmp771.value;
int64_t $tmp779 = $tmp772.value;
bool $tmp780 = $tmp778 <= $tmp779;
frost$core$Bit $tmp781 = (frost$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block4; else goto block5;
block8:;
int64_t $tmp783 = $tmp771.value;
int64_t $tmp784 = $tmp772.value;
bool $tmp785 = $tmp783 < $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:583
frost$core$MutableString* $tmp788 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp788, param1);
frost$core$Int64 $tmp789 = *(&local1);
int64_t $tmp790 = $tmp772.value;
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790 - $tmp791;
frost$core$Int64 $tmp793 = (frost$core$Int64) {$tmp792};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp794 = $tmp793.value;
frost$core$UInt64 $tmp795 = (frost$core$UInt64) {((uint64_t) $tmp794)};
if ($tmp774) goto block11; else goto block12;
block11:;
uint64_t $tmp796 = $tmp795.value;
uint64_t $tmp797 = $tmp777.value;
bool $tmp798 = $tmp796 >= $tmp797;
frost$core$Bit $tmp799 = (frost$core$Bit) {$tmp798};
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block9; else goto block5;
block12:;
uint64_t $tmp801 = $tmp795.value;
uint64_t $tmp802 = $tmp777.value;
bool $tmp803 = $tmp801 > $tmp802;
frost$core$Bit $tmp804 = (frost$core$Bit) {$tmp803};
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block9; else goto block5;
block9:;
int64_t $tmp806 = $tmp789.value;
int64_t $tmp807 = $tmp775.value;
int64_t $tmp808 = $tmp806 + $tmp807;
frost$core$Int64 $tmp809 = (frost$core$Int64) {$tmp808};
*(&local1) = $tmp809;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:585
frost$core$MutableString* $tmp810 = *(&local0);
frost$core$String* $tmp811 = frost$core$MutableString$finish$R$frost$core$String($tmp810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$MutableString* $tmp812 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp811;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:594
$fn814 $tmp813 = ($fn814) param0->$class->vtable[0];
frost$core$String* $tmp815 = $tmp813(param0);
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp815, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
return $tmp816;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:607
frost$core$Int64* $tmp817 = &param0->_length;
frost$core$Int64 $tmp818 = *$tmp817;
frost$core$Int64* $tmp819 = &param1->_length;
frost$core$Int64 $tmp820 = *$tmp819;
int64_t $tmp821 = $tmp818.value;
int64_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 != $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:608
frost$core$Bit $tmp826 = (frost$core$Bit) {false};
return $tmp826;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:610
frost$core$Int64 $tmp827 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp828 = &param0->_length;
frost$core$Int64 $tmp829 = *$tmp828;
frost$core$Bit $tmp830 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp831 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp827, $tmp829, $tmp830);
frost$core$Int64 $tmp832 = $tmp831.min;
*(&local0) = $tmp832;
frost$core$Int64 $tmp833 = $tmp831.max;
frost$core$Bit $tmp834 = $tmp831.inclusive;
bool $tmp835 = $tmp834.value;
frost$core$Int64 $tmp836 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp837 = $tmp836.value;
frost$core$UInt64 $tmp838 = (frost$core$UInt64) {((uint64_t) $tmp837)};
if ($tmp835) goto block7; else goto block8;
block7:;
int64_t $tmp839 = $tmp832.value;
int64_t $tmp840 = $tmp833.value;
bool $tmp841 = $tmp839 <= $tmp840;
frost$core$Bit $tmp842 = (frost$core$Bit) {$tmp841};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block4; else goto block5;
block8:;
int64_t $tmp844 = $tmp832.value;
int64_t $tmp845 = $tmp833.value;
bool $tmp846 = $tmp844 < $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:611
frost$core$Char8** $tmp849 = &param0->data;
frost$core$Char8* $tmp850 = *$tmp849;
frost$core$Int64 $tmp851 = *(&local0);
int64_t $tmp852 = $tmp851.value;
frost$core$Char8 $tmp853 = $tmp850[$tmp852];
frost$core$Char8** $tmp854 = &param1->data;
frost$core$Char8* $tmp855 = *$tmp854;
frost$core$Int64 $tmp856 = *(&local0);
int64_t $tmp857 = $tmp856.value;
frost$core$Char8 $tmp858 = $tmp855[$tmp857];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:611:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp859 = $tmp853.value;
uint8_t $tmp860 = $tmp858.value;
bool $tmp861 = $tmp859 != $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:612
frost$core$Bit $tmp864 = (frost$core$Bit) {false};
return $tmp864;
block10:;
frost$core$Int64 $tmp865 = *(&local0);
int64_t $tmp866 = $tmp833.value;
int64_t $tmp867 = $tmp865.value;
int64_t $tmp868 = $tmp866 - $tmp867;
frost$core$Int64 $tmp869 = (frost$core$Int64) {$tmp868};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp870 = $tmp869.value;
frost$core$UInt64 $tmp871 = (frost$core$UInt64) {((uint64_t) $tmp870)};
if ($tmp835) goto block14; else goto block15;
block14:;
uint64_t $tmp872 = $tmp871.value;
uint64_t $tmp873 = $tmp838.value;
bool $tmp874 = $tmp872 >= $tmp873;
frost$core$Bit $tmp875 = (frost$core$Bit) {$tmp874};
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block12; else goto block5;
block15:;
uint64_t $tmp877 = $tmp871.value;
uint64_t $tmp878 = $tmp838.value;
bool $tmp879 = $tmp877 > $tmp878;
frost$core$Bit $tmp880 = (frost$core$Bit) {$tmp879};
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block12; else goto block5;
block12:;
int64_t $tmp882 = $tmp865.value;
int64_t $tmp883 = $tmp836.value;
int64_t $tmp884 = $tmp882 + $tmp883;
frost$core$Int64 $tmp885 = (frost$core$Int64) {$tmp884};
*(&local0) = $tmp885;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:615
frost$core$Bit $tmp886 = (frost$core$Bit) {true};
return $tmp886;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:626
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:626:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp887 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp888 = &(&local1)->value;
*$tmp888 = $tmp887;
frost$core$String$Index $tmp889 = *(&local1);
*(&local0) = $tmp889;
frost$core$String$Index $tmp890 = *(&local0);
*(&local2) = $tmp890;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:627
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:627:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp891 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp892 = &(&local4)->value;
*$tmp892 = $tmp891;
frost$core$String$Index $tmp893 = *(&local4);
*(&local3) = $tmp893;
frost$core$String$Index $tmp894 = *(&local3);
*(&local5) = $tmp894;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:628
goto block5;
block5:;
frost$core$String$Index $tmp895 = *(&local2);
frost$core$String$Index$wrapper* $tmp896;
$tmp896 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp896->value = $tmp895;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp897 = &param0->_length;
frost$core$Int64 $tmp898 = *$tmp897;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp899 = &(&local7)->value;
*$tmp899 = $tmp898;
frost$core$String$Index $tmp900 = *(&local7);
*(&local6) = $tmp900;
frost$core$String$Index $tmp901 = *(&local6);
frost$core$String$Index$wrapper* $tmp902;
$tmp902 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp902->value = $tmp901;
ITable* $tmp903 = ((frost$core$Comparable*) $tmp896)->$class->itable;
while ($tmp903->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp903 = $tmp903->next;
}
$fn905 $tmp904 = $tmp903->methods[1];
frost$core$Bit $tmp906 = $tmp904(((frost$core$Comparable*) $tmp896), ((frost$core$Comparable*) $tmp902));
bool $tmp907 = $tmp906.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp902)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp896)));
if ($tmp907) goto block8; else goto block7;
block8:;
frost$core$String$Index $tmp908 = *(&local5);
frost$core$String$Index$wrapper* $tmp909;
$tmp909 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp909->value = $tmp908;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:628:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp910 = &param1->_length;
frost$core$Int64 $tmp911 = *$tmp910;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp912 = &(&local9)->value;
*$tmp912 = $tmp911;
frost$core$String$Index $tmp913 = *(&local9);
*(&local8) = $tmp913;
frost$core$String$Index $tmp914 = *(&local8);
frost$core$String$Index$wrapper* $tmp915;
$tmp915 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp915->value = $tmp914;
ITable* $tmp916 = ((frost$core$Comparable*) $tmp909)->$class->itable;
while ($tmp916->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp916 = $tmp916->next;
}
$fn918 $tmp917 = $tmp916->methods[1];
frost$core$Bit $tmp919 = $tmp917(((frost$core$Comparable*) $tmp909), ((frost$core$Comparable*) $tmp915));
bool $tmp920 = $tmp919.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp915)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp909)));
if ($tmp920) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:629
frost$core$String$Index $tmp921 = *(&local2);
frost$core$Char32 $tmp922 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp921);
*(&local10) = $tmp922;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:630
frost$core$String$Index $tmp923 = *(&local5);
frost$core$Char32 $tmp924 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp923);
*(&local11) = $tmp924;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:631
frost$core$Char32 $tmp925 = *(&local10);
frost$core$Char32 $tmp926 = *(&local11);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from String.frost:631:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp927 = $tmp925.value;
int32_t $tmp928 = $tmp926.value;
bool $tmp929 = $tmp927 == $tmp928;
frost$core$Bit $tmp930 = (frost$core$Bit) {$tmp929};
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:632
frost$core$String$Index $tmp932 = *(&local2);
frost$core$String$Index $tmp933 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp932);
*(&local2) = $tmp933;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:633
frost$core$String$Index $tmp934 = *(&local5);
frost$core$String$Index $tmp935 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp934);
*(&local5) = $tmp935;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:634
goto block5;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:636
frost$core$Char32 $tmp936 = *(&local10);
frost$core$Char32 $tmp937 = *(&local11);
// begin inline call to function frost.core.Char32.>(other:frost.core.Char32):frost.core.Bit from String.frost:636:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:42
int32_t $tmp938 = $tmp936.value;
int32_t $tmp939 = $tmp937.value;
bool $tmp940 = $tmp938 > $tmp939;
frost$core$Bit $tmp941 = (frost$core$Bit) {$tmp940};
return $tmp941;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:638
frost$core$String$Index $tmp942 = *(&local2);
frost$core$String$Index$wrapper* $tmp943;
$tmp943 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp943->value = $tmp942;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:638:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp944 = &param0->_length;
frost$core$Int64 $tmp945 = *$tmp944;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp946 = &(&local13)->value;
*$tmp946 = $tmp945;
frost$core$String$Index $tmp947 = *(&local13);
*(&local12) = $tmp947;
frost$core$String$Index $tmp948 = *(&local12);
frost$core$String$Index$wrapper* $tmp949;
$tmp949 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp949->value = $tmp948;
ITable* $tmp950 = ((frost$core$Equatable*) $tmp943)->$class->itable;
while ($tmp950->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp950 = $tmp950->next;
}
$fn952 $tmp951 = $tmp950->methods[1];
frost$core$Bit $tmp953 = $tmp951(((frost$core$Equatable*) $tmp943), ((frost$core$Equatable*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp949)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp943)));
return $tmp953;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:645
frost$core$Int64 $tmp954 = param1.value;
*(&local0) = $tmp954;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:646
frost$core$Char8** $tmp955 = &param0->data;
frost$core$Char8* $tmp956 = *$tmp955;
frost$core$Int64 $tmp957 = *(&local0);
int64_t $tmp958 = $tmp957.value;
frost$core$Char8 $tmp959 = $tmp956[$tmp958];
*(&local1) = $tmp959;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:647
frost$core$Char8 $tmp960 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:647:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp961 = $tmp960.value;
int32_t $tmp962 = ((int32_t) $tmp961) & 255u;
frost$core$Int32 $tmp963 = (frost$core$Int32) {$tmp962};
*(&local2) = $tmp963;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:648
frost$core$Char8 $tmp964 = *(&local1);
uint8_t $tmp965 = $tmp964.value;
int64_t $tmp966 = ((int64_t) $tmp965) & 255u;
bool $tmp967 = $tmp966 < 192u;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:649
frost$core$Int32 $tmp970 = *(&local2);
frost$core$Char32 $tmp971 = frost$core$Char32$init$frost$core$Int32($tmp970);
return $tmp971;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:651
frost$core$Char8 $tmp972 = *(&local1);
uint8_t $tmp973 = $tmp972.value;
int64_t $tmp974 = ((int64_t) $tmp973) & 255u;
bool $tmp975 = $tmp974 < 224u;
frost$core$Bit $tmp976 = (frost$core$Bit) {$tmp975};
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:652
frost$core$Int64 $tmp978 = *(&local0);
frost$core$Int64 $tmp979 = (frost$core$Int64) {1u};
int64_t $tmp980 = $tmp978.value;
int64_t $tmp981 = $tmp979.value;
int64_t $tmp982 = $tmp980 + $tmp981;
frost$core$Int64 $tmp983 = (frost$core$Int64) {$tmp982};
frost$core$Int64* $tmp984 = &param0->_length;
frost$core$Int64 $tmp985 = *$tmp984;
int64_t $tmp986 = $tmp983.value;
int64_t $tmp987 = $tmp985.value;
bool $tmp988 = $tmp986 < $tmp987;
frost$core$Bit $tmp989 = (frost$core$Bit) {$tmp988};
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp991 = (frost$core$Int64) {652u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s992, $tmp991);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:653
frost$core$Int32 $tmp993 = *(&local2);
frost$core$Int32 $tmp994 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp995 = $tmp993.value;
int32_t $tmp996 = $tmp994.value;
int32_t $tmp997 = $tmp995 & $tmp996;
frost$core$Int32 $tmp998 = (frost$core$Int32) {$tmp997};
frost$core$Char8** $tmp999 = &param0->data;
frost$core$Char8* $tmp1000 = *$tmp999;
frost$core$Int64 $tmp1001 = *(&local0);
frost$core$Int64 $tmp1002 = (frost$core$Int64) {1u};
int64_t $tmp1003 = $tmp1001.value;
int64_t $tmp1004 = $tmp1002.value;
int64_t $tmp1005 = $tmp1003 + $tmp1004;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {$tmp1005};
int64_t $tmp1007 = $tmp1006.value;
frost$core$Char8 $tmp1008 = $tmp1000[$tmp1007];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:653:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1009 = $tmp1008.value;
int32_t $tmp1010 = ((int32_t) $tmp1009) & 255u;
frost$core$Int32 $tmp1011 = (frost$core$Int32) {$tmp1010};
frost$core$Int32 $tmp1012 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:653:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1013 = $tmp1011.value;
int32_t $tmp1014 = $tmp1012.value;
int32_t $tmp1015 = $tmp1013 & $tmp1014;
frost$core$Int32 $tmp1016 = (frost$core$Int32) {$tmp1015};
int32_t $tmp1017 = $tmp998.value;
int32_t $tmp1018 = $tmp1016.value;
int32_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int32 $tmp1020 = (frost$core$Int32) {$tmp1019};
*(&local2) = $tmp1020;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:654
frost$core$Int32 $tmp1021 = *(&local2);
frost$core$Char32 $tmp1022 = frost$core$Char32$init$frost$core$Int32($tmp1021);
return $tmp1022;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:656
frost$core$Char8 $tmp1023 = *(&local1);
uint8_t $tmp1024 = $tmp1023.value;
int64_t $tmp1025 = ((int64_t) $tmp1024) & 255u;
bool $tmp1026 = $tmp1025 < 240u;
frost$core$Bit $tmp1027 = (frost$core$Bit) {$tmp1026};
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:657
frost$core$Int64 $tmp1029 = *(&local0);
frost$core$Int64 $tmp1030 = (frost$core$Int64) {2u};
int64_t $tmp1031 = $tmp1029.value;
int64_t $tmp1032 = $tmp1030.value;
int64_t $tmp1033 = $tmp1031 + $tmp1032;
frost$core$Int64 $tmp1034 = (frost$core$Int64) {$tmp1033};
frost$core$Int64* $tmp1035 = &param0->_length;
frost$core$Int64 $tmp1036 = *$tmp1035;
int64_t $tmp1037 = $tmp1034.value;
int64_t $tmp1038 = $tmp1036.value;
bool $tmp1039 = $tmp1037 < $tmp1038;
frost$core$Bit $tmp1040 = (frost$core$Bit) {$tmp1039};
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {657u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1043, $tmp1042);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:658
frost$core$Int32 $tmp1044 = *(&local2);
frost$core$Int32 $tmp1045 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1046 = $tmp1044.value;
int32_t $tmp1047 = $tmp1045.value;
int32_t $tmp1048 = $tmp1046 & $tmp1047;
frost$core$Int32 $tmp1049 = (frost$core$Int32) {$tmp1048};
frost$core$Char8** $tmp1050 = &param0->data;
frost$core$Char8* $tmp1051 = *$tmp1050;
frost$core$Int64 $tmp1052 = *(&local0);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {1u};
int64_t $tmp1054 = $tmp1052.value;
int64_t $tmp1055 = $tmp1053.value;
int64_t $tmp1056 = $tmp1054 + $tmp1055;
frost$core$Int64 $tmp1057 = (frost$core$Int64) {$tmp1056};
int64_t $tmp1058 = $tmp1057.value;
frost$core$Char8 $tmp1059 = $tmp1051[$tmp1058];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:658:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1060 = $tmp1059.value;
int32_t $tmp1061 = ((int32_t) $tmp1060) & 255u;
frost$core$Int32 $tmp1062 = (frost$core$Int32) {$tmp1061};
frost$core$Int32 $tmp1063 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:658:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1064 = $tmp1062.value;
int32_t $tmp1065 = $tmp1063.value;
int32_t $tmp1066 = $tmp1064 & $tmp1065;
frost$core$Int32 $tmp1067 = (frost$core$Int32) {$tmp1066};
int32_t $tmp1068 = $tmp1049.value;
int32_t $tmp1069 = $tmp1067.value;
int32_t $tmp1070 = $tmp1068 + $tmp1069;
frost$core$Int32 $tmp1071 = (frost$core$Int32) {$tmp1070};
frost$core$Char8** $tmp1072 = &param0->data;
frost$core$Char8* $tmp1073 = *$tmp1072;
frost$core$Int64 $tmp1074 = *(&local0);
frost$core$Int64 $tmp1075 = (frost$core$Int64) {2u};
int64_t $tmp1076 = $tmp1074.value;
int64_t $tmp1077 = $tmp1075.value;
int64_t $tmp1078 = $tmp1076 + $tmp1077;
frost$core$Int64 $tmp1079 = (frost$core$Int64) {$tmp1078};
int64_t $tmp1080 = $tmp1079.value;
frost$core$Char8 $tmp1081 = $tmp1073[$tmp1080];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:659:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1082 = $tmp1081.value;
int32_t $tmp1083 = ((int32_t) $tmp1082) & 255u;
frost$core$Int32 $tmp1084 = (frost$core$Int32) {$tmp1083};
frost$core$Int32 $tmp1085 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:659:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1086 = $tmp1084.value;
int32_t $tmp1087 = $tmp1085.value;
int32_t $tmp1088 = $tmp1086 & $tmp1087;
frost$core$Int32 $tmp1089 = (frost$core$Int32) {$tmp1088};
int32_t $tmp1090 = $tmp1071.value;
int32_t $tmp1091 = $tmp1089.value;
int32_t $tmp1092 = $tmp1090 + $tmp1091;
frost$core$Int32 $tmp1093 = (frost$core$Int32) {$tmp1092};
*(&local2) = $tmp1093;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:660
frost$core$Int32 $tmp1094 = *(&local2);
frost$core$Char32 $tmp1095 = frost$core$Char32$init$frost$core$Int32($tmp1094);
return $tmp1095;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:662
frost$core$Int64 $tmp1096 = *(&local0);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {3u};
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {$tmp1100};
frost$core$Int64* $tmp1102 = &param0->_length;
frost$core$Int64 $tmp1103 = *$tmp1102;
int64_t $tmp1104 = $tmp1101.value;
int64_t $tmp1105 = $tmp1103.value;
bool $tmp1106 = $tmp1104 < $tmp1105;
frost$core$Bit $tmp1107 = (frost$core$Bit) {$tmp1106};
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1110, $tmp1109);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:663
frost$core$Int32 $tmp1111 = *(&local2);
frost$core$Int32 $tmp1112 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1113 = $tmp1111.value;
int32_t $tmp1114 = $tmp1112.value;
int32_t $tmp1115 = $tmp1113 & $tmp1114;
frost$core$Int32 $tmp1116 = (frost$core$Int32) {$tmp1115};
frost$core$Char8** $tmp1117 = &param0->data;
frost$core$Char8* $tmp1118 = *$tmp1117;
frost$core$Int64 $tmp1119 = *(&local0);
frost$core$Int64 $tmp1120 = (frost$core$Int64) {1u};
int64_t $tmp1121 = $tmp1119.value;
int64_t $tmp1122 = $tmp1120.value;
int64_t $tmp1123 = $tmp1121 + $tmp1122;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {$tmp1123};
int64_t $tmp1125 = $tmp1124.value;
frost$core$Char8 $tmp1126 = $tmp1118[$tmp1125];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:663:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1127 = $tmp1126.value;
int32_t $tmp1128 = ((int32_t) $tmp1127) & 255u;
frost$core$Int32 $tmp1129 = (frost$core$Int32) {$tmp1128};
frost$core$Int32 $tmp1130 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:663:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1131 = $tmp1129.value;
int32_t $tmp1132 = $tmp1130.value;
int32_t $tmp1133 = $tmp1131 & $tmp1132;
frost$core$Int32 $tmp1134 = (frost$core$Int32) {$tmp1133};
int32_t $tmp1135 = $tmp1116.value;
int32_t $tmp1136 = $tmp1134.value;
int32_t $tmp1137 = $tmp1135 + $tmp1136;
frost$core$Int32 $tmp1138 = (frost$core$Int32) {$tmp1137};
frost$core$Char8** $tmp1139 = &param0->data;
frost$core$Char8* $tmp1140 = *$tmp1139;
frost$core$Int64 $tmp1141 = *(&local0);
frost$core$Int64 $tmp1142 = (frost$core$Int64) {2u};
int64_t $tmp1143 = $tmp1141.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 + $tmp1144;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {$tmp1145};
int64_t $tmp1147 = $tmp1146.value;
frost$core$Char8 $tmp1148 = $tmp1140[$tmp1147];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:664:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1149 = $tmp1148.value;
int32_t $tmp1150 = ((int32_t) $tmp1149) & 255u;
frost$core$Int32 $tmp1151 = (frost$core$Int32) {$tmp1150};
frost$core$Int32 $tmp1152 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:664:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1153 = $tmp1151.value;
int32_t $tmp1154 = $tmp1152.value;
int32_t $tmp1155 = $tmp1153 & $tmp1154;
frost$core$Int32 $tmp1156 = (frost$core$Int32) {$tmp1155};
int32_t $tmp1157 = $tmp1138.value;
int32_t $tmp1158 = $tmp1156.value;
int32_t $tmp1159 = $tmp1157 + $tmp1158;
frost$core$Int32 $tmp1160 = (frost$core$Int32) {$tmp1159};
frost$core$Char8** $tmp1161 = &param0->data;
frost$core$Char8* $tmp1162 = *$tmp1161;
frost$core$Int64 $tmp1163 = *(&local0);
frost$core$Int64 $tmp1164 = (frost$core$Int64) {3u};
int64_t $tmp1165 = $tmp1163.value;
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165 + $tmp1166;
frost$core$Int64 $tmp1168 = (frost$core$Int64) {$tmp1167};
int64_t $tmp1169 = $tmp1168.value;
frost$core$Char8 $tmp1170 = $tmp1162[$tmp1169];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:665:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:116
uint8_t $tmp1171 = $tmp1170.value;
int32_t $tmp1172 = ((int32_t) $tmp1171) & 255u;
frost$core$Int32 $tmp1173 = (frost$core$Int32) {$tmp1172};
frost$core$Int32 $tmp1174 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:665:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp1175 = $tmp1173.value;
int32_t $tmp1176 = $tmp1174.value;
int32_t $tmp1177 = $tmp1175 & $tmp1176;
frost$core$Int32 $tmp1178 = (frost$core$Int32) {$tmp1177};
int32_t $tmp1179 = $tmp1160.value;
int32_t $tmp1180 = $tmp1178.value;
int32_t $tmp1181 = $tmp1179 + $tmp1180;
frost$core$Int32 $tmp1182 = (frost$core$Int32) {$tmp1181};
*(&local2) = $tmp1182;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:666
frost$core$Int32 $tmp1183 = *(&local2);
frost$core$Char32 $tmp1184 = frost$core$Char32$init$frost$core$Int32($tmp1183);
return $tmp1184;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1185 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1186 = &(&local1)->value;
*$tmp1186 = $tmp1185;
frost$core$String$Index $tmp1187 = *(&local1);
*(&local0) = $tmp1187;
frost$core$String$Index $tmp1188 = *(&local0);
frost$core$String$Index $tmp1189 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1188, param1);
frost$core$Char32 $tmp1190 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1189);
return $tmp1190;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:688
frost$core$String$Index $tmp1191 = param1.max;
frost$core$Int64 $tmp1192 = $tmp1191.value;
frost$core$String$Index $tmp1193 = param1.min;
frost$core$Int64 $tmp1194 = $tmp1193.value;
int64_t $tmp1195 = $tmp1192.value;
int64_t $tmp1196 = $tmp1194.value;
int64_t $tmp1197 = $tmp1195 - $tmp1196;
frost$core$Int64 $tmp1198 = (frost$core$Int64) {$tmp1197};
*(&local0) = $tmp1198;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:689
frost$core$Bit $tmp1199 = param1.inclusive;
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:690
frost$core$Int64 $tmp1201 = *(&local0);
frost$core$Int64 $tmp1202 = (frost$core$Int64) {1u};
int64_t $tmp1203 = $tmp1201.value;
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203 + $tmp1204;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {$tmp1205};
*(&local0) = $tmp1206;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:692
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1207 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1208 = &param0->data;
frost$core$Char8* $tmp1209 = *$tmp1208;
frost$core$String$Index $tmp1210 = param1.min;
frost$core$Int64 $tmp1211 = $tmp1210.value;
int64_t $tmp1212 = $tmp1211.value;
frost$core$Char8* $tmp1213 = $tmp1209 + $tmp1212;
frost$core$Int64 $tmp1214 = *(&local0);
// begin inline call to frost.core.String.init(data:frost.unsafe.Pointer<frost.core.Char8>, length:frost.core.Int64, owner:frost.core.String) from String.frost:692:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:328
frost$core$Int64 $tmp1215 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp1216 = &$tmp1207->dummy;
*$tmp1216 = $tmp1215;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:358
frost$core$Char8** $tmp1217 = &$tmp1207->data;
*$tmp1217 = $tmp1213;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:359
frost$core$Int64* $tmp1218 = &$tmp1207->_length;
*$tmp1218 = $tmp1214;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$String** $tmp1219 = &$tmp1207->owner;
frost$core$String* $tmp1220 = *$tmp1219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$String** $tmp1221 = &$tmp1207->owner;
*$tmp1221 = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
return $tmp1207;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:708
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:709
frost$core$String$Index$nullable $tmp1222 = param1.min;
frost$core$Bit $tmp1223 = (frost$core$Bit) {$tmp1222.nonnull};
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:710
frost$core$String$Index$nullable $tmp1225 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1225.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:713
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:713:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1226 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1227 = &(&local2)->value;
*$tmp1227 = $tmp1226;
frost$core$String$Index $tmp1228 = *(&local2);
*(&local1) = $tmp1228;
frost$core$String$Index $tmp1229 = *(&local1);
*(&local0) = $tmp1229;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:716
frost$core$Bit $tmp1230 = param1.inclusive;
*(&local3) = $tmp1230;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:717
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:718
frost$core$String$Index$nullable $tmp1231 = param1.max;
frost$core$Bit $tmp1232 = (frost$core$Bit) {$tmp1231.nonnull};
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:719
frost$core$String$Index$nullable $tmp1234 = param1.max;
*(&local4) = ((frost$core$String$Index) $tmp1234.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:722
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:722:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1235 = &param0->_length;
frost$core$Int64 $tmp1236 = *$tmp1235;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1237 = &(&local6)->value;
*$tmp1237 = $tmp1236;
frost$core$String$Index $tmp1238 = *(&local6);
*(&local5) = $tmp1238;
frost$core$String$Index $tmp1239 = *(&local5);
*(&local4) = $tmp1239;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:723
frost$core$Bit $tmp1240 = (frost$core$Bit) {false};
*(&local3) = $tmp1240;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:725
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

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:733
frost$core$String$Index $tmp1246 = param1.min;
frost$core$Int64 $tmp1247 = $tmp1246.value;
*(&local0) = $tmp1247;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:734
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1248 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1248);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
frost$core$MutableString* $tmp1249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local1) = $tmp1248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:735
frost$core$String$Index $tmp1250 = param1.max;
frost$core$Int64 $tmp1251 = $tmp1250.value;
*(&local2) = $tmp1251;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:736
frost$core$Bit $tmp1252 = param1.inclusive;
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:737
frost$core$Int64 $tmp1254 = *(&local2);
frost$core$Int64 $tmp1255 = (frost$core$Int64) {1u};
int64_t $tmp1256 = $tmp1254.value;
int64_t $tmp1257 = $tmp1255.value;
int64_t $tmp1258 = $tmp1256 + $tmp1257;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {$tmp1258};
*(&local2) = $tmp1259;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:739
goto block3;
block3:;
frost$core$Int64 $tmp1260 = *(&local0);
frost$core$Int64 $tmp1261 = *(&local2);
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 < $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:740
frost$core$Char8** $tmp1267 = &param0->data;
frost$core$Char8* $tmp1268 = *$tmp1267;
frost$core$Int64 $tmp1269 = *(&local0);
int64_t $tmp1270 = $tmp1269.value;
frost$core$Char8 $tmp1271 = $tmp1268[$tmp1270];
*(&local3) = $tmp1271;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:741
frost$core$MutableString* $tmp1272 = *(&local1);
frost$core$Char8 $tmp1273 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1272, $tmp1273);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:742
frost$core$Int64 $tmp1274 = *(&local0);
frost$core$Int64 $tmp1275 = (frost$core$Int64) {1u};
int64_t $tmp1276 = $tmp1274.value;
int64_t $tmp1277 = $tmp1275.value;
int64_t $tmp1278 = $tmp1276 + $tmp1277;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {$tmp1278};
*(&local0) = $tmp1279;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:743
frost$core$Char8 $tmp1280 = *(&local3);
uint8_t $tmp1281 = $tmp1280.value;
int64_t $tmp1282 = ((int64_t) $tmp1281) & 255u;
bool $tmp1283 = $tmp1282 >= 192u;
frost$core$Bit $tmp1284 = (frost$core$Bit) {$tmp1283};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:744
frost$core$MutableString* $tmp1286 = *(&local1);
frost$core$Char8** $tmp1287 = &param0->data;
frost$core$Char8* $tmp1288 = *$tmp1287;
frost$core$Int64 $tmp1289 = *(&local0);
int64_t $tmp1290 = $tmp1289.value;
frost$core$Char8 $tmp1291 = $tmp1288[$tmp1290];
frost$core$MutableString$append$frost$core$Char8($tmp1286, $tmp1291);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:745
frost$core$Int64 $tmp1292 = *(&local0);
frost$core$Int64 $tmp1293 = (frost$core$Int64) {1u};
int64_t $tmp1294 = $tmp1292.value;
int64_t $tmp1295 = $tmp1293.value;
int64_t $tmp1296 = $tmp1294 + $tmp1295;
frost$core$Int64 $tmp1297 = (frost$core$Int64) {$tmp1296};
*(&local0) = $tmp1297;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:747
frost$core$Char8 $tmp1298 = *(&local3);
uint8_t $tmp1299 = $tmp1298.value;
int64_t $tmp1300 = ((int64_t) $tmp1299) & 255u;
bool $tmp1301 = $tmp1300 >= 224u;
frost$core$Bit $tmp1302 = (frost$core$Bit) {$tmp1301};
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:748
frost$core$MutableString* $tmp1304 = *(&local1);
frost$core$Char8** $tmp1305 = &param0->data;
frost$core$Char8* $tmp1306 = *$tmp1305;
frost$core$Int64 $tmp1307 = *(&local0);
int64_t $tmp1308 = $tmp1307.value;
frost$core$Char8 $tmp1309 = $tmp1306[$tmp1308];
frost$core$MutableString$append$frost$core$Char8($tmp1304, $tmp1309);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:749
frost$core$Int64 $tmp1310 = *(&local0);
frost$core$Int64 $tmp1311 = (frost$core$Int64) {1u};
int64_t $tmp1312 = $tmp1310.value;
int64_t $tmp1313 = $tmp1311.value;
int64_t $tmp1314 = $tmp1312 + $tmp1313;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {$tmp1314};
*(&local0) = $tmp1315;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:751
frost$core$Char8 $tmp1316 = *(&local3);
uint8_t $tmp1317 = $tmp1316.value;
int64_t $tmp1318 = ((int64_t) $tmp1317) & 255u;
bool $tmp1319 = $tmp1318 >= 240u;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:752
frost$core$MutableString* $tmp1322 = *(&local1);
frost$core$Char8** $tmp1323 = &param0->data;
frost$core$Char8* $tmp1324 = *$tmp1323;
frost$core$Int64 $tmp1325 = *(&local0);
int64_t $tmp1326 = $tmp1325.value;
frost$core$Char8 $tmp1327 = $tmp1324[$tmp1326];
frost$core$MutableString$append$frost$core$Char8($tmp1322, $tmp1327);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:753
frost$core$Int64 $tmp1328 = *(&local0);
frost$core$Int64 $tmp1329 = (frost$core$Int64) {1u};
int64_t $tmp1330 = $tmp1328.value;
int64_t $tmp1331 = $tmp1329.value;
int64_t $tmp1332 = $tmp1330 + $tmp1331;
frost$core$Int64 $tmp1333 = (frost$core$Int64) {$tmp1332};
*(&local0) = $tmp1333;
goto block11;
block11:;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:756
frost$core$MutableString* $tmp1334 = *(&local1);
frost$core$String* $tmp1335 = frost$core$MutableString$finish$R$frost$core$String($tmp1334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$MutableString* $tmp1336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1335;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:767
frost$core$Int64* $tmp1337 = &param0->_length;
frost$core$Int64 $tmp1338 = *$tmp1337;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:767:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1340 = $tmp1338.value;
int64_t $tmp1341 = $tmp1339.value;
bool $tmp1342 = $tmp1340 == $tmp1341;
frost$core$Bit $tmp1343 = (frost$core$Bit) {$tmp1342};
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1345));
return &$s1346;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:770
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:771
frost$core$String$Index$nullable $tmp1347 = param1.min;
frost$core$Bit $tmp1348 = (frost$core$Bit) {$tmp1347.nonnull};
bool $tmp1349 = $tmp1348.value;
if ($tmp1349) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:772
frost$core$String$Index$nullable $tmp1350 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1350.value);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:775
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:775:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1351 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1352 = &(&local2)->value;
*$tmp1352 = $tmp1351;
frost$core$String$Index $tmp1353 = *(&local2);
*(&local1) = $tmp1353;
frost$core$String$Index $tmp1354 = *(&local1);
*(&local0) = $tmp1354;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:778
frost$core$Bit $tmp1355 = param1.inclusive;
*(&local3) = $tmp1355;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:779
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:780
frost$core$String$Index$nullable $tmp1356 = param1.max;
frost$core$Bit $tmp1357 = (frost$core$Bit) {$tmp1356.nonnull};
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:781
frost$core$String$Index$nullable $tmp1359 = param1.max;
*(&local4) = ((frost$core$String$Index) $tmp1359.value);
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:784
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:784:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1360 = &param0->_length;
frost$core$Int64 $tmp1361 = *$tmp1360;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1362 = &(&local6)->value;
*$tmp1362 = $tmp1361;
frost$core$String$Index $tmp1363 = *(&local6);
*(&local5) = $tmp1363;
frost$core$String$Index $tmp1364 = *(&local5);
*(&local4) = $tmp1364;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:785
frost$core$Bit $tmp1365 = (frost$core$Bit) {false};
*(&local3) = $tmp1365;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:787
frost$core$String$Index $tmp1366 = *(&local0);
frost$core$String$Index $tmp1367 = *(&local4);
frost$core$Bit $tmp1368 = *(&local3);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1369 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1366, $tmp1367, $tmp1368);
frost$core$String* $tmp1370 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
return $tmp1370;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int64 local6;
frost$core$String$Index local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$core$MutableString* local11 = NULL;
frost$core$Char8 local12;
frost$core$Int64 local13;
frost$core$String$Index local14;
frost$core$String$Index local15;
frost$core$Char8 local16;
frost$core$Int64 local17;
frost$core$Int64 local18;
frost$core$String$Index local19;
frost$core$String$Index local20;
frost$core$Char8 local21;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:803
frost$core$Int64* $tmp1371 = &param0->_length;
frost$core$Int64 $tmp1372 = *$tmp1371;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:803:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1374 = $tmp1372.value;
int64_t $tmp1375 = $tmp1373.value;
bool $tmp1376 = $tmp1374 == $tmp1375;
frost$core$Bit $tmp1377 = (frost$core$Bit) {$tmp1376};
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1379));
return &$s1380;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:806
frost$core$Int64 $tmp1381 = param1.step;
*(&local0) = $tmp1381;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:808
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:809
frost$core$String$Index$nullable $tmp1382 = param1.start;
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1382.nonnull};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:810
frost$core$String$Index$nullable $tmp1385 = param1.start;
frost$core$Int64 $tmp1386 = ((frost$core$String$Index) $tmp1385.value).value;
*(&local1) = $tmp1386;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:812
frost$core$Int64 $tmp1387 = *(&local0);
frost$core$Int64 $tmp1388 = (frost$core$Int64) {0u};
int64_t $tmp1389 = $tmp1387.value;
int64_t $tmp1390 = $tmp1388.value;
bool $tmp1391 = $tmp1389 > $tmp1390;
frost$core$Bit $tmp1392 = (frost$core$Bit) {$tmp1391};
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:813
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:813:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1394 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1395 = &(&local3)->value;
*$tmp1395 = $tmp1394;
frost$core$String$Index $tmp1396 = *(&local3);
*(&local2) = $tmp1396;
frost$core$String$Index $tmp1397 = *(&local2);
frost$core$Int64 $tmp1398 = $tmp1397.value;
*(&local1) = $tmp1398;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:816
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:816:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1399 = &param0->_length;
frost$core$Int64 $tmp1400 = *$tmp1399;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1401 = &(&local5)->value;
*$tmp1401 = $tmp1400;
frost$core$String$Index $tmp1402 = *(&local5);
*(&local4) = $tmp1402;
frost$core$String$Index $tmp1403 = *(&local4);
frost$core$String$Index $tmp1404 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1403);
frost$core$Int64 $tmp1405 = $tmp1404.value;
*(&local1) = $tmp1405;
goto block8;
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:819
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:820
frost$core$String$Index$nullable $tmp1406 = param1.end;
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406.nonnull};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:821
frost$core$String$Index$nullable $tmp1409 = param1.end;
frost$core$Int64 $tmp1410 = ((frost$core$String$Index) $tmp1409.value).value;
*(&local6) = $tmp1410;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:823
frost$core$Int64 $tmp1411 = *(&local0);
frost$core$Int64 $tmp1412 = (frost$core$Int64) {0u};
int64_t $tmp1413 = $tmp1411.value;
int64_t $tmp1414 = $tmp1412.value;
bool $tmp1415 = $tmp1413 > $tmp1414;
frost$core$Bit $tmp1416 = (frost$core$Bit) {$tmp1415};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:824
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:824:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp1418 = &param0->_length;
frost$core$Int64 $tmp1419 = *$tmp1418;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1420 = &(&local8)->value;
*$tmp1420 = $tmp1419;
frost$core$String$Index $tmp1421 = *(&local8);
*(&local7) = $tmp1421;
frost$core$String$Index $tmp1422 = *(&local7);
frost$core$Int64 $tmp1423 = $tmp1422.value;
*(&local6) = $tmp1423;
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:827
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:827:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1424 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1425 = &(&local10)->value;
*$tmp1425 = $tmp1424;
frost$core$String$Index $tmp1426 = *(&local10);
*(&local9) = $tmp1426;
frost$core$String$Index $tmp1427 = *(&local9);
frost$core$Int64 $tmp1428 = $tmp1427.value;
*(&local6) = $tmp1428;
goto block18;
block18:;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:830
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1429 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1429);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$MutableString* $tmp1430 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local11) = $tmp1429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:831
frost$core$Int64 $tmp1431 = param1.step;
frost$core$Int64 $tmp1432 = (frost$core$Int64) {0u};
int64_t $tmp1433 = $tmp1431.value;
int64_t $tmp1434 = $tmp1432.value;
bool $tmp1435 = $tmp1433 > $tmp1434;
frost$core$Bit $tmp1436 = (frost$core$Bit) {$tmp1435};
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:832
goto block27;
block27:;
frost$core$Int64 $tmp1438 = *(&local1);
frost$core$Int64 $tmp1439 = *(&local6);
int64_t $tmp1440 = $tmp1438.value;
int64_t $tmp1441 = $tmp1439.value;
bool $tmp1442 = $tmp1440 < $tmp1441;
frost$core$Bit $tmp1443 = (frost$core$Bit) {$tmp1442};
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:833
frost$core$Char8** $tmp1445 = &param0->data;
frost$core$Char8* $tmp1446 = *$tmp1445;
frost$core$Int64 $tmp1447 = *(&local1);
int64_t $tmp1448 = $tmp1447.value;
frost$core$Char8 $tmp1449 = $tmp1446[$tmp1448];
*(&local12) = $tmp1449;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:834
frost$core$MutableString* $tmp1450 = *(&local11);
frost$core$Char8 $tmp1451 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1450, $tmp1451);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:835
frost$core$Int64 $tmp1452 = *(&local1);
frost$core$Int64 $tmp1453 = (frost$core$Int64) {1u};
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453.value;
int64_t $tmp1456 = $tmp1454 + $tmp1455;
frost$core$Int64 $tmp1457 = (frost$core$Int64) {$tmp1456};
*(&local1) = $tmp1457;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:836
frost$core$Char8 $tmp1458 = *(&local12);
uint8_t $tmp1459 = $tmp1458.value;
int64_t $tmp1460 = ((int64_t) $tmp1459) & 255u;
bool $tmp1461 = $tmp1460 >= 192u;
frost$core$Bit $tmp1462 = (frost$core$Bit) {$tmp1461};
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:837
frost$core$MutableString* $tmp1464 = *(&local11);
frost$core$Char8** $tmp1465 = &param0->data;
frost$core$Char8* $tmp1466 = *$tmp1465;
frost$core$Int64 $tmp1467 = *(&local1);
int64_t $tmp1468 = $tmp1467.value;
frost$core$Char8 $tmp1469 = $tmp1466[$tmp1468];
frost$core$MutableString$append$frost$core$Char8($tmp1464, $tmp1469);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:838
frost$core$Int64 $tmp1470 = *(&local1);
frost$core$Int64 $tmp1471 = (frost$core$Int64) {1u};
int64_t $tmp1472 = $tmp1470.value;
int64_t $tmp1473 = $tmp1471.value;
int64_t $tmp1474 = $tmp1472 + $tmp1473;
frost$core$Int64 $tmp1475 = (frost$core$Int64) {$tmp1474};
*(&local1) = $tmp1475;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:840
frost$core$Char8 $tmp1476 = *(&local12);
uint8_t $tmp1477 = $tmp1476.value;
int64_t $tmp1478 = ((int64_t) $tmp1477) & 255u;
bool $tmp1479 = $tmp1478 >= 224u;
frost$core$Bit $tmp1480 = (frost$core$Bit) {$tmp1479};
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:841
frost$core$MutableString* $tmp1482 = *(&local11);
frost$core$Char8** $tmp1483 = &param0->data;
frost$core$Char8* $tmp1484 = *$tmp1483;
frost$core$Int64 $tmp1485 = *(&local1);
int64_t $tmp1486 = $tmp1485.value;
frost$core$Char8 $tmp1487 = $tmp1484[$tmp1486];
frost$core$MutableString$append$frost$core$Char8($tmp1482, $tmp1487);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:842
frost$core$Int64 $tmp1488 = *(&local1);
frost$core$Int64 $tmp1489 = (frost$core$Int64) {1u};
int64_t $tmp1490 = $tmp1488.value;
int64_t $tmp1491 = $tmp1489.value;
int64_t $tmp1492 = $tmp1490 + $tmp1491;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {$tmp1492};
*(&local1) = $tmp1493;
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:844
frost$core$Char8 $tmp1494 = *(&local12);
uint8_t $tmp1495 = $tmp1494.value;
int64_t $tmp1496 = ((int64_t) $tmp1495) & 255u;
bool $tmp1497 = $tmp1496 >= 240u;
frost$core$Bit $tmp1498 = (frost$core$Bit) {$tmp1497};
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:845
frost$core$MutableString* $tmp1500 = *(&local11);
frost$core$Char8** $tmp1501 = &param0->data;
frost$core$Char8* $tmp1502 = *$tmp1501;
frost$core$Int64 $tmp1503 = *(&local1);
int64_t $tmp1504 = $tmp1503.value;
frost$core$Char8 $tmp1505 = $tmp1502[$tmp1504];
frost$core$MutableString$append$frost$core$Char8($tmp1500, $tmp1505);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:846
frost$core$Int64 $tmp1506 = *(&local1);
frost$core$Int64 $tmp1507 = (frost$core$Int64) {1u};
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507.value;
int64_t $tmp1510 = $tmp1508 + $tmp1509;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {$tmp1510};
*(&local1) = $tmp1511;
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:848
frost$core$Int64 $tmp1512 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1513 = *(&local0);
frost$core$Bit $tmp1514 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1515 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1512, $tmp1513, $tmp1514);
frost$core$Int64 $tmp1516 = $tmp1515.min;
*(&local13) = $tmp1516;
frost$core$Int64 $tmp1517 = $tmp1515.max;
frost$core$Bit $tmp1518 = $tmp1515.inclusive;
bool $tmp1519 = $tmp1518.value;
frost$core$Int64 $tmp1520 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1521 = $tmp1520.value;
frost$core$UInt64 $tmp1522 = (frost$core$UInt64) {((uint64_t) $tmp1521)};
if ($tmp1519) goto block40; else goto block41;
block40:;
int64_t $tmp1523 = $tmp1516.value;
int64_t $tmp1524 = $tmp1517.value;
bool $tmp1525 = $tmp1523 <= $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block37; else goto block38;
block41:;
int64_t $tmp1528 = $tmp1516.value;
int64_t $tmp1529 = $tmp1517.value;
bool $tmp1530 = $tmp1528 < $tmp1529;
frost$core$Bit $tmp1531 = (frost$core$Bit) {$tmp1530};
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:849
frost$core$Int64 $tmp1533 = *(&local1);
frost$core$Int64 $tmp1534 = *(&local6);
int64_t $tmp1535 = $tmp1533.value;
int64_t $tmp1536 = $tmp1534.value;
bool $tmp1537 = $tmp1535 >= $tmp1536;
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1537};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:850
frost$core$MutableString* $tmp1540 = *(&local11);
$fn1542 $tmp1541 = ($fn1542) ((frost$core$Object*) $tmp1540)->$class->vtable[0];
frost$core$String* $tmp1543 = $tmp1541(((frost$core$Object*) $tmp1540));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
frost$core$MutableString* $tmp1544 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1543;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:852
frost$core$Int64 $tmp1545 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:852:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1546 = &(&local15)->value;
*$tmp1546 = $tmp1545;
frost$core$String$Index $tmp1547 = *(&local15);
*(&local14) = $tmp1547;
frost$core$String$Index $tmp1548 = *(&local14);
frost$core$String$Index $tmp1549 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1548);
frost$core$Int64 $tmp1550 = $tmp1549.value;
*(&local1) = $tmp1550;
frost$core$Int64 $tmp1551 = *(&local13);
int64_t $tmp1552 = $tmp1517.value;
int64_t $tmp1553 = $tmp1551.value;
int64_t $tmp1554 = $tmp1552 - $tmp1553;
frost$core$Int64 $tmp1555 = (frost$core$Int64) {$tmp1554};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1556 = $tmp1555.value;
frost$core$UInt64 $tmp1557 = (frost$core$UInt64) {((uint64_t) $tmp1556)};
if ($tmp1519) goto block47; else goto block48;
block47:;
uint64_t $tmp1558 = $tmp1557.value;
uint64_t $tmp1559 = $tmp1522.value;
bool $tmp1560 = $tmp1558 >= $tmp1559;
frost$core$Bit $tmp1561 = (frost$core$Bit) {$tmp1560};
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block45; else goto block38;
block48:;
uint64_t $tmp1563 = $tmp1557.value;
uint64_t $tmp1564 = $tmp1522.value;
bool $tmp1565 = $tmp1563 > $tmp1564;
frost$core$Bit $tmp1566 = (frost$core$Bit) {$tmp1565};
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block45; else goto block38;
block45:;
int64_t $tmp1568 = $tmp1551.value;
int64_t $tmp1569 = $tmp1520.value;
int64_t $tmp1570 = $tmp1568 + $tmp1569;
frost$core$Int64 $tmp1571 = (frost$core$Int64) {$tmp1570};
*(&local13) = $tmp1571;
goto block37;
block38:;
goto block27;
block29:;
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:857
frost$core$Int64 $tmp1572 = param1.step;
frost$core$Int64 $tmp1573 = (frost$core$Int64) {0u};
int64_t $tmp1574 = $tmp1572.value;
int64_t $tmp1575 = $tmp1573.value;
bool $tmp1576 = $tmp1574 < $tmp1575;
frost$core$Bit $tmp1577 = (frost$core$Bit) {$tmp1576};
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1579 = (frost$core$Int64) {857u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1580, $tmp1579);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:858
goto block51;
block51:;
frost$core$Int64 $tmp1581 = *(&local1);
frost$core$Int64 $tmp1582 = *(&local6);
int64_t $tmp1583 = $tmp1581.value;
int64_t $tmp1584 = $tmp1582.value;
bool $tmp1585 = $tmp1583 > $tmp1584;
frost$core$Bit $tmp1586 = (frost$core$Bit) {$tmp1585};
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:859
frost$core$Char8** $tmp1588 = &param0->data;
frost$core$Char8* $tmp1589 = *$tmp1588;
frost$core$Int64 $tmp1590 = *(&local1);
int64_t $tmp1591 = $tmp1590.value;
frost$core$Char8 $tmp1592 = $tmp1589[$tmp1591];
*(&local16) = $tmp1592;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:860
frost$core$MutableString* $tmp1593 = *(&local11);
frost$core$Char8 $tmp1594 = *(&local16);
frost$core$MutableString$append$frost$core$Char8($tmp1593, $tmp1594);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:861
frost$core$Int64 $tmp1595 = *(&local1);
*(&local17) = $tmp1595;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:862
frost$core$Int64 $tmp1596 = *(&local1);
frost$core$Int64 $tmp1597 = (frost$core$Int64) {1u};
int64_t $tmp1598 = $tmp1596.value;
int64_t $tmp1599 = $tmp1597.value;
int64_t $tmp1600 = $tmp1598 + $tmp1599;
frost$core$Int64 $tmp1601 = (frost$core$Int64) {$tmp1600};
*(&local1) = $tmp1601;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:863
frost$core$Char8 $tmp1602 = *(&local16);
uint8_t $tmp1603 = $tmp1602.value;
int64_t $tmp1604 = ((int64_t) $tmp1603) & 255u;
bool $tmp1605 = $tmp1604 >= 192u;
frost$core$Bit $tmp1606 = (frost$core$Bit) {$tmp1605};
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:864
frost$core$MutableString* $tmp1608 = *(&local11);
frost$core$Char8** $tmp1609 = &param0->data;
frost$core$Char8* $tmp1610 = *$tmp1609;
frost$core$Int64 $tmp1611 = *(&local1);
int64_t $tmp1612 = $tmp1611.value;
frost$core$Char8 $tmp1613 = $tmp1610[$tmp1612];
frost$core$MutableString$append$frost$core$Char8($tmp1608, $tmp1613);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:865
frost$core$Int64 $tmp1614 = *(&local1);
frost$core$Int64 $tmp1615 = (frost$core$Int64) {1u};
int64_t $tmp1616 = $tmp1614.value;
int64_t $tmp1617 = $tmp1615.value;
int64_t $tmp1618 = $tmp1616 + $tmp1617;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {$tmp1618};
*(&local1) = $tmp1619;
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:867
frost$core$Char8 $tmp1620 = *(&local16);
uint8_t $tmp1621 = $tmp1620.value;
int64_t $tmp1622 = ((int64_t) $tmp1621) & 255u;
bool $tmp1623 = $tmp1622 >= 224u;
frost$core$Bit $tmp1624 = (frost$core$Bit) {$tmp1623};
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:868
frost$core$MutableString* $tmp1626 = *(&local11);
frost$core$Char8** $tmp1627 = &param0->data;
frost$core$Char8* $tmp1628 = *$tmp1627;
frost$core$Int64 $tmp1629 = *(&local1);
int64_t $tmp1630 = $tmp1629.value;
frost$core$Char8 $tmp1631 = $tmp1628[$tmp1630];
frost$core$MutableString$append$frost$core$Char8($tmp1626, $tmp1631);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:869
frost$core$Int64 $tmp1632 = *(&local1);
frost$core$Int64 $tmp1633 = (frost$core$Int64) {1u};
int64_t $tmp1634 = $tmp1632.value;
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634 + $tmp1635;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {$tmp1636};
*(&local1) = $tmp1637;
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:871
frost$core$Char8 $tmp1638 = *(&local16);
uint8_t $tmp1639 = $tmp1638.value;
int64_t $tmp1640 = ((int64_t) $tmp1639) & 255u;
bool $tmp1641 = $tmp1640 >= 240u;
frost$core$Bit $tmp1642 = (frost$core$Bit) {$tmp1641};
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:872
frost$core$MutableString* $tmp1644 = *(&local11);
frost$core$Char8** $tmp1645 = &param0->data;
frost$core$Char8* $tmp1646 = *$tmp1645;
frost$core$Int64 $tmp1647 = *(&local1);
int64_t $tmp1648 = $tmp1647.value;
frost$core$Char8 $tmp1649 = $tmp1646[$tmp1648];
frost$core$MutableString$append$frost$core$Char8($tmp1644, $tmp1649);
goto block59;
block59:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:874
frost$core$Int64 $tmp1650 = *(&local17);
frost$core$Int64 $tmp1651 = (frost$core$Int64) {1u};
int64_t $tmp1652 = $tmp1650.value;
int64_t $tmp1653 = $tmp1651.value;
int64_t $tmp1654 = $tmp1652 - $tmp1653;
frost$core$Int64 $tmp1655 = (frost$core$Int64) {$tmp1654};
*(&local1) = $tmp1655;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:875
goto block60;
block60:;
frost$core$Char8** $tmp1656 = &param0->data;
frost$core$Char8* $tmp1657 = *$tmp1656;
frost$core$Int64 $tmp1658 = *(&local1);
int64_t $tmp1659 = $tmp1658.value;
frost$core$Char8 $tmp1660 = $tmp1657[$tmp1659];
uint8_t $tmp1661 = $tmp1660.value;
int64_t $tmp1662 = ((int64_t) $tmp1661) & 255u;
bool $tmp1663 = $tmp1662 >= 128u;
frost$core$Bit $tmp1664 = (frost$core$Bit) {$tmp1663};
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block63; else goto block62;
block63:;
frost$core$Char8** $tmp1666 = &param0->data;
frost$core$Char8* $tmp1667 = *$tmp1666;
frost$core$Int64 $tmp1668 = *(&local1);
int64_t $tmp1669 = $tmp1668.value;
frost$core$Char8 $tmp1670 = $tmp1667[$tmp1669];
uint8_t $tmp1671 = $tmp1670.value;
int64_t $tmp1672 = ((int64_t) $tmp1671) & 255u;
bool $tmp1673 = $tmp1672 < 192u;
frost$core$Bit $tmp1674 = (frost$core$Bit) {$tmp1673};
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:876
frost$core$Int64 $tmp1676 = *(&local1);
frost$core$Int64 $tmp1677 = (frost$core$Int64) {1u};
int64_t $tmp1678 = $tmp1676.value;
int64_t $tmp1679 = $tmp1677.value;
int64_t $tmp1680 = $tmp1678 - $tmp1679;
frost$core$Int64 $tmp1681 = (frost$core$Int64) {$tmp1680};
*(&local1) = $tmp1681;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:878
frost$core$Int64 $tmp1682 = (frost$core$Int64) {18446744073709551615u};
frost$core$Int64 $tmp1683 = *(&local0);
frost$core$Int64 $tmp1684 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp1685 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1686 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1682, $tmp1683, $tmp1684, $tmp1685);
frost$core$Int64 $tmp1687 = $tmp1686.start;
*(&local18) = $tmp1687;
frost$core$Int64 $tmp1688 = $tmp1686.end;
frost$core$Int64 $tmp1689 = $tmp1686.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1690 = $tmp1689.value;
frost$core$UInt64 $tmp1691 = (frost$core$UInt64) {((uint64_t) $tmp1690)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:878:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp1692 = $tmp1689.value;
int64_t $tmp1693 = -$tmp1692;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {$tmp1693};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1695 = $tmp1694.value;
frost$core$UInt64 $tmp1696 = (frost$core$UInt64) {((uint64_t) $tmp1695)};
frost$core$Bit $tmp1697 = $tmp1686.inclusive;
bool $tmp1698 = $tmp1697.value;
frost$core$Int64 $tmp1699 = (frost$core$Int64) {0u};
int64_t $tmp1700 = $tmp1689.value;
int64_t $tmp1701 = $tmp1699.value;
bool $tmp1702 = $tmp1700 >= $tmp1701;
frost$core$Bit $tmp1703 = (frost$core$Bit) {$tmp1702};
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block70; else goto block71;
block70:;
if ($tmp1698) goto block72; else goto block73;
block72:;
int64_t $tmp1705 = $tmp1687.value;
int64_t $tmp1706 = $tmp1688.value;
bool $tmp1707 = $tmp1705 <= $tmp1706;
frost$core$Bit $tmp1708 = (frost$core$Bit) {$tmp1707};
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block67; else goto block68;
block73:;
int64_t $tmp1710 = $tmp1687.value;
int64_t $tmp1711 = $tmp1688.value;
bool $tmp1712 = $tmp1710 < $tmp1711;
frost$core$Bit $tmp1713 = (frost$core$Bit) {$tmp1712};
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block67; else goto block68;
block71:;
if ($tmp1698) goto block74; else goto block75;
block74:;
int64_t $tmp1715 = $tmp1687.value;
int64_t $tmp1716 = $tmp1688.value;
bool $tmp1717 = $tmp1715 >= $tmp1716;
frost$core$Bit $tmp1718 = (frost$core$Bit) {$tmp1717};
bool $tmp1719 = $tmp1718.value;
if ($tmp1719) goto block67; else goto block68;
block75:;
int64_t $tmp1720 = $tmp1687.value;
int64_t $tmp1721 = $tmp1688.value;
bool $tmp1722 = $tmp1720 > $tmp1721;
frost$core$Bit $tmp1723 = (frost$core$Bit) {$tmp1722};
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:879
frost$core$Int64 $tmp1725 = *(&local1);
frost$core$Int64 $tmp1726 = *(&local6);
int64_t $tmp1727 = $tmp1725.value;
int64_t $tmp1728 = $tmp1726.value;
bool $tmp1729 = $tmp1727 <= $tmp1728;
frost$core$Bit $tmp1730 = (frost$core$Bit) {$tmp1729};
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:880
frost$core$MutableString* $tmp1732 = *(&local11);
$fn1734 $tmp1733 = ($fn1734) ((frost$core$Object*) $tmp1732)->$class->vtable[0];
frost$core$String* $tmp1735 = $tmp1733(((frost$core$Object*) $tmp1732));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
frost$core$MutableString* $tmp1736 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1735;
block77:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:882
frost$core$Int64 $tmp1737 = *(&local1);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:882:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1738 = &(&local20)->value;
*$tmp1738 = $tmp1737;
frost$core$String$Index $tmp1739 = *(&local20);
*(&local19) = $tmp1739;
frost$core$String$Index $tmp1740 = *(&local19);
frost$core$String$Index $tmp1741 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1740);
frost$core$Int64 $tmp1742 = $tmp1741.value;
*(&local1) = $tmp1742;
frost$core$Int64 $tmp1743 = *(&local18);
if ($tmp1704) goto block80; else goto block81;
block80:;
int64_t $tmp1744 = $tmp1688.value;
int64_t $tmp1745 = $tmp1743.value;
int64_t $tmp1746 = $tmp1744 - $tmp1745;
frost$core$Int64 $tmp1747 = (frost$core$Int64) {$tmp1746};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1748 = $tmp1747.value;
frost$core$UInt64 $tmp1749 = (frost$core$UInt64) {((uint64_t) $tmp1748)};
if ($tmp1698) goto block83; else goto block84;
block83:;
uint64_t $tmp1750 = $tmp1749.value;
uint64_t $tmp1751 = $tmp1691.value;
bool $tmp1752 = $tmp1750 >= $tmp1751;
frost$core$Bit $tmp1753 = (frost$core$Bit) {$tmp1752};
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block79; else goto block68;
block84:;
uint64_t $tmp1755 = $tmp1749.value;
uint64_t $tmp1756 = $tmp1691.value;
bool $tmp1757 = $tmp1755 > $tmp1756;
frost$core$Bit $tmp1758 = (frost$core$Bit) {$tmp1757};
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block79; else goto block68;
block81:;
int64_t $tmp1760 = $tmp1743.value;
int64_t $tmp1761 = $tmp1688.value;
int64_t $tmp1762 = $tmp1760 - $tmp1761;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {$tmp1762};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1764 = $tmp1763.value;
frost$core$UInt64 $tmp1765 = (frost$core$UInt64) {((uint64_t) $tmp1764)};
if ($tmp1698) goto block86; else goto block87;
block86:;
uint64_t $tmp1766 = $tmp1765.value;
uint64_t $tmp1767 = $tmp1696.value;
bool $tmp1768 = $tmp1766 >= $tmp1767;
frost$core$Bit $tmp1769 = (frost$core$Bit) {$tmp1768};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block79; else goto block68;
block87:;
uint64_t $tmp1771 = $tmp1765.value;
uint64_t $tmp1772 = $tmp1696.value;
bool $tmp1773 = $tmp1771 > $tmp1772;
frost$core$Bit $tmp1774 = (frost$core$Bit) {$tmp1773};
bool $tmp1775 = $tmp1774.value;
if ($tmp1775) goto block79; else goto block68;
block79:;
int64_t $tmp1776 = $tmp1743.value;
int64_t $tmp1777 = $tmp1689.value;
int64_t $tmp1778 = $tmp1776 + $tmp1777;
frost$core$Int64 $tmp1779 = (frost$core$Int64) {$tmp1778};
*(&local18) = $tmp1779;
goto block67;
block68:;
goto block51;
block53:;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:886
frost$core$Bit $tmp1780 = param1.inclusive;
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block91; else goto block92;
block92:;
frost$core$String$Index$nullable $tmp1782 = param1.end;
frost$core$Bit $tmp1783 = (frost$core$Bit) {!$tmp1782.nonnull};
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block91; else goto block89;
block91:;
frost$core$Int64 $tmp1785 = *(&local1);
frost$core$Int64 $tmp1786 = *(&local6);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:886:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1787 = $tmp1785.value;
int64_t $tmp1788 = $tmp1786.value;
bool $tmp1789 = $tmp1787 == $tmp1788;
frost$core$Bit $tmp1790 = (frost$core$Bit) {$tmp1789};
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block90; else goto block89;
block90:;
frost$core$Int64 $tmp1792 = *(&local6);
frost$core$Int64* $tmp1793 = &param0->_length;
frost$core$Int64 $tmp1794 = *$tmp1793;
int64_t $tmp1795 = $tmp1792.value;
int64_t $tmp1796 = $tmp1794.value;
bool $tmp1797 = $tmp1795 < $tmp1796;
frost$core$Bit $tmp1798 = (frost$core$Bit) {$tmp1797};
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:887
frost$core$Char8** $tmp1800 = &param0->data;
frost$core$Char8* $tmp1801 = *$tmp1800;
frost$core$Int64 $tmp1802 = *(&local1);
int64_t $tmp1803 = $tmp1802.value;
frost$core$Char8 $tmp1804 = $tmp1801[$tmp1803];
*(&local21) = $tmp1804;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:888
frost$core$MutableString* $tmp1805 = *(&local11);
frost$core$Char8 $tmp1806 = *(&local21);
frost$core$MutableString$append$frost$core$Char8($tmp1805, $tmp1806);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:889
frost$core$Int64 $tmp1807 = *(&local1);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {1u};
int64_t $tmp1809 = $tmp1807.value;
int64_t $tmp1810 = $tmp1808.value;
int64_t $tmp1811 = $tmp1809 + $tmp1810;
frost$core$Int64 $tmp1812 = (frost$core$Int64) {$tmp1811};
*(&local1) = $tmp1812;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:890
frost$core$Char8 $tmp1813 = *(&local21);
uint8_t $tmp1814 = $tmp1813.value;
int64_t $tmp1815 = ((int64_t) $tmp1814) & 255u;
bool $tmp1816 = $tmp1815 >= 192u;
frost$core$Bit $tmp1817 = (frost$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:891
frost$core$MutableString* $tmp1819 = *(&local11);
frost$core$Char8** $tmp1820 = &param0->data;
frost$core$Char8* $tmp1821 = *$tmp1820;
frost$core$Int64 $tmp1822 = *(&local1);
int64_t $tmp1823 = $tmp1822.value;
frost$core$Char8 $tmp1824 = $tmp1821[$tmp1823];
frost$core$MutableString$append$frost$core$Char8($tmp1819, $tmp1824);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:892
frost$core$Int64 $tmp1825 = *(&local1);
frost$core$Int64 $tmp1826 = (frost$core$Int64) {1u};
int64_t $tmp1827 = $tmp1825.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 + $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {$tmp1829};
*(&local1) = $tmp1830;
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:894
frost$core$Char8 $tmp1831 = *(&local21);
uint8_t $tmp1832 = $tmp1831.value;
int64_t $tmp1833 = ((int64_t) $tmp1832) & 255u;
bool $tmp1834 = $tmp1833 >= 224u;
frost$core$Bit $tmp1835 = (frost$core$Bit) {$tmp1834};
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:895
frost$core$MutableString* $tmp1837 = *(&local11);
frost$core$Char8** $tmp1838 = &param0->data;
frost$core$Char8* $tmp1839 = *$tmp1838;
frost$core$Int64 $tmp1840 = *(&local1);
int64_t $tmp1841 = $tmp1840.value;
frost$core$Char8 $tmp1842 = $tmp1839[$tmp1841];
frost$core$MutableString$append$frost$core$Char8($tmp1837, $tmp1842);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:896
frost$core$Int64 $tmp1843 = *(&local1);
frost$core$Int64 $tmp1844 = (frost$core$Int64) {1u};
int64_t $tmp1845 = $tmp1843.value;
int64_t $tmp1846 = $tmp1844.value;
int64_t $tmp1847 = $tmp1845 + $tmp1846;
frost$core$Int64 $tmp1848 = (frost$core$Int64) {$tmp1847};
*(&local1) = $tmp1848;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:898
frost$core$Char8 $tmp1849 = *(&local21);
uint8_t $tmp1850 = $tmp1849.value;
int64_t $tmp1851 = ((int64_t) $tmp1850) & 255u;
bool $tmp1852 = $tmp1851 >= 240u;
frost$core$Bit $tmp1853 = (frost$core$Bit) {$tmp1852};
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:899
frost$core$MutableString* $tmp1855 = *(&local11);
frost$core$Char8** $tmp1856 = &param0->data;
frost$core$Char8* $tmp1857 = *$tmp1856;
frost$core$Int64 $tmp1858 = *(&local1);
int64_t $tmp1859 = $tmp1858.value;
frost$core$Char8 $tmp1860 = $tmp1857[$tmp1859];
frost$core$MutableString$append$frost$core$Char8($tmp1855, $tmp1860);
goto block99;
block99:;
goto block89;
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:902
frost$core$MutableString* $tmp1861 = *(&local11);
frost$core$String* $tmp1862 = frost$core$MutableString$finish$R$frost$core$String($tmp1861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$MutableString* $tmp1863 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local11) = ((frost$core$MutableString*) NULL);
return $tmp1862;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:911
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:912
frost$core$Int64$nullable $tmp1864 = param1.min;
frost$core$Bit $tmp1865 = (frost$core$Bit) {$tmp1864.nonnull};
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:913
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:913:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1867 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1868 = &(&local2)->value;
*$tmp1868 = $tmp1867;
frost$core$String$Index $tmp1869 = *(&local2);
*(&local1) = $tmp1869;
frost$core$String$Index $tmp1870 = *(&local1);
frost$core$Int64$nullable $tmp1871 = param1.min;
frost$core$String$Index $tmp1872 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1870, ((frost$core$Int64) $tmp1871.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1872, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:918
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:919
frost$core$Int64$nullable $tmp1873 = param1.max;
frost$core$Bit $tmp1874 = (frost$core$Bit) {$tmp1873.nonnull};
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:920
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:920:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1876 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1877 = &(&local5)->value;
*$tmp1877 = $tmp1876;
frost$core$String$Index $tmp1878 = *(&local5);
*(&local4) = $tmp1878;
frost$core$String$Index $tmp1879 = *(&local4);
frost$core$Int64$nullable $tmp1880 = param1.max;
frost$core$String$Index $tmp1881 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1879, ((frost$core$Int64) $tmp1880.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1881, true });
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:923
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:925
frost$core$String$Index$nullable $tmp1882 = *(&local0);
frost$core$String$Index$nullable $tmp1883 = *(&local3);
frost$core$Bit $tmp1884 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1885 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1882, $tmp1883, $tmp1884);
frost$core$String* $tmp1886 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
return $tmp1886;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index$nullable local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:934
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:935
frost$core$Int64$nullable $tmp1887 = param1.start;
frost$core$Bit $tmp1888 = (frost$core$Bit) {$tmp1887.nonnull};
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:936
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:936:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1890 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1891 = &(&local2)->value;
*$tmp1891 = $tmp1890;
frost$core$String$Index $tmp1892 = *(&local2);
*(&local1) = $tmp1892;
frost$core$String$Index $tmp1893 = *(&local1);
frost$core$Int64$nullable $tmp1894 = param1.start;
frost$core$String$Index $tmp1895 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1893, ((frost$core$Int64) $tmp1894.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1895, true });
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:941
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:942
frost$core$Int64$nullable $tmp1896 = param1.end;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896.nonnull};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:943
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:943:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1899 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1900 = &(&local5)->value;
*$tmp1900 = $tmp1899;
frost$core$String$Index $tmp1901 = *(&local5);
*(&local4) = $tmp1901;
frost$core$String$Index $tmp1902 = *(&local4);
frost$core$Int64$nullable $tmp1903 = param1.end;
frost$core$String$Index $tmp1904 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1902, ((frost$core$Int64) $tmp1903.value));
*(&local3) = ((frost$core$String$Index$nullable) { $tmp1904, true });
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:946
*(&local3) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:948
frost$core$String$Index$nullable $tmp1905 = *(&local0);
frost$core$String$Index$nullable $tmp1906 = *(&local3);
frost$core$Int64 $tmp1907 = param1.step;
frost$core$Bit $tmp1908 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1909 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1905, $tmp1906, $tmp1907, $tmp1908);
frost$core$String* $tmp1910 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
return $tmp1910;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:955
frost$core$Int64 $tmp1911 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp1912 = &param0->_length;
frost$core$Int64 $tmp1913 = *$tmp1912;
frost$core$Bit $tmp1914 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1915 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1911, $tmp1913, $tmp1914);
frost$core$Int64 $tmp1916 = $tmp1915.min;
*(&local0) = $tmp1916;
frost$core$Int64 $tmp1917 = $tmp1915.max;
frost$core$Bit $tmp1918 = $tmp1915.inclusive;
bool $tmp1919 = $tmp1918.value;
frost$core$Int64 $tmp1920 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1921 = $tmp1920.value;
frost$core$UInt64 $tmp1922 = (frost$core$UInt64) {((uint64_t) $tmp1921)};
if ($tmp1919) goto block5; else goto block6;
block5:;
int64_t $tmp1923 = $tmp1916.value;
int64_t $tmp1924 = $tmp1917.value;
bool $tmp1925 = $tmp1923 <= $tmp1924;
frost$core$Bit $tmp1926 = (frost$core$Bit) {$tmp1925};
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block2; else goto block3;
block6:;
int64_t $tmp1928 = $tmp1916.value;
int64_t $tmp1929 = $tmp1917.value;
bool $tmp1930 = $tmp1928 < $tmp1929;
frost$core$Bit $tmp1931 = (frost$core$Bit) {$tmp1930};
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:956
frost$core$Char8** $tmp1933 = &param0->data;
frost$core$Char8* $tmp1934 = *$tmp1933;
frost$core$Int64 $tmp1935 = *(&local0);
int64_t $tmp1936 = $tmp1935.value;
frost$core$Char8 $tmp1937 = $tmp1934[$tmp1936];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:956:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp1938 = $tmp1937.value;
uint8_t $tmp1939 = param1.value;
bool $tmp1940 = $tmp1938 == $tmp1939;
frost$core$Bit $tmp1941 = (frost$core$Bit) {$tmp1940};
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:957
frost$core$Bit $tmp1943 = (frost$core$Bit) {true};
return $tmp1943;
block8:;
frost$core$Int64 $tmp1944 = *(&local0);
int64_t $tmp1945 = $tmp1917.value;
int64_t $tmp1946 = $tmp1944.value;
int64_t $tmp1947 = $tmp1945 - $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {$tmp1947};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp1949 = $tmp1948.value;
frost$core$UInt64 $tmp1950 = (frost$core$UInt64) {((uint64_t) $tmp1949)};
if ($tmp1919) goto block12; else goto block13;
block12:;
uint64_t $tmp1951 = $tmp1950.value;
uint64_t $tmp1952 = $tmp1922.value;
bool $tmp1953 = $tmp1951 >= $tmp1952;
frost$core$Bit $tmp1954 = (frost$core$Bit) {$tmp1953};
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block10; else goto block3;
block13:;
uint64_t $tmp1956 = $tmp1950.value;
uint64_t $tmp1957 = $tmp1922.value;
bool $tmp1958 = $tmp1956 > $tmp1957;
frost$core$Bit $tmp1959 = (frost$core$Bit) {$tmp1958};
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block10; else goto block3;
block10:;
int64_t $tmp1961 = $tmp1944.value;
int64_t $tmp1962 = $tmp1920.value;
int64_t $tmp1963 = $tmp1961 + $tmp1962;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {$tmp1963};
*(&local0) = $tmp1964;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:960
frost$core$Bit $tmp1965 = (frost$core$Bit) {false};
return $tmp1965;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1966 = (frost$core$Int64) {0u};
frost$core$String$Index $tmp1967 = frost$core$String$Index$init$frost$core$Int64($tmp1966);
frost$core$String$Index$nullable $tmp1968 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1967);
frost$core$Bit $tmp1969 = (frost$core$Bit) {$tmp1968.nonnull};
return $tmp1969;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp1970 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp1971 = &(&local1)->value;
*$tmp1971 = $tmp1970;
frost$core$String$Index $tmp1972 = *(&local1);
*(&local0) = $tmp1972;
frost$core$String$Index $tmp1973 = *(&local0);
frost$core$String$Index$nullable $tmp1974 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1973);
return $tmp1974;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:990
frost$core$Int64* $tmp1975 = &param0->_length;
frost$core$Int64 $tmp1976 = *$tmp1975;
frost$core$Int64* $tmp1977 = &param1->_length;
frost$core$Int64 $tmp1978 = *$tmp1977;
int64_t $tmp1979 = $tmp1976.value;
int64_t $tmp1980 = $tmp1978.value;
bool $tmp1981 = $tmp1979 < $tmp1980;
frost$core$Bit $tmp1982 = (frost$core$Bit) {$tmp1981};
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:993
frost$core$Int64 $tmp1984 = param2.value;
frost$core$Int64* $tmp1985 = &param0->_length;
frost$core$Int64 $tmp1986 = *$tmp1985;
frost$core$Int64* $tmp1987 = &param1->_length;
frost$core$Int64 $tmp1988 = *$tmp1987;
int64_t $tmp1989 = $tmp1986.value;
int64_t $tmp1990 = $tmp1988.value;
int64_t $tmp1991 = $tmp1989 - $tmp1990;
frost$core$Int64 $tmp1992 = (frost$core$Int64) {$tmp1991};
frost$core$Bit $tmp1993 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int64$GT $tmp1994 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1984, $tmp1992, $tmp1993);
frost$core$Int64 $tmp1995 = $tmp1994.min;
*(&local0) = $tmp1995;
frost$core$Int64 $tmp1996 = $tmp1994.max;
frost$core$Bit $tmp1997 = $tmp1994.inclusive;
bool $tmp1998 = $tmp1997.value;
frost$core$Int64 $tmp1999 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2000 = $tmp1999.value;
frost$core$UInt64 $tmp2001 = (frost$core$UInt64) {((uint64_t) $tmp2000)};
if ($tmp1998) goto block7; else goto block8;
block7:;
int64_t $tmp2002 = $tmp1995.value;
int64_t $tmp2003 = $tmp1996.value;
bool $tmp2004 = $tmp2002 <= $tmp2003;
frost$core$Bit $tmp2005 = (frost$core$Bit) {$tmp2004};
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block4; else goto block5;
block8:;
int64_t $tmp2007 = $tmp1995.value;
int64_t $tmp2008 = $tmp1996.value;
bool $tmp2009 = $tmp2007 < $tmp2008;
frost$core$Bit $tmp2010 = (frost$core$Bit) {$tmp2009};
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:994
frost$core$Int64 $tmp2012 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp2013 = &param1->_length;
frost$core$Int64 $tmp2014 = *$tmp2013;
frost$core$Bit $tmp2015 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2016 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2012, $tmp2014, $tmp2015);
frost$core$Int64 $tmp2017 = $tmp2016.min;
*(&local1) = $tmp2017;
frost$core$Int64 $tmp2018 = $tmp2016.max;
frost$core$Bit $tmp2019 = $tmp2016.inclusive;
bool $tmp2020 = $tmp2019.value;
frost$core$Int64 $tmp2021 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2022 = $tmp2021.value;
frost$core$UInt64 $tmp2023 = (frost$core$UInt64) {((uint64_t) $tmp2022)};
if ($tmp2020) goto block13; else goto block14;
block13:;
int64_t $tmp2024 = $tmp2017.value;
int64_t $tmp2025 = $tmp2018.value;
bool $tmp2026 = $tmp2024 <= $tmp2025;
frost$core$Bit $tmp2027 = (frost$core$Bit) {$tmp2026};
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block10; else goto block11;
block14:;
int64_t $tmp2029 = $tmp2017.value;
int64_t $tmp2030 = $tmp2018.value;
bool $tmp2031 = $tmp2029 < $tmp2030;
frost$core$Bit $tmp2032 = (frost$core$Bit) {$tmp2031};
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:995
frost$core$Char8** $tmp2034 = &param0->data;
frost$core$Char8* $tmp2035 = *$tmp2034;
frost$core$Int64 $tmp2036 = *(&local0);
frost$core$Int64 $tmp2037 = *(&local1);
int64_t $tmp2038 = $tmp2036.value;
int64_t $tmp2039 = $tmp2037.value;
int64_t $tmp2040 = $tmp2038 + $tmp2039;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {$tmp2040};
int64_t $tmp2042 = $tmp2041.value;
frost$core$Char8 $tmp2043 = $tmp2035[$tmp2042];
frost$core$Char8** $tmp2044 = &param1->data;
frost$core$Char8* $tmp2045 = *$tmp2044;
frost$core$Int64 $tmp2046 = *(&local1);
int64_t $tmp2047 = $tmp2046.value;
frost$core$Char8 $tmp2048 = $tmp2045[$tmp2047];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:995:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp2049 = $tmp2043.value;
uint8_t $tmp2050 = $tmp2048.value;
bool $tmp2051 = $tmp2049 != $tmp2050;
frost$core$Bit $tmp2052 = (frost$core$Bit) {$tmp2051};
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:996
frost$core$Int64 $tmp2054 = *(&local0);
int64_t $tmp2055 = $tmp1996.value;
int64_t $tmp2056 = $tmp2054.value;
int64_t $tmp2057 = $tmp2055 - $tmp2056;
frost$core$Int64 $tmp2058 = (frost$core$Int64) {$tmp2057};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2059 = $tmp2058.value;
frost$core$UInt64 $tmp2060 = (frost$core$UInt64) {((uint64_t) $tmp2059)};
if ($tmp1998) goto block25; else goto block26;
block16:;
frost$core$Int64 $tmp2061 = *(&local1);
int64_t $tmp2062 = $tmp2018.value;
int64_t $tmp2063 = $tmp2061.value;
int64_t $tmp2064 = $tmp2062 - $tmp2063;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {$tmp2064};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2066 = $tmp2065.value;
frost$core$UInt64 $tmp2067 = (frost$core$UInt64) {((uint64_t) $tmp2066)};
if ($tmp2020) goto block20; else goto block21;
block20:;
uint64_t $tmp2068 = $tmp2067.value;
uint64_t $tmp2069 = $tmp2023.value;
bool $tmp2070 = $tmp2068 >= $tmp2069;
frost$core$Bit $tmp2071 = (frost$core$Bit) {$tmp2070};
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block18; else goto block11;
block21:;
uint64_t $tmp2073 = $tmp2067.value;
uint64_t $tmp2074 = $tmp2023.value;
bool $tmp2075 = $tmp2073 > $tmp2074;
frost$core$Bit $tmp2076 = (frost$core$Bit) {$tmp2075};
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block18; else goto block11;
block18:;
int64_t $tmp2078 = $tmp2061.value;
int64_t $tmp2079 = $tmp2021.value;
int64_t $tmp2080 = $tmp2078 + $tmp2079;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {$tmp2080};
*(&local1) = $tmp2081;
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:999
frost$core$Int64 $tmp2082 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:999:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2083 = &(&local3)->value;
*$tmp2083 = $tmp2082;
frost$core$String$Index $tmp2084 = *(&local3);
*(&local2) = $tmp2084;
frost$core$String$Index $tmp2085 = *(&local2);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2085, true }).value), true });
block25:;
uint64_t $tmp2086 = $tmp2060.value;
uint64_t $tmp2087 = $tmp2001.value;
bool $tmp2088 = $tmp2086 >= $tmp2087;
frost$core$Bit $tmp2089 = (frost$core$Bit) {$tmp2088};
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block23; else goto block5;
block26:;
uint64_t $tmp2091 = $tmp2060.value;
uint64_t $tmp2092 = $tmp2001.value;
bool $tmp2093 = $tmp2091 > $tmp2092;
frost$core$Bit $tmp2094 = (frost$core$Bit) {$tmp2093};
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block23; else goto block5;
block23:;
int64_t $tmp2096 = $tmp2054.value;
int64_t $tmp2097 = $tmp1999.value;
int64_t $tmp2098 = $tmp2096 + $tmp2097;
frost$core$Int64 $tmp2099 = (frost$core$Int64) {$tmp2098};
*(&local0) = $tmp2099;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp2100 = &param0->_length;
frost$core$Int64 $tmp2101 = *$tmp2100;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2102 = &(&local1)->value;
*$tmp2102 = $tmp2101;
frost$core$String$Index $tmp2103 = *(&local1);
*(&local0) = $tmp2103;
frost$core$String$Index $tmp2104 = *(&local0);
frost$core$String$Index$nullable $tmp2105 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2104);
return $tmp2105;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1024
frost$core$Int64* $tmp2106 = &param0->_length;
frost$core$Int64 $tmp2107 = *$tmp2106;
frost$core$Int64* $tmp2108 = &param1->_length;
frost$core$Int64 $tmp2109 = *$tmp2108;
int64_t $tmp2110 = $tmp2107.value;
int64_t $tmp2111 = $tmp2109.value;
bool $tmp2112 = $tmp2110 < $tmp2111;
frost$core$Bit $tmp2113 = (frost$core$Bit) {$tmp2112};
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1027
frost$core$Int64 $tmp2115 = param2.value;
frost$core$Int64* $tmp2116 = &param0->_length;
frost$core$Int64 $tmp2117 = *$tmp2116;
frost$core$Int64* $tmp2118 = &param1->_length;
frost$core$Int64 $tmp2119 = *$tmp2118;
int64_t $tmp2120 = $tmp2117.value;
int64_t $tmp2121 = $tmp2119.value;
int64_t $tmp2122 = $tmp2120 - $tmp2121;
frost$core$Int64 $tmp2123 = (frost$core$Int64) {$tmp2122};
// begin inline call to function frost.core.Int64.min(other:frost.core.Int64):frost.core.Int64 from String.frost:1027:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:407
int64_t $tmp2124 = $tmp2115.value;
int64_t $tmp2125 = $tmp2123.value;
bool $tmp2126 = $tmp2124 < $tmp2125;
frost$core$Bit $tmp2127 = (frost$core$Bit) {$tmp2126};
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:408
int64_t $tmp2129 = $tmp2115.value;
frost$core$Int64 $tmp2130 = (frost$core$Int64) {$tmp2129};
*(&local0) = $tmp2130;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:410
int64_t $tmp2131 = $tmp2123.value;
frost$core$Int64 $tmp2132 = (frost$core$Int64) {$tmp2131};
*(&local0) = $tmp2132;
goto block3;
block3:;
frost$core$Int64 $tmp2133 = *(&local0);
*(&local1) = $tmp2133;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1028
frost$core$Int64 $tmp2134 = *(&local1);
frost$core$Int64 $tmp2135 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp2136 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp2137 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2138 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2134, $tmp2135, $tmp2136, $tmp2137);
frost$core$Int64 $tmp2139 = $tmp2138.start;
*(&local2) = $tmp2139;
frost$core$Int64 $tmp2140 = $tmp2138.end;
frost$core$Int64 $tmp2141 = $tmp2138.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2142 = $tmp2141.value;
frost$core$UInt64 $tmp2143 = (frost$core$UInt64) {((uint64_t) $tmp2142)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1028:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp2144 = $tmp2141.value;
int64_t $tmp2145 = -$tmp2144;
frost$core$Int64 $tmp2146 = (frost$core$Int64) {$tmp2145};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2147 = $tmp2146.value;
frost$core$UInt64 $tmp2148 = (frost$core$UInt64) {((uint64_t) $tmp2147)};
frost$core$Bit $tmp2149 = $tmp2138.inclusive;
bool $tmp2150 = $tmp2149.value;
frost$core$Int64 $tmp2151 = (frost$core$Int64) {0u};
int64_t $tmp2152 = $tmp2141.value;
int64_t $tmp2153 = $tmp2151.value;
bool $tmp2154 = $tmp2152 >= $tmp2153;
frost$core$Bit $tmp2155 = (frost$core$Bit) {$tmp2154};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block12; else goto block13;
block12:;
if ($tmp2150) goto block14; else goto block15;
block14:;
int64_t $tmp2157 = $tmp2139.value;
int64_t $tmp2158 = $tmp2140.value;
bool $tmp2159 = $tmp2157 <= $tmp2158;
frost$core$Bit $tmp2160 = (frost$core$Bit) {$tmp2159};
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block9; else goto block10;
block15:;
int64_t $tmp2162 = $tmp2139.value;
int64_t $tmp2163 = $tmp2140.value;
bool $tmp2164 = $tmp2162 < $tmp2163;
frost$core$Bit $tmp2165 = (frost$core$Bit) {$tmp2164};
bool $tmp2166 = $tmp2165.value;
if ($tmp2166) goto block9; else goto block10;
block13:;
if ($tmp2150) goto block16; else goto block17;
block16:;
int64_t $tmp2167 = $tmp2139.value;
int64_t $tmp2168 = $tmp2140.value;
bool $tmp2169 = $tmp2167 >= $tmp2168;
frost$core$Bit $tmp2170 = (frost$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block9; else goto block10;
block17:;
int64_t $tmp2172 = $tmp2139.value;
int64_t $tmp2173 = $tmp2140.value;
bool $tmp2174 = $tmp2172 > $tmp2173;
frost$core$Bit $tmp2175 = (frost$core$Bit) {$tmp2174};
bool $tmp2176 = $tmp2175.value;
if ($tmp2176) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1029
frost$core$Int64 $tmp2177 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp2178 = &param1->_length;
frost$core$Int64 $tmp2179 = *$tmp2178;
frost$core$Bit $tmp2180 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2181 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2177, $tmp2179, $tmp2180);
frost$core$Int64 $tmp2182 = $tmp2181.min;
*(&local3) = $tmp2182;
frost$core$Int64 $tmp2183 = $tmp2181.max;
frost$core$Bit $tmp2184 = $tmp2181.inclusive;
bool $tmp2185 = $tmp2184.value;
frost$core$Int64 $tmp2186 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2187 = $tmp2186.value;
frost$core$UInt64 $tmp2188 = (frost$core$UInt64) {((uint64_t) $tmp2187)};
if ($tmp2185) goto block22; else goto block23;
block22:;
int64_t $tmp2189 = $tmp2182.value;
int64_t $tmp2190 = $tmp2183.value;
bool $tmp2191 = $tmp2189 <= $tmp2190;
frost$core$Bit $tmp2192 = (frost$core$Bit) {$tmp2191};
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block19; else goto block20;
block23:;
int64_t $tmp2194 = $tmp2182.value;
int64_t $tmp2195 = $tmp2183.value;
bool $tmp2196 = $tmp2194 < $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1030
frost$core$Char8** $tmp2199 = &param0->data;
frost$core$Char8* $tmp2200 = *$tmp2199;
frost$core$Int64 $tmp2201 = *(&local2);
frost$core$Int64 $tmp2202 = *(&local3);
int64_t $tmp2203 = $tmp2201.value;
int64_t $tmp2204 = $tmp2202.value;
int64_t $tmp2205 = $tmp2203 + $tmp2204;
frost$core$Int64 $tmp2206 = (frost$core$Int64) {$tmp2205};
int64_t $tmp2207 = $tmp2206.value;
frost$core$Char8 $tmp2208 = $tmp2200[$tmp2207];
frost$core$Char8** $tmp2209 = &param1->data;
frost$core$Char8* $tmp2210 = *$tmp2209;
frost$core$Int64 $tmp2211 = *(&local3);
int64_t $tmp2212 = $tmp2211.value;
frost$core$Char8 $tmp2213 = $tmp2210[$tmp2212];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from String.frost:1030:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:31
uint8_t $tmp2214 = $tmp2208.value;
uint8_t $tmp2215 = $tmp2213.value;
bool $tmp2216 = $tmp2214 != $tmp2215;
frost$core$Bit $tmp2217 = (frost$core$Bit) {$tmp2216};
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1031
frost$core$Int64 $tmp2219 = *(&local2);
if ($tmp2156) goto block33; else goto block34;
block25:;
frost$core$Int64 $tmp2220 = *(&local3);
int64_t $tmp2221 = $tmp2183.value;
int64_t $tmp2222 = $tmp2220.value;
int64_t $tmp2223 = $tmp2221 - $tmp2222;
frost$core$Int64 $tmp2224 = (frost$core$Int64) {$tmp2223};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2225 = $tmp2224.value;
frost$core$UInt64 $tmp2226 = (frost$core$UInt64) {((uint64_t) $tmp2225)};
if ($tmp2185) goto block29; else goto block30;
block29:;
uint64_t $tmp2227 = $tmp2226.value;
uint64_t $tmp2228 = $tmp2188.value;
bool $tmp2229 = $tmp2227 >= $tmp2228;
frost$core$Bit $tmp2230 = (frost$core$Bit) {$tmp2229};
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block27; else goto block20;
block30:;
uint64_t $tmp2232 = $tmp2226.value;
uint64_t $tmp2233 = $tmp2188.value;
bool $tmp2234 = $tmp2232 > $tmp2233;
frost$core$Bit $tmp2235 = (frost$core$Bit) {$tmp2234};
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block27; else goto block20;
block27:;
int64_t $tmp2237 = $tmp2220.value;
int64_t $tmp2238 = $tmp2186.value;
int64_t $tmp2239 = $tmp2237 + $tmp2238;
frost$core$Int64 $tmp2240 = (frost$core$Int64) {$tmp2239};
*(&local3) = $tmp2240;
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1034
frost$core$Int64 $tmp2241 = *(&local2);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1034:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2242 = &(&local5)->value;
*$tmp2242 = $tmp2241;
frost$core$String$Index $tmp2243 = *(&local5);
*(&local4) = $tmp2243;
frost$core$String$Index $tmp2244 = *(&local4);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2244, true }).value), true });
block33:;
int64_t $tmp2245 = $tmp2140.value;
int64_t $tmp2246 = $tmp2219.value;
int64_t $tmp2247 = $tmp2245 - $tmp2246;
frost$core$Int64 $tmp2248 = (frost$core$Int64) {$tmp2247};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2249 = $tmp2248.value;
frost$core$UInt64 $tmp2250 = (frost$core$UInt64) {((uint64_t) $tmp2249)};
if ($tmp2150) goto block36; else goto block37;
block36:;
uint64_t $tmp2251 = $tmp2250.value;
uint64_t $tmp2252 = $tmp2143.value;
bool $tmp2253 = $tmp2251 >= $tmp2252;
frost$core$Bit $tmp2254 = (frost$core$Bit) {$tmp2253};
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block32; else goto block10;
block37:;
uint64_t $tmp2256 = $tmp2250.value;
uint64_t $tmp2257 = $tmp2143.value;
bool $tmp2258 = $tmp2256 > $tmp2257;
frost$core$Bit $tmp2259 = (frost$core$Bit) {$tmp2258};
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block32; else goto block10;
block34:;
int64_t $tmp2261 = $tmp2219.value;
int64_t $tmp2262 = $tmp2140.value;
int64_t $tmp2263 = $tmp2261 - $tmp2262;
frost$core$Int64 $tmp2264 = (frost$core$Int64) {$tmp2263};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2265 = $tmp2264.value;
frost$core$UInt64 $tmp2266 = (frost$core$UInt64) {((uint64_t) $tmp2265)};
if ($tmp2150) goto block39; else goto block40;
block39:;
uint64_t $tmp2267 = $tmp2266.value;
uint64_t $tmp2268 = $tmp2148.value;
bool $tmp2269 = $tmp2267 >= $tmp2268;
frost$core$Bit $tmp2270 = (frost$core$Bit) {$tmp2269};
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block32; else goto block10;
block40:;
uint64_t $tmp2272 = $tmp2266.value;
uint64_t $tmp2273 = $tmp2148.value;
bool $tmp2274 = $tmp2272 > $tmp2273;
frost$core$Bit $tmp2275 = (frost$core$Bit) {$tmp2274};
bool $tmp2276 = $tmp2275.value;
if ($tmp2276) goto block32; else goto block10;
block32:;
int64_t $tmp2277 = $tmp2219.value;
int64_t $tmp2278 = $tmp2141.value;
int64_t $tmp2279 = $tmp2277 + $tmp2278;
frost$core$Int64 $tmp2280 = (frost$core$Int64) {$tmp2279};
*(&local2) = $tmp2280;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp2281 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2282;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2282, $tmp2281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
return $tmp2282;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1058
frost$core$Matcher* $tmp2283 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2284 = frost$core$Matcher$find$R$frost$core$Bit($tmp2283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
return $tmp2284;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp2285 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$Matcher* $tmp2286 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local0) = $tmp2285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp2287 = *(&local0);
frost$core$Bit $tmp2288;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2288, $tmp2287);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2290 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2290);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
frost$collections$Array* $tmp2291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local1) = $tmp2290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1075
frost$core$Int64 $tmp2292 = (frost$core$Int64) {1u};
frost$core$Matcher* $tmp2293 = *(&local0);
frost$core$Int64 $tmp2294;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2294, $tmp2293);
frost$core$Bit $tmp2295 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2296 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2292, $tmp2294, $tmp2295);
frost$core$Int64 $tmp2297 = $tmp2296.min;
*(&local2) = $tmp2297;
frost$core$Int64 $tmp2298 = $tmp2296.max;
frost$core$Bit $tmp2299 = $tmp2296.inclusive;
bool $tmp2300 = $tmp2299.value;
frost$core$Int64 $tmp2301 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2302 = $tmp2301.value;
frost$core$UInt64 $tmp2303 = (frost$core$UInt64) {((uint64_t) $tmp2302)};
if ($tmp2300) goto block7; else goto block8;
block7:;
int64_t $tmp2304 = $tmp2297.value;
int64_t $tmp2305 = $tmp2298.value;
bool $tmp2306 = $tmp2304 <= $tmp2305;
frost$core$Bit $tmp2307 = (frost$core$Bit) {$tmp2306};
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block4; else goto block5;
block8:;
int64_t $tmp2309 = $tmp2297.value;
int64_t $tmp2310 = $tmp2298.value;
bool $tmp2311 = $tmp2309 < $tmp2310;
frost$core$Bit $tmp2312 = (frost$core$Bit) {$tmp2311};
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1076
frost$collections$Array* $tmp2314 = *(&local1);
frost$core$Matcher* $tmp2315 = *(&local0);
frost$core$Int64 $tmp2316 = *(&local2);
frost$core$String* $tmp2317 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2315, $tmp2316);
frost$collections$Array$add$frost$collections$Array$T($tmp2314, ((frost$core$Object*) $tmp2317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
frost$core$Int64 $tmp2318 = *(&local2);
int64_t $tmp2319 = $tmp2298.value;
int64_t $tmp2320 = $tmp2318.value;
int64_t $tmp2321 = $tmp2319 - $tmp2320;
frost$core$Int64 $tmp2322 = (frost$core$Int64) {$tmp2321};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2323 = $tmp2322.value;
frost$core$UInt64 $tmp2324 = (frost$core$UInt64) {((uint64_t) $tmp2323)};
if ($tmp2300) goto block11; else goto block12;
block11:;
uint64_t $tmp2325 = $tmp2324.value;
uint64_t $tmp2326 = $tmp2303.value;
bool $tmp2327 = $tmp2325 >= $tmp2326;
frost$core$Bit $tmp2328 = (frost$core$Bit) {$tmp2327};
bool $tmp2329 = $tmp2328.value;
if ($tmp2329) goto block9; else goto block5;
block12:;
uint64_t $tmp2330 = $tmp2324.value;
uint64_t $tmp2331 = $tmp2303.value;
bool $tmp2332 = $tmp2330 > $tmp2331;
frost$core$Bit $tmp2333 = (frost$core$Bit) {$tmp2332};
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block9; else goto block5;
block9:;
int64_t $tmp2335 = $tmp2318.value;
int64_t $tmp2336 = $tmp2301.value;
int64_t $tmp2337 = $tmp2335 + $tmp2336;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {$tmp2337};
*(&local2) = $tmp2338;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1078
frost$collections$Array* $tmp2339 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2339)));
frost$collections$Array* $tmp2340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2339);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1091
frost$core$Bit $tmp2343 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2344);
bool $tmp2345 = $tmp2343.value;
if ($tmp2345) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1094
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2346 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2346);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$MutableString* $tmp2347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
*(&local0) = $tmp2346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1095
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1095:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp2348 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2349 = &(&local2)->value;
*$tmp2349 = $tmp2348;
frost$core$String$Index $tmp2350 = *(&local2);
*(&local1) = $tmp2350;
frost$core$String$Index $tmp2351 = *(&local1);
*(&local3) = $tmp2351;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1096
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1097
frost$core$String$Index $tmp2352 = *(&local3);
frost$core$String$Index$nullable $tmp2353 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2352);
*(&local4) = $tmp2353;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1098
frost$core$String$Index$nullable $tmp2354 = *(&local4);
frost$core$Bit $tmp2355 = (frost$core$Bit) {!$tmp2354.nonnull};
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1099
frost$core$MutableString* $tmp2357 = *(&local0);
frost$core$String$Index $tmp2358 = *(&local3);
frost$core$Bit $tmp2359 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2360 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2358, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2359);
frost$core$String* $tmp2361 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2360);
frost$core$MutableString$append$frost$core$String($tmp2357, $tmp2361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1100
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1106
frost$core$MutableString* $tmp2362 = *(&local0);
frost$core$String* $tmp2363 = frost$core$MutableString$finish$R$frost$core$String($tmp2362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$MutableString* $tmp2364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2363;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1102
frost$core$MutableString* $tmp2365 = *(&local0);
frost$core$String$Index $tmp2366 = *(&local3);
frost$core$String$Index$nullable $tmp2367 = *(&local4);
frost$core$Bit $tmp2368 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp2369 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2366, ((frost$core$String$Index) $tmp2367.value), $tmp2368);
frost$core$String* $tmp2370 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2369);
frost$core$MutableString$append$frost$core$String($tmp2365, $tmp2370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1103
frost$core$MutableString* $tmp2371 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2371, param2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1104
frost$core$String$Index$nullable $tmp2372 = *(&local4);
frost$core$Int64 $tmp2373 = ((frost$core$String$Index) $tmp2372.value).value;
frost$core$Int64* $tmp2374 = &param1->_length;
frost$core$Int64 $tmp2375 = *$tmp2374;
int64_t $tmp2376 = $tmp2373.value;
int64_t $tmp2377 = $tmp2375.value;
int64_t $tmp2378 = $tmp2376 + $tmp2377;
frost$core$Int64 $tmp2379 = (frost$core$Int64) {$tmp2378};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1104:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2380 = &(&local6)->value;
*$tmp2380 = $tmp2379;
frost$core$String$Index $tmp2381 = *(&local6);
*(&local5) = $tmp2381;
frost$core$String$Index $tmp2382 = *(&local5);
*(&local3) = $tmp2382;
goto block5;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1120
frost$core$Bit $tmp2383 = (frost$core$Bit) {true};
frost$core$String* $tmp2384 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
return $tmp2384;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1125
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2385 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2385);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
frost$core$MutableString* $tmp2386 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local0) = $tmp2385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1126
frost$core$Matcher* $tmp2387 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
frost$core$Matcher* $tmp2388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local1) = $tmp2387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1127
goto block1;
block1:;
frost$core$Matcher* $tmp2389 = *(&local1);
frost$core$Bit $tmp2390 = frost$core$Matcher$find$R$frost$core$Bit($tmp2389);
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1128
frost$core$Matcher* $tmp2392 = *(&local1);
frost$core$MutableString* $tmp2393 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2392, $tmp2393, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1130
frost$core$Matcher* $tmp2394 = *(&local1);
frost$core$MutableString* $tmp2395 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1130:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2396 = &$tmp2394->searchText;
frost$core$String* $tmp2397 = *$tmp2396;
frost$core$String$Index* $tmp2398 = &$tmp2394->replacementIndex;
frost$core$String$Index $tmp2399 = *$tmp2398;
frost$core$Bit $tmp2400 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2401 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2399, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2400);
frost$core$String* $tmp2402 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2397, $tmp2401);
frost$core$MutableString$append$frost$core$String($tmp2395, $tmp2402);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1131
frost$core$MutableString* $tmp2403 = *(&local0);
frost$core$String* $tmp2404 = frost$core$MutableString$finish$R$frost$core$String($tmp2403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
frost$core$Matcher* $tmp2405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2406 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2404;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1152
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2407 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2407);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
frost$core$MutableString* $tmp2408 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local0) = $tmp2407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1153
frost$core$Matcher* $tmp2409 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Matcher* $tmp2410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local1) = $tmp2409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1154
goto block1;
block1:;
frost$core$Matcher* $tmp2411 = *(&local1);
frost$core$Bit $tmp2412 = frost$core$Matcher$find$R$frost$core$Bit($tmp2411);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1155
frost$core$Matcher* $tmp2414 = *(&local1);
frost$core$MutableString* $tmp2415 = *(&local0);
frost$core$Matcher* $tmp2416 = *(&local1);
frost$core$Int64 $tmp2417 = (frost$core$Int64) {0u};
frost$core$String* $tmp2418 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2416, $tmp2417);
frost$core$Int8** $tmp2419 = &param2->pointer;
frost$core$Int8* $tmp2420 = *$tmp2419;
frost$core$Object** $tmp2421 = &param2->target;
frost$core$Object* $tmp2422 = *$tmp2421;
bool $tmp2423 = $tmp2422 != ((frost$core$Object*) NULL);
if ($tmp2423) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2425 = (($fn2424) $tmp2420)($tmp2418);
*(&local2) = $tmp2425;
goto block6;
block4:;
frost$core$Object* $tmp2427 = (($fn2426) $tmp2420)($tmp2422, $tmp2418);
*(&local2) = $tmp2427;
goto block6;
block6:;
frost$core$Object* $tmp2428 = *(&local2);
$fn2430 $tmp2429 = ($fn2430) $tmp2428->$class->vtable[0];
frost$core$String* $tmp2431 = $tmp2429($tmp2428);
frost$core$Bit $tmp2432 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2414, $tmp2415, $tmp2431, $tmp2432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q($tmp2428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1157
frost$core$Matcher* $tmp2433 = *(&local1);
frost$core$MutableString* $tmp2434 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1157:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2435 = &$tmp2433->searchText;
frost$core$String* $tmp2436 = *$tmp2435;
frost$core$String$Index* $tmp2437 = &$tmp2433->replacementIndex;
frost$core$String$Index $tmp2438 = *$tmp2437;
frost$core$Bit $tmp2439 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2440 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2438, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2439);
frost$core$String* $tmp2441 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2436, $tmp2440);
frost$core$MutableString$append$frost$core$String($tmp2434, $tmp2441);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1158
frost$core$MutableString* $tmp2442 = *(&local0);
$fn2444 $tmp2443 = ($fn2444) ((frost$core$Object*) $tmp2442)->$class->vtable[0];
frost$core$String* $tmp2445 = $tmp2443(((frost$core$Object*) $tmp2442));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
frost$core$Matcher* $tmp2446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2445;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1172
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2448 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2448);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
frost$core$MutableString* $tmp2449 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local0) = $tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1173
frost$core$Matcher* $tmp2450 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$Matcher* $tmp2451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local1) = $tmp2450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1174
goto block1;
block1:;
frost$core$Matcher* $tmp2452 = *(&local1);
frost$core$Bit $tmp2453 = frost$core$Matcher$find$R$frost$core$Bit($tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1175
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2455 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2455);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$collections$Array* $tmp2456 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local2) = $tmp2455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1176
frost$core$Int64 $tmp2457 = (frost$core$Int64) {0u};
frost$core$Matcher* $tmp2458 = *(&local1);
frost$core$Int64 $tmp2459;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2459, $tmp2458);
frost$core$Bit $tmp2460 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2461 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2457, $tmp2459, $tmp2460);
frost$core$Int64 $tmp2462 = $tmp2461.min;
*(&local3) = $tmp2462;
frost$core$Int64 $tmp2463 = $tmp2461.max;
frost$core$Bit $tmp2464 = $tmp2461.inclusive;
bool $tmp2465 = $tmp2464.value;
frost$core$Int64 $tmp2466 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2467 = $tmp2466.value;
frost$core$UInt64 $tmp2468 = (frost$core$UInt64) {((uint64_t) $tmp2467)};
if ($tmp2465) goto block8; else goto block9;
block8:;
int64_t $tmp2469 = $tmp2462.value;
int64_t $tmp2470 = $tmp2463.value;
bool $tmp2471 = $tmp2469 <= $tmp2470;
frost$core$Bit $tmp2472 = (frost$core$Bit) {$tmp2471};
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block5; else goto block6;
block9:;
int64_t $tmp2474 = $tmp2462.value;
int64_t $tmp2475 = $tmp2463.value;
bool $tmp2476 = $tmp2474 < $tmp2475;
frost$core$Bit $tmp2477 = (frost$core$Bit) {$tmp2476};
bool $tmp2478 = $tmp2477.value;
if ($tmp2478) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1177
frost$collections$Array* $tmp2479 = *(&local2);
frost$core$Matcher* $tmp2480 = *(&local1);
frost$core$Int64 $tmp2481 = *(&local3);
frost$core$String* $tmp2482 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2480, $tmp2481);
frost$collections$Array$add$frost$collections$Array$T($tmp2479, ((frost$core$Object*) $tmp2482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$Int64 $tmp2483 = *(&local3);
int64_t $tmp2484 = $tmp2463.value;
int64_t $tmp2485 = $tmp2483.value;
int64_t $tmp2486 = $tmp2484 - $tmp2485;
frost$core$Int64 $tmp2487 = (frost$core$Int64) {$tmp2486};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2488 = $tmp2487.value;
frost$core$UInt64 $tmp2489 = (frost$core$UInt64) {((uint64_t) $tmp2488)};
if ($tmp2465) goto block12; else goto block13;
block12:;
uint64_t $tmp2490 = $tmp2489.value;
uint64_t $tmp2491 = $tmp2468.value;
bool $tmp2492 = $tmp2490 >= $tmp2491;
frost$core$Bit $tmp2493 = (frost$core$Bit) {$tmp2492};
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block10; else goto block6;
block13:;
uint64_t $tmp2495 = $tmp2489.value;
uint64_t $tmp2496 = $tmp2468.value;
bool $tmp2497 = $tmp2495 > $tmp2496;
frost$core$Bit $tmp2498 = (frost$core$Bit) {$tmp2497};
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block10; else goto block6;
block10:;
int64_t $tmp2500 = $tmp2483.value;
int64_t $tmp2501 = $tmp2466.value;
int64_t $tmp2502 = $tmp2500 + $tmp2501;
frost$core$Int64 $tmp2503 = (frost$core$Int64) {$tmp2502};
*(&local3) = $tmp2503;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1179
frost$core$Matcher* $tmp2504 = *(&local1);
frost$core$MutableString* $tmp2505 = *(&local0);
frost$collections$Array* $tmp2506 = *(&local2);
frost$core$Int8** $tmp2507 = &param2->pointer;
frost$core$Int8* $tmp2508 = *$tmp2507;
frost$core$Object** $tmp2509 = &param2->target;
frost$core$Object* $tmp2510 = *$tmp2509;
bool $tmp2511 = $tmp2510 != ((frost$core$Object*) NULL);
if ($tmp2511) goto block14; else goto block15;
block15:;
frost$core$Object* $tmp2513 = (($fn2512) $tmp2508)(((frost$collections$ListView*) $tmp2506));
*(&local4) = $tmp2513;
goto block16;
block14:;
frost$core$Object* $tmp2515 = (($fn2514) $tmp2508)($tmp2510, ((frost$collections$ListView*) $tmp2506));
*(&local4) = $tmp2515;
goto block16;
block16:;
frost$core$Object* $tmp2516 = *(&local4);
$fn2518 $tmp2517 = ($fn2518) $tmp2516->$class->vtable[0];
frost$core$String* $tmp2519 = $tmp2517($tmp2516);
frost$core$Bit $tmp2520 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2504, $tmp2505, $tmp2519, $tmp2520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
frost$core$Frost$unref$frost$core$Object$Q($tmp2516);
frost$collections$Array* $tmp2521 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1181
frost$core$Matcher* $tmp2522 = *(&local1);
frost$core$MutableString* $tmp2523 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from String.frost:1181:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Matcher.frost:171
frost$core$String** $tmp2524 = &$tmp2522->searchText;
frost$core$String* $tmp2525 = *$tmp2524;
frost$core$String$Index* $tmp2526 = &$tmp2522->replacementIndex;
frost$core$String$Index $tmp2527 = *$tmp2526;
frost$core$Bit $tmp2528 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2529 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2527, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2528);
frost$core$String* $tmp2530 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2525, $tmp2529);
frost$core$MutableString$append$frost$core$String($tmp2523, $tmp2530);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1182
frost$core$MutableString* $tmp2531 = *(&local0);
$fn2533 $tmp2532 = ($fn2533) ((frost$core$Object*) $tmp2531)->$class->vtable[0];
frost$core$String* $tmp2534 = $tmp2532(((frost$core$Object*) $tmp2531));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
frost$core$Matcher* $tmp2535 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2536 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2534;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1186
frost$core$Bit $tmp2537 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2538 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2538, param0, param1, $tmp2537);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2538)));
return ((frost$collections$Iterator*) $tmp2538);

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2539 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2539, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2539)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
return ((frost$collections$Iterator*) $tmp2539);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1194
frost$core$Bit $tmp2540 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.RegularExpression, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Match> from String.frost:1194:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2541 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2541, param0, param1, $tmp2540);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2541)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2541)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2541)));
return ((frost$collections$Iterator*) $tmp2541);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2542 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2542, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2542)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
return ((frost$collections$Iterator*) $tmp2542);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp2543 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2544 = &(&local1)->value;
*$tmp2544 = $tmp2543;
frost$core$String$Index $tmp2545 = *(&local1);
*(&local0) = $tmp2545;
frost$core$String$Index $tmp2546 = *(&local0);
return $tmp2546;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

frost$core$String$Index local0;
frost$core$String$Index local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp2547 = &param0->_length;
frost$core$Int64 $tmp2548 = *$tmp2547;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2549 = &(&local1)->value;
*$tmp2549 = $tmp2548;
frost$core$String$Index $tmp2550 = *(&local1);
*(&local0) = $tmp2550;
frost$core$String$Index $tmp2551 = *(&local0);
return $tmp2551;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1222
frost$core$Int64 $tmp2552 = param1.value;
frost$core$Int64* $tmp2553 = &param0->_length;
frost$core$Int64 $tmp2554 = *$tmp2553;
int64_t $tmp2555 = $tmp2552.value;
int64_t $tmp2556 = $tmp2554.value;
bool $tmp2557 = $tmp2555 < $tmp2556;
frost$core$Bit $tmp2558 = (frost$core$Bit) {$tmp2557};
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2560 = (frost$core$Int64) {1222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2561, $tmp2560);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1223
frost$core$Char8** $tmp2562 = &param0->data;
frost$core$Char8* $tmp2563 = *$tmp2562;
frost$core$Int64 $tmp2564 = param1.value;
int64_t $tmp2565 = $tmp2564.value;
frost$core$Char8 $tmp2566 = $tmp2563[$tmp2565];
uint8_t $tmp2567 = $tmp2566.value;
int64_t $tmp2568 = ((int64_t) $tmp2567) & 255u;
*(&local0) = $tmp2568;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1224
int64_t $tmp2569 = *(&local0);
bool $tmp2570 = $tmp2569 >= 240u;
frost$core$Bit $tmp2571 = (frost$core$Bit) {$tmp2570};
bool $tmp2572 = $tmp2571.value;
if ($tmp2572) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1225
frost$core$Int64 $tmp2573 = param1.value;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {4u};
int64_t $tmp2575 = $tmp2573.value;
int64_t $tmp2576 = $tmp2574.value;
int64_t $tmp2577 = $tmp2575 + $tmp2576;
frost$core$Int64 $tmp2578 = (frost$core$Int64) {$tmp2577};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1225:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2579 = &(&local2)->value;
*$tmp2579 = $tmp2578;
frost$core$String$Index $tmp2580 = *(&local2);
*(&local1) = $tmp2580;
frost$core$String$Index $tmp2581 = *(&local1);
return $tmp2581;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1227
int64_t $tmp2582 = *(&local0);
bool $tmp2583 = $tmp2582 >= 224u;
frost$core$Bit $tmp2584 = (frost$core$Bit) {$tmp2583};
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1228
frost$core$Int64 $tmp2586 = param1.value;
frost$core$Int64 $tmp2587 = (frost$core$Int64) {3u};
int64_t $tmp2588 = $tmp2586.value;
int64_t $tmp2589 = $tmp2587.value;
int64_t $tmp2590 = $tmp2588 + $tmp2589;
frost$core$Int64 $tmp2591 = (frost$core$Int64) {$tmp2590};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1228:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2592 = &(&local4)->value;
*$tmp2592 = $tmp2591;
frost$core$String$Index $tmp2593 = *(&local4);
*(&local3) = $tmp2593;
frost$core$String$Index $tmp2594 = *(&local3);
return $tmp2594;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1230
int64_t $tmp2595 = *(&local0);
bool $tmp2596 = $tmp2595 >= 192u;
frost$core$Bit $tmp2597 = (frost$core$Bit) {$tmp2596};
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1231
frost$core$Int64 $tmp2599 = param1.value;
frost$core$Int64 $tmp2600 = (frost$core$Int64) {2u};
int64_t $tmp2601 = $tmp2599.value;
int64_t $tmp2602 = $tmp2600.value;
int64_t $tmp2603 = $tmp2601 + $tmp2602;
frost$core$Int64 $tmp2604 = (frost$core$Int64) {$tmp2603};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1231:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2605 = &(&local6)->value;
*$tmp2605 = $tmp2604;
frost$core$String$Index $tmp2606 = *(&local6);
*(&local5) = $tmp2606;
frost$core$String$Index $tmp2607 = *(&local5);
return $tmp2607;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1233
frost$core$Int64 $tmp2608 = param1.value;
frost$core$Int64 $tmp2609 = (frost$core$Int64) {1u};
int64_t $tmp2610 = $tmp2608.value;
int64_t $tmp2611 = $tmp2609.value;
int64_t $tmp2612 = $tmp2610 + $tmp2611;
frost$core$Int64 $tmp2613 = (frost$core$Int64) {$tmp2612};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1233:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2614 = &(&local8)->value;
*$tmp2614 = $tmp2613;
frost$core$String$Index $tmp2615 = *(&local8);
*(&local7) = $tmp2615;
frost$core$String$Index $tmp2616 = *(&local7);
return $tmp2616;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1243
frost$core$Int64 $tmp2617 = param1.value;
frost$core$Int64 $tmp2618 = (frost$core$Int64) {0u};
int64_t $tmp2619 = $tmp2617.value;
int64_t $tmp2620 = $tmp2618.value;
bool $tmp2621 = $tmp2619 > $tmp2620;
frost$core$Bit $tmp2622 = (frost$core$Bit) {$tmp2621};
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2624 = (frost$core$Int64) {1243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2625, $tmp2624);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1244
frost$core$Int64 $tmp2626 = param1.value;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {1u};
int64_t $tmp2628 = $tmp2626.value;
int64_t $tmp2629 = $tmp2627.value;
int64_t $tmp2630 = $tmp2628 - $tmp2629;
frost$core$Int64 $tmp2631 = (frost$core$Int64) {$tmp2630};
*(&local0) = $tmp2631;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1245
goto block3;
block3:;
frost$core$Char8** $tmp2632 = &param0->data;
frost$core$Char8* $tmp2633 = *$tmp2632;
frost$core$Int64 $tmp2634 = *(&local0);
int64_t $tmp2635 = $tmp2634.value;
frost$core$Char8 $tmp2636 = $tmp2633[$tmp2635];
uint8_t $tmp2637 = $tmp2636.value;
int64_t $tmp2638 = ((int64_t) $tmp2637) & 255u;
bool $tmp2639 = $tmp2638 >= 128u;
frost$core$Bit $tmp2640 = (frost$core$Bit) {$tmp2639};
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp2642 = &param0->data;
frost$core$Char8* $tmp2643 = *$tmp2642;
frost$core$Int64 $tmp2644 = *(&local0);
int64_t $tmp2645 = $tmp2644.value;
frost$core$Char8 $tmp2646 = $tmp2643[$tmp2645];
uint8_t $tmp2647 = $tmp2646.value;
int64_t $tmp2648 = ((int64_t) $tmp2647) & 255u;
bool $tmp2649 = $tmp2648 < 192u;
frost$core$Bit $tmp2650 = (frost$core$Bit) {$tmp2649};
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1247
frost$core$Int64 $tmp2652 = *(&local0);
frost$core$Int64 $tmp2653 = (frost$core$Int64) {1u};
int64_t $tmp2654 = $tmp2652.value;
int64_t $tmp2655 = $tmp2653.value;
int64_t $tmp2656 = $tmp2654 - $tmp2655;
frost$core$Int64 $tmp2657 = (frost$core$Int64) {$tmp2656};
*(&local0) = $tmp2657;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1249
frost$core$Int64 $tmp2658 = *(&local0);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1249:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp2659 = &(&local2)->value;
*$tmp2659 = $tmp2658;
frost$core$String$Index $tmp2660 = *(&local2);
*(&local1) = $tmp2660;
frost$core$String$Index $tmp2661 = *(&local1);
return $tmp2661;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1259
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1260
frost$core$Int64 $tmp2662 = (frost$core$Int64) {0u};
int64_t $tmp2663 = param2.value;
int64_t $tmp2664 = $tmp2662.value;
bool $tmp2665 = $tmp2663 > $tmp2664;
frost$core$Bit $tmp2666 = (frost$core$Bit) {$tmp2665};
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1261
frost$core$Int64 $tmp2668 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2669 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2670 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2668, param2, $tmp2669);
frost$core$Int64 $tmp2671 = $tmp2670.min;
*(&local1) = $tmp2671;
frost$core$Int64 $tmp2672 = $tmp2670.max;
frost$core$Bit $tmp2673 = $tmp2670.inclusive;
bool $tmp2674 = $tmp2673.value;
frost$core$Int64 $tmp2675 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2676 = $tmp2675.value;
frost$core$UInt64 $tmp2677 = (frost$core$UInt64) {((uint64_t) $tmp2676)};
if ($tmp2674) goto block8; else goto block9;
block8:;
int64_t $tmp2678 = $tmp2671.value;
int64_t $tmp2679 = $tmp2672.value;
bool $tmp2680 = $tmp2678 <= $tmp2679;
frost$core$Bit $tmp2681 = (frost$core$Bit) {$tmp2680};
bool $tmp2682 = $tmp2681.value;
if ($tmp2682) goto block5; else goto block6;
block9:;
int64_t $tmp2683 = $tmp2671.value;
int64_t $tmp2684 = $tmp2672.value;
bool $tmp2685 = $tmp2683 < $tmp2684;
frost$core$Bit $tmp2686 = (frost$core$Bit) {$tmp2685};
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1262
frost$core$String$Index $tmp2688 = *(&local0);
frost$core$String$Index $tmp2689 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2688);
*(&local0) = $tmp2689;
frost$core$Int64 $tmp2690 = *(&local1);
int64_t $tmp2691 = $tmp2672.value;
int64_t $tmp2692 = $tmp2690.value;
int64_t $tmp2693 = $tmp2691 - $tmp2692;
frost$core$Int64 $tmp2694 = (frost$core$Int64) {$tmp2693};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2695 = $tmp2694.value;
frost$core$UInt64 $tmp2696 = (frost$core$UInt64) {((uint64_t) $tmp2695)};
if ($tmp2674) goto block12; else goto block13;
block12:;
uint64_t $tmp2697 = $tmp2696.value;
uint64_t $tmp2698 = $tmp2677.value;
bool $tmp2699 = $tmp2697 >= $tmp2698;
frost$core$Bit $tmp2700 = (frost$core$Bit) {$tmp2699};
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block10; else goto block6;
block13:;
uint64_t $tmp2702 = $tmp2696.value;
uint64_t $tmp2703 = $tmp2677.value;
bool $tmp2704 = $tmp2702 > $tmp2703;
frost$core$Bit $tmp2705 = (frost$core$Bit) {$tmp2704};
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block10; else goto block6;
block10:;
int64_t $tmp2707 = $tmp2690.value;
int64_t $tmp2708 = $tmp2675.value;
int64_t $tmp2709 = $tmp2707 + $tmp2708;
frost$core$Int64 $tmp2710 = (frost$core$Int64) {$tmp2709};
*(&local1) = $tmp2710;
goto block5;
block6:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1266
frost$core$Int64 $tmp2711 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp2712 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp2713 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2714 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2711, param2, $tmp2712, $tmp2713);
frost$core$Int64 $tmp2715 = $tmp2714.start;
*(&local2) = $tmp2715;
frost$core$Int64 $tmp2716 = $tmp2714.end;
frost$core$Int64 $tmp2717 = $tmp2714.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2718 = $tmp2717.value;
frost$core$UInt64 $tmp2719 = (frost$core$UInt64) {((uint64_t) $tmp2718)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1266:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp2720 = $tmp2717.value;
int64_t $tmp2721 = -$tmp2720;
frost$core$Int64 $tmp2722 = (frost$core$Int64) {$tmp2721};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2723 = $tmp2722.value;
frost$core$UInt64 $tmp2724 = (frost$core$UInt64) {((uint64_t) $tmp2723)};
frost$core$Bit $tmp2725 = $tmp2714.inclusive;
bool $tmp2726 = $tmp2725.value;
frost$core$Int64 $tmp2727 = (frost$core$Int64) {0u};
int64_t $tmp2728 = $tmp2717.value;
int64_t $tmp2729 = $tmp2727.value;
bool $tmp2730 = $tmp2728 >= $tmp2729;
frost$core$Bit $tmp2731 = (frost$core$Bit) {$tmp2730};
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block20; else goto block21;
block20:;
if ($tmp2726) goto block22; else goto block23;
block22:;
int64_t $tmp2733 = $tmp2715.value;
int64_t $tmp2734 = $tmp2716.value;
bool $tmp2735 = $tmp2733 <= $tmp2734;
frost$core$Bit $tmp2736 = (frost$core$Bit) {$tmp2735};
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block17; else goto block18;
block23:;
int64_t $tmp2738 = $tmp2715.value;
int64_t $tmp2739 = $tmp2716.value;
bool $tmp2740 = $tmp2738 < $tmp2739;
frost$core$Bit $tmp2741 = (frost$core$Bit) {$tmp2740};
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block17; else goto block18;
block21:;
if ($tmp2726) goto block24; else goto block25;
block24:;
int64_t $tmp2743 = $tmp2715.value;
int64_t $tmp2744 = $tmp2716.value;
bool $tmp2745 = $tmp2743 >= $tmp2744;
frost$core$Bit $tmp2746 = (frost$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block17; else goto block18;
block25:;
int64_t $tmp2748 = $tmp2715.value;
int64_t $tmp2749 = $tmp2716.value;
bool $tmp2750 = $tmp2748 > $tmp2749;
frost$core$Bit $tmp2751 = (frost$core$Bit) {$tmp2750};
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1267
frost$core$String$Index $tmp2753 = *(&local0);
frost$core$String$Index $tmp2754 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2753);
*(&local0) = $tmp2754;
frost$core$Int64 $tmp2755 = *(&local2);
if ($tmp2732) goto block27; else goto block28;
block27:;
int64_t $tmp2756 = $tmp2716.value;
int64_t $tmp2757 = $tmp2755.value;
int64_t $tmp2758 = $tmp2756 - $tmp2757;
frost$core$Int64 $tmp2759 = (frost$core$Int64) {$tmp2758};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2760 = $tmp2759.value;
frost$core$UInt64 $tmp2761 = (frost$core$UInt64) {((uint64_t) $tmp2760)};
if ($tmp2726) goto block30; else goto block31;
block30:;
uint64_t $tmp2762 = $tmp2761.value;
uint64_t $tmp2763 = $tmp2719.value;
bool $tmp2764 = $tmp2762 >= $tmp2763;
frost$core$Bit $tmp2765 = (frost$core$Bit) {$tmp2764};
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block26; else goto block18;
block31:;
uint64_t $tmp2767 = $tmp2761.value;
uint64_t $tmp2768 = $tmp2719.value;
bool $tmp2769 = $tmp2767 > $tmp2768;
frost$core$Bit $tmp2770 = (frost$core$Bit) {$tmp2769};
bool $tmp2771 = $tmp2770.value;
if ($tmp2771) goto block26; else goto block18;
block28:;
int64_t $tmp2772 = $tmp2755.value;
int64_t $tmp2773 = $tmp2716.value;
int64_t $tmp2774 = $tmp2772 - $tmp2773;
frost$core$Int64 $tmp2775 = (frost$core$Int64) {$tmp2774};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2776 = $tmp2775.value;
frost$core$UInt64 $tmp2777 = (frost$core$UInt64) {((uint64_t) $tmp2776)};
if ($tmp2726) goto block33; else goto block34;
block33:;
uint64_t $tmp2778 = $tmp2777.value;
uint64_t $tmp2779 = $tmp2724.value;
bool $tmp2780 = $tmp2778 >= $tmp2779;
frost$core$Bit $tmp2781 = (frost$core$Bit) {$tmp2780};
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block26; else goto block18;
block34:;
uint64_t $tmp2783 = $tmp2777.value;
uint64_t $tmp2784 = $tmp2724.value;
bool $tmp2785 = $tmp2783 > $tmp2784;
frost$core$Bit $tmp2786 = (frost$core$Bit) {$tmp2785};
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block26; else goto block18;
block26:;
int64_t $tmp2788 = $tmp2755.value;
int64_t $tmp2789 = $tmp2717.value;
int64_t $tmp2790 = $tmp2788 + $tmp2789;
frost$core$Int64 $tmp2791 = (frost$core$Int64) {$tmp2790};
*(&local2) = $tmp2791;
goto block17;
block18:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1270
frost$core$String$Index $tmp2792 = *(&local0);
return $tmp2792;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1283
frost$core$Int32 $tmp2793 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2794 = frost$core$Char32$init$frost$core$Int32($tmp2793);
frost$core$String* $tmp2795 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
return $tmp2795;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1297
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1297:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2796 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2796->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2796 = $tmp2796->next;
}
$fn2798 $tmp2797 = $tmp2796->methods[0];
frost$collections$Iterator* $tmp2799 = $tmp2797(((frost$collections$Iterable*) param0));
ITable* $tmp2800 = $tmp2799->$class->itable;
while ($tmp2800->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2800 = $tmp2800->next;
}
$fn2802 $tmp2801 = $tmp2800->methods[2];
frost$core$Int64 $tmp2803 = $tmp2801($tmp2799);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
int64_t $tmp2804 = $tmp2803.value;
int64_t $tmp2805 = param1.value;
bool $tmp2806 = $tmp2804 >= $tmp2805;
frost$core$Bit $tmp2807 = (frost$core$Bit) {$tmp2806};
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1300
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1300:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2809 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2809->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2809 = $tmp2809->next;
}
$fn2811 $tmp2810 = $tmp2809->methods[0];
frost$collections$Iterator* $tmp2812 = $tmp2810(((frost$collections$Iterable*) param0));
ITable* $tmp2813 = $tmp2812->$class->itable;
while ($tmp2813->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2813 = $tmp2813->next;
}
$fn2815 $tmp2814 = $tmp2813->methods[2];
frost$core$Int64 $tmp2816 = $tmp2814($tmp2812);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
int64_t $tmp2817 = param1.value;
int64_t $tmp2818 = $tmp2816.value;
int64_t $tmp2819 = $tmp2817 - $tmp2818;
frost$core$Int64 $tmp2820 = (frost$core$Int64) {$tmp2819};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int64):frost.core.String from String.frost:1300:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2821 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2821);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$core$MutableString* $tmp2822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local0) = $tmp2821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:65
frost$core$Int64 $tmp2823 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2824 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2825 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2823, $tmp2820, $tmp2824);
frost$core$Int64 $tmp2826 = $tmp2825.min;
*(&local1) = $tmp2826;
frost$core$Int64 $tmp2827 = $tmp2825.max;
frost$core$Bit $tmp2828 = $tmp2825.inclusive;
bool $tmp2829 = $tmp2828.value;
frost$core$Int64 $tmp2830 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2831 = $tmp2830.value;
frost$core$UInt64 $tmp2832 = (frost$core$UInt64) {((uint64_t) $tmp2831)};
if ($tmp2829) goto block10; else goto block11;
block10:;
int64_t $tmp2833 = $tmp2826.value;
int64_t $tmp2834 = $tmp2827.value;
bool $tmp2835 = $tmp2833 <= $tmp2834;
frost$core$Bit $tmp2836 = (frost$core$Bit) {$tmp2835};
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block7; else goto block8;
block11:;
int64_t $tmp2838 = $tmp2826.value;
int64_t $tmp2839 = $tmp2827.value;
bool $tmp2840 = $tmp2838 < $tmp2839;
frost$core$Bit $tmp2841 = (frost$core$Bit) {$tmp2840};
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2843 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2843, param2);
frost$core$Int64 $tmp2844 = *(&local1);
int64_t $tmp2845 = $tmp2827.value;
int64_t $tmp2846 = $tmp2844.value;
int64_t $tmp2847 = $tmp2845 - $tmp2846;
frost$core$Int64 $tmp2848 = (frost$core$Int64) {$tmp2847};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2849 = $tmp2848.value;
frost$core$UInt64 $tmp2850 = (frost$core$UInt64) {((uint64_t) $tmp2849)};
if ($tmp2829) goto block14; else goto block15;
block14:;
uint64_t $tmp2851 = $tmp2850.value;
uint64_t $tmp2852 = $tmp2832.value;
bool $tmp2853 = $tmp2851 >= $tmp2852;
frost$core$Bit $tmp2854 = (frost$core$Bit) {$tmp2853};
bool $tmp2855 = $tmp2854.value;
if ($tmp2855) goto block12; else goto block8;
block15:;
uint64_t $tmp2856 = $tmp2850.value;
uint64_t $tmp2857 = $tmp2832.value;
bool $tmp2858 = $tmp2856 > $tmp2857;
frost$core$Bit $tmp2859 = (frost$core$Bit) {$tmp2858};
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block12; else goto block8;
block12:;
int64_t $tmp2861 = $tmp2844.value;
int64_t $tmp2862 = $tmp2830.value;
int64_t $tmp2863 = $tmp2861 + $tmp2862;
frost$core$Int64 $tmp2864 = (frost$core$Int64) {$tmp2863};
*(&local1) = $tmp2864;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2865 = *(&local0);
frost$core$String* $tmp2866 = frost$core$MutableString$finish$R$frost$core$String($tmp2865);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$core$MutableString* $tmp2867 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
return $tmp2868;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1313
frost$core$Int32 $tmp2869 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2870 = frost$core$Char32$init$frost$core$Int32($tmp2869);
frost$core$String* $tmp2871 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
return $tmp2871;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1327
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1327:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2872 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2872->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2872 = $tmp2872->next;
}
$fn2874 $tmp2873 = $tmp2872->methods[0];
frost$collections$Iterator* $tmp2875 = $tmp2873(((frost$collections$Iterable*) param0));
ITable* $tmp2876 = $tmp2875->$class->itable;
while ($tmp2876->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2876 = $tmp2876->next;
}
$fn2878 $tmp2877 = $tmp2876->methods[2];
frost$core$Int64 $tmp2879 = $tmp2877($tmp2875);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
int64_t $tmp2880 = $tmp2879.value;
int64_t $tmp2881 = param1.value;
bool $tmp2882 = $tmp2880 >= $tmp2881;
frost$core$Bit $tmp2883 = (frost$core$Bit) {$tmp2882};
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1330
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1330:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2885 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2885->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2885 = $tmp2885->next;
}
$fn2887 $tmp2886 = $tmp2885->methods[0];
frost$collections$Iterator* $tmp2888 = $tmp2886(((frost$collections$Iterable*) param0));
ITable* $tmp2889 = $tmp2888->$class->itable;
while ($tmp2889->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2889 = $tmp2889->next;
}
$fn2891 $tmp2890 = $tmp2889->methods[2];
frost$core$Int64 $tmp2892 = $tmp2890($tmp2888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
int64_t $tmp2893 = param1.value;
int64_t $tmp2894 = $tmp2892.value;
int64_t $tmp2895 = $tmp2893 - $tmp2894;
frost$core$Int64 $tmp2896 = (frost$core$Int64) {$tmp2895};
// begin inline call to function frost.core.Char32.*(count:frost.core.Int64):frost.core.String from String.frost:1330:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2897 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2897);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$MutableString* $tmp2898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local0) = $tmp2897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:65
frost$core$Int64 $tmp2899 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2900 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2901 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2899, $tmp2896, $tmp2900);
frost$core$Int64 $tmp2902 = $tmp2901.min;
*(&local1) = $tmp2902;
frost$core$Int64 $tmp2903 = $tmp2901.max;
frost$core$Bit $tmp2904 = $tmp2901.inclusive;
bool $tmp2905 = $tmp2904.value;
frost$core$Int64 $tmp2906 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2907 = $tmp2906.value;
frost$core$UInt64 $tmp2908 = (frost$core$UInt64) {((uint64_t) $tmp2907)};
if ($tmp2905) goto block10; else goto block11;
block10:;
int64_t $tmp2909 = $tmp2902.value;
int64_t $tmp2910 = $tmp2903.value;
bool $tmp2911 = $tmp2909 <= $tmp2910;
frost$core$Bit $tmp2912 = (frost$core$Bit) {$tmp2911};
bool $tmp2913 = $tmp2912.value;
if ($tmp2913) goto block7; else goto block8;
block11:;
int64_t $tmp2914 = $tmp2902.value;
int64_t $tmp2915 = $tmp2903.value;
bool $tmp2916 = $tmp2914 < $tmp2915;
frost$core$Bit $tmp2917 = (frost$core$Bit) {$tmp2916};
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp2919 = *(&local0);
frost$core$MutableString$append$frost$core$Char32($tmp2919, param2);
frost$core$Int64 $tmp2920 = *(&local1);
int64_t $tmp2921 = $tmp2903.value;
int64_t $tmp2922 = $tmp2920.value;
int64_t $tmp2923 = $tmp2921 - $tmp2922;
frost$core$Int64 $tmp2924 = (frost$core$Int64) {$tmp2923};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2925 = $tmp2924.value;
frost$core$UInt64 $tmp2926 = (frost$core$UInt64) {((uint64_t) $tmp2925)};
if ($tmp2905) goto block14; else goto block15;
block14:;
uint64_t $tmp2927 = $tmp2926.value;
uint64_t $tmp2928 = $tmp2908.value;
bool $tmp2929 = $tmp2927 >= $tmp2928;
frost$core$Bit $tmp2930 = (frost$core$Bit) {$tmp2929};
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block12; else goto block8;
block15:;
uint64_t $tmp2932 = $tmp2926.value;
uint64_t $tmp2933 = $tmp2908.value;
bool $tmp2934 = $tmp2932 > $tmp2933;
frost$core$Bit $tmp2935 = (frost$core$Bit) {$tmp2934};
bool $tmp2936 = $tmp2935.value;
if ($tmp2936) goto block12; else goto block8;
block12:;
int64_t $tmp2937 = $tmp2920.value;
int64_t $tmp2938 = $tmp2906.value;
int64_t $tmp2939 = $tmp2937 + $tmp2938;
frost$core$Int64 $tmp2940 = (frost$core$Int64) {$tmp2939};
*(&local1) = $tmp2940;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp2941 = *(&local0);
frost$core$String* $tmp2942 = frost$core$MutableString$finish$R$frost$core$String($tmp2941);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
frost$core$MutableString* $tmp2943 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2942, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
return $tmp2944;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1345
frost$core$Int32 $tmp2945 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp2946 = frost$core$Char32$init$frost$core$Int32($tmp2945);
frost$core$String* $tmp2947 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
return $tmp2947;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$MutableString* local3 = NULL;
frost$core$Int64 local4;
frost$core$MutableString* local5 = NULL;
frost$core$Int64 local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1361
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1361:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2948 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2948->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2948 = $tmp2948->next;
}
$fn2950 $tmp2949 = $tmp2948->methods[0];
frost$collections$Iterator* $tmp2951 = $tmp2949(((frost$collections$Iterable*) param0));
ITable* $tmp2952 = $tmp2951->$class->itable;
while ($tmp2952->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2952 = $tmp2952->next;
}
$fn2954 $tmp2953 = $tmp2952->methods[2];
frost$core$Int64 $tmp2955 = $tmp2953($tmp2951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
int64_t $tmp2956 = $tmp2955.value;
int64_t $tmp2957 = param1.value;
bool $tmp2958 = $tmp2956 >= $tmp2957;
frost$core$Bit $tmp2959 = (frost$core$Bit) {$tmp2958};
bool $tmp2960 = $tmp2959.value;
if ($tmp2960) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1364
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from String.frost:1364:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:485
ITable* $tmp2961 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2961->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2961 = $tmp2961->next;
}
$fn2963 $tmp2962 = $tmp2961->methods[0];
frost$collections$Iterator* $tmp2964 = $tmp2962(((frost$collections$Iterable*) param0));
ITable* $tmp2965 = $tmp2964->$class->itable;
while ($tmp2965->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2965 = $tmp2965->next;
}
$fn2967 $tmp2966 = $tmp2965->methods[2];
frost$core$Int64 $tmp2968 = $tmp2966($tmp2964);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
int64_t $tmp2969 = param1.value;
int64_t $tmp2970 = $tmp2968.value;
int64_t $tmp2971 = $tmp2969 - $tmp2970;
frost$core$Int64 $tmp2972 = (frost$core$Int64) {$tmp2971};
*(&local0) = $tmp2972;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1365
frost$core$Int64 $tmp2973 = *(&local0);
frost$core$Int64 $tmp2974 = (frost$core$Int64) {2u};
int64_t $tmp2975 = $tmp2973.value;
int64_t $tmp2976 = $tmp2974.value;
int64_t $tmp2977 = $tmp2975 / $tmp2976;
frost$core$Int64 $tmp2978 = (frost$core$Int64) {$tmp2977};
*(&local1) = $tmp2978;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1366
frost$core$Int64 $tmp2979 = *(&local0);
frost$core$Int64 $tmp2980 = *(&local1);
int64_t $tmp2981 = $tmp2979.value;
int64_t $tmp2982 = $tmp2980.value;
int64_t $tmp2983 = $tmp2981 - $tmp2982;
frost$core$Int64 $tmp2984 = (frost$core$Int64) {$tmp2983};
*(&local2) = $tmp2984;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1367
frost$core$Int64 $tmp2985 = *(&local1);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int64):frost.core.String from String.frost:1367:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2986 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2986);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
frost$core$MutableString* $tmp2987 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local3) = $tmp2986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:65
frost$core$Int64 $tmp2988 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2989 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2990 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2988, $tmp2985, $tmp2989);
frost$core$Int64 $tmp2991 = $tmp2990.min;
*(&local4) = $tmp2991;
frost$core$Int64 $tmp2992 = $tmp2990.max;
frost$core$Bit $tmp2993 = $tmp2990.inclusive;
bool $tmp2994 = $tmp2993.value;
frost$core$Int64 $tmp2995 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2996 = $tmp2995.value;
frost$core$UInt64 $tmp2997 = (frost$core$UInt64) {((uint64_t) $tmp2996)};
if ($tmp2994) goto block10; else goto block11;
block10:;
int64_t $tmp2998 = $tmp2991.value;
int64_t $tmp2999 = $tmp2992.value;
bool $tmp3000 = $tmp2998 <= $tmp2999;
frost$core$Bit $tmp3001 = (frost$core$Bit) {$tmp3000};
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block7; else goto block8;
block11:;
int64_t $tmp3003 = $tmp2991.value;
int64_t $tmp3004 = $tmp2992.value;
bool $tmp3005 = $tmp3003 < $tmp3004;
frost$core$Bit $tmp3006 = (frost$core$Bit) {$tmp3005};
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp3008 = *(&local3);
frost$core$MutableString$append$frost$core$Char32($tmp3008, param2);
frost$core$Int64 $tmp3009 = *(&local4);
int64_t $tmp3010 = $tmp2992.value;
int64_t $tmp3011 = $tmp3009.value;
int64_t $tmp3012 = $tmp3010 - $tmp3011;
frost$core$Int64 $tmp3013 = (frost$core$Int64) {$tmp3012};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3014 = $tmp3013.value;
frost$core$UInt64 $tmp3015 = (frost$core$UInt64) {((uint64_t) $tmp3014)};
if ($tmp2994) goto block14; else goto block15;
block14:;
uint64_t $tmp3016 = $tmp3015.value;
uint64_t $tmp3017 = $tmp2997.value;
bool $tmp3018 = $tmp3016 >= $tmp3017;
frost$core$Bit $tmp3019 = (frost$core$Bit) {$tmp3018};
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block12; else goto block8;
block15:;
uint64_t $tmp3021 = $tmp3015.value;
uint64_t $tmp3022 = $tmp2997.value;
bool $tmp3023 = $tmp3021 > $tmp3022;
frost$core$Bit $tmp3024 = (frost$core$Bit) {$tmp3023};
bool $tmp3025 = $tmp3024.value;
if ($tmp3025) goto block12; else goto block8;
block12:;
int64_t $tmp3026 = $tmp3009.value;
int64_t $tmp3027 = $tmp2995.value;
int64_t $tmp3028 = $tmp3026 + $tmp3027;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {$tmp3028};
*(&local4) = $tmp3029;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp3030 = *(&local3);
frost$core$String* $tmp3031 = frost$core$MutableString$finish$R$frost$core$String($tmp3030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$MutableString* $tmp3032 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp3033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3031, param0);
frost$core$Int64 $tmp3034 = *(&local2);
// begin inline call to function frost.core.Char32.*(count:frost.core.Int64):frost.core.String from String.frost:1367:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:64
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp3035 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp3035);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
frost$core$MutableString* $tmp3036 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local5) = $tmp3035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:65
frost$core$Int64 $tmp3037 = (frost$core$Int64) {0u};
frost$core$Bit $tmp3038 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp3039 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3037, $tmp3034, $tmp3038);
frost$core$Int64 $tmp3040 = $tmp3039.min;
*(&local6) = $tmp3040;
frost$core$Int64 $tmp3041 = $tmp3039.max;
frost$core$Bit $tmp3042 = $tmp3039.inclusive;
bool $tmp3043 = $tmp3042.value;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3045 = $tmp3044.value;
frost$core$UInt64 $tmp3046 = (frost$core$UInt64) {((uint64_t) $tmp3045)};
if ($tmp3043) goto block21; else goto block22;
block21:;
int64_t $tmp3047 = $tmp3040.value;
int64_t $tmp3048 = $tmp3041.value;
bool $tmp3049 = $tmp3047 <= $tmp3048;
frost$core$Bit $tmp3050 = (frost$core$Bit) {$tmp3049};
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block18; else goto block19;
block22:;
int64_t $tmp3052 = $tmp3040.value;
int64_t $tmp3053 = $tmp3041.value;
bool $tmp3054 = $tmp3052 < $tmp3053;
frost$core$Bit $tmp3055 = (frost$core$Bit) {$tmp3054};
bool $tmp3056 = $tmp3055.value;
if ($tmp3056) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:66
frost$core$MutableString* $tmp3057 = *(&local5);
frost$core$MutableString$append$frost$core$Char32($tmp3057, param2);
frost$core$Int64 $tmp3058 = *(&local6);
int64_t $tmp3059 = $tmp3041.value;
int64_t $tmp3060 = $tmp3058.value;
int64_t $tmp3061 = $tmp3059 - $tmp3060;
frost$core$Int64 $tmp3062 = (frost$core$Int64) {$tmp3061};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3063 = $tmp3062.value;
frost$core$UInt64 $tmp3064 = (frost$core$UInt64) {((uint64_t) $tmp3063)};
if ($tmp3043) goto block25; else goto block26;
block25:;
uint64_t $tmp3065 = $tmp3064.value;
uint64_t $tmp3066 = $tmp3046.value;
bool $tmp3067 = $tmp3065 >= $tmp3066;
frost$core$Bit $tmp3068 = (frost$core$Bit) {$tmp3067};
bool $tmp3069 = $tmp3068.value;
if ($tmp3069) goto block23; else goto block19;
block26:;
uint64_t $tmp3070 = $tmp3064.value;
uint64_t $tmp3071 = $tmp3046.value;
bool $tmp3072 = $tmp3070 > $tmp3071;
frost$core$Bit $tmp3073 = (frost$core$Bit) {$tmp3072};
bool $tmp3074 = $tmp3073.value;
if ($tmp3074) goto block23; else goto block19;
block23:;
int64_t $tmp3075 = $tmp3058.value;
int64_t $tmp3076 = $tmp3044.value;
int64_t $tmp3077 = $tmp3075 + $tmp3076;
frost$core$Int64 $tmp3078 = (frost$core$Int64) {$tmp3077};
*(&local6) = $tmp3078;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:68
frost$core$MutableString* $tmp3079 = *(&local5);
frost$core$String* $tmp3080 = frost$core$MutableString$finish$R$frost$core$String($tmp3079);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
frost$core$MutableString* $tmp3081 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp3082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3033, $tmp3080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
return $tmp3082;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1378
frost$core$Int64 $tmp3083 = (frost$core$Int64) {9223372036854775807u};
frost$collections$Array* $tmp3084 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3083);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
return $tmp3084;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index$nullable local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1391
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3085 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3085);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
frost$collections$Array* $tmp3086 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
*(&local0) = $tmp3085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1392
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1392:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp3087 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp3088 = &(&local2)->value;
*$tmp3088 = $tmp3087;
frost$core$String$Index $tmp3089 = *(&local2);
*(&local1) = $tmp3089;
frost$core$String$Index $tmp3090 = *(&local1);
*(&local3) = $tmp3090;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1393
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1394
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1395
frost$core$Int64* $tmp3091 = &param1->_length;
frost$core$Int64 $tmp3092 = *$tmp3091;
frost$core$Int64 $tmp3093 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:1395:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp3094 = $tmp3092.value;
int64_t $tmp3095 = $tmp3093.value;
bool $tmp3096 = $tmp3094 == $tmp3095;
frost$core$Bit $tmp3097 = (frost$core$Bit) {$tmp3096};
bool $tmp3098 = $tmp3097.value;
if ($tmp3098) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1396
frost$core$String$Index $tmp3099 = *(&local3);
frost$core$String$Index $tmp3100 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp3099);
*(&local4) = ((frost$core$String$Index$nullable) { $tmp3100, true });
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1399
frost$core$String$Index $tmp3101 = *(&local3);
frost$core$String$Index$nullable $tmp3102 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp3101);
*(&local4) = $tmp3102;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1401
frost$core$String$Index$nullable $tmp3103 = *(&local4);
frost$core$Bit $tmp3104 = (frost$core$Bit) {!$tmp3103.nonnull};
bool $tmp3105 = $tmp3104.value;
if ($tmp3105) goto block9; else goto block11;
block11:;
frost$collections$Array* $tmp3106 = *(&local0);
ITable* $tmp3107 = ((frost$collections$CollectionView*) $tmp3106)->$class->itable;
while ($tmp3107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3107 = $tmp3107->next;
}
$fn3109 $tmp3108 = $tmp3107->methods[0];
frost$core$Int64 $tmp3110 = $tmp3108(((frost$collections$CollectionView*) $tmp3106));
frost$core$Int64 $tmp3111 = (frost$core$Int64) {1u};
int64_t $tmp3112 = param2.value;
int64_t $tmp3113 = $tmp3111.value;
int64_t $tmp3114 = $tmp3112 - $tmp3113;
frost$core$Int64 $tmp3115 = (frost$core$Int64) {$tmp3114};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:1401:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp3116 = $tmp3110.value;
int64_t $tmp3117 = $tmp3115.value;
bool $tmp3118 = $tmp3116 == $tmp3117;
frost$core$Bit $tmp3119 = (frost$core$Bit) {$tmp3118};
bool $tmp3120 = $tmp3119.value;
if ($tmp3120) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1402
frost$collections$Array* $tmp3121 = *(&local0);
frost$core$String$Index $tmp3122 = *(&local3);
frost$core$Bit $tmp3123 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3124 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3122, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3123);
frost$core$String* $tmp3125 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3124);
frost$collections$Array$add$frost$collections$Array$T($tmp3121, ((frost$core$Object*) $tmp3125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1403
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1408
frost$collections$Array* $tmp3126 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
frost$collections$Array* $tmp3127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3126;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1405
frost$collections$Array* $tmp3128 = *(&local0);
frost$core$String$Index $tmp3129 = *(&local3);
frost$core$String$Index$nullable $tmp3130 = *(&local4);
frost$core$Bit $tmp3131 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3132 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3129, ((frost$core$String$Index) $tmp3130.value), $tmp3131);
frost$core$String* $tmp3133 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3132);
frost$collections$Array$add$frost$collections$Array$T($tmp3128, ((frost$core$Object*) $tmp3133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1406
frost$core$String$Index$nullable $tmp3134 = *(&local4);
frost$core$Int64 $tmp3135 = ((frost$core$String$Index) $tmp3134.value).value;
frost$core$Int64* $tmp3136 = &param1->_length;
frost$core$Int64 $tmp3137 = *$tmp3136;
int64_t $tmp3138 = $tmp3135.value;
int64_t $tmp3139 = $tmp3137.value;
int64_t $tmp3140 = $tmp3138 + $tmp3139;
frost$core$Int64 $tmp3141 = (frost$core$Int64) {$tmp3140};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1406:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp3142 = &(&local6)->value;
*$tmp3142 = $tmp3141;
frost$core$String$Index $tmp3143 = *(&local6);
*(&local5) = $tmp3143;
frost$core$String$Index $tmp3144 = *(&local5);
*(&local3) = $tmp3144;
goto block3;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Bit local5;
frost$core$String$Index local6;
frost$core$Int64 local7;
frost$core$String$Index local8;
frost$core$String$Index local9;
frost$core$Int64 $tmp3145 = (frost$core$Int64) {0u};
int64_t $tmp3146 = param2.value;
int64_t $tmp3147 = $tmp3145.value;
bool $tmp3148 = $tmp3146 > $tmp3147;
frost$core$Bit $tmp3149 = (frost$core$Bit) {$tmp3148};
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {1422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3152, $tmp3151, &$s3153);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3154);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$collections$Array* $tmp3155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
*(&local0) = $tmp3154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1424
frost$core$Matcher* $tmp3156 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
frost$core$Matcher* $tmp3157 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local1) = $tmp3156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1425
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:1425:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp3158 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp3159 = &(&local3)->value;
*$tmp3159 = $tmp3158;
frost$core$String$Index $tmp3160 = *(&local3);
*(&local2) = $tmp3160;
frost$core$String$Index $tmp3161 = *(&local2);
*(&local4) = $tmp3161;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1426
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1427
frost$core$Matcher* $tmp3162 = *(&local1);
frost$core$Bit $tmp3163 = frost$core$Matcher$find$R$frost$core$Bit($tmp3162);
*(&local5) = $tmp3163;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1428
frost$core$Bit $tmp3164 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:1428:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp3165 = $tmp3164.value;
bool $tmp3166 = !$tmp3165;
frost$core$Bit $tmp3167 = (frost$core$Bit) {$tmp3166};
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block7; else goto block9;
block9:;
frost$collections$Array* $tmp3169 = *(&local0);
ITable* $tmp3170 = ((frost$collections$CollectionView*) $tmp3169)->$class->itable;
while ($tmp3170->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3170 = $tmp3170->next;
}
$fn3172 $tmp3171 = $tmp3170->methods[0];
frost$core$Int64 $tmp3173 = $tmp3171(((frost$collections$CollectionView*) $tmp3169));
frost$core$Int64 $tmp3174 = (frost$core$Int64) {1u};
int64_t $tmp3175 = param2.value;
int64_t $tmp3176 = $tmp3174.value;
int64_t $tmp3177 = $tmp3175 - $tmp3176;
frost$core$Int64 $tmp3178 = (frost$core$Int64) {$tmp3177};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:1428:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp3179 = $tmp3173.value;
int64_t $tmp3180 = $tmp3178.value;
bool $tmp3181 = $tmp3179 == $tmp3180;
frost$core$Bit $tmp3182 = (frost$core$Bit) {$tmp3181};
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1429
frost$collections$Array* $tmp3184 = *(&local0);
frost$core$String$Index $tmp3185 = *(&local4);
frost$core$Bit $tmp3186 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3187 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3185, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3186);
frost$core$String* $tmp3188 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp3187);
frost$collections$Array$add$frost$collections$Array$T($tmp3184, ((frost$core$Object*) $tmp3188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1430
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1436
frost$collections$Array* $tmp3189 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Matcher* $tmp3190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp3191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp3189;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1432
frost$core$Matcher* $tmp3192 = *(&local1);
frost$core$String$Index $tmp3193;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp3193, $tmp3192);
*(&local6) = $tmp3193;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1433
frost$collections$Array* $tmp3194 = *(&local0);
frost$core$String$Index $tmp3195 = *(&local4);
frost$core$String$Index $tmp3196 = *(&local6);
frost$core$Bit $tmp3197 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp3198 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp3195, $tmp3196, $tmp3197);
frost$core$String* $tmp3199 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp3198);
frost$collections$Array$add$frost$collections$Array$T($tmp3194, ((frost$core$Object*) $tmp3199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1434
frost$core$String$Index $tmp3200 = *(&local6);
frost$core$Int64 $tmp3201 = $tmp3200.value;
frost$core$Matcher* $tmp3202 = *(&local1);
frost$core$String$Index $tmp3203;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp3203, $tmp3202);
frost$core$Int64 $tmp3204 = $tmp3203.value;
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from String.frost:1434:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp3205 = $tmp3201.value;
int64_t $tmp3206 = $tmp3204.value;
bool $tmp3207 = $tmp3205 > $tmp3206;
frost$core$Bit $tmp3208 = (frost$core$Bit) {$tmp3207};
bool $tmp3209 = $tmp3208.value;
if ($tmp3209) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp3210 = $tmp3201.value;
frost$core$Int64 $tmp3211 = (frost$core$Int64) {$tmp3210};
*(&local7) = $tmp3211;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp3212 = $tmp3204.value;
frost$core$Int64 $tmp3213 = (frost$core$Int64) {$tmp3212};
*(&local7) = $tmp3213;
goto block12;
block12:;
frost$core$Int64 $tmp3214 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1434:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp3215 = &(&local9)->value;
*$tmp3215 = $tmp3214;
frost$core$String$Index $tmp3216 = *(&local9);
*(&local8) = $tmp3216;
frost$core$String$Index $tmp3217 = *(&local8);
*(&local4) = $tmp3217;
goto block5;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1449
frost$core$Int64 $tmp3218 = (frost$core$Int64) {9223372036854775807u};
frost$collections$Array* $tmp3219 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp3218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
return $tmp3219;

}
frost$core$Int64$nullable frost$core$String$get_asInt$R$frost$core$Int64$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp3220 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(param0);
return $tmp3220;

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1466
frost$core$Int64* $tmp3221 = &param0->_length;
frost$core$Int64 $tmp3222 = *$tmp3221;
frost$core$Int64 $tmp3223 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:1466:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp3224 = $tmp3222.value;
int64_t $tmp3225 = $tmp3223.value;
bool $tmp3226 = $tmp3224 == $tmp3225;
frost$core$Bit $tmp3227 = (frost$core$Bit) {$tmp3226};
bool $tmp3228 = $tmp3227.value;
if ($tmp3228) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1467
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1469
frost$core$Int64 $tmp3229 = (frost$core$Int64) {0u};
*(&local0) = $tmp3229;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1470
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1471
frost$core$Char8** $tmp3230 = &param0->data;
frost$core$Char8* $tmp3231 = *$tmp3230;
frost$core$Int64 $tmp3232 = (frost$core$Int64) {0u};
int64_t $tmp3233 = $tmp3232.value;
frost$core$Char8 $tmp3234 = $tmp3231[$tmp3233];
frost$core$UInt8 $tmp3235 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3236 = frost$core$Char8$init$frost$core$UInt8($tmp3235);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1471:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp3237 = $tmp3234.value;
uint8_t $tmp3238 = $tmp3236.value;
bool $tmp3239 = $tmp3237 == $tmp3238;
frost$core$Bit $tmp3240 = (frost$core$Bit) {$tmp3239};
bool $tmp3241 = $tmp3240.value;
if ($tmp3241) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1472
frost$core$Int64 $tmp3242 = (frost$core$Int64) {1u};
*(&local1) = $tmp3242;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1475
frost$core$Int64 $tmp3243 = (frost$core$Int64) {0u};
*(&local1) = $tmp3243;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1477
frost$core$Int64 $tmp3244 = *(&local1);
frost$core$Int64* $tmp3245 = &param0->_length;
frost$core$Int64 $tmp3246 = *$tmp3245;
frost$core$Bit $tmp3247 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp3248 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3244, $tmp3246, $tmp3247);
frost$core$Int64 $tmp3249 = $tmp3248.min;
*(&local2) = $tmp3249;
frost$core$Int64 $tmp3250 = $tmp3248.max;
frost$core$Bit $tmp3251 = $tmp3248.inclusive;
bool $tmp3252 = $tmp3251.value;
frost$core$Int64 $tmp3253 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3254 = $tmp3253.value;
frost$core$UInt64 $tmp3255 = (frost$core$UInt64) {((uint64_t) $tmp3254)};
if ($tmp3252) goto block12; else goto block13;
block12:;
int64_t $tmp3256 = $tmp3249.value;
int64_t $tmp3257 = $tmp3250.value;
bool $tmp3258 = $tmp3256 <= $tmp3257;
frost$core$Bit $tmp3259 = (frost$core$Bit) {$tmp3258};
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block9; else goto block10;
block13:;
int64_t $tmp3261 = $tmp3249.value;
int64_t $tmp3262 = $tmp3250.value;
bool $tmp3263 = $tmp3261 < $tmp3262;
frost$core$Bit $tmp3264 = (frost$core$Bit) {$tmp3263};
bool $tmp3265 = $tmp3264.value;
if ($tmp3265) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1478
frost$core$Char8** $tmp3266 = &param0->data;
frost$core$Char8* $tmp3267 = *$tmp3266;
frost$core$Int64 $tmp3268 = *(&local2);
int64_t $tmp3269 = $tmp3268.value;
frost$core$Char8 $tmp3270 = $tmp3267[$tmp3269];
uint8_t $tmp3271 = $tmp3270.value;
frost$core$Int64 $tmp3272 = (frost$core$Int64) {((int64_t) $tmp3271)};
frost$core$Int64 $tmp3273 = (frost$core$Int64) {48u};
int64_t $tmp3274 = $tmp3272.value;
int64_t $tmp3275 = $tmp3273.value;
int64_t $tmp3276 = $tmp3274 - $tmp3275;
frost$core$Int64 $tmp3277 = (frost$core$Int64) {$tmp3276};
*(&local3) = $tmp3277;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1479
frost$core$Int64 $tmp3278 = *(&local3);
frost$core$Int64 $tmp3279 = (frost$core$Int64) {0u};
int64_t $tmp3280 = $tmp3278.value;
int64_t $tmp3281 = $tmp3279.value;
bool $tmp3282 = $tmp3280 < $tmp3281;
frost$core$Bit $tmp3283 = (frost$core$Bit) {$tmp3282};
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block14; else goto block16;
block16:;
frost$core$Int64 $tmp3285 = *(&local3);
frost$core$Int64 $tmp3286 = (frost$core$Int64) {9u};
int64_t $tmp3287 = $tmp3285.value;
int64_t $tmp3288 = $tmp3286.value;
bool $tmp3289 = $tmp3287 > $tmp3288;
frost$core$Bit $tmp3290 = (frost$core$Bit) {$tmp3289};
bool $tmp3291 = $tmp3290.value;
if ($tmp3291) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1480
return ((frost$core$Int64$nullable) { .nonnull = false });
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1482
frost$core$Int64 $tmp3292 = *(&local0);
frost$core$Int64 $tmp3293 = (frost$core$Int64) {10u};
int64_t $tmp3294 = $tmp3292.value;
int64_t $tmp3295 = $tmp3293.value;
int64_t $tmp3296 = $tmp3294 * $tmp3295;
frost$core$Int64 $tmp3297 = (frost$core$Int64) {$tmp3296};
frost$core$Int64 $tmp3298 = *(&local3);
int64_t $tmp3299 = $tmp3297.value;
int64_t $tmp3300 = $tmp3298.value;
int64_t $tmp3301 = $tmp3299 + $tmp3300;
frost$core$Int64 $tmp3302 = (frost$core$Int64) {$tmp3301};
*(&local0) = $tmp3302;
frost$core$Int64 $tmp3303 = *(&local2);
int64_t $tmp3304 = $tmp3250.value;
int64_t $tmp3305 = $tmp3303.value;
int64_t $tmp3306 = $tmp3304 - $tmp3305;
frost$core$Int64 $tmp3307 = (frost$core$Int64) {$tmp3306};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3308 = $tmp3307.value;
frost$core$UInt64 $tmp3309 = (frost$core$UInt64) {((uint64_t) $tmp3308)};
if ($tmp3252) goto block19; else goto block20;
block19:;
uint64_t $tmp3310 = $tmp3309.value;
uint64_t $tmp3311 = $tmp3255.value;
bool $tmp3312 = $tmp3310 >= $tmp3311;
frost$core$Bit $tmp3313 = (frost$core$Bit) {$tmp3312};
bool $tmp3314 = $tmp3313.value;
if ($tmp3314) goto block17; else goto block10;
block20:;
uint64_t $tmp3315 = $tmp3309.value;
uint64_t $tmp3316 = $tmp3255.value;
bool $tmp3317 = $tmp3315 > $tmp3316;
frost$core$Bit $tmp3318 = (frost$core$Bit) {$tmp3317};
bool $tmp3319 = $tmp3318.value;
if ($tmp3319) goto block17; else goto block10;
block17:;
int64_t $tmp3320 = $tmp3303.value;
int64_t $tmp3321 = $tmp3253.value;
int64_t $tmp3322 = $tmp3320 + $tmp3321;
frost$core$Int64 $tmp3323 = (frost$core$Int64) {$tmp3322};
*(&local2) = $tmp3323;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1484
frost$core$Char8** $tmp3324 = &param0->data;
frost$core$Char8* $tmp3325 = *$tmp3324;
frost$core$Int64 $tmp3326 = (frost$core$Int64) {0u};
int64_t $tmp3327 = $tmp3326.value;
frost$core$Char8 $tmp3328 = $tmp3325[$tmp3327];
frost$core$UInt8 $tmp3329 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp3330 = frost$core$Char8$init$frost$core$UInt8($tmp3329);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from String.frost:1484:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:26
uint8_t $tmp3331 = $tmp3328.value;
uint8_t $tmp3332 = $tmp3330.value;
bool $tmp3333 = $tmp3331 == $tmp3332;
frost$core$Bit $tmp3334 = (frost$core$Bit) {$tmp3333};
bool $tmp3335 = $tmp3334.value;
if ($tmp3335) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1485
frost$core$Int64 $tmp3336 = *(&local0);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from String.frost:1485:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp3337 = $tmp3336.value;
int64_t $tmp3338 = -$tmp3337;
frost$core$Int64 $tmp3339 = (frost$core$Int64) {$tmp3338};
*(&local0) = $tmp3339;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1487
frost$core$Int64 $tmp3340 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp3340, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1498
frost$core$Int64* $tmp3341 = &param0->_length;
frost$core$Int64 $tmp3342 = *$tmp3341;
frost$core$Int64 $tmp3343 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:1498:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp3344 = $tmp3342.value;
int64_t $tmp3345 = $tmp3343.value;
bool $tmp3346 = $tmp3344 == $tmp3345;
frost$core$Bit $tmp3347 = (frost$core$Bit) {$tmp3346};
bool $tmp3348 = $tmp3347.value;
if ($tmp3348) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1499
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1501
frost$core$UInt64 $tmp3349 = (frost$core$UInt64) {0u};
*(&local0) = $tmp3349;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1502
frost$core$Int64 $tmp3350 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3351 = &param0->_length;
frost$core$Int64 $tmp3352 = *$tmp3351;
frost$core$Bit $tmp3353 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp3354 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3350, $tmp3352, $tmp3353);
frost$core$Int64 $tmp3355 = $tmp3354.min;
*(&local1) = $tmp3355;
frost$core$Int64 $tmp3356 = $tmp3354.max;
frost$core$Bit $tmp3357 = $tmp3354.inclusive;
bool $tmp3358 = $tmp3357.value;
frost$core$Int64 $tmp3359 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3360 = $tmp3359.value;
frost$core$UInt64 $tmp3361 = (frost$core$UInt64) {((uint64_t) $tmp3360)};
if ($tmp3358) goto block8; else goto block9;
block8:;
int64_t $tmp3362 = $tmp3355.value;
int64_t $tmp3363 = $tmp3356.value;
bool $tmp3364 = $tmp3362 <= $tmp3363;
frost$core$Bit $tmp3365 = (frost$core$Bit) {$tmp3364};
bool $tmp3366 = $tmp3365.value;
if ($tmp3366) goto block5; else goto block6;
block9:;
int64_t $tmp3367 = $tmp3355.value;
int64_t $tmp3368 = $tmp3356.value;
bool $tmp3369 = $tmp3367 < $tmp3368;
frost$core$Bit $tmp3370 = (frost$core$Bit) {$tmp3369};
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1503
frost$core$Char8** $tmp3372 = &param0->data;
frost$core$Char8* $tmp3373 = *$tmp3372;
frost$core$Int64 $tmp3374 = *(&local1);
int64_t $tmp3375 = $tmp3374.value;
frost$core$Char8 $tmp3376 = $tmp3373[$tmp3375];
uint8_t $tmp3377 = $tmp3376.value;
frost$core$UInt64 $tmp3378 = (frost$core$UInt64) {((uint64_t) $tmp3377)};
frost$core$UInt64 $tmp3379 = (frost$core$UInt64) {48u};
uint64_t $tmp3380 = $tmp3378.value;
uint64_t $tmp3381 = $tmp3379.value;
uint64_t $tmp3382 = $tmp3380 - $tmp3381;
frost$core$UInt64 $tmp3383 = (frost$core$UInt64) {$tmp3382};
*(&local2) = $tmp3383;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1504
frost$core$UInt64 $tmp3384 = *(&local2);
frost$core$UInt64 $tmp3385 = (frost$core$UInt64) {0u};
uint64_t $tmp3386 = $tmp3384.value;
uint64_t $tmp3387 = $tmp3385.value;
bool $tmp3388 = $tmp3386 < $tmp3387;
frost$core$Bit $tmp3389 = (frost$core$Bit) {$tmp3388};
bool $tmp3390 = $tmp3389.value;
if ($tmp3390) goto block10; else goto block12;
block12:;
frost$core$UInt64 $tmp3391 = *(&local2);
frost$core$UInt64 $tmp3392 = (frost$core$UInt64) {9u};
uint64_t $tmp3393 = $tmp3391.value;
uint64_t $tmp3394 = $tmp3392.value;
bool $tmp3395 = $tmp3393 > $tmp3394;
frost$core$Bit $tmp3396 = (frost$core$Bit) {$tmp3395};
bool $tmp3397 = $tmp3396.value;
if ($tmp3397) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1505
return ((frost$core$UInt64$nullable) { .nonnull = false });
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1507
frost$core$UInt64 $tmp3398 = *(&local0);
frost$core$UInt64 $tmp3399 = (frost$core$UInt64) {10u};
uint64_t $tmp3400 = $tmp3398.value;
uint64_t $tmp3401 = $tmp3399.value;
uint64_t $tmp3402 = $tmp3400 * $tmp3401;
frost$core$UInt64 $tmp3403 = (frost$core$UInt64) {$tmp3402};
frost$core$UInt64 $tmp3404 = *(&local2);
uint64_t $tmp3405 = $tmp3403.value;
uint64_t $tmp3406 = $tmp3404.value;
uint64_t $tmp3407 = $tmp3405 + $tmp3406;
frost$core$UInt64 $tmp3408 = (frost$core$UInt64) {$tmp3407};
*(&local0) = $tmp3408;
frost$core$Int64 $tmp3409 = *(&local1);
int64_t $tmp3410 = $tmp3356.value;
int64_t $tmp3411 = $tmp3409.value;
int64_t $tmp3412 = $tmp3410 - $tmp3411;
frost$core$Int64 $tmp3413 = (frost$core$Int64) {$tmp3412};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3414 = $tmp3413.value;
frost$core$UInt64 $tmp3415 = (frost$core$UInt64) {((uint64_t) $tmp3414)};
if ($tmp3358) goto block15; else goto block16;
block15:;
uint64_t $tmp3416 = $tmp3415.value;
uint64_t $tmp3417 = $tmp3361.value;
bool $tmp3418 = $tmp3416 >= $tmp3417;
frost$core$Bit $tmp3419 = (frost$core$Bit) {$tmp3418};
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block13; else goto block6;
block16:;
uint64_t $tmp3421 = $tmp3415.value;
uint64_t $tmp3422 = $tmp3361.value;
bool $tmp3423 = $tmp3421 > $tmp3422;
frost$core$Bit $tmp3424 = (frost$core$Bit) {$tmp3423};
bool $tmp3425 = $tmp3424.value;
if ($tmp3425) goto block13; else goto block6;
block13:;
int64_t $tmp3426 = $tmp3409.value;
int64_t $tmp3427 = $tmp3359.value;
int64_t $tmp3428 = $tmp3426 + $tmp3427;
frost$core$Int64 $tmp3429 = (frost$core$Int64) {$tmp3428};
*(&local1) = $tmp3429;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1509
frost$core$UInt64 $tmp3430 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp3430, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1520
frost$core$Real64 $tmp3431;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp3431, param0);
return ((frost$core$Real64$nullable) { $tmp3431, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1530
frost$core$Int64 $tmp3432 = (frost$core$Int64) {14695981039346656037u};
*(&local0) = $tmp3432;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1531
frost$core$Int64 $tmp3433 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3434 = &param0->_length;
frost$core$Int64 $tmp3435 = *$tmp3434;
frost$core$Bit $tmp3436 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp3437 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3433, $tmp3435, $tmp3436);
frost$core$Int64 $tmp3438 = $tmp3437.min;
*(&local1) = $tmp3438;
frost$core$Int64 $tmp3439 = $tmp3437.max;
frost$core$Bit $tmp3440 = $tmp3437.inclusive;
bool $tmp3441 = $tmp3440.value;
frost$core$Int64 $tmp3442 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3443 = $tmp3442.value;
frost$core$UInt64 $tmp3444 = (frost$core$UInt64) {((uint64_t) $tmp3443)};
if ($tmp3441) goto block5; else goto block6;
block5:;
int64_t $tmp3445 = $tmp3438.value;
int64_t $tmp3446 = $tmp3439.value;
bool $tmp3447 = $tmp3445 <= $tmp3446;
frost$core$Bit $tmp3448 = (frost$core$Bit) {$tmp3447};
bool $tmp3449 = $tmp3448.value;
if ($tmp3449) goto block2; else goto block3;
block6:;
int64_t $tmp3450 = $tmp3438.value;
int64_t $tmp3451 = $tmp3439.value;
bool $tmp3452 = $tmp3450 < $tmp3451;
frost$core$Bit $tmp3453 = (frost$core$Bit) {$tmp3452};
bool $tmp3454 = $tmp3453.value;
if ($tmp3454) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1532
frost$core$Int64 $tmp3455 = *(&local0);
frost$core$Char8** $tmp3456 = &param0->data;
frost$core$Char8* $tmp3457 = *$tmp3456;
frost$core$Int64 $tmp3458 = *(&local1);
int64_t $tmp3459 = $tmp3458.value;
frost$core$Char8 $tmp3460 = $tmp3457[$tmp3459];
// begin inline call to function frost.core.Char8.get_asInt8():frost.core.Int8 from String.frost:1532:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:106
uint8_t $tmp3461 = $tmp3460.value;
frost$core$Int8 $tmp3462 = (frost$core$Int8) {((int8_t) $tmp3461)};
frost$core$Int64 $tmp3463 = frost$core$Int64$init$frost$core$Int8($tmp3462);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from String.frost:1532:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:197
int64_t $tmp3464 = $tmp3455.value;
int64_t $tmp3465 = $tmp3463.value;
int64_t $tmp3466 = $tmp3464 ^ $tmp3465;
frost$core$Int64 $tmp3467 = (frost$core$Int64) {$tmp3466};
*(&local0) = $tmp3467;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1533
frost$core$Int64 $tmp3468 = *(&local0);
frost$core$Int64 $tmp3469 = (frost$core$Int64) {1099511628211u};
int64_t $tmp3470 = $tmp3468.value;
int64_t $tmp3471 = $tmp3469.value;
int64_t $tmp3472 = $tmp3470 * $tmp3471;
frost$core$Int64 $tmp3473 = (frost$core$Int64) {$tmp3472};
*(&local0) = $tmp3473;
frost$core$Int64 $tmp3474 = *(&local1);
int64_t $tmp3475 = $tmp3439.value;
int64_t $tmp3476 = $tmp3474.value;
int64_t $tmp3477 = $tmp3475 - $tmp3476;
frost$core$Int64 $tmp3478 = (frost$core$Int64) {$tmp3477};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp3479 = $tmp3478.value;
frost$core$UInt64 $tmp3480 = (frost$core$UInt64) {((uint64_t) $tmp3479)};
if ($tmp3441) goto block11; else goto block12;
block11:;
uint64_t $tmp3481 = $tmp3480.value;
uint64_t $tmp3482 = $tmp3444.value;
bool $tmp3483 = $tmp3481 >= $tmp3482;
frost$core$Bit $tmp3484 = (frost$core$Bit) {$tmp3483};
bool $tmp3485 = $tmp3484.value;
if ($tmp3485) goto block9; else goto block3;
block12:;
uint64_t $tmp3486 = $tmp3480.value;
uint64_t $tmp3487 = $tmp3444.value;
bool $tmp3488 = $tmp3486 > $tmp3487;
frost$core$Bit $tmp3489 = (frost$core$Bit) {$tmp3488};
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block9; else goto block3;
block9:;
int64_t $tmp3491 = $tmp3474.value;
int64_t $tmp3492 = $tmp3442.value;
int64_t $tmp3493 = $tmp3491 + $tmp3492;
frost$core$Int64 $tmp3494 = (frost$core$Int64) {$tmp3493};
*(&local1) = $tmp3494;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1535
frost$core$Int64 $tmp3495 = *(&local0);
return $tmp3495;

}

