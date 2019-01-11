#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/collections/Array.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/String/MatchIterator.h"
#include "panda/core/String/RegexMatchIterator.h"
#include "panda/core/Real64.h"

__attribute__((weak)) panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String$shim(panda$core$String* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$String$format$panda$core$String$R$panda$core$String(p0, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64$shim(panda$core$String* p0) {
    panda$core$Int64 result = panda$core$String$get_hash$R$panda$core$Int64(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$String$convert$R$panda$core$String$shim(panda$core$String* p0) {
    panda$core$String* result = panda$core$String$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$core$String$cleanup$shim(panda$core$String* p0) {
    panda$core$String$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String$shim, panda$core$String$cleanup$shim, panda$core$String$format$panda$core$String$R$panda$core$String$shim, panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$get_length$R$panda$core$Int64, panda$core$String$get_byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$get_trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$get_start$R$panda$core$String$Index, panda$core$String$get_end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$get_hash$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn91)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn96)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn187)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn268)(panda$collections$Iterable*);
typedef panda$core$Int64 (*$fn272)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn606)(panda$core$Object*);
typedef panda$core$String* (*$fn718)(panda$core$Object*);
typedef panda$core$Object* (*$fn2095)(panda$core$String*);
typedef panda$core$Object* (*$fn2097)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2101)(panda$core$Object*);
typedef panda$core$Object* (*$fn2172)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2174)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2178)(panda$core$Object*);
typedef panda$core$Int64 (*$fn2505)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2559)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 4839268531851362231, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

