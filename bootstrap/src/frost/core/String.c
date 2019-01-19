#include "frost/core/String.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Formattable.h"
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
#include "frost/core/UInt8.h"
#include "frost/core/String/UTF8List.h"
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

__attribute__((weak)) frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64$shim(frost$core$String* p0) {
    frost$core$Int64 result = frost$core$String$get_hash$R$frost$core$Int64(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim(frost$core$String* p0) {
    frost$collections$Iterator* result = frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(p0);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$String$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$_frost$collections$Key, { frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$String$_frost$core$Equatable, { frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$String$_frost$collections$Iterable, { frost$core$String$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$convert$R$frost$core$Int64$Q, frost$core$String$convert$R$frost$core$UInt64$Q, frost$core$String$convert$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn55)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn87)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn187)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn268)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn272)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn606)(frost$core$Object*);
typedef frost$core$String* (*$fn718)(frost$core$Object*);
typedef frost$core$Bit (*$fn794)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn803)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn828)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1374)(frost$core$Object*);
typedef frost$core$String* (*$fn1558)(frost$core$Object*);
typedef frost$core$Object* (*$fn2223)(frost$core$String*);
typedef frost$core$Object* (*$fn2225)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2229)(frost$core$Object*);
typedef frost$core$String* (*$fn2236)(frost$core$Object*);
typedef frost$core$Object* (*$fn2302)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2304)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2308)(frost$core$Object*);
typedef frost$core$String* (*$fn2316)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2637)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2701)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 626278591670755349, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8142968872510394027, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 328
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// line 351
frost$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// line 352
frost$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = param2;
// line 353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp6 = &param0->owner;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2, frost$core$String* param3) {

