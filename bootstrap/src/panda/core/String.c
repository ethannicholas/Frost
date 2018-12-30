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
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Char32.h"
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
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String$shim, panda$core$String$cleanup$shim, panda$core$String$format$panda$core$String$R$panda$core$String$shim, panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$get_length$R$panda$core$Int64, panda$core$String$get_byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$get_trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$get_start$R$panda$core$String$Index, panda$core$String$get_end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$get_hash$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn93)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn184)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn518)(panda$core$Object*);
typedef panda$core$String* (*$fn630)(panda$core$Object*);
typedef panda$core$Object* (*$fn2004)(panda$core$String*);
typedef panda$core$Object* (*$fn2006)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2010)(panda$core$Object*);
typedef panda$core$Object* (*$fn2081)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2083)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2087)(panda$core$Object*);
typedef panda$core$Int64 (*$fn2414)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2468)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 4839268531851362231, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

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
panda$core$String** $tmp6 = &param0->owner;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
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
panda$core$String** $tmp13 = &param0->owner;
panda$core$String* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
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
ITable* $tmp52 = param1->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
panda$core$Object* $tmp55 = $tmp53(param1, $tmp51);
panda$core$Int64 $tmp56 = *(&local0);
int64_t $tmp57 = $tmp56.value;
$tmp50[$tmp57] = ((panda$core$Char8$wrapper*) $tmp55)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp55);
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
panda$core$String** $tmp78 = &param0->owner;
panda$core$String* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((panda$core$String*) NULL);
return;

}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* param0) {

// line 377
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;

}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8 local1;
panda$core$Bit local2;
// line 390
panda$core$Bit $tmp81 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s82);
bool $tmp83 = $tmp81.value;
if ($tmp83) goto block2; else goto block3;
block2:;
// line 392
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block3:;
panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s85);
bool $tmp86 = $tmp84.value;
if ($tmp86) goto block4; else goto block5;
block4:;
// line 394
panda$core$MutableString* $tmp87 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp87, &$s88);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp89 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local0) = $tmp87;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// line 395
panda$collections$ListView* $tmp90 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param0);
ITable* $tmp91 = ((panda$collections$Iterable*) $tmp90)->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
panda$collections$Iterator* $tmp94 = $tmp92(((panda$collections$Iterable*) $tmp90));
goto block6;
block6:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
panda$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block8; else goto block7;
block7:;
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
panda$core$Object* $tmp103 = $tmp101($tmp94);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp103)->value;
// line 396
panda$core$Char8 $tmp104 = *(&local1);
panda$core$UInt8 $tmp105 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp106 = panda$core$Char8$init$panda$core$UInt8($tmp105);
panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block10; else goto block11;
block10:;
// line 397
panda$core$MutableString* $tmp109 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp109, &$s110);
goto block9;
block11:;
panda$core$UInt8 $tmp111 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp112 = panda$core$Char8$init$panda$core$UInt8($tmp111);
panda$core$Bit $tmp113 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block12; else goto block13;
block12:;
// line 398
panda$core$MutableString* $tmp115 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp115, &$s116);
goto block9;
block13:;
panda$core$UInt8 $tmp117 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp118 = panda$core$Char8$init$panda$core$UInt8($tmp117);
panda$core$Bit $tmp119 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block14; else goto block15;
block14:;
// line 399
panda$core$MutableString* $tmp121 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp121, &$s122);
goto block9;
block15:;
panda$core$UInt8 $tmp123 = (panda$core$UInt8) {13};
panda$core$Char8 $tmp124 = panda$core$Char8$init$panda$core$UInt8($tmp123);
panda$core$Bit $tmp125 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block16; else goto block17;
block16:;
// line 400
panda$core$MutableString* $tmp127 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp127, &$s128);
goto block9;
block17:;
panda$core$UInt8 $tmp129 = (panda$core$UInt8) {9};
panda$core$Char8 $tmp130 = panda$core$Char8$init$panda$core$UInt8($tmp129);
panda$core$Bit $tmp131 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block19;
block18:;
// line 401
panda$core$MutableString* $tmp133 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp133, &$s134);
goto block9;
block19:;
// line 403
panda$core$Char8 $tmp135 = *(&local1);
panda$core$UInt8 $tmp136 = panda$core$Char8$convert$R$panda$core$UInt8($tmp135);
panda$core$UInt8 $tmp137 = (panda$core$UInt8) {32};
uint8_t $tmp138 = $tmp136.value;
uint8_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 >= $tmp139;
panda$core$Bit $tmp141 = (panda$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block20; else goto block21;
block20:;
panda$core$Char8 $tmp143 = *(&local1);
panda$core$UInt8 $tmp144 = panda$core$Char8$convert$R$panda$core$UInt8($tmp143);
panda$core$UInt8 $tmp145 = (panda$core$UInt8) {126};
uint8_t $tmp146 = $tmp144.value;
uint8_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 <= $tmp147;
panda$core$Bit $tmp149 = (panda$core$Bit) {$tmp148};
*(&local2) = $tmp149;
goto block22;
block21:;
*(&local2) = $tmp141;
goto block22;
block22:;
panda$core$Bit $tmp150 = *(&local2);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block23; else goto block25;
block23:;
// line 404
panda$core$MutableString* $tmp152 = *(&local0);
panda$core$Char8 $tmp153 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp152, $tmp153);
goto block24;
block25:;
// line 1
// line 408
panda$core$MutableString* $tmp154 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp154, &$s155);
goto block24;
block24:;
goto block9;
block9:;
panda$core$Panda$unref$panda$core$Object$Q($tmp103);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// line 412
panda$core$MutableString* $tmp156 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp156, &$s157);
// line 413
panda$core$MutableString* $tmp158 = *(&local0);
panda$core$String* $tmp159 = panda$core$MutableString$finish$R$panda$core$String($tmp158);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$MutableString* $tmp160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp159;
block5:;
// line 416
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit(false);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp163 = (panda$core$Int64) {416};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s164, $tmp163);
abort(); // unreachable
block26:;
goto block1;
block1:;
panda$core$Bit $tmp165 = panda$core$Bit$init$builtin_bit(false);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp167 = (panda$core$Int64) {389};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s168, $tmp167, &$s169);
abort(); // unreachable
block28:;
abort(); // unreachable

}
void panda$core$String$cleanup(panda$core$String* param0) {

// line 423
panda$core$String** $tmp170 = &param0->owner;
panda$core$String* $tmp171 = *$tmp170;
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171 == NULL);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 424
panda$core$Char8** $tmp174 = &param0->data;
panda$core$Char8* $tmp175 = *$tmp174;
pandaFree($tmp175);
goto block2;
block2:;
panda$core$String** $tmp176 = &param0->owner;
panda$core$String* $tmp177 = *$tmp176;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
return;

}
panda$collections$ListView* panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0) {

// line 432
panda$core$String$UTF8List* $tmp178 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
panda$core$String$UTF8List$init$panda$core$String($tmp178, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp178)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
return ((panda$collections$ListView*) $tmp178);

}
panda$collections$Iterator* panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* param0) {

// line 441
panda$core$String$UTF16Iterator* $tmp179 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
panda$core$String$UTF16Iterator$init$panda$core$String($tmp179, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp179)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
return ((panda$collections$Iterator*) $tmp179);

}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* param0) {

// line 449
panda$core$String$UTF32Iterator* $tmp180 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
panda$core$String$UTF32Iterator$init$panda$core$String($tmp180, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp180)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
return ((panda$collections$Iterator*) $tmp180);

}
panda$core$Int64 panda$core$String$get_length$R$panda$core$Int64(panda$core$String* param0) {

// line 459
panda$collections$Iterator* $tmp181 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(param0);
ITable* $tmp182 = $tmp181->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[2];
panda$core$Int64 $tmp185 = $tmp183($tmp181);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
return $tmp185;

}
panda$core$Int64 panda$core$String$get_byteLength$R$panda$core$Int64(panda$core$String* param0) {

// line 466
panda$core$Int64* $tmp186 = &param0->_length;
panda$core$Int64 $tmp187 = *$tmp186;
return $tmp187;

}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 470
panda$core$Int64* $tmp188 = &param0->_length;
panda$core$Int64 $tmp189 = *$tmp188;
panda$core$Int64* $tmp190 = &param1->_length;
panda$core$Int64 $tmp191 = *$tmp190;
int64_t $tmp192 = $tmp189.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 < $tmp193;
panda$core$Bit $tmp195 = (panda$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block1; else goto block2;
block1:;
// line 471
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit(false);
return $tmp197;
block2:;
// line 473
panda$core$Int64 $tmp198 = (panda$core$Int64) {0};
panda$core$Int64* $tmp199 = &param1->_length;
panda$core$Int64 $tmp200 = *$tmp199;
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp202 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp198, $tmp200, $tmp201);
panda$core$Int64 $tmp203 = $tmp202.min;
*(&local0) = $tmp203;
panda$core$Int64 $tmp204 = $tmp202.max;
panda$core$Bit $tmp205 = $tmp202.inclusive;
bool $tmp206 = $tmp205.value;
panda$core$Int64 $tmp207 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp208 = panda$core$Int64$convert$R$panda$core$UInt64($tmp207);
if ($tmp206) goto block6; else goto block7;
block6:;
int64_t $tmp209 = $tmp203.value;
int64_t $tmp210 = $tmp204.value;
bool $tmp211 = $tmp209 <= $tmp210;
panda$core$Bit $tmp212 = (panda$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block3; else goto block4;
block7:;
int64_t $tmp214 = $tmp203.value;
int64_t $tmp215 = $tmp204.value;
bool $tmp216 = $tmp214 < $tmp215;
panda$core$Bit $tmp217 = (panda$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block3; else goto block4;
block3:;
// line 474
panda$core$Char8** $tmp219 = &param0->data;
panda$core$Char8* $tmp220 = *$tmp219;
panda$core$Int64 $tmp221 = *(&local0);
int64_t $tmp222 = $tmp221.value;
panda$core$Char8 $tmp223 = $tmp220[$tmp222];
panda$core$Char8** $tmp224 = &param1->data;
panda$core$Char8* $tmp225 = *$tmp224;
panda$core$Int64 $tmp226 = *(&local0);
int64_t $tmp227 = $tmp226.value;
panda$core$Char8 $tmp228 = $tmp225[$tmp227];
panda$core$Bit $tmp229 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp223, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block8; else goto block9;
block8:;
// line 475
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit(false);
return $tmp231;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp232 = *(&local0);
int64_t $tmp233 = $tmp204.value;
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233 - $tmp234;
panda$core$Int64 $tmp236 = (panda$core$Int64) {$tmp235};
panda$core$UInt64 $tmp237 = panda$core$Int64$convert$R$panda$core$UInt64($tmp236);
if ($tmp206) goto block11; else goto block12;
block11:;
uint64_t $tmp238 = $tmp237.value;
uint64_t $tmp239 = $tmp208.value;
bool $tmp240 = $tmp238 >= $tmp239;
panda$core$Bit $tmp241 = (panda$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block10; else goto block4;
block12:;
uint64_t $tmp243 = $tmp237.value;
uint64_t $tmp244 = $tmp208.value;
bool $tmp245 = $tmp243 > $tmp244;
panda$core$Bit $tmp246 = (panda$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block10; else goto block4;
block10:;
int64_t $tmp248 = $tmp232.value;
int64_t $tmp249 = $tmp207.value;
int64_t $tmp250 = $tmp248 + $tmp249;
panda$core$Int64 $tmp251 = (panda$core$Int64) {$tmp250};
*(&local0) = $tmp251;
goto block3;
block4:;
// line 478
panda$core$Bit $tmp252 = panda$core$Bit$init$builtin_bit(true);
return $tmp252;

}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 482
panda$core$Int64* $tmp253 = &param0->_length;
panda$core$Int64 $tmp254 = *$tmp253;
panda$core$Int64* $tmp255 = &param1->_length;
panda$core$Int64 $tmp256 = *$tmp255;
int64_t $tmp257 = $tmp254.value;
int64_t $tmp258 = $tmp256.value;
bool $tmp259 = $tmp257 < $tmp258;
panda$core$Bit $tmp260 = (panda$core$Bit) {$tmp259};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block1; else goto block2;
block1:;
// line 483
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit(false);
return $tmp262;
block2:;
// line 485
panda$core$Int64 $tmp263 = (panda$core$Int64) {0};
panda$core$Int64* $tmp264 = &param1->_length;
panda$core$Int64 $tmp265 = *$tmp264;
panda$core$Bit $tmp266 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp267 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp263, $tmp265, $tmp266);
panda$core$Int64 $tmp268 = $tmp267.min;
*(&local0) = $tmp268;
panda$core$Int64 $tmp269 = $tmp267.max;
panda$core$Bit $tmp270 = $tmp267.inclusive;
bool $tmp271 = $tmp270.value;
panda$core$Int64 $tmp272 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp273 = panda$core$Int64$convert$R$panda$core$UInt64($tmp272);
if ($tmp271) goto block6; else goto block7;
block6:;
int64_t $tmp274 = $tmp268.value;
int64_t $tmp275 = $tmp269.value;
bool $tmp276 = $tmp274 <= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block3; else goto block4;
block7:;
int64_t $tmp279 = $tmp268.value;
int64_t $tmp280 = $tmp269.value;
bool $tmp281 = $tmp279 < $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block3; else goto block4;
block3:;
// line 486
panda$core$Char8** $tmp284 = &param0->data;
panda$core$Char8* $tmp285 = *$tmp284;
panda$core$Int64* $tmp286 = &param0->_length;
panda$core$Int64 $tmp287 = *$tmp286;
panda$core$Int64* $tmp288 = &param1->_length;
panda$core$Int64 $tmp289 = *$tmp288;
int64_t $tmp290 = $tmp287.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
panda$core$Int64 $tmp293 = (panda$core$Int64) {$tmp292};
panda$core$Int64 $tmp294 = *(&local0);
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295 + $tmp296;
panda$core$Int64 $tmp298 = (panda$core$Int64) {$tmp297};
int64_t $tmp299 = $tmp298.value;
panda$core$Char8 $tmp300 = $tmp285[$tmp299];
panda$core$Char8** $tmp301 = &param1->data;
panda$core$Char8* $tmp302 = *$tmp301;
panda$core$Int64 $tmp303 = *(&local0);
int64_t $tmp304 = $tmp303.value;
panda$core$Char8 $tmp305 = $tmp302[$tmp304];
panda$core$Bit $tmp306 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp300, $tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block8; else goto block9;
block8:;
// line 487
panda$core$Bit $tmp308 = panda$core$Bit$init$builtin_bit(false);
return $tmp308;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp269.value;
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310 - $tmp311;
panda$core$Int64 $tmp313 = (panda$core$Int64) {$tmp312};
panda$core$UInt64 $tmp314 = panda$core$Int64$convert$R$panda$core$UInt64($tmp313);
if ($tmp271) goto block11; else goto block12;
block11:;
uint64_t $tmp315 = $tmp314.value;
uint64_t $tmp316 = $tmp273.value;
bool $tmp317 = $tmp315 >= $tmp316;
panda$core$Bit $tmp318 = (panda$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block10; else goto block4;
block12:;
uint64_t $tmp320 = $tmp314.value;
uint64_t $tmp321 = $tmp273.value;
bool $tmp322 = $tmp320 > $tmp321;
panda$core$Bit $tmp323 = (panda$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block10; else goto block4;
block10:;
int64_t $tmp325 = $tmp309.value;
int64_t $tmp326 = $tmp272.value;
int64_t $tmp327 = $tmp325 + $tmp326;
panda$core$Int64 $tmp328 = (panda$core$Int64) {$tmp327};
*(&local0) = $tmp328;
goto block3;
block4:;
// line 490
panda$core$Bit $tmp329 = panda$core$Bit$init$builtin_bit(true);
return $tmp329;

}
panda$core$String* panda$core$String$get_trimmed$R$panda$core$String(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Bit local1;
panda$core$Int64 local2;
panda$core$Bit local3;
// line 499
panda$core$Int64* $tmp330 = &param0->_length;
panda$core$Int64 $tmp331 = *$tmp330;
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp331, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
// line 500
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 502
panda$core$Int64 $tmp335 = (panda$core$Int64) {0};
*(&local0) = $tmp335;
// line 503
goto block3;
block3:;
panda$core$Int64 $tmp336 = *(&local0);
panda$core$Int64* $tmp337 = &param0->_length;
panda$core$Int64 $tmp338 = *$tmp337;
int64_t $tmp339 = $tmp336.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 < $tmp340;
panda$core$Bit $tmp342 = (panda$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block6; else goto block7;
block6:;
panda$core$Char8** $tmp344 = &param0->data;
panda$core$Char8* $tmp345 = *$tmp344;
panda$core$Int64 $tmp346 = *(&local0);
int64_t $tmp347 = $tmp346.value;
panda$core$Char8 $tmp348 = $tmp345[$tmp347];
panda$core$Bit $tmp349 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp348);
*(&local1) = $tmp349;
goto block8;
block7:;
*(&local1) = $tmp342;
goto block8;
block8:;
panda$core$Bit $tmp350 = *(&local1);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block4; else goto block5;
block4:;
// line 504
panda$core$Int64 $tmp352 = *(&local0);
panda$core$Int64 $tmp353 = (panda$core$Int64) {1};
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 + $tmp355;
panda$core$Int64 $tmp357 = (panda$core$Int64) {$tmp356};
*(&local0) = $tmp357;
goto block3;
block5:;
// line 507
panda$core$Int64* $tmp358 = &param0->_length;
panda$core$Int64 $tmp359 = *$tmp358;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361 - $tmp362;
panda$core$Int64 $tmp364 = (panda$core$Int64) {$tmp363};
*(&local2) = $tmp364;
// line 508
goto block9;
block9:;
panda$core$Int64 $tmp365 = *(&local2);
panda$core$Int64 $tmp366 = *(&local0);
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 >= $tmp368;
panda$core$Bit $tmp370 = (panda$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block12; else goto block13;
block12:;
panda$core$Char8** $tmp372 = &param0->data;
panda$core$Char8* $tmp373 = *$tmp372;
panda$core$Int64 $tmp374 = *(&local2);
int64_t $tmp375 = $tmp374.value;
panda$core$Char8 $tmp376 = $tmp373[$tmp375];
panda$core$Bit $tmp377 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp376);
*(&local3) = $tmp377;
goto block14;
block13:;
*(&local3) = $tmp370;
goto block14;
block14:;
panda$core$Bit $tmp378 = *(&local3);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block10; else goto block11;
block10:;
// line 509
panda$core$Int64 $tmp380 = *(&local2);
panda$core$Int64 $tmp381 = (panda$core$Int64) {1};
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 - $tmp383;
panda$core$Int64 $tmp385 = (panda$core$Int64) {$tmp384};
*(&local2) = $tmp385;
goto block9;
block11:;
// line 512
panda$core$Int64 $tmp386 = *(&local0);
panda$core$String$Index $tmp387 = panda$core$String$Index$init$panda$core$Int64($tmp386);
panda$core$Int64 $tmp388 = *(&local2);
panda$core$String$Index $tmp389 = panda$core$String$Index$init$panda$core$Int64($tmp388);
panda$core$Bit $tmp390 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$String$Index$GT $tmp391 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp387, $tmp389, $tmp390);
panda$core$String* $tmp392 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp391);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
return $tmp392;

}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$Char8* local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 519
panda$core$Int64* $tmp393 = &param0->_length;
panda$core$Int64 $tmp394 = *$tmp393;
panda$core$Int64* $tmp395 = &param1->_length;
panda$core$Int64 $tmp396 = *$tmp395;
int64_t $tmp397 = $tmp394.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 + $tmp398;
panda$core$Int64 $tmp400 = (panda$core$Int64) {$tmp399};
int64_t $tmp401 = $tmp400.value;
panda$core$Char8* $tmp402 = ((panda$core$Char8*) pandaZAlloc($tmp401 * 1));
*(&local0) = $tmp402;
// line 520
panda$core$Int64 $tmp403 = (panda$core$Int64) {0};
panda$core$Int64* $tmp404 = &param0->_length;
panda$core$Int64 $tmp405 = *$tmp404;
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp407 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp403, $tmp405, $tmp406);
panda$core$Int64 $tmp408 = $tmp407.min;
*(&local1) = $tmp408;
panda$core$Int64 $tmp409 = $tmp407.max;
panda$core$Bit $tmp410 = $tmp407.inclusive;
bool $tmp411 = $tmp410.value;
panda$core$Int64 $tmp412 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp413 = panda$core$Int64$convert$R$panda$core$UInt64($tmp412);
if ($tmp411) goto block4; else goto block5;
block4:;
int64_t $tmp414 = $tmp408.value;
int64_t $tmp415 = $tmp409.value;
bool $tmp416 = $tmp414 <= $tmp415;
panda$core$Bit $tmp417 = (panda$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block1; else goto block2;
block5:;
int64_t $tmp419 = $tmp408.value;
int64_t $tmp420 = $tmp409.value;
bool $tmp421 = $tmp419 < $tmp420;
panda$core$Bit $tmp422 = (panda$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block1; else goto block2;
block1:;
// line 521
panda$core$Char8* $tmp424 = *(&local0);
panda$core$Char8** $tmp425 = &param0->data;
panda$core$Char8* $tmp426 = *$tmp425;
panda$core$Int64 $tmp427 = *(&local1);
int64_t $tmp428 = $tmp427.value;
panda$core$Char8 $tmp429 = $tmp426[$tmp428];
panda$core$Int64 $tmp430 = *(&local1);
int64_t $tmp431 = $tmp430.value;
$tmp424[$tmp431] = $tmp429;
goto block3;
block3:;
panda$core$Int64 $tmp432 = *(&local1);
int64_t $tmp433 = $tmp409.value;
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433 - $tmp434;
panda$core$Int64 $tmp436 = (panda$core$Int64) {$tmp435};
panda$core$UInt64 $tmp437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp436);
if ($tmp411) goto block7; else goto block8;
block7:;
uint64_t $tmp438 = $tmp437.value;
uint64_t $tmp439 = $tmp413.value;
bool $tmp440 = $tmp438 >= $tmp439;
panda$core$Bit $tmp441 = (panda$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block6; else goto block2;
block8:;
uint64_t $tmp443 = $tmp437.value;
uint64_t $tmp444 = $tmp413.value;
bool $tmp445 = $tmp443 > $tmp444;
panda$core$Bit $tmp446 = (panda$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block6; else goto block2;
block6:;
int64_t $tmp448 = $tmp432.value;
int64_t $tmp449 = $tmp412.value;
int64_t $tmp450 = $tmp448 + $tmp449;
panda$core$Int64 $tmp451 = (panda$core$Int64) {$tmp450};
*(&local1) = $tmp451;
goto block1;
block2:;
// line 523
panda$core$Int64 $tmp452 = (panda$core$Int64) {0};
panda$core$Int64* $tmp453 = &param1->_length;
panda$core$Int64 $tmp454 = *$tmp453;
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp456 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp452, $tmp454, $tmp455);
panda$core$Int64 $tmp457 = $tmp456.min;
*(&local2) = $tmp457;
panda$core$Int64 $tmp458 = $tmp456.max;
panda$core$Bit $tmp459 = $tmp456.inclusive;
bool $tmp460 = $tmp459.value;
panda$core$Int64 $tmp461 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp462 = panda$core$Int64$convert$R$panda$core$UInt64($tmp461);
if ($tmp460) goto block12; else goto block13;
block12:;
int64_t $tmp463 = $tmp457.value;
int64_t $tmp464 = $tmp458.value;
bool $tmp465 = $tmp463 <= $tmp464;
panda$core$Bit $tmp466 = (panda$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block9; else goto block10;
block13:;
int64_t $tmp468 = $tmp457.value;
int64_t $tmp469 = $tmp458.value;
bool $tmp470 = $tmp468 < $tmp469;
panda$core$Bit $tmp471 = (panda$core$Bit) {$tmp470};
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block9; else goto block10;
block9:;
// line 524
panda$core$Char8* $tmp473 = *(&local0);
panda$core$Char8** $tmp474 = &param1->data;
panda$core$Char8* $tmp475 = *$tmp474;
panda$core$Int64 $tmp476 = *(&local2);
int64_t $tmp477 = $tmp476.value;
panda$core$Char8 $tmp478 = $tmp475[$tmp477];
panda$core$Int64* $tmp479 = &param0->_length;
panda$core$Int64 $tmp480 = *$tmp479;
panda$core$Int64 $tmp481 = *(&local2);
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482 + $tmp483;
panda$core$Int64 $tmp485 = (panda$core$Int64) {$tmp484};
int64_t $tmp486 = $tmp485.value;
$tmp473[$tmp486] = $tmp478;
goto block11;
block11:;
panda$core$Int64 $tmp487 = *(&local2);
int64_t $tmp488 = $tmp458.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 - $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {$tmp490};
panda$core$UInt64 $tmp492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp491);
if ($tmp460) goto block15; else goto block16;
block15:;
uint64_t $tmp493 = $tmp492.value;
uint64_t $tmp494 = $tmp462.value;
bool $tmp495 = $tmp493 >= $tmp494;
panda$core$Bit $tmp496 = (panda$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block14; else goto block10;
block16:;
uint64_t $tmp498 = $tmp492.value;
uint64_t $tmp499 = $tmp462.value;
bool $tmp500 = $tmp498 > $tmp499;
panda$core$Bit $tmp501 = (panda$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block14; else goto block10;
block14:;
int64_t $tmp503 = $tmp487.value;
int64_t $tmp504 = $tmp461.value;
int64_t $tmp505 = $tmp503 + $tmp504;
panda$core$Int64 $tmp506 = (panda$core$Int64) {$tmp505};
*(&local2) = $tmp506;
goto block9;
block10:;
// line 526
panda$core$String* $tmp507 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp508 = *(&local0);
panda$core$Int64* $tmp509 = &param0->_length;
panda$core$Int64 $tmp510 = *$tmp509;
panda$core$Int64* $tmp511 = &param1->_length;
panda$core$Int64 $tmp512 = *$tmp511;
int64_t $tmp513 = $tmp510.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 + $tmp514;
panda$core$Int64 $tmp516 = (panda$core$Int64) {$tmp515};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp507, $tmp508, $tmp516);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
return $tmp507;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* param0, panda$core$Object* param1) {

// line 534
$fn518 $tmp517 = ($fn518) param1->$class->vtable[0];
panda$core$String* $tmp519 = $tmp517(param1);
panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp519);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
return $tmp520;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp521 = (panda$core$Int64) {0};
int64_t $tmp522 = param1.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 >= $tmp523;
panda$core$Bit $tmp525 = (panda$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp527 = (panda$core$Int64) {541};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s528, $tmp527, &$s529);
abort(); // unreachable
block1:;
// line 542
panda$core$MutableString* $tmp530 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp530);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp531 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
*(&local0) = $tmp530;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// line 543
panda$core$Int64 $tmp532 = (panda$core$Int64) {0};
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp534 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp532, param1, $tmp533);
panda$core$Int64 $tmp535 = $tmp534.min;
*(&local1) = $tmp535;
panda$core$Int64 $tmp536 = $tmp534.max;
panda$core$Bit $tmp537 = $tmp534.inclusive;
bool $tmp538 = $tmp537.value;
panda$core$Int64 $tmp539 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp540 = panda$core$Int64$convert$R$panda$core$UInt64($tmp539);
if ($tmp538) goto block6; else goto block7;
block6:;
int64_t $tmp541 = $tmp535.value;
int64_t $tmp542 = $tmp536.value;
bool $tmp543 = $tmp541 <= $tmp542;
panda$core$Bit $tmp544 = (panda$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block3; else goto block4;
block7:;
int64_t $tmp546 = $tmp535.value;
int64_t $tmp547 = $tmp536.value;
bool $tmp548 = $tmp546 < $tmp547;
panda$core$Bit $tmp549 = (panda$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block3; else goto block4;
block3:;
// line 544
panda$core$MutableString* $tmp551 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp551, param0);
goto block5;
block5:;
panda$core$Int64 $tmp552 = *(&local1);
int64_t $tmp553 = $tmp536.value;
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553 - $tmp554;
panda$core$Int64 $tmp556 = (panda$core$Int64) {$tmp555};
panda$core$UInt64 $tmp557 = panda$core$Int64$convert$R$panda$core$UInt64($tmp556);
if ($tmp538) goto block9; else goto block10;
block9:;
uint64_t $tmp558 = $tmp557.value;
uint64_t $tmp559 = $tmp540.value;
bool $tmp560 = $tmp558 >= $tmp559;
panda$core$Bit $tmp561 = (panda$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block8; else goto block4;
block10:;
uint64_t $tmp563 = $tmp557.value;
uint64_t $tmp564 = $tmp540.value;
bool $tmp565 = $tmp563 > $tmp564;
panda$core$Bit $tmp566 = (panda$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block8; else goto block4;
block8:;
int64_t $tmp568 = $tmp552.value;
int64_t $tmp569 = $tmp539.value;
int64_t $tmp570 = $tmp568 + $tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {$tmp570};
*(&local1) = $tmp571;
goto block3;
block4:;
// line 546
panda$core$MutableString* $tmp572 = *(&local0);
panda$core$String* $tmp573 = panda$core$MutableString$finish$R$panda$core$String($tmp572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$MutableString* $tmp574 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp573;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp575 = (panda$core$Int64) {0};
int64_t $tmp576 = param0.value;
int64_t $tmp577 = $tmp575.value;
bool $tmp578 = $tmp576 >= $tmp577;
panda$core$Bit $tmp579 = (panda$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {554};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block1:;
// line 555
panda$core$MutableString* $tmp584 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp584);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp585 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
*(&local0) = $tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// line 556
panda$core$Int64 $tmp586 = (panda$core$Int64) {0};
panda$core$Bit $tmp587 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp588 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp586, param0, $tmp587);
panda$core$Int64 $tmp589 = $tmp588.min;
*(&local1) = $tmp589;
panda$core$Int64 $tmp590 = $tmp588.max;
panda$core$Bit $tmp591 = $tmp588.inclusive;
bool $tmp592 = $tmp591.value;
panda$core$Int64 $tmp593 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp594 = panda$core$Int64$convert$R$panda$core$UInt64($tmp593);
if ($tmp592) goto block6; else goto block7;
block6:;
int64_t $tmp595 = $tmp589.value;
int64_t $tmp596 = $tmp590.value;
bool $tmp597 = $tmp595 <= $tmp596;
panda$core$Bit $tmp598 = (panda$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block3; else goto block4;
block7:;
int64_t $tmp600 = $tmp589.value;
int64_t $tmp601 = $tmp590.value;
bool $tmp602 = $tmp600 < $tmp601;
panda$core$Bit $tmp603 = (panda$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block3; else goto block4;
block3:;
// line 557
panda$core$MutableString* $tmp605 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp605, param1);
goto block5;
block5:;
panda$core$Int64 $tmp606 = *(&local1);
int64_t $tmp607 = $tmp590.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 - $tmp608;
panda$core$Int64 $tmp610 = (panda$core$Int64) {$tmp609};
panda$core$UInt64 $tmp611 = panda$core$Int64$convert$R$panda$core$UInt64($tmp610);
if ($tmp592) goto block9; else goto block10;
block9:;
uint64_t $tmp612 = $tmp611.value;
uint64_t $tmp613 = $tmp594.value;
bool $tmp614 = $tmp612 >= $tmp613;
panda$core$Bit $tmp615 = (panda$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block8; else goto block4;
block10:;
uint64_t $tmp617 = $tmp611.value;
uint64_t $tmp618 = $tmp594.value;
bool $tmp619 = $tmp617 > $tmp618;
panda$core$Bit $tmp620 = (panda$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block8; else goto block4;
block8:;
int64_t $tmp622 = $tmp606.value;
int64_t $tmp623 = $tmp593.value;
int64_t $tmp624 = $tmp622 + $tmp623;
panda$core$Int64 $tmp625 = (panda$core$Int64) {$tmp624};
*(&local1) = $tmp625;
goto block3;
block4:;
// line 559
panda$core$MutableString* $tmp626 = *(&local0);
panda$core$String* $tmp627 = panda$core$MutableString$finish$R$panda$core$String($tmp626);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$MutableString* $tmp628 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp627;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* param0, panda$core$String* param1) {

// line 568
$fn630 $tmp629 = ($fn630) param0->$class->vtable[0];
panda$core$String* $tmp631 = $tmp629(param0);
panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
return $tmp632;

}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 581
panda$core$Int64* $tmp633 = &param0->_length;
panda$core$Int64 $tmp634 = *$tmp633;
panda$core$Int64* $tmp635 = &param1->_length;
panda$core$Int64 $tmp636 = *$tmp635;
panda$core$Bit $tmp637 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp634, $tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block1:;
// line 582
panda$core$Bit $tmp639 = panda$core$Bit$init$builtin_bit(false);
return $tmp639;
block2:;
// line 584
panda$core$Int64 $tmp640 = (panda$core$Int64) {0};
panda$core$Int64* $tmp641 = &param0->_length;
panda$core$Int64 $tmp642 = *$tmp641;
panda$core$Bit $tmp643 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp644 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp640, $tmp642, $tmp643);
panda$core$Int64 $tmp645 = $tmp644.min;
*(&local0) = $tmp645;
panda$core$Int64 $tmp646 = $tmp644.max;
panda$core$Bit $tmp647 = $tmp644.inclusive;
bool $tmp648 = $tmp647.value;
panda$core$Int64 $tmp649 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp650 = panda$core$Int64$convert$R$panda$core$UInt64($tmp649);
if ($tmp648) goto block6; else goto block7;
block6:;
int64_t $tmp651 = $tmp645.value;
int64_t $tmp652 = $tmp646.value;
bool $tmp653 = $tmp651 <= $tmp652;
panda$core$Bit $tmp654 = (panda$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block3; else goto block4;
block7:;
int64_t $tmp656 = $tmp645.value;
int64_t $tmp657 = $tmp646.value;
bool $tmp658 = $tmp656 < $tmp657;
panda$core$Bit $tmp659 = (panda$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block3; else goto block4;
block3:;
// line 585
panda$core$Char8** $tmp661 = &param0->data;
panda$core$Char8* $tmp662 = *$tmp661;
panda$core$Int64 $tmp663 = *(&local0);
int64_t $tmp664 = $tmp663.value;
panda$core$Char8 $tmp665 = $tmp662[$tmp664];
panda$core$Char8** $tmp666 = &param1->data;
panda$core$Char8* $tmp667 = *$tmp666;
panda$core$Int64 $tmp668 = *(&local0);
int64_t $tmp669 = $tmp668.value;
panda$core$Char8 $tmp670 = $tmp667[$tmp669];
panda$core$Bit $tmp671 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp665, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block8; else goto block9;
block8:;
// line 586
panda$core$Bit $tmp673 = panda$core$Bit$init$builtin_bit(false);
return $tmp673;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp674 = *(&local0);
int64_t $tmp675 = $tmp646.value;
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675 - $tmp676;
panda$core$Int64 $tmp678 = (panda$core$Int64) {$tmp677};
panda$core$UInt64 $tmp679 = panda$core$Int64$convert$R$panda$core$UInt64($tmp678);
if ($tmp648) goto block11; else goto block12;
block11:;
uint64_t $tmp680 = $tmp679.value;
uint64_t $tmp681 = $tmp650.value;
bool $tmp682 = $tmp680 >= $tmp681;
panda$core$Bit $tmp683 = (panda$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block10; else goto block4;
block12:;
uint64_t $tmp685 = $tmp679.value;
uint64_t $tmp686 = $tmp650.value;
bool $tmp687 = $tmp685 > $tmp686;
panda$core$Bit $tmp688 = (panda$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block10; else goto block4;
block10:;
int64_t $tmp690 = $tmp674.value;
int64_t $tmp691 = $tmp649.value;
int64_t $tmp692 = $tmp690 + $tmp691;
panda$core$Int64 $tmp693 = (panda$core$Int64) {$tmp692};
*(&local0) = $tmp693;
goto block3;
block4:;
// line 589
panda$core$Bit $tmp694 = panda$core$Bit$init$builtin_bit(true);
return $tmp694;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 596
panda$core$Int64 $tmp695 = param1.value;
*(&local0) = $tmp695;
// line 597
panda$core$Char8** $tmp696 = &param0->data;
panda$core$Char8* $tmp697 = *$tmp696;
panda$core$Int64 $tmp698 = *(&local0);
int64_t $tmp699 = $tmp698.value;
panda$core$Char8 $tmp700 = $tmp697[$tmp699];
*(&local1) = $tmp700;
// line 598
panda$core$Char8 $tmp701 = *(&local1);
panda$core$Int32 $tmp702 = panda$core$Char8$convert$R$panda$core$Int32($tmp701);
*(&local2) = $tmp702;
// line 599
panda$core$Char8 $tmp703 = *(&local1);
uint8_t $tmp704 = $tmp703.value;
int64_t $tmp705 = ((int64_t) $tmp704) & 255;
bool $tmp706 = $tmp705 < 192;
panda$core$Bit $tmp707 = panda$core$Bit$init$builtin_bit($tmp706);
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block1; else goto block2;
block1:;
// line 600
panda$core$Int32 $tmp709 = *(&local2);
panda$core$Char32 $tmp710 = panda$core$Char32$init$panda$core$Int32($tmp709);
return $tmp710;
block2:;
// line 602
panda$core$Char8 $tmp711 = *(&local1);
uint8_t $tmp712 = $tmp711.value;
int64_t $tmp713 = ((int64_t) $tmp712) & 255;
bool $tmp714 = $tmp713 < 224;
panda$core$Bit $tmp715 = panda$core$Bit$init$builtin_bit($tmp714);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block3; else goto block4;
block3:;
// line 603
panda$core$Int64 $tmp717 = *(&local0);
panda$core$Int64 $tmp718 = (panda$core$Int64) {1};
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719 + $tmp720;
panda$core$Int64 $tmp722 = (panda$core$Int64) {$tmp721};
panda$core$Int64* $tmp723 = &param0->_length;
panda$core$Int64 $tmp724 = *$tmp723;
int64_t $tmp725 = $tmp722.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 < $tmp726;
panda$core$Bit $tmp728 = (panda$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp730 = (panda$core$Int64) {603};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s731, $tmp730);
abort(); // unreachable
block5:;
// line 604
panda$core$Int32 $tmp732 = *(&local2);
panda$core$Int32 $tmp733 = (panda$core$Int32) {31};
panda$core$Int32 $tmp734 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp732, $tmp733);
panda$core$Int32 $tmp735 = (panda$core$Int32) {6};
panda$core$Int32 $tmp736 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp734, $tmp735);
panda$core$Char8** $tmp737 = &param0->data;
panda$core$Char8* $tmp738 = *$tmp737;
panda$core$Int64 $tmp739 = *(&local0);
panda$core$Int64 $tmp740 = (panda$core$Int64) {1};
int64_t $tmp741 = $tmp739.value;
int64_t $tmp742 = $tmp740.value;
int64_t $tmp743 = $tmp741 + $tmp742;
panda$core$Int64 $tmp744 = (panda$core$Int64) {$tmp743};
int64_t $tmp745 = $tmp744.value;
panda$core$Char8 $tmp746 = $tmp738[$tmp745];
panda$core$Int32 $tmp747 = panda$core$Char8$convert$R$panda$core$Int32($tmp746);
panda$core$Int32 $tmp748 = (panda$core$Int32) {63};
panda$core$Int32 $tmp749 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp747, $tmp748);
int32_t $tmp750 = $tmp736.value;
int32_t $tmp751 = $tmp749.value;
int32_t $tmp752 = $tmp750 + $tmp751;
panda$core$Int32 $tmp753 = (panda$core$Int32) {$tmp752};
*(&local2) = $tmp753;
// line 605
panda$core$Int32 $tmp754 = *(&local2);
panda$core$Char32 $tmp755 = panda$core$Char32$init$panda$core$Int32($tmp754);
return $tmp755;
block4:;
// line 607
panda$core$Char8 $tmp756 = *(&local1);
uint8_t $tmp757 = $tmp756.value;
int64_t $tmp758 = ((int64_t) $tmp757) & 255;
bool $tmp759 = $tmp758 < 240;
panda$core$Bit $tmp760 = panda$core$Bit$init$builtin_bit($tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block7; else goto block8;
block7:;
// line 608
panda$core$Int64 $tmp762 = *(&local0);
panda$core$Int64 $tmp763 = (panda$core$Int64) {2};
int64_t $tmp764 = $tmp762.value;
int64_t $tmp765 = $tmp763.value;
int64_t $tmp766 = $tmp764 + $tmp765;
panda$core$Int64 $tmp767 = (panda$core$Int64) {$tmp766};
panda$core$Int64* $tmp768 = &param0->_length;
panda$core$Int64 $tmp769 = *$tmp768;
int64_t $tmp770 = $tmp767.value;
int64_t $tmp771 = $tmp769.value;
bool $tmp772 = $tmp770 < $tmp771;
panda$core$Bit $tmp773 = (panda$core$Bit) {$tmp772};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp775 = (panda$core$Int64) {608};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s776, $tmp775);
abort(); // unreachable
block9:;
// line 609
panda$core$Int32 $tmp777 = *(&local2);
panda$core$Int32 $tmp778 = (panda$core$Int32) {15};
panda$core$Int32 $tmp779 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp777, $tmp778);
panda$core$Int32 $tmp780 = (panda$core$Int32) {12};
panda$core$Int32 $tmp781 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp779, $tmp780);
panda$core$Char8** $tmp782 = &param0->data;
panda$core$Char8* $tmp783 = *$tmp782;
panda$core$Int64 $tmp784 = *(&local0);
panda$core$Int64 $tmp785 = (panda$core$Int64) {1};
int64_t $tmp786 = $tmp784.value;
int64_t $tmp787 = $tmp785.value;
int64_t $tmp788 = $tmp786 + $tmp787;
panda$core$Int64 $tmp789 = (panda$core$Int64) {$tmp788};
int64_t $tmp790 = $tmp789.value;
panda$core$Char8 $tmp791 = $tmp783[$tmp790];
panda$core$Int32 $tmp792 = panda$core$Char8$convert$R$panda$core$Int32($tmp791);
panda$core$Int32 $tmp793 = (panda$core$Int32) {63};
panda$core$Int32 $tmp794 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp792, $tmp793);
panda$core$Int32 $tmp795 = (panda$core$Int32) {6};
panda$core$Int32 $tmp796 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp794, $tmp795);
int32_t $tmp797 = $tmp781.value;
int32_t $tmp798 = $tmp796.value;
int32_t $tmp799 = $tmp797 + $tmp798;
panda$core$Int32 $tmp800 = (panda$core$Int32) {$tmp799};
panda$core$Char8** $tmp801 = &param0->data;
panda$core$Char8* $tmp802 = *$tmp801;
panda$core$Int64 $tmp803 = *(&local0);
panda$core$Int64 $tmp804 = (panda$core$Int64) {2};
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804.value;
int64_t $tmp807 = $tmp805 + $tmp806;
panda$core$Int64 $tmp808 = (panda$core$Int64) {$tmp807};
int64_t $tmp809 = $tmp808.value;
panda$core$Char8 $tmp810 = $tmp802[$tmp809];
panda$core$Int32 $tmp811 = panda$core$Char8$convert$R$panda$core$Int32($tmp810);
panda$core$Int32 $tmp812 = (panda$core$Int32) {63};
panda$core$Int32 $tmp813 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp811, $tmp812);
int32_t $tmp814 = $tmp800.value;
int32_t $tmp815 = $tmp813.value;
int32_t $tmp816 = $tmp814 + $tmp815;
panda$core$Int32 $tmp817 = (panda$core$Int32) {$tmp816};
*(&local2) = $tmp817;
// line 611
panda$core$Int32 $tmp818 = *(&local2);
panda$core$Char32 $tmp819 = panda$core$Char32$init$panda$core$Int32($tmp818);
return $tmp819;
block8:;
// line 613
panda$core$Int64 $tmp820 = *(&local0);
panda$core$Int64 $tmp821 = (panda$core$Int64) {3};
int64_t $tmp822 = $tmp820.value;
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822 + $tmp823;
panda$core$Int64 $tmp825 = (panda$core$Int64) {$tmp824};
panda$core$Int64* $tmp826 = &param0->_length;
panda$core$Int64 $tmp827 = *$tmp826;
int64_t $tmp828 = $tmp825.value;
int64_t $tmp829 = $tmp827.value;
bool $tmp830 = $tmp828 < $tmp829;
panda$core$Bit $tmp831 = (panda$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp833 = (panda$core$Int64) {613};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s834, $tmp833);
abort(); // unreachable
block11:;
// line 614
panda$core$Int32 $tmp835 = *(&local2);
panda$core$Int32 $tmp836 = (panda$core$Int32) {7};
panda$core$Int32 $tmp837 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp835, $tmp836);
panda$core$Int32 $tmp838 = (panda$core$Int32) {18};
panda$core$Int32 $tmp839 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp837, $tmp838);
panda$core$Char8** $tmp840 = &param0->data;
panda$core$Char8* $tmp841 = *$tmp840;
panda$core$Int64 $tmp842 = *(&local0);
panda$core$Int64 $tmp843 = (panda$core$Int64) {1};
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844 + $tmp845;
panda$core$Int64 $tmp847 = (panda$core$Int64) {$tmp846};
int64_t $tmp848 = $tmp847.value;
panda$core$Char8 $tmp849 = $tmp841[$tmp848];
panda$core$Int32 $tmp850 = panda$core$Char8$convert$R$panda$core$Int32($tmp849);
panda$core$Int32 $tmp851 = (panda$core$Int32) {63};
panda$core$Int32 $tmp852 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp850, $tmp851);
panda$core$Int32 $tmp853 = (panda$core$Int32) {12};
panda$core$Int32 $tmp854 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp852, $tmp853);
int32_t $tmp855 = $tmp839.value;
int32_t $tmp856 = $tmp854.value;
int32_t $tmp857 = $tmp855 + $tmp856;
panda$core$Int32 $tmp858 = (panda$core$Int32) {$tmp857};
panda$core$Char8** $tmp859 = &param0->data;
panda$core$Char8* $tmp860 = *$tmp859;
panda$core$Int64 $tmp861 = *(&local0);
panda$core$Int64 $tmp862 = (panda$core$Int64) {2};
int64_t $tmp863 = $tmp861.value;
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863 + $tmp864;
panda$core$Int64 $tmp866 = (panda$core$Int64) {$tmp865};
int64_t $tmp867 = $tmp866.value;
panda$core$Char8 $tmp868 = $tmp860[$tmp867];
panda$core$Int32 $tmp869 = panda$core$Char8$convert$R$panda$core$Int32($tmp868);
panda$core$Int32 $tmp870 = (panda$core$Int32) {63};
panda$core$Int32 $tmp871 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp869, $tmp870);
panda$core$Int32 $tmp872 = (panda$core$Int32) {6};
panda$core$Int32 $tmp873 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp871, $tmp872);
int32_t $tmp874 = $tmp858.value;
int32_t $tmp875 = $tmp873.value;
int32_t $tmp876 = $tmp874 + $tmp875;
panda$core$Int32 $tmp877 = (panda$core$Int32) {$tmp876};
panda$core$Char8** $tmp878 = &param0->data;
panda$core$Char8* $tmp879 = *$tmp878;
panda$core$Int64 $tmp880 = *(&local0);
panda$core$Int64 $tmp881 = (panda$core$Int64) {3};
int64_t $tmp882 = $tmp880.value;
int64_t $tmp883 = $tmp881.value;
int64_t $tmp884 = $tmp882 + $tmp883;
panda$core$Int64 $tmp885 = (panda$core$Int64) {$tmp884};
int64_t $tmp886 = $tmp885.value;
panda$core$Char8 $tmp887 = $tmp879[$tmp886];
panda$core$Int32 $tmp888 = panda$core$Char8$convert$R$panda$core$Int32($tmp887);
panda$core$Int32 $tmp889 = (panda$core$Int32) {63};
panda$core$Int32 $tmp890 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp888, $tmp889);
int32_t $tmp891 = $tmp877.value;
int32_t $tmp892 = $tmp890.value;
int32_t $tmp893 = $tmp891 + $tmp892;
panda$core$Int32 $tmp894 = (panda$core$Int32) {$tmp893};
*(&local2) = $tmp894;
// line 617
panda$core$Int32 $tmp895 = *(&local2);
panda$core$Char32 $tmp896 = panda$core$Char32$init$panda$core$Int32($tmp895);
return $tmp896;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* param0, panda$core$Int64 param1) {

// line 626
panda$core$String$Index $tmp897 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp898 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp897, param1);
panda$core$Char32 $tmp899 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp898);
return $tmp899;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
// line 639
panda$core$String$Index $tmp900 = param1.max;
panda$core$Int64 $tmp901 = $tmp900.value;
panda$core$String$Index $tmp902 = param1.min;
panda$core$Int64 $tmp903 = $tmp902.value;
int64_t $tmp904 = $tmp901.value;
int64_t $tmp905 = $tmp903.value;
int64_t $tmp906 = $tmp904 - $tmp905;
panda$core$Int64 $tmp907 = (panda$core$Int64) {$tmp906};
*(&local0) = $tmp907;
// line 640
panda$core$Bit $tmp908 = param1.inclusive;
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block1; else goto block2;
block1:;
// line 641
panda$core$Int64 $tmp910 = *(&local0);
panda$core$Int64 $tmp911 = (panda$core$Int64) {1};
int64_t $tmp912 = $tmp910.value;
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912 + $tmp913;
panda$core$Int64 $tmp915 = (panda$core$Int64) {$tmp914};
*(&local0) = $tmp915;
goto block2;
block2:;
// line 643
panda$core$String* $tmp916 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8** $tmp917 = &param0->data;
panda$core$Char8* $tmp918 = *$tmp917;
panda$core$String$Index $tmp919 = param1.min;
panda$core$Int64 $tmp920 = $tmp919.value;
int64_t $tmp921 = $tmp920.value;
panda$core$Char8* $tmp922 = $tmp918 + $tmp921;
panda$core$Int64 $tmp923 = *(&local0);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp916, $tmp922, $tmp923, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
return $tmp916;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 659
// line 660
panda$core$String$Index$nullable $tmp924 = param1.min;
panda$core$Bit $tmp925 = panda$core$Bit$init$builtin_bit($tmp924.nonnull);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block1; else goto block3;
block1:;
// line 661
panda$core$String$Index$nullable $tmp927 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp927.value);
goto block2;
block3:;
// line 1
// line 664
panda$core$String$Index $tmp928 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp928;
goto block2;
block2:;
// line 667
panda$core$Bit $tmp929 = param1.inclusive;
*(&local1) = $tmp929;
// line 668
// line 669
panda$core$String$Index$nullable $tmp930 = param1.max;
panda$core$Bit $tmp931 = panda$core$Bit$init$builtin_bit($tmp930.nonnull);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block4; else goto block6;
block4:;
// line 670
panda$core$String$Index$nullable $tmp933 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp933.value);
goto block5;
block6:;
// line 1
// line 673
panda$core$String$Index $tmp934 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp934;
// line 674
panda$core$Bit $tmp935 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp935;
goto block5;
block5:;
// line 676
panda$core$String$Index $tmp936 = *(&local0);
panda$core$String$Index $tmp937 = *(&local2);
panda$core$Bit $tmp938 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp939 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp936, $tmp937, $tmp938);
panda$core$String* $tmp940 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp939);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
return $tmp940;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$Char8 local3;
// line 684
panda$core$String$Index $tmp941 = param1.min;
panda$core$Int64 $tmp942 = $tmp941.value;
*(&local0) = $tmp942;
// line 685
panda$core$MutableString* $tmp943 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp943);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp944 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
*(&local1) = $tmp943;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// line 686
panda$core$String$Index $tmp945 = param1.max;
panda$core$Int64 $tmp946 = $tmp945.value;
*(&local2) = $tmp946;
// line 687
panda$core$Bit $tmp947 = param1.inclusive;
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block1; else goto block2;
block1:;
// line 688
panda$core$Int64 $tmp949 = *(&local2);
panda$core$Int64 $tmp950 = (panda$core$Int64) {1};
int64_t $tmp951 = $tmp949.value;
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951 + $tmp952;
panda$core$Int64 $tmp954 = (panda$core$Int64) {$tmp953};
*(&local2) = $tmp954;
goto block2;
block2:;
// line 690
goto block3;
block3:;
panda$core$Int64 $tmp955 = *(&local0);
panda$core$Int64 $tmp956 = *(&local2);
int64_t $tmp957 = $tmp955.value;
int64_t $tmp958 = $tmp956.value;
bool $tmp959 = $tmp957 < $tmp958;
panda$core$Bit $tmp960 = (panda$core$Bit) {$tmp959};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block4; else goto block5;
block4:;
// line 691
panda$core$Char8** $tmp962 = &param0->data;
panda$core$Char8* $tmp963 = *$tmp962;
panda$core$Int64 $tmp964 = *(&local0);
int64_t $tmp965 = $tmp964.value;
panda$core$Char8 $tmp966 = $tmp963[$tmp965];
*(&local3) = $tmp966;
// line 692
panda$core$MutableString* $tmp967 = *(&local1);
panda$core$Char8 $tmp968 = *(&local3);
panda$core$MutableString$append$panda$core$Char8($tmp967, $tmp968);
// line 693
panda$core$Int64 $tmp969 = *(&local0);
panda$core$Int64 $tmp970 = (panda$core$Int64) {1};
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970.value;
int64_t $tmp973 = $tmp971 + $tmp972;
panda$core$Int64 $tmp974 = (panda$core$Int64) {$tmp973};
*(&local0) = $tmp974;
// line 694
panda$core$Char8 $tmp975 = *(&local3);
uint8_t $tmp976 = $tmp975.value;
int64_t $tmp977 = ((int64_t) $tmp976) & 255;
bool $tmp978 = $tmp977 >= 192;
panda$core$Bit $tmp979 = panda$core$Bit$init$builtin_bit($tmp978);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block6; else goto block7;
block6:;
// line 695
panda$core$MutableString* $tmp981 = *(&local1);
panda$core$Char8** $tmp982 = &param0->data;
panda$core$Char8* $tmp983 = *$tmp982;
panda$core$Int64 $tmp984 = *(&local0);
int64_t $tmp985 = $tmp984.value;
panda$core$Char8 $tmp986 = $tmp983[$tmp985];
panda$core$MutableString$append$panda$core$Char8($tmp981, $tmp986);
// line 696
panda$core$Int64 $tmp987 = *(&local0);
panda$core$Int64 $tmp988 = (panda$core$Int64) {1};
int64_t $tmp989 = $tmp987.value;
int64_t $tmp990 = $tmp988.value;
int64_t $tmp991 = $tmp989 + $tmp990;
panda$core$Int64 $tmp992 = (panda$core$Int64) {$tmp991};
*(&local0) = $tmp992;
goto block7;
block7:;
// line 698
panda$core$Char8 $tmp993 = *(&local3);
uint8_t $tmp994 = $tmp993.value;
int64_t $tmp995 = ((int64_t) $tmp994) & 255;
bool $tmp996 = $tmp995 >= 224;
panda$core$Bit $tmp997 = panda$core$Bit$init$builtin_bit($tmp996);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block8; else goto block9;
block8:;
// line 699
panda$core$MutableString* $tmp999 = *(&local1);
panda$core$Char8** $tmp1000 = &param0->data;
panda$core$Char8* $tmp1001 = *$tmp1000;
panda$core$Int64 $tmp1002 = *(&local0);
int64_t $tmp1003 = $tmp1002.value;
panda$core$Char8 $tmp1004 = $tmp1001[$tmp1003];
panda$core$MutableString$append$panda$core$Char8($tmp999, $tmp1004);
// line 700
panda$core$Int64 $tmp1005 = *(&local0);
panda$core$Int64 $tmp1006 = (panda$core$Int64) {1};
int64_t $tmp1007 = $tmp1005.value;
int64_t $tmp1008 = $tmp1006.value;
int64_t $tmp1009 = $tmp1007 + $tmp1008;
panda$core$Int64 $tmp1010 = (panda$core$Int64) {$tmp1009};
*(&local0) = $tmp1010;
goto block9;
block9:;
// line 702
panda$core$Char8 $tmp1011 = *(&local3);
uint8_t $tmp1012 = $tmp1011.value;
int64_t $tmp1013 = ((int64_t) $tmp1012) & 255;
bool $tmp1014 = $tmp1013 >= 240;
panda$core$Bit $tmp1015 = panda$core$Bit$init$builtin_bit($tmp1014);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block10; else goto block11;
block10:;
// line 703
panda$core$MutableString* $tmp1017 = *(&local1);
panda$core$Char8** $tmp1018 = &param0->data;
panda$core$Char8* $tmp1019 = *$tmp1018;
panda$core$Int64 $tmp1020 = *(&local0);
int64_t $tmp1021 = $tmp1020.value;
panda$core$Char8 $tmp1022 = $tmp1019[$tmp1021];
panda$core$MutableString$append$panda$core$Char8($tmp1017, $tmp1022);
// line 704
panda$core$Int64 $tmp1023 = *(&local0);
panda$core$Int64 $tmp1024 = (panda$core$Int64) {1};
int64_t $tmp1025 = $tmp1023.value;
int64_t $tmp1026 = $tmp1024.value;
int64_t $tmp1027 = $tmp1025 + $tmp1026;
panda$core$Int64 $tmp1028 = (panda$core$Int64) {$tmp1027};
*(&local0) = $tmp1028;
goto block11;
block11:;
goto block3;
block5:;
// line 707
panda$core$MutableString* $tmp1029 = *(&local1);
panda$core$String* $tmp1030 = panda$core$MutableString$finish$R$panda$core$String($tmp1029);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
panda$core$MutableString* $tmp1031 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp1030;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 718
panda$core$Int64* $tmp1032 = &param0->_length;
panda$core$Int64 $tmp1033 = *$tmp1032;
panda$core$Int64 $tmp1034 = (panda$core$Int64) {0};
panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1034);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block1; else goto block2;
block1:;
// line 719
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1037));
return &$s1038;
block2:;
// line 721
// line 722
panda$core$String$Index$nullable $tmp1039 = param1.min;
panda$core$Bit $tmp1040 = panda$core$Bit$init$builtin_bit($tmp1039.nonnull);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block3; else goto block5;
block3:;
// line 723
panda$core$String$Index$nullable $tmp1042 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1042.value);
goto block4;
block5:;
// line 1
// line 726
panda$core$String$Index $tmp1043 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1043;
goto block4;
block4:;
// line 729
panda$core$Bit $tmp1044 = param1.inclusive;
*(&local1) = $tmp1044;
// line 730
// line 731
panda$core$String$Index$nullable $tmp1045 = param1.max;
panda$core$Bit $tmp1046 = panda$core$Bit$init$builtin_bit($tmp1045.nonnull);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block6; else goto block8;
block6:;
// line 732
panda$core$String$Index$nullable $tmp1048 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1048.value);
goto block7;
block8:;
// line 1
// line 735
panda$core$String$Index $tmp1049 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1049;
// line 736
panda$core$Bit $tmp1050 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1050;
goto block7;
block7:;
// line 738
panda$core$String$Index $tmp1051 = *(&local0);
panda$core$String$Index $tmp1052 = *(&local2);
panda$core$Bit $tmp1053 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1054 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1051, $tmp1052, $tmp1053);
panda$core$String* $tmp1055 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1054);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
return $tmp1055;

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
// line 754
panda$core$Int64* $tmp1056 = &param0->_length;
panda$core$Int64 $tmp1057 = *$tmp1056;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {0};
panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block1; else goto block2;
block1:;
// line 755
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1061));
return &$s1062;
block2:;
// line 757
panda$core$Int64 $tmp1063 = param1.step;
*(&local0) = $tmp1063;
// line 759
// line 760
panda$core$String$Index$nullable $tmp1064 = param1.start;
panda$core$Bit $tmp1065 = panda$core$Bit$init$builtin_bit($tmp1064.nonnull);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block3; else goto block5;
block3:;
// line 761
panda$core$String$Index$nullable $tmp1067 = param1.start;
panda$core$Int64 $tmp1068 = ((panda$core$String$Index) $tmp1067.value).value;
*(&local1) = $tmp1068;
goto block4;
block5:;
// line 763
panda$core$Int64 $tmp1069 = *(&local0);
panda$core$Int64 $tmp1070 = (panda$core$Int64) {0};
int64_t $tmp1071 = $tmp1069.value;
int64_t $tmp1072 = $tmp1070.value;
bool $tmp1073 = $tmp1071 > $tmp1072;
panda$core$Bit $tmp1074 = (panda$core$Bit) {$tmp1073};
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block6; else goto block8;
block6:;
// line 764
panda$core$String$Index $tmp1076 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1077 = $tmp1076.value;
*(&local1) = $tmp1077;
goto block7;
block8:;
// line 1
// line 767
panda$core$String$Index $tmp1078 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp1079 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1078);
panda$core$Int64 $tmp1080 = $tmp1079.value;
*(&local1) = $tmp1080;
goto block7;
block7:;
goto block4;
block4:;
// line 770
// line 771
panda$core$String$Index$nullable $tmp1081 = param1.end;
panda$core$Bit $tmp1082 = panda$core$Bit$init$builtin_bit($tmp1081.nonnull);
bool $tmp1083 = $tmp1082.value;
if ($tmp1083) goto block9; else goto block11;
block9:;
// line 772
panda$core$String$Index$nullable $tmp1084 = param1.end;
panda$core$Int64 $tmp1085 = ((panda$core$String$Index) $tmp1084.value).value;
*(&local2) = $tmp1085;
goto block10;
block11:;
// line 774
panda$core$Int64 $tmp1086 = *(&local0);
panda$core$Int64 $tmp1087 = (panda$core$Int64) {0};
int64_t $tmp1088 = $tmp1086.value;
int64_t $tmp1089 = $tmp1087.value;
bool $tmp1090 = $tmp1088 > $tmp1089;
panda$core$Bit $tmp1091 = (panda$core$Bit) {$tmp1090};
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block12; else goto block14;
block12:;
// line 775
panda$core$String$Index $tmp1093 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1094 = $tmp1093.value;
*(&local2) = $tmp1094;
goto block13;
block14:;
// line 1
// line 778
panda$core$String$Index $tmp1095 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1096 = $tmp1095.value;
*(&local2) = $tmp1096;
goto block13;
block13:;
goto block10;
block10:;
// line 781
panda$core$MutableString* $tmp1097 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1097);
*(&local3) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1098 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
*(&local3) = $tmp1097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// line 782
panda$core$Int64 $tmp1099 = param1.step;
panda$core$Int64 $tmp1100 = (panda$core$Int64) {0};
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100.value;
bool $tmp1103 = $tmp1101 > $tmp1102;
panda$core$Bit $tmp1104 = (panda$core$Bit) {$tmp1103};
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block15; else goto block17;
block15:;
// line 783
goto block18;
block18:;
panda$core$Int64 $tmp1106 = *(&local1);
panda$core$Int64 $tmp1107 = *(&local2);
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107.value;
bool $tmp1110 = $tmp1108 < $tmp1109;
panda$core$Bit $tmp1111 = (panda$core$Bit) {$tmp1110};
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block19; else goto block20;
block19:;
// line 784
panda$core$Char8** $tmp1113 = &param0->data;
panda$core$Char8* $tmp1114 = *$tmp1113;
panda$core$Int64 $tmp1115 = *(&local1);
int64_t $tmp1116 = $tmp1115.value;
panda$core$Char8 $tmp1117 = $tmp1114[$tmp1116];
*(&local4) = $tmp1117;
// line 785
panda$core$MutableString* $tmp1118 = *(&local3);
panda$core$Char8 $tmp1119 = *(&local4);
panda$core$MutableString$append$panda$core$Char8($tmp1118, $tmp1119);
// line 786
panda$core$Int64 $tmp1120 = *(&local1);
panda$core$Int64 $tmp1121 = (panda$core$Int64) {1};
int64_t $tmp1122 = $tmp1120.value;
int64_t $tmp1123 = $tmp1121.value;
int64_t $tmp1124 = $tmp1122 + $tmp1123;
panda$core$Int64 $tmp1125 = (panda$core$Int64) {$tmp1124};
*(&local1) = $tmp1125;
// line 787
panda$core$Char8 $tmp1126 = *(&local4);
uint8_t $tmp1127 = $tmp1126.value;
int64_t $tmp1128 = ((int64_t) $tmp1127) & 255;
bool $tmp1129 = $tmp1128 >= 192;
panda$core$Bit $tmp1130 = panda$core$Bit$init$builtin_bit($tmp1129);
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block21; else goto block22;
block21:;
// line 788
panda$core$MutableString* $tmp1132 = *(&local3);
panda$core$Char8** $tmp1133 = &param0->data;
panda$core$Char8* $tmp1134 = *$tmp1133;
panda$core$Int64 $tmp1135 = *(&local1);
int64_t $tmp1136 = $tmp1135.value;
panda$core$Char8 $tmp1137 = $tmp1134[$tmp1136];
panda$core$MutableString$append$panda$core$Char8($tmp1132, $tmp1137);
// line 789
panda$core$Int64 $tmp1138 = *(&local1);
panda$core$Int64 $tmp1139 = (panda$core$Int64) {1};
int64_t $tmp1140 = $tmp1138.value;
int64_t $tmp1141 = $tmp1139.value;
int64_t $tmp1142 = $tmp1140 + $tmp1141;
panda$core$Int64 $tmp1143 = (panda$core$Int64) {$tmp1142};
*(&local1) = $tmp1143;
goto block22;
block22:;
// line 791
panda$core$Char8 $tmp1144 = *(&local4);
uint8_t $tmp1145 = $tmp1144.value;
int64_t $tmp1146 = ((int64_t) $tmp1145) & 255;
bool $tmp1147 = $tmp1146 >= 224;
panda$core$Bit $tmp1148 = panda$core$Bit$init$builtin_bit($tmp1147);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block23; else goto block24;
block23:;
// line 792
panda$core$MutableString* $tmp1150 = *(&local3);
panda$core$Char8** $tmp1151 = &param0->data;
panda$core$Char8* $tmp1152 = *$tmp1151;
panda$core$Int64 $tmp1153 = *(&local1);
int64_t $tmp1154 = $tmp1153.value;
panda$core$Char8 $tmp1155 = $tmp1152[$tmp1154];
panda$core$MutableString$append$panda$core$Char8($tmp1150, $tmp1155);
// line 793
panda$core$Int64 $tmp1156 = *(&local1);
panda$core$Int64 $tmp1157 = (panda$core$Int64) {1};
int64_t $tmp1158 = $tmp1156.value;
int64_t $tmp1159 = $tmp1157.value;
int64_t $tmp1160 = $tmp1158 + $tmp1159;
panda$core$Int64 $tmp1161 = (panda$core$Int64) {$tmp1160};
*(&local1) = $tmp1161;
goto block24;
block24:;
// line 795
panda$core$Char8 $tmp1162 = *(&local4);
uint8_t $tmp1163 = $tmp1162.value;
int64_t $tmp1164 = ((int64_t) $tmp1163) & 255;
bool $tmp1165 = $tmp1164 >= 240;
panda$core$Bit $tmp1166 = panda$core$Bit$init$builtin_bit($tmp1165);
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block25; else goto block26;
block25:;
// line 796
panda$core$MutableString* $tmp1168 = *(&local3);
panda$core$Char8** $tmp1169 = &param0->data;
panda$core$Char8* $tmp1170 = *$tmp1169;
panda$core$Int64 $tmp1171 = *(&local1);
int64_t $tmp1172 = $tmp1171.value;
panda$core$Char8 $tmp1173 = $tmp1170[$tmp1172];
panda$core$MutableString$append$panda$core$Char8($tmp1168, $tmp1173);
// line 797
panda$core$Int64 $tmp1174 = *(&local1);
panda$core$Int64 $tmp1175 = (panda$core$Int64) {1};
int64_t $tmp1176 = $tmp1174.value;
int64_t $tmp1177 = $tmp1175.value;
int64_t $tmp1178 = $tmp1176 + $tmp1177;
panda$core$Int64 $tmp1179 = (panda$core$Int64) {$tmp1178};
*(&local1) = $tmp1179;
goto block26;
block26:;
// line 799
panda$core$Int64 $tmp1180 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1181 = *(&local0);
panda$core$Bit $tmp1182 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1183 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1180, $tmp1181, $tmp1182);
panda$core$Int64 $tmp1184 = $tmp1183.min;
*(&local5) = $tmp1184;
panda$core$Int64 $tmp1185 = $tmp1183.max;
panda$core$Bit $tmp1186 = $tmp1183.inclusive;
bool $tmp1187 = $tmp1186.value;
panda$core$Int64 $tmp1188 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1189 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1188);
if ($tmp1187) goto block30; else goto block31;
block30:;
int64_t $tmp1190 = $tmp1184.value;
int64_t $tmp1191 = $tmp1185.value;
bool $tmp1192 = $tmp1190 <= $tmp1191;
panda$core$Bit $tmp1193 = (panda$core$Bit) {$tmp1192};
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block27; else goto block28;
block31:;
int64_t $tmp1195 = $tmp1184.value;
int64_t $tmp1196 = $tmp1185.value;
bool $tmp1197 = $tmp1195 < $tmp1196;
panda$core$Bit $tmp1198 = (panda$core$Bit) {$tmp1197};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block27; else goto block28;
block27:;
// line 800
panda$core$Int64 $tmp1200 = *(&local1);
panda$core$Int64 $tmp1201 = *(&local2);
int64_t $tmp1202 = $tmp1200.value;
int64_t $tmp1203 = $tmp1201.value;
bool $tmp1204 = $tmp1202 >= $tmp1203;
panda$core$Bit $tmp1205 = (panda$core$Bit) {$tmp1204};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block32; else goto block33;
block32:;
// line 801
panda$core$MutableString* $tmp1207 = *(&local3);
panda$core$String* $tmp1208 = panda$core$MutableString$convert$R$panda$core$String($tmp1207);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
panda$core$MutableString* $tmp1209 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1208;
block33:;
// line 803
panda$core$Int64 $tmp1210 = *(&local1);
panda$core$String$Index $tmp1211 = panda$core$String$Index$init$panda$core$Int64($tmp1210);
panda$core$String$Index $tmp1212 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1211);
panda$core$Int64 $tmp1213 = $tmp1212.value;
*(&local1) = $tmp1213;
goto block29;
block29:;
panda$core$Int64 $tmp1214 = *(&local5);
int64_t $tmp1215 = $tmp1185.value;
int64_t $tmp1216 = $tmp1214.value;
int64_t $tmp1217 = $tmp1215 - $tmp1216;
panda$core$Int64 $tmp1218 = (panda$core$Int64) {$tmp1217};
panda$core$UInt64 $tmp1219 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1218);
if ($tmp1187) goto block35; else goto block36;
block35:;
uint64_t $tmp1220 = $tmp1219.value;
uint64_t $tmp1221 = $tmp1189.value;
bool $tmp1222 = $tmp1220 >= $tmp1221;
panda$core$Bit $tmp1223 = (panda$core$Bit) {$tmp1222};
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block34; else goto block28;
block36:;
uint64_t $tmp1225 = $tmp1219.value;
uint64_t $tmp1226 = $tmp1189.value;
bool $tmp1227 = $tmp1225 > $tmp1226;
panda$core$Bit $tmp1228 = (panda$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block34; else goto block28;
block34:;
int64_t $tmp1230 = $tmp1214.value;
int64_t $tmp1231 = $tmp1188.value;
int64_t $tmp1232 = $tmp1230 + $tmp1231;
panda$core$Int64 $tmp1233 = (panda$core$Int64) {$tmp1232};
*(&local5) = $tmp1233;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 808
panda$core$Int64 $tmp1234 = param1.step;
panda$core$Int64 $tmp1235 = (panda$core$Int64) {0};
int64_t $tmp1236 = $tmp1234.value;
int64_t $tmp1237 = $tmp1235.value;
bool $tmp1238 = $tmp1236 < $tmp1237;
panda$core$Bit $tmp1239 = (panda$core$Bit) {$tmp1238};
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1241 = (panda$core$Int64) {808};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1242, $tmp1241);
abort(); // unreachable
block37:;
// line 809
goto block39;
block39:;
panda$core$Int64 $tmp1243 = *(&local1);
panda$core$Int64 $tmp1244 = *(&local2);
int64_t $tmp1245 = $tmp1243.value;
int64_t $tmp1246 = $tmp1244.value;
bool $tmp1247 = $tmp1245 > $tmp1246;
panda$core$Bit $tmp1248 = (panda$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block40; else goto block41;
block40:;
// line 810
panda$core$Char8** $tmp1250 = &param0->data;
panda$core$Char8* $tmp1251 = *$tmp1250;
panda$core$Int64 $tmp1252 = *(&local1);
int64_t $tmp1253 = $tmp1252.value;
panda$core$Char8 $tmp1254 = $tmp1251[$tmp1253];
*(&local6) = $tmp1254;
// line 811
panda$core$MutableString* $tmp1255 = *(&local3);
panda$core$Char8 $tmp1256 = *(&local6);
panda$core$MutableString$append$panda$core$Char8($tmp1255, $tmp1256);
// line 812
panda$core$Int64 $tmp1257 = *(&local1);
*(&local7) = $tmp1257;
// line 813
panda$core$Int64 $tmp1258 = *(&local1);
panda$core$Int64 $tmp1259 = (panda$core$Int64) {1};
int64_t $tmp1260 = $tmp1258.value;
int64_t $tmp1261 = $tmp1259.value;
int64_t $tmp1262 = $tmp1260 + $tmp1261;
panda$core$Int64 $tmp1263 = (panda$core$Int64) {$tmp1262};
*(&local1) = $tmp1263;
// line 814
panda$core$Char8 $tmp1264 = *(&local6);
uint8_t $tmp1265 = $tmp1264.value;
int64_t $tmp1266 = ((int64_t) $tmp1265) & 255;
bool $tmp1267 = $tmp1266 >= 192;
panda$core$Bit $tmp1268 = panda$core$Bit$init$builtin_bit($tmp1267);
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block42; else goto block43;
block42:;
// line 815
panda$core$MutableString* $tmp1270 = *(&local3);
panda$core$Char8** $tmp1271 = &param0->data;
panda$core$Char8* $tmp1272 = *$tmp1271;
panda$core$Int64 $tmp1273 = *(&local1);
int64_t $tmp1274 = $tmp1273.value;
panda$core$Char8 $tmp1275 = $tmp1272[$tmp1274];
panda$core$MutableString$append$panda$core$Char8($tmp1270, $tmp1275);
// line 816
panda$core$Int64 $tmp1276 = *(&local1);
panda$core$Int64 $tmp1277 = (panda$core$Int64) {1};
int64_t $tmp1278 = $tmp1276.value;
int64_t $tmp1279 = $tmp1277.value;
int64_t $tmp1280 = $tmp1278 + $tmp1279;
panda$core$Int64 $tmp1281 = (panda$core$Int64) {$tmp1280};
*(&local1) = $tmp1281;
goto block43;
block43:;
// line 818
panda$core$Char8 $tmp1282 = *(&local6);
uint8_t $tmp1283 = $tmp1282.value;
int64_t $tmp1284 = ((int64_t) $tmp1283) & 255;
bool $tmp1285 = $tmp1284 >= 224;
panda$core$Bit $tmp1286 = panda$core$Bit$init$builtin_bit($tmp1285);
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block44; else goto block45;
block44:;
// line 819
panda$core$MutableString* $tmp1288 = *(&local3);
panda$core$Char8** $tmp1289 = &param0->data;
panda$core$Char8* $tmp1290 = *$tmp1289;
panda$core$Int64 $tmp1291 = *(&local1);
int64_t $tmp1292 = $tmp1291.value;
panda$core$Char8 $tmp1293 = $tmp1290[$tmp1292];
panda$core$MutableString$append$panda$core$Char8($tmp1288, $tmp1293);
// line 820
panda$core$Int64 $tmp1294 = *(&local1);
panda$core$Int64 $tmp1295 = (panda$core$Int64) {1};
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295.value;
int64_t $tmp1298 = $tmp1296 + $tmp1297;
panda$core$Int64 $tmp1299 = (panda$core$Int64) {$tmp1298};
*(&local1) = $tmp1299;
goto block45;
block45:;
// line 822
panda$core$Char8 $tmp1300 = *(&local6);
uint8_t $tmp1301 = $tmp1300.value;
int64_t $tmp1302 = ((int64_t) $tmp1301) & 255;
bool $tmp1303 = $tmp1302 >= 240;
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit($tmp1303);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block46; else goto block47;
block46:;
// line 823
panda$core$MutableString* $tmp1306 = *(&local3);
panda$core$Char8** $tmp1307 = &param0->data;
panda$core$Char8* $tmp1308 = *$tmp1307;
panda$core$Int64 $tmp1309 = *(&local1);
int64_t $tmp1310 = $tmp1309.value;
panda$core$Char8 $tmp1311 = $tmp1308[$tmp1310];
panda$core$MutableString$append$panda$core$Char8($tmp1306, $tmp1311);
goto block47;
block47:;
// line 825
panda$core$Int64 $tmp1312 = *(&local7);
panda$core$Int64 $tmp1313 = (panda$core$Int64) {1};
int64_t $tmp1314 = $tmp1312.value;
int64_t $tmp1315 = $tmp1313.value;
int64_t $tmp1316 = $tmp1314 - $tmp1315;
panda$core$Int64 $tmp1317 = (panda$core$Int64) {$tmp1316};
*(&local1) = $tmp1317;
// line 826
goto block48;
block48:;
panda$core$Char8** $tmp1318 = &param0->data;
panda$core$Char8* $tmp1319 = *$tmp1318;
panda$core$Int64 $tmp1320 = *(&local1);
int64_t $tmp1321 = $tmp1320.value;
panda$core$Char8 $tmp1322 = $tmp1319[$tmp1321];
uint8_t $tmp1323 = $tmp1322.value;
int64_t $tmp1324 = ((int64_t) $tmp1323) & 255;
bool $tmp1325 = $tmp1324 >= 128;
panda$core$Char8** $tmp1326 = &param0->data;
panda$core$Char8* $tmp1327 = *$tmp1326;
panda$core$Int64 $tmp1328 = *(&local1);
int64_t $tmp1329 = $tmp1328.value;
panda$core$Char8 $tmp1330 = $tmp1327[$tmp1329];
uint8_t $tmp1331 = $tmp1330.value;
int64_t $tmp1332 = ((int64_t) $tmp1331) & 255;
bool $tmp1333 = $tmp1332 < 192;
bool $tmp1334 = $tmp1325 & $tmp1333;
panda$core$Bit $tmp1335 = panda$core$Bit$init$builtin_bit($tmp1334);
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block49; else goto block50;
block49:;
// line 827
panda$core$Int64 $tmp1337 = *(&local1);
panda$core$Int64 $tmp1338 = (panda$core$Int64) {1};
int64_t $tmp1339 = $tmp1337.value;
int64_t $tmp1340 = $tmp1338.value;
int64_t $tmp1341 = $tmp1339 - $tmp1340;
panda$core$Int64 $tmp1342 = (panda$core$Int64) {$tmp1341};
*(&local1) = $tmp1342;
goto block48;
block50:;
// line 829
panda$core$Int64 $tmp1343 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp1344 = *(&local0);
panda$core$Int64 $tmp1345 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1346 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1347 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1343, $tmp1344, $tmp1345, $tmp1346);
panda$core$Int64 $tmp1348 = $tmp1347.start;
*(&local8) = $tmp1348;
panda$core$Int64 $tmp1349 = $tmp1347.end;
panda$core$Int64 $tmp1350 = $tmp1347.step;
panda$core$UInt64 $tmp1351 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1350);
panda$core$Int64 $tmp1352 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1350);
panda$core$UInt64 $tmp1353 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1352);
panda$core$Bit $tmp1354 = $tmp1347.inclusive;
bool $tmp1355 = $tmp1354.value;
panda$core$Int64 $tmp1356 = (panda$core$Int64) {0};
int64_t $tmp1357 = $tmp1350.value;
int64_t $tmp1358 = $tmp1356.value;
bool $tmp1359 = $tmp1357 >= $tmp1358;
panda$core$Bit $tmp1360 = (panda$core$Bit) {$tmp1359};
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block54; else goto block55;
block54:;
if ($tmp1355) goto block56; else goto block57;
block56:;
int64_t $tmp1362 = $tmp1348.value;
int64_t $tmp1363 = $tmp1349.value;
bool $tmp1364 = $tmp1362 <= $tmp1363;
panda$core$Bit $tmp1365 = (panda$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block51; else goto block52;
block57:;
int64_t $tmp1367 = $tmp1348.value;
int64_t $tmp1368 = $tmp1349.value;
bool $tmp1369 = $tmp1367 < $tmp1368;
panda$core$Bit $tmp1370 = (panda$core$Bit) {$tmp1369};
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block51; else goto block52;
block55:;
if ($tmp1355) goto block58; else goto block59;
block58:;
int64_t $tmp1372 = $tmp1348.value;
int64_t $tmp1373 = $tmp1349.value;
bool $tmp1374 = $tmp1372 >= $tmp1373;
panda$core$Bit $tmp1375 = (panda$core$Bit) {$tmp1374};
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block51; else goto block52;
block59:;
int64_t $tmp1377 = $tmp1348.value;
int64_t $tmp1378 = $tmp1349.value;
bool $tmp1379 = $tmp1377 > $tmp1378;
panda$core$Bit $tmp1380 = (panda$core$Bit) {$tmp1379};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block51; else goto block52;
block51:;
// line 830
panda$core$Int64 $tmp1382 = *(&local1);
panda$core$Int64 $tmp1383 = *(&local2);
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383.value;
bool $tmp1386 = $tmp1384 <= $tmp1385;
panda$core$Bit $tmp1387 = (panda$core$Bit) {$tmp1386};
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block60; else goto block61;
block60:;
// line 831
panda$core$MutableString* $tmp1389 = *(&local3);
panda$core$String* $tmp1390 = panda$core$MutableString$convert$R$panda$core$String($tmp1389);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
panda$core$MutableString* $tmp1391 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1390;
block61:;
// line 833
panda$core$Int64 $tmp1392 = *(&local1);
panda$core$String$Index $tmp1393 = panda$core$String$Index$init$panda$core$Int64($tmp1392);
panda$core$String$Index $tmp1394 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1393);
panda$core$Int64 $tmp1395 = $tmp1394.value;
*(&local1) = $tmp1395;
goto block53;
block53:;
panda$core$Int64 $tmp1396 = *(&local8);
if ($tmp1361) goto block63; else goto block64;
block63:;
int64_t $tmp1397 = $tmp1349.value;
int64_t $tmp1398 = $tmp1396.value;
int64_t $tmp1399 = $tmp1397 - $tmp1398;
panda$core$Int64 $tmp1400 = (panda$core$Int64) {$tmp1399};
panda$core$UInt64 $tmp1401 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1400);
if ($tmp1355) goto block65; else goto block66;
block65:;
uint64_t $tmp1402 = $tmp1401.value;
uint64_t $tmp1403 = $tmp1351.value;
bool $tmp1404 = $tmp1402 >= $tmp1403;
panda$core$Bit $tmp1405 = (panda$core$Bit) {$tmp1404};
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block62; else goto block52;
block66:;
uint64_t $tmp1407 = $tmp1401.value;
uint64_t $tmp1408 = $tmp1351.value;
bool $tmp1409 = $tmp1407 > $tmp1408;
panda$core$Bit $tmp1410 = (panda$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block62; else goto block52;
block64:;
int64_t $tmp1412 = $tmp1396.value;
int64_t $tmp1413 = $tmp1349.value;
int64_t $tmp1414 = $tmp1412 - $tmp1413;
panda$core$Int64 $tmp1415 = (panda$core$Int64) {$tmp1414};
panda$core$UInt64 $tmp1416 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1415);
if ($tmp1355) goto block67; else goto block68;
block67:;
uint64_t $tmp1417 = $tmp1416.value;
uint64_t $tmp1418 = $tmp1353.value;
bool $tmp1419 = $tmp1417 >= $tmp1418;
panda$core$Bit $tmp1420 = (panda$core$Bit) {$tmp1419};
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block62; else goto block52;
block68:;
uint64_t $tmp1422 = $tmp1416.value;
uint64_t $tmp1423 = $tmp1353.value;
bool $tmp1424 = $tmp1422 > $tmp1423;
panda$core$Bit $tmp1425 = (panda$core$Bit) {$tmp1424};
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block62; else goto block52;
block62:;
int64_t $tmp1427 = $tmp1396.value;
int64_t $tmp1428 = $tmp1350.value;
int64_t $tmp1429 = $tmp1427 + $tmp1428;
panda$core$Int64 $tmp1430 = (panda$core$Int64) {$tmp1429};
*(&local8) = $tmp1430;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 837
panda$core$Bit $tmp1431 = param1.inclusive;
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block69; else goto block70;
block69:;
*(&local11) = $tmp1431;
goto block71;
block70:;
panda$core$String$Index$nullable $tmp1433 = param1.end;
panda$core$Bit $tmp1434 = panda$core$Bit$init$builtin_bit(!$tmp1433.nonnull);
*(&local11) = $tmp1434;
goto block71;
block71:;
panda$core$Bit $tmp1435 = *(&local11);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block72; else goto block73;
block72:;
panda$core$Int64 $tmp1437 = *(&local1);
panda$core$Int64 $tmp1438 = *(&local2);
panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1437, $tmp1438);
*(&local10) = $tmp1439;
goto block74;
block73:;
*(&local10) = $tmp1435;
goto block74;
block74:;
panda$core$Bit $tmp1440 = *(&local10);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block75; else goto block76;
block75:;
panda$core$Int64 $tmp1442 = *(&local2);
panda$core$Int64* $tmp1443 = &param0->_length;
panda$core$Int64 $tmp1444 = *$tmp1443;
int64_t $tmp1445 = $tmp1442.value;
int64_t $tmp1446 = $tmp1444.value;
bool $tmp1447 = $tmp1445 < $tmp1446;
panda$core$Bit $tmp1448 = (panda$core$Bit) {$tmp1447};
*(&local9) = $tmp1448;
goto block77;
block76:;
*(&local9) = $tmp1440;
goto block77;
block77:;
panda$core$Bit $tmp1449 = *(&local9);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block78; else goto block79;
block78:;
// line 838
panda$core$Char8** $tmp1451 = &param0->data;
panda$core$Char8* $tmp1452 = *$tmp1451;
panda$core$Int64 $tmp1453 = *(&local1);
int64_t $tmp1454 = $tmp1453.value;
panda$core$Char8 $tmp1455 = $tmp1452[$tmp1454];
*(&local12) = $tmp1455;
// line 839
panda$core$MutableString* $tmp1456 = *(&local3);
panda$core$Char8 $tmp1457 = *(&local12);
panda$core$MutableString$append$panda$core$Char8($tmp1456, $tmp1457);
// line 840
panda$core$Int64 $tmp1458 = *(&local1);
panda$core$Int64 $tmp1459 = (panda$core$Int64) {1};
int64_t $tmp1460 = $tmp1458.value;
int64_t $tmp1461 = $tmp1459.value;
int64_t $tmp1462 = $tmp1460 + $tmp1461;
panda$core$Int64 $tmp1463 = (panda$core$Int64) {$tmp1462};
*(&local1) = $tmp1463;
// line 841
panda$core$Char8 $tmp1464 = *(&local12);
uint8_t $tmp1465 = $tmp1464.value;
int64_t $tmp1466 = ((int64_t) $tmp1465) & 255;
bool $tmp1467 = $tmp1466 >= 192;
panda$core$Bit $tmp1468 = panda$core$Bit$init$builtin_bit($tmp1467);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block80; else goto block81;
block80:;
// line 842
panda$core$MutableString* $tmp1470 = *(&local3);
panda$core$Char8** $tmp1471 = &param0->data;
panda$core$Char8* $tmp1472 = *$tmp1471;
panda$core$Int64 $tmp1473 = *(&local1);
int64_t $tmp1474 = $tmp1473.value;
panda$core$Char8 $tmp1475 = $tmp1472[$tmp1474];
panda$core$MutableString$append$panda$core$Char8($tmp1470, $tmp1475);
// line 843
panda$core$Int64 $tmp1476 = *(&local1);
panda$core$Int64 $tmp1477 = (panda$core$Int64) {1};
int64_t $tmp1478 = $tmp1476.value;
int64_t $tmp1479 = $tmp1477.value;
int64_t $tmp1480 = $tmp1478 + $tmp1479;
panda$core$Int64 $tmp1481 = (panda$core$Int64) {$tmp1480};
*(&local1) = $tmp1481;
goto block81;
block81:;
// line 845
panda$core$Char8 $tmp1482 = *(&local12);
uint8_t $tmp1483 = $tmp1482.value;
int64_t $tmp1484 = ((int64_t) $tmp1483) & 255;
bool $tmp1485 = $tmp1484 >= 224;
panda$core$Bit $tmp1486 = panda$core$Bit$init$builtin_bit($tmp1485);
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block82; else goto block83;
block82:;
// line 846
panda$core$MutableString* $tmp1488 = *(&local3);
panda$core$Char8** $tmp1489 = &param0->data;
panda$core$Char8* $tmp1490 = *$tmp1489;
panda$core$Int64 $tmp1491 = *(&local1);
int64_t $tmp1492 = $tmp1491.value;
panda$core$Char8 $tmp1493 = $tmp1490[$tmp1492];
panda$core$MutableString$append$panda$core$Char8($tmp1488, $tmp1493);
// line 847
panda$core$Int64 $tmp1494 = *(&local1);
panda$core$Int64 $tmp1495 = (panda$core$Int64) {1};
int64_t $tmp1496 = $tmp1494.value;
int64_t $tmp1497 = $tmp1495.value;
int64_t $tmp1498 = $tmp1496 + $tmp1497;
panda$core$Int64 $tmp1499 = (panda$core$Int64) {$tmp1498};
*(&local1) = $tmp1499;
goto block83;
block83:;
// line 849
panda$core$Char8 $tmp1500 = *(&local12);
uint8_t $tmp1501 = $tmp1500.value;
int64_t $tmp1502 = ((int64_t) $tmp1501) & 255;
bool $tmp1503 = $tmp1502 >= 240;
panda$core$Bit $tmp1504 = panda$core$Bit$init$builtin_bit($tmp1503);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block84; else goto block85;
block84:;
// line 850
panda$core$MutableString* $tmp1506 = *(&local3);
panda$core$Char8** $tmp1507 = &param0->data;
panda$core$Char8* $tmp1508 = *$tmp1507;
panda$core$Int64 $tmp1509 = *(&local1);
int64_t $tmp1510 = $tmp1509.value;
panda$core$Char8 $tmp1511 = $tmp1508[$tmp1510];
panda$core$MutableString$append$panda$core$Char8($tmp1506, $tmp1511);
goto block85;
block85:;
goto block79;
block79:;
// line 853
panda$core$MutableString* $tmp1512 = *(&local3);
panda$core$String* $tmp1513 = panda$core$MutableString$finish$R$panda$core$String($tmp1512);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
panda$core$MutableString* $tmp1514 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1513;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 862
// line 863
panda$core$Int64$nullable $tmp1515 = param1.min;
panda$core$Bit $tmp1516 = panda$core$Bit$init$builtin_bit($tmp1515.nonnull);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block1; else goto block3;
block1:;
// line 864
panda$core$String$Index $tmp1518 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1519 = param1.min;
panda$core$String$Index $tmp1520 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1518, ((panda$core$Int64) $tmp1519.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1520, true });
goto block2;
block3:;
// line 1
// line 867
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 869
// line 870
panda$core$Int64$nullable $tmp1521 = param1.max;
panda$core$Bit $tmp1522 = panda$core$Bit$init$builtin_bit($tmp1521.nonnull);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block4; else goto block6;
block4:;
// line 871
panda$core$String$Index $tmp1524 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1525 = param1.max;
panda$core$String$Index $tmp1526 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1524, ((panda$core$Int64) $tmp1525.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1526, true });
goto block5;
block6:;
// line 1
// line 874
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 876
panda$core$String$Index$nullable $tmp1527 = *(&local0);
panda$core$String$Index$nullable $tmp1528 = *(&local1);
panda$core$Bit $tmp1529 = param1.inclusive;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1530 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit($tmp1527, $tmp1528, $tmp1529);
panda$core$String* $tmp1531 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
return $tmp1531;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 885
// line 886
panda$core$Int64$nullable $tmp1532 = param1.start;
panda$core$Bit $tmp1533 = panda$core$Bit$init$builtin_bit($tmp1532.nonnull);
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block1; else goto block3;
block1:;
// line 887
panda$core$String$Index $tmp1535 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1536 = param1.start;
panda$core$String$Index $tmp1537 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1535, ((panda$core$Int64) $tmp1536.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1537, true });
goto block2;
block3:;
// line 1
// line 890
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 892
// line 893
panda$core$Int64$nullable $tmp1538 = param1.end;
panda$core$Bit $tmp1539 = panda$core$Bit$init$builtin_bit($tmp1538.nonnull);
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block4; else goto block6;
block4:;
// line 894
panda$core$String$Index $tmp1541 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1542 = param1.end;
panda$core$String$Index $tmp1543 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1541, ((panda$core$Int64) $tmp1542.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1543, true });
goto block5;
block6:;
// line 1
// line 897
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 899
panda$core$String$Index$nullable $tmp1544 = *(&local0);
panda$core$String$Index$nullable $tmp1545 = *(&local1);
panda$core$Int64 $tmp1546 = param1.step;
panda$core$Bit $tmp1547 = param1.inclusive;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp1548 = panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit($tmp1544, $tmp1545, $tmp1546, $tmp1547);
panda$core$String* $tmp1549 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(param0, $tmp1548);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
return $tmp1549;

}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 906
panda$core$Int64 $tmp1550 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1551 = &param0->_length;
panda$core$Int64 $tmp1552 = *$tmp1551;
panda$core$Bit $tmp1553 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1554 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1550, $tmp1552, $tmp1553);
panda$core$Int64 $tmp1555 = $tmp1554.min;
*(&local0) = $tmp1555;
panda$core$Int64 $tmp1556 = $tmp1554.max;
panda$core$Bit $tmp1557 = $tmp1554.inclusive;
bool $tmp1558 = $tmp1557.value;
panda$core$Int64 $tmp1559 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1560 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1559);
if ($tmp1558) goto block4; else goto block5;
block4:;
int64_t $tmp1561 = $tmp1555.value;
int64_t $tmp1562 = $tmp1556.value;
bool $tmp1563 = $tmp1561 <= $tmp1562;
panda$core$Bit $tmp1564 = (panda$core$Bit) {$tmp1563};
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block1; else goto block2;
block5:;
int64_t $tmp1566 = $tmp1555.value;
int64_t $tmp1567 = $tmp1556.value;
bool $tmp1568 = $tmp1566 < $tmp1567;
panda$core$Bit $tmp1569 = (panda$core$Bit) {$tmp1568};
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block1; else goto block2;
block1:;
// line 907
panda$core$Char8** $tmp1571 = &param0->data;
panda$core$Char8* $tmp1572 = *$tmp1571;
panda$core$Int64 $tmp1573 = *(&local0);
int64_t $tmp1574 = $tmp1573.value;
panda$core$Char8 $tmp1575 = $tmp1572[$tmp1574];
panda$core$Bit $tmp1576 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp1575, param1);
bool $tmp1577 = $tmp1576.value;
if ($tmp1577) goto block6; else goto block7;
block6:;
// line 908
panda$core$Bit $tmp1578 = panda$core$Bit$init$builtin_bit(true);
return $tmp1578;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp1579 = *(&local0);
int64_t $tmp1580 = $tmp1556.value;
int64_t $tmp1581 = $tmp1579.value;
int64_t $tmp1582 = $tmp1580 - $tmp1581;
panda$core$Int64 $tmp1583 = (panda$core$Int64) {$tmp1582};
panda$core$UInt64 $tmp1584 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1583);
if ($tmp1558) goto block9; else goto block10;
block9:;
uint64_t $tmp1585 = $tmp1584.value;
uint64_t $tmp1586 = $tmp1560.value;
bool $tmp1587 = $tmp1585 >= $tmp1586;
panda$core$Bit $tmp1588 = (panda$core$Bit) {$tmp1587};
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block8; else goto block2;
block10:;
uint64_t $tmp1590 = $tmp1584.value;
uint64_t $tmp1591 = $tmp1560.value;
bool $tmp1592 = $tmp1590 > $tmp1591;
panda$core$Bit $tmp1593 = (panda$core$Bit) {$tmp1592};
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block8; else goto block2;
block8:;
int64_t $tmp1595 = $tmp1579.value;
int64_t $tmp1596 = $tmp1559.value;
int64_t $tmp1597 = $tmp1595 + $tmp1596;
panda$core$Int64 $tmp1598 = (panda$core$Int64) {$tmp1597};
*(&local0) = $tmp1598;
goto block1;
block2:;
// line 911
panda$core$Bit $tmp1599 = panda$core$Bit$init$builtin_bit(false);
return $tmp1599;

}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