// line 328
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// line 351
panda$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// line 352
panda$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = param2;
// line 353
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp6 = &param0->owner;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((panda$core$String*) NULL);
return;

}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Char8* param1, panda$core$Int64 param2, panda$core$String* param3) {

// line 328
panda$core$Int64 $tmp9 = (panda$core$Int64) {0};
panda$core$Int64* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// line 358
panda$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// line 359
panda$core$Int64* $tmp12 = &param0->_length;
*$tmp12 = param2;
// line 360
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp13 = &param0->owner;
panda$core$String* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$String** $tmp15 = &param0->owner;
*$tmp15 = param3;
return;

}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 328
panda$core$Int64 $tmp16 = (panda$core$Int64) {0};
panda$core$Int64* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// line 364
ITable* $tmp18 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) param1));
panda$core$Int64* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// line 365
panda$core$Int64* $tmp23 = &param0->_length;
panda$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
panda$core$Char8* $tmp26 = ((panda$core$Char8*) pandaZAlloc($tmp25 * 1));
panda$core$Char8** $tmp27 = &param0->data;
*$tmp27 = $tmp26;
// line 366
panda$core$Int64 $tmp28 = (panda$core$Int64) {0};
panda$core$Int64* $tmp29 = &param0->_length;
panda$core$Int64 $tmp30 = *$tmp29;
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp32 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp28, $tmp30, $tmp31);
panda$core$Int64 $tmp33 = $tmp32.min;
*(&local0) = $tmp33;
panda$core$Int64 $tmp34 = $tmp32.max;
panda$core$Bit $tmp35 = $tmp32.inclusive;
bool $tmp36 = $tmp35.value;
panda$core$Int64 $tmp37 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp38 = panda$core$Int64$convert$R$panda$core$UInt64($tmp37);
if ($tmp36) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp33.value;
int64_t $tmp40 = $tmp34.value;
bool $tmp41 = $tmp39 <= $tmp40;
panda$core$Bit $tmp42 = (panda$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp34.value;
bool $tmp46 = $tmp44 < $tmp45;
panda$core$Bit $tmp47 = (panda$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 367
panda$core$Char8** $tmp49 = &param0->data;
panda$core$Char8* $tmp50 = *$tmp49;
panda$core$Int64 $tmp51 = *(&local0);
panda$core$Int64 $tmp52 = *(&local0);
ITable* $tmp53 = param1->$class->itable;
while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
panda$core$Object* $tmp56 = $tmp54(param1, $tmp52);
int64_t $tmp57 = $tmp51.value;
$tmp50[$tmp57] = ((panda$core$Char8$wrapper*) $tmp56)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp56);
// unreffing REF($50:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp34.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
panda$core$UInt64 $tmp63 = panda$core$Int64$convert$R$panda$core$UInt64($tmp62);
if ($tmp36) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp38.value;
bool $tmp66 = $tmp64 >= $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp38.value;
bool $tmp71 = $tmp69 > $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp37.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
*(&local0) = $tmp77;
goto block1;
block2:;
// line 369
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp78 = &param0->owner;
panda$core$String* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((panda$core$String*) NULL);
return;

}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char32$GT(panda$core$String* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Int64 local2;
// line 328
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
panda$core$Int64* $tmp82 = &param0->dummy;
*$tmp82 = $tmp81;
// line 373
panda$core$MutableString* $tmp83 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp83);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$MutableString* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = $tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($5:panda.core.MutableString)
// line 374
ITable* $tmp85 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
panda$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
panda$core$Object* $tmp97 = $tmp95($tmp88);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp97)->value;
// line 375
panda$core$MutableString* $tmp98 = *(&local0);
panda$core$Char32 $tmp99 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp98, $tmp99);
panda$core$Panda$unref$panda$core$Object$Q($tmp97);
// unreffing REF($31:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($21:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 377
panda$core$MutableString* $tmp100 = *(&local0);
panda$core$Int64* $tmp101 = &$tmp100->_length;
panda$core$Int64 $tmp102 = *$tmp101;
int64_t $tmp103 = $tmp102.value;
panda$core$Char8* $tmp104 = ((panda$core$Char8*) pandaZAlloc($tmp103 * 1));
panda$core$Char8** $tmp105 = &param0->data;
*$tmp105 = $tmp104;
// line 378
panda$core$Int64 $tmp106 = (panda$core$Int64) {0};
panda$core$MutableString* $tmp107 = *(&local0);
panda$core$Int64* $tmp108 = &$tmp107->_length;
panda$core$Int64 $tmp109 = *$tmp108;
panda$core$Bit $tmp110 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp111 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp106, $tmp109, $tmp110);
panda$core$Int64 $tmp112 = $tmp111.min;
*(&local2) = $tmp112;
panda$core$Int64 $tmp113 = $tmp111.max;
panda$core$Bit $tmp114 = $tmp111.inclusive;
bool $tmp115 = $tmp114.value;
panda$core$Int64 $tmp116 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp117 = panda$core$Int64$convert$R$panda$core$UInt64($tmp116);
if ($tmp115) goto block7; else goto block8;
block7:;
int64_t $tmp118 = $tmp112.value;
int64_t $tmp119 = $tmp113.value;
bool $tmp120 = $tmp118 <= $tmp119;
panda$core$Bit $tmp121 = (panda$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block8:;
int64_t $tmp123 = $tmp112.value;
int64_t $tmp124 = $tmp113.value;
bool $tmp125 = $tmp123 < $tmp124;
panda$core$Bit $tmp126 = (panda$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
// line 379
panda$core$Char8** $tmp128 = &param0->data;
panda$core$Char8* $tmp129 = *$tmp128;
panda$core$Int64 $tmp130 = *(&local2);
panda$core$MutableString* $tmp131 = *(&local0);
panda$core$Char8** $tmp132 = &$tmp131->data;
panda$core$Char8* $tmp133 = *$tmp132;
panda$core$Int64 $tmp134 = *(&local2);
int64_t $tmp135 = $tmp134.value;
panda$core$Char8 $tmp136 = $tmp133[$tmp135];
int64_t $tmp137 = $tmp130.value;
$tmp129[$tmp137] = $tmp136;
goto block6;
block6:;
panda$core$Int64 $tmp138 = *(&local2);
int64_t $tmp139 = $tmp113.value;
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139 - $tmp140;
panda$core$Int64 $tmp142 = (panda$core$Int64) {$tmp141};
panda$core$UInt64 $tmp143 = panda$core$Int64$convert$R$panda$core$UInt64($tmp142);
if ($tmp115) goto block10; else goto block11;
block10:;
uint64_t $tmp144 = $tmp143.value;
uint64_t $tmp145 = $tmp117.value;
bool $tmp146 = $tmp144 >= $tmp145;
panda$core$Bit $tmp147 = (panda$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block9; else goto block5;
block11:;
uint64_t $tmp149 = $tmp143.value;
uint64_t $tmp150 = $tmp117.value;
bool $tmp151 = $tmp149 > $tmp150;
panda$core$Bit $tmp152 = (panda$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block9; else goto block5;
block9:;
int64_t $tmp154 = $tmp138.value;
int64_t $tmp155 = $tmp116.value;
int64_t $tmp156 = $tmp154 + $tmp155;
panda$core$Int64 $tmp157 = (panda$core$Int64) {$tmp156};
*(&local2) = $tmp157;
goto block4;
block5:;
// line 381
panda$core$MutableString* $tmp158 = *(&local0);
panda$core$Int64* $tmp159 = &$tmp158->_length;
panda$core$Int64 $tmp160 = *$tmp159;
panda$core$Int64* $tmp161 = &param0->_length;
*$tmp161 = $tmp160;
// line 382
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp162 = &param0->owner;
panda$core$String* $tmp163 = *$tmp162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$String** $tmp164 = &param0->owner;
*$tmp164 = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp165 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return;

}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* param0) {

// line 390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;

}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8 local1;
panda$core$Bit local2;
// line 403
panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block2; else goto block3;
block2:;
// line 405
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block3:;
panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s170);
bool $tmp171 = $tmp169.value;
if ($tmp171) goto block4; else goto block5;
block4:;
// line 408
panda$core$MutableString* $tmp172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp172, &$s173);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$MutableString* $tmp174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
*(&local0) = $tmp172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($12:panda.core.MutableString)
// line 409
panda$collections$ListView* $tmp175 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param0);
ITable* $tmp176 = ((panda$collections$Iterable*) $tmp175)->$class->itable;
while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
panda$collections$Iterator* $tmp179 = $tmp177(((panda$collections$Iterable*) $tmp175));
goto block6;
block6:;
ITable* $tmp180 = $tmp179->$class->itable;
while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
panda$core$Bit $tmp183 = $tmp181($tmp179);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block8; else goto block7;
block7:;
ITable* $tmp185 = $tmp179->$class->itable;
while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[1];
panda$core$Object* $tmp188 = $tmp186($tmp179);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp188)->value;
// line 410
panda$core$Char8 $tmp189 = *(&local1);
panda$core$UInt8 $tmp190 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp191 = panda$core$Char8$init$panda$core$UInt8($tmp190);
panda$core$Bit $tmp192 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp189, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block10; else goto block11;
block10:;
// line 412
panda$core$MutableString* $tmp194 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp194, &$s195);
goto block9;
block11:;
panda$core$UInt8 $tmp196 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp197 = panda$core$Char8$init$panda$core$UInt8($tmp196);
panda$core$Bit $tmp198 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp189, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block12; else goto block13;
block12:;
// line 415
panda$core$MutableString* $tmp200 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp200, &$s201);
goto block9;
block13:;
panda$core$UInt8 $tmp202 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp203 = panda$core$Char8$init$panda$core$UInt8($tmp202);
panda$core$Bit $tmp204 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp189, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block15;
block14:;
// line 418
panda$core$MutableString* $tmp206 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp206, &$s207);
goto block9;
block15:;
panda$core$UInt8 $tmp208 = (panda$core$UInt8) {13};
panda$core$Char8 $tmp209 = panda$core$Char8$init$panda$core$UInt8($tmp208);
panda$core$Bit $tmp210 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp189, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block16; else goto block17;
block16:;
// line 421
panda$core$MutableString* $tmp212 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp212, &$s213);
goto block9;
block17:;
panda$core$UInt8 $tmp214 = (panda$core$UInt8) {9};
panda$core$Char8 $tmp215 = panda$core$Char8$init$panda$core$UInt8($tmp214);
panda$core$Bit $tmp216 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp189, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block18; else goto block19;
block18:;
// line 424
panda$core$MutableString* $tmp218 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp218, &$s219);
goto block9;
block19:;
// line 427
panda$core$Char8 $tmp220 = *(&local1);
panda$core$UInt8 $tmp221 = panda$core$Char8$convert$R$panda$core$UInt8($tmp220);
panda$core$UInt8 $tmp222 = (panda$core$UInt8) {32};
uint8_t $tmp223 = $tmp221.value;
uint8_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 >= $tmp224;
panda$core$Bit $tmp226 = (panda$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block22; else goto block23;
block22:;
panda$core$Char8 $tmp228 = *(&local1);
panda$core$UInt8 $tmp229 = panda$core$Char8$convert$R$panda$core$UInt8($tmp228);
panda$core$UInt8 $tmp230 = (panda$core$UInt8) {126};
uint8_t $tmp231 = $tmp229.value;
uint8_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 <= $tmp232;
panda$core$Bit $tmp234 = (panda$core$Bit) {$tmp233};
*(&local2) = $tmp234;
goto block24;
block23:;
*(&local2) = $tmp226;
goto block24;
block24:;
panda$core$Bit $tmp235 = *(&local2);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block20; else goto block25;
block20:;
// line 428
panda$core$MutableString* $tmp237 = *(&local0);
panda$core$Char8 $tmp238 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp237, $tmp238);
goto block21;
block25:;
// line 1
// line 432
panda$core$MutableString* $tmp239 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp239, &$s240);
goto block21;
block21:;
goto block9;
block9:;
panda$core$Panda$unref$panda$core$Object$Q($tmp188);
// unreffing REF($39:panda.collections.Iterator.T)
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($29:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($25:panda.collections.ListView<panda.core.Char8>)
// line 437
panda$core$MutableString* $tmp241 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp241, &$s242);
// line 438
panda$core$MutableString* $tmp243 = *(&local0);
panda$core$String* $tmp244 = panda$core$MutableString$finish$R$panda$core$String($tmp243);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing REF($139:panda.core.String)
panda$core$MutableString* $tmp245 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp244;
block5:;
// line 441
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit(false);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp248 = (panda$core$Int64) {441};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s249, $tmp248);
abort(); // unreachable
block26:;
goto block1;
block1:;
panda$core$Bit $tmp250 = panda$core$Bit$init$builtin_bit(false);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp252 = (panda$core$Int64) {402};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block28:;
abort(); // unreachable

}
void panda$core$String$cleanup(panda$core$String* param0) {

// line 449
panda$core$String** $tmp255 = &param0->owner;
panda$core$String* $tmp256 = *$tmp255;
panda$core$Bit $tmp257 = panda$core$Bit$init$builtin_bit($tmp256 == NULL);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 450
panda$core$Char8** $tmp259 = &param0->data;
panda$core$Char8* $tmp260 = *$tmp259;
pandaFree($tmp260);
goto block2;
block2:;
// line 448
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$String** $tmp261 = &param0->owner;
panda$core$String* $tmp262 = *$tmp261;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
return;

}
panda$collections$ListView* panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0) {

// line 458
panda$core$String$UTF8List* $tmp263 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
panda$core$String$UTF8List$init$panda$core$String($tmp263, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp263)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($1:panda.core.String.UTF8List)
return ((panda$collections$ListView*) $tmp263);

}
panda$collections$Iterator* panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* param0) {

// line 467
panda$core$String$UTF16Iterator* $tmp264 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
panda$core$String$UTF16Iterator$init$panda$core$String($tmp264, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp264)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($1:panda.core.String.UTF16Iterator)
return ((panda$collections$Iterator*) $tmp264);

}
panda$collections$Iterator* panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* param0) {

// line 475
panda$core$String$UTF32Iterator* $tmp265 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
panda$core$String$UTF32Iterator$init$panda$core$String($tmp265, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp265)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($1:panda.core.String.UTF32Iterator)
return ((panda$collections$Iterator*) $tmp265);

}
panda$core$Int64 panda$core$String$get_length$R$panda$core$Int64(panda$core$String* param0) {

// line 485
ITable* $tmp266 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
panda$collections$Iterator* $tmp269 = $tmp267(((panda$collections$Iterable*) param0));
ITable* $tmp270 = $tmp269->$class->itable;
while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[2];
panda$core$Int64 $tmp273 = $tmp271($tmp269);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($3:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp273;

}
panda$core$Int64 panda$core$String$get_byteLength$R$panda$core$Int64(panda$core$String* param0) {

// line 492
panda$core$Int64* $tmp274 = &param0->_length;
panda$core$Int64 $tmp275 = *$tmp274;
return $tmp275;

}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 496
panda$core$Int64* $tmp276 = &param0->_length;
panda$core$Int64 $tmp277 = *$tmp276;
panda$core$Int64* $tmp278 = &param1->_length;
panda$core$Int64 $tmp279 = *$tmp278;
int64_t $tmp280 = $tmp277.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 < $tmp281;
panda$core$Bit $tmp283 = (panda$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 497
panda$core$Bit $tmp285 = panda$core$Bit$init$builtin_bit(false);
return $tmp285;
block2:;
// line 499
panda$core$Int64 $tmp286 = (panda$core$Int64) {0};
panda$core$Int64* $tmp287 = &param1->_length;
panda$core$Int64 $tmp288 = *$tmp287;
panda$core$Bit $tmp289 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp290 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp286, $tmp288, $tmp289);
panda$core$Int64 $tmp291 = $tmp290.min;
*(&local0) = $tmp291;
panda$core$Int64 $tmp292 = $tmp290.max;
panda$core$Bit $tmp293 = $tmp290.inclusive;
bool $tmp294 = $tmp293.value;
panda$core$Int64 $tmp295 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp296 = panda$core$Int64$convert$R$panda$core$UInt64($tmp295);
if ($tmp294) goto block6; else goto block7;
block6:;
int64_t $tmp297 = $tmp291.value;
int64_t $tmp298 = $tmp292.value;
bool $tmp299 = $tmp297 <= $tmp298;
panda$core$Bit $tmp300 = (panda$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block4;
block7:;
int64_t $tmp302 = $tmp291.value;
int64_t $tmp303 = $tmp292.value;
bool $tmp304 = $tmp302 < $tmp303;
panda$core$Bit $tmp305 = (panda$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block3; else goto block4;
block3:;
// line 500
panda$core$Char8** $tmp307 = &param0->data;
panda$core$Char8* $tmp308 = *$tmp307;
panda$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp309.value;
panda$core$Char8 $tmp311 = $tmp308[$tmp310];
panda$core$Char8** $tmp312 = &param1->data;
panda$core$Char8* $tmp313 = *$tmp312;
panda$core$Int64 $tmp314 = *(&local0);
int64_t $tmp315 = $tmp314.value;
panda$core$Char8 $tmp316 = $tmp313[$tmp315];
panda$core$Bit $tmp317 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp311, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block8; else goto block9;
block8:;
// line 501
panda$core$Bit $tmp319 = panda$core$Bit$init$builtin_bit(false);
return $tmp319;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp320 = *(&local0);
int64_t $tmp321 = $tmp292.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 - $tmp322;
panda$core$Int64 $tmp324 = (panda$core$Int64) {$tmp323};
panda$core$UInt64 $tmp325 = panda$core$Int64$convert$R$panda$core$UInt64($tmp324);
if ($tmp294) goto block11; else goto block12;
block11:;
uint64_t $tmp326 = $tmp325.value;
uint64_t $tmp327 = $tmp296.value;
bool $tmp328 = $tmp326 >= $tmp327;
panda$core$Bit $tmp329 = (panda$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block10; else goto block4;
block12:;
uint64_t $tmp331 = $tmp325.value;
uint64_t $tmp332 = $tmp296.value;
bool $tmp333 = $tmp331 > $tmp332;
panda$core$Bit $tmp334 = (panda$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block10; else goto block4;
block10:;
int64_t $tmp336 = $tmp320.value;
int64_t $tmp337 = $tmp295.value;
int64_t $tmp338 = $tmp336 + $tmp337;
panda$core$Int64 $tmp339 = (panda$core$Int64) {$tmp338};
*(&local0) = $tmp339;
goto block3;
block4:;
// line 504
panda$core$Bit $tmp340 = panda$core$Bit$init$builtin_bit(true);
return $tmp340;

}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 508
panda$core$Int64* $tmp341 = &param0->_length;
panda$core$Int64 $tmp342 = *$tmp341;
panda$core$Int64* $tmp343 = &param1->_length;
panda$core$Int64 $tmp344 = *$tmp343;
int64_t $tmp345 = $tmp342.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 < $tmp346;
panda$core$Bit $tmp348 = (panda$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block1; else goto block2;
block1:;
// line 509
panda$core$Bit $tmp350 = panda$core$Bit$init$builtin_bit(false);
return $tmp350;
block2:;
// line 511
panda$core$Int64 $tmp351 = (panda$core$Int64) {0};
panda$core$Int64* $tmp352 = &param1->_length;
panda$core$Int64 $tmp353 = *$tmp352;
panda$core$Bit $tmp354 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp355 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp351, $tmp353, $tmp354);
panda$core$Int64 $tmp356 = $tmp355.min;
*(&local0) = $tmp356;
panda$core$Int64 $tmp357 = $tmp355.max;
panda$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp361 = panda$core$Int64$convert$R$panda$core$UInt64($tmp360);
if ($tmp359) goto block6; else goto block7;
block6:;
int64_t $tmp362 = $tmp356.value;
int64_t $tmp363 = $tmp357.value;
bool $tmp364 = $tmp362 <= $tmp363;
panda$core$Bit $tmp365 = (panda$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block3; else goto block4;
block7:;
int64_t $tmp367 = $tmp356.value;
int64_t $tmp368 = $tmp357.value;
bool $tmp369 = $tmp367 < $tmp368;
panda$core$Bit $tmp370 = (panda$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block3; else goto block4;
block3:;
// line 512
panda$core$Char8** $tmp372 = &param0->data;
panda$core$Char8* $tmp373 = *$tmp372;
panda$core$Int64* $tmp374 = &param0->_length;
panda$core$Int64 $tmp375 = *$tmp374;
panda$core$Int64* $tmp376 = &param1->_length;
panda$core$Int64 $tmp377 = *$tmp376;
int64_t $tmp378 = $tmp375.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
panda$core$Int64 $tmp381 = (panda$core$Int64) {$tmp380};
panda$core$Int64 $tmp382 = *(&local0);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 + $tmp384;
panda$core$Int64 $tmp386 = (panda$core$Int64) {$tmp385};
int64_t $tmp387 = $tmp386.value;
panda$core$Char8 $tmp388 = $tmp373[$tmp387];
panda$core$Char8** $tmp389 = &param1->data;
panda$core$Char8* $tmp390 = *$tmp389;
panda$core$Int64 $tmp391 = *(&local0);
int64_t $tmp392 = $tmp391.value;
panda$core$Char8 $tmp393 = $tmp390[$tmp392];
panda$core$Bit $tmp394 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp388, $tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block8; else goto block9;
block8:;
// line 513
panda$core$Bit $tmp396 = panda$core$Bit$init$builtin_bit(false);
return $tmp396;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp397 = *(&local0);
int64_t $tmp398 = $tmp357.value;
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398 - $tmp399;
panda$core$Int64 $tmp401 = (panda$core$Int64) {$tmp400};
panda$core$UInt64 $tmp402 = panda$core$Int64$convert$R$panda$core$UInt64($tmp401);
if ($tmp359) goto block11; else goto block12;
block11:;
uint64_t $tmp403 = $tmp402.value;
uint64_t $tmp404 = $tmp361.value;
bool $tmp405 = $tmp403 >= $tmp404;
panda$core$Bit $tmp406 = (panda$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block10; else goto block4;
block12:;
uint64_t $tmp408 = $tmp402.value;
uint64_t $tmp409 = $tmp361.value;
bool $tmp410 = $tmp408 > $tmp409;
panda$core$Bit $tmp411 = (panda$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block10; else goto block4;
block10:;
int64_t $tmp413 = $tmp397.value;
int64_t $tmp414 = $tmp360.value;
int64_t $tmp415 = $tmp413 + $tmp414;
panda$core$Int64 $tmp416 = (panda$core$Int64) {$tmp415};
*(&local0) = $tmp416;
goto block3;
block4:;
// line 516
panda$core$Bit $tmp417 = panda$core$Bit$init$builtin_bit(true);
return $tmp417;

}
panda$core$String* panda$core$String$get_trimmed$R$panda$core$String(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Bit local1;
panda$core$Int64 local2;
panda$core$Bit local3;
// line 525
panda$core$Int64* $tmp418 = &param0->_length;
panda$core$Int64 $tmp419 = *$tmp418;
panda$core$Int64 $tmp420 = (panda$core$Int64) {0};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block1:;
// line 526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 528
panda$core$Int64 $tmp423 = (panda$core$Int64) {0};
*(&local0) = $tmp423;
// line 529
goto block3;
block3:;
panda$core$Int64 $tmp424 = *(&local0);
panda$core$Int64* $tmp425 = &param0->_length;
panda$core$Int64 $tmp426 = *$tmp425;
int64_t $tmp427 = $tmp424.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 < $tmp428;
panda$core$Bit $tmp430 = (panda$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block6; else goto block7;
block6:;
panda$core$Char8** $tmp432 = &param0->data;
panda$core$Char8* $tmp433 = *$tmp432;
panda$core$Int64 $tmp434 = *(&local0);
int64_t $tmp435 = $tmp434.value;
panda$core$Char8 $tmp436 = $tmp433[$tmp435];
panda$core$Bit $tmp437 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp436);
*(&local1) = $tmp437;
goto block8;
block7:;
*(&local1) = $tmp430;
goto block8;
block8:;
panda$core$Bit $tmp438 = *(&local1);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block4; else goto block5;
block4:;
// line 530
panda$core$Int64 $tmp440 = *(&local0);
panda$core$Int64 $tmp441 = (panda$core$Int64) {1};
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442 + $tmp443;
panda$core$Int64 $tmp445 = (panda$core$Int64) {$tmp444};
*(&local0) = $tmp445;
goto block3;
block5:;
// line 533
panda$core$Int64* $tmp446 = &param0->_length;
panda$core$Int64 $tmp447 = *$tmp446;
panda$core$Int64 $tmp448 = (panda$core$Int64) {1};
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449 - $tmp450;
panda$core$Int64 $tmp452 = (panda$core$Int64) {$tmp451};
*(&local2) = $tmp452;
// line 534
goto block9;
block9:;
panda$core$Int64 $tmp453 = *(&local2);
panda$core$Int64 $tmp454 = *(&local0);
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 >= $tmp456;
panda$core$Bit $tmp458 = (panda$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block12; else goto block13;
block12:;
panda$core$Char8** $tmp460 = &param0->data;
panda$core$Char8* $tmp461 = *$tmp460;
panda$core$Int64 $tmp462 = *(&local2);
int64_t $tmp463 = $tmp462.value;
panda$core$Char8 $tmp464 = $tmp461[$tmp463];
panda$core$Bit $tmp465 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp464);
*(&local3) = $tmp465;
goto block14;
block13:;
*(&local3) = $tmp458;
goto block14;
block14:;
panda$core$Bit $tmp466 = *(&local3);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block10; else goto block11;
block10:;
// line 535
panda$core$Int64 $tmp468 = *(&local2);
panda$core$Int64 $tmp469 = (panda$core$Int64) {1};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
panda$core$Int64 $tmp473 = (panda$core$Int64) {$tmp472};
*(&local2) = $tmp473;
goto block9;
block11:;
// line 538
panda$core$Int64 $tmp474 = *(&local0);
panda$core$String$Index $tmp475 = panda$core$String$Index$init$panda$core$Int64($tmp474);
panda$core$Int64 $tmp476 = *(&local2);
panda$core$String$Index $tmp477 = panda$core$String$Index$init$panda$core$Int64($tmp476);
panda$core$Bit $tmp478 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$String$Index$GT $tmp479 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp475, $tmp477, $tmp478);
panda$core$String* $tmp480 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp479);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($95:panda.core.String)
return $tmp480;

}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$Char8* local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 545
panda$core$Int64* $tmp481 = &param0->_length;
panda$core$Int64 $tmp482 = *$tmp481;
panda$core$Int64* $tmp483 = &param1->_length;
panda$core$Int64 $tmp484 = *$tmp483;
int64_t $tmp485 = $tmp482.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 + $tmp486;
panda$core$Int64 $tmp488 = (panda$core$Int64) {$tmp487};
int64_t $tmp489 = $tmp488.value;
panda$core$Char8* $tmp490 = ((panda$core$Char8*) pandaZAlloc($tmp489 * 1));
*(&local0) = $tmp490;
// line 546
panda$core$Int64 $tmp491 = (panda$core$Int64) {0};
panda$core$Int64* $tmp492 = &param0->_length;
panda$core$Int64 $tmp493 = *$tmp492;
panda$core$Bit $tmp494 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp495 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp491, $tmp493, $tmp494);
panda$core$Int64 $tmp496 = $tmp495.min;
*(&local1) = $tmp496;
panda$core$Int64 $tmp497 = $tmp495.max;
panda$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
panda$core$Int64 $tmp500 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp501 = panda$core$Int64$convert$R$panda$core$UInt64($tmp500);
if ($tmp499) goto block4; else goto block5;
block4:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
panda$core$Bit $tmp505 = (panda$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block5:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
panda$core$Bit $tmp510 = (panda$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 547
panda$core$Char8* $tmp512 = *(&local0);
panda$core$Int64 $tmp513 = *(&local1);
panda$core$Char8** $tmp514 = &param0->data;
panda$core$Char8* $tmp515 = *$tmp514;
panda$core$Int64 $tmp516 = *(&local1);
int64_t $tmp517 = $tmp516.value;
panda$core$Char8 $tmp518 = $tmp515[$tmp517];
int64_t $tmp519 = $tmp513.value;
$tmp512[$tmp519] = $tmp518;
goto block3;
block3:;
panda$core$Int64 $tmp520 = *(&local1);
int64_t $tmp521 = $tmp497.value;
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521 - $tmp522;
panda$core$Int64 $tmp524 = (panda$core$Int64) {$tmp523};
panda$core$UInt64 $tmp525 = panda$core$Int64$convert$R$panda$core$UInt64($tmp524);
if ($tmp499) goto block7; else goto block8;
block7:;
uint64_t $tmp526 = $tmp525.value;
uint64_t $tmp527 = $tmp501.value;
bool $tmp528 = $tmp526 >= $tmp527;
panda$core$Bit $tmp529 = (panda$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block6; else goto block2;
block8:;
uint64_t $tmp531 = $tmp525.value;
uint64_t $tmp532 = $tmp501.value;
bool $tmp533 = $tmp531 > $tmp532;
panda$core$Bit $tmp534 = (panda$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block6; else goto block2;
block6:;
int64_t $tmp536 = $tmp520.value;
int64_t $tmp537 = $tmp500.value;
int64_t $tmp538 = $tmp536 + $tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {$tmp538};
*(&local1) = $tmp539;
goto block1;
block2:;
// line 549
panda$core$Int64 $tmp540 = (panda$core$Int64) {0};
panda$core$Int64* $tmp541 = &param1->_length;
panda$core$Int64 $tmp542 = *$tmp541;
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp544 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp540, $tmp542, $tmp543);
panda$core$Int64 $tmp545 = $tmp544.min;
*(&local2) = $tmp545;
panda$core$Int64 $tmp546 = $tmp544.max;
panda$core$Bit $tmp547 = $tmp544.inclusive;
bool $tmp548 = $tmp547.value;
panda$core$Int64 $tmp549 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp550 = panda$core$Int64$convert$R$panda$core$UInt64($tmp549);
if ($tmp548) goto block12; else goto block13;
block12:;
int64_t $tmp551 = $tmp545.value;
int64_t $tmp552 = $tmp546.value;
bool $tmp553 = $tmp551 <= $tmp552;
panda$core$Bit $tmp554 = (panda$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block9; else goto block10;
block13:;
int64_t $tmp556 = $tmp545.value;
int64_t $tmp557 = $tmp546.value;
bool $tmp558 = $tmp556 < $tmp557;
panda$core$Bit $tmp559 = (panda$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block9; else goto block10;
block9:;
// line 550
panda$core$Char8* $tmp561 = *(&local0);
panda$core$Int64* $tmp562 = &param0->_length;
panda$core$Int64 $tmp563 = *$tmp562;
panda$core$Int64 $tmp564 = *(&local2);
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 + $tmp566;
panda$core$Int64 $tmp568 = (panda$core$Int64) {$tmp567};
panda$core$Char8** $tmp569 = &param1->data;
panda$core$Char8* $tmp570 = *$tmp569;
panda$core$Int64 $tmp571 = *(&local2);
int64_t $tmp572 = $tmp571.value;
panda$core$Char8 $tmp573 = $tmp570[$tmp572];
int64_t $tmp574 = $tmp568.value;
$tmp561[$tmp574] = $tmp573;
goto block11;
block11:;
panda$core$Int64 $tmp575 = *(&local2);
int64_t $tmp576 = $tmp546.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
panda$core$Int64 $tmp579 = (panda$core$Int64) {$tmp578};
panda$core$UInt64 $tmp580 = panda$core$Int64$convert$R$panda$core$UInt64($tmp579);
if ($tmp548) goto block15; else goto block16;
block15:;
uint64_t $tmp581 = $tmp580.value;
uint64_t $tmp582 = $tmp550.value;
bool $tmp583 = $tmp581 >= $tmp582;
panda$core$Bit $tmp584 = (panda$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block14; else goto block10;
block16:;
uint64_t $tmp586 = $tmp580.value;
uint64_t $tmp587 = $tmp550.value;
bool $tmp588 = $tmp586 > $tmp587;
panda$core$Bit $tmp589 = (panda$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block14; else goto block10;
block14:;
int64_t $tmp591 = $tmp575.value;
int64_t $tmp592 = $tmp549.value;
int64_t $tmp593 = $tmp591 + $tmp592;
panda$core$Int64 $tmp594 = (panda$core$Int64) {$tmp593};
*(&local2) = $tmp594;
goto block9;
block10:;
// line 552
panda$core$String* $tmp595 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp596 = *(&local0);
panda$core$Int64* $tmp597 = &param0->_length;
panda$core$Int64 $tmp598 = *$tmp597;
panda$core$Int64* $tmp599 = &param1->_length;
panda$core$Int64 $tmp600 = *$tmp599;
int64_t $tmp601 = $tmp598.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 + $tmp602;
panda$core$Int64 $tmp604 = (panda$core$Int64) {$tmp603};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp595, $tmp596, $tmp604);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($143:panda.core.String)
return $tmp595;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* param0, panda$core$Object* param1) {

// line 560
$fn606 $tmp605 = ($fn606) param1->$class->vtable[0];
panda$core$String* $tmp607 = $tmp605(param1);
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp607);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($2:panda.core.String)
return $tmp608;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp609 = (panda$core$Int64) {0};
int64_t $tmp610 = param1.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 >= $tmp611;
panda$core$Bit $tmp613 = (panda$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp615 = (panda$core$Int64) {567};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s616, $tmp615, &$s617);
abort(); // unreachable
block1:;
// line 568
panda$core$MutableString* $tmp618 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp618);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$MutableString* $tmp619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
*(&local0) = $tmp618;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($11:panda.core.MutableString)
// line 569
panda$core$Int64 $tmp620 = (panda$core$Int64) {0};
panda$core$Bit $tmp621 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp622 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp620, param1, $tmp621);
panda$core$Int64 $tmp623 = $tmp622.min;
*(&local1) = $tmp623;
panda$core$Int64 $tmp624 = $tmp622.max;
panda$core$Bit $tmp625 = $tmp622.inclusive;
bool $tmp626 = $tmp625.value;
panda$core$Int64 $tmp627 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp628 = panda$core$Int64$convert$R$panda$core$UInt64($tmp627);
if ($tmp626) goto block6; else goto block7;
block6:;
int64_t $tmp629 = $tmp623.value;
int64_t $tmp630 = $tmp624.value;
bool $tmp631 = $tmp629 <= $tmp630;
panda$core$Bit $tmp632 = (panda$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block4;
block7:;
int64_t $tmp634 = $tmp623.value;
int64_t $tmp635 = $tmp624.value;
bool $tmp636 = $tmp634 < $tmp635;
panda$core$Bit $tmp637 = (panda$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block3; else goto block4;
block3:;
// line 570
panda$core$MutableString* $tmp639 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp639, param0);
goto block5;
block5:;
panda$core$Int64 $tmp640 = *(&local1);
int64_t $tmp641 = $tmp624.value;
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641 - $tmp642;
panda$core$Int64 $tmp644 = (panda$core$Int64) {$tmp643};
panda$core$UInt64 $tmp645 = panda$core$Int64$convert$R$panda$core$UInt64($tmp644);
if ($tmp626) goto block9; else goto block10;
block9:;
uint64_t $tmp646 = $tmp645.value;
uint64_t $tmp647 = $tmp628.value;
bool $tmp648 = $tmp646 >= $tmp647;
panda$core$Bit $tmp649 = (panda$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block8; else goto block4;
block10:;
uint64_t $tmp651 = $tmp645.value;
uint64_t $tmp652 = $tmp628.value;
bool $tmp653 = $tmp651 > $tmp652;
panda$core$Bit $tmp654 = (panda$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block8; else goto block4;
block8:;
int64_t $tmp656 = $tmp640.value;
int64_t $tmp657 = $tmp627.value;
int64_t $tmp658 = $tmp656 + $tmp657;
panda$core$Int64 $tmp659 = (panda$core$Int64) {$tmp658};
*(&local1) = $tmp659;
goto block3;
block4:;
// line 572
panda$core$MutableString* $tmp660 = *(&local0);
panda$core$String* $tmp661 = panda$core$MutableString$finish$R$panda$core$String($tmp660);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp661;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp663 = (panda$core$Int64) {0};
int64_t $tmp664 = param0.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 >= $tmp665;
panda$core$Bit $tmp667 = (panda$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp669 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s670, $tmp669, &$s671);
abort(); // unreachable
block1:;
// line 581
panda$core$MutableString* $tmp672 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp672);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
panda$core$MutableString* $tmp673 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
*(&local0) = $tmp672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($11:panda.core.MutableString)
// line 582
panda$core$Int64 $tmp674 = (panda$core$Int64) {0};
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp676 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp674, param0, $tmp675);
panda$core$Int64 $tmp677 = $tmp676.min;
*(&local1) = $tmp677;
panda$core$Int64 $tmp678 = $tmp676.max;
panda$core$Bit $tmp679 = $tmp676.inclusive;
bool $tmp680 = $tmp679.value;
panda$core$Int64 $tmp681 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp681);
if ($tmp680) goto block6; else goto block7;
block6:;
int64_t $tmp683 = $tmp677.value;
int64_t $tmp684 = $tmp678.value;
bool $tmp685 = $tmp683 <= $tmp684;
panda$core$Bit $tmp686 = (panda$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block7:;
int64_t $tmp688 = $tmp677.value;
int64_t $tmp689 = $tmp678.value;
bool $tmp690 = $tmp688 < $tmp689;
panda$core$Bit $tmp691 = (panda$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block3; else goto block4;
block3:;
// line 583
panda$core$MutableString* $tmp693 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp693, param1);
goto block5;
block5:;
panda$core$Int64 $tmp694 = *(&local1);
int64_t $tmp695 = $tmp678.value;
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695 - $tmp696;
panda$core$Int64 $tmp698 = (panda$core$Int64) {$tmp697};
panda$core$UInt64 $tmp699 = panda$core$Int64$convert$R$panda$core$UInt64($tmp698);
if ($tmp680) goto block9; else goto block10;
block9:;
uint64_t $tmp700 = $tmp699.value;
uint64_t $tmp701 = $tmp682.value;
bool $tmp702 = $tmp700 >= $tmp701;
panda$core$Bit $tmp703 = (panda$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block8; else goto block4;
block10:;
uint64_t $tmp705 = $tmp699.value;
uint64_t $tmp706 = $tmp682.value;
bool $tmp707 = $tmp705 > $tmp706;
panda$core$Bit $tmp708 = (panda$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block8; else goto block4;
block8:;
int64_t $tmp710 = $tmp694.value;
int64_t $tmp711 = $tmp681.value;
int64_t $tmp712 = $tmp710 + $tmp711;
panda$core$Int64 $tmp713 = (panda$core$Int64) {$tmp712};
*(&local1) = $tmp713;
goto block3;
block4:;
// line 585
panda$core$MutableString* $tmp714 = *(&local0);
panda$core$String* $tmp715 = panda$core$MutableString$finish$R$panda$core$String($tmp714);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp716 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp715;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* param0, panda$core$String* param1) {

// line 594
$fn718 $tmp717 = ($fn718) param0->$class->vtable[0];
panda$core$String* $tmp719 = $tmp717(param0);
panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($2:panda.core.String)
return $tmp720;

}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 607
panda$core$Int64* $tmp721 = &param0->_length;
panda$core$Int64 $tmp722 = *$tmp721;
panda$core$Int64* $tmp723 = &param1->_length;
panda$core$Int64 $tmp724 = *$tmp723;
int64_t $tmp725 = $tmp722.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 != $tmp726;
panda$core$Bit $tmp728 = (panda$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block2;
block1:;
// line 608
panda$core$Bit $tmp730 = panda$core$Bit$init$builtin_bit(false);
return $tmp730;
block2:;
// line 610
panda$core$Int64 $tmp731 = (panda$core$Int64) {0};
panda$core$Int64* $tmp732 = &param0->_length;
panda$core$Int64 $tmp733 = *$tmp732;
panda$core$Bit $tmp734 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp735 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp731, $tmp733, $tmp734);
panda$core$Int64 $tmp736 = $tmp735.min;
*(&local0) = $tmp736;
panda$core$Int64 $tmp737 = $tmp735.max;
panda$core$Bit $tmp738 = $tmp735.inclusive;
bool $tmp739 = $tmp738.value;
panda$core$Int64 $tmp740 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp741 = panda$core$Int64$convert$R$panda$core$UInt64($tmp740);
if ($tmp739) goto block6; else goto block7;
block6:;
int64_t $tmp742 = $tmp736.value;
int64_t $tmp743 = $tmp737.value;
bool $tmp744 = $tmp742 <= $tmp743;
panda$core$Bit $tmp745 = (panda$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block3; else goto block4;
block7:;
int64_t $tmp747 = $tmp736.value;
int64_t $tmp748 = $tmp737.value;
bool $tmp749 = $tmp747 < $tmp748;
panda$core$Bit $tmp750 = (panda$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block3; else goto block4;
block3:;
// line 611
panda$core$Char8** $tmp752 = &param0->data;
panda$core$Char8* $tmp753 = *$tmp752;
panda$core$Int64 $tmp754 = *(&local0);
int64_t $tmp755 = $tmp754.value;
panda$core$Char8 $tmp756 = $tmp753[$tmp755];
panda$core$Char8** $tmp757 = &param1->data;
panda$core$Char8* $tmp758 = *$tmp757;
panda$core$Int64 $tmp759 = *(&local0);
int64_t $tmp760 = $tmp759.value;
panda$core$Char8 $tmp761 = $tmp758[$tmp760];
panda$core$Bit $tmp762 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp756, $tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block8; else goto block9;
block8:;
// line 612
panda$core$Bit $tmp764 = panda$core$Bit$init$builtin_bit(false);
return $tmp764;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp765 = *(&local0);
int64_t $tmp766 = $tmp737.value;
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766 - $tmp767;
panda$core$Int64 $tmp769 = (panda$core$Int64) {$tmp768};
panda$core$UInt64 $tmp770 = panda$core$Int64$convert$R$panda$core$UInt64($tmp769);
if ($tmp739) goto block11; else goto block12;
block11:;
uint64_t $tmp771 = $tmp770.value;
uint64_t $tmp772 = $tmp741.value;
bool $tmp773 = $tmp771 >= $tmp772;
panda$core$Bit $tmp774 = (panda$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block10; else goto block4;
block12:;
uint64_t $tmp776 = $tmp770.value;
uint64_t $tmp777 = $tmp741.value;
bool $tmp778 = $tmp776 > $tmp777;
panda$core$Bit $tmp779 = (panda$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block10; else goto block4;
block10:;
int64_t $tmp781 = $tmp765.value;
int64_t $tmp782 = $tmp740.value;
int64_t $tmp783 = $tmp781 + $tmp782;
panda$core$Int64 $tmp784 = (panda$core$Int64) {$tmp783};
*(&local0) = $tmp784;
goto block3;
block4:;
// line 615
panda$core$Bit $tmp785 = panda$core$Bit$init$builtin_bit(true);
return $tmp785;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 622
panda$core$Int64 $tmp786 = param1.value;
*(&local0) = $tmp786;
// line 623
panda$core$Char8** $tmp787 = &param0->data;
panda$core$Char8* $tmp788 = *$tmp787;
panda$core$Int64 $tmp789 = *(&local0);
int64_t $tmp790 = $tmp789.value;
panda$core$Char8 $tmp791 = $tmp788[$tmp790];
*(&local1) = $tmp791;
// line 624
panda$core$Char8 $tmp792 = *(&local1);
panda$core$Int32 $tmp793 = panda$core$Char8$convert$R$panda$core$Int32($tmp792);
*(&local2) = $tmp793;
// line 625
panda$core$Char8 $tmp794 = *(&local1);
uint8_t $tmp795 = $tmp794.value;
int64_t $tmp796 = ((int64_t) $tmp795) & 255;
bool $tmp797 = $tmp796 < 192;
panda$core$Bit $tmp798 = panda$core$Bit$init$builtin_bit($tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block1; else goto block2;
block1:;
// line 626
panda$core$Int32 $tmp800 = *(&local2);
panda$core$Char32 $tmp801 = panda$core$Char32$init$panda$core$Int32($tmp800);
return $tmp801;
block2:;
// line 628
panda$core$Char8 $tmp802 = *(&local1);
uint8_t $tmp803 = $tmp802.value;
int64_t $tmp804 = ((int64_t) $tmp803) & 255;
bool $tmp805 = $tmp804 < 224;
panda$core$Bit $tmp806 = panda$core$Bit$init$builtin_bit($tmp805);
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block3; else goto block4;
block3:;
// line 629
panda$core$Int64 $tmp808 = *(&local0);
panda$core$Int64 $tmp809 = (panda$core$Int64) {1};
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810 + $tmp811;
panda$core$Int64 $tmp813 = (panda$core$Int64) {$tmp812};
panda$core$Int64* $tmp814 = &param0->_length;
panda$core$Int64 $tmp815 = *$tmp814;
int64_t $tmp816 = $tmp813.value;
int64_t $tmp817 = $tmp815.value;
bool $tmp818 = $tmp816 < $tmp817;
panda$core$Bit $tmp819 = (panda$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp821 = (panda$core$Int64) {629};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block5:;
// line 630
panda$core$Int32 $tmp823 = *(&local2);
panda$core$Int32 $tmp824 = (panda$core$Int32) {31};
panda$core$Int32 $tmp825 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp823, $tmp824);
panda$core$Int32 $tmp826 = (panda$core$Int32) {6};
panda$core$Int32 $tmp827 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp825, $tmp826);
panda$core$Char8** $tmp828 = &param0->data;
panda$core$Char8* $tmp829 = *$tmp828;
panda$core$Int64 $tmp830 = *(&local0);
panda$core$Int64 $tmp831 = (panda$core$Int64) {1};
int64_t $tmp832 = $tmp830.value;
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832 + $tmp833;
panda$core$Int64 $tmp835 = (panda$core$Int64) {$tmp834};
int64_t $tmp836 = $tmp835.value;
panda$core$Char8 $tmp837 = $tmp829[$tmp836];
panda$core$Int32 $tmp838 = panda$core$Char8$convert$R$panda$core$Int32($tmp837);
panda$core$Int32 $tmp839 = (panda$core$Int32) {63};
panda$core$Int32 $tmp840 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp838, $tmp839);
int32_t $tmp841 = $tmp827.value;
int32_t $tmp842 = $tmp840.value;
int32_t $tmp843 = $tmp841 + $tmp842;
panda$core$Int32 $tmp844 = (panda$core$Int32) {$tmp843};
*(&local2) = $tmp844;
// line 631
panda$core$Int32 $tmp845 = *(&local2);
panda$core$Char32 $tmp846 = panda$core$Char32$init$panda$core$Int32($tmp845);
return $tmp846;
block4:;
// line 633
panda$core$Char8 $tmp847 = *(&local1);
uint8_t $tmp848 = $tmp847.value;
int64_t $tmp849 = ((int64_t) $tmp848) & 255;
bool $tmp850 = $tmp849 < 240;
panda$core$Bit $tmp851 = panda$core$Bit$init$builtin_bit($tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block7; else goto block8;
block7:;
// line 634
panda$core$Int64 $tmp853 = *(&local0);
panda$core$Int64 $tmp854 = (panda$core$Int64) {2};
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855 + $tmp856;
panda$core$Int64 $tmp858 = (panda$core$Int64) {$tmp857};
panda$core$Int64* $tmp859 = &param0->_length;
panda$core$Int64 $tmp860 = *$tmp859;
int64_t $tmp861 = $tmp858.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 < $tmp862;
panda$core$Bit $tmp864 = (panda$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp866 = (panda$core$Int64) {634};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s867, $tmp866);
abort(); // unreachable
block9:;
// line 635
panda$core$Int32 $tmp868 = *(&local2);
panda$core$Int32 $tmp869 = (panda$core$Int32) {15};
panda$core$Int32 $tmp870 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp868, $tmp869);
panda$core$Int32 $tmp871 = (panda$core$Int32) {12};
panda$core$Int32 $tmp872 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp870, $tmp871);
panda$core$Char8** $tmp873 = &param0->data;
panda$core$Char8* $tmp874 = *$tmp873;
panda$core$Int64 $tmp875 = *(&local0);
panda$core$Int64 $tmp876 = (panda$core$Int64) {1};
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876.value;
int64_t $tmp879 = $tmp877 + $tmp878;
panda$core$Int64 $tmp880 = (panda$core$Int64) {$tmp879};
int64_t $tmp881 = $tmp880.value;
panda$core$Char8 $tmp882 = $tmp874[$tmp881];
panda$core$Int32 $tmp883 = panda$core$Char8$convert$R$panda$core$Int32($tmp882);
panda$core$Int32 $tmp884 = (panda$core$Int32) {63};
panda$core$Int32 $tmp885 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp883, $tmp884);
panda$core$Int32 $tmp886 = (panda$core$Int32) {6};
panda$core$Int32 $tmp887 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp885, $tmp886);
int32_t $tmp888 = $tmp872.value;
int32_t $tmp889 = $tmp887.value;
int32_t $tmp890 = $tmp888 + $tmp889;
panda$core$Int32 $tmp891 = (panda$core$Int32) {$tmp890};
panda$core$Char8** $tmp892 = &param0->data;
panda$core$Char8* $tmp893 = *$tmp892;
panda$core$Int64 $tmp894 = *(&local0);
panda$core$Int64 $tmp895 = (panda$core$Int64) {2};
int64_t $tmp896 = $tmp894.value;
int64_t $tmp897 = $tmp895.value;
int64_t $tmp898 = $tmp896 + $tmp897;
panda$core$Int64 $tmp899 = (panda$core$Int64) {$tmp898};
int64_t $tmp900 = $tmp899.value;
panda$core$Char8 $tmp901 = $tmp893[$tmp900];
panda$core$Int32 $tmp902 = panda$core$Char8$convert$R$panda$core$Int32($tmp901);
panda$core$Int32 $tmp903 = (panda$core$Int32) {63};
panda$core$Int32 $tmp904 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp902, $tmp903);
int32_t $tmp905 = $tmp891.value;
int32_t $tmp906 = $tmp904.value;
int32_t $tmp907 = $tmp905 + $tmp906;
panda$core$Int32 $tmp908 = (panda$core$Int32) {$tmp907};
*(&local2) = $tmp908;
// line 637
panda$core$Int32 $tmp909 = *(&local2);
panda$core$Char32 $tmp910 = panda$core$Char32$init$panda$core$Int32($tmp909);
return $tmp910;
block8:;
// line 639
panda$core$Int64 $tmp911 = *(&local0);
panda$core$Int64 $tmp912 = (panda$core$Int64) {3};
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913 + $tmp914;
panda$core$Int64 $tmp916 = (panda$core$Int64) {$tmp915};
panda$core$Int64* $tmp917 = &param0->_length;
panda$core$Int64 $tmp918 = *$tmp917;
int64_t $tmp919 = $tmp916.value;
int64_t $tmp920 = $tmp918.value;
bool $tmp921 = $tmp919 < $tmp920;
panda$core$Bit $tmp922 = (panda$core$Bit) {$tmp921};
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp924 = (panda$core$Int64) {639};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s925, $tmp924);
abort(); // unreachable
block11:;
// line 640
panda$core$Int32 $tmp926 = *(&local2);
panda$core$Int32 $tmp927 = (panda$core$Int32) {7};
panda$core$Int32 $tmp928 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp926, $tmp927);
panda$core$Int32 $tmp929 = (panda$core$Int32) {18};
panda$core$Int32 $tmp930 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp928, $tmp929);
panda$core$Char8** $tmp931 = &param0->data;
panda$core$Char8* $tmp932 = *$tmp931;
panda$core$Int64 $tmp933 = *(&local0);
panda$core$Int64 $tmp934 = (panda$core$Int64) {1};
int64_t $tmp935 = $tmp933.value;
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935 + $tmp936;
panda$core$Int64 $tmp938 = (panda$core$Int64) {$tmp937};
int64_t $tmp939 = $tmp938.value;
panda$core$Char8 $tmp940 = $tmp932[$tmp939];
panda$core$Int32 $tmp941 = panda$core$Char8$convert$R$panda$core$Int32($tmp940);
panda$core$Int32 $tmp942 = (panda$core$Int32) {63};
panda$core$Int32 $tmp943 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp941, $tmp942);
panda$core$Int32 $tmp944 = (panda$core$Int32) {12};
panda$core$Int32 $tmp945 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp943, $tmp944);
int32_t $tmp946 = $tmp930.value;
int32_t $tmp947 = $tmp945.value;
int32_t $tmp948 = $tmp946 + $tmp947;
panda$core$Int32 $tmp949 = (panda$core$Int32) {$tmp948};
panda$core$Char8** $tmp950 = &param0->data;
panda$core$Char8* $tmp951 = *$tmp950;
panda$core$Int64 $tmp952 = *(&local0);
panda$core$Int64 $tmp953 = (panda$core$Int64) {2};
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953.value;
int64_t $tmp956 = $tmp954 + $tmp955;
panda$core$Int64 $tmp957 = (panda$core$Int64) {$tmp956};
int64_t $tmp958 = $tmp957.value;
panda$core$Char8 $tmp959 = $tmp951[$tmp958];
panda$core$Int32 $tmp960 = panda$core$Char8$convert$R$panda$core$Int32($tmp959);
panda$core$Int32 $tmp961 = (panda$core$Int32) {63};
panda$core$Int32 $tmp962 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp960, $tmp961);
panda$core$Int32 $tmp963 = (panda$core$Int32) {6};
panda$core$Int32 $tmp964 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp962, $tmp963);
int32_t $tmp965 = $tmp949.value;
int32_t $tmp966 = $tmp964.value;
int32_t $tmp967 = $tmp965 + $tmp966;
panda$core$Int32 $tmp968 = (panda$core$Int32) {$tmp967};
panda$core$Char8** $tmp969 = &param0->data;
panda$core$Char8* $tmp970 = *$tmp969;
panda$core$Int64 $tmp971 = *(&local0);
panda$core$Int64 $tmp972 = (panda$core$Int64) {3};
int64_t $tmp973 = $tmp971.value;
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973 + $tmp974;
panda$core$Int64 $tmp976 = (panda$core$Int64) {$tmp975};
int64_t $tmp977 = $tmp976.value;
panda$core$Char8 $tmp978 = $tmp970[$tmp977];
panda$core$Int32 $tmp979 = panda$core$Char8$convert$R$panda$core$Int32($tmp978);
panda$core$Int32 $tmp980 = (panda$core$Int32) {63};
panda$core$Int32 $tmp981 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp979, $tmp980);
int32_t $tmp982 = $tmp968.value;
int32_t $tmp983 = $tmp981.value;
int32_t $tmp984 = $tmp982 + $tmp983;
panda$core$Int32 $tmp985 = (panda$core$Int32) {$tmp984};
*(&local2) = $tmp985;
// line 643
panda$core$Int32 $tmp986 = *(&local2);
panda$core$Char32 $tmp987 = panda$core$Char32$init$panda$core$Int32($tmp986);
return $tmp987;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* param0, panda$core$Int64 param1) {

// line 652
panda$core$String$Index $tmp988 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp989 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp988, param1);
panda$core$Char32 $tmp990 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp989);
return $tmp990;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
// line 665
panda$core$String$Index $tmp991 = param1.max;
panda$core$Int64 $tmp992 = $tmp991.value;
panda$core$String$Index $tmp993 = param1.min;
panda$core$Int64 $tmp994 = $tmp993.value;
int64_t $tmp995 = $tmp992.value;
int64_t $tmp996 = $tmp994.value;
int64_t $tmp997 = $tmp995 - $tmp996;
panda$core$Int64 $tmp998 = (panda$core$Int64) {$tmp997};
*(&local0) = $tmp998;
// line 666
panda$core$Bit $tmp999 = param1.inclusive;
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block1; else goto block2;
block1:;
// line 667
panda$core$Int64 $tmp1001 = *(&local0);
panda$core$Int64 $tmp1002 = (panda$core$Int64) {1};
int64_t $tmp1003 = $tmp1001.value;
int64_t $tmp1004 = $tmp1002.value;
int64_t $tmp1005 = $tmp1003 + $tmp1004;
panda$core$Int64 $tmp1006 = (panda$core$Int64) {$tmp1005};
*(&local0) = $tmp1006;
goto block2;
block2:;
// line 669
panda$core$String* $tmp1007 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8** $tmp1008 = &param0->data;
panda$core$Char8* $tmp1009 = *$tmp1008;
panda$core$String$Index $tmp1010 = param1.min;
panda$core$Int64 $tmp1011 = $tmp1010.value;
int64_t $tmp1012 = $tmp1011.value;
panda$core$Char8* $tmp1013 = $tmp1009 + $tmp1012;
panda$core$Int64 $tmp1014 = *(&local0);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp1007, $tmp1013, $tmp1014, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($24:panda.core.String)
return $tmp1007;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 685
// line 686
panda$core$String$Index$nullable $tmp1015 = param1.min;
panda$core$Bit $tmp1016 = panda$core$Bit$init$builtin_bit($tmp1015.nonnull);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block1; else goto block3;
block1:;
// line 687
panda$core$String$Index$nullable $tmp1018 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1018.value);
goto block2;
block3:;
// line 1
// line 690
panda$core$String$Index $tmp1019 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1019;
goto block2;
block2:;
// line 693
panda$core$Bit $tmp1020 = param1.inclusive;
*(&local1) = $tmp1020;
// line 694
// line 695
panda$core$String$Index$nullable $tmp1021 = param1.max;
panda$core$Bit $tmp1022 = panda$core$Bit$init$builtin_bit($tmp1021.nonnull);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block4; else goto block6;
block4:;
// line 696
panda$core$String$Index$nullable $tmp1024 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1024.value);
goto block5;
block6:;
// line 1
// line 699
panda$core$String$Index $tmp1025 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1025;
// line 700
panda$core$Bit $tmp1026 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1026;
goto block5;
block5:;
// line 702
panda$core$String$Index $tmp1027 = *(&local0);
panda$core$String$Index $tmp1028 = *(&local2);
panda$core$Bit $tmp1029 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1030 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1027, $tmp1028, $tmp1029);
panda$core$String* $tmp1031 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1030);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($45:panda.core.String)
return $tmp1031;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$Char8 local3;
// line 710
panda$core$String$Index $tmp1032 = param1.min;
panda$core$Int64 $tmp1033 = $tmp1032.value;
*(&local0) = $tmp1033;
// line 711
panda$core$MutableString* $tmp1034 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1034);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
panda$core$MutableString* $tmp1035 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
*(&local1) = $tmp1034;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing REF($5:panda.core.MutableString)
// line 712
panda$core$String$Index $tmp1036 = param1.max;
panda$core$Int64 $tmp1037 = $tmp1036.value;
*(&local2) = $tmp1037;
// line 713
panda$core$Bit $tmp1038 = param1.inclusive;
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block1; else goto block2;
block1:;
// line 714
panda$core$Int64 $tmp1040 = *(&local2);
panda$core$Int64 $tmp1041 = (panda$core$Int64) {1};
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041.value;
int64_t $tmp1044 = $tmp1042 + $tmp1043;
panda$core$Int64 $tmp1045 = (panda$core$Int64) {$tmp1044};
*(&local2) = $tmp1045;
goto block2;
block2:;
// line 716
goto block3;
block3:;
panda$core$Int64 $tmp1046 = *(&local0);
panda$core$Int64 $tmp1047 = *(&local2);
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047.value;
bool $tmp1050 = $tmp1048 < $tmp1049;
panda$core$Bit $tmp1051 = (panda$core$Bit) {$tmp1050};
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block4; else goto block5;
block4:;
// line 717
panda$core$Char8** $tmp1053 = &param0->data;
panda$core$Char8* $tmp1054 = *$tmp1053;
panda$core$Int64 $tmp1055 = *(&local0);
int64_t $tmp1056 = $tmp1055.value;
panda$core$Char8 $tmp1057 = $tmp1054[$tmp1056];
*(&local3) = $tmp1057;
// line 718
panda$core$MutableString* $tmp1058 = *(&local1);
panda$core$Char8 $tmp1059 = *(&local3);
panda$core$MutableString$append$panda$core$Char8($tmp1058, $tmp1059);
// line 719
panda$core$Int64 $tmp1060 = *(&local0);
panda$core$Int64 $tmp1061 = (panda$core$Int64) {1};
int64_t $tmp1062 = $tmp1060.value;
int64_t $tmp1063 = $tmp1061.value;
int64_t $tmp1064 = $tmp1062 + $tmp1063;
panda$core$Int64 $tmp1065 = (panda$core$Int64) {$tmp1064};
*(&local0) = $tmp1065;
// line 720
panda$core$Char8 $tmp1066 = *(&local3);
uint8_t $tmp1067 = $tmp1066.value;
int64_t $tmp1068 = ((int64_t) $tmp1067) & 255;
bool $tmp1069 = $tmp1068 >= 192;
panda$core$Bit $tmp1070 = panda$core$Bit$init$builtin_bit($tmp1069);
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block6; else goto block7;
block6:;
// line 721
panda$core$MutableString* $tmp1072 = *(&local1);
panda$core$Char8** $tmp1073 = &param0->data;
panda$core$Char8* $tmp1074 = *$tmp1073;
panda$core$Int64 $tmp1075 = *(&local0);
int64_t $tmp1076 = $tmp1075.value;
panda$core$Char8 $tmp1077 = $tmp1074[$tmp1076];
panda$core$MutableString$append$panda$core$Char8($tmp1072, $tmp1077);
// line 722
panda$core$Int64 $tmp1078 = *(&local0);
panda$core$Int64 $tmp1079 = (panda$core$Int64) {1};
int64_t $tmp1080 = $tmp1078.value;
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080 + $tmp1081;
panda$core$Int64 $tmp1083 = (panda$core$Int64) {$tmp1082};
*(&local0) = $tmp1083;
goto block7;
block7:;
// line 724
panda$core$Char8 $tmp1084 = *(&local3);
uint8_t $tmp1085 = $tmp1084.value;
int64_t $tmp1086 = ((int64_t) $tmp1085) & 255;
bool $tmp1087 = $tmp1086 >= 224;
panda$core$Bit $tmp1088 = panda$core$Bit$init$builtin_bit($tmp1087);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block8; else goto block9;
block8:;
// line 725
panda$core$MutableString* $tmp1090 = *(&local1);
panda$core$Char8** $tmp1091 = &param0->data;
panda$core$Char8* $tmp1092 = *$tmp1091;
panda$core$Int64 $tmp1093 = *(&local0);
int64_t $tmp1094 = $tmp1093.value;
panda$core$Char8 $tmp1095 = $tmp1092[$tmp1094];
panda$core$MutableString$append$panda$core$Char8($tmp1090, $tmp1095);
// line 726
panda$core$Int64 $tmp1096 = *(&local0);
panda$core$Int64 $tmp1097 = (panda$core$Int64) {1};
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
panda$core$Int64 $tmp1101 = (panda$core$Int64) {$tmp1100};
*(&local0) = $tmp1101;
goto block9;
block9:;
// line 728
panda$core$Char8 $tmp1102 = *(&local3);
uint8_t $tmp1103 = $tmp1102.value;
int64_t $tmp1104 = ((int64_t) $tmp1103) & 255;
bool $tmp1105 = $tmp1104 >= 240;
panda$core$Bit $tmp1106 = panda$core$Bit$init$builtin_bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block10; else goto block11;
block10:;
// line 729
panda$core$MutableString* $tmp1108 = *(&local1);
panda$core$Char8** $tmp1109 = &param0->data;
panda$core$Char8* $tmp1110 = *$tmp1109;
panda$core$Int64 $tmp1111 = *(&local0);
int64_t $tmp1112 = $tmp1111.value;
panda$core$Char8 $tmp1113 = $tmp1110[$tmp1112];
panda$core$MutableString$append$panda$core$Char8($tmp1108, $tmp1113);
// line 730
panda$core$Int64 $tmp1114 = *(&local0);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {1};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116 + $tmp1117;
panda$core$Int64 $tmp1119 = (panda$core$Int64) {$tmp1118};
*(&local0) = $tmp1119;
goto block11;
block11:;
goto block3;
block5:;
// line 733
panda$core$MutableString* $tmp1120 = *(&local1);
panda$core$String* $tmp1121 = panda$core$MutableString$finish$R$panda$core$String($tmp1120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
// unreffing REF($144:panda.core.String)
panda$core$MutableString* $tmp1122 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp1121;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 744
panda$core$Int64* $tmp1123 = &param0->_length;
panda$core$Int64 $tmp1124 = *$tmp1123;
panda$core$Int64 $tmp1125 = (panda$core$Int64) {0};
panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1124, $tmp1125);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block1; else goto block2;
block1:;
// line 745
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1128));
return &$s1129;
block2:;
// line 747
// line 748
panda$core$String$Index$nullable $tmp1130 = param1.min;
panda$core$Bit $tmp1131 = panda$core$Bit$init$builtin_bit($tmp1130.nonnull);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block3; else goto block5;
block3:;
// line 749
panda$core$String$Index$nullable $tmp1133 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1133.value);
goto block4;
block5:;
// line 1
// line 752
panda$core$String$Index $tmp1134 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1134;
goto block4;
block4:;
// line 755
panda$core$Bit $tmp1135 = param1.inclusive;
*(&local1) = $tmp1135;
// line 756
// line 757
panda$core$String$Index$nullable $tmp1136 = param1.max;
panda$core$Bit $tmp1137 = panda$core$Bit$init$builtin_bit($tmp1136.nonnull);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block6; else goto block8;
block6:;
// line 758
panda$core$String$Index$nullable $tmp1139 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1139.value);
goto block7;
block8:;
// line 1
// line 761
panda$core$String$Index $tmp1140 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1140;
// line 762
panda$core$Bit $tmp1141 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1141;
goto block7;
block7:;
// line 764
panda$core$String$Index $tmp1142 = *(&local0);
panda$core$String$Index $tmp1143 = *(&local2);
panda$core$Bit $tmp1144 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1145 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1142, $tmp1143, $tmp1144);
panda$core$String* $tmp1146 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1145);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
// unreffing REF($56:panda.core.String)
return $tmp1146;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$MutableString* local3 = NULL;
panda$core$Char8 local4;
panda$core$Int64 local5;
panda$core$Char8 local6;
panda$core$Int64 local7;
panda$core$Int64 local8;
panda$core$Bit local9;
panda$core$Bit local10;
panda$core$Bit local11;
panda$core$Char8 local12;
// line 780
panda$core$Int64* $tmp1147 = &param0->_length;
panda$core$Int64 $tmp1148 = *$tmp1147;
panda$core$Int64 $tmp1149 = (panda$core$Int64) {0};
panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1148, $tmp1149);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block1; else goto block2;
block1:;
// line 781
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1152));
return &$s1153;
block2:;
// line 783
panda$core$Int64 $tmp1154 = param1.step;
*(&local0) = $tmp1154;
// line 785
// line 786
panda$core$String$Index$nullable $tmp1155 = param1.start;
panda$core$Bit $tmp1156 = panda$core$Bit$init$builtin_bit($tmp1155.nonnull);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block3; else goto block5;
block3:;
// line 787
panda$core$String$Index$nullable $tmp1158 = param1.start;
panda$core$Int64 $tmp1159 = ((panda$core$String$Index) $tmp1158.value).value;
*(&local1) = $tmp1159;
goto block4;
block5:;
// line 789
panda$core$Int64 $tmp1160 = *(&local0);
panda$core$Int64 $tmp1161 = (panda$core$Int64) {0};
int64_t $tmp1162 = $tmp1160.value;
int64_t $tmp1163 = $tmp1161.value;
bool $tmp1164 = $tmp1162 > $tmp1163;
panda$core$Bit $tmp1165 = (panda$core$Bit) {$tmp1164};
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block6; else goto block8;
block6:;
// line 790
panda$core$String$Index $tmp1167 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1168 = $tmp1167.value;
*(&local1) = $tmp1168;
goto block7;
block8:;
// line 1
// line 793
panda$core$String$Index $tmp1169 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp1170 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1169);
panda$core$Int64 $tmp1171 = $tmp1170.value;
*(&local1) = $tmp1171;
goto block7;
block7:;
goto block4;
block4:;
// line 796
// line 797
panda$core$String$Index$nullable $tmp1172 = param1.end;
panda$core$Bit $tmp1173 = panda$core$Bit$init$builtin_bit($tmp1172.nonnull);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block9; else goto block11;
block9:;
// line 798
panda$core$String$Index$nullable $tmp1175 = param1.end;
panda$core$Int64 $tmp1176 = ((panda$core$String$Index) $tmp1175.value).value;
*(&local2) = $tmp1176;
goto block10;
block11:;
// line 800
panda$core$Int64 $tmp1177 = *(&local0);
panda$core$Int64 $tmp1178 = (panda$core$Int64) {0};
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178.value;
bool $tmp1181 = $tmp1179 > $tmp1180;
panda$core$Bit $tmp1182 = (panda$core$Bit) {$tmp1181};
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block12; else goto block14;
block12:;
// line 801
panda$core$String$Index $tmp1184 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1185 = $tmp1184.value;
*(&local2) = $tmp1185;
goto block13;
block14:;
// line 1
// line 804
panda$core$String$Index $tmp1186 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1187 = $tmp1186.value;
*(&local2) = $tmp1187;
goto block13;
block13:;
goto block10;
block10:;
// line 807
panda$core$MutableString* $tmp1188 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1188);
*(&local3) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
panda$core$MutableString* $tmp1189 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
*(&local3) = $tmp1188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
// unreffing REF($84:panda.core.MutableString)
// line 808
panda$core$Int64 $tmp1190 = param1.step;
panda$core$Int64 $tmp1191 = (panda$core$Int64) {0};
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191.value;
bool $tmp1194 = $tmp1192 > $tmp1193;
panda$core$Bit $tmp1195 = (panda$core$Bit) {$tmp1194};
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block15; else goto block17;
block15:;
// line 809
goto block18;
block18:;
panda$core$Int64 $tmp1197 = *(&local1);
panda$core$Int64 $tmp1198 = *(&local2);
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198.value;
bool $tmp1201 = $tmp1199 < $tmp1200;
panda$core$Bit $tmp1202 = (panda$core$Bit) {$tmp1201};
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block19; else goto block20;
block19:;
// line 810
panda$core$Char8** $tmp1204 = &param0->data;
panda$core$Char8* $tmp1205 = *$tmp1204;
panda$core$Int64 $tmp1206 = *(&local1);
int64_t $tmp1207 = $tmp1206.value;
panda$core$Char8 $tmp1208 = $tmp1205[$tmp1207];
*(&local4) = $tmp1208;
// line 811
panda$core$MutableString* $tmp1209 = *(&local3);
panda$core$Char8 $tmp1210 = *(&local4);
panda$core$MutableString$append$panda$core$Char8($tmp1209, $tmp1210);
// line 812
panda$core$Int64 $tmp1211 = *(&local1);
panda$core$Int64 $tmp1212 = (panda$core$Int64) {1};
int64_t $tmp1213 = $tmp1211.value;
int64_t $tmp1214 = $tmp1212.value;
int64_t $tmp1215 = $tmp1213 + $tmp1214;
panda$core$Int64 $tmp1216 = (panda$core$Int64) {$tmp1215};
*(&local1) = $tmp1216;
// line 813
panda$core$Char8 $tmp1217 = *(&local4);
uint8_t $tmp1218 = $tmp1217.value;
int64_t $tmp1219 = ((int64_t) $tmp1218) & 255;
bool $tmp1220 = $tmp1219 >= 192;
panda$core$Bit $tmp1221 = panda$core$Bit$init$builtin_bit($tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block21; else goto block22;
block21:;
// line 814
panda$core$MutableString* $tmp1223 = *(&local3);
panda$core$Char8** $tmp1224 = &param0->data;
panda$core$Char8* $tmp1225 = *$tmp1224;
panda$core$Int64 $tmp1226 = *(&local1);
int64_t $tmp1227 = $tmp1226.value;
panda$core$Char8 $tmp1228 = $tmp1225[$tmp1227];
panda$core$MutableString$append$panda$core$Char8($tmp1223, $tmp1228);
// line 815
panda$core$Int64 $tmp1229 = *(&local1);
panda$core$Int64 $tmp1230 = (panda$core$Int64) {1};
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231 + $tmp1232;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {$tmp1233};
*(&local1) = $tmp1234;
goto block22;
block22:;
// line 817
panda$core$Char8 $tmp1235 = *(&local4);
uint8_t $tmp1236 = $tmp1235.value;
int64_t $tmp1237 = ((int64_t) $tmp1236) & 255;
bool $tmp1238 = $tmp1237 >= 224;
panda$core$Bit $tmp1239 = panda$core$Bit$init$builtin_bit($tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block23; else goto block24;
block23:;
// line 818
panda$core$MutableString* $tmp1241 = *(&local3);
panda$core$Char8** $tmp1242 = &param0->data;
panda$core$Char8* $tmp1243 = *$tmp1242;
panda$core$Int64 $tmp1244 = *(&local1);
int64_t $tmp1245 = $tmp1244.value;
panda$core$Char8 $tmp1246 = $tmp1243[$tmp1245];
panda$core$MutableString$append$panda$core$Char8($tmp1241, $tmp1246);
// line 819
panda$core$Int64 $tmp1247 = *(&local1);
panda$core$Int64 $tmp1248 = (panda$core$Int64) {1};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249 + $tmp1250;
panda$core$Int64 $tmp1252 = (panda$core$Int64) {$tmp1251};
*(&local1) = $tmp1252;
goto block24;
block24:;
// line 821
panda$core$Char8 $tmp1253 = *(&local4);
uint8_t $tmp1254 = $tmp1253.value;
int64_t $tmp1255 = ((int64_t) $tmp1254) & 255;
bool $tmp1256 = $tmp1255 >= 240;
panda$core$Bit $tmp1257 = panda$core$Bit$init$builtin_bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block25; else goto block26;
block25:;
// line 822
panda$core$MutableString* $tmp1259 = *(&local3);
panda$core$Char8** $tmp1260 = &param0->data;
panda$core$Char8* $tmp1261 = *$tmp1260;
panda$core$Int64 $tmp1262 = *(&local1);
int64_t $tmp1263 = $tmp1262.value;
panda$core$Char8 $tmp1264 = $tmp1261[$tmp1263];
panda$core$MutableString$append$panda$core$Char8($tmp1259, $tmp1264);
// line 823
panda$core$Int64 $tmp1265 = *(&local1);
panda$core$Int64 $tmp1266 = (panda$core$Int64) {1};
int64_t $tmp1267 = $tmp1265.value;
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267 + $tmp1268;
panda$core$Int64 $tmp1270 = (panda$core$Int64) {$tmp1269};
*(&local1) = $tmp1270;
goto block26;
block26:;
// line 825
panda$core$Int64 $tmp1271 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1272 = *(&local0);
panda$core$Bit $tmp1273 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1274 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1271, $tmp1272, $tmp1273);
panda$core$Int64 $tmp1275 = $tmp1274.min;
*(&local5) = $tmp1275;
panda$core$Int64 $tmp1276 = $tmp1274.max;
panda$core$Bit $tmp1277 = $tmp1274.inclusive;
bool $tmp1278 = $tmp1277.value;
panda$core$Int64 $tmp1279 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1280 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1279);
if ($tmp1278) goto block30; else goto block31;
block30:;
int64_t $tmp1281 = $tmp1275.value;
int64_t $tmp1282 = $tmp1276.value;
bool $tmp1283 = $tmp1281 <= $tmp1282;
panda$core$Bit $tmp1284 = (panda$core$Bit) {$tmp1283};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block27; else goto block28;
block31:;
int64_t $tmp1286 = $tmp1275.value;
int64_t $tmp1287 = $tmp1276.value;
bool $tmp1288 = $tmp1286 < $tmp1287;
panda$core$Bit $tmp1289 = (panda$core$Bit) {$tmp1288};
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block27; else goto block28;
block27:;
// line 826
panda$core$Int64 $tmp1291 = *(&local1);
panda$core$Int64 $tmp1292 = *(&local2);
int64_t $tmp1293 = $tmp1291.value;
int64_t $tmp1294 = $tmp1292.value;
bool $tmp1295 = $tmp1293 >= $tmp1294;
panda$core$Bit $tmp1296 = (panda$core$Bit) {$tmp1295};
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block32; else goto block33;
block32:;
// line 827
panda$core$MutableString* $tmp1298 = *(&local3);
panda$core$String* $tmp1299 = panda$core$MutableString$convert$R$panda$core$String($tmp1298);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing REF($248:panda.core.String)
panda$core$MutableString* $tmp1300 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1299;
block33:;
// line 829
panda$core$Int64 $tmp1301 = *(&local1);
panda$core$String$Index $tmp1302 = panda$core$String$Index$init$panda$core$Int64($tmp1301);
panda$core$String$Index $tmp1303 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1302);
panda$core$Int64 $tmp1304 = $tmp1303.value;
*(&local1) = $tmp1304;
goto block29;
block29:;
panda$core$Int64 $tmp1305 = *(&local5);
int64_t $tmp1306 = $tmp1276.value;
int64_t $tmp1307 = $tmp1305.value;
int64_t $tmp1308 = $tmp1306 - $tmp1307;
panda$core$Int64 $tmp1309 = (panda$core$Int64) {$tmp1308};
panda$core$UInt64 $tmp1310 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1309);
if ($tmp1278) goto block35; else goto block36;
block35:;
uint64_t $tmp1311 = $tmp1310.value;
uint64_t $tmp1312 = $tmp1280.value;
bool $tmp1313 = $tmp1311 >= $tmp1312;
panda$core$Bit $tmp1314 = (panda$core$Bit) {$tmp1313};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block34; else goto block28;
block36:;
uint64_t $tmp1316 = $tmp1310.value;
uint64_t $tmp1317 = $tmp1280.value;
bool $tmp1318 = $tmp1316 > $tmp1317;
panda$core$Bit $tmp1319 = (panda$core$Bit) {$tmp1318};
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block34; else goto block28;
block34:;
int64_t $tmp1321 = $tmp1305.value;
int64_t $tmp1322 = $tmp1279.value;
int64_t $tmp1323 = $tmp1321 + $tmp1322;
panda$core$Int64 $tmp1324 = (panda$core$Int64) {$tmp1323};
*(&local5) = $tmp1324;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 834
panda$core$Int64 $tmp1325 = param1.step;
panda$core$Int64 $tmp1326 = (panda$core$Int64) {0};
int64_t $tmp1327 = $tmp1325.value;
int64_t $tmp1328 = $tmp1326.value;
bool $tmp1329 = $tmp1327 < $tmp1328;
panda$core$Bit $tmp1330 = (panda$core$Bit) {$tmp1329};
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1332 = (panda$core$Int64) {834};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1333, $tmp1332);
abort(); // unreachable
block37:;
// line 835
goto block39;
block39:;
panda$core$Int64 $tmp1334 = *(&local1);
panda$core$Int64 $tmp1335 = *(&local2);
int64_t $tmp1336 = $tmp1334.value;
int64_t $tmp1337 = $tmp1335.value;
bool $tmp1338 = $tmp1336 > $tmp1337;
panda$core$Bit $tmp1339 = (panda$core$Bit) {$tmp1338};
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block40; else goto block41;
block40:;
// line 836
panda$core$Char8** $tmp1341 = &param0->data;
panda$core$Char8* $tmp1342 = *$tmp1341;
panda$core$Int64 $tmp1343 = *(&local1);
int64_t $tmp1344 = $tmp1343.value;
panda$core$Char8 $tmp1345 = $tmp1342[$tmp1344];
*(&local6) = $tmp1345;
// line 837
panda$core$MutableString* $tmp1346 = *(&local3);
panda$core$Char8 $tmp1347 = *(&local6);
panda$core$MutableString$append$panda$core$Char8($tmp1346, $tmp1347);
// line 838
panda$core$Int64 $tmp1348 = *(&local1);
*(&local7) = $tmp1348;
// line 839
panda$core$Int64 $tmp1349 = *(&local1);
panda$core$Int64 $tmp1350 = (panda$core$Int64) {1};
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350.value;
int64_t $tmp1353 = $tmp1351 + $tmp1352;
panda$core$Int64 $tmp1354 = (panda$core$Int64) {$tmp1353};
*(&local1) = $tmp1354;
// line 840
panda$core$Char8 $tmp1355 = *(&local6);
uint8_t $tmp1356 = $tmp1355.value;
int64_t $tmp1357 = ((int64_t) $tmp1356) & 255;
bool $tmp1358 = $tmp1357 >= 192;
panda$core$Bit $tmp1359 = panda$core$Bit$init$builtin_bit($tmp1358);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block42; else goto block43;
block42:;
// line 841
panda$core$MutableString* $tmp1361 = *(&local3);
panda$core$Char8** $tmp1362 = &param0->data;
panda$core$Char8* $tmp1363 = *$tmp1362;
panda$core$Int64 $tmp1364 = *(&local1);
int64_t $tmp1365 = $tmp1364.value;
panda$core$Char8 $tmp1366 = $tmp1363[$tmp1365];
panda$core$MutableString$append$panda$core$Char8($tmp1361, $tmp1366);
// line 842
panda$core$Int64 $tmp1367 = *(&local1);
panda$core$Int64 $tmp1368 = (panda$core$Int64) {1};
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368.value;
int64_t $tmp1371 = $tmp1369 + $tmp1370;
panda$core$Int64 $tmp1372 = (panda$core$Int64) {$tmp1371};
*(&local1) = $tmp1372;
goto block43;
block43:;
// line 844
panda$core$Char8 $tmp1373 = *(&local6);
uint8_t $tmp1374 = $tmp1373.value;
int64_t $tmp1375 = ((int64_t) $tmp1374) & 255;
bool $tmp1376 = $tmp1375 >= 224;
panda$core$Bit $tmp1377 = panda$core$Bit$init$builtin_bit($tmp1376);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block44; else goto block45;
block44:;
// line 845
panda$core$MutableString* $tmp1379 = *(&local3);
panda$core$Char8** $tmp1380 = &param0->data;
panda$core$Char8* $tmp1381 = *$tmp1380;
panda$core$Int64 $tmp1382 = *(&local1);
int64_t $tmp1383 = $tmp1382.value;
panda$core$Char8 $tmp1384 = $tmp1381[$tmp1383];
panda$core$MutableString$append$panda$core$Char8($tmp1379, $tmp1384);
// line 846
panda$core$Int64 $tmp1385 = *(&local1);
panda$core$Int64 $tmp1386 = (panda$core$Int64) {1};
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387 + $tmp1388;
panda$core$Int64 $tmp1390 = (panda$core$Int64) {$tmp1389};
*(&local1) = $tmp1390;
goto block45;
block45:;
// line 848
panda$core$Char8 $tmp1391 = *(&local6);
uint8_t $tmp1392 = $tmp1391.value;
int64_t $tmp1393 = ((int64_t) $tmp1392) & 255;
bool $tmp1394 = $tmp1393 >= 240;
panda$core$Bit $tmp1395 = panda$core$Bit$init$builtin_bit($tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block46; else goto block47;
block46:;
// line 849
panda$core$MutableString* $tmp1397 = *(&local3);
panda$core$Char8** $tmp1398 = &param0->data;
panda$core$Char8* $tmp1399 = *$tmp1398;
panda$core$Int64 $tmp1400 = *(&local1);
int64_t $tmp1401 = $tmp1400.value;
panda$core$Char8 $tmp1402 = $tmp1399[$tmp1401];
panda$core$MutableString$append$panda$core$Char8($tmp1397, $tmp1402);
goto block47;
block47:;
// line 851
panda$core$Int64 $tmp1403 = *(&local7);
panda$core$Int64 $tmp1404 = (panda$core$Int64) {1};
int64_t $tmp1405 = $tmp1403.value;
int64_t $tmp1406 = $tmp1404.value;
int64_t $tmp1407 = $tmp1405 - $tmp1406;
panda$core$Int64 $tmp1408 = (panda$core$Int64) {$tmp1407};
*(&local1) = $tmp1408;
// line 852
goto block48;
block48:;
panda$core$Char8** $tmp1409 = &param0->data;
panda$core$Char8* $tmp1410 = *$tmp1409;
panda$core$Int64 $tmp1411 = *(&local1);
int64_t $tmp1412 = $tmp1411.value;
panda$core$Char8 $tmp1413 = $tmp1410[$tmp1412];
uint8_t $tmp1414 = $tmp1413.value;
int64_t $tmp1415 = ((int64_t) $tmp1414) & 255;
bool $tmp1416 = $tmp1415 >= 128;
panda$core$Char8** $tmp1417 = &param0->data;
panda$core$Char8* $tmp1418 = *$tmp1417;
panda$core$Int64 $tmp1419 = *(&local1);
int64_t $tmp1420 = $tmp1419.value;
panda$core$Char8 $tmp1421 = $tmp1418[$tmp1420];
uint8_t $tmp1422 = $tmp1421.value;
int64_t $tmp1423 = ((int64_t) $tmp1422) & 255;
bool $tmp1424 = $tmp1423 < 192;
bool $tmp1425 = $tmp1416 & $tmp1424;
panda$core$Bit $tmp1426 = panda$core$Bit$init$builtin_bit($tmp1425);
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block49; else goto block50;
block49:;
// line 853
panda$core$Int64 $tmp1428 = *(&local1);
panda$core$Int64 $tmp1429 = (panda$core$Int64) {1};
int64_t $tmp1430 = $tmp1428.value;
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430 - $tmp1431;
panda$core$Int64 $tmp1433 = (panda$core$Int64) {$tmp1432};
*(&local1) = $tmp1433;
goto block48;
block50:;
// line 855
panda$core$Int64 $tmp1434 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp1435 = *(&local0);
panda$core$Int64 $tmp1436 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1437 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1438 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1434, $tmp1435, $tmp1436, $tmp1437);
panda$core$Int64 $tmp1439 = $tmp1438.start;
*(&local8) = $tmp1439;
panda$core$Int64 $tmp1440 = $tmp1438.end;
panda$core$Int64 $tmp1441 = $tmp1438.step;
panda$core$UInt64 $tmp1442 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1441);
panda$core$Int64 $tmp1443 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1441);
panda$core$UInt64 $tmp1444 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1443);
panda$core$Bit $tmp1445 = $tmp1438.inclusive;
bool $tmp1446 = $tmp1445.value;
panda$core$Int64 $tmp1447 = (panda$core$Int64) {0};
int64_t $tmp1448 = $tmp1441.value;
int64_t $tmp1449 = $tmp1447.value;
bool $tmp1450 = $tmp1448 >= $tmp1449;
panda$core$Bit $tmp1451 = (panda$core$Bit) {$tmp1450};
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block54; else goto block55;
block54:;
if ($tmp1446) goto block56; else goto block57;
block56:;
int64_t $tmp1453 = $tmp1439.value;
int64_t $tmp1454 = $tmp1440.value;
bool $tmp1455 = $tmp1453 <= $tmp1454;
panda$core$Bit $tmp1456 = (panda$core$Bit) {$tmp1455};
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block51; else goto block52;
block57:;
int64_t $tmp1458 = $tmp1439.value;
int64_t $tmp1459 = $tmp1440.value;
bool $tmp1460 = $tmp1458 < $tmp1459;
panda$core$Bit $tmp1461 = (panda$core$Bit) {$tmp1460};
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block51; else goto block52;
block55:;
if ($tmp1446) goto block58; else goto block59;
block58:;
int64_t $tmp1463 = $tmp1439.value;
int64_t $tmp1464 = $tmp1440.value;
bool $tmp1465 = $tmp1463 >= $tmp1464;
panda$core$Bit $tmp1466 = (panda$core$Bit) {$tmp1465};
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block51; else goto block52;
block59:;
int64_t $tmp1468 = $tmp1439.value;
int64_t $tmp1469 = $tmp1440.value;
bool $tmp1470 = $tmp1468 > $tmp1469;
panda$core$Bit $tmp1471 = (panda$core$Bit) {$tmp1470};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block51; else goto block52;
block51:;
// line 856
panda$core$Int64 $tmp1473 = *(&local1);
panda$core$Int64 $tmp1474 = *(&local2);
int64_t $tmp1475 = $tmp1473.value;
int64_t $tmp1476 = $tmp1474.value;
bool $tmp1477 = $tmp1475 <= $tmp1476;
panda$core$Bit $tmp1478 = (panda$core$Bit) {$tmp1477};
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block60; else goto block61;
block60:;
// line 857
panda$core$MutableString* $tmp1480 = *(&local3);
panda$core$String* $tmp1481 = panda$core$MutableString$convert$R$panda$core$String($tmp1480);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
// unreffing REF($509:panda.core.String)
panda$core$MutableString* $tmp1482 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1481;
block61:;
// line 859
panda$core$Int64 $tmp1483 = *(&local1);
panda$core$String$Index $tmp1484 = panda$core$String$Index$init$panda$core$Int64($tmp1483);
panda$core$String$Index $tmp1485 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1484);
panda$core$Int64 $tmp1486 = $tmp1485.value;
*(&local1) = $tmp1486;
goto block53;
block53:;
panda$core$Int64 $tmp1487 = *(&local8);
if ($tmp1452) goto block63; else goto block64;
block63:;
int64_t $tmp1488 = $tmp1440.value;
int64_t $tmp1489 = $tmp1487.value;
int64_t $tmp1490 = $tmp1488 - $tmp1489;
panda$core$Int64 $tmp1491 = (panda$core$Int64) {$tmp1490};
panda$core$UInt64 $tmp1492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1491);
if ($tmp1446) goto block65; else goto block66;
block65:;
uint64_t $tmp1493 = $tmp1492.value;
uint64_t $tmp1494 = $tmp1442.value;
bool $tmp1495 = $tmp1493 >= $tmp1494;
panda$core$Bit $tmp1496 = (panda$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block62; else goto block52;
block66:;
uint64_t $tmp1498 = $tmp1492.value;
uint64_t $tmp1499 = $tmp1442.value;
bool $tmp1500 = $tmp1498 > $tmp1499;
panda$core$Bit $tmp1501 = (panda$core$Bit) {$tmp1500};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block62; else goto block52;
block64:;
int64_t $tmp1503 = $tmp1487.value;
int64_t $tmp1504 = $tmp1440.value;
int64_t $tmp1505 = $tmp1503 - $tmp1504;
panda$core$Int64 $tmp1506 = (panda$core$Int64) {$tmp1505};
panda$core$UInt64 $tmp1507 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1506);
if ($tmp1446) goto block67; else goto block68;
block67:;
uint64_t $tmp1508 = $tmp1507.value;
uint64_t $tmp1509 = $tmp1444.value;
bool $tmp1510 = $tmp1508 >= $tmp1509;
panda$core$Bit $tmp1511 = (panda$core$Bit) {$tmp1510};
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block62; else goto block52;
block68:;
uint64_t $tmp1513 = $tmp1507.value;
uint64_t $tmp1514 = $tmp1444.value;
bool $tmp1515 = $tmp1513 > $tmp1514;
panda$core$Bit $tmp1516 = (panda$core$Bit) {$tmp1515};
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block62; else goto block52;
block62:;
int64_t $tmp1518 = $tmp1487.value;
int64_t $tmp1519 = $tmp1441.value;
int64_t $tmp1520 = $tmp1518 + $tmp1519;
panda$core$Int64 $tmp1521 = (panda$core$Int64) {$tmp1520};
*(&local8) = $tmp1521;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 863
panda$core$Bit $tmp1522 = param1.inclusive;
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block71; else goto block72;
block71:;
*(&local11) = $tmp1522;
goto block73;
block72:;
panda$core$String$Index$nullable $tmp1524 = param1.end;
panda$core$Bit $tmp1525 = panda$core$Bit$init$builtin_bit(!$tmp1524.nonnull);
*(&local11) = $tmp1525;
goto block73;
block73:;
panda$core$Bit $tmp1526 = *(&local11);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block74; else goto block75;
block74:;
panda$core$Int64 $tmp1528 = *(&local1);
panda$core$Int64 $tmp1529 = *(&local2);
panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1528, $tmp1529);
*(&local10) = $tmp1530;
goto block76;
block75:;
*(&local10) = $tmp1526;
goto block76;
block76:;
panda$core$Bit $tmp1531 = *(&local10);
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block77; else goto block78;
block77:;
panda$core$Int64 $tmp1533 = *(&local2);
panda$core$Int64* $tmp1534 = &param0->_length;
panda$core$Int64 $tmp1535 = *$tmp1534;
int64_t $tmp1536 = $tmp1533.value;
int64_t $tmp1537 = $tmp1535.value;
bool $tmp1538 = $tmp1536 < $tmp1537;
panda$core$Bit $tmp1539 = (panda$core$Bit) {$tmp1538};
*(&local9) = $tmp1539;
goto block79;
block78:;
*(&local9) = $tmp1531;
goto block79;
block79:;
panda$core$Bit $tmp1540 = *(&local9);
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block69; else goto block70;
block69:;
// line 864
panda$core$Char8** $tmp1542 = &param0->data;
panda$core$Char8* $tmp1543 = *$tmp1542;
panda$core$Int64 $tmp1544 = *(&local1);
int64_t $tmp1545 = $tmp1544.value;
panda$core$Char8 $tmp1546 = $tmp1543[$tmp1545];
*(&local12) = $tmp1546;
// line 865
panda$core$MutableString* $tmp1547 = *(&local3);
panda$core$Char8 $tmp1548 = *(&local12);
panda$core$MutableString$append$panda$core$Char8($tmp1547, $tmp1548);
// line 866
panda$core$Int64 $tmp1549 = *(&local1);
panda$core$Int64 $tmp1550 = (panda$core$Int64) {1};
int64_t $tmp1551 = $tmp1549.value;
int64_t $tmp1552 = $tmp1550.value;
int64_t $tmp1553 = $tmp1551 + $tmp1552;
panda$core$Int64 $tmp1554 = (panda$core$Int64) {$tmp1553};
*(&local1) = $tmp1554;
// line 867
panda$core$Char8 $tmp1555 = *(&local12);
uint8_t $tmp1556 = $tmp1555.value;
int64_t $tmp1557 = ((int64_t) $tmp1556) & 255;
bool $tmp1558 = $tmp1557 >= 192;
panda$core$Bit $tmp1559 = panda$core$Bit$init$builtin_bit($tmp1558);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block80; else goto block81;
block80:;
// line 868
panda$core$MutableString* $tmp1561 = *(&local3);
panda$core$Char8** $tmp1562 = &param0->data;
panda$core$Char8* $tmp1563 = *$tmp1562;
panda$core$Int64 $tmp1564 = *(&local1);
int64_t $tmp1565 = $tmp1564.value;
panda$core$Char8 $tmp1566 = $tmp1563[$tmp1565];
panda$core$MutableString$append$panda$core$Char8($tmp1561, $tmp1566);
// line 869
panda$core$Int64 $tmp1567 = *(&local1);
panda$core$Int64 $tmp1568 = (panda$core$Int64) {1};
int64_t $tmp1569 = $tmp1567.value;
int64_t $tmp1570 = $tmp1568.value;
int64_t $tmp1571 = $tmp1569 + $tmp1570;
panda$core$Int64 $tmp1572 = (panda$core$Int64) {$tmp1571};
*(&local1) = $tmp1572;
goto block81;
block81:;
// line 871
panda$core$Char8 $tmp1573 = *(&local12);
uint8_t $tmp1574 = $tmp1573.value;
int64_t $tmp1575 = ((int64_t) $tmp1574) & 255;
bool $tmp1576 = $tmp1575 >= 224;
panda$core$Bit $tmp1577 = panda$core$Bit$init$builtin_bit($tmp1576);
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block82; else goto block83;
block82:;
// line 872
panda$core$MutableString* $tmp1579 = *(&local3);
panda$core$Char8** $tmp1580 = &param0->data;
panda$core$Char8* $tmp1581 = *$tmp1580;
panda$core$Int64 $tmp1582 = *(&local1);
int64_t $tmp1583 = $tmp1582.value;
panda$core$Char8 $tmp1584 = $tmp1581[$tmp1583];
panda$core$MutableString$append$panda$core$Char8($tmp1579, $tmp1584);
// line 873
panda$core$Int64 $tmp1585 = *(&local1);
panda$core$Int64 $tmp1586 = (panda$core$Int64) {1};
int64_t $tmp1587 = $tmp1585.value;
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587 + $tmp1588;
panda$core$Int64 $tmp1590 = (panda$core$Int64) {$tmp1589};
*(&local1) = $tmp1590;
goto block83;
block83:;
// line 875
panda$core$Char8 $tmp1591 = *(&local12);
uint8_t $tmp1592 = $tmp1591.value;
int64_t $tmp1593 = ((int64_t) $tmp1592) & 255;
bool $tmp1594 = $tmp1593 >= 240;
panda$core$Bit $tmp1595 = panda$core$Bit$init$builtin_bit($tmp1594);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block84; else goto block85;
block84:;
// line 876
panda$core$MutableString* $tmp1597 = *(&local3);
panda$core$Char8** $tmp1598 = &param0->data;
panda$core$Char8* $tmp1599 = *$tmp1598;
panda$core$Int64 $tmp1600 = *(&local1);
int64_t $tmp1601 = $tmp1600.value;
panda$core$Char8 $tmp1602 = $tmp1599[$tmp1601];
panda$core$MutableString$append$panda$core$Char8($tmp1597, $tmp1602);
goto block85;
block85:;
goto block70;
block70:;
// line 879
panda$core$MutableString* $tmp1603 = *(&local3);
panda$core$String* $tmp1604 = panda$core$MutableString$finish$R$panda$core$String($tmp1603);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
// unreffing REF($704:panda.core.String)
panda$core$MutableString* $tmp1605 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1604;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 888
// line 889
panda$core$Int64$nullable $tmp1606 = param1.min;
panda$core$Bit $tmp1607 = panda$core$Bit$init$builtin_bit($tmp1606.nonnull);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block1; else goto block3;
block1:;
// line 890
panda$core$String$Index $tmp1609 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1610 = param1.min;
panda$core$String$Index $tmp1611 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1609, ((panda$core$Int64) $tmp1610.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1611, true });
goto block2;
block3:;
// line 1
// line 893
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 895
// line 896
panda$core$Int64$nullable $tmp1612 = param1.max;
panda$core$Bit $tmp1613 = panda$core$Bit$init$builtin_bit($tmp1612.nonnull);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block4; else goto block6;
block4:;
// line 897
panda$core$String$Index $tmp1615 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1616 = param1.max;
panda$core$String$Index $tmp1617 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1615, ((panda$core$Int64) $tmp1616.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1617, true });
goto block5;
block6:;
// line 1
// line 900
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 902
panda$core$String$Index$nullable $tmp1618 = *(&local0);
panda$core$String$Index$nullable $tmp1619 = *(&local1);
panda$core$Bit $tmp1620 = param1.inclusive;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1621 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit($tmp1618, $tmp1619, $tmp1620);
panda$core$String* $tmp1622 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1621);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing REF($43:panda.core.String)
return $tmp1622;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 911
// line 912
panda$core$Int64$nullable $tmp1623 = param1.start;
panda$core$Bit $tmp1624 = panda$core$Bit$init$builtin_bit($tmp1623.nonnull);
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block1; else goto block3;
block1:;
// line 913
panda$core$String$Index $tmp1626 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1627 = param1.start;
panda$core$String$Index $tmp1628 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1626, ((panda$core$Int64) $tmp1627.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1628, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
panda$core$Int64$nullable $tmp1629 = param1.end;
panda$core$Bit $tmp1630 = panda$core$Bit$init$builtin_bit($tmp1629.nonnull);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block4; else goto block6;
block4:;
// line 920
panda$core$String$Index $tmp1632 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1633 = param1.end;
panda$core$String$Index $tmp1634 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1632, ((panda$core$Int64) $tmp1633.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1634, true });
goto block5;
block6:;
// line 1
// line 923
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 925
panda$core$String$Index$nullable $tmp1635 = *(&local0);
panda$core$String$Index$nullable $tmp1636 = *(&local1);
panda$core$Int64 $tmp1637 = param1.step;
panda$core$Bit $tmp1638 = param1.inclusive;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp1639 = panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit($tmp1635, $tmp1636, $tmp1637, $tmp1638);
panda$core$String* $tmp1640 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(param0, $tmp1639);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1640));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1640));
// unreffing REF($44:panda.core.String)
return $tmp1640;

}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 932
panda$core$Int64 $tmp1641 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1642 = &param0->_length;
panda$core$Int64 $tmp1643 = *$tmp1642;
panda$core$Bit $tmp1644 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1645 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1641, $tmp1643, $tmp1644);
panda$core$Int64 $tmp1646 = $tmp1645.min;
*(&local0) = $tmp1646;
panda$core$Int64 $tmp1647 = $tmp1645.max;
panda$core$Bit $tmp1648 = $tmp1645.inclusive;
bool $tmp1649 = $tmp1648.value;
panda$core$Int64 $tmp1650 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1651 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1650);
if ($tmp1649) goto block4; else goto block5;
block4:;
int64_t $tmp1652 = $tmp1646.value;
int64_t $tmp1653 = $tmp1647.value;
bool $tmp1654 = $tmp1652 <= $tmp1653;
panda$core$Bit $tmp1655 = (panda$core$Bit) {$tmp1654};
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block1; else goto block2;
block5:;
int64_t $tmp1657 = $tmp1646.value;
int64_t $tmp1658 = $tmp1647.value;
bool $tmp1659 = $tmp1657 < $tmp1658;
panda$core$Bit $tmp1660 = (panda$core$Bit) {$tmp1659};
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block1; else goto block2;
block1:;
// line 933
panda$core$Char8** $tmp1662 = &param0->data;
panda$core$Char8* $tmp1663 = *$tmp1662;
panda$core$Int64 $tmp1664 = *(&local0);
int64_t $tmp1665 = $tmp1664.value;
panda$core$Char8 $tmp1666 = $tmp1663[$tmp1665];
panda$core$Bit $tmp1667 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp1666, param1);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block6; else goto block7;
block6:;
// line 934
panda$core$Bit $tmp1669 = panda$core$Bit$init$builtin_bit(true);
return $tmp1669;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp1670 = *(&local0);
int64_t $tmp1671 = $tmp1647.value;
int64_t $tmp1672 = $tmp1670.value;
int64_t $tmp1673 = $tmp1671 - $tmp1672;
panda$core$Int64 $tmp1674 = (panda$core$Int64) {$tmp1673};
panda$core$UInt64 $tmp1675 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1674);
if ($tmp1649) goto block9; else goto block10;
block9:;
uint64_t $tmp1676 = $tmp1675.value;
uint64_t $tmp1677 = $tmp1651.value;
bool $tmp1678 = $tmp1676 >= $tmp1677;
panda$core$Bit $tmp1679 = (panda$core$Bit) {$tmp1678};
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block8; else goto block2;
block10:;
uint64_t $tmp1681 = $tmp1675.value;
uint64_t $tmp1682 = $tmp1651.value;
bool $tmp1683 = $tmp1681 > $tmp1682;
panda$core$Bit $tmp1684 = (panda$core$Bit) {$tmp1683};
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block8; else goto block2;
block8:;
int64_t $tmp1686 = $tmp1670.value;
int64_t $tmp1687 = $tmp1650.value;
int64_t $tmp1688 = $tmp1686 + $tmp1687;
panda$core$Int64 $tmp1689 = (panda$core$Int64) {$tmp1688};
*(&local0) = $tmp1689;
goto block1;
block2:;
// line 937
panda$core$Bit $tmp1690 = panda$core$Bit$init$builtin_bit(false);
return $tmp1690;

}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