// line 328
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
frost$core$Int64* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// line 358
frost$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// line 359
frost$core$Int64* $tmp12 = &param0->_length;
*$tmp12 = param2;
// line 360
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
// line 328
frost$core$Int64 $tmp16 = (frost$core$Int64) {0};
frost$core$Int64* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// line 364
ITable* $tmp18 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int64 $tmp21 = $tmp19(((frost$collections$CollectionView*) param1));
frost$core$Int64* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// line 365
frost$core$Int64* $tmp23 = &param0->_length;
frost$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
frost$core$Char8* $tmp26 = ((frost$core$Char8*) frostAlloc($tmp25 * 1));
frost$core$Char8** $tmp27 = &param0->data;
*$tmp27 = $tmp26;
// line 366
frost$core$Int64 $tmp28 = (frost$core$Int64) {0};
frost$core$Int64* $tmp29 = &param0->_length;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp32 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp28, $tmp30, $tmp31);
frost$core$Int64 $tmp33 = $tmp32.min;
*(&local0) = $tmp33;
frost$core$Int64 $tmp34 = $tmp32.max;
frost$core$Bit $tmp35 = $tmp32.inclusive;
bool $tmp36 = $tmp35.value;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp38 = frost$core$Int64$convert$R$frost$core$UInt64($tmp37);
if ($tmp36) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp33.value;
int64_t $tmp40 = $tmp34.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp34.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 367
frost$core$Char8** $tmp49 = &param0->data;
frost$core$Char8* $tmp50 = *$tmp49;
frost$core$Int64 $tmp51 = *(&local0);
frost$core$Int64 $tmp52 = *(&local0);
ITable* $tmp53 = param1->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Object* $tmp56 = $tmp54(param1, $tmp52);
int64_t $tmp57 = $tmp51.value;
$tmp50[$tmp57] = ((frost$core$Char8$wrapper*) $tmp56)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp56);
// unreffing REF($50:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp34.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$UInt64 $tmp63 = frost$core$Int64$convert$R$frost$core$UInt64($tmp62);
if ($tmp36) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp38.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp38.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp37.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local0) = $tmp77;
goto block1;
block2:;
// line 369
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
frost$core$Int64 local2;
// line 328
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
frost$core$Int64* $tmp82 = &param0->dummy;
*$tmp82 = $tmp81;
// line 373
frost$core$MutableString* $tmp83 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp83);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$MutableString* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($5:frost.core.MutableString)
// line 374
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
// line 375
frost$core$MutableString* $tmp98 = *(&local0);
frost$core$Char32 $tmp99 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp98, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
// unreffing REF($31:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($21:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 377
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$Int64* $tmp101 = &$tmp100->_length;
frost$core$Int64 $tmp102 = *$tmp101;
int64_t $tmp103 = $tmp102.value;
frost$core$Char8* $tmp104 = ((frost$core$Char8*) frostAlloc($tmp103 * 1));
frost$core$Char8** $tmp105 = &param0->data;
*$tmp105 = $tmp104;
// line 378
frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
frost$core$MutableString* $tmp107 = *(&local0);
frost$core$Int64* $tmp108 = &$tmp107->_length;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp111 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp106, $tmp109, $tmp110);
frost$core$Int64 $tmp112 = $tmp111.min;
*(&local2) = $tmp112;
frost$core$Int64 $tmp113 = $tmp111.max;
frost$core$Bit $tmp114 = $tmp111.inclusive;
bool $tmp115 = $tmp114.value;
frost$core$Int64 $tmp116 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp117 = frost$core$Int64$convert$R$frost$core$UInt64($tmp116);
if ($tmp115) goto block7; else goto block8;
block7:;
int64_t $tmp118 = $tmp112.value;
int64_t $tmp119 = $tmp113.value;
bool $tmp120 = $tmp118 <= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block8:;
int64_t $tmp123 = $tmp112.value;
int64_t $tmp124 = $tmp113.value;
bool $tmp125 = $tmp123 < $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
// line 379
frost$core$Char8** $tmp128 = &param0->data;
frost$core$Char8* $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = *(&local2);
frost$core$MutableString* $tmp131 = *(&local0);
frost$core$Char8** $tmp132 = &$tmp131->data;
frost$core$Char8* $tmp133 = *$tmp132;
frost$core$Int64 $tmp134 = *(&local2);
int64_t $tmp135 = $tmp134.value;
frost$core$Char8 $tmp136 = $tmp133[$tmp135];
int64_t $tmp137 = $tmp130.value;
$tmp129[$tmp137] = $tmp136;
goto block6;
block6:;
frost$core$Int64 $tmp138 = *(&local2);
int64_t $tmp139 = $tmp113.value;
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139 - $tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {$tmp141};
frost$core$UInt64 $tmp143 = frost$core$Int64$convert$R$frost$core$UInt64($tmp142);
if ($tmp115) goto block10; else goto block11;
block10:;
uint64_t $tmp144 = $tmp143.value;
uint64_t $tmp145 = $tmp117.value;
bool $tmp146 = $tmp144 >= $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block9; else goto block5;
block11:;
uint64_t $tmp149 = $tmp143.value;
uint64_t $tmp150 = $tmp117.value;
bool $tmp151 = $tmp149 > $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block9; else goto block5;
block9:;
int64_t $tmp154 = $tmp138.value;
int64_t $tmp155 = $tmp116.value;
int64_t $tmp156 = $tmp154 + $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {$tmp156};
*(&local2) = $tmp157;
goto block4;
block5:;
// line 381
frost$core$MutableString* $tmp158 = *(&local0);
frost$core$Int64* $tmp159 = &$tmp158->_length;
frost$core$Int64 $tmp160 = *$tmp159;
frost$core$Int64* $tmp161 = &param0->_length;
*$tmp161 = $tmp160;
// line 382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp162 = &param0->owner;
frost$core$String* $tmp163 = *$tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String** $tmp164 = &param0->owner;
*$tmp164 = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(frost$core$String* param0) {

// line 390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8 local1;
frost$core$Bit local2;
// line 403
frost$core$Bit $tmp166 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block2; else goto block3;
block2:;
// line 405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block3:;
frost$core$Bit $tmp169 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s170);
bool $tmp171 = $tmp169.value;
if ($tmp171) goto block4; else goto block5;
block4:;
// line 408
frost$core$MutableString* $tmp172 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp172, &$s173);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$MutableString* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($12:frost.core.MutableString)
// line 409
frost$collections$ListView* $tmp175 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param0);
ITable* $tmp176 = ((frost$collections$Iterable*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$collections$Iterator* $tmp179 = $tmp177(((frost$collections$Iterable*) $tmp175));
goto block6;
block6:;
ITable* $tmp180 = $tmp179->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Bit $tmp183 = $tmp181($tmp179);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block8; else goto block7;
block7:;
ITable* $tmp185 = $tmp179->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[1];
frost$core$Object* $tmp188 = $tmp186($tmp179);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp188)->value;
// line 410
frost$core$Char8 $tmp189 = *(&local1);
frost$core$UInt8 $tmp190 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp191 = frost$core$Char8$init$frost$core$UInt8($tmp190);
frost$core$Bit $tmp192 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block10; else goto block11;
block10:;
// line 412
frost$core$MutableString* $tmp194 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp194, &$s195);
goto block9;
block11:;
frost$core$UInt8 $tmp196 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp197 = frost$core$Char8$init$frost$core$UInt8($tmp196);
frost$core$Bit $tmp198 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block12; else goto block13;
block12:;
// line 415
frost$core$MutableString* $tmp200 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp200, &$s201);
goto block9;
block13:;
frost$core$UInt8 $tmp202 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp203 = frost$core$Char8$init$frost$core$UInt8($tmp202);
frost$core$Bit $tmp204 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block15;
block14:;
// line 418
frost$core$MutableString* $tmp206 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp206, &$s207);
goto block9;
block15:;
frost$core$UInt8 $tmp208 = (frost$core$UInt8) {13};
frost$core$Char8 $tmp209 = frost$core$Char8$init$frost$core$UInt8($tmp208);
frost$core$Bit $tmp210 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block16; else goto block17;
block16:;
// line 421
frost$core$MutableString* $tmp212 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp212, &$s213);
goto block9;
block17:;
frost$core$UInt8 $tmp214 = (frost$core$UInt8) {9};
frost$core$Char8 $tmp215 = frost$core$Char8$init$frost$core$UInt8($tmp214);
frost$core$Bit $tmp216 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block18; else goto block19;
block18:;
// line 424
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp218, &$s219);
goto block9;
block19:;
// line 427
frost$core$Char8 $tmp220 = *(&local1);
frost$core$UInt8 $tmp221 = frost$core$Char8$convert$R$frost$core$UInt8($tmp220);
frost$core$UInt8 $tmp222 = (frost$core$UInt8) {32};
uint8_t $tmp223 = $tmp221.value;
uint8_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 >= $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block22; else goto block23;
block22:;
frost$core$Char8 $tmp228 = *(&local1);
frost$core$UInt8 $tmp229 = frost$core$Char8$convert$R$frost$core$UInt8($tmp228);
frost$core$UInt8 $tmp230 = (frost$core$UInt8) {126};
uint8_t $tmp231 = $tmp229.value;
uint8_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 <= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
*(&local2) = $tmp234;
goto block24;
block23:;
*(&local2) = $tmp226;
goto block24;
block24:;
frost$core$Bit $tmp235 = *(&local2);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block20; else goto block25;
block20:;
// line 428
frost$core$MutableString* $tmp237 = *(&local0);
frost$core$Char8 $tmp238 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp237, $tmp238);
goto block21;
block25:;
// line 1
// line 432
frost$core$MutableString* $tmp239 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp239, &$s240);
goto block21;
block21:;
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
// unreffing REF($39:frost.collections.Iterator.T)
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($29:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($25:frost.collections.ListView<frost.core.Char8>)
// line 437
frost$core$MutableString* $tmp241 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp241, &$s242);
// line 438
frost$core$MutableString* $tmp243 = *(&local0);
frost$core$String* $tmp244 = frost$core$MutableString$finish$R$frost$core$String($tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($139:frost.core.String)
frost$core$MutableString* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp244;
block5:;
// line 441
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(false);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {441};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s249, $tmp248);
abort(); // unreachable
block26:;
goto block1;
block1:;
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit(false);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {402};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block28:;
abort(); // unreachable

}
void frost$core$String$cleanup(frost$core$String* param0) {

// line 449
frost$core$String** $tmp255 = &param0->owner;
frost$core$String* $tmp256 = *$tmp255;
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256 == NULL);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 450
frost$core$Char8** $tmp259 = &param0->data;
frost$core$Char8* $tmp260 = *$tmp259;
frostFree($tmp260);
goto block2;
block2:;
// line 448
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp261 = &param0->owner;
frost$core$String* $tmp262 = *$tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// line 458
frost$core$String$UTF8List* $tmp263 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp263, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp263)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($1:frost.core.String.UTF8List)
return ((frost$collections$ListView*) $tmp263);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// line 467
frost$core$String$UTF16Iterator* $tmp264 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp264, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($1:frost.core.String.UTF16Iterator)
return ((frost$collections$Iterator*) $tmp264);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// line 475
frost$core$String$UTF32Iterator* $tmp265 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp265, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($1:frost.core.String.UTF32Iterator)
return ((frost$collections$Iterator*) $tmp265);

}
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* param0) {

// line 485
ITable* $tmp266 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
frost$collections$Iterator* $tmp269 = $tmp267(((frost$collections$Iterable*) param0));
ITable* $tmp270 = $tmp269->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[2];
frost$core$Int64 $tmp273 = $tmp271($tmp269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($3:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp273;

}
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* param0) {

// line 492
frost$core$Int64* $tmp274 = &param0->_length;
frost$core$Int64 $tmp275 = *$tmp274;
return $tmp275;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 496
frost$core$Int64* $tmp276 = &param0->_length;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64* $tmp278 = &param1->_length;
frost$core$Int64 $tmp279 = *$tmp278;
int64_t $tmp280 = $tmp277.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 < $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 497
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit(false);
return $tmp285;
block2:;
// line 499
frost$core$Int64 $tmp286 = (frost$core$Int64) {0};
frost$core$Int64* $tmp287 = &param1->_length;
frost$core$Int64 $tmp288 = *$tmp287;
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp290 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp286, $tmp288, $tmp289);
frost$core$Int64 $tmp291 = $tmp290.min;
*(&local0) = $tmp291;
frost$core$Int64 $tmp292 = $tmp290.max;
frost$core$Bit $tmp293 = $tmp290.inclusive;
bool $tmp294 = $tmp293.value;
frost$core$Int64 $tmp295 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp296 = frost$core$Int64$convert$R$frost$core$UInt64($tmp295);
if ($tmp294) goto block6; else goto block7;
block6:;
int64_t $tmp297 = $tmp291.value;
int64_t $tmp298 = $tmp292.value;
bool $tmp299 = $tmp297 <= $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block4;
block7:;
int64_t $tmp302 = $tmp291.value;
int64_t $tmp303 = $tmp292.value;
bool $tmp304 = $tmp302 < $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block3; else goto block4;
block3:;
// line 500
frost$core$Char8** $tmp307 = &param0->data;
frost$core$Char8* $tmp308 = *$tmp307;
frost$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp309.value;
frost$core$Char8 $tmp311 = $tmp308[$tmp310];
frost$core$Char8** $tmp312 = &param1->data;
frost$core$Char8* $tmp313 = *$tmp312;
frost$core$Int64 $tmp314 = *(&local0);
int64_t $tmp315 = $tmp314.value;
frost$core$Char8 $tmp316 = $tmp313[$tmp315];
frost$core$Bit $tmp317 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp311, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block8; else goto block9;
block8:;
// line 501
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit(false);
return $tmp319;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp320 = *(&local0);
int64_t $tmp321 = $tmp292.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 - $tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {$tmp323};
frost$core$UInt64 $tmp325 = frost$core$Int64$convert$R$frost$core$UInt64($tmp324);
if ($tmp294) goto block11; else goto block12;
block11:;
uint64_t $tmp326 = $tmp325.value;
uint64_t $tmp327 = $tmp296.value;
bool $tmp328 = $tmp326 >= $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block10; else goto block4;
block12:;
uint64_t $tmp331 = $tmp325.value;
uint64_t $tmp332 = $tmp296.value;
bool $tmp333 = $tmp331 > $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block10; else goto block4;
block10:;
int64_t $tmp336 = $tmp320.value;
int64_t $tmp337 = $tmp295.value;
int64_t $tmp338 = $tmp336 + $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
*(&local0) = $tmp339;
goto block3;
block4:;
// line 504
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit(true);
return $tmp340;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 508
frost$core$Int64* $tmp341 = &param0->_length;
frost$core$Int64 $tmp342 = *$tmp341;
frost$core$Int64* $tmp343 = &param1->_length;
frost$core$Int64 $tmp344 = *$tmp343;
int64_t $tmp345 = $tmp342.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 < $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block1; else goto block2;
block1:;
// line 509
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit(false);
return $tmp350;
block2:;
// line 511
frost$core$Int64 $tmp351 = (frost$core$Int64) {0};
frost$core$Int64* $tmp352 = &param1->_length;
frost$core$Int64 $tmp353 = *$tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp355 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp351, $tmp353, $tmp354);
frost$core$Int64 $tmp356 = $tmp355.min;
*(&local0) = $tmp356;
frost$core$Int64 $tmp357 = $tmp355.max;
frost$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp361 = frost$core$Int64$convert$R$frost$core$UInt64($tmp360);
if ($tmp359) goto block6; else goto block7;
block6:;
int64_t $tmp362 = $tmp356.value;
int64_t $tmp363 = $tmp357.value;
bool $tmp364 = $tmp362 <= $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block3; else goto block4;
block7:;
int64_t $tmp367 = $tmp356.value;
int64_t $tmp368 = $tmp357.value;
bool $tmp369 = $tmp367 < $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block3; else goto block4;
block3:;
// line 512
frost$core$Char8** $tmp372 = &param0->data;
frost$core$Char8* $tmp373 = *$tmp372;
frost$core$Int64* $tmp374 = &param0->_length;
frost$core$Int64 $tmp375 = *$tmp374;
frost$core$Int64* $tmp376 = &param1->_length;
frost$core$Int64 $tmp377 = *$tmp376;
int64_t $tmp378 = $tmp375.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
frost$core$Int64 $tmp381 = (frost$core$Int64) {$tmp380};
frost$core$Int64 $tmp382 = *(&local0);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 + $tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {$tmp385};
int64_t $tmp387 = $tmp386.value;
frost$core$Char8 $tmp388 = $tmp373[$tmp387];
frost$core$Char8** $tmp389 = &param1->data;
frost$core$Char8* $tmp390 = *$tmp389;
frost$core$Int64 $tmp391 = *(&local0);
int64_t $tmp392 = $tmp391.value;
frost$core$Char8 $tmp393 = $tmp390[$tmp392];
frost$core$Bit $tmp394 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp388, $tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block8; else goto block9;
block8:;
// line 513
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit(false);
return $tmp396;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp397 = *(&local0);
int64_t $tmp398 = $tmp357.value;
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398 - $tmp399;
frost$core$Int64 $tmp401 = (frost$core$Int64) {$tmp400};
frost$core$UInt64 $tmp402 = frost$core$Int64$convert$R$frost$core$UInt64($tmp401);
if ($tmp359) goto block11; else goto block12;
block11:;
uint64_t $tmp403 = $tmp402.value;
uint64_t $tmp404 = $tmp361.value;
bool $tmp405 = $tmp403 >= $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block10; else goto block4;
block12:;
uint64_t $tmp408 = $tmp402.value;
uint64_t $tmp409 = $tmp361.value;
bool $tmp410 = $tmp408 > $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block10; else goto block4;
block10:;
int64_t $tmp413 = $tmp397.value;
int64_t $tmp414 = $tmp360.value;
int64_t $tmp415 = $tmp413 + $tmp414;
frost$core$Int64 $tmp416 = (frost$core$Int64) {$tmp415};
*(&local0) = $tmp416;
goto block3;
block4:;
// line 516
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit(true);
return $tmp417;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Bit local3;
// line 525
frost$core$Int64* $tmp418 = &param0->_length;
frost$core$Int64 $tmp419 = *$tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {0};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block1:;
// line 526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 528
frost$core$Int64 $tmp423 = (frost$core$Int64) {0};
*(&local0) = $tmp423;
// line 529
goto block3;
block3:;
frost$core$Int64 $tmp424 = *(&local0);
frost$core$Int64* $tmp425 = &param0->_length;
frost$core$Int64 $tmp426 = *$tmp425;
int64_t $tmp427 = $tmp424.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 < $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block6; else goto block7;
block6:;
frost$core$Char8** $tmp432 = &param0->data;
frost$core$Char8* $tmp433 = *$tmp432;
frost$core$Int64 $tmp434 = *(&local0);
int64_t $tmp435 = $tmp434.value;
frost$core$Char8 $tmp436 = $tmp433[$tmp435];
frost$core$Bit $tmp437 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp436);
*(&local1) = $tmp437;
goto block8;
block7:;
*(&local1) = $tmp430;
goto block8;
block8:;
frost$core$Bit $tmp438 = *(&local1);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block4; else goto block5;
block4:;
// line 530
frost$core$Int64 $tmp440 = *(&local0);
frost$core$Int64 $tmp441 = (frost$core$Int64) {1};
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442 + $tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {$tmp444};
*(&local0) = $tmp445;
goto block3;
block5:;
// line 533
frost$core$Int64* $tmp446 = &param0->_length;
frost$core$Int64 $tmp447 = *$tmp446;
frost$core$Int64 $tmp448 = (frost$core$Int64) {1};
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449 - $tmp450;
frost$core$Int64 $tmp452 = (frost$core$Int64) {$tmp451};
*(&local2) = $tmp452;
// line 534
goto block9;
block9:;
frost$core$Int64 $tmp453 = *(&local2);
frost$core$Int64 $tmp454 = *(&local0);
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 >= $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block12; else goto block13;
block12:;
frost$core$Char8** $tmp460 = &param0->data;
frost$core$Char8* $tmp461 = *$tmp460;
frost$core$Int64 $tmp462 = *(&local2);
int64_t $tmp463 = $tmp462.value;
frost$core$Char8 $tmp464 = $tmp461[$tmp463];
frost$core$Bit $tmp465 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp464);
*(&local3) = $tmp465;
goto block14;
block13:;
*(&local3) = $tmp458;
goto block14;
block14:;
frost$core$Bit $tmp466 = *(&local3);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block10; else goto block11;
block10:;
// line 535
frost$core$Int64 $tmp468 = *(&local2);
frost$core$Int64 $tmp469 = (frost$core$Int64) {1};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
*(&local2) = $tmp473;
goto block9;
block11:;
// line 538
frost$core$Int64 $tmp474 = *(&local0);
frost$core$String$Index $tmp475 = frost$core$String$Index$init$frost$core$Int64($tmp474);
frost$core$Int64 $tmp476 = *(&local2);
frost$core$String$Index $tmp477 = frost$core$String$Index$init$frost$core$Int64($tmp476);
frost$core$Bit $tmp478 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$String$Index$GT $tmp479 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp475, $tmp477, $tmp478);
frost$core$String* $tmp480 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($95:frost.core.String)
return $tmp480;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 545
frost$core$Int64* $tmp481 = &param0->_length;
frost$core$Int64 $tmp482 = *$tmp481;
frost$core$Int64* $tmp483 = &param1->_length;
frost$core$Int64 $tmp484 = *$tmp483;
int64_t $tmp485 = $tmp482.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 + $tmp486;
frost$core$Int64 $tmp488 = (frost$core$Int64) {$tmp487};
int64_t $tmp489 = $tmp488.value;
frost$core$Char8* $tmp490 = ((frost$core$Char8*) frostAlloc($tmp489 * 1));
*(&local0) = $tmp490;
// line 546
frost$core$Int64 $tmp491 = (frost$core$Int64) {0};
frost$core$Int64* $tmp492 = &param0->_length;
frost$core$Int64 $tmp493 = *$tmp492;
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp495 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp491, $tmp493, $tmp494);
frost$core$Int64 $tmp496 = $tmp495.min;
*(&local1) = $tmp496;
frost$core$Int64 $tmp497 = $tmp495.max;
frost$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
frost$core$Int64 $tmp500 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp501 = frost$core$Int64$convert$R$frost$core$UInt64($tmp500);
if ($tmp499) goto block4; else goto block5;
block4:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block5:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 547
frost$core$Char8* $tmp512 = *(&local0);
frost$core$Int64 $tmp513 = *(&local1);
frost$core$Char8** $tmp514 = &param0->data;
frost$core$Char8* $tmp515 = *$tmp514;
frost$core$Int64 $tmp516 = *(&local1);
int64_t $tmp517 = $tmp516.value;
frost$core$Char8 $tmp518 = $tmp515[$tmp517];
int64_t $tmp519 = $tmp513.value;
$tmp512[$tmp519] = $tmp518;
goto block3;
block3:;
frost$core$Int64 $tmp520 = *(&local1);
int64_t $tmp521 = $tmp497.value;
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521 - $tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {$tmp523};
frost$core$UInt64 $tmp525 = frost$core$Int64$convert$R$frost$core$UInt64($tmp524);
if ($tmp499) goto block7; else goto block8;
block7:;
uint64_t $tmp526 = $tmp525.value;
uint64_t $tmp527 = $tmp501.value;
bool $tmp528 = $tmp526 >= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block6; else goto block2;
block8:;
uint64_t $tmp531 = $tmp525.value;
uint64_t $tmp532 = $tmp501.value;
bool $tmp533 = $tmp531 > $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block6; else goto block2;
block6:;
int64_t $tmp536 = $tmp520.value;
int64_t $tmp537 = $tmp500.value;
int64_t $tmp538 = $tmp536 + $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {$tmp538};
*(&local1) = $tmp539;
goto block1;
block2:;
// line 549
frost$core$Int64 $tmp540 = (frost$core$Int64) {0};
frost$core$Int64* $tmp541 = &param1->_length;
frost$core$Int64 $tmp542 = *$tmp541;
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp544 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp540, $tmp542, $tmp543);
frost$core$Int64 $tmp545 = $tmp544.min;
*(&local2) = $tmp545;
frost$core$Int64 $tmp546 = $tmp544.max;
frost$core$Bit $tmp547 = $tmp544.inclusive;
bool $tmp548 = $tmp547.value;
frost$core$Int64 $tmp549 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp550 = frost$core$Int64$convert$R$frost$core$UInt64($tmp549);
if ($tmp548) goto block12; else goto block13;
block12:;
int64_t $tmp551 = $tmp545.value;
int64_t $tmp552 = $tmp546.value;
bool $tmp553 = $tmp551 <= $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block9; else goto block10;
block13:;
int64_t $tmp556 = $tmp545.value;
int64_t $tmp557 = $tmp546.value;
bool $tmp558 = $tmp556 < $tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block9; else goto block10;
block9:;
// line 550
frost$core$Char8* $tmp561 = *(&local0);
frost$core$Int64* $tmp562 = &param0->_length;
frost$core$Int64 $tmp563 = *$tmp562;
frost$core$Int64 $tmp564 = *(&local2);
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 + $tmp566;
frost$core$Int64 $tmp568 = (frost$core$Int64) {$tmp567};
frost$core$Char8** $tmp569 = &param1->data;
frost$core$Char8* $tmp570 = *$tmp569;
frost$core$Int64 $tmp571 = *(&local2);
int64_t $tmp572 = $tmp571.value;
frost$core$Char8 $tmp573 = $tmp570[$tmp572];
int64_t $tmp574 = $tmp568.value;
$tmp561[$tmp574] = $tmp573;
goto block11;
block11:;
frost$core$Int64 $tmp575 = *(&local2);
int64_t $tmp576 = $tmp546.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
frost$core$Int64 $tmp579 = (frost$core$Int64) {$tmp578};
frost$core$UInt64 $tmp580 = frost$core$Int64$convert$R$frost$core$UInt64($tmp579);
if ($tmp548) goto block15; else goto block16;
block15:;
uint64_t $tmp581 = $tmp580.value;
uint64_t $tmp582 = $tmp550.value;
bool $tmp583 = $tmp581 >= $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block14; else goto block10;
block16:;
uint64_t $tmp586 = $tmp580.value;
uint64_t $tmp587 = $tmp550.value;
bool $tmp588 = $tmp586 > $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block14; else goto block10;
block14:;
int64_t $tmp591 = $tmp575.value;
int64_t $tmp592 = $tmp549.value;
int64_t $tmp593 = $tmp591 + $tmp592;
frost$core$Int64 $tmp594 = (frost$core$Int64) {$tmp593};
*(&local2) = $tmp594;
goto block9;
block10:;
// line 552
frost$core$String* $tmp595 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp596 = *(&local0);
frost$core$Int64* $tmp597 = &param0->_length;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64* $tmp599 = &param1->_length;
frost$core$Int64 $tmp600 = *$tmp599;
int64_t $tmp601 = $tmp598.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 + $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp595, $tmp596, $tmp604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($143:frost.core.String)
return $tmp595;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// line 560
$fn606 $tmp605 = ($fn606) param1->$class->vtable[0];
frost$core$String* $tmp607 = $tmp605(param1);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($2:frost.core.String)
return $tmp608;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
int64_t $tmp610 = param1.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 >= $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s616, $tmp615, &$s617);
abort(); // unreachable
block1:;
// line 568
frost$core$MutableString* $tmp618 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp618);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$MutableString* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local0) = $tmp618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($11:frost.core.MutableString)
// line 569
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp622 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp620, param1, $tmp621);
frost$core$Int64 $tmp623 = $tmp622.min;
*(&local1) = $tmp623;
frost$core$Int64 $tmp624 = $tmp622.max;
frost$core$Bit $tmp625 = $tmp622.inclusive;
bool $tmp626 = $tmp625.value;
frost$core$Int64 $tmp627 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp628 = frost$core$Int64$convert$R$frost$core$UInt64($tmp627);
if ($tmp626) goto block6; else goto block7;
block6:;
int64_t $tmp629 = $tmp623.value;
int64_t $tmp630 = $tmp624.value;
bool $tmp631 = $tmp629 <= $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block4;
block7:;
int64_t $tmp634 = $tmp623.value;
int64_t $tmp635 = $tmp624.value;
bool $tmp636 = $tmp634 < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block3; else goto block4;
block3:;
// line 570
frost$core$MutableString* $tmp639 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp639, param0);
goto block5;
block5:;
frost$core$Int64 $tmp640 = *(&local1);
int64_t $tmp641 = $tmp624.value;
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641 - $tmp642;
frost$core$Int64 $tmp644 = (frost$core$Int64) {$tmp643};
frost$core$UInt64 $tmp645 = frost$core$Int64$convert$R$frost$core$UInt64($tmp644);
if ($tmp626) goto block9; else goto block10;
block9:;
uint64_t $tmp646 = $tmp645.value;
uint64_t $tmp647 = $tmp628.value;
bool $tmp648 = $tmp646 >= $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block8; else goto block4;
block10:;
uint64_t $tmp651 = $tmp645.value;
uint64_t $tmp652 = $tmp628.value;
bool $tmp653 = $tmp651 > $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block8; else goto block4;
block8:;
int64_t $tmp656 = $tmp640.value;
int64_t $tmp657 = $tmp627.value;
int64_t $tmp658 = $tmp656 + $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
*(&local1) = $tmp659;
goto block3;
block4:;
// line 572
frost$core$MutableString* $tmp660 = *(&local0);
frost$core$String* $tmp661 = frost$core$MutableString$finish$R$frost$core$String($tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing REF($78:frost.core.String)
frost$core$MutableString* $tmp662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp661;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp663 = (frost$core$Int64) {0};
int64_t $tmp664 = param0.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 >= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s670, $tmp669, &$s671);
abort(); // unreachable
block1:;
// line 581
frost$core$MutableString* $tmp672 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp672);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$MutableString* $tmp673 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local0) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($11:frost.core.MutableString)
// line 582
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp676 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp674, param0, $tmp675);
frost$core$Int64 $tmp677 = $tmp676.min;
*(&local1) = $tmp677;
frost$core$Int64 $tmp678 = $tmp676.max;
frost$core$Bit $tmp679 = $tmp676.inclusive;
bool $tmp680 = $tmp679.value;
frost$core$Int64 $tmp681 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp682 = frost$core$Int64$convert$R$frost$core$UInt64($tmp681);
if ($tmp680) goto block6; else goto block7;
block6:;
int64_t $tmp683 = $tmp677.value;
int64_t $tmp684 = $tmp678.value;
bool $tmp685 = $tmp683 <= $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block7:;
int64_t $tmp688 = $tmp677.value;
int64_t $tmp689 = $tmp678.value;
bool $tmp690 = $tmp688 < $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block3; else goto block4;
block3:;
// line 583
frost$core$MutableString* $tmp693 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp693, param1);
goto block5;
block5:;
frost$core$Int64 $tmp694 = *(&local1);
int64_t $tmp695 = $tmp678.value;
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695 - $tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {$tmp697};
frost$core$UInt64 $tmp699 = frost$core$Int64$convert$R$frost$core$UInt64($tmp698);
if ($tmp680) goto block9; else goto block10;
block9:;
uint64_t $tmp700 = $tmp699.value;
uint64_t $tmp701 = $tmp682.value;
bool $tmp702 = $tmp700 >= $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block8; else goto block4;
block10:;
uint64_t $tmp705 = $tmp699.value;
uint64_t $tmp706 = $tmp682.value;
bool $tmp707 = $tmp705 > $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block8; else goto block4;
block8:;
int64_t $tmp710 = $tmp694.value;
int64_t $tmp711 = $tmp681.value;
int64_t $tmp712 = $tmp710 + $tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {$tmp712};
*(&local1) = $tmp713;
goto block3;
block4:;
// line 585
frost$core$MutableString* $tmp714 = *(&local0);
frost$core$String* $tmp715 = frost$core$MutableString$finish$R$frost$core$String($tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($78:frost.core.String)
frost$core$MutableString* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp715;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// line 594
$fn718 $tmp717 = ($fn718) param0->$class->vtable[0];
frost$core$String* $tmp719 = $tmp717(param0);
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing REF($2:frost.core.String)
return $tmp720;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 607
frost$core$Int64* $tmp721 = &param0->_length;
frost$core$Int64 $tmp722 = *$tmp721;
frost$core$Int64* $tmp723 = &param1->_length;
frost$core$Int64 $tmp724 = *$tmp723;
int64_t $tmp725 = $tmp722.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 != $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block2;
block1:;
// line 608
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit(false);
return $tmp730;
block2:;
// line 610
frost$core$Int64 $tmp731 = (frost$core$Int64) {0};
frost$core$Int64* $tmp732 = &param0->_length;
frost$core$Int64 $tmp733 = *$tmp732;
frost$core$Bit $tmp734 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp735 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp731, $tmp733, $tmp734);
frost$core$Int64 $tmp736 = $tmp735.min;
*(&local0) = $tmp736;
frost$core$Int64 $tmp737 = $tmp735.max;
frost$core$Bit $tmp738 = $tmp735.inclusive;
bool $tmp739 = $tmp738.value;
frost$core$Int64 $tmp740 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp741 = frost$core$Int64$convert$R$frost$core$UInt64($tmp740);
if ($tmp739) goto block6; else goto block7;
block6:;
int64_t $tmp742 = $tmp736.value;
int64_t $tmp743 = $tmp737.value;
bool $tmp744 = $tmp742 <= $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block3; else goto block4;
block7:;
int64_t $tmp747 = $tmp736.value;
int64_t $tmp748 = $tmp737.value;
bool $tmp749 = $tmp747 < $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block3; else goto block4;
block3:;
// line 611
frost$core$Char8** $tmp752 = &param0->data;
frost$core$Char8* $tmp753 = *$tmp752;
frost$core$Int64 $tmp754 = *(&local0);
int64_t $tmp755 = $tmp754.value;
frost$core$Char8 $tmp756 = $tmp753[$tmp755];
frost$core$Char8** $tmp757 = &param1->data;
frost$core$Char8* $tmp758 = *$tmp757;
frost$core$Int64 $tmp759 = *(&local0);
int64_t $tmp760 = $tmp759.value;
frost$core$Char8 $tmp761 = $tmp758[$tmp760];
frost$core$Bit $tmp762 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp756, $tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block8; else goto block9;
block8:;
// line 612
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit(false);
return $tmp764;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp765 = *(&local0);
int64_t $tmp766 = $tmp737.value;
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766 - $tmp767;
frost$core$Int64 $tmp769 = (frost$core$Int64) {$tmp768};
frost$core$UInt64 $tmp770 = frost$core$Int64$convert$R$frost$core$UInt64($tmp769);
if ($tmp739) goto block11; else goto block12;
block11:;
uint64_t $tmp771 = $tmp770.value;
uint64_t $tmp772 = $tmp741.value;
bool $tmp773 = $tmp771 >= $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block10; else goto block4;
block12:;
uint64_t $tmp776 = $tmp770.value;
uint64_t $tmp777 = $tmp741.value;
bool $tmp778 = $tmp776 > $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block10; else goto block4;
block10:;
int64_t $tmp781 = $tmp765.value;
int64_t $tmp782 = $tmp740.value;
int64_t $tmp783 = $tmp781 + $tmp782;
frost$core$Int64 $tmp784 = (frost$core$Int64) {$tmp783};
*(&local0) = $tmp784;
goto block3;
block4:;
// line 615
frost$core$Bit $tmp785 = frost$core$Bit$init$builtin_bit(true);
return $tmp785;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Bit local2;
frost$core$Char32 local3;
frost$core$Char32 local4;
// line 626
frost$core$String$Index $tmp786 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp786;
// line 627
frost$core$String$Index $tmp787 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local1) = $tmp787;
// line 628
goto block1;
block1:;
frost$core$String$Index $tmp788 = *(&local0);
frost$core$String$Index$wrapper* $tmp789;
$tmp789 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp789->value = $tmp788;
frost$core$String$Index $tmp790 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp791;
$tmp791 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp791->value = $tmp790;
ITable* $tmp792 = ((frost$core$Comparable*) $tmp789)->$class->itable;
while ($tmp792->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp792 = $tmp792->next;
}
$fn794 $tmp793 = $tmp792->methods[1];
frost$core$Bit $tmp795 = $tmp793(((frost$core$Comparable*) $tmp789), ((frost$core$Comparable*) $tmp791));
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block4; else goto block5;
block4:;
frost$core$String$Index $tmp797 = *(&local1);
frost$core$String$Index$wrapper* $tmp798;
$tmp798 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp798->value = $tmp797;
frost$core$String$Index $tmp799 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp800;
$tmp800 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp800->value = $tmp799;
ITable* $tmp801 = ((frost$core$Comparable*) $tmp798)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[1];
frost$core$Bit $tmp804 = $tmp802(((frost$core$Comparable*) $tmp798), ((frost$core$Comparable*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp800)));
// unreffing REF($21:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp798)));
// unreffing REF($18:frost.core.Comparable<frost.core.String.Index>)
*(&local2) = $tmp804;
goto block6;
block5:;
*(&local2) = $tmp795;
goto block6;
block6:;
frost$core$Bit $tmp805 = *(&local2);
bool $tmp806 = $tmp805.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp791)));
// unreffing REF($12:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp789)));
// unreffing REF($9:frost.core.Comparable<frost.core.String.Index>)
if ($tmp806) goto block2; else goto block3;
block2:;
// line 629
frost$core$String$Index $tmp807 = *(&local0);
frost$core$Char32 $tmp808 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp807);
*(&local3) = $tmp808;
// line 630
frost$core$String$Index $tmp809 = *(&local1);
frost$core$Char32 $tmp810 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp809);
*(&local4) = $tmp810;
// line 631
frost$core$Char32 $tmp811 = *(&local3);
frost$core$Char32 $tmp812 = *(&local4);
frost$core$Bit $tmp813 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp811, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block7; else goto block8;
block7:;
// line 632
frost$core$String$Index $tmp815 = *(&local0);
frost$core$String$Index $tmp816 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp815);
*(&local0) = $tmp816;
// line 633
frost$core$String$Index $tmp817 = *(&local1);
frost$core$String$Index $tmp818 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp817);
*(&local1) = $tmp818;
// line 634
goto block1;
block8:;
// line 636
frost$core$Char32 $tmp819 = *(&local3);
frost$core$Char32 $tmp820 = *(&local4);
frost$core$Bit $tmp821 = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit($tmp819, $tmp820);
return $tmp821;
block3:;
// line 638
frost$core$String$Index $tmp822 = *(&local0);
frost$core$String$Index$wrapper* $tmp823;
$tmp823 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp823->value = $tmp822;
frost$core$String$Index $tmp824 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp825;
$tmp825 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp825->value = $tmp824;
ITable* $tmp826 = ((frost$core$Equatable*) $tmp823)->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[1];
frost$core$Bit $tmp829 = $tmp827(((frost$core$Equatable*) $tmp823), ((frost$core$Equatable*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp825)));
// unreffing REF($77:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp823)));
// unreffing REF($74:frost.core.Equatable<frost.core.String.Index>)
return $tmp829;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 645
frost$core$Int64 $tmp830 = param1.value;
*(&local0) = $tmp830;
// line 646
frost$core$Char8** $tmp831 = &param0->data;
frost$core$Char8* $tmp832 = *$tmp831;
frost$core$Int64 $tmp833 = *(&local0);
int64_t $tmp834 = $tmp833.value;
frost$core$Char8 $tmp835 = $tmp832[$tmp834];
*(&local1) = $tmp835;
// line 647
frost$core$Char8 $tmp836 = *(&local1);
frost$core$Int32 $tmp837 = frost$core$Char8$convert$R$frost$core$Int32($tmp836);
*(&local2) = $tmp837;
// line 648
frost$core$Char8 $tmp838 = *(&local1);
uint8_t $tmp839 = $tmp838.value;
int64_t $tmp840 = ((int64_t) $tmp839) & 255;
bool $tmp841 = $tmp840 < 192;
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block1; else goto block2;
block1:;
// line 649
frost$core$Int32 $tmp844 = *(&local2);
frost$core$Char32 $tmp845 = frost$core$Char32$init$frost$core$Int32($tmp844);
return $tmp845;
block2:;
// line 651
frost$core$Char8 $tmp846 = *(&local1);
uint8_t $tmp847 = $tmp846.value;
int64_t $tmp848 = ((int64_t) $tmp847) & 255;
bool $tmp849 = $tmp848 < 224;
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit($tmp849);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block3; else goto block4;
block3:;
// line 652
frost$core$Int64 $tmp852 = *(&local0);
frost$core$Int64 $tmp853 = (frost$core$Int64) {1};
int64_t $tmp854 = $tmp852.value;
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854 + $tmp855;
frost$core$Int64 $tmp857 = (frost$core$Int64) {$tmp856};
frost$core$Int64* $tmp858 = &param0->_length;
frost$core$Int64 $tmp859 = *$tmp858;
int64_t $tmp860 = $tmp857.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 < $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp865 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s866, $tmp865);
abort(); // unreachable
block5:;
// line 653
frost$core$Int32 $tmp867 = *(&local2);
frost$core$Int32 $tmp868 = (frost$core$Int32) {31};
frost$core$Int32 $tmp869 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp867, $tmp868);
frost$core$Int32 $tmp870 = (frost$core$Int32) {6};
frost$core$Int32 $tmp871 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp869, $tmp870);
frost$core$Char8** $tmp872 = &param0->data;
frost$core$Char8* $tmp873 = *$tmp872;
frost$core$Int64 $tmp874 = *(&local0);
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
int64_t $tmp876 = $tmp874.value;
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876 + $tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {$tmp878};
int64_t $tmp880 = $tmp879.value;
frost$core$Char8 $tmp881 = $tmp873[$tmp880];
frost$core$Int32 $tmp882 = frost$core$Char8$convert$R$frost$core$Int32($tmp881);
frost$core$Int32 $tmp883 = (frost$core$Int32) {63};
frost$core$Int32 $tmp884 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp882, $tmp883);
int32_t $tmp885 = $tmp871.value;
int32_t $tmp886 = $tmp884.value;
int32_t $tmp887 = $tmp885 + $tmp886;
frost$core$Int32 $tmp888 = (frost$core$Int32) {$tmp887};
*(&local2) = $tmp888;
// line 654
frost$core$Int32 $tmp889 = *(&local2);
frost$core$Char32 $tmp890 = frost$core$Char32$init$frost$core$Int32($tmp889);
return $tmp890;
block4:;
// line 656
frost$core$Char8 $tmp891 = *(&local1);
uint8_t $tmp892 = $tmp891.value;
int64_t $tmp893 = ((int64_t) $tmp892) & 255;
bool $tmp894 = $tmp893 < 240;
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit($tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block7; else goto block8;
block7:;
// line 657
frost$core$Int64 $tmp897 = *(&local0);
frost$core$Int64 $tmp898 = (frost$core$Int64) {2};
int64_t $tmp899 = $tmp897.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 + $tmp900;
frost$core$Int64 $tmp902 = (frost$core$Int64) {$tmp901};
frost$core$Int64* $tmp903 = &param0->_length;
frost$core$Int64 $tmp904 = *$tmp903;
int64_t $tmp905 = $tmp902.value;
int64_t $tmp906 = $tmp904.value;
bool $tmp907 = $tmp905 < $tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s911, $tmp910);
abort(); // unreachable
block9:;
// line 658
frost$core$Int32 $tmp912 = *(&local2);
frost$core$Int32 $tmp913 = (frost$core$Int32) {15};
frost$core$Int32 $tmp914 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp912, $tmp913);
frost$core$Int32 $tmp915 = (frost$core$Int32) {12};
frost$core$Int32 $tmp916 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp914, $tmp915);
frost$core$Char8** $tmp917 = &param0->data;
frost$core$Char8* $tmp918 = *$tmp917;
frost$core$Int64 $tmp919 = *(&local0);
frost$core$Int64 $tmp920 = (frost$core$Int64) {1};
int64_t $tmp921 = $tmp919.value;
int64_t $tmp922 = $tmp920.value;
int64_t $tmp923 = $tmp921 + $tmp922;
frost$core$Int64 $tmp924 = (frost$core$Int64) {$tmp923};
int64_t $tmp925 = $tmp924.value;
frost$core$Char8 $tmp926 = $tmp918[$tmp925];
frost$core$Int32 $tmp927 = frost$core$Char8$convert$R$frost$core$Int32($tmp926);
frost$core$Int32 $tmp928 = (frost$core$Int32) {63};
frost$core$Int32 $tmp929 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp927, $tmp928);
frost$core$Int32 $tmp930 = (frost$core$Int32) {6};
frost$core$Int32 $tmp931 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp929, $tmp930);
int32_t $tmp932 = $tmp916.value;
int32_t $tmp933 = $tmp931.value;
int32_t $tmp934 = $tmp932 + $tmp933;
frost$core$Int32 $tmp935 = (frost$core$Int32) {$tmp934};
frost$core$Char8** $tmp936 = &param0->data;
frost$core$Char8* $tmp937 = *$tmp936;
frost$core$Int64 $tmp938 = *(&local0);
frost$core$Int64 $tmp939 = (frost$core$Int64) {2};
int64_t $tmp940 = $tmp938.value;
int64_t $tmp941 = $tmp939.value;
int64_t $tmp942 = $tmp940 + $tmp941;
frost$core$Int64 $tmp943 = (frost$core$Int64) {$tmp942};
int64_t $tmp944 = $tmp943.value;
frost$core$Char8 $tmp945 = $tmp937[$tmp944];
frost$core$Int32 $tmp946 = frost$core$Char8$convert$R$frost$core$Int32($tmp945);
frost$core$Int32 $tmp947 = (frost$core$Int32) {63};
frost$core$Int32 $tmp948 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp946, $tmp947);
int32_t $tmp949 = $tmp935.value;
int32_t $tmp950 = $tmp948.value;
int32_t $tmp951 = $tmp949 + $tmp950;
frost$core$Int32 $tmp952 = (frost$core$Int32) {$tmp951};
*(&local2) = $tmp952;
// line 660
frost$core$Int32 $tmp953 = *(&local2);
frost$core$Char32 $tmp954 = frost$core$Char32$init$frost$core$Int32($tmp953);
return $tmp954;
block8:;
// line 662
frost$core$Int64 $tmp955 = *(&local0);
frost$core$Int64 $tmp956 = (frost$core$Int64) {3};
int64_t $tmp957 = $tmp955.value;
int64_t $tmp958 = $tmp956.value;
int64_t $tmp959 = $tmp957 + $tmp958;
frost$core$Int64 $tmp960 = (frost$core$Int64) {$tmp959};
frost$core$Int64* $tmp961 = &param0->_length;
frost$core$Int64 $tmp962 = *$tmp961;
int64_t $tmp963 = $tmp960.value;
int64_t $tmp964 = $tmp962.value;
bool $tmp965 = $tmp963 < $tmp964;
frost$core$Bit $tmp966 = (frost$core$Bit) {$tmp965};
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp968 = (frost$core$Int64) {662};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s969, $tmp968);
abort(); // unreachable
block11:;
// line 663
frost$core$Int32 $tmp970 = *(&local2);
frost$core$Int32 $tmp971 = (frost$core$Int32) {7};
frost$core$Int32 $tmp972 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp970, $tmp971);
frost$core$Int32 $tmp973 = (frost$core$Int32) {18};
frost$core$Int32 $tmp974 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp972, $tmp973);
frost$core$Char8** $tmp975 = &param0->data;
frost$core$Char8* $tmp976 = *$tmp975;
frost$core$Int64 $tmp977 = *(&local0);
frost$core$Int64 $tmp978 = (frost$core$Int64) {1};
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978.value;
int64_t $tmp981 = $tmp979 + $tmp980;
frost$core$Int64 $tmp982 = (frost$core$Int64) {$tmp981};
int64_t $tmp983 = $tmp982.value;
frost$core$Char8 $tmp984 = $tmp976[$tmp983];
frost$core$Int32 $tmp985 = frost$core$Char8$convert$R$frost$core$Int32($tmp984);
frost$core$Int32 $tmp986 = (frost$core$Int32) {63};
frost$core$Int32 $tmp987 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp985, $tmp986);
frost$core$Int32 $tmp988 = (frost$core$Int32) {12};
frost$core$Int32 $tmp989 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp987, $tmp988);
int32_t $tmp990 = $tmp974.value;
int32_t $tmp991 = $tmp989.value;
int32_t $tmp992 = $tmp990 + $tmp991;
frost$core$Int32 $tmp993 = (frost$core$Int32) {$tmp992};
frost$core$Char8** $tmp994 = &param0->data;
frost$core$Char8* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = *(&local0);
frost$core$Int64 $tmp997 = (frost$core$Int64) {2};
int64_t $tmp998 = $tmp996.value;
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998 + $tmp999;
frost$core$Int64 $tmp1001 = (frost$core$Int64) {$tmp1000};
int64_t $tmp1002 = $tmp1001.value;
frost$core$Char8 $tmp1003 = $tmp995[$tmp1002];
frost$core$Int32 $tmp1004 = frost$core$Char8$convert$R$frost$core$Int32($tmp1003);
frost$core$Int32 $tmp1005 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1006 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1004, $tmp1005);
frost$core$Int32 $tmp1007 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1008 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1006, $tmp1007);
int32_t $tmp1009 = $tmp993.value;
int32_t $tmp1010 = $tmp1008.value;
int32_t $tmp1011 = $tmp1009 + $tmp1010;
frost$core$Int32 $tmp1012 = (frost$core$Int32) {$tmp1011};
frost$core$Char8** $tmp1013 = &param0->data;
frost$core$Char8* $tmp1014 = *$tmp1013;
frost$core$Int64 $tmp1015 = *(&local0);
frost$core$Int64 $tmp1016 = (frost$core$Int64) {3};
int64_t $tmp1017 = $tmp1015.value;
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {$tmp1019};
int64_t $tmp1021 = $tmp1020.value;
frost$core$Char8 $tmp1022 = $tmp1014[$tmp1021];
frost$core$Int32 $tmp1023 = frost$core$Char8$convert$R$frost$core$Int32($tmp1022);
frost$core$Int32 $tmp1024 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1025 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1023, $tmp1024);
int32_t $tmp1026 = $tmp1012.value;
int32_t $tmp1027 = $tmp1025.value;
int32_t $tmp1028 = $tmp1026 + $tmp1027;
frost$core$Int32 $tmp1029 = (frost$core$Int32) {$tmp1028};
*(&local2) = $tmp1029;
// line 666
frost$core$Int32 $tmp1030 = *(&local2);
frost$core$Char32 $tmp1031 = frost$core$Char32$init$frost$core$Int32($tmp1030);
return $tmp1031;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 675
frost$core$String$Index $tmp1032 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1033 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1032, param1);
frost$core$Char32 $tmp1034 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1033);
return $tmp1034;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 688
frost$core$String$Index $tmp1035 = param1.max;
frost$core$Int64 $tmp1036 = $tmp1035.value;
frost$core$String$Index $tmp1037 = param1.min;
frost$core$Int64 $tmp1038 = $tmp1037.value;
int64_t $tmp1039 = $tmp1036.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 - $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
*(&local0) = $tmp1042;
// line 689
frost$core$Bit $tmp1043 = param1.inclusive;
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block1; else goto block2;
block1:;
// line 690
frost$core$Int64 $tmp1045 = *(&local0);
frost$core$Int64 $tmp1046 = (frost$core$Int64) {1};
int64_t $tmp1047 = $tmp1045.value;
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047 + $tmp1048;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {$tmp1049};
*(&local0) = $tmp1050;
goto block2;
block2:;
// line 692
frost$core$String* $tmp1051 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1052 = &param0->data;
frost$core$Char8* $tmp1053 = *$tmp1052;
frost$core$String$Index $tmp1054 = param1.min;
frost$core$Int64 $tmp1055 = $tmp1054.value;
int64_t $tmp1056 = $tmp1055.value;
frost$core$Char8* $tmp1057 = $tmp1053 + $tmp1056;
frost$core$Int64 $tmp1058 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1051, $tmp1057, $tmp1058, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($24:frost.core.String)
return $tmp1051;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 708
// line 709
frost$core$String$Index$nullable $tmp1059 = param1.min;
frost$core$Bit $tmp1060 = frost$core$Bit$init$builtin_bit($tmp1059.nonnull);
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block1; else goto block3;
block1:;
// line 710
frost$core$String$Index$nullable $tmp1062 = param1.min;
frost$core$Bit $tmp1063 = frost$core$Bit$init$builtin_bit($tmp1062.nonnull);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {710};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1066, $tmp1065, &$s1067);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$String$Index) $tmp1062.value);
goto block2;
block3:;
// line 1
// line 713
frost$core$String$Index $tmp1068 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1068;
goto block2;
block2:;
// line 716
frost$core$Bit $tmp1069 = param1.inclusive;
*(&local1) = $tmp1069;
// line 717
// line 718
frost$core$String$Index$nullable $tmp1070 = param1.max;
frost$core$Bit $tmp1071 = frost$core$Bit$init$builtin_bit($tmp1070.nonnull);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block6; else goto block8;
block6:;
// line 719
frost$core$String$Index$nullable $tmp1073 = param1.max;
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit($tmp1073.nonnull);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {719};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1077, $tmp1076, &$s1078);
abort(); // unreachable
block9:;
*(&local2) = ((frost$core$String$Index) $tmp1073.value);
goto block7;
block8:;
// line 1
// line 722
frost$core$String$Index $tmp1079 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1079;
// line 723
frost$core$Bit $tmp1080 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1080;
goto block7;
block7:;
// line 725
frost$core$String$Index $tmp1081 = *(&local0);
frost$core$String$Index $tmp1082 = *(&local2);
frost$core$Bit $tmp1083 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1084 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1081, $tmp1082, $tmp1083);
frost$core$String* $tmp1085 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing REF($59:frost.core.String)
return $tmp1085;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 733
frost$core$String$Index $tmp1086 = param1.min;
frost$core$Int64 $tmp1087 = $tmp1086.value;
*(&local0) = $tmp1087;
// line 734
frost$core$MutableString* $tmp1088 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1088);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$MutableString* $tmp1089 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local1) = $tmp1088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($5:frost.core.MutableString)
// line 735
frost$core$String$Index $tmp1090 = param1.max;
frost$core$Int64 $tmp1091 = $tmp1090.value;
*(&local2) = $tmp1091;
// line 736
frost$core$Bit $tmp1092 = param1.inclusive;
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block1; else goto block2;
block1:;
// line 737
frost$core$Int64 $tmp1094 = *(&local2);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {1};
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095.value;
int64_t $tmp1098 = $tmp1096 + $tmp1097;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {$tmp1098};
*(&local2) = $tmp1099;
goto block2;
block2:;
// line 739
goto block3;
block3:;
frost$core$Int64 $tmp1100 = *(&local0);
frost$core$Int64 $tmp1101 = *(&local2);
int64_t $tmp1102 = $tmp1100.value;
int64_t $tmp1103 = $tmp1101.value;
bool $tmp1104 = $tmp1102 < $tmp1103;
frost$core$Bit $tmp1105 = (frost$core$Bit) {$tmp1104};
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block4; else goto block5;
block4:;
// line 740
frost$core$Char8** $tmp1107 = &param0->data;
frost$core$Char8* $tmp1108 = *$tmp1107;
frost$core$Int64 $tmp1109 = *(&local0);
int64_t $tmp1110 = $tmp1109.value;
frost$core$Char8 $tmp1111 = $tmp1108[$tmp1110];
*(&local3) = $tmp1111;
// line 741
frost$core$MutableString* $tmp1112 = *(&local1);
frost$core$Char8 $tmp1113 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1112, $tmp1113);
// line 742
frost$core$Int64 $tmp1114 = *(&local0);
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116 + $tmp1117;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {$tmp1118};
*(&local0) = $tmp1119;
// line 743
frost$core$Char8 $tmp1120 = *(&local3);
uint8_t $tmp1121 = $tmp1120.value;
int64_t $tmp1122 = ((int64_t) $tmp1121) & 255;
bool $tmp1123 = $tmp1122 >= 192;
frost$core$Bit $tmp1124 = frost$core$Bit$init$builtin_bit($tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block6; else goto block7;
block6:;
// line 744
frost$core$MutableString* $tmp1126 = *(&local1);
frost$core$Char8** $tmp1127 = &param0->data;
frost$core$Char8* $tmp1128 = *$tmp1127;
frost$core$Int64 $tmp1129 = *(&local0);
int64_t $tmp1130 = $tmp1129.value;
frost$core$Char8 $tmp1131 = $tmp1128[$tmp1130];
frost$core$MutableString$append$frost$core$Char8($tmp1126, $tmp1131);
// line 745
frost$core$Int64 $tmp1132 = *(&local0);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {1};
int64_t $tmp1134 = $tmp1132.value;
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {$tmp1136};
*(&local0) = $tmp1137;
goto block7;
block7:;
// line 747
frost$core$Char8 $tmp1138 = *(&local3);
uint8_t $tmp1139 = $tmp1138.value;
int64_t $tmp1140 = ((int64_t) $tmp1139) & 255;
bool $tmp1141 = $tmp1140 >= 224;
frost$core$Bit $tmp1142 = frost$core$Bit$init$builtin_bit($tmp1141);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block8; else goto block9;
block8:;
// line 748
frost$core$MutableString* $tmp1144 = *(&local1);
frost$core$Char8** $tmp1145 = &param0->data;
frost$core$Char8* $tmp1146 = *$tmp1145;
frost$core$Int64 $tmp1147 = *(&local0);
int64_t $tmp1148 = $tmp1147.value;
frost$core$Char8 $tmp1149 = $tmp1146[$tmp1148];
frost$core$MutableString$append$frost$core$Char8($tmp1144, $tmp1149);
// line 749
frost$core$Int64 $tmp1150 = *(&local0);
frost$core$Int64 $tmp1151 = (frost$core$Int64) {1};
int64_t $tmp1152 = $tmp1150.value;
int64_t $tmp1153 = $tmp1151.value;
int64_t $tmp1154 = $tmp1152 + $tmp1153;
frost$core$Int64 $tmp1155 = (frost$core$Int64) {$tmp1154};
*(&local0) = $tmp1155;
goto block9;
block9:;
// line 751
frost$core$Char8 $tmp1156 = *(&local3);
uint8_t $tmp1157 = $tmp1156.value;
int64_t $tmp1158 = ((int64_t) $tmp1157) & 255;
bool $tmp1159 = $tmp1158 >= 240;
frost$core$Bit $tmp1160 = frost$core$Bit$init$builtin_bit($tmp1159);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block10; else goto block11;
block10:;
// line 752
frost$core$MutableString* $tmp1162 = *(&local1);
frost$core$Char8** $tmp1163 = &param0->data;
frost$core$Char8* $tmp1164 = *$tmp1163;
frost$core$Int64 $tmp1165 = *(&local0);
int64_t $tmp1166 = $tmp1165.value;
frost$core$Char8 $tmp1167 = $tmp1164[$tmp1166];
frost$core$MutableString$append$frost$core$Char8($tmp1162, $tmp1167);
// line 753
frost$core$Int64 $tmp1168 = *(&local0);
frost$core$Int64 $tmp1169 = (frost$core$Int64) {1};
int64_t $tmp1170 = $tmp1168.value;
int64_t $tmp1171 = $tmp1169.value;
int64_t $tmp1172 = $tmp1170 + $tmp1171;
frost$core$Int64 $tmp1173 = (frost$core$Int64) {$tmp1172};
*(&local0) = $tmp1173;
goto block11;
block11:;
goto block3;
block5:;
// line 756
frost$core$MutableString* $tmp1174 = *(&local1);
frost$core$String* $tmp1175 = frost$core$MutableString$finish$R$frost$core$String($tmp1174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing REF($144:frost.core.String)
frost$core$MutableString* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1175;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 767
frost$core$Int64* $tmp1177 = &param0->_length;
frost$core$Int64 $tmp1178 = *$tmp1177;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {0};
frost$core$Bit $tmp1180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1178, $tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block1; else goto block2;
block1:;
// line 768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1182));
return &$s1183;
block2:;
// line 770
// line 771
frost$core$String$Index$nullable $tmp1184 = param1.min;
frost$core$Bit $tmp1185 = frost$core$Bit$init$builtin_bit($tmp1184.nonnull);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block3; else goto block5;
block3:;
// line 772
frost$core$String$Index$nullable $tmp1187 = param1.min;
frost$core$Bit $tmp1188 = frost$core$Bit$init$builtin_bit($tmp1187.nonnull);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1191, $tmp1190, &$s1192);
abort(); // unreachable
block6:;
*(&local0) = ((frost$core$String$Index) $tmp1187.value);
goto block4;
block5:;
// line 1
// line 775
frost$core$String$Index $tmp1193 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1193;
goto block4;
block4:;
// line 778
frost$core$Bit $tmp1194 = param1.inclusive;
*(&local1) = $tmp1194;
// line 779
// line 780
frost$core$String$Index$nullable $tmp1195 = param1.max;
frost$core$Bit $tmp1196 = frost$core$Bit$init$builtin_bit($tmp1195.nonnull);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block8; else goto block10;
block8:;
// line 781
frost$core$String$Index$nullable $tmp1198 = param1.max;
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198.nonnull);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {781};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1202, $tmp1201, &$s1203);
abort(); // unreachable
block11:;
*(&local2) = ((frost$core$String$Index) $tmp1198.value);
goto block9;
block10:;
// line 1
// line 784
frost$core$String$Index $tmp1204 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1204;
// line 785
frost$core$Bit $tmp1205 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1205;
goto block9;
block9:;
// line 787
frost$core$String$Index $tmp1206 = *(&local0);
frost$core$String$Index $tmp1207 = *(&local2);
frost$core$Bit $tmp1208 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1209 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1206, $tmp1207, $tmp1208);
frost$core$String* $tmp1210 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing REF($70:frost.core.String)
return $tmp1210;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$MutableString* local3 = NULL;
frost$core$Char8 local4;
frost$core$Int64 local5;
frost$core$Char8 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
frost$core$Bit local9;
frost$core$Bit local10;
frost$core$Bit local11;
frost$core$Char8 local12;
// line 803
frost$core$Int64* $tmp1211 = &param0->_length;
frost$core$Int64 $tmp1212 = *$tmp1211;
frost$core$Int64 $tmp1213 = (frost$core$Int64) {0};
frost$core$Bit $tmp1214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1212, $tmp1213);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block1; else goto block2;
block1:;
// line 804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1216));
return &$s1217;
block2:;
// line 806
frost$core$Int64 $tmp1218 = param1.step;
*(&local0) = $tmp1218;
// line 808
// line 809
frost$core$String$Index$nullable $tmp1219 = param1.start;
frost$core$Bit $tmp1220 = frost$core$Bit$init$builtin_bit($tmp1219.nonnull);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block3; else goto block5;
block3:;
// line 810
frost$core$String$Index$nullable $tmp1222 = param1.start;
frost$core$Bit $tmp1223 = frost$core$Bit$init$builtin_bit($tmp1222.nonnull);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1226, $tmp1225, &$s1227);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp1228 = ((frost$core$String$Index) $tmp1222.value).value;
*(&local1) = $tmp1228;
goto block4;
block5:;
// line 812
frost$core$Int64 $tmp1229 = *(&local0);
frost$core$Int64 $tmp1230 = (frost$core$Int64) {0};
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 > $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block8; else goto block10;
block8:;
// line 813
frost$core$String$Index $tmp1236 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1237 = $tmp1236.value;
*(&local1) = $tmp1237;
goto block9;
block10:;
// line 1
// line 816
frost$core$String$Index $tmp1238 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1239 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1238);
frost$core$Int64 $tmp1240 = $tmp1239.value;
*(&local1) = $tmp1240;
goto block9;
block9:;
goto block4;
block4:;
// line 819
// line 820
frost$core$String$Index$nullable $tmp1241 = param1.end;
frost$core$Bit $tmp1242 = frost$core$Bit$init$builtin_bit($tmp1241.nonnull);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block11; else goto block13;
block11:;
// line 821
frost$core$String$Index$nullable $tmp1244 = param1.end;
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244.nonnull);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {821};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1248, $tmp1247, &$s1249);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp1250 = ((frost$core$String$Index) $tmp1244.value).value;
*(&local2) = $tmp1250;
goto block12;
block13:;
// line 823
frost$core$Int64 $tmp1251 = *(&local0);
frost$core$Int64 $tmp1252 = (frost$core$Int64) {0};
int64_t $tmp1253 = $tmp1251.value;
int64_t $tmp1254 = $tmp1252.value;
bool $tmp1255 = $tmp1253 > $tmp1254;
frost$core$Bit $tmp1256 = (frost$core$Bit) {$tmp1255};
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block16; else goto block18;
block16:;
// line 824
frost$core$String$Index $tmp1258 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1259 = $tmp1258.value;
*(&local2) = $tmp1259;
goto block17;
block18:;
// line 1
// line 827
frost$core$String$Index $tmp1260 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1261 = $tmp1260.value;
*(&local2) = $tmp1261;
goto block17;
block17:;
goto block12;
block12:;
// line 830
frost$core$MutableString* $tmp1262 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1262);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$MutableString* $tmp1263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local3) = $tmp1262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing REF($98:frost.core.MutableString)
// line 831
frost$core$Int64 $tmp1264 = param1.step;
frost$core$Int64 $tmp1265 = (frost$core$Int64) {0};
int64_t $tmp1266 = $tmp1264.value;
int64_t $tmp1267 = $tmp1265.value;
bool $tmp1268 = $tmp1266 > $tmp1267;
frost$core$Bit $tmp1269 = (frost$core$Bit) {$tmp1268};
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block19; else goto block21;
block19:;
// line 832
goto block22;
block22:;
frost$core$Int64 $tmp1271 = *(&local1);
frost$core$Int64 $tmp1272 = *(&local2);
int64_t $tmp1273 = $tmp1271.value;
int64_t $tmp1274 = $tmp1272.value;
bool $tmp1275 = $tmp1273 < $tmp1274;
frost$core$Bit $tmp1276 = (frost$core$Bit) {$tmp1275};
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block23; else goto block24;
block23:;
// line 833
frost$core$Char8** $tmp1278 = &param0->data;
frost$core$Char8* $tmp1279 = *$tmp1278;
frost$core$Int64 $tmp1280 = *(&local1);
int64_t $tmp1281 = $tmp1280.value;
frost$core$Char8 $tmp1282 = $tmp1279[$tmp1281];
*(&local4) = $tmp1282;
// line 834
frost$core$MutableString* $tmp1283 = *(&local3);
frost$core$Char8 $tmp1284 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1283, $tmp1284);
// line 835
frost$core$Int64 $tmp1285 = *(&local1);
frost$core$Int64 $tmp1286 = (frost$core$Int64) {1};
int64_t $tmp1287 = $tmp1285.value;
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287 + $tmp1288;
frost$core$Int64 $tmp1290 = (frost$core$Int64) {$tmp1289};
*(&local1) = $tmp1290;
// line 836
frost$core$Char8 $tmp1291 = *(&local4);
uint8_t $tmp1292 = $tmp1291.value;
int64_t $tmp1293 = ((int64_t) $tmp1292) & 255;
bool $tmp1294 = $tmp1293 >= 192;
frost$core$Bit $tmp1295 = frost$core$Bit$init$builtin_bit($tmp1294);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block25; else goto block26;
block25:;
// line 837
frost$core$MutableString* $tmp1297 = *(&local3);
frost$core$Char8** $tmp1298 = &param0->data;
frost$core$Char8* $tmp1299 = *$tmp1298;
frost$core$Int64 $tmp1300 = *(&local1);
int64_t $tmp1301 = $tmp1300.value;
frost$core$Char8 $tmp1302 = $tmp1299[$tmp1301];
frost$core$MutableString$append$frost$core$Char8($tmp1297, $tmp1302);
// line 838
frost$core$Int64 $tmp1303 = *(&local1);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {1};
int64_t $tmp1305 = $tmp1303.value;
int64_t $tmp1306 = $tmp1304.value;
int64_t $tmp1307 = $tmp1305 + $tmp1306;
frost$core$Int64 $tmp1308 = (frost$core$Int64) {$tmp1307};
*(&local1) = $tmp1308;
goto block26;
block26:;
// line 840
frost$core$Char8 $tmp1309 = *(&local4);
uint8_t $tmp1310 = $tmp1309.value;
int64_t $tmp1311 = ((int64_t) $tmp1310) & 255;
bool $tmp1312 = $tmp1311 >= 224;
frost$core$Bit $tmp1313 = frost$core$Bit$init$builtin_bit($tmp1312);
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block27; else goto block28;
block27:;
// line 841
frost$core$MutableString* $tmp1315 = *(&local3);
frost$core$Char8** $tmp1316 = &param0->data;
frost$core$Char8* $tmp1317 = *$tmp1316;
frost$core$Int64 $tmp1318 = *(&local1);
int64_t $tmp1319 = $tmp1318.value;
frost$core$Char8 $tmp1320 = $tmp1317[$tmp1319];
frost$core$MutableString$append$frost$core$Char8($tmp1315, $tmp1320);
// line 842
frost$core$Int64 $tmp1321 = *(&local1);
frost$core$Int64 $tmp1322 = (frost$core$Int64) {1};
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322.value;
int64_t $tmp1325 = $tmp1323 + $tmp1324;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {$tmp1325};
*(&local1) = $tmp1326;
goto block28;
block28:;
// line 844
frost$core$Char8 $tmp1327 = *(&local4);
uint8_t $tmp1328 = $tmp1327.value;
int64_t $tmp1329 = ((int64_t) $tmp1328) & 255;
bool $tmp1330 = $tmp1329 >= 240;
frost$core$Bit $tmp1331 = frost$core$Bit$init$builtin_bit($tmp1330);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block29; else goto block30;
block29:;
// line 845
frost$core$MutableString* $tmp1333 = *(&local3);
frost$core$Char8** $tmp1334 = &param0->data;
frost$core$Char8* $tmp1335 = *$tmp1334;
frost$core$Int64 $tmp1336 = *(&local1);
int64_t $tmp1337 = $tmp1336.value;
frost$core$Char8 $tmp1338 = $tmp1335[$tmp1337];
frost$core$MutableString$append$frost$core$Char8($tmp1333, $tmp1338);
// line 846
frost$core$Int64 $tmp1339 = *(&local1);
frost$core$Int64 $tmp1340 = (frost$core$Int64) {1};
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341 + $tmp1342;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {$tmp1343};
*(&local1) = $tmp1344;
goto block30;
block30:;
// line 848
frost$core$Int64 $tmp1345 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1346 = *(&local0);
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1348 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1345, $tmp1346, $tmp1347);
frost$core$Int64 $tmp1349 = $tmp1348.min;
*(&local5) = $tmp1349;
frost$core$Int64 $tmp1350 = $tmp1348.max;
frost$core$Bit $tmp1351 = $tmp1348.inclusive;
bool $tmp1352 = $tmp1351.value;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1354 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1353);
if ($tmp1352) goto block34; else goto block35;
block34:;
int64_t $tmp1355 = $tmp1349.value;
int64_t $tmp1356 = $tmp1350.value;
bool $tmp1357 = $tmp1355 <= $tmp1356;
frost$core$Bit $tmp1358 = (frost$core$Bit) {$tmp1357};
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block31; else goto block32;
block35:;
int64_t $tmp1360 = $tmp1349.value;
int64_t $tmp1361 = $tmp1350.value;
bool $tmp1362 = $tmp1360 < $tmp1361;
frost$core$Bit $tmp1363 = (frost$core$Bit) {$tmp1362};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block31; else goto block32;
block31:;
// line 849
frost$core$Int64 $tmp1365 = *(&local1);
frost$core$Int64 $tmp1366 = *(&local2);
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366.value;
bool $tmp1369 = $tmp1367 >= $tmp1368;
frost$core$Bit $tmp1370 = (frost$core$Bit) {$tmp1369};
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block36; else goto block37;
block36:;
// line 850
frost$core$MutableString* $tmp1372 = *(&local3);
$fn1374 $tmp1373 = ($fn1374) ((frost$core$Object*) $tmp1372)->$class->vtable[0];
frost$core$String* $tmp1375 = $tmp1373(((frost$core$Object*) $tmp1372));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
// unreffing REF($264:frost.core.String)
frost$core$MutableString* $tmp1376 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1375;
block37:;
// line 852
frost$core$Int64 $tmp1377 = *(&local1);
frost$core$String$Index $tmp1378 = frost$core$String$Index$init$frost$core$Int64($tmp1377);
frost$core$String$Index $tmp1379 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1378);
frost$core$Int64 $tmp1380 = $tmp1379.value;
*(&local1) = $tmp1380;
goto block33;
block33:;
frost$core$Int64 $tmp1381 = *(&local5);
int64_t $tmp1382 = $tmp1350.value;
int64_t $tmp1383 = $tmp1381.value;
int64_t $tmp1384 = $tmp1382 - $tmp1383;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {$tmp1384};
frost$core$UInt64 $tmp1386 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1385);
if ($tmp1352) goto block39; else goto block40;
block39:;
uint64_t $tmp1387 = $tmp1386.value;
uint64_t $tmp1388 = $tmp1354.value;
bool $tmp1389 = $tmp1387 >= $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block38; else goto block32;
block40:;
uint64_t $tmp1392 = $tmp1386.value;
uint64_t $tmp1393 = $tmp1354.value;
bool $tmp1394 = $tmp1392 > $tmp1393;
frost$core$Bit $tmp1395 = (frost$core$Bit) {$tmp1394};
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block38; else goto block32;
block38:;
int64_t $tmp1397 = $tmp1381.value;
int64_t $tmp1398 = $tmp1353.value;
int64_t $tmp1399 = $tmp1397 + $tmp1398;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {$tmp1399};
*(&local5) = $tmp1400;
goto block31;
block32:;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 857
frost$core$Int64 $tmp1401 = param1.step;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {0};
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402.value;
bool $tmp1405 = $tmp1403 < $tmp1404;
frost$core$Bit $tmp1406 = (frost$core$Bit) {$tmp1405};
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp1408 = (frost$core$Int64) {857};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1409, $tmp1408);
abort(); // unreachable
block41:;
// line 858
goto block43;
block43:;
frost$core$Int64 $tmp1410 = *(&local1);
frost$core$Int64 $tmp1411 = *(&local2);
int64_t $tmp1412 = $tmp1410.value;
int64_t $tmp1413 = $tmp1411.value;
bool $tmp1414 = $tmp1412 > $tmp1413;
frost$core$Bit $tmp1415 = (frost$core$Bit) {$tmp1414};
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block44; else goto block45;
block44:;
// line 859
frost$core$Char8** $tmp1417 = &param0->data;
frost$core$Char8* $tmp1418 = *$tmp1417;
frost$core$Int64 $tmp1419 = *(&local1);
int64_t $tmp1420 = $tmp1419.value;
frost$core$Char8 $tmp1421 = $tmp1418[$tmp1420];
*(&local6) = $tmp1421;
// line 860
frost$core$MutableString* $tmp1422 = *(&local3);
frost$core$Char8 $tmp1423 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1422, $tmp1423);
// line 861
frost$core$Int64 $tmp1424 = *(&local1);
*(&local7) = $tmp1424;
// line 862
frost$core$Int64 $tmp1425 = *(&local1);
frost$core$Int64 $tmp1426 = (frost$core$Int64) {1};
int64_t $tmp1427 = $tmp1425.value;
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427 + $tmp1428;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {$tmp1429};
*(&local1) = $tmp1430;
// line 863
frost$core$Char8 $tmp1431 = *(&local6);
uint8_t $tmp1432 = $tmp1431.value;
int64_t $tmp1433 = ((int64_t) $tmp1432) & 255;
bool $tmp1434 = $tmp1433 >= 192;
frost$core$Bit $tmp1435 = frost$core$Bit$init$builtin_bit($tmp1434);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block46; else goto block47;
block46:;
// line 864
frost$core$MutableString* $tmp1437 = *(&local3);
frost$core$Char8** $tmp1438 = &param0->data;
frost$core$Char8* $tmp1439 = *$tmp1438;
frost$core$Int64 $tmp1440 = *(&local1);
int64_t $tmp1441 = $tmp1440.value;
frost$core$Char8 $tmp1442 = $tmp1439[$tmp1441];
frost$core$MutableString$append$frost$core$Char8($tmp1437, $tmp1442);
// line 865
frost$core$Int64 $tmp1443 = *(&local1);
frost$core$Int64 $tmp1444 = (frost$core$Int64) {1};
int64_t $tmp1445 = $tmp1443.value;
int64_t $tmp1446 = $tmp1444.value;
int64_t $tmp1447 = $tmp1445 + $tmp1446;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {$tmp1447};
*(&local1) = $tmp1448;
goto block47;
block47:;
// line 867
frost$core$Char8 $tmp1449 = *(&local6);
uint8_t $tmp1450 = $tmp1449.value;
int64_t $tmp1451 = ((int64_t) $tmp1450) & 255;
bool $tmp1452 = $tmp1451 >= 224;
frost$core$Bit $tmp1453 = frost$core$Bit$init$builtin_bit($tmp1452);
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block48; else goto block49;
block48:;
// line 868
frost$core$MutableString* $tmp1455 = *(&local3);
frost$core$Char8** $tmp1456 = &param0->data;
frost$core$Char8* $tmp1457 = *$tmp1456;
frost$core$Int64 $tmp1458 = *(&local1);
int64_t $tmp1459 = $tmp1458.value;
frost$core$Char8 $tmp1460 = $tmp1457[$tmp1459];
frost$core$MutableString$append$frost$core$Char8($tmp1455, $tmp1460);
// line 869
frost$core$Int64 $tmp1461 = *(&local1);
frost$core$Int64 $tmp1462 = (frost$core$Int64) {1};
int64_t $tmp1463 = $tmp1461.value;
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463 + $tmp1464;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {$tmp1465};
*(&local1) = $tmp1466;
goto block49;
block49:;
// line 871
frost$core$Char8 $tmp1467 = *(&local6);
uint8_t $tmp1468 = $tmp1467.value;
int64_t $tmp1469 = ((int64_t) $tmp1468) & 255;
bool $tmp1470 = $tmp1469 >= 240;
frost$core$Bit $tmp1471 = frost$core$Bit$init$builtin_bit($tmp1470);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block50; else goto block51;
block50:;
// line 872
frost$core$MutableString* $tmp1473 = *(&local3);
frost$core$Char8** $tmp1474 = &param0->data;
frost$core$Char8* $tmp1475 = *$tmp1474;
frost$core$Int64 $tmp1476 = *(&local1);
int64_t $tmp1477 = $tmp1476.value;
frost$core$Char8 $tmp1478 = $tmp1475[$tmp1477];
frost$core$MutableString$append$frost$core$Char8($tmp1473, $tmp1478);
goto block51;
block51:;
// line 874
frost$core$Int64 $tmp1479 = *(&local7);
frost$core$Int64 $tmp1480 = (frost$core$Int64) {1};
int64_t $tmp1481 = $tmp1479.value;
int64_t $tmp1482 = $tmp1480.value;
int64_t $tmp1483 = $tmp1481 - $tmp1482;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {$tmp1483};
*(&local1) = $tmp1484;
// line 875
goto block52;
block52:;
frost$core$Char8** $tmp1485 = &param0->data;
frost$core$Char8* $tmp1486 = *$tmp1485;
frost$core$Int64 $tmp1487 = *(&local1);
int64_t $tmp1488 = $tmp1487.value;
frost$core$Char8 $tmp1489 = $tmp1486[$tmp1488];
uint8_t $tmp1490 = $tmp1489.value;
int64_t $tmp1491 = ((int64_t) $tmp1490) & 255;
bool $tmp1492 = $tmp1491 >= 128;
frost$core$Char8** $tmp1493 = &param0->data;
frost$core$Char8* $tmp1494 = *$tmp1493;
frost$core$Int64 $tmp1495 = *(&local1);
int64_t $tmp1496 = $tmp1495.value;
frost$core$Char8 $tmp1497 = $tmp1494[$tmp1496];
uint8_t $tmp1498 = $tmp1497.value;
int64_t $tmp1499 = ((int64_t) $tmp1498) & 255;
bool $tmp1500 = $tmp1499 < 192;
bool $tmp1501 = $tmp1492 & $tmp1500;
frost$core$Bit $tmp1502 = frost$core$Bit$init$builtin_bit($tmp1501);
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block53; else goto block54;
block53:;
// line 876
frost$core$Int64 $tmp1504 = *(&local1);
frost$core$Int64 $tmp1505 = (frost$core$Int64) {1};
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505.value;
int64_t $tmp1508 = $tmp1506 - $tmp1507;
frost$core$Int64 $tmp1509 = (frost$core$Int64) {$tmp1508};
*(&local1) = $tmp1509;
goto block52;
block54:;
// line 878
frost$core$Int64 $tmp1510 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1511 = *(&local0);
frost$core$Int64 $tmp1512 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1513 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1514 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1510, $tmp1511, $tmp1512, $tmp1513);
frost$core$Int64 $tmp1515 = $tmp1514.start;
*(&local8) = $tmp1515;
frost$core$Int64 $tmp1516 = $tmp1514.end;
frost$core$Int64 $tmp1517 = $tmp1514.step;
frost$core$UInt64 $tmp1518 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1517);
frost$core$Int64 $tmp1519 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1517);
frost$core$UInt64 $tmp1520 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1519);
frost$core$Bit $tmp1521 = $tmp1514.inclusive;
bool $tmp1522 = $tmp1521.value;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {0};
int64_t $tmp1524 = $tmp1517.value;
int64_t $tmp1525 = $tmp1523.value;
bool $tmp1526 = $tmp1524 >= $tmp1525;
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block58; else goto block59;
block58:;
if ($tmp1522) goto block60; else goto block61;
block60:;
int64_t $tmp1529 = $tmp1515.value;
int64_t $tmp1530 = $tmp1516.value;
bool $tmp1531 = $tmp1529 <= $tmp1530;
frost$core$Bit $tmp1532 = (frost$core$Bit) {$tmp1531};
bool $tmp1533 = $tmp1532.value;
if ($tmp1533) goto block55; else goto block56;
block61:;
int64_t $tmp1534 = $tmp1515.value;
int64_t $tmp1535 = $tmp1516.value;
bool $tmp1536 = $tmp1534 < $tmp1535;
frost$core$Bit $tmp1537 = (frost$core$Bit) {$tmp1536};
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block55; else goto block56;
block59:;
if ($tmp1522) goto block62; else goto block63;
block62:;
int64_t $tmp1539 = $tmp1515.value;
int64_t $tmp1540 = $tmp1516.value;
bool $tmp1541 = $tmp1539 >= $tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block55; else goto block56;
block63:;
int64_t $tmp1544 = $tmp1515.value;
int64_t $tmp1545 = $tmp1516.value;
bool $tmp1546 = $tmp1544 > $tmp1545;
frost$core$Bit $tmp1547 = (frost$core$Bit) {$tmp1546};
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block55; else goto block56;
block55:;
// line 879
frost$core$Int64 $tmp1549 = *(&local1);
frost$core$Int64 $tmp1550 = *(&local2);
int64_t $tmp1551 = $tmp1549.value;
int64_t $tmp1552 = $tmp1550.value;
bool $tmp1553 = $tmp1551 <= $tmp1552;
frost$core$Bit $tmp1554 = (frost$core$Bit) {$tmp1553};
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block64; else goto block65;
block64:;
// line 880
frost$core$MutableString* $tmp1556 = *(&local3);
$fn1558 $tmp1557 = ($fn1558) ((frost$core$Object*) $tmp1556)->$class->vtable[0];
frost$core$String* $tmp1559 = $tmp1557(((frost$core$Object*) $tmp1556));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing REF($527:frost.core.String)
frost$core$MutableString* $tmp1560 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1559;
block65:;
// line 882
frost$core$Int64 $tmp1561 = *(&local1);
frost$core$String$Index $tmp1562 = frost$core$String$Index$init$frost$core$Int64($tmp1561);
frost$core$String$Index $tmp1563 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1562);
frost$core$Int64 $tmp1564 = $tmp1563.value;
*(&local1) = $tmp1564;
goto block57;
block57:;
frost$core$Int64 $tmp1565 = *(&local8);
if ($tmp1528) goto block67; else goto block68;
block67:;
int64_t $tmp1566 = $tmp1516.value;
int64_t $tmp1567 = $tmp1565.value;
int64_t $tmp1568 = $tmp1566 - $tmp1567;
frost$core$Int64 $tmp1569 = (frost$core$Int64) {$tmp1568};
frost$core$UInt64 $tmp1570 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1569);
if ($tmp1522) goto block69; else goto block70;
block69:;
uint64_t $tmp1571 = $tmp1570.value;
uint64_t $tmp1572 = $tmp1518.value;
bool $tmp1573 = $tmp1571 >= $tmp1572;
frost$core$Bit $tmp1574 = (frost$core$Bit) {$tmp1573};
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block66; else goto block56;
block70:;
uint64_t $tmp1576 = $tmp1570.value;
uint64_t $tmp1577 = $tmp1518.value;
bool $tmp1578 = $tmp1576 > $tmp1577;
frost$core$Bit $tmp1579 = (frost$core$Bit) {$tmp1578};
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block66; else goto block56;
block68:;
int64_t $tmp1581 = $tmp1565.value;
int64_t $tmp1582 = $tmp1516.value;
int64_t $tmp1583 = $tmp1581 - $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {$tmp1583};
frost$core$UInt64 $tmp1585 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1584);
if ($tmp1522) goto block71; else goto block72;
block71:;
uint64_t $tmp1586 = $tmp1585.value;
uint64_t $tmp1587 = $tmp1520.value;
bool $tmp1588 = $tmp1586 >= $tmp1587;
frost$core$Bit $tmp1589 = (frost$core$Bit) {$tmp1588};
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block66; else goto block56;
block72:;
uint64_t $tmp1591 = $tmp1585.value;
uint64_t $tmp1592 = $tmp1520.value;
bool $tmp1593 = $tmp1591 > $tmp1592;
frost$core$Bit $tmp1594 = (frost$core$Bit) {$tmp1593};
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block66; else goto block56;
block66:;
int64_t $tmp1596 = $tmp1565.value;
int64_t $tmp1597 = $tmp1517.value;
int64_t $tmp1598 = $tmp1596 + $tmp1597;
frost$core$Int64 $tmp1599 = (frost$core$Int64) {$tmp1598};
*(&local8) = $tmp1599;
goto block55;
block56:;
goto block43;
block45:;
goto block20;
block20:;
// line 886
frost$core$Bit $tmp1600 = param1.inclusive;
bool $tmp1601 = $tmp1600.value;
if ($tmp1601) goto block75; else goto block76;
block75:;
*(&local11) = $tmp1600;
goto block77;
block76:;
frost$core$String$Index$nullable $tmp1602 = param1.end;
frost$core$Bit $tmp1603 = frost$core$Bit$init$builtin_bit(!$tmp1602.nonnull);
*(&local11) = $tmp1603;
goto block77;
block77:;
frost$core$Bit $tmp1604 = *(&local11);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block78; else goto block79;
block78:;
frost$core$Int64 $tmp1606 = *(&local1);
frost$core$Int64 $tmp1607 = *(&local2);
frost$core$Bit $tmp1608 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1606, $tmp1607);
*(&local10) = $tmp1608;
goto block80;
block79:;
*(&local10) = $tmp1604;
goto block80;
block80:;
frost$core$Bit $tmp1609 = *(&local10);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block81; else goto block82;
block81:;
frost$core$Int64 $tmp1611 = *(&local2);
frost$core$Int64* $tmp1612 = &param0->_length;
frost$core$Int64 $tmp1613 = *$tmp1612;
int64_t $tmp1614 = $tmp1611.value;
int64_t $tmp1615 = $tmp1613.value;
bool $tmp1616 = $tmp1614 < $tmp1615;
frost$core$Bit $tmp1617 = (frost$core$Bit) {$tmp1616};
*(&local9) = $tmp1617;
goto block83;
block82:;
*(&local9) = $tmp1609;
goto block83;
block83:;
frost$core$Bit $tmp1618 = *(&local9);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block73; else goto block74;
block73:;
// line 887
frost$core$Char8** $tmp1620 = &param0->data;
frost$core$Char8* $tmp1621 = *$tmp1620;
frost$core$Int64 $tmp1622 = *(&local1);
int64_t $tmp1623 = $tmp1622.value;
frost$core$Char8 $tmp1624 = $tmp1621[$tmp1623];
*(&local12) = $tmp1624;
// line 888
frost$core$MutableString* $tmp1625 = *(&local3);
frost$core$Char8 $tmp1626 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1625, $tmp1626);
// line 889
frost$core$Int64 $tmp1627 = *(&local1);
frost$core$Int64 $tmp1628 = (frost$core$Int64) {1};
int64_t $tmp1629 = $tmp1627.value;
int64_t $tmp1630 = $tmp1628.value;
int64_t $tmp1631 = $tmp1629 + $tmp1630;
frost$core$Int64 $tmp1632 = (frost$core$Int64) {$tmp1631};
*(&local1) = $tmp1632;
// line 890
frost$core$Char8 $tmp1633 = *(&local12);
uint8_t $tmp1634 = $tmp1633.value;
int64_t $tmp1635 = ((int64_t) $tmp1634) & 255;
bool $tmp1636 = $tmp1635 >= 192;
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit($tmp1636);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block84; else goto block85;
block84:;
// line 891
frost$core$MutableString* $tmp1639 = *(&local3);
frost$core$Char8** $tmp1640 = &param0->data;
frost$core$Char8* $tmp1641 = *$tmp1640;
frost$core$Int64 $tmp1642 = *(&local1);
int64_t $tmp1643 = $tmp1642.value;
frost$core$Char8 $tmp1644 = $tmp1641[$tmp1643];
frost$core$MutableString$append$frost$core$Char8($tmp1639, $tmp1644);
// line 892
frost$core$Int64 $tmp1645 = *(&local1);
frost$core$Int64 $tmp1646 = (frost$core$Int64) {1};
int64_t $tmp1647 = $tmp1645.value;
int64_t $tmp1648 = $tmp1646.value;
int64_t $tmp1649 = $tmp1647 + $tmp1648;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {$tmp1649};
*(&local1) = $tmp1650;
goto block85;
block85:;
// line 894
frost$core$Char8 $tmp1651 = *(&local12);
uint8_t $tmp1652 = $tmp1651.value;
int64_t $tmp1653 = ((int64_t) $tmp1652) & 255;
bool $tmp1654 = $tmp1653 >= 224;
frost$core$Bit $tmp1655 = frost$core$Bit$init$builtin_bit($tmp1654);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block86; else goto block87;
block86:;
// line 895
frost$core$MutableString* $tmp1657 = *(&local3);
frost$core$Char8** $tmp1658 = &param0->data;
frost$core$Char8* $tmp1659 = *$tmp1658;
frost$core$Int64 $tmp1660 = *(&local1);
int64_t $tmp1661 = $tmp1660.value;
frost$core$Char8 $tmp1662 = $tmp1659[$tmp1661];
frost$core$MutableString$append$frost$core$Char8($tmp1657, $tmp1662);
// line 896
frost$core$Int64 $tmp1663 = *(&local1);
frost$core$Int64 $tmp1664 = (frost$core$Int64) {1};
int64_t $tmp1665 = $tmp1663.value;
int64_t $tmp1666 = $tmp1664.value;
int64_t $tmp1667 = $tmp1665 + $tmp1666;
frost$core$Int64 $tmp1668 = (frost$core$Int64) {$tmp1667};
*(&local1) = $tmp1668;
goto block87;
block87:;
// line 898
frost$core$Char8 $tmp1669 = *(&local12);
uint8_t $tmp1670 = $tmp1669.value;
int64_t $tmp1671 = ((int64_t) $tmp1670) & 255;
bool $tmp1672 = $tmp1671 >= 240;
frost$core$Bit $tmp1673 = frost$core$Bit$init$builtin_bit($tmp1672);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block88; else goto block89;
block88:;
// line 899
frost$core$MutableString* $tmp1675 = *(&local3);
frost$core$Char8** $tmp1676 = &param0->data;
frost$core$Char8* $tmp1677 = *$tmp1676;
frost$core$Int64 $tmp1678 = *(&local1);
int64_t $tmp1679 = $tmp1678.value;
frost$core$Char8 $tmp1680 = $tmp1677[$tmp1679];
frost$core$MutableString$append$frost$core$Char8($tmp1675, $tmp1680);
goto block89;
block89:;
goto block74;
block74:;
// line 902
frost$core$MutableString* $tmp1681 = *(&local3);
frost$core$String* $tmp1682 = frost$core$MutableString$finish$R$frost$core$String($tmp1681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// unreffing REF($722:frost.core.String)
frost$core$MutableString* $tmp1683 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1682;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1684 = param1.min;
frost$core$Bit $tmp1685 = frost$core$Bit$init$builtin_bit($tmp1684.nonnull);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1687 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1688 = param1.min;
frost$core$Bit $tmp1689 = frost$core$Bit$init$builtin_bit($tmp1688.nonnull);
bool $tmp1690 = $tmp1689.value;
if ($tmp1690) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1691 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1692, $tmp1691, &$s1693);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1694 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1687, ((frost$core$Int64) $tmp1688.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1694, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1695 = param1.max;
frost$core$Bit $tmp1696 = frost$core$Bit$init$builtin_bit($tmp1695.nonnull);
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block6; else goto block8;
block6:;
// line 920
frost$core$String$Index $tmp1698 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1699 = param1.max;
frost$core$Bit $tmp1700 = frost$core$Bit$init$builtin_bit($tmp1699.nonnull);
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1702 = (frost$core$Int64) {920};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1703, $tmp1702, &$s1704);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1705 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1698, ((frost$core$Int64) $tmp1699.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1705, true });
goto block7;
block8:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 925
frost$core$String$Index$nullable $tmp1706 = *(&local0);
frost$core$String$Index$nullable $tmp1707 = *(&local1);
frost$core$Bit $tmp1708 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1709 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1706, $tmp1707, $tmp1708);
frost$core$String* $tmp1710 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
// unreffing REF($57:frost.core.String)
return $tmp1710;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 934
// line 935
frost$core$Int64$nullable $tmp1711 = param1.start;
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711.nonnull);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block1; else goto block3;
block1:;
// line 936
frost$core$String$Index $tmp1714 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1715 = param1.start;
frost$core$Bit $tmp1716 = frost$core$Bit$init$builtin_bit($tmp1715.nonnull);
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {936};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1719, $tmp1718, &$s1720);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1721 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1714, ((frost$core$Int64) $tmp1715.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1721, true });
goto block2;
block3:;
// line 1
// line 939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 941
// line 942
frost$core$Int64$nullable $tmp1722 = param1.end;
frost$core$Bit $tmp1723 = frost$core$Bit$init$builtin_bit($tmp1722.nonnull);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block6; else goto block8;
block6:;
// line 943
frost$core$String$Index $tmp1725 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1726 = param1.end;
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit($tmp1726.nonnull);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {943};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1730, $tmp1729, &$s1731);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1732 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1725, ((frost$core$Int64) $tmp1726.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1732, true });
goto block7;
block8:;
// line 1
// line 946
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 948
frost$core$String$Index$nullable $tmp1733 = *(&local0);
frost$core$String$Index$nullable $tmp1734 = *(&local1);
frost$core$Int64 $tmp1735 = param1.step;
frost$core$Bit $tmp1736 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1737 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1733, $tmp1734, $tmp1735, $tmp1736);
frost$core$String* $tmp1738 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
// unreffing REF($58:frost.core.String)
return $tmp1738;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 955
frost$core$Int64 $tmp1739 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1740 = &param0->_length;
frost$core$Int64 $tmp1741 = *$tmp1740;
frost$core$Bit $tmp1742 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1743 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1739, $tmp1741, $tmp1742);
frost$core$Int64 $tmp1744 = $tmp1743.min;
*(&local0) = $tmp1744;
frost$core$Int64 $tmp1745 = $tmp1743.max;
frost$core$Bit $tmp1746 = $tmp1743.inclusive;
bool $tmp1747 = $tmp1746.value;
frost$core$Int64 $tmp1748 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1749 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1748);
if ($tmp1747) goto block4; else goto block5;
block4:;
int64_t $tmp1750 = $tmp1744.value;
int64_t $tmp1751 = $tmp1745.value;
bool $tmp1752 = $tmp1750 <= $tmp1751;
frost$core$Bit $tmp1753 = (frost$core$Bit) {$tmp1752};
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block1; else goto block2;
block5:;
int64_t $tmp1755 = $tmp1744.value;
int64_t $tmp1756 = $tmp1745.value;
bool $tmp1757 = $tmp1755 < $tmp1756;
frost$core$Bit $tmp1758 = (frost$core$Bit) {$tmp1757};
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block1; else goto block2;
block1:;
// line 956
frost$core$Char8** $tmp1760 = &param0->data;
frost$core$Char8* $tmp1761 = *$tmp1760;
frost$core$Int64 $tmp1762 = *(&local0);
int64_t $tmp1763 = $tmp1762.value;
frost$core$Char8 $tmp1764 = $tmp1761[$tmp1763];
frost$core$Bit $tmp1765 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1764, param1);
bool $tmp1766 = $tmp1765.value;
if ($tmp1766) goto block6; else goto block7;
block6:;
// line 957
frost$core$Bit $tmp1767 = frost$core$Bit$init$builtin_bit(true);
return $tmp1767;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1768 = *(&local0);
int64_t $tmp1769 = $tmp1745.value;
int64_t $tmp1770 = $tmp1768.value;
int64_t $tmp1771 = $tmp1769 - $tmp1770;
frost$core$Int64 $tmp1772 = (frost$core$Int64) {$tmp1771};
frost$core$UInt64 $tmp1773 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1772);
if ($tmp1747) goto block9; else goto block10;
block9:;
uint64_t $tmp1774 = $tmp1773.value;
uint64_t $tmp1775 = $tmp1749.value;
bool $tmp1776 = $tmp1774 >= $tmp1775;
frost$core$Bit $tmp1777 = (frost$core$Bit) {$tmp1776};
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block8; else goto block2;
block10:;
uint64_t $tmp1779 = $tmp1773.value;
uint64_t $tmp1780 = $tmp1749.value;
bool $tmp1781 = $tmp1779 > $tmp1780;
frost$core$Bit $tmp1782 = (frost$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block8; else goto block2;
block8:;
int64_t $tmp1784 = $tmp1768.value;
int64_t $tmp1785 = $tmp1748.value;
int64_t $tmp1786 = $tmp1784 + $tmp1785;
frost$core$Int64 $tmp1787 = (frost$core$Int64) {$tmp1786};
*(&local0) = $tmp1787;
goto block1;
block2:;
// line 960
frost$core$Bit $tmp1788 = frost$core$Bit$init$builtin_bit(false);
return $tmp1788;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 967
frost$core$String$Index$nullable $tmp1789 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1790 = frost$core$Bit$init$builtin_bit($tmp1789.nonnull);
return $tmp1790;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 978
frost$core$String$Index $tmp1791 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1792 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1791);
return $tmp1792;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 990
frost$core$Int64* $tmp1793 = &param0->_length;
frost$core$Int64 $tmp1794 = *$tmp1793;
frost$core$Int64* $tmp1795 = &param1->_length;
frost$core$Int64 $tmp1796 = *$tmp1795;
int64_t $tmp1797 = $tmp1794.value;
int64_t $tmp1798 = $tmp1796.value;
bool $tmp1799 = $tmp1797 < $tmp1798;
frost$core$Bit $tmp1800 = (frost$core$Bit) {$tmp1799};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block1; else goto block2;
block1:;
// line 991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 993
frost$core$Int64 $tmp1802 = param2.value;
frost$core$Int64* $tmp1803 = &param0->_length;
frost$core$Int64 $tmp1804 = *$tmp1803;
frost$core$Int64* $tmp1805 = &param1->_length;
frost$core$Int64 $tmp1806 = *$tmp1805;
int64_t $tmp1807 = $tmp1804.value;
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807 - $tmp1808;
frost$core$Int64 $tmp1810 = (frost$core$Int64) {$tmp1809};
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1812 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1802, $tmp1810, $tmp1811);
frost$core$Int64 $tmp1813 = $tmp1812.min;
*(&local0) = $tmp1813;
frost$core$Int64 $tmp1814 = $tmp1812.max;
frost$core$Bit $tmp1815 = $tmp1812.inclusive;
bool $tmp1816 = $tmp1815.value;
frost$core$Int64 $tmp1817 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1818 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1817);
if ($tmp1816) goto block6; else goto block7;
block6:;
int64_t $tmp1819 = $tmp1813.value;
int64_t $tmp1820 = $tmp1814.value;
bool $tmp1821 = $tmp1819 <= $tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block3; else goto block4;
block7:;
int64_t $tmp1824 = $tmp1813.value;
int64_t $tmp1825 = $tmp1814.value;
bool $tmp1826 = $tmp1824 < $tmp1825;
frost$core$Bit $tmp1827 = (frost$core$Bit) {$tmp1826};
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block3; else goto block4;
block3:;
// line 994
frost$core$Int64 $tmp1829 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1830 = &param1->_length;
frost$core$Int64 $tmp1831 = *$tmp1830;
frost$core$Bit $tmp1832 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1833 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1829, $tmp1831, $tmp1832);
frost$core$Int64 $tmp1834 = $tmp1833.min;
*(&local1) = $tmp1834;
frost$core$Int64 $tmp1835 = $tmp1833.max;
frost$core$Bit $tmp1836 = $tmp1833.inclusive;
bool $tmp1837 = $tmp1836.value;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1839 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1838);
if ($tmp1837) goto block11; else goto block12;
block11:;
int64_t $tmp1840 = $tmp1834.value;
int64_t $tmp1841 = $tmp1835.value;
bool $tmp1842 = $tmp1840 <= $tmp1841;
frost$core$Bit $tmp1843 = (frost$core$Bit) {$tmp1842};
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block8; else goto block9;
block12:;
int64_t $tmp1845 = $tmp1834.value;
int64_t $tmp1846 = $tmp1835.value;
bool $tmp1847 = $tmp1845 < $tmp1846;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block8; else goto block9;
block8:;
// line 995
frost$core$Char8** $tmp1850 = &param0->data;
frost$core$Char8* $tmp1851 = *$tmp1850;
frost$core$Int64 $tmp1852 = *(&local0);
frost$core$Int64 $tmp1853 = *(&local1);
int64_t $tmp1854 = $tmp1852.value;
int64_t $tmp1855 = $tmp1853.value;
int64_t $tmp1856 = $tmp1854 + $tmp1855;
frost$core$Int64 $tmp1857 = (frost$core$Int64) {$tmp1856};
int64_t $tmp1858 = $tmp1857.value;
frost$core$Char8 $tmp1859 = $tmp1851[$tmp1858];
frost$core$Char8** $tmp1860 = &param1->data;
frost$core$Char8* $tmp1861 = *$tmp1860;
frost$core$Int64 $tmp1862 = *(&local1);
int64_t $tmp1863 = $tmp1862.value;
frost$core$Char8 $tmp1864 = $tmp1861[$tmp1863];
frost$core$Bit $tmp1865 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1859, $tmp1864);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block13; else goto block14;
block13:;
// line 996
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1867 = *(&local1);
int64_t $tmp1868 = $tmp1835.value;
int64_t $tmp1869 = $tmp1867.value;
int64_t $tmp1870 = $tmp1868 - $tmp1869;
frost$core$Int64 $tmp1871 = (frost$core$Int64) {$tmp1870};
frost$core$UInt64 $tmp1872 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1871);
if ($tmp1837) goto block16; else goto block17;
block16:;
uint64_t $tmp1873 = $tmp1872.value;
uint64_t $tmp1874 = $tmp1839.value;
bool $tmp1875 = $tmp1873 >= $tmp1874;
frost$core$Bit $tmp1876 = (frost$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block15; else goto block9;
block17:;
uint64_t $tmp1878 = $tmp1872.value;
uint64_t $tmp1879 = $tmp1839.value;
bool $tmp1880 = $tmp1878 > $tmp1879;
frost$core$Bit $tmp1881 = (frost$core$Bit) {$tmp1880};
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block15; else goto block9;
block15:;
int64_t $tmp1883 = $tmp1867.value;
int64_t $tmp1884 = $tmp1838.value;
int64_t $tmp1885 = $tmp1883 + $tmp1884;
frost$core$Int64 $tmp1886 = (frost$core$Int64) {$tmp1885};
*(&local1) = $tmp1886;
goto block8;
block9:;
// line 999
frost$core$Int64 $tmp1887 = *(&local0);
frost$core$String$Index $tmp1888 = frost$core$String$Index$init$frost$core$Int64($tmp1887);
frost$core$Bit $tmp1889 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp1888, true }).nonnull);
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1891 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1892, $tmp1891, &$s1893);
abort(); // unreachable
block18:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1888, true }).value), true });
block5:;
frost$core$Int64 $tmp1894 = *(&local0);
int64_t $tmp1895 = $tmp1814.value;
int64_t $tmp1896 = $tmp1894.value;
int64_t $tmp1897 = $tmp1895 - $tmp1896;
frost$core$Int64 $tmp1898 = (frost$core$Int64) {$tmp1897};
frost$core$UInt64 $tmp1899 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1898);
if ($tmp1816) goto block21; else goto block22;
block21:;
uint64_t $tmp1900 = $tmp1899.value;
uint64_t $tmp1901 = $tmp1818.value;
bool $tmp1902 = $tmp1900 >= $tmp1901;
frost$core$Bit $tmp1903 = (frost$core$Bit) {$tmp1902};
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block20; else goto block4;
block22:;
uint64_t $tmp1905 = $tmp1899.value;
uint64_t $tmp1906 = $tmp1818.value;
bool $tmp1907 = $tmp1905 > $tmp1906;
frost$core$Bit $tmp1908 = (frost$core$Bit) {$tmp1907};
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block20; else goto block4;
block20:;
int64_t $tmp1910 = $tmp1894.value;
int64_t $tmp1911 = $tmp1817.value;
int64_t $tmp1912 = $tmp1910 + $tmp1911;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {$tmp1912};
*(&local0) = $tmp1913;
goto block3;
block4:;
// line 1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 1012
frost$core$String$Index $tmp1914 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1915 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1914);
return $tmp1915;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1024
frost$core$Int64* $tmp1916 = &param0->_length;
frost$core$Int64 $tmp1917 = *$tmp1916;
frost$core$Int64* $tmp1918 = &param1->_length;
frost$core$Int64 $tmp1919 = *$tmp1918;
int64_t $tmp1920 = $tmp1917.value;
int64_t $tmp1921 = $tmp1919.value;
bool $tmp1922 = $tmp1920 < $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block1; else goto block2;
block1:;
// line 1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1027
frost$core$Int64 $tmp1925 = param2.value;
frost$core$Int64* $tmp1926 = &param0->_length;
frost$core$Int64 $tmp1927 = *$tmp1926;
frost$core$Int64* $tmp1928 = &param1->_length;
frost$core$Int64 $tmp1929 = *$tmp1928;
int64_t $tmp1930 = $tmp1927.value;
int64_t $tmp1931 = $tmp1929.value;
int64_t $tmp1932 = $tmp1930 - $tmp1931;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {$tmp1932};
frost$core$Int64 $tmp1934 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1925, $tmp1933);
*(&local0) = $tmp1934;
// line 1028
frost$core$Int64 $tmp1935 = *(&local0);
frost$core$Int64 $tmp1936 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1937 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1938 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1939 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1935, $tmp1936, $tmp1937, $tmp1938);
frost$core$Int64 $tmp1940 = $tmp1939.start;
*(&local1) = $tmp1940;
frost$core$Int64 $tmp1941 = $tmp1939.end;
frost$core$Int64 $tmp1942 = $tmp1939.step;
frost$core$UInt64 $tmp1943 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1942);
frost$core$Int64 $tmp1944 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1942);
frost$core$UInt64 $tmp1945 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1944);
frost$core$Bit $tmp1946 = $tmp1939.inclusive;
bool $tmp1947 = $tmp1946.value;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {0};
int64_t $tmp1949 = $tmp1942.value;
int64_t $tmp1950 = $tmp1948.value;
bool $tmp1951 = $tmp1949 >= $tmp1950;
frost$core$Bit $tmp1952 = (frost$core$Bit) {$tmp1951};
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block6; else goto block7;
block6:;
if ($tmp1947) goto block8; else goto block9;
block8:;
int64_t $tmp1954 = $tmp1940.value;
int64_t $tmp1955 = $tmp1941.value;
bool $tmp1956 = $tmp1954 <= $tmp1955;
frost$core$Bit $tmp1957 = (frost$core$Bit) {$tmp1956};
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block3; else goto block4;
block9:;
int64_t $tmp1959 = $tmp1940.value;
int64_t $tmp1960 = $tmp1941.value;
bool $tmp1961 = $tmp1959 < $tmp1960;
frost$core$Bit $tmp1962 = (frost$core$Bit) {$tmp1961};
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block3; else goto block4;
block7:;
if ($tmp1947) goto block10; else goto block11;
block10:;
int64_t $tmp1964 = $tmp1940.value;
int64_t $tmp1965 = $tmp1941.value;
bool $tmp1966 = $tmp1964 >= $tmp1965;
frost$core$Bit $tmp1967 = (frost$core$Bit) {$tmp1966};
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block3; else goto block4;
block11:;
int64_t $tmp1969 = $tmp1940.value;
int64_t $tmp1970 = $tmp1941.value;
bool $tmp1971 = $tmp1969 > $tmp1970;
frost$core$Bit $tmp1972 = (frost$core$Bit) {$tmp1971};
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block3; else goto block4;
block3:;
// line 1029
frost$core$Int64 $tmp1974 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1975 = &param1->_length;
frost$core$Int64 $tmp1976 = *$tmp1975;
frost$core$Bit $tmp1977 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1978 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1974, $tmp1976, $tmp1977);
frost$core$Int64 $tmp1979 = $tmp1978.min;
*(&local2) = $tmp1979;
frost$core$Int64 $tmp1980 = $tmp1978.max;
frost$core$Bit $tmp1981 = $tmp1978.inclusive;
bool $tmp1982 = $tmp1981.value;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1984 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1983);
if ($tmp1982) goto block15; else goto block16;
block15:;
int64_t $tmp1985 = $tmp1979.value;
int64_t $tmp1986 = $tmp1980.value;
bool $tmp1987 = $tmp1985 <= $tmp1986;
frost$core$Bit $tmp1988 = (frost$core$Bit) {$tmp1987};
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block12; else goto block13;
block16:;
int64_t $tmp1990 = $tmp1979.value;
int64_t $tmp1991 = $tmp1980.value;
bool $tmp1992 = $tmp1990 < $tmp1991;
frost$core$Bit $tmp1993 = (frost$core$Bit) {$tmp1992};
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block12; else goto block13;
block12:;
// line 1030
frost$core$Char8** $tmp1995 = &param0->data;
frost$core$Char8* $tmp1996 = *$tmp1995;
frost$core$Int64 $tmp1997 = *(&local1);
frost$core$Int64 $tmp1998 = *(&local2);
int64_t $tmp1999 = $tmp1997.value;
int64_t $tmp2000 = $tmp1998.value;
int64_t $tmp2001 = $tmp1999 + $tmp2000;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {$tmp2001};
int64_t $tmp2003 = $tmp2002.value;
frost$core$Char8 $tmp2004 = $tmp1996[$tmp2003];
frost$core$Char8** $tmp2005 = &param1->data;
frost$core$Char8* $tmp2006 = *$tmp2005;
frost$core$Int64 $tmp2007 = *(&local2);
int64_t $tmp2008 = $tmp2007.value;
frost$core$Char8 $tmp2009 = $tmp2006[$tmp2008];
frost$core$Bit $tmp2010 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp2004, $tmp2009);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block17; else goto block18;
block17:;
// line 1031
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp2012 = *(&local2);
int64_t $tmp2013 = $tmp1980.value;
int64_t $tmp2014 = $tmp2012.value;
int64_t $tmp2015 = $tmp2013 - $tmp2014;
frost$core$Int64 $tmp2016 = (frost$core$Int64) {$tmp2015};
frost$core$UInt64 $tmp2017 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2016);
if ($tmp1982) goto block20; else goto block21;
block20:;
uint64_t $tmp2018 = $tmp2017.value;
uint64_t $tmp2019 = $tmp1984.value;
bool $tmp2020 = $tmp2018 >= $tmp2019;
frost$core$Bit $tmp2021 = (frost$core$Bit) {$tmp2020};
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block19; else goto block13;
block21:;
uint64_t $tmp2023 = $tmp2017.value;
uint64_t $tmp2024 = $tmp1984.value;
bool $tmp2025 = $tmp2023 > $tmp2024;
frost$core$Bit $tmp2026 = (frost$core$Bit) {$tmp2025};
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block19; else goto block13;
block19:;
int64_t $tmp2028 = $tmp2012.value;
int64_t $tmp2029 = $tmp1983.value;
int64_t $tmp2030 = $tmp2028 + $tmp2029;
frost$core$Int64 $tmp2031 = (frost$core$Int64) {$tmp2030};
*(&local2) = $tmp2031;
goto block12;
block13:;
// line 1034
frost$core$Int64 $tmp2032 = *(&local1);
frost$core$String$Index $tmp2033 = frost$core$String$Index$init$frost$core$Int64($tmp2032);
frost$core$Bit $tmp2034 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp2033, true }).nonnull);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2036 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2037, $tmp2036, &$s2038);
abort(); // unreachable
block22:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2033, true }).value), true });
block5:;
frost$core$Int64 $tmp2039 = *(&local1);
if ($tmp1953) goto block25; else goto block26;
block25:;
int64_t $tmp2040 = $tmp1941.value;
int64_t $tmp2041 = $tmp2039.value;
int64_t $tmp2042 = $tmp2040 - $tmp2041;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {$tmp2042};
frost$core$UInt64 $tmp2044 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2043);
if ($tmp1947) goto block27; else goto block28;
block27:;
uint64_t $tmp2045 = $tmp2044.value;
uint64_t $tmp2046 = $tmp1943.value;
bool $tmp2047 = $tmp2045 >= $tmp2046;
frost$core$Bit $tmp2048 = (frost$core$Bit) {$tmp2047};
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block24; else goto block4;
block28:;
uint64_t $tmp2050 = $tmp2044.value;
uint64_t $tmp2051 = $tmp1943.value;
bool $tmp2052 = $tmp2050 > $tmp2051;
frost$core$Bit $tmp2053 = (frost$core$Bit) {$tmp2052};
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block24; else goto block4;
block26:;
int64_t $tmp2055 = $tmp2039.value;
int64_t $tmp2056 = $tmp1941.value;
int64_t $tmp2057 = $tmp2055 - $tmp2056;
frost$core$Int64 $tmp2058 = (frost$core$Int64) {$tmp2057};
frost$core$UInt64 $tmp2059 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2058);
if ($tmp1947) goto block29; else goto block30;
block29:;
uint64_t $tmp2060 = $tmp2059.value;
uint64_t $tmp2061 = $tmp1945.value;
bool $tmp2062 = $tmp2060 >= $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block24; else goto block4;
block30:;
uint64_t $tmp2065 = $tmp2059.value;
uint64_t $tmp2066 = $tmp1945.value;
bool $tmp2067 = $tmp2065 > $tmp2066;
frost$core$Bit $tmp2068 = (frost$core$Bit) {$tmp2067};
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block24; else goto block4;
block24:;
int64_t $tmp2070 = $tmp2039.value;
int64_t $tmp2071 = $tmp1942.value;
int64_t $tmp2072 = $tmp2070 + $tmp2071;
frost$core$Int64 $tmp2073 = (frost$core$Int64) {$tmp2072};
*(&local1) = $tmp2073;
goto block3;
block4:;
// line 1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1047
frost$core$Matcher* $tmp2074 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2075;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2075, $tmp2074);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
// unreffing REF($1:frost.core.Matcher)
return $tmp2075;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1058
frost$core$Matcher* $tmp2076 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2077 = frost$core$Matcher$find$R$frost$core$Bit($tmp2076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
// unreffing REF($1:frost.core.Matcher)
return $tmp2077;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1072
frost$core$Matcher* $tmp2078 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$Matcher* $tmp2079 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local0) = $tmp2078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// unreffing REF($1:frost.core.Matcher)
// line 1073
frost$core$Matcher* $tmp2080 = *(&local0);
frost$core$Bit $tmp2081;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2081, $tmp2080);
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block1; else goto block2;
block1:;
// line 1074
frost$collections$Array* $tmp2083 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2083);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$collections$Array* $tmp2084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local1) = $tmp2083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
// unreffing REF($18:frost.collections.Array<frost.core.String>)
// line 1075
frost$core$Int64 $tmp2085 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2086 = *(&local0);
frost$core$Int64 $tmp2087;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2087, $tmp2086);
frost$core$Bit $tmp2088 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2089 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2085, $tmp2087, $tmp2088);
frost$core$Int64 $tmp2090 = $tmp2089.min;
*(&local2) = $tmp2090;
frost$core$Int64 $tmp2091 = $tmp2089.max;
frost$core$Bit $tmp2092 = $tmp2089.inclusive;
bool $tmp2093 = $tmp2092.value;
frost$core$Int64 $tmp2094 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2095 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2094);
if ($tmp2093) goto block6; else goto block7;
block6:;
int64_t $tmp2096 = $tmp2090.value;
int64_t $tmp2097 = $tmp2091.value;
bool $tmp2098 = $tmp2096 <= $tmp2097;
frost$core$Bit $tmp2099 = (frost$core$Bit) {$tmp2098};
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block3; else goto block4;
block7:;
int64_t $tmp2101 = $tmp2090.value;
int64_t $tmp2102 = $tmp2091.value;
bool $tmp2103 = $tmp2101 < $tmp2102;
frost$core$Bit $tmp2104 = (frost$core$Bit) {$tmp2103};
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block3; else goto block4;
block3:;
// line 1076
frost$collections$Array* $tmp2106 = *(&local1);
frost$core$Matcher* $tmp2107 = *(&local0);
frost$core$Int64 $tmp2108 = *(&local2);
frost$core$String* $tmp2109 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2107, $tmp2108);
frost$core$Bit $tmp2110 = frost$core$Bit$init$builtin_bit($tmp2109 != NULL);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {1076};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2113, $tmp2112, &$s2114);
abort(); // unreachable
block8:;
frost$collections$Array$add$frost$collections$Array$T($tmp2106, ((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing REF($62:frost.core.String?)
goto block5;
block5:;
frost$core$Int64 $tmp2115 = *(&local2);
int64_t $tmp2116 = $tmp2091.value;
int64_t $tmp2117 = $tmp2115.value;
int64_t $tmp2118 = $tmp2116 - $tmp2117;
frost$core$Int64 $tmp2119 = (frost$core$Int64) {$tmp2118};
frost$core$UInt64 $tmp2120 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2119);
if ($tmp2093) goto block11; else goto block12;
block11:;
uint64_t $tmp2121 = $tmp2120.value;
uint64_t $tmp2122 = $tmp2095.value;
bool $tmp2123 = $tmp2121 >= $tmp2122;
frost$core$Bit $tmp2124 = (frost$core$Bit) {$tmp2123};
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block10; else goto block4;
block12:;
uint64_t $tmp2126 = $tmp2120.value;
uint64_t $tmp2127 = $tmp2095.value;
bool $tmp2128 = $tmp2126 > $tmp2127;
frost$core$Bit $tmp2129 = (frost$core$Bit) {$tmp2128};
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block10; else goto block4;
block10:;
int64_t $tmp2131 = $tmp2115.value;
int64_t $tmp2132 = $tmp2094.value;
int64_t $tmp2133 = $tmp2131 + $tmp2132;
frost$core$Int64 $tmp2134 = (frost$core$Int64) {$tmp2133};
*(&local2) = $tmp2134;
goto block3;
block4:;
// line 1078
frost$collections$Array* $tmp2135 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2135)));
frost$collections$Array* $tmp2136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2135);
block2:;
// line 1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1091
frost$core$Bit $tmp2139 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2140);
bool $tmp2141 = $tmp2139.value;
if ($tmp2141) goto block1; else goto block2;
block1:;
// line 1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1094
frost$core$MutableString* $tmp2142 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2142);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
frost$core$MutableString* $tmp2143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
*(&local0) = $tmp2142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
// unreffing REF($9:frost.core.MutableString)
// line 1095
frost$core$String$Index $tmp2144 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2144;
// line 1096
goto block3;
block3:;
// line 1097
frost$core$String$Index $tmp2145 = *(&local1);
frost$core$String$Index$nullable $tmp2146 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2145);
*(&local2) = $tmp2146;
// line 1098
frost$core$String$Index$nullable $tmp2147 = *(&local2);
frost$core$Bit $tmp2148 = frost$core$Bit$init$builtin_bit(!$tmp2147.nonnull);
bool $tmp2149 = $tmp2148.value;
if ($tmp2149) goto block5; else goto block6;
block5:;
// line 1099
frost$core$MutableString* $tmp2150 = *(&local0);
frost$core$String$Index $tmp2151 = *(&local1);
frost$core$Bit $tmp2152 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2153 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2151, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2152);
frost$core$String* $tmp2154 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2153);
frost$core$MutableString$append$frost$core$String($tmp2150, $tmp2154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// unreffing REF($42:frost.core.String)
// line 1100
goto block4;
block6:;
// line 1102
frost$core$MutableString* $tmp2155 = *(&local0);
frost$core$String$Index $tmp2156 = *(&local1);
frost$core$String$Index$nullable $tmp2157 = *(&local2);
frost$core$Bit $tmp2158 = frost$core$Bit$init$builtin_bit($tmp2157.nonnull);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2160 = (frost$core$Int64) {1102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2161, $tmp2160, &$s2162);
abort(); // unreachable
block7:;
frost$core$Bit $tmp2163 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2164 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2156, ((frost$core$String$Index) $tmp2157.value), $tmp2163);
frost$core$String* $tmp2165 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2164);
frost$core$MutableString$append$frost$core$String($tmp2155, $tmp2165);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// unreffing REF($63:frost.core.String)
// line 1103
frost$core$MutableString* $tmp2166 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2166, param2);
// line 1104
frost$core$String$Index$nullable $tmp2167 = *(&local2);
frost$core$Bit $tmp2168 = frost$core$Bit$init$builtin_bit($tmp2167.nonnull);
bool $tmp2169 = $tmp2168.value;
if ($tmp2169) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2170 = (frost$core$Int64) {1104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2171, $tmp2170, &$s2172);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp2173 = ((frost$core$String$Index) $tmp2167.value).value;
frost$core$Int64* $tmp2174 = &param1->_length;
frost$core$Int64 $tmp2175 = *$tmp2174;
int64_t $tmp2176 = $tmp2173.value;
int64_t $tmp2177 = $tmp2175.value;
int64_t $tmp2178 = $tmp2176 + $tmp2177;
frost$core$Int64 $tmp2179 = (frost$core$Int64) {$tmp2178};
frost$core$String$Index $tmp2180 = frost$core$String$Index$init$frost$core$Int64($tmp2179);
*(&local1) = $tmp2180;
goto block3;
block4:;
// line 1106
frost$core$MutableString* $tmp2181 = *(&local0);
frost$core$String* $tmp2182 = frost$core$MutableString$finish$R$frost$core$String($tmp2181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// unreffing REF($93:frost.core.String)
frost$core$MutableString* $tmp2183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2182;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1120
frost$core$Bit $tmp2184 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2185 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing REF($2:frost.core.String)
return $tmp2185;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1125
frost$core$MutableString* $tmp2186 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2186);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$core$MutableString* $tmp2187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
*(&local0) = $tmp2186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// unreffing REF($1:frost.core.MutableString)
// line 1126
frost$core$Matcher* $tmp2188 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$Matcher* $tmp2189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local1) = $tmp2188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing REF($14:frost.core.Matcher)
// line 1127
goto block1;
block1:;
frost$core$Matcher* $tmp2190 = *(&local1);
frost$core$Bit $tmp2191 = frost$core$Matcher$find$R$frost$core$Bit($tmp2190);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block2; else goto block3;
block2:;
// line 1128
frost$core$Matcher* $tmp2193 = *(&local1);
frost$core$MutableString* $tmp2194 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2193, $tmp2194, param2, param3);
goto block1;
block3:;
// line 1130
frost$core$Matcher* $tmp2195 = *(&local1);
frost$core$MutableString* $tmp2196 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2195, $tmp2196);
// line 1131
frost$core$MutableString* $tmp2197 = *(&local0);
frost$core$String* $tmp2198 = frost$core$MutableString$finish$R$frost$core$String($tmp2197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// unreffing REF($42:frost.core.String)
frost$core$Matcher* $tmp2199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2198;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1152
frost$core$MutableString* $tmp2201 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2201);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
frost$core$MutableString* $tmp2202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local0) = $tmp2201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
// unreffing REF($1:frost.core.MutableString)
// line 1153
frost$core$Matcher* $tmp2203 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
frost$core$Matcher* $tmp2204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local1) = $tmp2203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
// unreffing REF($14:frost.core.Matcher)
// line 1154
goto block1;
block1:;
frost$core$Matcher* $tmp2205 = *(&local1);
frost$core$Bit $tmp2206 = frost$core$Matcher$find$R$frost$core$Bit($tmp2205);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block2; else goto block3;
block2:;
// line 1155
frost$core$Matcher* $tmp2208 = *(&local1);
frost$core$MutableString* $tmp2209 = *(&local0);
frost$core$Matcher* $tmp2210 = *(&local1);
frost$core$Int64 $tmp2211 = (frost$core$Int64) {0};
frost$core$String* $tmp2212 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2210, $tmp2211);
frost$core$Bit $tmp2213 = frost$core$Bit$init$builtin_bit($tmp2212 != NULL);
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2215 = (frost$core$Int64) {1155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2216, $tmp2215, &$s2217);
abort(); // unreachable
block4:;
frost$core$Int8** $tmp2218 = &param2->pointer;
frost$core$Int8* $tmp2219 = *$tmp2218;
frost$core$Object** $tmp2220 = &param2->target;
frost$core$Object* $tmp2221 = *$tmp2220;
bool $tmp2222 = $tmp2221 != ((frost$core$Object*) NULL);
if ($tmp2222) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp2224 = (($fn2223) $tmp2219)($tmp2212);
*(&local2) = $tmp2224;
goto block8;
block6:;
frost$core$Object* $tmp2226 = (($fn2225) $tmp2219)($tmp2221, $tmp2212);
*(&local2) = $tmp2226;
goto block8;
block8:;
frost$core$Object* $tmp2227 = *(&local2);
$fn2229 $tmp2228 = ($fn2229) $tmp2227->$class->vtable[0];
frost$core$String* $tmp2230 = $tmp2228($tmp2227);
frost$core$Bit $tmp2231 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2208, $tmp2209, $tmp2230, $tmp2231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2227);
// unreffing REF($60:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// unreffing REF($36:frost.core.String?)
goto block1;
block3:;
// line 1157
frost$core$Matcher* $tmp2232 = *(&local1);
frost$core$MutableString* $tmp2233 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2232, $tmp2233);
// line 1158
frost$core$MutableString* $tmp2234 = *(&local0);
$fn2236 $tmp2235 = ($fn2236) ((frost$core$Object*) $tmp2234)->$class->vtable[0];
frost$core$String* $tmp2237 = $tmp2235(((frost$core$Object*) $tmp2234));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
// unreffing REF($83:frost.core.String)
frost$core$Matcher* $tmp2238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2237;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1172
frost$core$MutableString* $tmp2240 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2240);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$MutableString* $tmp2241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
*(&local0) = $tmp2240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// unreffing REF($1:frost.core.MutableString)
// line 1173
frost$core$Matcher* $tmp2242 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$Matcher* $tmp2243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
*(&local1) = $tmp2242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
// unreffing REF($14:frost.core.Matcher)
// line 1174
goto block1;
block1:;
frost$core$Matcher* $tmp2244 = *(&local1);
frost$core$Bit $tmp2245 = frost$core$Matcher$find$R$frost$core$Bit($tmp2244);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block2; else goto block3;
block2:;
// line 1175
frost$collections$Array* $tmp2247 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2247);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$collections$Array* $tmp2248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local2) = $tmp2247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
// unreffing REF($32:frost.collections.Array<frost.core.String?>)
// line 1176
frost$core$Int64 $tmp2249 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2250 = *(&local1);
frost$core$Int64 $tmp2251;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2251, $tmp2250);
frost$core$Bit $tmp2252 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2253 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2249, $tmp2251, $tmp2252);
frost$core$Int64 $tmp2254 = $tmp2253.min;
*(&local3) = $tmp2254;
frost$core$Int64 $tmp2255 = $tmp2253.max;
frost$core$Bit $tmp2256 = $tmp2253.inclusive;
bool $tmp2257 = $tmp2256.value;
frost$core$Int64 $tmp2258 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2259 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2258);
if ($tmp2257) goto block7; else goto block8;
block7:;
int64_t $tmp2260 = $tmp2254.value;
int64_t $tmp2261 = $tmp2255.value;
bool $tmp2262 = $tmp2260 <= $tmp2261;
frost$core$Bit $tmp2263 = (frost$core$Bit) {$tmp2262};
bool $tmp2264 = $tmp2263.value;
if ($tmp2264) goto block4; else goto block5;
block8:;
int64_t $tmp2265 = $tmp2254.value;
int64_t $tmp2266 = $tmp2255.value;
bool $tmp2267 = $tmp2265 < $tmp2266;
frost$core$Bit $tmp2268 = (frost$core$Bit) {$tmp2267};
bool $tmp2269 = $tmp2268.value;
if ($tmp2269) goto block4; else goto block5;
block4:;
// line 1177
frost$collections$Array* $tmp2270 = *(&local2);
frost$core$Matcher* $tmp2271 = *(&local1);
frost$core$Int64 $tmp2272 = *(&local3);
frost$core$String* $tmp2273 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2271, $tmp2272);
frost$collections$Array$add$frost$collections$Array$T($tmp2270, ((frost$core$Object*) $tmp2273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// unreffing REF($76:frost.core.String?)
goto block6;
block6:;
frost$core$Int64 $tmp2274 = *(&local3);
int64_t $tmp2275 = $tmp2255.value;
int64_t $tmp2276 = $tmp2274.value;
int64_t $tmp2277 = $tmp2275 - $tmp2276;
frost$core$Int64 $tmp2278 = (frost$core$Int64) {$tmp2277};
frost$core$UInt64 $tmp2279 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2278);
if ($tmp2257) goto block10; else goto block11;
block10:;
uint64_t $tmp2280 = $tmp2279.value;
uint64_t $tmp2281 = $tmp2259.value;
bool $tmp2282 = $tmp2280 >= $tmp2281;
frost$core$Bit $tmp2283 = (frost$core$Bit) {$tmp2282};
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block9; else goto block5;
block11:;
uint64_t $tmp2285 = $tmp2279.value;
uint64_t $tmp2286 = $tmp2259.value;
bool $tmp2287 = $tmp2285 > $tmp2286;
frost$core$Bit $tmp2288 = (frost$core$Bit) {$tmp2287};
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block9; else goto block5;
block9:;
int64_t $tmp2290 = $tmp2274.value;
int64_t $tmp2291 = $tmp2258.value;
int64_t $tmp2292 = $tmp2290 + $tmp2291;
frost$core$Int64 $tmp2293 = (frost$core$Int64) {$tmp2292};
*(&local3) = $tmp2293;
goto block4;
block5:;
// line 1179
frost$core$Matcher* $tmp2294 = *(&local1);
frost$core$MutableString* $tmp2295 = *(&local0);
frost$collections$Array* $tmp2296 = *(&local2);
frost$core$Int8** $tmp2297 = &param2->pointer;
frost$core$Int8* $tmp2298 = *$tmp2297;
frost$core$Object** $tmp2299 = &param2->target;
frost$core$Object* $tmp2300 = *$tmp2299;
bool $tmp2301 = $tmp2300 != ((frost$core$Object*) NULL);
if ($tmp2301) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2303 = (($fn2302) $tmp2298)(((frost$collections$ListView*) $tmp2296));
*(&local4) = $tmp2303;
goto block14;
block12:;
frost$core$Object* $tmp2305 = (($fn2304) $tmp2298)($tmp2300, ((frost$collections$ListView*) $tmp2296));
*(&local4) = $tmp2305;
goto block14;
block14:;
frost$core$Object* $tmp2306 = *(&local4);
$fn2308 $tmp2307 = ($fn2308) $tmp2306->$class->vtable[0];
frost$core$String* $tmp2309 = $tmp2307($tmp2306);
frost$core$Bit $tmp2310 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2294, $tmp2295, $tmp2309, $tmp2310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2306);
// unreffing REF($128:frost.core.Object)
frost$collections$Array* $tmp2311 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
// unreffing groups
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1181
frost$core$Matcher* $tmp2312 = *(&local1);
frost$core$MutableString* $tmp2313 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2312, $tmp2313);
// line 1182
frost$core$MutableString* $tmp2314 = *(&local0);
$fn2316 $tmp2315 = ($fn2316) ((frost$core$Object*) $tmp2314)->$class->vtable[0];
frost$core$String* $tmp2317 = $tmp2315(((frost$core$Object*) $tmp2314));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
// unreffing REF($153:frost.core.String)
frost$core$Matcher* $tmp2318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2317;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1186
frost$core$Bit $tmp2320 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2321 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Index>)
return $tmp2321;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1190
frost$core$String$MatchIterator* $tmp2322 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2322, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2322)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
// unreffing REF($1:frost.core.String.MatchIterator)
return ((frost$collections$Iterator*) $tmp2322);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1194
frost$core$Bit $tmp2323 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2324 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Match>)
return $tmp2324;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1198
frost$core$String$RegexMatchIterator* $tmp2325 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2325, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2325)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
// unreffing REF($1:frost.core.String.RegexMatchIterator)
return ((frost$collections$Iterator*) $tmp2325);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1205
frost$core$Int64 $tmp2326 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2327 = frost$core$String$Index$init$frost$core$Int64($tmp2326);
return $tmp2327;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1212
frost$core$Int64* $tmp2328 = &param0->_length;
frost$core$Int64 $tmp2329 = *$tmp2328;
frost$core$String$Index $tmp2330 = frost$core$String$Index$init$frost$core$Int64($tmp2329);
return $tmp2330;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1222
frost$core$Int64 $tmp2331 = param1.value;
frost$core$Int64* $tmp2332 = &param0->_length;
frost$core$Int64 $tmp2333 = *$tmp2332;
int64_t $tmp2334 = $tmp2331.value;
int64_t $tmp2335 = $tmp2333.value;
bool $tmp2336 = $tmp2334 < $tmp2335;
frost$core$Bit $tmp2337 = (frost$core$Bit) {$tmp2336};
bool $tmp2338 = $tmp2337.value;
if ($tmp2338) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2339 = (frost$core$Int64) {1222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2340, $tmp2339);
abort(); // unreachable
block1:;
// line 1223
frost$core$Char8** $tmp2341 = &param0->data;
frost$core$Char8* $tmp2342 = *$tmp2341;
frost$core$Int64 $tmp2343 = param1.value;
int64_t $tmp2344 = $tmp2343.value;
frost$core$Char8 $tmp2345 = $tmp2342[$tmp2344];
uint8_t $tmp2346 = $tmp2345.value;
int64_t $tmp2347 = ((int64_t) $tmp2346) & 255;
*(&local0) = $tmp2347;
// line 1224
int64_t $tmp2348 = *(&local0);
bool $tmp2349 = $tmp2348 >= 240;
frost$core$Bit $tmp2350 = frost$core$Bit$init$builtin_bit($tmp2349);
bool $tmp2351 = $tmp2350.value;
if ($tmp2351) goto block3; else goto block4;
block3:;
// line 1225
frost$core$Int64 $tmp2352 = param1.value;
frost$core$Int64 $tmp2353 = (frost$core$Int64) {4};
int64_t $tmp2354 = $tmp2352.value;
int64_t $tmp2355 = $tmp2353.value;
int64_t $tmp2356 = $tmp2354 + $tmp2355;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {$tmp2356};
frost$core$String$Index $tmp2358 = frost$core$String$Index$init$frost$core$Int64($tmp2357);
return $tmp2358;
block4:;
// line 1227
int64_t $tmp2359 = *(&local0);
bool $tmp2360 = $tmp2359 >= 224;
frost$core$Bit $tmp2361 = frost$core$Bit$init$builtin_bit($tmp2360);
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block5; else goto block6;
block5:;
// line 1228
frost$core$Int64 $tmp2363 = param1.value;
frost$core$Int64 $tmp2364 = (frost$core$Int64) {3};
int64_t $tmp2365 = $tmp2363.value;
int64_t $tmp2366 = $tmp2364.value;
int64_t $tmp2367 = $tmp2365 + $tmp2366;
frost$core$Int64 $tmp2368 = (frost$core$Int64) {$tmp2367};
frost$core$String$Index $tmp2369 = frost$core$String$Index$init$frost$core$Int64($tmp2368);
return $tmp2369;
block6:;
// line 1230
int64_t $tmp2370 = *(&local0);
bool $tmp2371 = $tmp2370 >= 192;
frost$core$Bit $tmp2372 = frost$core$Bit$init$builtin_bit($tmp2371);
bool $tmp2373 = $tmp2372.value;
if ($tmp2373) goto block7; else goto block8;
block7:;
// line 1231
frost$core$Int64 $tmp2374 = param1.value;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {2};
int64_t $tmp2376 = $tmp2374.value;
int64_t $tmp2377 = $tmp2375.value;
int64_t $tmp2378 = $tmp2376 + $tmp2377;
frost$core$Int64 $tmp2379 = (frost$core$Int64) {$tmp2378};
frost$core$String$Index $tmp2380 = frost$core$String$Index$init$frost$core$Int64($tmp2379);
return $tmp2380;
block8:;
// line 1233
frost$core$Int64 $tmp2381 = param1.value;
frost$core$Int64 $tmp2382 = (frost$core$Int64) {1};
int64_t $tmp2383 = $tmp2381.value;
int64_t $tmp2384 = $tmp2382.value;
int64_t $tmp2385 = $tmp2383 + $tmp2384;
frost$core$Int64 $tmp2386 = (frost$core$Int64) {$tmp2385};
frost$core$String$Index $tmp2387 = frost$core$String$Index$init$frost$core$Int64($tmp2386);
return $tmp2387;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1243
frost$core$Int64 $tmp2388 = param1.value;
frost$core$Int64 $tmp2389 = (frost$core$Int64) {0};
int64_t $tmp2390 = $tmp2388.value;
int64_t $tmp2391 = $tmp2389.value;
bool $tmp2392 = $tmp2390 > $tmp2391;
frost$core$Bit $tmp2393 = (frost$core$Bit) {$tmp2392};
bool $tmp2394 = $tmp2393.value;
if ($tmp2394) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2395 = (frost$core$Int64) {1243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2396, $tmp2395);
abort(); // unreachable
block1:;
// line 1244
frost$core$Int64 $tmp2397 = param1.value;
frost$core$Int64 $tmp2398 = (frost$core$Int64) {1};
int64_t $tmp2399 = $tmp2397.value;
int64_t $tmp2400 = $tmp2398.value;
int64_t $tmp2401 = $tmp2399 - $tmp2400;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {$tmp2401};
*(&local0) = $tmp2402;
// line 1245
goto block3;
block3:;
frost$core$Char8** $tmp2403 = &param0->data;
frost$core$Char8* $tmp2404 = *$tmp2403;
frost$core$Int64 $tmp2405 = *(&local0);
int64_t $tmp2406 = $tmp2405.value;
frost$core$Char8 $tmp2407 = $tmp2404[$tmp2406];
uint8_t $tmp2408 = $tmp2407.value;
int64_t $tmp2409 = ((int64_t) $tmp2408) & 255;
bool $tmp2410 = $tmp2409 >= 128;
frost$core$Char8** $tmp2411 = &param0->data;
frost$core$Char8* $tmp2412 = *$tmp2411;
frost$core$Int64 $tmp2413 = *(&local0);
int64_t $tmp2414 = $tmp2413.value;
frost$core$Char8 $tmp2415 = $tmp2412[$tmp2414];
uint8_t $tmp2416 = $tmp2415.value;
int64_t $tmp2417 = ((int64_t) $tmp2416) & 255;
bool $tmp2418 = $tmp2417 < 192;
bool $tmp2419 = $tmp2410 & $tmp2418;
frost$core$Bit $tmp2420 = frost$core$Bit$init$builtin_bit($tmp2419);
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block4; else goto block5;
block4:;
// line 1247
frost$core$Int64 $tmp2422 = *(&local0);
frost$core$Int64 $tmp2423 = (frost$core$Int64) {1};
int64_t $tmp2424 = $tmp2422.value;
int64_t $tmp2425 = $tmp2423.value;
int64_t $tmp2426 = $tmp2424 - $tmp2425;
frost$core$Int64 $tmp2427 = (frost$core$Int64) {$tmp2426};
*(&local0) = $tmp2427;
goto block3;
block5:;
// line 1249
frost$core$Int64 $tmp2428 = *(&local0);
frost$core$String$Index $tmp2429 = frost$core$String$Index$init$frost$core$Int64($tmp2428);
return $tmp2429;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1259
*(&local0) = param1;
// line 1260
frost$core$Int64 $tmp2430 = (frost$core$Int64) {0};
int64_t $tmp2431 = param2.value;
int64_t $tmp2432 = $tmp2430.value;
bool $tmp2433 = $tmp2431 > $tmp2432;
frost$core$Bit $tmp2434 = (frost$core$Bit) {$tmp2433};
bool $tmp2435 = $tmp2434.value;
if ($tmp2435) goto block1; else goto block3;
block1:;
// line 1261
frost$core$Int64 $tmp2436 = (frost$core$Int64) {0};
frost$core$Bit $tmp2437 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2438 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2436, param2, $tmp2437);
frost$core$Int64 $tmp2439 = $tmp2438.min;
*(&local1) = $tmp2439;
frost$core$Int64 $tmp2440 = $tmp2438.max;
frost$core$Bit $tmp2441 = $tmp2438.inclusive;
bool $tmp2442 = $tmp2441.value;
frost$core$Int64 $tmp2443 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2444 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2443);
if ($tmp2442) goto block7; else goto block8;
block7:;
int64_t $tmp2445 = $tmp2439.value;
int64_t $tmp2446 = $tmp2440.value;
bool $tmp2447 = $tmp2445 <= $tmp2446;
frost$core$Bit $tmp2448 = (frost$core$Bit) {$tmp2447};
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block4; else goto block5;
block8:;
int64_t $tmp2450 = $tmp2439.value;
int64_t $tmp2451 = $tmp2440.value;
bool $tmp2452 = $tmp2450 < $tmp2451;
frost$core$Bit $tmp2453 = (frost$core$Bit) {$tmp2452};
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block4; else goto block5;
block4:;
// line 1262
frost$core$String$Index $tmp2455 = *(&local0);
frost$core$String$Index $tmp2456 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2455);
*(&local0) = $tmp2456;
goto block6;
block6:;
frost$core$Int64 $tmp2457 = *(&local1);
int64_t $tmp2458 = $tmp2440.value;
int64_t $tmp2459 = $tmp2457.value;
int64_t $tmp2460 = $tmp2458 - $tmp2459;
frost$core$Int64 $tmp2461 = (frost$core$Int64) {$tmp2460};
frost$core$UInt64 $tmp2462 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2461);
if ($tmp2442) goto block10; else goto block11;
block10:;
uint64_t $tmp2463 = $tmp2462.value;
uint64_t $tmp2464 = $tmp2444.value;
bool $tmp2465 = $tmp2463 >= $tmp2464;
frost$core$Bit $tmp2466 = (frost$core$Bit) {$tmp2465};
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block9; else goto block5;
block11:;
uint64_t $tmp2468 = $tmp2462.value;
uint64_t $tmp2469 = $tmp2444.value;
bool $tmp2470 = $tmp2468 > $tmp2469;
frost$core$Bit $tmp2471 = (frost$core$Bit) {$tmp2470};
bool $tmp2472 = $tmp2471.value;
if ($tmp2472) goto block9; else goto block5;
block9:;
int64_t $tmp2473 = $tmp2457.value;
int64_t $tmp2474 = $tmp2443.value;
int64_t $tmp2475 = $tmp2473 + $tmp2474;
frost$core$Int64 $tmp2476 = (frost$core$Int64) {$tmp2475};
*(&local1) = $tmp2476;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1266
frost$core$Int64 $tmp2477 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2478 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2479 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2480 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2477, param2, $tmp2478, $tmp2479);
frost$core$Int64 $tmp2481 = $tmp2480.start;
*(&local2) = $tmp2481;
frost$core$Int64 $tmp2482 = $tmp2480.end;
frost$core$Int64 $tmp2483 = $tmp2480.step;
frost$core$UInt64 $tmp2484 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2483);
frost$core$Int64 $tmp2485 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2483);
frost$core$UInt64 $tmp2486 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2485);
frost$core$Bit $tmp2487 = $tmp2480.inclusive;
bool $tmp2488 = $tmp2487.value;
frost$core$Int64 $tmp2489 = (frost$core$Int64) {0};
int64_t $tmp2490 = $tmp2483.value;
int64_t $tmp2491 = $tmp2489.value;
bool $tmp2492 = $tmp2490 >= $tmp2491;
frost$core$Bit $tmp2493 = (frost$core$Bit) {$tmp2492};
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block15; else goto block16;
block15:;
if ($tmp2488) goto block17; else goto block18;
block17:;
int64_t $tmp2495 = $tmp2481.value;
int64_t $tmp2496 = $tmp2482.value;
bool $tmp2497 = $tmp2495 <= $tmp2496;
frost$core$Bit $tmp2498 = (frost$core$Bit) {$tmp2497};
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block12; else goto block13;
block18:;
int64_t $tmp2500 = $tmp2481.value;
int64_t $tmp2501 = $tmp2482.value;
bool $tmp2502 = $tmp2500 < $tmp2501;
frost$core$Bit $tmp2503 = (frost$core$Bit) {$tmp2502};
bool $tmp2504 = $tmp2503.value;
if ($tmp2504) goto block12; else goto block13;
block16:;
if ($tmp2488) goto block19; else goto block20;
block19:;
int64_t $tmp2505 = $tmp2481.value;
int64_t $tmp2506 = $tmp2482.value;
bool $tmp2507 = $tmp2505 >= $tmp2506;
frost$core$Bit $tmp2508 = (frost$core$Bit) {$tmp2507};
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block12; else goto block13;
block20:;
int64_t $tmp2510 = $tmp2481.value;
int64_t $tmp2511 = $tmp2482.value;
bool $tmp2512 = $tmp2510 > $tmp2511;
frost$core$Bit $tmp2513 = (frost$core$Bit) {$tmp2512};
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block12; else goto block13;
block12:;
// line 1267
frost$core$String$Index $tmp2515 = *(&local0);
frost$core$String$Index $tmp2516 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2515);
*(&local0) = $tmp2516;
goto block14;
block14:;
frost$core$Int64 $tmp2517 = *(&local2);
if ($tmp2494) goto block22; else goto block23;
block22:;
int64_t $tmp2518 = $tmp2482.value;
int64_t $tmp2519 = $tmp2517.value;
int64_t $tmp2520 = $tmp2518 - $tmp2519;
frost$core$Int64 $tmp2521 = (frost$core$Int64) {$tmp2520};
frost$core$UInt64 $tmp2522 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2521);
if ($tmp2488) goto block24; else goto block25;
block24:;
uint64_t $tmp2523 = $tmp2522.value;
uint64_t $tmp2524 = $tmp2484.value;
bool $tmp2525 = $tmp2523 >= $tmp2524;
frost$core$Bit $tmp2526 = (frost$core$Bit) {$tmp2525};
bool $tmp2527 = $tmp2526.value;
if ($tmp2527) goto block21; else goto block13;
block25:;
uint64_t $tmp2528 = $tmp2522.value;
uint64_t $tmp2529 = $tmp2484.value;
bool $tmp2530 = $tmp2528 > $tmp2529;
frost$core$Bit $tmp2531 = (frost$core$Bit) {$tmp2530};
bool $tmp2532 = $tmp2531.value;
if ($tmp2532) goto block21; else goto block13;
block23:;
int64_t $tmp2533 = $tmp2517.value;
int64_t $tmp2534 = $tmp2482.value;
int64_t $tmp2535 = $tmp2533 - $tmp2534;
frost$core$Int64 $tmp2536 = (frost$core$Int64) {$tmp2535};
frost$core$UInt64 $tmp2537 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2536);
if ($tmp2488) goto block26; else goto block27;
block26:;
uint64_t $tmp2538 = $tmp2537.value;
uint64_t $tmp2539 = $tmp2486.value;
bool $tmp2540 = $tmp2538 >= $tmp2539;
frost$core$Bit $tmp2541 = (frost$core$Bit) {$tmp2540};
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block21; else goto block13;
block27:;
uint64_t $tmp2543 = $tmp2537.value;
uint64_t $tmp2544 = $tmp2486.value;
bool $tmp2545 = $tmp2543 > $tmp2544;
frost$core$Bit $tmp2546 = (frost$core$Bit) {$tmp2545};
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block21; else goto block13;
block21:;
int64_t $tmp2548 = $tmp2517.value;
int64_t $tmp2549 = $tmp2483.value;
int64_t $tmp2550 = $tmp2548 + $tmp2549;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {$tmp2550};
*(&local2) = $tmp2551;
goto block12;
block13:;
goto block2;
block2:;
// line 1270
frost$core$String$Index $tmp2552 = *(&local0);
return $tmp2552;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1283
frost$core$Int32 $tmp2553 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2554 = frost$core$Char32$init$frost$core$Int32($tmp2553);
frost$core$String* $tmp2555 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
// unreffing REF($3:frost.core.String)
return $tmp2555;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1297
frost$core$Int64 $tmp2556 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2557 = $tmp2556.value;
int64_t $tmp2558 = param1.value;
bool $tmp2559 = $tmp2557 >= $tmp2558;
frost$core$Bit $tmp2560 = (frost$core$Bit) {$tmp2559};
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block1; else goto block2;
block1:;
// line 1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1300
frost$core$Int64 $tmp2562 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2563 = param1.value;
int64_t $tmp2564 = $tmp2562.value;
int64_t $tmp2565 = $tmp2563 - $tmp2564;
frost$core$Int64 $tmp2566 = (frost$core$Int64) {$tmp2565};
frost$core$String* $tmp2567 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2566);
frost$core$String* $tmp2568 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// unreffing REF($18:frost.core.String)
return $tmp2568;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1313
frost$core$Int32 $tmp2569 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2570 = frost$core$Char32$init$frost$core$Int32($tmp2569);
frost$core$String* $tmp2571 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
// unreffing REF($3:frost.core.String)
return $tmp2571;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1327
frost$core$Int64 $tmp2572 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2573 = $tmp2572.value;
int64_t $tmp2574 = param1.value;
bool $tmp2575 = $tmp2573 >= $tmp2574;
frost$core$Bit $tmp2576 = (frost$core$Bit) {$tmp2575};
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block1; else goto block2;
block1:;
// line 1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1330
frost$core$Int64 $tmp2578 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2579 = param1.value;
int64_t $tmp2580 = $tmp2578.value;
int64_t $tmp2581 = $tmp2579 - $tmp2580;
frost$core$Int64 $tmp2582 = (frost$core$Int64) {$tmp2581};
frost$core$String* $tmp2583 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2582);
frost$core$String* $tmp2584 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2583, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
// unreffing REF($18:frost.core.String)
return $tmp2584;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1345
frost$core$Int32 $tmp2585 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2586 = frost$core$Char32$init$frost$core$Int32($tmp2585);
frost$core$String* $tmp2587 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
// unreffing REF($3:frost.core.String)
return $tmp2587;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1361
frost$core$Int64 $tmp2588 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2589 = $tmp2588.value;
int64_t $tmp2590 = param1.value;
bool $tmp2591 = $tmp2589 >= $tmp2590;
frost$core$Bit $tmp2592 = (frost$core$Bit) {$tmp2591};
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block1; else goto block2;
block1:;
// line 1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1364
frost$core$Int64 $tmp2594 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2595 = param1.value;
int64_t $tmp2596 = $tmp2594.value;
int64_t $tmp2597 = $tmp2595 - $tmp2596;
frost$core$Int64 $tmp2598 = (frost$core$Int64) {$tmp2597};
*(&local0) = $tmp2598;
// line 1365
frost$core$Int64 $tmp2599 = *(&local0);
frost$core$Int64 $tmp2600 = (frost$core$Int64) {2};
int64_t $tmp2601 = $tmp2599.value;
int64_t $tmp2602 = $tmp2600.value;
int64_t $tmp2603 = $tmp2601 / $tmp2602;
frost$core$Int64 $tmp2604 = (frost$core$Int64) {$tmp2603};
*(&local1) = $tmp2604;
// line 1366
frost$core$Int64 $tmp2605 = *(&local0);
frost$core$Int64 $tmp2606 = *(&local1);
int64_t $tmp2607 = $tmp2605.value;
int64_t $tmp2608 = $tmp2606.value;
int64_t $tmp2609 = $tmp2607 - $tmp2608;
frost$core$Int64 $tmp2610 = (frost$core$Int64) {$tmp2609};
*(&local2) = $tmp2610;
// line 1367
frost$core$Int64 $tmp2611 = *(&local1);
frost$core$String* $tmp2612 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2611);
frost$core$String* $tmp2613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2612, param0);
frost$core$Int64 $tmp2614 = *(&local2);
frost$core$String* $tmp2615 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2614);
frost$core$String* $tmp2616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2613, $tmp2615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
// unreffing REF($37:frost.core.String)
return $tmp2616;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1378
frost$core$Int64 $tmp2617 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2618 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2618;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
frost$core$Bit local3;
// line 1391
frost$collections$Array* $tmp2619 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2619);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$collections$Array* $tmp2620 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
*(&local0) = $tmp2619;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 1392
frost$core$String$Index $tmp2621 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2621;
// line 1393
goto block1;
block1:;
// line 1394
// line 1395
frost$core$Int64* $tmp2622 = &param1->_length;
frost$core$Int64 $tmp2623 = *$tmp2622;
frost$core$Int64 $tmp2624 = (frost$core$Int64) {0};
frost$core$Bit $tmp2625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2623, $tmp2624);
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block3; else goto block5;
block3:;
// line 1396
frost$core$String$Index $tmp2627 = *(&local1);
frost$core$String$Index $tmp2628 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2627);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2628, true });
goto block4;
block5:;
// line 1
// line 1399
frost$core$String$Index $tmp2629 = *(&local1);
frost$core$String$Index$nullable $tmp2630 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2629);
*(&local2) = $tmp2630;
goto block4;
block4:;
// line 1401
frost$core$String$Index$nullable $tmp2631 = *(&local2);
frost$core$Bit $tmp2632 = frost$core$Bit$init$builtin_bit(!$tmp2631.nonnull);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2632;
goto block10;
block9:;
frost$collections$Array* $tmp2634 = *(&local0);
ITable* $tmp2635 = ((frost$collections$CollectionView*) $tmp2634)->$class->itable;
while ($tmp2635->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2635 = $tmp2635->next;
}
$fn2637 $tmp2636 = $tmp2635->methods[0];
frost$core$Int64 $tmp2638 = $tmp2636(((frost$collections$CollectionView*) $tmp2634));
frost$core$Int64 $tmp2639 = (frost$core$Int64) {1};
int64_t $tmp2640 = param2.value;
int64_t $tmp2641 = $tmp2639.value;
int64_t $tmp2642 = $tmp2640 - $tmp2641;
frost$core$Int64 $tmp2643 = (frost$core$Int64) {$tmp2642};
frost$core$Bit $tmp2644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2638, $tmp2643);
*(&local3) = $tmp2644;
goto block10;
block10:;
frost$core$Bit $tmp2645 = *(&local3);
bool $tmp2646 = $tmp2645.value;
if ($tmp2646) goto block6; else goto block7;
block6:;
// line 1402
frost$collections$Array* $tmp2647 = *(&local0);
frost$core$String$Index $tmp2648 = *(&local1);
frost$core$Bit $tmp2649 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2650 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2648, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2649);
frost$core$String* $tmp2651 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2650);
frost$collections$Array$add$frost$collections$Array$T($tmp2647, ((frost$core$Object*) $tmp2651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
// unreffing REF($69:frost.core.String)
// line 1403
goto block2;
block7:;
// line 1405
frost$collections$Array* $tmp2652 = *(&local0);
frost$core$String$Index $tmp2653 = *(&local1);
frost$core$String$Index$nullable $tmp2654 = *(&local2);
frost$core$Bit $tmp2655 = frost$core$Bit$init$builtin_bit($tmp2654.nonnull);
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2657 = (frost$core$Int64) {1405};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2658, $tmp2657, &$s2659);
abort(); // unreachable
block11:;
frost$core$Bit $tmp2660 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2661 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2653, ((frost$core$String$Index) $tmp2654.value), $tmp2660);
frost$core$String* $tmp2662 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2661);
frost$collections$Array$add$frost$collections$Array$T($tmp2652, ((frost$core$Object*) $tmp2662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
// unreffing REF($92:frost.core.String)
// line 1406
frost$core$String$Index$nullable $tmp2663 = *(&local2);
frost$core$Bit $tmp2664 = frost$core$Bit$init$builtin_bit($tmp2663.nonnull);
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp2666 = (frost$core$Int64) {1406};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2667, $tmp2666, &$s2668);
abort(); // unreachable
block13:;
frost$core$Int64 $tmp2669 = ((frost$core$String$Index) $tmp2663.value).value;
frost$core$Int64* $tmp2670 = &param1->_length;
frost$core$Int64 $tmp2671 = *$tmp2670;
int64_t $tmp2672 = $tmp2669.value;
int64_t $tmp2673 = $tmp2671.value;
int64_t $tmp2674 = $tmp2672 + $tmp2673;
frost$core$Int64 $tmp2675 = (frost$core$Int64) {$tmp2674};
frost$core$String$Index $tmp2676 = frost$core$String$Index$init$frost$core$Int64($tmp2675);
*(&local1) = $tmp2676;
goto block1;
block2:;
// line 1408
frost$collections$Array* $tmp2677 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
frost$collections$Array* $tmp2678 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2677;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$Int64 $tmp2679 = (frost$core$Int64) {0};
int64_t $tmp2680 = param2.value;
int64_t $tmp2681 = $tmp2679.value;
bool $tmp2682 = $tmp2680 > $tmp2681;
frost$core$Bit $tmp2683 = (frost$core$Bit) {$tmp2682};
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {1422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2686, $tmp2685, &$s2687);
abort(); // unreachable
block1:;
// line 1423
frost$collections$Array* $tmp2688 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2688);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
frost$collections$Array* $tmp2689 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local0) = $tmp2688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
// unreffing REF($11:frost.collections.Array<frost.core.String>)
// line 1424
frost$core$Matcher* $tmp2690 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$core$Matcher* $tmp2691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local1) = $tmp2690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
// unreffing REF($25:frost.core.Matcher)
// line 1425
frost$core$String$Index $tmp2692 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2692;
// line 1426
goto block3;
block3:;
// line 1427
frost$core$Matcher* $tmp2693 = *(&local1);
frost$core$Bit $tmp2694 = frost$core$Matcher$find$R$frost$core$Bit($tmp2693);
*(&local3) = $tmp2694;
// line 1428
frost$core$Bit $tmp2695 = *(&local3);
frost$core$Bit $tmp2696 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2695);
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2696;
goto block9;
block8:;
frost$collections$Array* $tmp2698 = *(&local0);
ITable* $tmp2699 = ((frost$collections$CollectionView*) $tmp2698)->$class->itable;
while ($tmp2699->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2699 = $tmp2699->next;
}
$fn2701 $tmp2700 = $tmp2699->methods[0];
frost$core$Int64 $tmp2702 = $tmp2700(((frost$collections$CollectionView*) $tmp2698));
frost$core$Int64 $tmp2703 = (frost$core$Int64) {1};
int64_t $tmp2704 = param2.value;
int64_t $tmp2705 = $tmp2703.value;
int64_t $tmp2706 = $tmp2704 - $tmp2705;
frost$core$Int64 $tmp2707 = (frost$core$Int64) {$tmp2706};
frost$core$Bit $tmp2708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2702, $tmp2707);
*(&local4) = $tmp2708;
goto block9;
block9:;
frost$core$Bit $tmp2709 = *(&local4);
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block5; else goto block6;
block5:;
// line 1429
frost$collections$Array* $tmp2711 = *(&local0);
frost$core$String$Index $tmp2712 = *(&local2);
frost$core$Bit $tmp2713 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2714 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2712, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2713);
frost$core$String* $tmp2715 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2714);
frost$collections$Array$add$frost$collections$Array$T($tmp2711, ((frost$core$Object*) $tmp2715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// unreffing REF($74:frost.core.String)
// line 1430
goto block4;
block6:;
// line 1432
frost$core$Matcher* $tmp2716 = *(&local1);
frost$core$String$Index $tmp2717;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2717, $tmp2716);
*(&local5) = $tmp2717;
// line 1433
frost$collections$Array* $tmp2718 = *(&local0);
frost$core$String$Index $tmp2719 = *(&local2);
frost$core$String$Index $tmp2720 = *(&local5);
frost$core$Bit $tmp2721 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2722 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2719, $tmp2720, $tmp2721);
frost$core$String* $tmp2723 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2722);
frost$collections$Array$add$frost$collections$Array$T($tmp2718, ((frost$core$Object*) $tmp2723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
// unreffing REF($93:frost.core.String)
// line 1434
frost$core$String$Index $tmp2724 = *(&local5);
frost$core$Int64 $tmp2725 = $tmp2724.value;
frost$core$Matcher* $tmp2726 = *(&local1);
frost$core$String$Index $tmp2727;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2727, $tmp2726);
frost$core$Int64 $tmp2728 = $tmp2727.value;
frost$core$Int64 $tmp2729 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2725, $tmp2728);
frost$core$String$Index $tmp2730 = frost$core$String$Index$init$frost$core$Int64($tmp2729);
*(&local2) = $tmp2730;
goto block3;
block4:;
// line 1436
frost$collections$Array* $tmp2731 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Matcher* $tmp2732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2733 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2731;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1449
frost$core$Int64 $tmp2734 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2735 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2735;

}
frost$core$Int64$nullable frost$core$String$convert$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 1460
frost$core$Int64* $tmp2736 = &param0->_length;
frost$core$Int64 $tmp2737 = *$tmp2736;
frost$core$Int64 $tmp2738 = (frost$core$Int64) {0};
frost$core$Bit $tmp2739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2737, $tmp2738);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block1; else goto block2;
block1:;
// line 1461
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1463
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0};
*(&local0) = $tmp2741;
// line 1464
// line 1465
frost$core$Char8** $tmp2742 = &param0->data;
frost$core$Char8* $tmp2743 = *$tmp2742;
frost$core$Int64 $tmp2744 = (frost$core$Int64) {0};
int64_t $tmp2745 = $tmp2744.value;
frost$core$Char8 $tmp2746 = $tmp2743[$tmp2745];
frost$core$UInt8 $tmp2747 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2748 = frost$core$Char8$init$frost$core$UInt8($tmp2747);
frost$core$Bit $tmp2749 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2746, $tmp2748);
bool $tmp2750 = $tmp2749.value;
if ($tmp2750) goto block3; else goto block5;
block3:;
// line 1466
frost$core$Int64 $tmp2751 = (frost$core$Int64) {1};
*(&local1) = $tmp2751;
goto block4;
block5:;
// line 1
// line 1469
frost$core$Int64 $tmp2752 = (frost$core$Int64) {0};
*(&local1) = $tmp2752;
goto block4;
block4:;
// line 1471
frost$core$Int64 $tmp2753 = *(&local1);
frost$core$Int64* $tmp2754 = &param0->_length;
frost$core$Int64 $tmp2755 = *$tmp2754;
frost$core$Bit $tmp2756 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2757 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2753, $tmp2755, $tmp2756);
frost$core$Int64 $tmp2758 = $tmp2757.min;
*(&local2) = $tmp2758;
frost$core$Int64 $tmp2759 = $tmp2757.max;
frost$core$Bit $tmp2760 = $tmp2757.inclusive;
bool $tmp2761 = $tmp2760.value;
frost$core$Int64 $tmp2762 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2763 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2762);
if ($tmp2761) goto block9; else goto block10;
block9:;
int64_t $tmp2764 = $tmp2758.value;
int64_t $tmp2765 = $tmp2759.value;
bool $tmp2766 = $tmp2764 <= $tmp2765;
frost$core$Bit $tmp2767 = (frost$core$Bit) {$tmp2766};
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block6; else goto block7;
block10:;
int64_t $tmp2769 = $tmp2758.value;
int64_t $tmp2770 = $tmp2759.value;
bool $tmp2771 = $tmp2769 < $tmp2770;
frost$core$Bit $tmp2772 = (frost$core$Bit) {$tmp2771};
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block6; else goto block7;
block6:;
// line 1472
frost$core$Char8** $tmp2774 = &param0->data;
frost$core$Char8* $tmp2775 = *$tmp2774;
frost$core$Int64 $tmp2776 = *(&local2);
int64_t $tmp2777 = $tmp2776.value;
frost$core$Char8 $tmp2778 = $tmp2775[$tmp2777];
uint8_t $tmp2779 = $tmp2778.value;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {((int64_t) $tmp2779)};
frost$core$Int64 $tmp2781 = (frost$core$Int64) {48};
int64_t $tmp2782 = $tmp2780.value;
int64_t $tmp2783 = $tmp2781.value;
int64_t $tmp2784 = $tmp2782 - $tmp2783;
frost$core$Int64 $tmp2785 = (frost$core$Int64) {$tmp2784};
*(&local3) = $tmp2785;
// line 1473
frost$core$Int64 $tmp2786 = *(&local3);
frost$core$Int64 $tmp2787 = (frost$core$Int64) {0};
int64_t $tmp2788 = $tmp2786.value;
int64_t $tmp2789 = $tmp2787.value;
bool $tmp2790 = $tmp2788 < $tmp2789;
frost$core$Bit $tmp2791 = (frost$core$Bit) {$tmp2790};
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2791;
goto block15;
block14:;
frost$core$Int64 $tmp2793 = *(&local3);
frost$core$Int64 $tmp2794 = (frost$core$Int64) {9};
int64_t $tmp2795 = $tmp2793.value;
int64_t $tmp2796 = $tmp2794.value;
bool $tmp2797 = $tmp2795 > $tmp2796;
frost$core$Bit $tmp2798 = (frost$core$Bit) {$tmp2797};
*(&local4) = $tmp2798;
goto block15;
block15:;
frost$core$Bit $tmp2799 = *(&local4);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block11; else goto block12;
block11:;
// line 1474
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1476
frost$core$Int64 $tmp2801 = *(&local0);
frost$core$Int64 $tmp2802 = (frost$core$Int64) {10};
int64_t $tmp2803 = $tmp2801.value;
int64_t $tmp2804 = $tmp2802.value;
int64_t $tmp2805 = $tmp2803 * $tmp2804;
frost$core$Int64 $tmp2806 = (frost$core$Int64) {$tmp2805};
frost$core$Int64 $tmp2807 = *(&local3);
int64_t $tmp2808 = $tmp2806.value;
int64_t $tmp2809 = $tmp2807.value;
int64_t $tmp2810 = $tmp2808 + $tmp2809;
frost$core$Int64 $tmp2811 = (frost$core$Int64) {$tmp2810};
*(&local0) = $tmp2811;
goto block8;
block8:;
frost$core$Int64 $tmp2812 = *(&local2);
int64_t $tmp2813 = $tmp2759.value;
int64_t $tmp2814 = $tmp2812.value;
int64_t $tmp2815 = $tmp2813 - $tmp2814;
frost$core$Int64 $tmp2816 = (frost$core$Int64) {$tmp2815};
frost$core$UInt64 $tmp2817 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2816);
if ($tmp2761) goto block17; else goto block18;
block17:;
uint64_t $tmp2818 = $tmp2817.value;
uint64_t $tmp2819 = $tmp2763.value;
bool $tmp2820 = $tmp2818 >= $tmp2819;
frost$core$Bit $tmp2821 = (frost$core$Bit) {$tmp2820};
bool $tmp2822 = $tmp2821.value;
if ($tmp2822) goto block16; else goto block7;
block18:;
uint64_t $tmp2823 = $tmp2817.value;
uint64_t $tmp2824 = $tmp2763.value;
bool $tmp2825 = $tmp2823 > $tmp2824;
frost$core$Bit $tmp2826 = (frost$core$Bit) {$tmp2825};
bool $tmp2827 = $tmp2826.value;
if ($tmp2827) goto block16; else goto block7;
block16:;
int64_t $tmp2828 = $tmp2812.value;
int64_t $tmp2829 = $tmp2762.value;
int64_t $tmp2830 = $tmp2828 + $tmp2829;
frost$core$Int64 $tmp2831 = (frost$core$Int64) {$tmp2830};
*(&local2) = $tmp2831;
goto block6;
block7:;
// line 1478
frost$core$Char8** $tmp2832 = &param0->data;
frost$core$Char8* $tmp2833 = *$tmp2832;
frost$core$Int64 $tmp2834 = (frost$core$Int64) {0};
int64_t $tmp2835 = $tmp2834.value;
frost$core$Char8 $tmp2836 = $tmp2833[$tmp2835];
frost$core$UInt8 $tmp2837 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2838 = frost$core$Char8$init$frost$core$UInt8($tmp2837);
frost$core$Bit $tmp2839 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2836, $tmp2838);
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block19; else goto block20;
block19:;
// line 1479
frost$core$Int64 $tmp2841 = *(&local0);
frost$core$Int64 $tmp2842 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2841);
*(&local0) = $tmp2842;
goto block20;
block20:;
// line 1481
frost$core$Int64 $tmp2843 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2843, true });

}
frost$core$UInt64$nullable frost$core$String$convert$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$Bit local3;
// line 1491
frost$core$Int64* $tmp2844 = &param0->_length;
frost$core$Int64 $tmp2845 = *$tmp2844;
frost$core$Int64 $tmp2846 = (frost$core$Int64) {0};
frost$core$Bit $tmp2847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2845, $tmp2846);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block1; else goto block2;
block1:;
// line 1492
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1494
frost$core$UInt64 $tmp2849 = (frost$core$UInt64) {0};
*(&local0) = $tmp2849;
// line 1495
frost$core$Int64 $tmp2850 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2851 = &param0->_length;
frost$core$Int64 $tmp2852 = *$tmp2851;
frost$core$Bit $tmp2853 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2854 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2850, $tmp2852, $tmp2853);
frost$core$Int64 $tmp2855 = $tmp2854.min;
*(&local1) = $tmp2855;
frost$core$Int64 $tmp2856 = $tmp2854.max;
frost$core$Bit $tmp2857 = $tmp2854.inclusive;
bool $tmp2858 = $tmp2857.value;
frost$core$Int64 $tmp2859 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2860 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2859);
if ($tmp2858) goto block6; else goto block7;
block6:;
int64_t $tmp2861 = $tmp2855.value;
int64_t $tmp2862 = $tmp2856.value;
bool $tmp2863 = $tmp2861 <= $tmp2862;
frost$core$Bit $tmp2864 = (frost$core$Bit) {$tmp2863};
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block3; else goto block4;
block7:;
int64_t $tmp2866 = $tmp2855.value;
int64_t $tmp2867 = $tmp2856.value;
bool $tmp2868 = $tmp2866 < $tmp2867;
frost$core$Bit $tmp2869 = (frost$core$Bit) {$tmp2868};
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block3; else goto block4;
block3:;
// line 1496
frost$core$Char8** $tmp2871 = &param0->data;
frost$core$Char8* $tmp2872 = *$tmp2871;
frost$core$Int64 $tmp2873 = *(&local1);
int64_t $tmp2874 = $tmp2873.value;
frost$core$Char8 $tmp2875 = $tmp2872[$tmp2874];
uint8_t $tmp2876 = $tmp2875.value;
frost$core$UInt64 $tmp2877 = (frost$core$UInt64) {((uint64_t) $tmp2876)};
frost$core$UInt64 $tmp2878 = (frost$core$UInt64) {48};
uint64_t $tmp2879 = $tmp2877.value;
uint64_t $tmp2880 = $tmp2878.value;
uint64_t $tmp2881 = $tmp2879 - $tmp2880;
frost$core$UInt64 $tmp2882 = (frost$core$UInt64) {$tmp2881};
*(&local2) = $tmp2882;
// line 1497
frost$core$UInt64 $tmp2883 = *(&local2);
frost$core$UInt64 $tmp2884 = (frost$core$UInt64) {0};
uint64_t $tmp2885 = $tmp2883.value;
uint64_t $tmp2886 = $tmp2884.value;
bool $tmp2887 = $tmp2885 < $tmp2886;
frost$core$Bit $tmp2888 = (frost$core$Bit) {$tmp2887};
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2888;
goto block12;
block11:;
frost$core$UInt64 $tmp2890 = *(&local2);
frost$core$UInt64 $tmp2891 = (frost$core$UInt64) {9};
uint64_t $tmp2892 = $tmp2890.value;
uint64_t $tmp2893 = $tmp2891.value;
bool $tmp2894 = $tmp2892 > $tmp2893;
frost$core$Bit $tmp2895 = (frost$core$Bit) {$tmp2894};
*(&local3) = $tmp2895;
goto block12;
block12:;
frost$core$Bit $tmp2896 = *(&local3);
bool $tmp2897 = $tmp2896.value;
if ($tmp2897) goto block8; else goto block9;
block8:;
// line 1498
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1500
frost$core$UInt64 $tmp2898 = *(&local0);
frost$core$UInt64 $tmp2899 = (frost$core$UInt64) {10};
uint64_t $tmp2900 = $tmp2898.value;
uint64_t $tmp2901 = $tmp2899.value;
uint64_t $tmp2902 = $tmp2900 * $tmp2901;
frost$core$UInt64 $tmp2903 = (frost$core$UInt64) {$tmp2902};
frost$core$UInt64 $tmp2904 = *(&local2);
uint64_t $tmp2905 = $tmp2903.value;
uint64_t $tmp2906 = $tmp2904.value;
uint64_t $tmp2907 = $tmp2905 + $tmp2906;
frost$core$UInt64 $tmp2908 = (frost$core$UInt64) {$tmp2907};
*(&local0) = $tmp2908;
goto block5;
block5:;
frost$core$Int64 $tmp2909 = *(&local1);
int64_t $tmp2910 = $tmp2856.value;
int64_t $tmp2911 = $tmp2909.value;
int64_t $tmp2912 = $tmp2910 - $tmp2911;
frost$core$Int64 $tmp2913 = (frost$core$Int64) {$tmp2912};
frost$core$UInt64 $tmp2914 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2913);
if ($tmp2858) goto block14; else goto block15;
block14:;
uint64_t $tmp2915 = $tmp2914.value;
uint64_t $tmp2916 = $tmp2860.value;
bool $tmp2917 = $tmp2915 >= $tmp2916;
frost$core$Bit $tmp2918 = (frost$core$Bit) {$tmp2917};
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block13; else goto block4;
block15:;
uint64_t $tmp2920 = $tmp2914.value;
uint64_t $tmp2921 = $tmp2860.value;
bool $tmp2922 = $tmp2920 > $tmp2921;
frost$core$Bit $tmp2923 = (frost$core$Bit) {$tmp2922};
bool $tmp2924 = $tmp2923.value;
if ($tmp2924) goto block13; else goto block4;
block13:;
int64_t $tmp2925 = $tmp2909.value;
int64_t $tmp2926 = $tmp2859.value;
int64_t $tmp2927 = $tmp2925 + $tmp2926;
frost$core$Int64 $tmp2928 = (frost$core$Int64) {$tmp2927};
*(&local1) = $tmp2928;
goto block3;
block4:;
// line 1502
frost$core$UInt64 $tmp2929 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2929, true });

}
frost$core$Real64$nullable frost$core$String$convert$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1512
frost$core$Real64 $tmp2930;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2930, param0);
return ((frost$core$Real64$nullable) { $tmp2930, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1520
frost$core$Int64 $tmp2931 = (frost$core$Int64) {1};
*(&local0) = $tmp2931;
// line 1521
frost$core$Int64 $tmp2932 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2933 = &param0->_length;
frost$core$Int64 $tmp2934 = *$tmp2933;
frost$core$Bit $tmp2935 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2936 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2932, $tmp2934, $tmp2935);
frost$core$Int64 $tmp2937 = $tmp2936.min;
*(&local1) = $tmp2937;
frost$core$Int64 $tmp2938 = $tmp2936.max;
frost$core$Bit $tmp2939 = $tmp2936.inclusive;
bool $tmp2940 = $tmp2939.value;
frost$core$Int64 $tmp2941 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2942 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2941);
if ($tmp2940) goto block4; else goto block5;
block4:;
int64_t $tmp2943 = $tmp2937.value;
int64_t $tmp2944 = $tmp2938.value;
bool $tmp2945 = $tmp2943 <= $tmp2944;
frost$core$Bit $tmp2946 = (frost$core$Bit) {$tmp2945};
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block1; else goto block2;
block5:;
int64_t $tmp2948 = $tmp2937.value;
int64_t $tmp2949 = $tmp2938.value;
bool $tmp2950 = $tmp2948 < $tmp2949;
frost$core$Bit $tmp2951 = (frost$core$Bit) {$tmp2950};
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block1; else goto block2;
block1:;
// line 1522
frost$core$Int64 $tmp2953 = *(&local0);
frost$core$Int64 $tmp2954 = (frost$core$Int64) {101};
int64_t $tmp2955 = $tmp2953.value;
int64_t $tmp2956 = $tmp2954.value;
int64_t $tmp2957 = $tmp2955 * $tmp2956;
frost$core$Int64 $tmp2958 = (frost$core$Int64) {$tmp2957};
frost$core$Char8** $tmp2959 = &param0->data;
frost$core$Char8* $tmp2960 = *$tmp2959;
frost$core$Int64 $tmp2961 = *(&local1);
int64_t $tmp2962 = $tmp2961.value;
frost$core$Char8 $tmp2963 = $tmp2960[$tmp2962];
uint8_t $tmp2964 = $tmp2963.value;
frost$core$Int64 $tmp2965 = (frost$core$Int64) {((int64_t) $tmp2964)};
int64_t $tmp2966 = $tmp2958.value;
int64_t $tmp2967 = $tmp2965.value;
int64_t $tmp2968 = $tmp2966 + $tmp2967;
frost$core$Int64 $tmp2969 = (frost$core$Int64) {$tmp2968};
*(&local0) = $tmp2969;
goto block3;
block3:;
frost$core$Int64 $tmp2970 = *(&local1);
int64_t $tmp2971 = $tmp2938.value;
int64_t $tmp2972 = $tmp2970.value;
int64_t $tmp2973 = $tmp2971 - $tmp2972;
frost$core$Int64 $tmp2974 = (frost$core$Int64) {$tmp2973};
frost$core$UInt64 $tmp2975 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2974);
if ($tmp2940) goto block7; else goto block8;
block7:;
uint64_t $tmp2976 = $tmp2975.value;
uint64_t $tmp2977 = $tmp2942.value;
bool $tmp2978 = $tmp2976 >= $tmp2977;
frost$core$Bit $tmp2979 = (frost$core$Bit) {$tmp2978};
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block6; else goto block2;
block8:;
uint64_t $tmp2981 = $tmp2975.value;
uint64_t $tmp2982 = $tmp2942.value;
bool $tmp2983 = $tmp2981 > $tmp2982;
frost$core$Bit $tmp2984 = (frost$core$Bit) {$tmp2983};
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block6; else goto block2;
block6:;
int64_t $tmp2986 = $tmp2970.value;
int64_t $tmp2987 = $tmp2941.value;
int64_t $tmp2988 = $tmp2986 + $tmp2987;
frost$core$Int64 $tmp2989 = (frost$core$Int64) {$tmp2988};
*(&local1) = $tmp2989;
goto block1;
block2:;
// line 1533
frost$core$Int64 $tmp2990 = *(&local0);
return $tmp2990;

}