// line 918
panda$core$String$Index$nullable $tmp1600 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param0, param1);
panda$core$Bit $tmp1601 = panda$core$Bit$init$builtin_bit($tmp1600.nonnull);
return $tmp1601;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 929
panda$core$String$Index $tmp1602 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1603 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1602);
return $tmp1603;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 941
panda$core$Int64* $tmp1604 = &param0->_length;
panda$core$Int64 $tmp1605 = *$tmp1604;
panda$core$Int64* $tmp1606 = &param1->_length;
panda$core$Int64 $tmp1607 = *$tmp1606;
int64_t $tmp1608 = $tmp1605.value;
int64_t $tmp1609 = $tmp1607.value;
bool $tmp1610 = $tmp1608 < $tmp1609;
panda$core$Bit $tmp1611 = (panda$core$Bit) {$tmp1610};
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block1; else goto block2;
block1:;
// line 942
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 944
panda$core$Int64 $tmp1613 = param2.value;
panda$core$Int64* $tmp1614 = &param0->_length;
panda$core$Int64 $tmp1615 = *$tmp1614;
panda$core$Int64* $tmp1616 = &param1->_length;
panda$core$Int64 $tmp1617 = *$tmp1616;
int64_t $tmp1618 = $tmp1615.value;
int64_t $tmp1619 = $tmp1617.value;
int64_t $tmp1620 = $tmp1618 - $tmp1619;
panda$core$Int64 $tmp1621 = (panda$core$Int64) {$tmp1620};
panda$core$Bit $tmp1622 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp1623 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1613, $tmp1621, $tmp1622);
panda$core$Int64 $tmp1624 = $tmp1623.min;
*(&local0) = $tmp1624;
panda$core$Int64 $tmp1625 = $tmp1623.max;
panda$core$Bit $tmp1626 = $tmp1623.inclusive;
bool $tmp1627 = $tmp1626.value;
panda$core$Int64 $tmp1628 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1629 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1628);
if ($tmp1627) goto block6; else goto block7;
block6:;
int64_t $tmp1630 = $tmp1624.value;
int64_t $tmp1631 = $tmp1625.value;
bool $tmp1632 = $tmp1630 <= $tmp1631;
panda$core$Bit $tmp1633 = (panda$core$Bit) {$tmp1632};
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block3; else goto block4;
block7:;
int64_t $tmp1635 = $tmp1624.value;
int64_t $tmp1636 = $tmp1625.value;
bool $tmp1637 = $tmp1635 < $tmp1636;
panda$core$Bit $tmp1638 = (panda$core$Bit) {$tmp1637};
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block3; else goto block4;
block3:;
// line 945
panda$core$Int64 $tmp1640 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1641 = &param1->_length;
panda$core$Int64 $tmp1642 = *$tmp1641;
panda$core$Bit $tmp1643 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1644 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1640, $tmp1642, $tmp1643);
panda$core$Int64 $tmp1645 = $tmp1644.min;
*(&local1) = $tmp1645;
panda$core$Int64 $tmp1646 = $tmp1644.max;
panda$core$Bit $tmp1647 = $tmp1644.inclusive;
bool $tmp1648 = $tmp1647.value;
panda$core$Int64 $tmp1649 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1650 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1649);
if ($tmp1648) goto block11; else goto block12;
block11:;
int64_t $tmp1651 = $tmp1645.value;
int64_t $tmp1652 = $tmp1646.value;
bool $tmp1653 = $tmp1651 <= $tmp1652;
panda$core$Bit $tmp1654 = (panda$core$Bit) {$tmp1653};
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block8; else goto block9;
block12:;
int64_t $tmp1656 = $tmp1645.value;
int64_t $tmp1657 = $tmp1646.value;
bool $tmp1658 = $tmp1656 < $tmp1657;
panda$core$Bit $tmp1659 = (panda$core$Bit) {$tmp1658};
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block8; else goto block9;
block8:;
// line 946
panda$core$Char8** $tmp1661 = &param0->data;
panda$core$Char8* $tmp1662 = *$tmp1661;
panda$core$Int64 $tmp1663 = *(&local0);
panda$core$Int64 $tmp1664 = *(&local1);
int64_t $tmp1665 = $tmp1663.value;
int64_t $tmp1666 = $tmp1664.value;
int64_t $tmp1667 = $tmp1665 + $tmp1666;
panda$core$Int64 $tmp1668 = (panda$core$Int64) {$tmp1667};
int64_t $tmp1669 = $tmp1668.value;
panda$core$Char8 $tmp1670 = $tmp1662[$tmp1669];
panda$core$Char8** $tmp1671 = &param1->data;
panda$core$Char8* $tmp1672 = *$tmp1671;
panda$core$Int64 $tmp1673 = *(&local1);
int64_t $tmp1674 = $tmp1673.value;
panda$core$Char8 $tmp1675 = $tmp1672[$tmp1674];
panda$core$Bit $tmp1676 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1670, $tmp1675);
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block13; else goto block14;
block13:;
// line 947
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp1678 = *(&local1);
int64_t $tmp1679 = $tmp1646.value;
int64_t $tmp1680 = $tmp1678.value;
int64_t $tmp1681 = $tmp1679 - $tmp1680;
panda$core$Int64 $tmp1682 = (panda$core$Int64) {$tmp1681};
panda$core$UInt64 $tmp1683 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1682);
if ($tmp1648) goto block16; else goto block17;
block16:;
uint64_t $tmp1684 = $tmp1683.value;
uint64_t $tmp1685 = $tmp1650.value;
bool $tmp1686 = $tmp1684 >= $tmp1685;
panda$core$Bit $tmp1687 = (panda$core$Bit) {$tmp1686};
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block15; else goto block9;
block17:;
uint64_t $tmp1689 = $tmp1683.value;
uint64_t $tmp1690 = $tmp1650.value;
bool $tmp1691 = $tmp1689 > $tmp1690;
panda$core$Bit $tmp1692 = (panda$core$Bit) {$tmp1691};
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block15; else goto block9;
block15:;
int64_t $tmp1694 = $tmp1678.value;
int64_t $tmp1695 = $tmp1649.value;
int64_t $tmp1696 = $tmp1694 + $tmp1695;
panda$core$Int64 $tmp1697 = (panda$core$Int64) {$tmp1696};
*(&local1) = $tmp1697;
goto block8;
block9:;
// line 950
panda$core$Int64 $tmp1698 = *(&local0);
panda$core$String$Index $tmp1699 = panda$core$String$Index$init$panda$core$Int64($tmp1698);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1699, true }).value), true });
block5:;
panda$core$Int64 $tmp1700 = *(&local0);
int64_t $tmp1701 = $tmp1625.value;
int64_t $tmp1702 = $tmp1700.value;
int64_t $tmp1703 = $tmp1701 - $tmp1702;
panda$core$Int64 $tmp1704 = (panda$core$Int64) {$tmp1703};
panda$core$UInt64 $tmp1705 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1704);
if ($tmp1627) goto block19; else goto block20;
block19:;
uint64_t $tmp1706 = $tmp1705.value;
uint64_t $tmp1707 = $tmp1629.value;
bool $tmp1708 = $tmp1706 >= $tmp1707;
panda$core$Bit $tmp1709 = (panda$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block18; else goto block4;
block20:;
uint64_t $tmp1711 = $tmp1705.value;
uint64_t $tmp1712 = $tmp1629.value;
bool $tmp1713 = $tmp1711 > $tmp1712;
panda$core$Bit $tmp1714 = (panda$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block18; else goto block4;
block18:;
int64_t $tmp1716 = $tmp1700.value;
int64_t $tmp1717 = $tmp1628.value;
int64_t $tmp1718 = $tmp1716 + $tmp1717;
panda$core$Int64 $tmp1719 = (panda$core$Int64) {$tmp1718};
*(&local0) = $tmp1719;
goto block3;
block4:;
// line 952
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 963
panda$core$String$Index $tmp1720 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1721 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1720);
return $tmp1721;

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 975
panda$core$Int64* $tmp1722 = &param0->_length;
panda$core$Int64 $tmp1723 = *$tmp1722;
panda$core$Int64* $tmp1724 = &param1->_length;
panda$core$Int64 $tmp1725 = *$tmp1724;
int64_t $tmp1726 = $tmp1723.value;
int64_t $tmp1727 = $tmp1725.value;
bool $tmp1728 = $tmp1726 < $tmp1727;
panda$core$Bit $tmp1729 = (panda$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block1; else goto block2;
block1:;
// line 976
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 978
panda$core$Int64 $tmp1731 = param2.value;
panda$core$Int64* $tmp1732 = &param0->_length;
panda$core$Int64 $tmp1733 = *$tmp1732;
panda$core$Int64* $tmp1734 = &param1->_length;
panda$core$Int64 $tmp1735 = *$tmp1734;
int64_t $tmp1736 = $tmp1733.value;
int64_t $tmp1737 = $tmp1735.value;
int64_t $tmp1738 = $tmp1736 - $tmp1737;
panda$core$Int64 $tmp1739 = (panda$core$Int64) {$tmp1738};
panda$core$Int64 $tmp1740 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1731, $tmp1739);
*(&local0) = $tmp1740;
// line 979
panda$core$Int64 $tmp1741 = *(&local0);
panda$core$Int64 $tmp1742 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1743 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1744 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1745 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1741, $tmp1742, $tmp1743, $tmp1744);
panda$core$Int64 $tmp1746 = $tmp1745.start;
*(&local1) = $tmp1746;
panda$core$Int64 $tmp1747 = $tmp1745.end;
panda$core$Int64 $tmp1748 = $tmp1745.step;
panda$core$UInt64 $tmp1749 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1748);
panda$core$Int64 $tmp1750 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1748);
panda$core$UInt64 $tmp1751 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1750);
panda$core$Bit $tmp1752 = $tmp1745.inclusive;
bool $tmp1753 = $tmp1752.value;
panda$core$Int64 $tmp1754 = (panda$core$Int64) {0};
int64_t $tmp1755 = $tmp1748.value;
int64_t $tmp1756 = $tmp1754.value;
bool $tmp1757 = $tmp1755 >= $tmp1756;
panda$core$Bit $tmp1758 = (panda$core$Bit) {$tmp1757};
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block6; else goto block7;
block6:;
if ($tmp1753) goto block8; else goto block9;
block8:;
int64_t $tmp1760 = $tmp1746.value;
int64_t $tmp1761 = $tmp1747.value;
bool $tmp1762 = $tmp1760 <= $tmp1761;
panda$core$Bit $tmp1763 = (panda$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block3; else goto block4;
block9:;
int64_t $tmp1765 = $tmp1746.value;
int64_t $tmp1766 = $tmp1747.value;
bool $tmp1767 = $tmp1765 < $tmp1766;
panda$core$Bit $tmp1768 = (panda$core$Bit) {$tmp1767};
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block3; else goto block4;
block7:;
if ($tmp1753) goto block10; else goto block11;
block10:;
int64_t $tmp1770 = $tmp1746.value;
int64_t $tmp1771 = $tmp1747.value;
bool $tmp1772 = $tmp1770 >= $tmp1771;
panda$core$Bit $tmp1773 = (panda$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block3; else goto block4;
block11:;
int64_t $tmp1775 = $tmp1746.value;
int64_t $tmp1776 = $tmp1747.value;
bool $tmp1777 = $tmp1775 > $tmp1776;
panda$core$Bit $tmp1778 = (panda$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block3; else goto block4;
block3:;
// line 980
panda$core$Int64 $tmp1780 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1781 = &param1->_length;
panda$core$Int64 $tmp1782 = *$tmp1781;
panda$core$Bit $tmp1783 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1784 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1780, $tmp1782, $tmp1783);
panda$core$Int64 $tmp1785 = $tmp1784.min;
*(&local2) = $tmp1785;
panda$core$Int64 $tmp1786 = $tmp1784.max;
panda$core$Bit $tmp1787 = $tmp1784.inclusive;
bool $tmp1788 = $tmp1787.value;
panda$core$Int64 $tmp1789 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1790 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1789);
if ($tmp1788) goto block15; else goto block16;
block15:;
int64_t $tmp1791 = $tmp1785.value;
int64_t $tmp1792 = $tmp1786.value;
bool $tmp1793 = $tmp1791 <= $tmp1792;
panda$core$Bit $tmp1794 = (panda$core$Bit) {$tmp1793};
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block12; else goto block13;
block16:;
int64_t $tmp1796 = $tmp1785.value;
int64_t $tmp1797 = $tmp1786.value;
bool $tmp1798 = $tmp1796 < $tmp1797;
panda$core$Bit $tmp1799 = (panda$core$Bit) {$tmp1798};
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block12; else goto block13;
block12:;
// line 981
panda$core$Char8** $tmp1801 = &param0->data;
panda$core$Char8* $tmp1802 = *$tmp1801;
panda$core$Int64 $tmp1803 = *(&local1);
panda$core$Int64 $tmp1804 = *(&local2);
int64_t $tmp1805 = $tmp1803.value;
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805 + $tmp1806;
panda$core$Int64 $tmp1808 = (panda$core$Int64) {$tmp1807};
int64_t $tmp1809 = $tmp1808.value;
panda$core$Char8 $tmp1810 = $tmp1802[$tmp1809];
panda$core$Char8** $tmp1811 = &param1->data;
panda$core$Char8* $tmp1812 = *$tmp1811;
panda$core$Int64 $tmp1813 = *(&local2);
int64_t $tmp1814 = $tmp1813.value;
panda$core$Char8 $tmp1815 = $tmp1812[$tmp1814];
panda$core$Bit $tmp1816 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1810, $tmp1815);
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block17; else goto block18;
block17:;
// line 982
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1818 = *(&local2);
int64_t $tmp1819 = $tmp1786.value;
int64_t $tmp1820 = $tmp1818.value;
int64_t $tmp1821 = $tmp1819 - $tmp1820;
panda$core$Int64 $tmp1822 = (panda$core$Int64) {$tmp1821};
panda$core$UInt64 $tmp1823 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1822);
if ($tmp1788) goto block20; else goto block21;
block20:;
uint64_t $tmp1824 = $tmp1823.value;
uint64_t $tmp1825 = $tmp1790.value;
bool $tmp1826 = $tmp1824 >= $tmp1825;
panda$core$Bit $tmp1827 = (panda$core$Bit) {$tmp1826};
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block19; else goto block13;
block21:;
uint64_t $tmp1829 = $tmp1823.value;
uint64_t $tmp1830 = $tmp1790.value;
bool $tmp1831 = $tmp1829 > $tmp1830;
panda$core$Bit $tmp1832 = (panda$core$Bit) {$tmp1831};
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block19; else goto block13;
block19:;
int64_t $tmp1834 = $tmp1818.value;
int64_t $tmp1835 = $tmp1789.value;
int64_t $tmp1836 = $tmp1834 + $tmp1835;
panda$core$Int64 $tmp1837 = (panda$core$Int64) {$tmp1836};
*(&local2) = $tmp1837;
goto block12;
block13:;
// line 985
panda$core$Int64 $tmp1838 = *(&local1);
panda$core$String$Index $tmp1839 = panda$core$String$Index$init$panda$core$Int64($tmp1838);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1839, true }).value), true });
block5:;
panda$core$Int64 $tmp1840 = *(&local1);
if ($tmp1759) goto block23; else goto block24;
block23:;
int64_t $tmp1841 = $tmp1747.value;
int64_t $tmp1842 = $tmp1840.value;
int64_t $tmp1843 = $tmp1841 - $tmp1842;
panda$core$Int64 $tmp1844 = (panda$core$Int64) {$tmp1843};
panda$core$UInt64 $tmp1845 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1844);
if ($tmp1753) goto block25; else goto block26;
block25:;
uint64_t $tmp1846 = $tmp1845.value;
uint64_t $tmp1847 = $tmp1749.value;
bool $tmp1848 = $tmp1846 >= $tmp1847;
panda$core$Bit $tmp1849 = (panda$core$Bit) {$tmp1848};
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block22; else goto block4;
block26:;
uint64_t $tmp1851 = $tmp1845.value;
uint64_t $tmp1852 = $tmp1749.value;
bool $tmp1853 = $tmp1851 > $tmp1852;
panda$core$Bit $tmp1854 = (panda$core$Bit) {$tmp1853};
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block22; else goto block4;
block24:;
int64_t $tmp1856 = $tmp1840.value;
int64_t $tmp1857 = $tmp1747.value;
int64_t $tmp1858 = $tmp1856 - $tmp1857;
panda$core$Int64 $tmp1859 = (panda$core$Int64) {$tmp1858};
panda$core$UInt64 $tmp1860 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1859);
if ($tmp1753) goto block27; else goto block28;
block27:;
uint64_t $tmp1861 = $tmp1860.value;
uint64_t $tmp1862 = $tmp1751.value;
bool $tmp1863 = $tmp1861 >= $tmp1862;
panda$core$Bit $tmp1864 = (panda$core$Bit) {$tmp1863};
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block22; else goto block4;
block28:;
uint64_t $tmp1866 = $tmp1860.value;
uint64_t $tmp1867 = $tmp1751.value;
bool $tmp1868 = $tmp1866 > $tmp1867;
panda$core$Bit $tmp1869 = (panda$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block22; else goto block4;
block22:;
int64_t $tmp1871 = $tmp1840.value;
int64_t $tmp1872 = $tmp1748.value;
int64_t $tmp1873 = $tmp1871 + $tmp1872;
panda$core$Int64 $tmp1874 = (panda$core$Int64) {$tmp1873};
*(&local1) = $tmp1874;
goto block3;
block4:;
// line 987
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 998
panda$core$Matcher* $tmp1875 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1876;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1876, $tmp1875);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
return $tmp1876;

}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1009
panda$core$Matcher* $tmp1877 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1878 = panda$core$Matcher$find$R$panda$core$Bit($tmp1877);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
return $tmp1878;

}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* param0, panda$core$RegularExpression* param1) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
// line 1023
panda$core$Matcher* $tmp1879 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1880 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
*(&local0) = $tmp1879;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
// line 1024
panda$core$Matcher* $tmp1881 = *(&local0);
panda$core$Bit $tmp1882;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1882, $tmp1881);
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block1; else goto block2;
block1:;
// line 1025
panda$collections$Array* $tmp1884 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1884);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1885 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
*(&local1) = $tmp1884;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
// line 1026
panda$core$Int64 $tmp1886 = (panda$core$Int64) {1};
panda$core$Matcher* $tmp1887 = *(&local0);
panda$core$Int64 $tmp1888;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1888, $tmp1887);
panda$core$Bit $tmp1889 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1890 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1886, $tmp1888, $tmp1889);
panda$core$Int64 $tmp1891 = $tmp1890.min;
*(&local2) = $tmp1891;
panda$core$Int64 $tmp1892 = $tmp1890.max;
panda$core$Bit $tmp1893 = $tmp1890.inclusive;
bool $tmp1894 = $tmp1893.value;
panda$core$Int64 $tmp1895 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1896 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1895);
if ($tmp1894) goto block6; else goto block7;
block6:;
int64_t $tmp1897 = $tmp1891.value;
int64_t $tmp1898 = $tmp1892.value;
bool $tmp1899 = $tmp1897 <= $tmp1898;
panda$core$Bit $tmp1900 = (panda$core$Bit) {$tmp1899};
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block3; else goto block4;
block7:;
int64_t $tmp1902 = $tmp1891.value;
int64_t $tmp1903 = $tmp1892.value;
bool $tmp1904 = $tmp1902 < $tmp1903;
panda$core$Bit $tmp1905 = (panda$core$Bit) {$tmp1904};
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block3; else goto block4;
block3:;
// line 1027
panda$collections$Array* $tmp1907 = *(&local1);
panda$core$Matcher* $tmp1908 = *(&local0);
panda$core$Int64 $tmp1909 = *(&local2);
panda$core$String* $tmp1910 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1908, $tmp1909);
panda$collections$Array$add$panda$collections$Array$T($tmp1907, ((panda$core$Object*) $tmp1910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
goto block5;
block5:;
panda$core$Int64 $tmp1911 = *(&local2);
int64_t $tmp1912 = $tmp1892.value;
int64_t $tmp1913 = $tmp1911.value;
int64_t $tmp1914 = $tmp1912 - $tmp1913;
panda$core$Int64 $tmp1915 = (panda$core$Int64) {$tmp1914};
panda$core$UInt64 $tmp1916 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1915);
if ($tmp1894) goto block9; else goto block10;
block9:;
uint64_t $tmp1917 = $tmp1916.value;
uint64_t $tmp1918 = $tmp1896.value;
bool $tmp1919 = $tmp1917 >= $tmp1918;
panda$core$Bit $tmp1920 = (panda$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block8; else goto block4;
block10:;
uint64_t $tmp1922 = $tmp1916.value;
uint64_t $tmp1923 = $tmp1896.value;
bool $tmp1924 = $tmp1922 > $tmp1923;
panda$core$Bit $tmp1925 = (panda$core$Bit) {$tmp1924};
bool $tmp1926 = $tmp1925.value;
if ($tmp1926) goto block8; else goto block4;
block8:;
int64_t $tmp1927 = $tmp1911.value;
int64_t $tmp1928 = $tmp1895.value;
int64_t $tmp1929 = $tmp1927 + $tmp1928;
panda$core$Int64 $tmp1930 = (panda$core$Int64) {$tmp1929};
*(&local2) = $tmp1930;
goto block3;
block4:;
// line 1029
panda$collections$Array* $tmp1931 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1931)));
panda$collections$Array* $tmp1932 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Matcher* $tmp1933 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) $tmp1931);
block2:;
// line 1031
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$core$Matcher* $tmp1934 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) NULL);

}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
// line 1042
panda$core$Bit $tmp1935 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s1936);
bool $tmp1937 = $tmp1935.value;
if ($tmp1937) goto block1; else goto block2;
block1:;
// line 1043
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1045
panda$core$MutableString* $tmp1938 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1938);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1939 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
*(&local0) = $tmp1938;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
// line 1046
panda$core$String$Index $tmp1940 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp1940;
// line 1047
goto block3;
block3:;
// line 1048
panda$core$String$Index $tmp1941 = *(&local1);
panda$core$String$Index$nullable $tmp1942 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1941);
*(&local2) = $tmp1942;
// line 1049
panda$core$String$Index$nullable $tmp1943 = *(&local2);
panda$core$Bit $tmp1944 = panda$core$Bit$init$builtin_bit(!$tmp1943.nonnull);
bool $tmp1945 = $tmp1944.value;
if ($tmp1945) goto block5; else goto block6;
block5:;
// line 1050
panda$core$MutableString* $tmp1946 = *(&local0);
panda$core$String$Index $tmp1947 = *(&local1);
panda$core$Bit $tmp1948 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1949 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1947, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1948);
panda$core$String* $tmp1950 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1949);
panda$core$MutableString$append$panda$core$String($tmp1946, $tmp1950);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
// line 1051
goto block4;
block6:;
// line 1053
panda$core$MutableString* $tmp1951 = *(&local0);
panda$core$String$Index $tmp1952 = *(&local1);
panda$core$String$Index$nullable $tmp1953 = *(&local2);
panda$core$Bit $tmp1954 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1955 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1952, ((panda$core$String$Index) $tmp1953.value), $tmp1954);
panda$core$String* $tmp1956 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1955);
panda$core$MutableString$append$panda$core$String($tmp1951, $tmp1956);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
// line 1054
panda$core$MutableString* $tmp1957 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp1957, param2);
// line 1055
panda$core$String$Index$nullable $tmp1958 = *(&local2);
panda$core$Int64 $tmp1959 = ((panda$core$String$Index) $tmp1958.value).value;
panda$core$Int64* $tmp1960 = &param1->_length;
panda$core$Int64 $tmp1961 = *$tmp1960;
int64_t $tmp1962 = $tmp1959.value;
int64_t $tmp1963 = $tmp1961.value;
int64_t $tmp1964 = $tmp1962 + $tmp1963;
panda$core$Int64 $tmp1965 = (panda$core$Int64) {$tmp1964};
panda$core$String$Index $tmp1966 = panda$core$String$Index$init$panda$core$Int64($tmp1965);
*(&local1) = $tmp1966;
goto block3;
block4:;
// line 1057
panda$core$MutableString* $tmp1967 = *(&local0);
panda$core$String* $tmp1968 = panda$core$MutableString$finish$R$panda$core$String($tmp1967);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$MutableString* $tmp1969 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1969));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp1968;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 1071
panda$core$Bit $tmp1970 = panda$core$Bit$init$builtin_bit(true);
panda$core$String* $tmp1971 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(param0, param1, param2, $tmp1970);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
return $tmp1971;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
// line 1076
panda$core$MutableString* $tmp1972 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1972);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1973 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
*(&local0) = $tmp1972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// line 1077
panda$core$Matcher* $tmp1974 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1975 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
*(&local1) = $tmp1974;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
// line 1078
goto block1;
block1:;
panda$core$Matcher* $tmp1976 = *(&local1);
panda$core$Bit $tmp1977 = panda$core$Matcher$find$R$panda$core$Bit($tmp1976);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block2; else goto block3;
block2:;
// line 1079
panda$core$Matcher* $tmp1979 = *(&local1);
panda$core$MutableString* $tmp1980 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1979, $tmp1980, param2, param3);
goto block1;
block3:;
// line 1081
panda$core$Matcher* $tmp1981 = *(&local1);
panda$core$MutableString* $tmp1982 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp1981, $tmp1982);
// line 1082
panda$core$MutableString* $tmp1983 = *(&local0);
panda$core$String* $tmp1984 = panda$core$MutableString$finish$R$panda$core$String($tmp1983);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
panda$core$Matcher* $tmp1985 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp1986 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp1984;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 1103
panda$core$MutableString* $tmp1987 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1987);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1988 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
*(&local0) = $tmp1987;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
// line 1104
panda$core$Matcher* $tmp1989 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1990 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
*(&local1) = $tmp1989;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
// line 1105
goto block1;
block1:;
panda$core$Matcher* $tmp1991 = *(&local1);
panda$core$Bit $tmp1992 = panda$core$Matcher$find$R$panda$core$Bit($tmp1991);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block2; else goto block3;
block2:;
// line 1106
panda$core$Matcher* $tmp1994 = *(&local1);
panda$core$MutableString* $tmp1995 = *(&local0);
panda$core$Matcher* $tmp1996 = *(&local1);
panda$core$Int64 $tmp1997 = (panda$core$Int64) {0};
panda$core$String* $tmp1998 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1996, $tmp1997);
panda$core$Int8** $tmp1999 = &param2->pointer;
panda$core$Int8* $tmp2000 = *$tmp1999;
panda$core$Object** $tmp2001 = &param2->target;
panda$core$Object* $tmp2002 = *$tmp2001;
bool $tmp2003 = $tmp2002 != ((panda$core$Object*) NULL);
if ($tmp2003) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp2005 = (($fn2004) $tmp2000)($tmp1998);
*(&local2) = $tmp2005;
goto block6;
block4:;
panda$core$Object* $tmp2007 = (($fn2006) $tmp2000)($tmp2002, $tmp1998);
*(&local2) = $tmp2007;
goto block6;
block6:;
panda$core$Object* $tmp2008 = *(&local2);
$fn2010 $tmp2009 = ($fn2010) $tmp2008->$class->vtable[0];
panda$core$String* $tmp2011 = $tmp2009($tmp2008);
panda$core$Bit $tmp2012 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1994, $tmp1995, $tmp2011, $tmp2012);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
panda$core$Panda$unref$panda$core$Object$Q($tmp2008);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
goto block1;
block3:;
// line 1108
panda$core$Matcher* $tmp2013 = *(&local1);
panda$core$MutableString* $tmp2014 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2013, $tmp2014);
// line 1109
panda$core$MutableString* $tmp2015 = *(&local0);
panda$core$String* $tmp2016 = panda$core$MutableString$convert$R$panda$core$String($tmp2015);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2016));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2016));
panda$core$Matcher* $tmp2017 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2018 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2018));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2016;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Object* local4 = NULL;
// line 1123
panda$core$MutableString* $tmp2019 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2019);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2020 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
*(&local0) = $tmp2019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
// line 1124
panda$core$Matcher* $tmp2021 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp2022 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
*(&local1) = $tmp2021;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
// line 1125
goto block1;
block1:;
panda$core$Matcher* $tmp2023 = *(&local1);
panda$core$Bit $tmp2024 = panda$core$Matcher$find$R$panda$core$Bit($tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block2; else goto block3;
block2:;
// line 1126
panda$collections$Array* $tmp2026 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2026);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2027 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
*(&local2) = $tmp2026;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
// line 1127
panda$core$Int64 $tmp2028 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp2029 = *(&local1);
panda$core$Int64 $tmp2030;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2030, $tmp2029);
panda$core$Bit $tmp2031 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2032 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2028, $tmp2030, $tmp2031);
panda$core$Int64 $tmp2033 = $tmp2032.min;
*(&local3) = $tmp2033;
panda$core$Int64 $tmp2034 = $tmp2032.max;
panda$core$Bit $tmp2035 = $tmp2032.inclusive;
bool $tmp2036 = $tmp2035.value;
panda$core$Int64 $tmp2037 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2038 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2037);
if ($tmp2036) goto block7; else goto block8;
block7:;
int64_t $tmp2039 = $tmp2033.value;
int64_t $tmp2040 = $tmp2034.value;
bool $tmp2041 = $tmp2039 <= $tmp2040;
panda$core$Bit $tmp2042 = (panda$core$Bit) {$tmp2041};
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block4; else goto block5;
block8:;
int64_t $tmp2044 = $tmp2033.value;
int64_t $tmp2045 = $tmp2034.value;
bool $tmp2046 = $tmp2044 < $tmp2045;
panda$core$Bit $tmp2047 = (panda$core$Bit) {$tmp2046};
bool $tmp2048 = $tmp2047.value;
if ($tmp2048) goto block4; else goto block5;
block4:;
// line 1128
panda$collections$Array* $tmp2049 = *(&local2);
panda$core$Matcher* $tmp2050 = *(&local1);
panda$core$Int64 $tmp2051 = *(&local3);
panda$core$String* $tmp2052 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2050, $tmp2051);
panda$collections$Array$add$panda$collections$Array$T($tmp2049, ((panda$core$Object*) $tmp2052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
goto block6;
block6:;
panda$core$Int64 $tmp2053 = *(&local3);
int64_t $tmp2054 = $tmp2034.value;
int64_t $tmp2055 = $tmp2053.value;
int64_t $tmp2056 = $tmp2054 - $tmp2055;
panda$core$Int64 $tmp2057 = (panda$core$Int64) {$tmp2056};
panda$core$UInt64 $tmp2058 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2057);
if ($tmp2036) goto block10; else goto block11;
block10:;
uint64_t $tmp2059 = $tmp2058.value;
uint64_t $tmp2060 = $tmp2038.value;
bool $tmp2061 = $tmp2059 >= $tmp2060;
panda$core$Bit $tmp2062 = (panda$core$Bit) {$tmp2061};
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block9; else goto block5;
block11:;
uint64_t $tmp2064 = $tmp2058.value;
uint64_t $tmp2065 = $tmp2038.value;
bool $tmp2066 = $tmp2064 > $tmp2065;
panda$core$Bit $tmp2067 = (panda$core$Bit) {$tmp2066};
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block9; else goto block5;
block9:;
int64_t $tmp2069 = $tmp2053.value;
int64_t $tmp2070 = $tmp2037.value;
int64_t $tmp2071 = $tmp2069 + $tmp2070;
panda$core$Int64 $tmp2072 = (panda$core$Int64) {$tmp2071};
*(&local3) = $tmp2072;
goto block4;
block5:;
// line 1130
panda$core$Matcher* $tmp2073 = *(&local1);
panda$core$MutableString* $tmp2074 = *(&local0);
panda$collections$Array* $tmp2075 = *(&local2);
panda$core$Int8** $tmp2076 = &param2->pointer;
panda$core$Int8* $tmp2077 = *$tmp2076;
panda$core$Object** $tmp2078 = &param2->target;
panda$core$Object* $tmp2079 = *$tmp2078;
bool $tmp2080 = $tmp2079 != ((panda$core$Object*) NULL);
if ($tmp2080) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp2082 = (($fn2081) $tmp2077)(((panda$collections$ListView*) $tmp2075));
*(&local4) = $tmp2082;
goto block14;
block12:;
panda$core$Object* $tmp2084 = (($fn2083) $tmp2077)($tmp2079, ((panda$collections$ListView*) $tmp2075));
*(&local4) = $tmp2084;
goto block14;
block14:;
panda$core$Object* $tmp2085 = *(&local4);
$fn2087 $tmp2086 = ($fn2087) $tmp2085->$class->vtable[0];
panda$core$String* $tmp2088 = $tmp2086($tmp2085);
panda$core$Bit $tmp2089 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2073, $tmp2074, $tmp2088, $tmp2089);
panda$core$Panda$unref$panda$core$Object$Q($tmp2085);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
panda$collections$Array* $tmp2090 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2090));
// unreffing groups
*(&local2) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 1132
panda$core$Matcher* $tmp2091 = *(&local1);
panda$core$MutableString* $tmp2092 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2091, $tmp2092);
// line 1133
panda$core$MutableString* $tmp2093 = *(&local0);
panda$core$String* $tmp2094 = panda$core$MutableString$convert$R$panda$core$String($tmp2093);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
panda$core$Matcher* $tmp2095 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2095));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2096 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2094;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1137
panda$core$Bit $tmp2097 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2098 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(param0, param1, $tmp2097);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
return $tmp2098;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Bit param2) {

// line 1141
panda$core$String$MatchIterator* $tmp2099 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp2099, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2099)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
return ((panda$collections$Iterator*) $tmp2099);

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1145
panda$core$Bit $tmp2100 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2101 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(param0, param1, $tmp2100);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
return $tmp2101;

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Bit param2) {

// line 1149
panda$core$String$RegexMatchIterator* $tmp2102 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp2102, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2102)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
return ((panda$collections$Iterator*) $tmp2102);

}
panda$core$String$Index panda$core$String$get_start$R$panda$core$String$Index(panda$core$String* param0) {

// line 1156
panda$core$Int64 $tmp2103 = (panda$core$Int64) {0};
panda$core$String$Index $tmp2104 = panda$core$String$Index$init$panda$core$Int64($tmp2103);
return $tmp2104;

}
panda$core$String$Index panda$core$String$get_end$R$panda$core$String$Index(panda$core$String* param0) {

// line 1163
panda$core$Int64* $tmp2105 = &param0->_length;
panda$core$Int64 $tmp2106 = *$tmp2105;
panda$core$String$Index $tmp2107 = panda$core$String$Index$init$panda$core$Int64($tmp2106);
return $tmp2107;

}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