// line 944
panda$core$String$Index$nullable $tmp1691 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param0, param1);
panda$core$Bit $tmp1692 = panda$core$Bit$init$builtin_bit($tmp1691.nonnull);
return $tmp1692;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 955
panda$core$String$Index $tmp1693 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1694 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1693);
return $tmp1694;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64* $tmp1695 = &param0->_length;
panda$core$Int64 $tmp1696 = *$tmp1695;
panda$core$Int64* $tmp1697 = &param1->_length;
panda$core$Int64 $tmp1698 = *$tmp1697;
int64_t $tmp1699 = $tmp1696.value;
int64_t $tmp1700 = $tmp1698.value;
bool $tmp1701 = $tmp1699 < $tmp1700;
panda$core$Bit $tmp1702 = (panda$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block1; else goto block2;
block1:;
// line 968
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 970
panda$core$Int64 $tmp1704 = param2.value;
panda$core$Int64* $tmp1705 = &param0->_length;
panda$core$Int64 $tmp1706 = *$tmp1705;
panda$core$Int64* $tmp1707 = &param1->_length;
panda$core$Int64 $tmp1708 = *$tmp1707;
int64_t $tmp1709 = $tmp1706.value;
int64_t $tmp1710 = $tmp1708.value;
int64_t $tmp1711 = $tmp1709 - $tmp1710;
panda$core$Int64 $tmp1712 = (panda$core$Int64) {$tmp1711};
panda$core$Bit $tmp1713 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp1714 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1704, $tmp1712, $tmp1713);
panda$core$Int64 $tmp1715 = $tmp1714.min;
*(&local0) = $tmp1715;
panda$core$Int64 $tmp1716 = $tmp1714.max;
panda$core$Bit $tmp1717 = $tmp1714.inclusive;
bool $tmp1718 = $tmp1717.value;
panda$core$Int64 $tmp1719 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1720 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1719);
if ($tmp1718) goto block6; else goto block7;
block6:;
int64_t $tmp1721 = $tmp1715.value;
int64_t $tmp1722 = $tmp1716.value;
bool $tmp1723 = $tmp1721 <= $tmp1722;
panda$core$Bit $tmp1724 = (panda$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block3; else goto block4;
block7:;
int64_t $tmp1726 = $tmp1715.value;
int64_t $tmp1727 = $tmp1716.value;
bool $tmp1728 = $tmp1726 < $tmp1727;
panda$core$Bit $tmp1729 = (panda$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block3; else goto block4;
block3:;
// line 971
panda$core$Int64 $tmp1731 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1732 = &param1->_length;
panda$core$Int64 $tmp1733 = *$tmp1732;
panda$core$Bit $tmp1734 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1735 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1731, $tmp1733, $tmp1734);
panda$core$Int64 $tmp1736 = $tmp1735.min;
*(&local1) = $tmp1736;
panda$core$Int64 $tmp1737 = $tmp1735.max;
panda$core$Bit $tmp1738 = $tmp1735.inclusive;
bool $tmp1739 = $tmp1738.value;
panda$core$Int64 $tmp1740 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1741 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1740);
if ($tmp1739) goto block11; else goto block12;
block11:;
int64_t $tmp1742 = $tmp1736.value;
int64_t $tmp1743 = $tmp1737.value;
bool $tmp1744 = $tmp1742 <= $tmp1743;
panda$core$Bit $tmp1745 = (panda$core$Bit) {$tmp1744};
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block8; else goto block9;
block12:;
int64_t $tmp1747 = $tmp1736.value;
int64_t $tmp1748 = $tmp1737.value;
bool $tmp1749 = $tmp1747 < $tmp1748;
panda$core$Bit $tmp1750 = (panda$core$Bit) {$tmp1749};
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block8; else goto block9;
block8:;
// line 972
panda$core$Char8** $tmp1752 = &param0->data;
panda$core$Char8* $tmp1753 = *$tmp1752;
panda$core$Int64 $tmp1754 = *(&local0);
panda$core$Int64 $tmp1755 = *(&local1);
int64_t $tmp1756 = $tmp1754.value;
int64_t $tmp1757 = $tmp1755.value;
int64_t $tmp1758 = $tmp1756 + $tmp1757;
panda$core$Int64 $tmp1759 = (panda$core$Int64) {$tmp1758};
int64_t $tmp1760 = $tmp1759.value;
panda$core$Char8 $tmp1761 = $tmp1753[$tmp1760];
panda$core$Char8** $tmp1762 = &param1->data;
panda$core$Char8* $tmp1763 = *$tmp1762;
panda$core$Int64 $tmp1764 = *(&local1);
int64_t $tmp1765 = $tmp1764.value;
panda$core$Char8 $tmp1766 = $tmp1763[$tmp1765];
panda$core$Bit $tmp1767 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1761, $tmp1766);
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block13; else goto block14;
block13:;
// line 973
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp1769 = *(&local1);
int64_t $tmp1770 = $tmp1737.value;
int64_t $tmp1771 = $tmp1769.value;
int64_t $tmp1772 = $tmp1770 - $tmp1771;
panda$core$Int64 $tmp1773 = (panda$core$Int64) {$tmp1772};
panda$core$UInt64 $tmp1774 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1773);
if ($tmp1739) goto block16; else goto block17;
block16:;
uint64_t $tmp1775 = $tmp1774.value;
uint64_t $tmp1776 = $tmp1741.value;
bool $tmp1777 = $tmp1775 >= $tmp1776;
panda$core$Bit $tmp1778 = (panda$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block15; else goto block9;
block17:;
uint64_t $tmp1780 = $tmp1774.value;
uint64_t $tmp1781 = $tmp1741.value;
bool $tmp1782 = $tmp1780 > $tmp1781;
panda$core$Bit $tmp1783 = (panda$core$Bit) {$tmp1782};
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block15; else goto block9;
block15:;
int64_t $tmp1785 = $tmp1769.value;
int64_t $tmp1786 = $tmp1740.value;
int64_t $tmp1787 = $tmp1785 + $tmp1786;
panda$core$Int64 $tmp1788 = (panda$core$Int64) {$tmp1787};
*(&local1) = $tmp1788;
goto block8;
block9:;
// line 976
panda$core$Int64 $tmp1789 = *(&local0);
panda$core$String$Index $tmp1790 = panda$core$String$Index$init$panda$core$Int64($tmp1789);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1790, true }).value), true });
block5:;
panda$core$Int64 $tmp1791 = *(&local0);
int64_t $tmp1792 = $tmp1716.value;
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792 - $tmp1793;
panda$core$Int64 $tmp1795 = (panda$core$Int64) {$tmp1794};
panda$core$UInt64 $tmp1796 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1795);
if ($tmp1718) goto block19; else goto block20;
block19:;
uint64_t $tmp1797 = $tmp1796.value;
uint64_t $tmp1798 = $tmp1720.value;
bool $tmp1799 = $tmp1797 >= $tmp1798;
panda$core$Bit $tmp1800 = (panda$core$Bit) {$tmp1799};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block18; else goto block4;
block20:;
uint64_t $tmp1802 = $tmp1796.value;
uint64_t $tmp1803 = $tmp1720.value;
bool $tmp1804 = $tmp1802 > $tmp1803;
panda$core$Bit $tmp1805 = (panda$core$Bit) {$tmp1804};
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block18; else goto block4;
block18:;
int64_t $tmp1807 = $tmp1791.value;
int64_t $tmp1808 = $tmp1719.value;
int64_t $tmp1809 = $tmp1807 + $tmp1808;
panda$core$Int64 $tmp1810 = (panda$core$Int64) {$tmp1809};
*(&local0) = $tmp1810;
goto block3;
block4:;
// line 978
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 989
panda$core$String$Index $tmp1811 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1812 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1811);
return $tmp1812;

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1001
panda$core$Int64* $tmp1813 = &param0->_length;
panda$core$Int64 $tmp1814 = *$tmp1813;
panda$core$Int64* $tmp1815 = &param1->_length;
panda$core$Int64 $tmp1816 = *$tmp1815;
int64_t $tmp1817 = $tmp1814.value;
int64_t $tmp1818 = $tmp1816.value;
bool $tmp1819 = $tmp1817 < $tmp1818;
panda$core$Bit $tmp1820 = (panda$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block1; else goto block2;
block1:;
// line 1002
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1004
panda$core$Int64 $tmp1822 = param2.value;
panda$core$Int64* $tmp1823 = &param0->_length;
panda$core$Int64 $tmp1824 = *$tmp1823;
panda$core$Int64* $tmp1825 = &param1->_length;
panda$core$Int64 $tmp1826 = *$tmp1825;
int64_t $tmp1827 = $tmp1824.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 - $tmp1828;
panda$core$Int64 $tmp1830 = (panda$core$Int64) {$tmp1829};
panda$core$Int64 $tmp1831 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1822, $tmp1830);
*(&local0) = $tmp1831;
// line 1005
panda$core$Int64 $tmp1832 = *(&local0);
panda$core$Int64 $tmp1833 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1834 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1835 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1836 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1832, $tmp1833, $tmp1834, $tmp1835);
panda$core$Int64 $tmp1837 = $tmp1836.start;
*(&local1) = $tmp1837;
panda$core$Int64 $tmp1838 = $tmp1836.end;
panda$core$Int64 $tmp1839 = $tmp1836.step;
panda$core$UInt64 $tmp1840 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1839);
panda$core$Int64 $tmp1841 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1839);
panda$core$UInt64 $tmp1842 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1841);
panda$core$Bit $tmp1843 = $tmp1836.inclusive;
bool $tmp1844 = $tmp1843.value;
panda$core$Int64 $tmp1845 = (panda$core$Int64) {0};
int64_t $tmp1846 = $tmp1839.value;
int64_t $tmp1847 = $tmp1845.value;
bool $tmp1848 = $tmp1846 >= $tmp1847;
panda$core$Bit $tmp1849 = (panda$core$Bit) {$tmp1848};
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block6; else goto block7;
block6:;
if ($tmp1844) goto block8; else goto block9;
block8:;
int64_t $tmp1851 = $tmp1837.value;
int64_t $tmp1852 = $tmp1838.value;
bool $tmp1853 = $tmp1851 <= $tmp1852;
panda$core$Bit $tmp1854 = (panda$core$Bit) {$tmp1853};
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block3; else goto block4;
block9:;
int64_t $tmp1856 = $tmp1837.value;
int64_t $tmp1857 = $tmp1838.value;
bool $tmp1858 = $tmp1856 < $tmp1857;
panda$core$Bit $tmp1859 = (panda$core$Bit) {$tmp1858};
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block3; else goto block4;
block7:;
if ($tmp1844) goto block10; else goto block11;
block10:;
int64_t $tmp1861 = $tmp1837.value;
int64_t $tmp1862 = $tmp1838.value;
bool $tmp1863 = $tmp1861 >= $tmp1862;
panda$core$Bit $tmp1864 = (panda$core$Bit) {$tmp1863};
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block3; else goto block4;
block11:;
int64_t $tmp1866 = $tmp1837.value;
int64_t $tmp1867 = $tmp1838.value;
bool $tmp1868 = $tmp1866 > $tmp1867;
panda$core$Bit $tmp1869 = (panda$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block3; else goto block4;
block3:;
// line 1006
panda$core$Int64 $tmp1871 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1872 = &param1->_length;
panda$core$Int64 $tmp1873 = *$tmp1872;
panda$core$Bit $tmp1874 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1875 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1871, $tmp1873, $tmp1874);
panda$core$Int64 $tmp1876 = $tmp1875.min;
*(&local2) = $tmp1876;
panda$core$Int64 $tmp1877 = $tmp1875.max;
panda$core$Bit $tmp1878 = $tmp1875.inclusive;
bool $tmp1879 = $tmp1878.value;
panda$core$Int64 $tmp1880 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1881 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1880);
if ($tmp1879) goto block15; else goto block16;
block15:;
int64_t $tmp1882 = $tmp1876.value;
int64_t $tmp1883 = $tmp1877.value;
bool $tmp1884 = $tmp1882 <= $tmp1883;
panda$core$Bit $tmp1885 = (panda$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block12; else goto block13;
block16:;
int64_t $tmp1887 = $tmp1876.value;
int64_t $tmp1888 = $tmp1877.value;
bool $tmp1889 = $tmp1887 < $tmp1888;
panda$core$Bit $tmp1890 = (panda$core$Bit) {$tmp1889};
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block12; else goto block13;
block12:;
// line 1007
panda$core$Char8** $tmp1892 = &param0->data;
panda$core$Char8* $tmp1893 = *$tmp1892;
panda$core$Int64 $tmp1894 = *(&local1);
panda$core$Int64 $tmp1895 = *(&local2);
int64_t $tmp1896 = $tmp1894.value;
int64_t $tmp1897 = $tmp1895.value;
int64_t $tmp1898 = $tmp1896 + $tmp1897;
panda$core$Int64 $tmp1899 = (panda$core$Int64) {$tmp1898};
int64_t $tmp1900 = $tmp1899.value;
panda$core$Char8 $tmp1901 = $tmp1893[$tmp1900];
panda$core$Char8** $tmp1902 = &param1->data;
panda$core$Char8* $tmp1903 = *$tmp1902;
panda$core$Int64 $tmp1904 = *(&local2);
int64_t $tmp1905 = $tmp1904.value;
panda$core$Char8 $tmp1906 = $tmp1903[$tmp1905];
panda$core$Bit $tmp1907 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1901, $tmp1906);
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block17; else goto block18;
block17:;
// line 1008
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1909 = *(&local2);
int64_t $tmp1910 = $tmp1877.value;
int64_t $tmp1911 = $tmp1909.value;
int64_t $tmp1912 = $tmp1910 - $tmp1911;
panda$core$Int64 $tmp1913 = (panda$core$Int64) {$tmp1912};
panda$core$UInt64 $tmp1914 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1913);
if ($tmp1879) goto block20; else goto block21;
block20:;
uint64_t $tmp1915 = $tmp1914.value;
uint64_t $tmp1916 = $tmp1881.value;
bool $tmp1917 = $tmp1915 >= $tmp1916;
panda$core$Bit $tmp1918 = (panda$core$Bit) {$tmp1917};
bool $tmp1919 = $tmp1918.value;
if ($tmp1919) goto block19; else goto block13;
block21:;
uint64_t $tmp1920 = $tmp1914.value;
uint64_t $tmp1921 = $tmp1881.value;
bool $tmp1922 = $tmp1920 > $tmp1921;
panda$core$Bit $tmp1923 = (panda$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block19; else goto block13;
block19:;
int64_t $tmp1925 = $tmp1909.value;
int64_t $tmp1926 = $tmp1880.value;
int64_t $tmp1927 = $tmp1925 + $tmp1926;
panda$core$Int64 $tmp1928 = (panda$core$Int64) {$tmp1927};
*(&local2) = $tmp1928;
goto block12;
block13:;
// line 1011
panda$core$Int64 $tmp1929 = *(&local1);
panda$core$String$Index $tmp1930 = panda$core$String$Index$init$panda$core$Int64($tmp1929);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1930, true }).value), true });
block5:;
panda$core$Int64 $tmp1931 = *(&local1);
if ($tmp1850) goto block23; else goto block24;
block23:;
int64_t $tmp1932 = $tmp1838.value;
int64_t $tmp1933 = $tmp1931.value;
int64_t $tmp1934 = $tmp1932 - $tmp1933;
panda$core$Int64 $tmp1935 = (panda$core$Int64) {$tmp1934};
panda$core$UInt64 $tmp1936 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1935);
if ($tmp1844) goto block25; else goto block26;
block25:;
uint64_t $tmp1937 = $tmp1936.value;
uint64_t $tmp1938 = $tmp1840.value;
bool $tmp1939 = $tmp1937 >= $tmp1938;
panda$core$Bit $tmp1940 = (panda$core$Bit) {$tmp1939};
bool $tmp1941 = $tmp1940.value;
if ($tmp1941) goto block22; else goto block4;
block26:;
uint64_t $tmp1942 = $tmp1936.value;
uint64_t $tmp1943 = $tmp1840.value;
bool $tmp1944 = $tmp1942 > $tmp1943;
panda$core$Bit $tmp1945 = (panda$core$Bit) {$tmp1944};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block22; else goto block4;
block24:;
int64_t $tmp1947 = $tmp1931.value;
int64_t $tmp1948 = $tmp1838.value;
int64_t $tmp1949 = $tmp1947 - $tmp1948;
panda$core$Int64 $tmp1950 = (panda$core$Int64) {$tmp1949};
panda$core$UInt64 $tmp1951 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1950);
if ($tmp1844) goto block27; else goto block28;
block27:;
uint64_t $tmp1952 = $tmp1951.value;
uint64_t $tmp1953 = $tmp1842.value;
bool $tmp1954 = $tmp1952 >= $tmp1953;
panda$core$Bit $tmp1955 = (panda$core$Bit) {$tmp1954};
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block22; else goto block4;
block28:;
uint64_t $tmp1957 = $tmp1951.value;
uint64_t $tmp1958 = $tmp1842.value;
bool $tmp1959 = $tmp1957 > $tmp1958;
panda$core$Bit $tmp1960 = (panda$core$Bit) {$tmp1959};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block22; else goto block4;
block22:;
int64_t $tmp1962 = $tmp1931.value;
int64_t $tmp1963 = $tmp1839.value;
int64_t $tmp1964 = $tmp1962 + $tmp1963;
panda$core$Int64 $tmp1965 = (panda$core$Int64) {$tmp1964};
*(&local1) = $tmp1965;
goto block3;
block4:;
// line 1013
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1024
panda$core$Matcher* $tmp1966 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1967;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1967, $tmp1966);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
// unreffing REF($1:panda.core.Matcher)
return $tmp1967;

}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1035
panda$core$Matcher* $tmp1968 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1969 = panda$core$Matcher$find$R$panda$core$Bit($tmp1968);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing REF($1:panda.core.Matcher)
return $tmp1969;

}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* param0, panda$core$RegularExpression* param1) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
// line 1049
panda$core$Matcher* $tmp1970 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
panda$core$Matcher* $tmp1971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
*(&local0) = $tmp1970;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
// unreffing REF($1:panda.core.Matcher)
// line 1050
panda$core$Matcher* $tmp1972 = *(&local0);
panda$core$Bit $tmp1973;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1973, $tmp1972);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block1; else goto block2;
block1:;
// line 1051
panda$collections$Array* $tmp1975 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1975);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$collections$Array* $tmp1976 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
*(&local1) = $tmp1975;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
// unreffing REF($18:panda.collections.Array<panda.core.String>)
// line 1052
panda$core$Int64 $tmp1977 = (panda$core$Int64) {1};
panda$core$Matcher* $tmp1978 = *(&local0);
panda$core$Int64 $tmp1979;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1979, $tmp1978);
panda$core$Bit $tmp1980 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1981 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1977, $tmp1979, $tmp1980);
panda$core$Int64 $tmp1982 = $tmp1981.min;
*(&local2) = $tmp1982;
panda$core$Int64 $tmp1983 = $tmp1981.max;
panda$core$Bit $tmp1984 = $tmp1981.inclusive;
bool $tmp1985 = $tmp1984.value;
panda$core$Int64 $tmp1986 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1987 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1986);
if ($tmp1985) goto block6; else goto block7;
block6:;
int64_t $tmp1988 = $tmp1982.value;
int64_t $tmp1989 = $tmp1983.value;
bool $tmp1990 = $tmp1988 <= $tmp1989;
panda$core$Bit $tmp1991 = (panda$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block3; else goto block4;
block7:;
int64_t $tmp1993 = $tmp1982.value;
int64_t $tmp1994 = $tmp1983.value;
bool $tmp1995 = $tmp1993 < $tmp1994;
panda$core$Bit $tmp1996 = (panda$core$Bit) {$tmp1995};
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block3; else goto block4;
block3:;
// line 1053
panda$collections$Array* $tmp1998 = *(&local1);
panda$core$Matcher* $tmp1999 = *(&local0);
panda$core$Int64 $tmp2000 = *(&local2);
panda$core$String* $tmp2001 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1999, $tmp2000);
panda$collections$Array$add$panda$collections$Array$T($tmp1998, ((panda$core$Object*) $tmp2001));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
// unreffing REF($62:panda.core.String?)
goto block5;
block5:;
panda$core$Int64 $tmp2002 = *(&local2);
int64_t $tmp2003 = $tmp1983.value;
int64_t $tmp2004 = $tmp2002.value;
int64_t $tmp2005 = $tmp2003 - $tmp2004;
panda$core$Int64 $tmp2006 = (panda$core$Int64) {$tmp2005};
panda$core$UInt64 $tmp2007 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2006);
if ($tmp1985) goto block9; else goto block10;
block9:;
uint64_t $tmp2008 = $tmp2007.value;
uint64_t $tmp2009 = $tmp1987.value;
bool $tmp2010 = $tmp2008 >= $tmp2009;
panda$core$Bit $tmp2011 = (panda$core$Bit) {$tmp2010};
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block8; else goto block4;
block10:;
uint64_t $tmp2013 = $tmp2007.value;
uint64_t $tmp2014 = $tmp1987.value;
bool $tmp2015 = $tmp2013 > $tmp2014;
panda$core$Bit $tmp2016 = (panda$core$Bit) {$tmp2015};
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block8; else goto block4;
block8:;
int64_t $tmp2018 = $tmp2002.value;
int64_t $tmp2019 = $tmp1986.value;
int64_t $tmp2020 = $tmp2018 + $tmp2019;
panda$core$Int64 $tmp2021 = (panda$core$Int64) {$tmp2020};
*(&local2) = $tmp2021;
goto block3;
block4:;
// line 1055
panda$collections$Array* $tmp2022 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp2022)));
panda$collections$Array* $tmp2023 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2023));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Matcher* $tmp2024 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) $tmp2022);
block2:;
// line 1057
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$core$Matcher* $tmp2025 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) NULL);

}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
// line 1068
panda$core$Bit $tmp2026 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s2027);
bool $tmp2028 = $tmp2026.value;
if ($tmp2028) goto block1; else goto block2;
block1:;
// line 1069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1071
panda$core$MutableString* $tmp2029 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2029);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
panda$core$MutableString* $tmp2030 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
*(&local0) = $tmp2029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
// unreffing REF($9:panda.core.MutableString)
// line 1072
panda$core$String$Index $tmp2031 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2031;
// line 1073
goto block3;
block3:;
// line 1074
panda$core$String$Index $tmp2032 = *(&local1);
panda$core$String$Index$nullable $tmp2033 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2032);
*(&local2) = $tmp2033;
// line 1075
panda$core$String$Index$nullable $tmp2034 = *(&local2);
panda$core$Bit $tmp2035 = panda$core$Bit$init$builtin_bit(!$tmp2034.nonnull);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block5; else goto block6;
block5:;
// line 1076
panda$core$MutableString* $tmp2037 = *(&local0);
panda$core$String$Index $tmp2038 = *(&local1);
panda$core$Bit $tmp2039 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2040 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2038, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2039);
panda$core$String* $tmp2041 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2040);
panda$core$MutableString$append$panda$core$String($tmp2037, $tmp2041);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
// unreffing REF($42:panda.core.String)
// line 1077
goto block4;
block6:;
// line 1079
panda$core$MutableString* $tmp2042 = *(&local0);
panda$core$String$Index $tmp2043 = *(&local1);
panda$core$String$Index$nullable $tmp2044 = *(&local2);
panda$core$Bit $tmp2045 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2046 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2043, ((panda$core$String$Index) $tmp2044.value), $tmp2045);
panda$core$String* $tmp2047 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2046);
panda$core$MutableString$append$panda$core$String($tmp2042, $tmp2047);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
// unreffing REF($56:panda.core.String)
// line 1080
panda$core$MutableString* $tmp2048 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp2048, param2);
// line 1081
panda$core$String$Index$nullable $tmp2049 = *(&local2);
panda$core$Int64 $tmp2050 = ((panda$core$String$Index) $tmp2049.value).value;
panda$core$Int64* $tmp2051 = &param1->_length;
panda$core$Int64 $tmp2052 = *$tmp2051;
int64_t $tmp2053 = $tmp2050.value;
int64_t $tmp2054 = $tmp2052.value;
int64_t $tmp2055 = $tmp2053 + $tmp2054;
panda$core$Int64 $tmp2056 = (panda$core$Int64) {$tmp2055};
panda$core$String$Index $tmp2057 = panda$core$String$Index$init$panda$core$Int64($tmp2056);
*(&local1) = $tmp2057;
goto block3;
block4:;
// line 1083
panda$core$MutableString* $tmp2058 = *(&local0);
panda$core$String* $tmp2059 = panda$core$MutableString$finish$R$panda$core$String($tmp2058);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
// unreffing REF($79:panda.core.String)
panda$core$MutableString* $tmp2060 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2059;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 1097
panda$core$Bit $tmp2061 = panda$core$Bit$init$builtin_bit(true);
panda$core$String* $tmp2062 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(param0, param1, param2, $tmp2061);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing REF($2:panda.core.String)
return $tmp2062;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
// line 1102
panda$core$MutableString* $tmp2063 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2063);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
panda$core$MutableString* $tmp2064 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
*(&local0) = $tmp2063;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing REF($1:panda.core.MutableString)
// line 1103
panda$core$Matcher* $tmp2065 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
panda$core$Matcher* $tmp2066 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
*(&local1) = $tmp2065;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing REF($14:panda.core.Matcher)
// line 1104
goto block1;
block1:;
panda$core$Matcher* $tmp2067 = *(&local1);
panda$core$Bit $tmp2068 = panda$core$Matcher$find$R$panda$core$Bit($tmp2067);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block2; else goto block3;
block2:;
// line 1105
panda$core$Matcher* $tmp2070 = *(&local1);
panda$core$MutableString* $tmp2071 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2070, $tmp2071, param2, param3);
goto block1;
block3:;
// line 1107
panda$core$Matcher* $tmp2072 = *(&local1);
panda$core$MutableString* $tmp2073 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2072, $tmp2073);
// line 1108
panda$core$MutableString* $tmp2074 = *(&local0);
panda$core$String* $tmp2075 = panda$core$MutableString$finish$R$panda$core$String($tmp2074);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
// unreffing REF($42:panda.core.String)
panda$core$Matcher* $tmp2076 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2077 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2075;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 1129
panda$core$MutableString* $tmp2078 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2078);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
panda$core$MutableString* $tmp2079 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
*(&local0) = $tmp2078;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
// unreffing REF($1:panda.core.MutableString)
// line 1130
panda$core$Matcher* $tmp2080 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
panda$core$Matcher* $tmp2081 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
*(&local1) = $tmp2080;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($14:panda.core.Matcher)
// line 1131
goto block1;
block1:;
panda$core$Matcher* $tmp2082 = *(&local1);
panda$core$Bit $tmp2083 = panda$core$Matcher$find$R$panda$core$Bit($tmp2082);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block2; else goto block3;
block2:;
// line 1132
panda$core$Matcher* $tmp2085 = *(&local1);
panda$core$MutableString* $tmp2086 = *(&local0);
panda$core$Matcher* $tmp2087 = *(&local1);
panda$core$Int64 $tmp2088 = (panda$core$Int64) {0};
panda$core$String* $tmp2089 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2087, $tmp2088);
panda$core$Int8** $tmp2090 = &param2->pointer;
panda$core$Int8* $tmp2091 = *$tmp2090;
panda$core$Object** $tmp2092 = &param2->target;
panda$core$Object* $tmp2093 = *$tmp2092;
bool $tmp2094 = $tmp2093 != ((panda$core$Object*) NULL);
if ($tmp2094) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp2096 = (($fn2095) $tmp2091)($tmp2089);
*(&local2) = $tmp2096;
goto block6;
block4:;
panda$core$Object* $tmp2098 = (($fn2097) $tmp2091)($tmp2093, $tmp2089);
*(&local2) = $tmp2098;
goto block6;
block6:;
panda$core$Object* $tmp2099 = *(&local2);
$fn2101 $tmp2100 = ($fn2101) $tmp2099->$class->vtable[0];
panda$core$String* $tmp2102 = $tmp2100($tmp2099);
panda$core$Bit $tmp2103 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2085, $tmp2086, $tmp2102, $tmp2103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2099);
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
// unreffing REF($36:panda.core.String?)
goto block1;
block3:;
// line 1134
panda$core$Matcher* $tmp2104 = *(&local1);
panda$core$MutableString* $tmp2105 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2104, $tmp2105);
// line 1135
panda$core$MutableString* $tmp2106 = *(&local0);
panda$core$String* $tmp2107 = panda$core$MutableString$convert$R$panda$core$String($tmp2106);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($74:panda.core.String)
panda$core$Matcher* $tmp2108 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2107;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Object* local4 = NULL;
// line 1149
panda$core$MutableString* $tmp2110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2110);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
panda$core$MutableString* $tmp2111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
*(&local0) = $tmp2110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// unreffing REF($1:panda.core.MutableString)
// line 1150
panda$core$Matcher* $tmp2112 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
panda$core$Matcher* $tmp2113 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
*(&local1) = $tmp2112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing REF($14:panda.core.Matcher)
// line 1151
goto block1;
block1:;
panda$core$Matcher* $tmp2114 = *(&local1);
panda$core$Bit $tmp2115 = panda$core$Matcher$find$R$panda$core$Bit($tmp2114);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block2; else goto block3;
block2:;
// line 1152
panda$collections$Array* $tmp2117 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2117);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
panda$collections$Array* $tmp2118 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
*(&local2) = $tmp2117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// unreffing REF($32:panda.collections.Array<panda.core.String?>)
// line 1153
panda$core$Int64 $tmp2119 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp2120 = *(&local1);
panda$core$Int64 $tmp2121;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2121, $tmp2120);
panda$core$Bit $tmp2122 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2123 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2119, $tmp2121, $tmp2122);
panda$core$Int64 $tmp2124 = $tmp2123.min;
*(&local3) = $tmp2124;
panda$core$Int64 $tmp2125 = $tmp2123.max;
panda$core$Bit $tmp2126 = $tmp2123.inclusive;
bool $tmp2127 = $tmp2126.value;
panda$core$Int64 $tmp2128 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2129 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2128);
if ($tmp2127) goto block7; else goto block8;
block7:;
int64_t $tmp2130 = $tmp2124.value;
int64_t $tmp2131 = $tmp2125.value;
bool $tmp2132 = $tmp2130 <= $tmp2131;
panda$core$Bit $tmp2133 = (panda$core$Bit) {$tmp2132};
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block4; else goto block5;
block8:;
int64_t $tmp2135 = $tmp2124.value;
int64_t $tmp2136 = $tmp2125.value;
bool $tmp2137 = $tmp2135 < $tmp2136;
panda$core$Bit $tmp2138 = (panda$core$Bit) {$tmp2137};
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block4; else goto block5;
block4:;
// line 1154
panda$collections$Array* $tmp2140 = *(&local2);
panda$core$Matcher* $tmp2141 = *(&local1);
panda$core$Int64 $tmp2142 = *(&local3);
panda$core$String* $tmp2143 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2141, $tmp2142);
panda$collections$Array$add$panda$collections$Array$T($tmp2140, ((panda$core$Object*) $tmp2143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
// unreffing REF($76:panda.core.String?)
goto block6;
block6:;
panda$core$Int64 $tmp2144 = *(&local3);
int64_t $tmp2145 = $tmp2125.value;
int64_t $tmp2146 = $tmp2144.value;
int64_t $tmp2147 = $tmp2145 - $tmp2146;
panda$core$Int64 $tmp2148 = (panda$core$Int64) {$tmp2147};
panda$core$UInt64 $tmp2149 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2148);
if ($tmp2127) goto block10; else goto block11;
block10:;
uint64_t $tmp2150 = $tmp2149.value;
uint64_t $tmp2151 = $tmp2129.value;
bool $tmp2152 = $tmp2150 >= $tmp2151;
panda$core$Bit $tmp2153 = (panda$core$Bit) {$tmp2152};
bool $tmp2154 = $tmp2153.value;
if ($tmp2154) goto block9; else goto block5;
block11:;
uint64_t $tmp2155 = $tmp2149.value;
uint64_t $tmp2156 = $tmp2129.value;
bool $tmp2157 = $tmp2155 > $tmp2156;
panda$core$Bit $tmp2158 = (panda$core$Bit) {$tmp2157};
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block9; else goto block5;
block9:;
int64_t $tmp2160 = $tmp2144.value;
int64_t $tmp2161 = $tmp2128.value;
int64_t $tmp2162 = $tmp2160 + $tmp2161;
panda$core$Int64 $tmp2163 = (panda$core$Int64) {$tmp2162};
*(&local3) = $tmp2163;
goto block4;
block5:;
// line 1156
panda$core$Matcher* $tmp2164 = *(&local1);
panda$core$MutableString* $tmp2165 = *(&local0);
panda$collections$Array* $tmp2166 = *(&local2);
panda$core$Int8** $tmp2167 = &param2->pointer;
panda$core$Int8* $tmp2168 = *$tmp2167;
panda$core$Object** $tmp2169 = &param2->target;
panda$core$Object* $tmp2170 = *$tmp2169;
bool $tmp2171 = $tmp2170 != ((panda$core$Object*) NULL);
if ($tmp2171) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp2173 = (($fn2172) $tmp2168)(((panda$collections$ListView*) $tmp2166));
*(&local4) = $tmp2173;
goto block14;
block12:;
panda$core$Object* $tmp2175 = (($fn2174) $tmp2168)($tmp2170, ((panda$collections$ListView*) $tmp2166));
*(&local4) = $tmp2175;
goto block14;
block14:;
panda$core$Object* $tmp2176 = *(&local4);
$fn2178 $tmp2177 = ($fn2178) $tmp2176->$class->vtable[0];
panda$core$String* $tmp2179 = $tmp2177($tmp2176);
panda$core$Bit $tmp2180 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2164, $tmp2165, $tmp2179, $tmp2180);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2176);
// unreffing REF($128:panda.core.Object)
panda$collections$Array* $tmp2181 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
// unreffing groups
*(&local2) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 1158
panda$core$Matcher* $tmp2182 = *(&local1);
panda$core$MutableString* $tmp2183 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2182, $tmp2183);
// line 1159
panda$core$MutableString* $tmp2184 = *(&local0);
panda$core$String* $tmp2185 = panda$core$MutableString$convert$R$panda$core$String($tmp2184);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($151:panda.core.String)
panda$core$Matcher* $tmp2186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2185;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1163
panda$core$Bit $tmp2188 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2189 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(param0, param1, $tmp2188);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Index>)
return $tmp2189;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Bit param2) {

// line 1167
panda$core$String$MatchIterator* $tmp2190 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp2190, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2190)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($1:panda.core.String.MatchIterator)
return ((panda$collections$Iterator*) $tmp2190);

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1171
panda$core$Bit $tmp2191 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2192 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(param0, param1, $tmp2191);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Match>)
return $tmp2192;

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Bit param2) {

// line 1175
panda$core$String$RegexMatchIterator* $tmp2193 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp2193, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2193)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
// unreffing REF($1:panda.core.String.RegexMatchIterator)
return ((panda$collections$Iterator*) $tmp2193);

}
panda$core$String$Index panda$core$String$get_start$R$panda$core$String$Index(panda$core$String* param0) {

// line 1182
panda$core$Int64 $tmp2194 = (panda$core$Int64) {0};
panda$core$String$Index $tmp2195 = panda$core$String$Index$init$panda$core$Int64($tmp2194);
return $tmp2195;

}
panda$core$String$Index panda$core$String$get_end$R$panda$core$String$Index(panda$core$String* param0) {

// line 1189
panda$core$Int64* $tmp2196 = &param0->_length;
panda$core$Int64 $tmp2197 = *$tmp2196;
panda$core$String$Index $tmp2198 = panda$core$String$Index$init$panda$core$Int64($tmp2197);
return $tmp2198;

}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