int64_t local0;
// line 1173
panda$core$Int64 $tmp2108 = param1.value;
panda$core$Int64* $tmp2109 = &param0->_length;
panda$core$Int64 $tmp2110 = *$tmp2109;
int64_t $tmp2111 = $tmp2108.value;
int64_t $tmp2112 = $tmp2110.value;
bool $tmp2113 = $tmp2111 < $tmp2112;
panda$core$Bit $tmp2114 = (panda$core$Bit) {$tmp2113};
bool $tmp2115 = $tmp2114.value;
if ($tmp2115) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2116 = (panda$core$Int64) {1173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2117, $tmp2116);
abort(); // unreachable
block1:;
// line 1174
panda$core$Char8** $tmp2118 = &param0->data;
panda$core$Char8* $tmp2119 = *$tmp2118;
panda$core$Int64 $tmp2120 = param1.value;
int64_t $tmp2121 = $tmp2120.value;
panda$core$Char8 $tmp2122 = $tmp2119[$tmp2121];
uint8_t $tmp2123 = $tmp2122.value;
int64_t $tmp2124 = ((int64_t) $tmp2123) & 255;
*(&local0) = $tmp2124;
// line 1175
int64_t $tmp2125 = *(&local0);
bool $tmp2126 = $tmp2125 >= 240;
panda$core$Bit $tmp2127 = panda$core$Bit$init$builtin_bit($tmp2126);
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block3; else goto block4;
block3:;
// line 1176
panda$core$Int64 $tmp2129 = param1.value;
panda$core$Int64 $tmp2130 = (panda$core$Int64) {4};
int64_t $tmp2131 = $tmp2129.value;
int64_t $tmp2132 = $tmp2130.value;
int64_t $tmp2133 = $tmp2131 + $tmp2132;
panda$core$Int64 $tmp2134 = (panda$core$Int64) {$tmp2133};
panda$core$String$Index $tmp2135 = panda$core$String$Index$init$panda$core$Int64($tmp2134);
return $tmp2135;
block4:;
// line 1178
int64_t $tmp2136 = *(&local0);
bool $tmp2137 = $tmp2136 >= 224;
panda$core$Bit $tmp2138 = panda$core$Bit$init$builtin_bit($tmp2137);
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block5; else goto block6;
block5:;
// line 1179
panda$core$Int64 $tmp2140 = param1.value;
panda$core$Int64 $tmp2141 = (panda$core$Int64) {3};
int64_t $tmp2142 = $tmp2140.value;
int64_t $tmp2143 = $tmp2141.value;
int64_t $tmp2144 = $tmp2142 + $tmp2143;
panda$core$Int64 $tmp2145 = (panda$core$Int64) {$tmp2144};
panda$core$String$Index $tmp2146 = panda$core$String$Index$init$panda$core$Int64($tmp2145);
return $tmp2146;
block6:;
// line 1181
int64_t $tmp2147 = *(&local0);
bool $tmp2148 = $tmp2147 >= 192;
panda$core$Bit $tmp2149 = panda$core$Bit$init$builtin_bit($tmp2148);
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block7; else goto block8;
block7:;
// line 1182
panda$core$Int64 $tmp2151 = param1.value;
panda$core$Int64 $tmp2152 = (panda$core$Int64) {2};
int64_t $tmp2153 = $tmp2151.value;
int64_t $tmp2154 = $tmp2152.value;
int64_t $tmp2155 = $tmp2153 + $tmp2154;
panda$core$Int64 $tmp2156 = (panda$core$Int64) {$tmp2155};
panda$core$String$Index $tmp2157 = panda$core$String$Index$init$panda$core$Int64($tmp2156);
return $tmp2157;
block8:;
// line 1184
panda$core$Int64 $tmp2158 = param1.value;
panda$core$Int64 $tmp2159 = (panda$core$Int64) {1};
int64_t $tmp2160 = $tmp2158.value;
int64_t $tmp2161 = $tmp2159.value;
int64_t $tmp2162 = $tmp2160 + $tmp2161;
panda$core$Int64 $tmp2163 = (panda$core$Int64) {$tmp2162};
panda$core$String$Index $tmp2164 = panda$core$String$Index$init$panda$core$Int64($tmp2163);
return $tmp2164;

}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
// line 1194
panda$core$Int64 $tmp2165 = param1.value;
panda$core$Int64 $tmp2166 = (panda$core$Int64) {0};
int64_t $tmp2167 = $tmp2165.value;
int64_t $tmp2168 = $tmp2166.value;
bool $tmp2169 = $tmp2167 > $tmp2168;
panda$core$Bit $tmp2170 = (panda$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2172 = (panda$core$Int64) {1194};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2173, $tmp2172);
abort(); // unreachable
block1:;
// line 1195
panda$core$Int64 $tmp2174 = param1.value;
panda$core$Int64 $tmp2175 = (panda$core$Int64) {1};
int64_t $tmp2176 = $tmp2174.value;
int64_t $tmp2177 = $tmp2175.value;
int64_t $tmp2178 = $tmp2176 - $tmp2177;
panda$core$Int64 $tmp2179 = (panda$core$Int64) {$tmp2178};
*(&local0) = $tmp2179;
// line 1196
goto block3;
block3:;
panda$core$Char8** $tmp2180 = &param0->data;
panda$core$Char8* $tmp2181 = *$tmp2180;
panda$core$Int64 $tmp2182 = *(&local0);
int64_t $tmp2183 = $tmp2182.value;
panda$core$Char8 $tmp2184 = $tmp2181[$tmp2183];
uint8_t $tmp2185 = $tmp2184.value;
int64_t $tmp2186 = ((int64_t) $tmp2185) & 255;
bool $tmp2187 = $tmp2186 >= 128;
panda$core$Char8** $tmp2188 = &param0->data;
panda$core$Char8* $tmp2189 = *$tmp2188;
panda$core$Int64 $tmp2190 = *(&local0);
int64_t $tmp2191 = $tmp2190.value;
panda$core$Char8 $tmp2192 = $tmp2189[$tmp2191];
uint8_t $tmp2193 = $tmp2192.value;
int64_t $tmp2194 = ((int64_t) $tmp2193) & 255;
bool $tmp2195 = $tmp2194 < 192;
bool $tmp2196 = $tmp2187 & $tmp2195;
panda$core$Bit $tmp2197 = panda$core$Bit$init$builtin_bit($tmp2196);
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block4; else goto block5;
block4:;
// line 1198
panda$core$Int64 $tmp2199 = *(&local0);
panda$core$Int64 $tmp2200 = (panda$core$Int64) {1};
int64_t $tmp2201 = $tmp2199.value;
int64_t $tmp2202 = $tmp2200.value;
int64_t $tmp2203 = $tmp2201 - $tmp2202;
panda$core$Int64 $tmp2204 = (panda$core$Int64) {$tmp2203};
*(&local0) = $tmp2204;
goto block3;
block5:;
// line 1200
panda$core$Int64 $tmp2205 = *(&local0);
panda$core$String$Index $tmp2206 = panda$core$String$Index$init$panda$core$Int64($tmp2205);
return $tmp2206;

}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1, panda$core$Int64 param2) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1210
*(&local0) = param1;
// line 1211
panda$core$Int64 $tmp2207 = (panda$core$Int64) {0};
int64_t $tmp2208 = param2.value;
int64_t $tmp2209 = $tmp2207.value;
bool $tmp2210 = $tmp2208 > $tmp2209;
panda$core$Bit $tmp2211 = (panda$core$Bit) {$tmp2210};
bool $tmp2212 = $tmp2211.value;
if ($tmp2212) goto block1; else goto block3;
block1:;
// line 1212
panda$core$Int64 $tmp2213 = (panda$core$Int64) {0};
panda$core$Bit $tmp2214 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2215 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2213, param2, $tmp2214);
panda$core$Int64 $tmp2216 = $tmp2215.min;
*(&local1) = $tmp2216;
panda$core$Int64 $tmp2217 = $tmp2215.max;
panda$core$Bit $tmp2218 = $tmp2215.inclusive;
bool $tmp2219 = $tmp2218.value;
panda$core$Int64 $tmp2220 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2221 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2220);
if ($tmp2219) goto block7; else goto block8;
block7:;
int64_t $tmp2222 = $tmp2216.value;
int64_t $tmp2223 = $tmp2217.value;
bool $tmp2224 = $tmp2222 <= $tmp2223;
panda$core$Bit $tmp2225 = (panda$core$Bit) {$tmp2224};
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block4; else goto block5;
block8:;
int64_t $tmp2227 = $tmp2216.value;
int64_t $tmp2228 = $tmp2217.value;
bool $tmp2229 = $tmp2227 < $tmp2228;
panda$core$Bit $tmp2230 = (panda$core$Bit) {$tmp2229};
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block4; else goto block5;
block4:;
// line 1213
panda$core$String$Index $tmp2232 = *(&local0);
panda$core$String$Index $tmp2233 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2232);
*(&local0) = $tmp2233;
goto block6;
block6:;
panda$core$Int64 $tmp2234 = *(&local1);
int64_t $tmp2235 = $tmp2217.value;
int64_t $tmp2236 = $tmp2234.value;
int64_t $tmp2237 = $tmp2235 - $tmp2236;
panda$core$Int64 $tmp2238 = (panda$core$Int64) {$tmp2237};
panda$core$UInt64 $tmp2239 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2238);
if ($tmp2219) goto block10; else goto block11;
block10:;
uint64_t $tmp2240 = $tmp2239.value;
uint64_t $tmp2241 = $tmp2221.value;
bool $tmp2242 = $tmp2240 >= $tmp2241;
panda$core$Bit $tmp2243 = (panda$core$Bit) {$tmp2242};
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block9; else goto block5;
block11:;
uint64_t $tmp2245 = $tmp2239.value;
uint64_t $tmp2246 = $tmp2221.value;
bool $tmp2247 = $tmp2245 > $tmp2246;
panda$core$Bit $tmp2248 = (panda$core$Bit) {$tmp2247};
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block9; else goto block5;
block9:;
int64_t $tmp2250 = $tmp2234.value;
int64_t $tmp2251 = $tmp2220.value;
int64_t $tmp2252 = $tmp2250 + $tmp2251;
panda$core$Int64 $tmp2253 = (panda$core$Int64) {$tmp2252};
*(&local1) = $tmp2253;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1217
panda$core$Int64 $tmp2254 = (panda$core$Int64) {0};
panda$core$Int64 $tmp2255 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2256 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2257 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2254, param2, $tmp2255, $tmp2256);
panda$core$Int64 $tmp2258 = $tmp2257.start;
*(&local2) = $tmp2258;
panda$core$Int64 $tmp2259 = $tmp2257.end;
panda$core$Int64 $tmp2260 = $tmp2257.step;
panda$core$UInt64 $tmp2261 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2260);
panda$core$Int64 $tmp2262 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2260);
panda$core$UInt64 $tmp2263 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2262);
panda$core$Bit $tmp2264 = $tmp2257.inclusive;
bool $tmp2265 = $tmp2264.value;
panda$core$Int64 $tmp2266 = (panda$core$Int64) {0};
int64_t $tmp2267 = $tmp2260.value;
int64_t $tmp2268 = $tmp2266.value;
bool $tmp2269 = $tmp2267 >= $tmp2268;
panda$core$Bit $tmp2270 = (panda$core$Bit) {$tmp2269};
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block15; else goto block16;
block15:;
if ($tmp2265) goto block17; else goto block18;
block17:;
int64_t $tmp2272 = $tmp2258.value;
int64_t $tmp2273 = $tmp2259.value;
bool $tmp2274 = $tmp2272 <= $tmp2273;
panda$core$Bit $tmp2275 = (panda$core$Bit) {$tmp2274};
bool $tmp2276 = $tmp2275.value;
if ($tmp2276) goto block12; else goto block13;
block18:;
int64_t $tmp2277 = $tmp2258.value;
int64_t $tmp2278 = $tmp2259.value;
bool $tmp2279 = $tmp2277 < $tmp2278;
panda$core$Bit $tmp2280 = (panda$core$Bit) {$tmp2279};
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block12; else goto block13;
block16:;
if ($tmp2265) goto block19; else goto block20;
block19:;
int64_t $tmp2282 = $tmp2258.value;
int64_t $tmp2283 = $tmp2259.value;
bool $tmp2284 = $tmp2282 >= $tmp2283;
panda$core$Bit $tmp2285 = (panda$core$Bit) {$tmp2284};
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block12; else goto block13;
block20:;
int64_t $tmp2287 = $tmp2258.value;
int64_t $tmp2288 = $tmp2259.value;
bool $tmp2289 = $tmp2287 > $tmp2288;
panda$core$Bit $tmp2290 = (panda$core$Bit) {$tmp2289};
bool $tmp2291 = $tmp2290.value;
if ($tmp2291) goto block12; else goto block13;
block12:;
// line 1218
panda$core$String$Index $tmp2292 = *(&local0);
panda$core$String$Index $tmp2293 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2292);
*(&local0) = $tmp2293;
goto block14;
block14:;
panda$core$Int64 $tmp2294 = *(&local2);
if ($tmp2271) goto block22; else goto block23;
block22:;
int64_t $tmp2295 = $tmp2259.value;
int64_t $tmp2296 = $tmp2294.value;
int64_t $tmp2297 = $tmp2295 - $tmp2296;
panda$core$Int64 $tmp2298 = (panda$core$Int64) {$tmp2297};
panda$core$UInt64 $tmp2299 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2298);
if ($tmp2265) goto block24; else goto block25;
block24:;
uint64_t $tmp2300 = $tmp2299.value;
uint64_t $tmp2301 = $tmp2261.value;
bool $tmp2302 = $tmp2300 >= $tmp2301;
panda$core$Bit $tmp2303 = (panda$core$Bit) {$tmp2302};
bool $tmp2304 = $tmp2303.value;
if ($tmp2304) goto block21; else goto block13;
block25:;
uint64_t $tmp2305 = $tmp2299.value;
uint64_t $tmp2306 = $tmp2261.value;
bool $tmp2307 = $tmp2305 > $tmp2306;
panda$core$Bit $tmp2308 = (panda$core$Bit) {$tmp2307};
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block21; else goto block13;
block23:;
int64_t $tmp2310 = $tmp2294.value;
int64_t $tmp2311 = $tmp2259.value;
int64_t $tmp2312 = $tmp2310 - $tmp2311;
panda$core$Int64 $tmp2313 = (panda$core$Int64) {$tmp2312};
panda$core$UInt64 $tmp2314 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2313);
if ($tmp2265) goto block26; else goto block27;
block26:;
uint64_t $tmp2315 = $tmp2314.value;
uint64_t $tmp2316 = $tmp2263.value;
bool $tmp2317 = $tmp2315 >= $tmp2316;
panda$core$Bit $tmp2318 = (panda$core$Bit) {$tmp2317};
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block21; else goto block13;
block27:;
uint64_t $tmp2320 = $tmp2314.value;
uint64_t $tmp2321 = $tmp2263.value;
bool $tmp2322 = $tmp2320 > $tmp2321;
panda$core$Bit $tmp2323 = (panda$core$Bit) {$tmp2322};
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block21; else goto block13;
block21:;
int64_t $tmp2325 = $tmp2294.value;
int64_t $tmp2326 = $tmp2260.value;
int64_t $tmp2327 = $tmp2325 + $tmp2326;
panda$core$Int64 $tmp2328 = (panda$core$Int64) {$tmp2327};
*(&local2) = $tmp2328;
goto block12;
block13:;
goto block2;
block2:;
// line 1221
panda$core$String$Index $tmp2329 = *(&local0);
return $tmp2329;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1234
panda$core$Int32 $tmp2330 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2331 = panda$core$Char32$init$panda$core$Int32($tmp2330);
panda$core$String* $tmp2332 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
return $tmp2332;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1248
panda$core$Int64 $tmp2333 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2334 = $tmp2333.value;
int64_t $tmp2335 = param1.value;
bool $tmp2336 = $tmp2334 >= $tmp2335;
panda$core$Bit $tmp2337 = (panda$core$Bit) {$tmp2336};
bool $tmp2338 = $tmp2337.value;
if ($tmp2338) goto block1; else goto block2;
block1:;
// line 1249
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1251
panda$core$Int64 $tmp2339 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2340 = param1.value;
int64_t $tmp2341 = $tmp2339.value;
int64_t $tmp2342 = $tmp2340 - $tmp2341;
panda$core$Int64 $tmp2343 = (panda$core$Int64) {$tmp2342};
panda$core$String* $tmp2344 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2343);
panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp2344);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
return $tmp2345;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1264
panda$core$Int32 $tmp2346 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2347 = panda$core$Char32$init$panda$core$Int32($tmp2346);
panda$core$String* $tmp2348 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2347);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
return $tmp2348;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1278
panda$core$Int64 $tmp2349 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2350 = $tmp2349.value;
int64_t $tmp2351 = param1.value;
bool $tmp2352 = $tmp2350 >= $tmp2351;
panda$core$Bit $tmp2353 = (panda$core$Bit) {$tmp2352};
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block1; else goto block2;
block1:;
// line 1279
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1281
panda$core$Int64 $tmp2355 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2356 = param1.value;
int64_t $tmp2357 = $tmp2355.value;
int64_t $tmp2358 = $tmp2356 - $tmp2357;
panda$core$Int64 $tmp2359 = (panda$core$Int64) {$tmp2358};
panda$core$String* $tmp2360 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2359);
panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
return $tmp2361;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1296
panda$core$Int32 $tmp2362 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2363 = panda$core$Char32$init$panda$core$Int32($tmp2362);
panda$core$String* $tmp2364 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2363);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
return $tmp2364;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1312
panda$core$Int64 $tmp2365 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2366 = $tmp2365.value;
int64_t $tmp2367 = param1.value;
bool $tmp2368 = $tmp2366 >= $tmp2367;
panda$core$Bit $tmp2369 = (panda$core$Bit) {$tmp2368};
bool $tmp2370 = $tmp2369.value;
if ($tmp2370) goto block1; else goto block2;
block1:;
// line 1313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1315
panda$core$Int64 $tmp2371 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2372 = param1.value;
int64_t $tmp2373 = $tmp2371.value;
int64_t $tmp2374 = $tmp2372 - $tmp2373;
panda$core$Int64 $tmp2375 = (panda$core$Int64) {$tmp2374};
*(&local0) = $tmp2375;
// line 1316
panda$core$Int64 $tmp2376 = *(&local0);
panda$core$Int64 $tmp2377 = (panda$core$Int64) {2};
int64_t $tmp2378 = $tmp2376.value;
int64_t $tmp2379 = $tmp2377.value;
int64_t $tmp2380 = $tmp2378 / $tmp2379;
panda$core$Int64 $tmp2381 = (panda$core$Int64) {$tmp2380};
*(&local1) = $tmp2381;
// line 1317
panda$core$Int64 $tmp2382 = *(&local0);
panda$core$Int64 $tmp2383 = *(&local1);
int64_t $tmp2384 = $tmp2382.value;
int64_t $tmp2385 = $tmp2383.value;
int64_t $tmp2386 = $tmp2384 - $tmp2385;
panda$core$Int64 $tmp2387 = (panda$core$Int64) {$tmp2386};
*(&local2) = $tmp2387;
// line 1318
panda$core$Int64 $tmp2388 = *(&local1);
panda$core$String* $tmp2389 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2388);
panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, param0);
panda$core$Int64 $tmp2391 = *(&local2);
panda$core$String* $tmp2392 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2391);
panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, $tmp2392);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
return $tmp2393;

}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1329
panda$core$Int64 $tmp2394 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2395 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2394);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
return $tmp2395;

}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
panda$core$Bit local3;
// line 1342
panda$collections$Array* $tmp2396 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2396);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2397 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
*(&local0) = $tmp2396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// line 1343
panda$core$String$Index $tmp2398 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2398;
// line 1344
goto block1;
block1:;
// line 1345
// line 1346
panda$core$Int64* $tmp2399 = &param1->_length;
panda$core$Int64 $tmp2400 = *$tmp2399;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {0};
panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2400, $tmp2401);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block3; else goto block5;
block3:;
// line 1347
panda$core$String$Index $tmp2404 = *(&local1);
panda$core$String$Index $tmp2405 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2404);
*(&local2) = ((panda$core$String$Index$nullable) { $tmp2405, true });
goto block4;
block5:;
// line 1
// line 1350
panda$core$String$Index $tmp2406 = *(&local1);
panda$core$String$Index$nullable $tmp2407 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2406);
*(&local2) = $tmp2407;
goto block4;
block4:;
// line 1352
panda$core$String$Index$nullable $tmp2408 = *(&local2);
panda$core$Bit $tmp2409 = panda$core$Bit$init$builtin_bit(!$tmp2408.nonnull);
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block6; else goto block7;
block6:;
*(&local3) = $tmp2409;
goto block8;
block7:;
panda$collections$Array* $tmp2411 = *(&local0);
ITable* $tmp2412 = ((panda$collections$CollectionView*) $tmp2411)->$class->itable;
while ($tmp2412->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
panda$core$Int64 $tmp2415 = $tmp2413(((panda$collections$CollectionView*) $tmp2411));
panda$core$Int64 $tmp2416 = (panda$core$Int64) {1};
int64_t $tmp2417 = param2.value;
int64_t $tmp2418 = $tmp2416.value;
int64_t $tmp2419 = $tmp2417 - $tmp2418;
panda$core$Int64 $tmp2420 = (panda$core$Int64) {$tmp2419};
panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2415, $tmp2420);
*(&local3) = $tmp2421;
goto block8;
block8:;
panda$core$Bit $tmp2422 = *(&local3);
bool $tmp2423 = $tmp2422.value;
if ($tmp2423) goto block9; else goto block10;
block9:;
// line 1353
panda$collections$Array* $tmp2424 = *(&local0);
panda$core$String$Index $tmp2425 = *(&local1);
panda$core$Bit $tmp2426 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2427 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2425, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2426);
panda$core$String* $tmp2428 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2427);
panda$collections$Array$add$panda$collections$Array$T($tmp2424, ((panda$core$Object*) $tmp2428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// line 1354
goto block2;
block10:;
// line 1356
panda$collections$Array* $tmp2429 = *(&local0);
panda$core$String$Index $tmp2430 = *(&local1);
panda$core$String$Index$nullable $tmp2431 = *(&local2);
panda$core$Bit $tmp2432 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2433 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2430, ((panda$core$String$Index) $tmp2431.value), $tmp2432);
panda$core$String* $tmp2434 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2433);
panda$collections$Array$add$panda$collections$Array$T($tmp2429, ((panda$core$Object*) $tmp2434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// line 1357
panda$core$String$Index$nullable $tmp2435 = *(&local2);
panda$core$Int64 $tmp2436 = ((panda$core$String$Index) $tmp2435.value).value;
panda$core$Int64* $tmp2437 = &param1->_length;
panda$core$Int64 $tmp2438 = *$tmp2437;
int64_t $tmp2439 = $tmp2436.value;
int64_t $tmp2440 = $tmp2438.value;
int64_t $tmp2441 = $tmp2439 + $tmp2440;
panda$core$Int64 $tmp2442 = (panda$core$Int64) {$tmp2441};
panda$core$String$Index $tmp2443 = panda$core$String$Index$init$panda$core$Int64($tmp2442);
*(&local1) = $tmp2443;
goto block1;
block2:;
// line 1359
panda$collections$Array* $tmp2444 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
panda$collections$Array* $tmp2445 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2444;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$String$Index local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$Int64 $tmp2446 = (panda$core$Int64) {0};
int64_t $tmp2447 = param2.value;
int64_t $tmp2448 = $tmp2446.value;
bool $tmp2449 = $tmp2447 > $tmp2448;
panda$core$Bit $tmp2450 = (panda$core$Bit) {$tmp2449};
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2452 = (panda$core$Int64) {1373};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2453, $tmp2452, &$s2454);
abort(); // unreachable
block1:;
// line 1374
panda$collections$Array* $tmp2455 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2455);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2456 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
*(&local0) = $tmp2455;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// line 1375
panda$core$Matcher* $tmp2457 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp2458 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
*(&local1) = $tmp2457;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
// line 1376
panda$core$String$Index $tmp2459 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp2459;
// line 1377
goto block3;
block3:;
// line 1378
panda$core$Matcher* $tmp2460 = *(&local1);
panda$core$Bit $tmp2461 = panda$core$Matcher$find$R$panda$core$Bit($tmp2460);
*(&local3) = $tmp2461;
// line 1379
panda$core$Bit $tmp2462 = *(&local3);
panda$core$Bit $tmp2463 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2462);
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block5; else goto block6;
block5:;
*(&local4) = $tmp2463;
goto block7;
block6:;
panda$collections$Array* $tmp2465 = *(&local0);
ITable* $tmp2466 = ((panda$collections$CollectionView*) $tmp2465)->$class->itable;
while ($tmp2466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2466 = $tmp2466->next;
}
$fn2468 $tmp2467 = $tmp2466->methods[0];
panda$core$Int64 $tmp2469 = $tmp2467(((panda$collections$CollectionView*) $tmp2465));
panda$core$Int64 $tmp2470 = (panda$core$Int64) {1};
int64_t $tmp2471 = param2.value;
int64_t $tmp2472 = $tmp2470.value;
int64_t $tmp2473 = $tmp2471 - $tmp2472;
panda$core$Int64 $tmp2474 = (panda$core$Int64) {$tmp2473};
panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2469, $tmp2474);
*(&local4) = $tmp2475;
goto block7;
block7:;
panda$core$Bit $tmp2476 = *(&local4);
bool $tmp2477 = $tmp2476.value;
if ($tmp2477) goto block8; else goto block9;
block8:;
// line 1380
panda$collections$Array* $tmp2478 = *(&local0);
panda$core$String$Index $tmp2479 = *(&local2);
panda$core$Bit $tmp2480 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2481 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2479, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2480);
panda$core$String* $tmp2482 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2481);
panda$collections$Array$add$panda$collections$Array$T($tmp2478, ((panda$core$Object*) $tmp2482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// line 1381
goto block4;
block9:;
// line 1383
panda$core$Matcher* $tmp2483 = *(&local1);
panda$core$String$Index $tmp2484;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2484, $tmp2483);
*(&local5) = $tmp2484;
// line 1384
panda$collections$Array* $tmp2485 = *(&local0);
panda$core$String$Index $tmp2486 = *(&local2);
panda$core$String$Index $tmp2487 = *(&local5);
panda$core$Bit $tmp2488 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2489 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2486, $tmp2487, $tmp2488);
panda$core$String* $tmp2490 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2489);
panda$collections$Array$add$panda$collections$Array$T($tmp2485, ((panda$core$Object*) $tmp2490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
// line 1385
panda$core$String$Index $tmp2491 = *(&local5);
panda$core$Int64 $tmp2492 = $tmp2491.value;
panda$core$Matcher* $tmp2493 = *(&local1);
panda$core$String$Index $tmp2494;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp2494, $tmp2493);
panda$core$Int64 $tmp2495 = $tmp2494.value;
panda$core$Int64 $tmp2496 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp2492, $tmp2495);
panda$core$String$Index $tmp2497 = panda$core$String$Index$init$panda$core$Int64($tmp2496);
*(&local2) = $tmp2497;
goto block3;
block4:;
// line 1387
panda$collections$Array* $tmp2498 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
panda$core$Matcher* $tmp2499 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$collections$Array* $tmp2500 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2500));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2498;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1400
panda$core$Int64 $tmp2501 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2502 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2501);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
return $tmp2502;

}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 1411
panda$core$Int64* $tmp2503 = &param0->_length;
panda$core$Int64 $tmp2504 = *$tmp2503;
panda$core$Int64 $tmp2505 = (panda$core$Int64) {0};
panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2504, $tmp2505);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block1; else goto block2;
block1:;
// line 1412
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1414
panda$core$Int64 $tmp2508 = (panda$core$Int64) {0};
*(&local0) = $tmp2508;
// line 1415
// line 1416
panda$core$Char8** $tmp2509 = &param0->data;
panda$core$Char8* $tmp2510 = *$tmp2509;
panda$core$Int64 $tmp2511 = (panda$core$Int64) {0};
int64_t $tmp2512 = $tmp2511.value;
panda$core$Char8 $tmp2513 = $tmp2510[$tmp2512];
panda$core$UInt8 $tmp2514 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2515 = panda$core$Char8$init$panda$core$UInt8($tmp2514);
panda$core$Bit $tmp2516 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2513, $tmp2515);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block3; else goto block5;
block3:;
// line 1417
panda$core$Int64 $tmp2518 = (panda$core$Int64) {1};
*(&local1) = $tmp2518;
goto block4;
block5:;
// line 1
// line 1420
panda$core$Int64 $tmp2519 = (panda$core$Int64) {0};
*(&local1) = $tmp2519;
goto block4;
block4:;
// line 1422
panda$core$Int64 $tmp2520 = *(&local1);
panda$core$Int64* $tmp2521 = &param0->_length;
panda$core$Int64 $tmp2522 = *$tmp2521;
panda$core$Bit $tmp2523 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2524 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2520, $tmp2522, $tmp2523);
panda$core$Int64 $tmp2525 = $tmp2524.min;
*(&local2) = $tmp2525;
panda$core$Int64 $tmp2526 = $tmp2524.max;
panda$core$Bit $tmp2527 = $tmp2524.inclusive;
bool $tmp2528 = $tmp2527.value;
panda$core$Int64 $tmp2529 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2530 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2529);
if ($tmp2528) goto block9; else goto block10;
block9:;
int64_t $tmp2531 = $tmp2525.value;
int64_t $tmp2532 = $tmp2526.value;
bool $tmp2533 = $tmp2531 <= $tmp2532;
panda$core$Bit $tmp2534 = (panda$core$Bit) {$tmp2533};
bool $tmp2535 = $tmp2534.value;
if ($tmp2535) goto block6; else goto block7;
block10:;
int64_t $tmp2536 = $tmp2525.value;
int64_t $tmp2537 = $tmp2526.value;
bool $tmp2538 = $tmp2536 < $tmp2537;
panda$core$Bit $tmp2539 = (panda$core$Bit) {$tmp2538};
bool $tmp2540 = $tmp2539.value;
if ($tmp2540) goto block6; else goto block7;
block6:;
// line 1423
panda$core$Char8** $tmp2541 = &param0->data;
panda$core$Char8* $tmp2542 = *$tmp2541;
panda$core$Int64 $tmp2543 = *(&local2);
int64_t $tmp2544 = $tmp2543.value;
panda$core$Char8 $tmp2545 = $tmp2542[$tmp2544];
uint8_t $tmp2546 = $tmp2545.value;
panda$core$Int64 $tmp2547 = (panda$core$Int64) {((int64_t) $tmp2546)};
panda$core$Int64 $tmp2548 = (panda$core$Int64) {48};
int64_t $tmp2549 = $tmp2547.value;
int64_t $tmp2550 = $tmp2548.value;
int64_t $tmp2551 = $tmp2549 - $tmp2550;
panda$core$Int64 $tmp2552 = (panda$core$Int64) {$tmp2551};
*(&local3) = $tmp2552;
// line 1424
panda$core$Int64 $tmp2553 = *(&local3);
panda$core$Int64 $tmp2554 = (panda$core$Int64) {0};
int64_t $tmp2555 = $tmp2553.value;
int64_t $tmp2556 = $tmp2554.value;
bool $tmp2557 = $tmp2555 < $tmp2556;
panda$core$Bit $tmp2558 = (panda$core$Bit) {$tmp2557};
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block11; else goto block12;
block11:;
*(&local4) = $tmp2558;
goto block13;
block12:;
panda$core$Int64 $tmp2560 = *(&local3);
panda$core$Int64 $tmp2561 = (panda$core$Int64) {9};
int64_t $tmp2562 = $tmp2560.value;
int64_t $tmp2563 = $tmp2561.value;
bool $tmp2564 = $tmp2562 > $tmp2563;
panda$core$Bit $tmp2565 = (panda$core$Bit) {$tmp2564};
*(&local4) = $tmp2565;
goto block13;
block13:;
panda$core$Bit $tmp2566 = *(&local4);
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block14; else goto block15;
block14:;
// line 1425
return ((panda$core$Int64$nullable) { .nonnull = false });
block15:;
// line 1427
panda$core$Int64 $tmp2568 = *(&local0);
panda$core$Int64 $tmp2569 = (panda$core$Int64) {10};
int64_t $tmp2570 = $tmp2568.value;
int64_t $tmp2571 = $tmp2569.value;
int64_t $tmp2572 = $tmp2570 * $tmp2571;
panda$core$Int64 $tmp2573 = (panda$core$Int64) {$tmp2572};
panda$core$Int64 $tmp2574 = *(&local3);
int64_t $tmp2575 = $tmp2573.value;
int64_t $tmp2576 = $tmp2574.value;
int64_t $tmp2577 = $tmp2575 + $tmp2576;
panda$core$Int64 $tmp2578 = (panda$core$Int64) {$tmp2577};
*(&local0) = $tmp2578;
goto block8;
block8:;
panda$core$Int64 $tmp2579 = *(&local2);
int64_t $tmp2580 = $tmp2526.value;
int64_t $tmp2581 = $tmp2579.value;
int64_t $tmp2582 = $tmp2580 - $tmp2581;
panda$core$Int64 $tmp2583 = (panda$core$Int64) {$tmp2582};
panda$core$UInt64 $tmp2584 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2583);
if ($tmp2528) goto block17; else goto block18;
block17:;
uint64_t $tmp2585 = $tmp2584.value;
uint64_t $tmp2586 = $tmp2530.value;
bool $tmp2587 = $tmp2585 >= $tmp2586;
panda$core$Bit $tmp2588 = (panda$core$Bit) {$tmp2587};
bool $tmp2589 = $tmp2588.value;
if ($tmp2589) goto block16; else goto block7;
block18:;
uint64_t $tmp2590 = $tmp2584.value;
uint64_t $tmp2591 = $tmp2530.value;
bool $tmp2592 = $tmp2590 > $tmp2591;
panda$core$Bit $tmp2593 = (panda$core$Bit) {$tmp2592};
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block16; else goto block7;
block16:;
int64_t $tmp2595 = $tmp2579.value;
int64_t $tmp2596 = $tmp2529.value;
int64_t $tmp2597 = $tmp2595 + $tmp2596;
panda$core$Int64 $tmp2598 = (panda$core$Int64) {$tmp2597};
*(&local2) = $tmp2598;
goto block6;
block7:;
// line 1429
panda$core$Char8** $tmp2599 = &param0->data;
panda$core$Char8* $tmp2600 = *$tmp2599;
panda$core$Int64 $tmp2601 = (panda$core$Int64) {0};
int64_t $tmp2602 = $tmp2601.value;
panda$core$Char8 $tmp2603 = $tmp2600[$tmp2602];
panda$core$UInt8 $tmp2604 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2605 = panda$core$Char8$init$panda$core$UInt8($tmp2604);
panda$core$Bit $tmp2606 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2603, $tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block19; else goto block20;
block19:;
// line 1430
panda$core$Int64 $tmp2608 = *(&local0);
panda$core$Int64 $tmp2609 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2608);
*(&local0) = $tmp2609;
goto block20;
block20:;
// line 1432
panda$core$Int64 $tmp2610 = *(&local0);
return ((panda$core$Int64$nullable) { $tmp2610, true });

}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* param0) {

panda$core$UInt64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$Bit local3;
// line 1442
panda$core$Int64* $tmp2611 = &param0->_length;
panda$core$Int64 $tmp2612 = *$tmp2611;
panda$core$Int64 $tmp2613 = (panda$core$Int64) {0};
panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2612, $tmp2613);
bool $tmp2615 = $tmp2614.value;
if ($tmp2615) goto block1; else goto block2;
block1:;
// line 1443
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1445
panda$core$UInt64 $tmp2616 = (panda$core$UInt64) {0};
*(&local0) = $tmp2616;
// line 1446
panda$core$Int64 $tmp2617 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2618 = &param0->_length;
panda$core$Int64 $tmp2619 = *$tmp2618;
panda$core$Bit $tmp2620 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2621 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2617, $tmp2619, $tmp2620);
panda$core$Int64 $tmp2622 = $tmp2621.min;
*(&local1) = $tmp2622;
panda$core$Int64 $tmp2623 = $tmp2621.max;
panda$core$Bit $tmp2624 = $tmp2621.inclusive;
bool $tmp2625 = $tmp2624.value;
panda$core$Int64 $tmp2626 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2627 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2626);
if ($tmp2625) goto block6; else goto block7;
block6:;
int64_t $tmp2628 = $tmp2622.value;
int64_t $tmp2629 = $tmp2623.value;
bool $tmp2630 = $tmp2628 <= $tmp2629;
panda$core$Bit $tmp2631 = (panda$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block3; else goto block4;
block7:;
int64_t $tmp2633 = $tmp2622.value;
int64_t $tmp2634 = $tmp2623.value;
bool $tmp2635 = $tmp2633 < $tmp2634;
panda$core$Bit $tmp2636 = (panda$core$Bit) {$tmp2635};
bool $tmp2637 = $tmp2636.value;
if ($tmp2637) goto block3; else goto block4;
block3:;
// line 1447
panda$core$Char8** $tmp2638 = &param0->data;
panda$core$Char8* $tmp2639 = *$tmp2638;
panda$core$Int64 $tmp2640 = *(&local1);
int64_t $tmp2641 = $tmp2640.value;
panda$core$Char8 $tmp2642 = $tmp2639[$tmp2641];
uint8_t $tmp2643 = $tmp2642.value;
panda$core$UInt64 $tmp2644 = (panda$core$UInt64) {((uint64_t) $tmp2643)};
panda$core$UInt64 $tmp2645 = (panda$core$UInt64) {48};
uint64_t $tmp2646 = $tmp2644.value;
uint64_t $tmp2647 = $tmp2645.value;
uint64_t $tmp2648 = $tmp2646 - $tmp2647;
panda$core$UInt64 $tmp2649 = (panda$core$UInt64) {$tmp2648};
*(&local2) = $tmp2649;
// line 1448
panda$core$UInt64 $tmp2650 = *(&local2);
panda$core$UInt64 $tmp2651 = (panda$core$UInt64) {0};
uint64_t $tmp2652 = $tmp2650.value;
uint64_t $tmp2653 = $tmp2651.value;
bool $tmp2654 = $tmp2652 < $tmp2653;
panda$core$Bit $tmp2655 = (panda$core$Bit) {$tmp2654};
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2655;
goto block10;
block9:;
panda$core$UInt64 $tmp2657 = *(&local2);
panda$core$UInt64 $tmp2658 = (panda$core$UInt64) {9};
uint64_t $tmp2659 = $tmp2657.value;
uint64_t $tmp2660 = $tmp2658.value;
bool $tmp2661 = $tmp2659 > $tmp2660;
panda$core$Bit $tmp2662 = (panda$core$Bit) {$tmp2661};
*(&local3) = $tmp2662;
goto block10;
block10:;
panda$core$Bit $tmp2663 = *(&local3);
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block11; else goto block12;
block11:;
// line 1449
return ((panda$core$UInt64$nullable) { .nonnull = false });
block12:;
// line 1451
panda$core$UInt64 $tmp2665 = *(&local0);
panda$core$UInt64 $tmp2666 = (panda$core$UInt64) {10};
uint64_t $tmp2667 = $tmp2665.value;
uint64_t $tmp2668 = $tmp2666.value;
uint64_t $tmp2669 = $tmp2667 * $tmp2668;
panda$core$UInt64 $tmp2670 = (panda$core$UInt64) {$tmp2669};
panda$core$UInt64 $tmp2671 = *(&local2);
uint64_t $tmp2672 = $tmp2670.value;
uint64_t $tmp2673 = $tmp2671.value;
uint64_t $tmp2674 = $tmp2672 + $tmp2673;
panda$core$UInt64 $tmp2675 = (panda$core$UInt64) {$tmp2674};
*(&local0) = $tmp2675;
goto block5;
block5:;
panda$core$Int64 $tmp2676 = *(&local1);
int64_t $tmp2677 = $tmp2623.value;
int64_t $tmp2678 = $tmp2676.value;
int64_t $tmp2679 = $tmp2677 - $tmp2678;
panda$core$Int64 $tmp2680 = (panda$core$Int64) {$tmp2679};
panda$core$UInt64 $tmp2681 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2680);
if ($tmp2625) goto block14; else goto block15;
block14:;
uint64_t $tmp2682 = $tmp2681.value;
uint64_t $tmp2683 = $tmp2627.value;
bool $tmp2684 = $tmp2682 >= $tmp2683;
panda$core$Bit $tmp2685 = (panda$core$Bit) {$tmp2684};
bool $tmp2686 = $tmp2685.value;
if ($tmp2686) goto block13; else goto block4;
block15:;
uint64_t $tmp2687 = $tmp2681.value;
uint64_t $tmp2688 = $tmp2627.value;
bool $tmp2689 = $tmp2687 > $tmp2688;
panda$core$Bit $tmp2690 = (panda$core$Bit) {$tmp2689};
bool $tmp2691 = $tmp2690.value;
if ($tmp2691) goto block13; else goto block4;
block13:;
int64_t $tmp2692 = $tmp2676.value;
int64_t $tmp2693 = $tmp2626.value;
int64_t $tmp2694 = $tmp2692 + $tmp2693;
panda$core$Int64 $tmp2695 = (panda$core$Int64) {$tmp2694};
*(&local1) = $tmp2695;
goto block3;
block4:;
// line 1453
panda$core$UInt64 $tmp2696 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp2696, true });

}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* param0) {

// line 1463
panda$core$Real64 $tmp2697;
panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp2697, param0);
return ((panda$core$Real64$nullable) { $tmp2697, true });

}
panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1471
panda$core$Int64 $tmp2698 = (panda$core$Int64) {1};
*(&local0) = $tmp2698;
// line 1472
panda$core$Int64 $tmp2699 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2700 = &param0->_length;
panda$core$Int64 $tmp2701 = *$tmp2700;
panda$core$Bit $tmp2702 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2703 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2699, $tmp2701, $tmp2702);
panda$core$Int64 $tmp2704 = $tmp2703.min;
*(&local1) = $tmp2704;
panda$core$Int64 $tmp2705 = $tmp2703.max;
panda$core$Bit $tmp2706 = $tmp2703.inclusive;
bool $tmp2707 = $tmp2706.value;
panda$core$Int64 $tmp2708 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2709 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2708);
if ($tmp2707) goto block4; else goto block5;
block4:;
int64_t $tmp2710 = $tmp2704.value;
int64_t $tmp2711 = $tmp2705.value;
bool $tmp2712 = $tmp2710 <= $tmp2711;
panda$core$Bit $tmp2713 = (panda$core$Bit) {$tmp2712};
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block1; else goto block2;
block5:;
int64_t $tmp2715 = $tmp2704.value;
int64_t $tmp2716 = $tmp2705.value;
bool $tmp2717 = $tmp2715 < $tmp2716;
panda$core$Bit $tmp2718 = (panda$core$Bit) {$tmp2717};
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block1; else goto block2;
block1:;
// line 1473
panda$core$Int64 $tmp2720 = *(&local0);
panda$core$Int64 $tmp2721 = (panda$core$Int64) {101};
int64_t $tmp2722 = $tmp2720.value;
int64_t $tmp2723 = $tmp2721.value;
int64_t $tmp2724 = $tmp2722 * $tmp2723;
panda$core$Int64 $tmp2725 = (panda$core$Int64) {$tmp2724};
panda$core$Char8** $tmp2726 = &param0->data;
panda$core$Char8* $tmp2727 = *$tmp2726;
panda$core$Int64 $tmp2728 = *(&local1);
int64_t $tmp2729 = $tmp2728.value;
panda$core$Char8 $tmp2730 = $tmp2727[$tmp2729];
uint8_t $tmp2731 = $tmp2730.value;
panda$core$Int64 $tmp2732 = (panda$core$Int64) {((int64_t) $tmp2731)};
int64_t $tmp2733 = $tmp2725.value;
int64_t $tmp2734 = $tmp2732.value;
int64_t $tmp2735 = $tmp2733 + $tmp2734;
panda$core$Int64 $tmp2736 = (panda$core$Int64) {$tmp2735};
*(&local0) = $tmp2736;
goto block3;
block3:;
panda$core$Int64 $tmp2737 = *(&local1);
int64_t $tmp2738 = $tmp2705.value;
int64_t $tmp2739 = $tmp2737.value;
int64_t $tmp2740 = $tmp2738 - $tmp2739;
panda$core$Int64 $tmp2741 = (panda$core$Int64) {$tmp2740};
panda$core$UInt64 $tmp2742 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2741);
if ($tmp2707) goto block7; else goto block8;
block7:;
uint64_t $tmp2743 = $tmp2742.value;
uint64_t $tmp2744 = $tmp2709.value;
bool $tmp2745 = $tmp2743 >= $tmp2744;
panda$core$Bit $tmp2746 = (panda$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block6; else goto block2;
block8:;
uint64_t $tmp2748 = $tmp2742.value;
uint64_t $tmp2749 = $tmp2709.value;
bool $tmp2750 = $tmp2748 > $tmp2749;
panda$core$Bit $tmp2751 = (panda$core$Bit) {$tmp2750};
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block6; else goto block2;
block6:;
int64_t $tmp2753 = $tmp2737.value;
int64_t $tmp2754 = $tmp2708.value;
int64_t $tmp2755 = $tmp2753 + $tmp2754;
panda$core$Int64 $tmp2756 = (panda$core$Int64) {$tmp2755};
*(&local1) = $tmp2756;
goto block1;
block2:;
// line 1484
panda$core$Int64 $tmp2757 = *(&local0);
return $tmp2757;

}