int64_t local0;
// line 1199
panda$core$Int64 $tmp2199 = param1.value;
panda$core$Int64* $tmp2200 = &param0->_length;
panda$core$Int64 $tmp2201 = *$tmp2200;
int64_t $tmp2202 = $tmp2199.value;
int64_t $tmp2203 = $tmp2201.value;
bool $tmp2204 = $tmp2202 < $tmp2203;
panda$core$Bit $tmp2205 = (panda$core$Bit) {$tmp2204};
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2207 = (panda$core$Int64) {1199};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2208, $tmp2207);
abort(); // unreachable
block1:;
// line 1200
panda$core$Char8** $tmp2209 = &param0->data;
panda$core$Char8* $tmp2210 = *$tmp2209;
panda$core$Int64 $tmp2211 = param1.value;
int64_t $tmp2212 = $tmp2211.value;
panda$core$Char8 $tmp2213 = $tmp2210[$tmp2212];
uint8_t $tmp2214 = $tmp2213.value;
int64_t $tmp2215 = ((int64_t) $tmp2214) & 255;
*(&local0) = $tmp2215;
// line 1201
int64_t $tmp2216 = *(&local0);
bool $tmp2217 = $tmp2216 >= 240;
panda$core$Bit $tmp2218 = panda$core$Bit$init$builtin_bit($tmp2217);
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block3; else goto block4;
block3:;
// line 1202
panda$core$Int64 $tmp2220 = param1.value;
panda$core$Int64 $tmp2221 = (panda$core$Int64) {4};
int64_t $tmp2222 = $tmp2220.value;
int64_t $tmp2223 = $tmp2221.value;
int64_t $tmp2224 = $tmp2222 + $tmp2223;
panda$core$Int64 $tmp2225 = (panda$core$Int64) {$tmp2224};
panda$core$String$Index $tmp2226 = panda$core$String$Index$init$panda$core$Int64($tmp2225);
return $tmp2226;
block4:;
// line 1204
int64_t $tmp2227 = *(&local0);
bool $tmp2228 = $tmp2227 >= 224;
panda$core$Bit $tmp2229 = panda$core$Bit$init$builtin_bit($tmp2228);
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block5; else goto block6;
block5:;
// line 1205
panda$core$Int64 $tmp2231 = param1.value;
panda$core$Int64 $tmp2232 = (panda$core$Int64) {3};
int64_t $tmp2233 = $tmp2231.value;
int64_t $tmp2234 = $tmp2232.value;
int64_t $tmp2235 = $tmp2233 + $tmp2234;
panda$core$Int64 $tmp2236 = (panda$core$Int64) {$tmp2235};
panda$core$String$Index $tmp2237 = panda$core$String$Index$init$panda$core$Int64($tmp2236);
return $tmp2237;
block6:;
// line 1207
int64_t $tmp2238 = *(&local0);
bool $tmp2239 = $tmp2238 >= 192;
panda$core$Bit $tmp2240 = panda$core$Bit$init$builtin_bit($tmp2239);
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block7; else goto block8;
block7:;
// line 1208
panda$core$Int64 $tmp2242 = param1.value;
panda$core$Int64 $tmp2243 = (panda$core$Int64) {2};
int64_t $tmp2244 = $tmp2242.value;
int64_t $tmp2245 = $tmp2243.value;
int64_t $tmp2246 = $tmp2244 + $tmp2245;
panda$core$Int64 $tmp2247 = (panda$core$Int64) {$tmp2246};
panda$core$String$Index $tmp2248 = panda$core$String$Index$init$panda$core$Int64($tmp2247);
return $tmp2248;
block8:;
// line 1210
panda$core$Int64 $tmp2249 = param1.value;
panda$core$Int64 $tmp2250 = (panda$core$Int64) {1};
int64_t $tmp2251 = $tmp2249.value;
int64_t $tmp2252 = $tmp2250.value;
int64_t $tmp2253 = $tmp2251 + $tmp2252;
panda$core$Int64 $tmp2254 = (panda$core$Int64) {$tmp2253};
panda$core$String$Index $tmp2255 = panda$core$String$Index$init$panda$core$Int64($tmp2254);
return $tmp2255;

}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
// line 1220
panda$core$Int64 $tmp2256 = param1.value;
panda$core$Int64 $tmp2257 = (panda$core$Int64) {0};
int64_t $tmp2258 = $tmp2256.value;
int64_t $tmp2259 = $tmp2257.value;
bool $tmp2260 = $tmp2258 > $tmp2259;
panda$core$Bit $tmp2261 = (panda$core$Bit) {$tmp2260};
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2263 = (panda$core$Int64) {1220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2264, $tmp2263);
abort(); // unreachable
block1:;
// line 1221
panda$core$Int64 $tmp2265 = param1.value;
panda$core$Int64 $tmp2266 = (panda$core$Int64) {1};
int64_t $tmp2267 = $tmp2265.value;
int64_t $tmp2268 = $tmp2266.value;
int64_t $tmp2269 = $tmp2267 - $tmp2268;
panda$core$Int64 $tmp2270 = (panda$core$Int64) {$tmp2269};
*(&local0) = $tmp2270;
// line 1222
goto block3;
block3:;
panda$core$Char8** $tmp2271 = &param0->data;
panda$core$Char8* $tmp2272 = *$tmp2271;
panda$core$Int64 $tmp2273 = *(&local0);
int64_t $tmp2274 = $tmp2273.value;
panda$core$Char8 $tmp2275 = $tmp2272[$tmp2274];
uint8_t $tmp2276 = $tmp2275.value;
int64_t $tmp2277 = ((int64_t) $tmp2276) & 255;
bool $tmp2278 = $tmp2277 >= 128;
panda$core$Char8** $tmp2279 = &param0->data;
panda$core$Char8* $tmp2280 = *$tmp2279;
panda$core$Int64 $tmp2281 = *(&local0);
int64_t $tmp2282 = $tmp2281.value;
panda$core$Char8 $tmp2283 = $tmp2280[$tmp2282];
uint8_t $tmp2284 = $tmp2283.value;
int64_t $tmp2285 = ((int64_t) $tmp2284) & 255;
bool $tmp2286 = $tmp2285 < 192;
bool $tmp2287 = $tmp2278 & $tmp2286;
panda$core$Bit $tmp2288 = panda$core$Bit$init$builtin_bit($tmp2287);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block4; else goto block5;
block4:;
// line 1224
panda$core$Int64 $tmp2290 = *(&local0);
panda$core$Int64 $tmp2291 = (panda$core$Int64) {1};
int64_t $tmp2292 = $tmp2290.value;
int64_t $tmp2293 = $tmp2291.value;
int64_t $tmp2294 = $tmp2292 - $tmp2293;
panda$core$Int64 $tmp2295 = (panda$core$Int64) {$tmp2294};
*(&local0) = $tmp2295;
goto block3;
block5:;
// line 1226
panda$core$Int64 $tmp2296 = *(&local0);
panda$core$String$Index $tmp2297 = panda$core$String$Index$init$panda$core$Int64($tmp2296);
return $tmp2297;

}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1, panda$core$Int64 param2) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1236
*(&local0) = param1;
// line 1237
panda$core$Int64 $tmp2298 = (panda$core$Int64) {0};
int64_t $tmp2299 = param2.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 > $tmp2300;
panda$core$Bit $tmp2302 = (panda$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block1; else goto block3;
block1:;
// line 1238
panda$core$Int64 $tmp2304 = (panda$core$Int64) {0};
panda$core$Bit $tmp2305 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2306 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2304, param2, $tmp2305);
panda$core$Int64 $tmp2307 = $tmp2306.min;
*(&local1) = $tmp2307;
panda$core$Int64 $tmp2308 = $tmp2306.max;
panda$core$Bit $tmp2309 = $tmp2306.inclusive;
bool $tmp2310 = $tmp2309.value;
panda$core$Int64 $tmp2311 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2312 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2311);
if ($tmp2310) goto block7; else goto block8;
block7:;
int64_t $tmp2313 = $tmp2307.value;
int64_t $tmp2314 = $tmp2308.value;
bool $tmp2315 = $tmp2313 <= $tmp2314;
panda$core$Bit $tmp2316 = (panda$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block4; else goto block5;
block8:;
int64_t $tmp2318 = $tmp2307.value;
int64_t $tmp2319 = $tmp2308.value;
bool $tmp2320 = $tmp2318 < $tmp2319;
panda$core$Bit $tmp2321 = (panda$core$Bit) {$tmp2320};
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block4; else goto block5;
block4:;
// line 1239
panda$core$String$Index $tmp2323 = *(&local0);
panda$core$String$Index $tmp2324 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2323);
*(&local0) = $tmp2324;
goto block6;
block6:;
panda$core$Int64 $tmp2325 = *(&local1);
int64_t $tmp2326 = $tmp2308.value;
int64_t $tmp2327 = $tmp2325.value;
int64_t $tmp2328 = $tmp2326 - $tmp2327;
panda$core$Int64 $tmp2329 = (panda$core$Int64) {$tmp2328};
panda$core$UInt64 $tmp2330 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2329);
if ($tmp2310) goto block10; else goto block11;
block10:;
uint64_t $tmp2331 = $tmp2330.value;
uint64_t $tmp2332 = $tmp2312.value;
bool $tmp2333 = $tmp2331 >= $tmp2332;
panda$core$Bit $tmp2334 = (panda$core$Bit) {$tmp2333};
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block9; else goto block5;
block11:;
uint64_t $tmp2336 = $tmp2330.value;
uint64_t $tmp2337 = $tmp2312.value;
bool $tmp2338 = $tmp2336 > $tmp2337;
panda$core$Bit $tmp2339 = (panda$core$Bit) {$tmp2338};
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block9; else goto block5;
block9:;
int64_t $tmp2341 = $tmp2325.value;
int64_t $tmp2342 = $tmp2311.value;
int64_t $tmp2343 = $tmp2341 + $tmp2342;
panda$core$Int64 $tmp2344 = (panda$core$Int64) {$tmp2343};
*(&local1) = $tmp2344;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1243
panda$core$Int64 $tmp2345 = (panda$core$Int64) {0};
panda$core$Int64 $tmp2346 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2347 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2348 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2345, param2, $tmp2346, $tmp2347);
panda$core$Int64 $tmp2349 = $tmp2348.start;
*(&local2) = $tmp2349;
panda$core$Int64 $tmp2350 = $tmp2348.end;
panda$core$Int64 $tmp2351 = $tmp2348.step;
panda$core$UInt64 $tmp2352 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2351);
panda$core$Int64 $tmp2353 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2351);
panda$core$UInt64 $tmp2354 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2353);
panda$core$Bit $tmp2355 = $tmp2348.inclusive;
bool $tmp2356 = $tmp2355.value;
panda$core$Int64 $tmp2357 = (panda$core$Int64) {0};
int64_t $tmp2358 = $tmp2351.value;
int64_t $tmp2359 = $tmp2357.value;
bool $tmp2360 = $tmp2358 >= $tmp2359;
panda$core$Bit $tmp2361 = (panda$core$Bit) {$tmp2360};
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block15; else goto block16;
block15:;
if ($tmp2356) goto block17; else goto block18;
block17:;
int64_t $tmp2363 = $tmp2349.value;
int64_t $tmp2364 = $tmp2350.value;
bool $tmp2365 = $tmp2363 <= $tmp2364;
panda$core$Bit $tmp2366 = (panda$core$Bit) {$tmp2365};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block12; else goto block13;
block18:;
int64_t $tmp2368 = $tmp2349.value;
int64_t $tmp2369 = $tmp2350.value;
bool $tmp2370 = $tmp2368 < $tmp2369;
panda$core$Bit $tmp2371 = (panda$core$Bit) {$tmp2370};
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block12; else goto block13;
block16:;
if ($tmp2356) goto block19; else goto block20;
block19:;
int64_t $tmp2373 = $tmp2349.value;
int64_t $tmp2374 = $tmp2350.value;
bool $tmp2375 = $tmp2373 >= $tmp2374;
panda$core$Bit $tmp2376 = (panda$core$Bit) {$tmp2375};
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block12; else goto block13;
block20:;
int64_t $tmp2378 = $tmp2349.value;
int64_t $tmp2379 = $tmp2350.value;
bool $tmp2380 = $tmp2378 > $tmp2379;
panda$core$Bit $tmp2381 = (panda$core$Bit) {$tmp2380};
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block12; else goto block13;
block12:;
// line 1244
panda$core$String$Index $tmp2383 = *(&local0);
panda$core$String$Index $tmp2384 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2383);
*(&local0) = $tmp2384;
goto block14;
block14:;
panda$core$Int64 $tmp2385 = *(&local2);
if ($tmp2362) goto block22; else goto block23;
block22:;
int64_t $tmp2386 = $tmp2350.value;
int64_t $tmp2387 = $tmp2385.value;
int64_t $tmp2388 = $tmp2386 - $tmp2387;
panda$core$Int64 $tmp2389 = (panda$core$Int64) {$tmp2388};
panda$core$UInt64 $tmp2390 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2389);
if ($tmp2356) goto block24; else goto block25;
block24:;
uint64_t $tmp2391 = $tmp2390.value;
uint64_t $tmp2392 = $tmp2352.value;
bool $tmp2393 = $tmp2391 >= $tmp2392;
panda$core$Bit $tmp2394 = (panda$core$Bit) {$tmp2393};
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block21; else goto block13;
block25:;
uint64_t $tmp2396 = $tmp2390.value;
uint64_t $tmp2397 = $tmp2352.value;
bool $tmp2398 = $tmp2396 > $tmp2397;
panda$core$Bit $tmp2399 = (panda$core$Bit) {$tmp2398};
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block21; else goto block13;
block23:;
int64_t $tmp2401 = $tmp2385.value;
int64_t $tmp2402 = $tmp2350.value;
int64_t $tmp2403 = $tmp2401 - $tmp2402;
panda$core$Int64 $tmp2404 = (panda$core$Int64) {$tmp2403};
panda$core$UInt64 $tmp2405 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2404);
if ($tmp2356) goto block26; else goto block27;
block26:;
uint64_t $tmp2406 = $tmp2405.value;
uint64_t $tmp2407 = $tmp2354.value;
bool $tmp2408 = $tmp2406 >= $tmp2407;
panda$core$Bit $tmp2409 = (panda$core$Bit) {$tmp2408};
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block21; else goto block13;
block27:;
uint64_t $tmp2411 = $tmp2405.value;
uint64_t $tmp2412 = $tmp2354.value;
bool $tmp2413 = $tmp2411 > $tmp2412;
panda$core$Bit $tmp2414 = (panda$core$Bit) {$tmp2413};
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block21; else goto block13;
block21:;
int64_t $tmp2416 = $tmp2385.value;
int64_t $tmp2417 = $tmp2351.value;
int64_t $tmp2418 = $tmp2416 + $tmp2417;
panda$core$Int64 $tmp2419 = (panda$core$Int64) {$tmp2418};
*(&local2) = $tmp2419;
goto block12;
block13:;
goto block2;
block2:;
// line 1247
panda$core$String$Index $tmp2420 = *(&local0);
return $tmp2420;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1260
panda$core$Int32 $tmp2421 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2422 = panda$core$Char32$init$panda$core$Int32($tmp2421);
panda$core$String* $tmp2423 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2422);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
// unreffing REF($3:panda.core.String)
return $tmp2423;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1274
panda$core$Int64 $tmp2424 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2425 = $tmp2424.value;
int64_t $tmp2426 = param1.value;
bool $tmp2427 = $tmp2425 >= $tmp2426;
panda$core$Bit $tmp2428 = (panda$core$Bit) {$tmp2427};
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block1; else goto block2;
block1:;
// line 1275
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1277
panda$core$Int64 $tmp2430 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2431 = param1.value;
int64_t $tmp2432 = $tmp2430.value;
int64_t $tmp2433 = $tmp2431 - $tmp2432;
panda$core$Int64 $tmp2434 = (panda$core$Int64) {$tmp2433};
panda$core$String* $tmp2435 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2434);
panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp2435);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing REF($18:panda.core.String)
return $tmp2436;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1290
panda$core$Int32 $tmp2437 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2438 = panda$core$Char32$init$panda$core$Int32($tmp2437);
panda$core$String* $tmp2439 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2438);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
// unreffing REF($3:panda.core.String)
return $tmp2439;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1304
panda$core$Int64 $tmp2440 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2441 = $tmp2440.value;
int64_t $tmp2442 = param1.value;
bool $tmp2443 = $tmp2441 >= $tmp2442;
panda$core$Bit $tmp2444 = (panda$core$Bit) {$tmp2443};
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block1; else goto block2;
block1:;
// line 1305
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1307
panda$core$Int64 $tmp2446 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2447 = param1.value;
int64_t $tmp2448 = $tmp2446.value;
int64_t $tmp2449 = $tmp2447 - $tmp2448;
panda$core$Int64 $tmp2450 = (panda$core$Int64) {$tmp2449};
panda$core$String* $tmp2451 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2450);
panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
// unreffing REF($18:panda.core.String)
return $tmp2452;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1322
panda$core$Int32 $tmp2453 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2454 = panda$core$Char32$init$panda$core$Int32($tmp2453);
panda$core$String* $tmp2455 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// unreffing REF($3:panda.core.String)
return $tmp2455;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1338
panda$core$Int64 $tmp2456 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2457 = $tmp2456.value;
int64_t $tmp2458 = param1.value;
bool $tmp2459 = $tmp2457 >= $tmp2458;
panda$core$Bit $tmp2460 = (panda$core$Bit) {$tmp2459};
bool $tmp2461 = $tmp2460.value;
if ($tmp2461) goto block1; else goto block2;
block1:;
// line 1339
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1341
panda$core$Int64 $tmp2462 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2463 = param1.value;
int64_t $tmp2464 = $tmp2462.value;
int64_t $tmp2465 = $tmp2463 - $tmp2464;
panda$core$Int64 $tmp2466 = (panda$core$Int64) {$tmp2465};
*(&local0) = $tmp2466;
// line 1342
panda$core$Int64 $tmp2467 = *(&local0);
panda$core$Int64 $tmp2468 = (panda$core$Int64) {2};
int64_t $tmp2469 = $tmp2467.value;
int64_t $tmp2470 = $tmp2468.value;
int64_t $tmp2471 = $tmp2469 / $tmp2470;
panda$core$Int64 $tmp2472 = (panda$core$Int64) {$tmp2471};
*(&local1) = $tmp2472;
// line 1343
panda$core$Int64 $tmp2473 = *(&local0);
panda$core$Int64 $tmp2474 = *(&local1);
int64_t $tmp2475 = $tmp2473.value;
int64_t $tmp2476 = $tmp2474.value;
int64_t $tmp2477 = $tmp2475 - $tmp2476;
panda$core$Int64 $tmp2478 = (panda$core$Int64) {$tmp2477};
*(&local2) = $tmp2478;
// line 1344
panda$core$Int64 $tmp2479 = *(&local1);
panda$core$String* $tmp2480 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2479);
panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, param0);
panda$core$Int64 $tmp2482 = *(&local2);
panda$core$String* $tmp2483 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2482);
panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, $tmp2483);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing REF($37:panda.core.String)
return $tmp2484;

}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1355
panda$core$Int64 $tmp2485 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2486 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2485);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2486;

}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
panda$core$Bit local3;
// line 1368
panda$collections$Array* $tmp2487 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2487);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
panda$collections$Array* $tmp2488 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
*(&local0) = $tmp2487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 1369
panda$core$String$Index $tmp2489 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2489;
// line 1370
goto block1;
block1:;
// line 1371
// line 1372
panda$core$Int64* $tmp2490 = &param1->_length;
panda$core$Int64 $tmp2491 = *$tmp2490;
panda$core$Int64 $tmp2492 = (panda$core$Int64) {0};
panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2491, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block3; else goto block5;
block3:;
// line 1373
panda$core$String$Index $tmp2495 = *(&local1);
panda$core$String$Index $tmp2496 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2495);
*(&local2) = ((panda$core$String$Index$nullable) { $tmp2496, true });
goto block4;
block5:;
// line 1
// line 1376
panda$core$String$Index $tmp2497 = *(&local1);
panda$core$String$Index$nullable $tmp2498 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2497);
*(&local2) = $tmp2498;
goto block4;
block4:;
// line 1378
panda$core$String$Index$nullable $tmp2499 = *(&local2);
panda$core$Bit $tmp2500 = panda$core$Bit$init$builtin_bit(!$tmp2499.nonnull);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2500;
goto block10;
block9:;
panda$collections$Array* $tmp2502 = *(&local0);
ITable* $tmp2503 = ((panda$collections$CollectionView*) $tmp2502)->$class->itable;
while ($tmp2503->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2503 = $tmp2503->next;
}
$fn2505 $tmp2504 = $tmp2503->methods[0];
panda$core$Int64 $tmp2506 = $tmp2504(((panda$collections$CollectionView*) $tmp2502));
panda$core$Int64 $tmp2507 = (panda$core$Int64) {1};
int64_t $tmp2508 = param2.value;
int64_t $tmp2509 = $tmp2507.value;
int64_t $tmp2510 = $tmp2508 - $tmp2509;
panda$core$Int64 $tmp2511 = (panda$core$Int64) {$tmp2510};
panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2506, $tmp2511);
*(&local3) = $tmp2512;
goto block10;
block10:;
panda$core$Bit $tmp2513 = *(&local3);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block6; else goto block7;
block6:;
// line 1379
panda$collections$Array* $tmp2515 = *(&local0);
panda$core$String$Index $tmp2516 = *(&local1);
panda$core$Bit $tmp2517 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2518 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2516, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2517);
panda$core$String* $tmp2519 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2518);
panda$collections$Array$add$panda$collections$Array$T($tmp2515, ((panda$core$Object*) $tmp2519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
// unreffing REF($69:panda.core.String)
// line 1380
goto block2;
block7:;
// line 1382
panda$collections$Array* $tmp2520 = *(&local0);
panda$core$String$Index $tmp2521 = *(&local1);
panda$core$String$Index$nullable $tmp2522 = *(&local2);
panda$core$Bit $tmp2523 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2524 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2521, ((panda$core$String$Index) $tmp2522.value), $tmp2523);
panda$core$String* $tmp2525 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2524);
panda$collections$Array$add$panda$collections$Array$T($tmp2520, ((panda$core$Object*) $tmp2525));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
// unreffing REF($85:panda.core.String)
// line 1383
panda$core$String$Index$nullable $tmp2526 = *(&local2);
panda$core$Int64 $tmp2527 = ((panda$core$String$Index) $tmp2526.value).value;
panda$core$Int64* $tmp2528 = &param1->_length;
panda$core$Int64 $tmp2529 = *$tmp2528;
int64_t $tmp2530 = $tmp2527.value;
int64_t $tmp2531 = $tmp2529.value;
int64_t $tmp2532 = $tmp2530 + $tmp2531;
panda$core$Int64 $tmp2533 = (panda$core$Int64) {$tmp2532};
panda$core$String$Index $tmp2534 = panda$core$String$Index$init$panda$core$Int64($tmp2533);
*(&local1) = $tmp2534;
goto block1;
block2:;
// line 1385
panda$collections$Array* $tmp2535 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
panda$collections$Array* $tmp2536 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2535;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$String$Index local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$Int64 $tmp2537 = (panda$core$Int64) {0};
int64_t $tmp2538 = param2.value;
int64_t $tmp2539 = $tmp2537.value;
bool $tmp2540 = $tmp2538 > $tmp2539;
panda$core$Bit $tmp2541 = (panda$core$Bit) {$tmp2540};
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2543 = (panda$core$Int64) {1399};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2544, $tmp2543, &$s2545);
abort(); // unreachable
block1:;
// line 1400
panda$collections$Array* $tmp2546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2546);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
panda$collections$Array* $tmp2547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
*(&local0) = $tmp2546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// unreffing REF($11:panda.collections.Array<panda.core.String>)
// line 1401
panda$core$Matcher* $tmp2548 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
panda$core$Matcher* $tmp2549 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
*(&local1) = $tmp2548;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// unreffing REF($25:panda.core.Matcher)
// line 1402
panda$core$String$Index $tmp2550 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp2550;
// line 1403
goto block3;
block3:;
// line 1404
panda$core$Matcher* $tmp2551 = *(&local1);
panda$core$Bit $tmp2552 = panda$core$Matcher$find$R$panda$core$Bit($tmp2551);
*(&local3) = $tmp2552;
// line 1405
panda$core$Bit $tmp2553 = *(&local3);
panda$core$Bit $tmp2554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2553);
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2554;
goto block9;
block8:;
panda$collections$Array* $tmp2556 = *(&local0);
ITable* $tmp2557 = ((panda$collections$CollectionView*) $tmp2556)->$class->itable;
while ($tmp2557->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2557 = $tmp2557->next;
}
$fn2559 $tmp2558 = $tmp2557->methods[0];
panda$core$Int64 $tmp2560 = $tmp2558(((panda$collections$CollectionView*) $tmp2556));
panda$core$Int64 $tmp2561 = (panda$core$Int64) {1};
int64_t $tmp2562 = param2.value;
int64_t $tmp2563 = $tmp2561.value;
int64_t $tmp2564 = $tmp2562 - $tmp2563;
panda$core$Int64 $tmp2565 = (panda$core$Int64) {$tmp2564};
panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2560, $tmp2565);
*(&local4) = $tmp2566;
goto block9;
block9:;
panda$core$Bit $tmp2567 = *(&local4);
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block5; else goto block6;
block5:;
// line 1406
panda$collections$Array* $tmp2569 = *(&local0);
panda$core$String$Index $tmp2570 = *(&local2);
panda$core$Bit $tmp2571 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2572 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2570, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2571);
panda$core$String* $tmp2573 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2572);
panda$collections$Array$add$panda$collections$Array$T($tmp2569, ((panda$core$Object*) $tmp2573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
// unreffing REF($74:panda.core.String)
// line 1407
goto block4;
block6:;
// line 1409
panda$core$Matcher* $tmp2574 = *(&local1);
panda$core$String$Index $tmp2575;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2575, $tmp2574);
*(&local5) = $tmp2575;
// line 1410
panda$collections$Array* $tmp2576 = *(&local0);
panda$core$String$Index $tmp2577 = *(&local2);
panda$core$String$Index $tmp2578 = *(&local5);
panda$core$Bit $tmp2579 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2580 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2577, $tmp2578, $tmp2579);
panda$core$String* $tmp2581 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2580);
panda$collections$Array$add$panda$collections$Array$T($tmp2576, ((panda$core$Object*) $tmp2581));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($93:panda.core.String)
// line 1411
panda$core$String$Index $tmp2582 = *(&local5);
panda$core$Int64 $tmp2583 = $tmp2582.value;
panda$core$Matcher* $tmp2584 = *(&local1);
panda$core$String$Index $tmp2585;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp2585, $tmp2584);
panda$core$Int64 $tmp2586 = $tmp2585.value;
panda$core$Int64 $tmp2587 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp2583, $tmp2586);
panda$core$String$Index $tmp2588 = panda$core$String$Index$init$panda$core$Int64($tmp2587);
*(&local2) = $tmp2588;
goto block3;
block4:;
// line 1413
panda$collections$Array* $tmp2589 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
panda$core$Matcher* $tmp2590 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$collections$Array* $tmp2591 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2589;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1426
panda$core$Int64 $tmp2592 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2593 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2592);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2593;

}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 1437
panda$core$Int64* $tmp2594 = &param0->_length;
panda$core$Int64 $tmp2595 = *$tmp2594;
panda$core$Int64 $tmp2596 = (panda$core$Int64) {0};
panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2595, $tmp2596);
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block1; else goto block2;
block1:;
// line 1438
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1440
panda$core$Int64 $tmp2599 = (panda$core$Int64) {0};
*(&local0) = $tmp2599;
// line 1441
// line 1442
panda$core$Char8** $tmp2600 = &param0->data;
panda$core$Char8* $tmp2601 = *$tmp2600;
panda$core$Int64 $tmp2602 = (panda$core$Int64) {0};
int64_t $tmp2603 = $tmp2602.value;
panda$core$Char8 $tmp2604 = $tmp2601[$tmp2603];
panda$core$UInt8 $tmp2605 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2606 = panda$core$Char8$init$panda$core$UInt8($tmp2605);
panda$core$Bit $tmp2607 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2604, $tmp2606);
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block3; else goto block5;
block3:;
// line 1443
panda$core$Int64 $tmp2609 = (panda$core$Int64) {1};
*(&local1) = $tmp2609;
goto block4;
block5:;
// line 1
// line 1446
panda$core$Int64 $tmp2610 = (panda$core$Int64) {0};
*(&local1) = $tmp2610;
goto block4;
block4:;
// line 1448
panda$core$Int64 $tmp2611 = *(&local1);
panda$core$Int64* $tmp2612 = &param0->_length;
panda$core$Int64 $tmp2613 = *$tmp2612;
panda$core$Bit $tmp2614 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2615 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2611, $tmp2613, $tmp2614);
panda$core$Int64 $tmp2616 = $tmp2615.min;
*(&local2) = $tmp2616;
panda$core$Int64 $tmp2617 = $tmp2615.max;
panda$core$Bit $tmp2618 = $tmp2615.inclusive;
bool $tmp2619 = $tmp2618.value;
panda$core$Int64 $tmp2620 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2621 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2620);
if ($tmp2619) goto block9; else goto block10;
block9:;
int64_t $tmp2622 = $tmp2616.value;
int64_t $tmp2623 = $tmp2617.value;
bool $tmp2624 = $tmp2622 <= $tmp2623;
panda$core$Bit $tmp2625 = (panda$core$Bit) {$tmp2624};
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block6; else goto block7;
block10:;
int64_t $tmp2627 = $tmp2616.value;
int64_t $tmp2628 = $tmp2617.value;
bool $tmp2629 = $tmp2627 < $tmp2628;
panda$core$Bit $tmp2630 = (panda$core$Bit) {$tmp2629};
bool $tmp2631 = $tmp2630.value;
if ($tmp2631) goto block6; else goto block7;
block6:;
// line 1449
panda$core$Char8** $tmp2632 = &param0->data;
panda$core$Char8* $tmp2633 = *$tmp2632;
panda$core$Int64 $tmp2634 = *(&local2);
int64_t $tmp2635 = $tmp2634.value;
panda$core$Char8 $tmp2636 = $tmp2633[$tmp2635];
uint8_t $tmp2637 = $tmp2636.value;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {((int64_t) $tmp2637)};
panda$core$Int64 $tmp2639 = (panda$core$Int64) {48};
int64_t $tmp2640 = $tmp2638.value;
int64_t $tmp2641 = $tmp2639.value;
int64_t $tmp2642 = $tmp2640 - $tmp2641;
panda$core$Int64 $tmp2643 = (panda$core$Int64) {$tmp2642};
*(&local3) = $tmp2643;
// line 1450
panda$core$Int64 $tmp2644 = *(&local3);
panda$core$Int64 $tmp2645 = (panda$core$Int64) {0};
int64_t $tmp2646 = $tmp2644.value;
int64_t $tmp2647 = $tmp2645.value;
bool $tmp2648 = $tmp2646 < $tmp2647;
panda$core$Bit $tmp2649 = (panda$core$Bit) {$tmp2648};
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2649;
goto block15;
block14:;
panda$core$Int64 $tmp2651 = *(&local3);
panda$core$Int64 $tmp2652 = (panda$core$Int64) {9};
int64_t $tmp2653 = $tmp2651.value;
int64_t $tmp2654 = $tmp2652.value;
bool $tmp2655 = $tmp2653 > $tmp2654;
panda$core$Bit $tmp2656 = (panda$core$Bit) {$tmp2655};
*(&local4) = $tmp2656;
goto block15;
block15:;
panda$core$Bit $tmp2657 = *(&local4);
bool $tmp2658 = $tmp2657.value;
if ($tmp2658) goto block11; else goto block12;
block11:;
// line 1451
return ((panda$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1453
panda$core$Int64 $tmp2659 = *(&local0);
panda$core$Int64 $tmp2660 = (panda$core$Int64) {10};
int64_t $tmp2661 = $tmp2659.value;
int64_t $tmp2662 = $tmp2660.value;
int64_t $tmp2663 = $tmp2661 * $tmp2662;
panda$core$Int64 $tmp2664 = (panda$core$Int64) {$tmp2663};
panda$core$Int64 $tmp2665 = *(&local3);
int64_t $tmp2666 = $tmp2664.value;
int64_t $tmp2667 = $tmp2665.value;
int64_t $tmp2668 = $tmp2666 + $tmp2667;
panda$core$Int64 $tmp2669 = (panda$core$Int64) {$tmp2668};
*(&local0) = $tmp2669;
goto block8;
block8:;
panda$core$Int64 $tmp2670 = *(&local2);
int64_t $tmp2671 = $tmp2617.value;
int64_t $tmp2672 = $tmp2670.value;
int64_t $tmp2673 = $tmp2671 - $tmp2672;
panda$core$Int64 $tmp2674 = (panda$core$Int64) {$tmp2673};
panda$core$UInt64 $tmp2675 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2674);
if ($tmp2619) goto block17; else goto block18;
block17:;
uint64_t $tmp2676 = $tmp2675.value;
uint64_t $tmp2677 = $tmp2621.value;
bool $tmp2678 = $tmp2676 >= $tmp2677;
panda$core$Bit $tmp2679 = (panda$core$Bit) {$tmp2678};
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block16; else goto block7;
block18:;
uint64_t $tmp2681 = $tmp2675.value;
uint64_t $tmp2682 = $tmp2621.value;
bool $tmp2683 = $tmp2681 > $tmp2682;
panda$core$Bit $tmp2684 = (panda$core$Bit) {$tmp2683};
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block16; else goto block7;
block16:;
int64_t $tmp2686 = $tmp2670.value;
int64_t $tmp2687 = $tmp2620.value;
int64_t $tmp2688 = $tmp2686 + $tmp2687;
panda$core$Int64 $tmp2689 = (panda$core$Int64) {$tmp2688};
*(&local2) = $tmp2689;
goto block6;
block7:;
// line 1455
panda$core$Char8** $tmp2690 = &param0->data;
panda$core$Char8* $tmp2691 = *$tmp2690;
panda$core$Int64 $tmp2692 = (panda$core$Int64) {0};
int64_t $tmp2693 = $tmp2692.value;
panda$core$Char8 $tmp2694 = $tmp2691[$tmp2693];
panda$core$UInt8 $tmp2695 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2696 = panda$core$Char8$init$panda$core$UInt8($tmp2695);
panda$core$Bit $tmp2697 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2694, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block19; else goto block20;
block19:;
// line 1456
panda$core$Int64 $tmp2699 = *(&local0);
panda$core$Int64 $tmp2700 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2699);
*(&local0) = $tmp2700;
goto block20;
block20:;
// line 1458
panda$core$Int64 $tmp2701 = *(&local0);
return ((panda$core$Int64$nullable) { $tmp2701, true });

}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* param0) {

panda$core$UInt64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$Bit local3;
// line 1468
panda$core$Int64* $tmp2702 = &param0->_length;
panda$core$Int64 $tmp2703 = *$tmp2702;
panda$core$Int64 $tmp2704 = (panda$core$Int64) {0};
panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2703, $tmp2704);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block1; else goto block2;
block1:;
// line 1469
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1471
panda$core$UInt64 $tmp2707 = (panda$core$UInt64) {0};
*(&local0) = $tmp2707;
// line 1472
panda$core$Int64 $tmp2708 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2709 = &param0->_length;
panda$core$Int64 $tmp2710 = *$tmp2709;
panda$core$Bit $tmp2711 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2712 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2708, $tmp2710, $tmp2711);
panda$core$Int64 $tmp2713 = $tmp2712.min;
*(&local1) = $tmp2713;
panda$core$Int64 $tmp2714 = $tmp2712.max;
panda$core$Bit $tmp2715 = $tmp2712.inclusive;
bool $tmp2716 = $tmp2715.value;
panda$core$Int64 $tmp2717 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2718 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2717);
if ($tmp2716) goto block6; else goto block7;
block6:;
int64_t $tmp2719 = $tmp2713.value;
int64_t $tmp2720 = $tmp2714.value;
bool $tmp2721 = $tmp2719 <= $tmp2720;
panda$core$Bit $tmp2722 = (panda$core$Bit) {$tmp2721};
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block3; else goto block4;
block7:;
int64_t $tmp2724 = $tmp2713.value;
int64_t $tmp2725 = $tmp2714.value;
bool $tmp2726 = $tmp2724 < $tmp2725;
panda$core$Bit $tmp2727 = (panda$core$Bit) {$tmp2726};
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block3; else goto block4;
block3:;
// line 1473
panda$core$Char8** $tmp2729 = &param0->data;
panda$core$Char8* $tmp2730 = *$tmp2729;
panda$core$Int64 $tmp2731 = *(&local1);
int64_t $tmp2732 = $tmp2731.value;
panda$core$Char8 $tmp2733 = $tmp2730[$tmp2732];
uint8_t $tmp2734 = $tmp2733.value;
panda$core$UInt64 $tmp2735 = (panda$core$UInt64) {((uint64_t) $tmp2734)};
panda$core$UInt64 $tmp2736 = (panda$core$UInt64) {48};
uint64_t $tmp2737 = $tmp2735.value;
uint64_t $tmp2738 = $tmp2736.value;
uint64_t $tmp2739 = $tmp2737 - $tmp2738;
panda$core$UInt64 $tmp2740 = (panda$core$UInt64) {$tmp2739};
*(&local2) = $tmp2740;
// line 1474
panda$core$UInt64 $tmp2741 = *(&local2);
panda$core$UInt64 $tmp2742 = (panda$core$UInt64) {0};
uint64_t $tmp2743 = $tmp2741.value;
uint64_t $tmp2744 = $tmp2742.value;
bool $tmp2745 = $tmp2743 < $tmp2744;
panda$core$Bit $tmp2746 = (panda$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2746;
goto block12;
block11:;
panda$core$UInt64 $tmp2748 = *(&local2);
panda$core$UInt64 $tmp2749 = (panda$core$UInt64) {9};
uint64_t $tmp2750 = $tmp2748.value;
uint64_t $tmp2751 = $tmp2749.value;
bool $tmp2752 = $tmp2750 > $tmp2751;
panda$core$Bit $tmp2753 = (panda$core$Bit) {$tmp2752};
*(&local3) = $tmp2753;
goto block12;
block12:;
panda$core$Bit $tmp2754 = *(&local3);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block8; else goto block9;
block8:;
// line 1475
return ((panda$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1477
panda$core$UInt64 $tmp2756 = *(&local0);
panda$core$UInt64 $tmp2757 = (panda$core$UInt64) {10};
uint64_t $tmp2758 = $tmp2756.value;
uint64_t $tmp2759 = $tmp2757.value;
uint64_t $tmp2760 = $tmp2758 * $tmp2759;
panda$core$UInt64 $tmp2761 = (panda$core$UInt64) {$tmp2760};
panda$core$UInt64 $tmp2762 = *(&local2);
uint64_t $tmp2763 = $tmp2761.value;
uint64_t $tmp2764 = $tmp2762.value;
uint64_t $tmp2765 = $tmp2763 + $tmp2764;
panda$core$UInt64 $tmp2766 = (panda$core$UInt64) {$tmp2765};
*(&local0) = $tmp2766;
goto block5;
block5:;
panda$core$Int64 $tmp2767 = *(&local1);
int64_t $tmp2768 = $tmp2714.value;
int64_t $tmp2769 = $tmp2767.value;
int64_t $tmp2770 = $tmp2768 - $tmp2769;
panda$core$Int64 $tmp2771 = (panda$core$Int64) {$tmp2770};
panda$core$UInt64 $tmp2772 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2771);
if ($tmp2716) goto block14; else goto block15;
block14:;
uint64_t $tmp2773 = $tmp2772.value;
uint64_t $tmp2774 = $tmp2718.value;
bool $tmp2775 = $tmp2773 >= $tmp2774;
panda$core$Bit $tmp2776 = (panda$core$Bit) {$tmp2775};
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block13; else goto block4;
block15:;
uint64_t $tmp2778 = $tmp2772.value;
uint64_t $tmp2779 = $tmp2718.value;
bool $tmp2780 = $tmp2778 > $tmp2779;
panda$core$Bit $tmp2781 = (panda$core$Bit) {$tmp2780};
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block13; else goto block4;
block13:;
int64_t $tmp2783 = $tmp2767.value;
int64_t $tmp2784 = $tmp2717.value;
int64_t $tmp2785 = $tmp2783 + $tmp2784;
panda$core$Int64 $tmp2786 = (panda$core$Int64) {$tmp2785};
*(&local1) = $tmp2786;
goto block3;
block4:;
// line 1479
panda$core$UInt64 $tmp2787 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp2787, true });

}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* param0) {

// line 1489
panda$core$Real64 $tmp2788;
panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp2788, param0);
return ((panda$core$Real64$nullable) { $tmp2788, true });

}
panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1497
panda$core$Int64 $tmp2789 = (panda$core$Int64) {1};
*(&local0) = $tmp2789;
// line 1498
panda$core$Int64 $tmp2790 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2791 = &param0->_length;
panda$core$Int64 $tmp2792 = *$tmp2791;
panda$core$Bit $tmp2793 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2794 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2790, $tmp2792, $tmp2793);
panda$core$Int64 $tmp2795 = $tmp2794.min;
*(&local1) = $tmp2795;
panda$core$Int64 $tmp2796 = $tmp2794.max;
panda$core$Bit $tmp2797 = $tmp2794.inclusive;
bool $tmp2798 = $tmp2797.value;
panda$core$Int64 $tmp2799 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2800 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2799);
if ($tmp2798) goto block4; else goto block5;
block4:;
int64_t $tmp2801 = $tmp2795.value;
int64_t $tmp2802 = $tmp2796.value;
bool $tmp2803 = $tmp2801 <= $tmp2802;
panda$core$Bit $tmp2804 = (panda$core$Bit) {$tmp2803};
bool $tmp2805 = $tmp2804.value;
if ($tmp2805) goto block1; else goto block2;
block5:;
int64_t $tmp2806 = $tmp2795.value;
int64_t $tmp2807 = $tmp2796.value;
bool $tmp2808 = $tmp2806 < $tmp2807;
panda$core$Bit $tmp2809 = (panda$core$Bit) {$tmp2808};
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block1; else goto block2;
block1:;
// line 1499
panda$core$Int64 $tmp2811 = *(&local0);
panda$core$Int64 $tmp2812 = (panda$core$Int64) {101};
int64_t $tmp2813 = $tmp2811.value;
int64_t $tmp2814 = $tmp2812.value;
int64_t $tmp2815 = $tmp2813 * $tmp2814;
panda$core$Int64 $tmp2816 = (panda$core$Int64) {$tmp2815};
panda$core$Char8** $tmp2817 = &param0->data;
panda$core$Char8* $tmp2818 = *$tmp2817;
panda$core$Int64 $tmp2819 = *(&local1);
int64_t $tmp2820 = $tmp2819.value;
panda$core$Char8 $tmp2821 = $tmp2818[$tmp2820];
uint8_t $tmp2822 = $tmp2821.value;
panda$core$Int64 $tmp2823 = (panda$core$Int64) {((int64_t) $tmp2822)};
int64_t $tmp2824 = $tmp2816.value;
int64_t $tmp2825 = $tmp2823.value;
int64_t $tmp2826 = $tmp2824 + $tmp2825;
panda$core$Int64 $tmp2827 = (panda$core$Int64) {$tmp2826};
*(&local0) = $tmp2827;
goto block3;
block3:;
panda$core$Int64 $tmp2828 = *(&local1);
int64_t $tmp2829 = $tmp2796.value;
int64_t $tmp2830 = $tmp2828.value;
int64_t $tmp2831 = $tmp2829 - $tmp2830;
panda$core$Int64 $tmp2832 = (panda$core$Int64) {$tmp2831};
panda$core$UInt64 $tmp2833 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2832);
if ($tmp2798) goto block7; else goto block8;
block7:;
uint64_t $tmp2834 = $tmp2833.value;
uint64_t $tmp2835 = $tmp2800.value;
bool $tmp2836 = $tmp2834 >= $tmp2835;
panda$core$Bit $tmp2837 = (panda$core$Bit) {$tmp2836};
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block6; else goto block2;
block8:;
uint64_t $tmp2839 = $tmp2833.value;
uint64_t $tmp2840 = $tmp2800.value;
bool $tmp2841 = $tmp2839 > $tmp2840;
panda$core$Bit $tmp2842 = (panda$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block6; else goto block2;
block6:;
int64_t $tmp2844 = $tmp2828.value;
int64_t $tmp2845 = $tmp2799.value;
int64_t $tmp2846 = $tmp2844 + $tmp2845;
panda$core$Int64 $tmp2847 = (panda$core$Int64) {$tmp2846};
*(&local1) = $tmp2847;
goto block1;
block2:;
// line 1510
panda$core$Int64 $tmp2848 = *(&local0);
return $tmp2848;

}

