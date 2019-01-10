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
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn91)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn96)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn187)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn269)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn603)(panda$core$Object*);
typedef panda$core$String* (*$fn715)(panda$core$Object*);
typedef panda$core$Object* (*$fn2092)(panda$core$String*);
typedef panda$core$Object* (*$fn2094)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2098)(panda$core$Object*);
typedef panda$core$Object* (*$fn2169)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2171)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2175)(panda$core$Object*);
typedef panda$core$Int64 (*$fn2502)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2556)(panda$collections$CollectionView*);

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
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

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
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* param0) {

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
panda$collections$Iterator* $tmp266 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(param0);
ITable* $tmp267 = $tmp266->$class->itable;
while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[2];
panda$core$Int64 $tmp270 = $tmp268($tmp266);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($1:panda.collections.Iterator<panda.core.Char32>)
return $tmp270;

}
panda$core$Int64 panda$core$String$get_byteLength$R$panda$core$Int64(panda$core$String* param0) {

// line 492
panda$core$Int64* $tmp271 = &param0->_length;
panda$core$Int64 $tmp272 = *$tmp271;
return $tmp272;

}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 496
panda$core$Int64* $tmp273 = &param0->_length;
panda$core$Int64 $tmp274 = *$tmp273;
panda$core$Int64* $tmp275 = &param1->_length;
panda$core$Int64 $tmp276 = *$tmp275;
int64_t $tmp277 = $tmp274.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 < $tmp278;
panda$core$Bit $tmp280 = (panda$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block1; else goto block2;
block1:;
// line 497
panda$core$Bit $tmp282 = panda$core$Bit$init$builtin_bit(false);
return $tmp282;
block2:;
// line 499
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
panda$core$Int64* $tmp284 = &param1->_length;
panda$core$Int64 $tmp285 = *$tmp284;
panda$core$Bit $tmp286 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp287 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp283, $tmp285, $tmp286);
panda$core$Int64 $tmp288 = $tmp287.min;
*(&local0) = $tmp288;
panda$core$Int64 $tmp289 = $tmp287.max;
panda$core$Bit $tmp290 = $tmp287.inclusive;
bool $tmp291 = $tmp290.value;
panda$core$Int64 $tmp292 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp293 = panda$core$Int64$convert$R$panda$core$UInt64($tmp292);
if ($tmp291) goto block6; else goto block7;
block6:;
int64_t $tmp294 = $tmp288.value;
int64_t $tmp295 = $tmp289.value;
bool $tmp296 = $tmp294 <= $tmp295;
panda$core$Bit $tmp297 = (panda$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block3; else goto block4;
block7:;
int64_t $tmp299 = $tmp288.value;
int64_t $tmp300 = $tmp289.value;
bool $tmp301 = $tmp299 < $tmp300;
panda$core$Bit $tmp302 = (panda$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block3; else goto block4;
block3:;
// line 500
panda$core$Char8** $tmp304 = &param0->data;
panda$core$Char8* $tmp305 = *$tmp304;
panda$core$Int64 $tmp306 = *(&local0);
int64_t $tmp307 = $tmp306.value;
panda$core$Char8 $tmp308 = $tmp305[$tmp307];
panda$core$Char8** $tmp309 = &param1->data;
panda$core$Char8* $tmp310 = *$tmp309;
panda$core$Int64 $tmp311 = *(&local0);
int64_t $tmp312 = $tmp311.value;
panda$core$Char8 $tmp313 = $tmp310[$tmp312];
panda$core$Bit $tmp314 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp308, $tmp313);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block8; else goto block9;
block8:;
// line 501
panda$core$Bit $tmp316 = panda$core$Bit$init$builtin_bit(false);
return $tmp316;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp317 = *(&local0);
int64_t $tmp318 = $tmp289.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 - $tmp319;
panda$core$Int64 $tmp321 = (panda$core$Int64) {$tmp320};
panda$core$UInt64 $tmp322 = panda$core$Int64$convert$R$panda$core$UInt64($tmp321);
if ($tmp291) goto block11; else goto block12;
block11:;
uint64_t $tmp323 = $tmp322.value;
uint64_t $tmp324 = $tmp293.value;
bool $tmp325 = $tmp323 >= $tmp324;
panda$core$Bit $tmp326 = (panda$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block10; else goto block4;
block12:;
uint64_t $tmp328 = $tmp322.value;
uint64_t $tmp329 = $tmp293.value;
bool $tmp330 = $tmp328 > $tmp329;
panda$core$Bit $tmp331 = (panda$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block10; else goto block4;
block10:;
int64_t $tmp333 = $tmp317.value;
int64_t $tmp334 = $tmp292.value;
int64_t $tmp335 = $tmp333 + $tmp334;
panda$core$Int64 $tmp336 = (panda$core$Int64) {$tmp335};
*(&local0) = $tmp336;
goto block3;
block4:;
// line 504
panda$core$Bit $tmp337 = panda$core$Bit$init$builtin_bit(true);
return $tmp337;

}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 508
panda$core$Int64* $tmp338 = &param0->_length;
panda$core$Int64 $tmp339 = *$tmp338;
panda$core$Int64* $tmp340 = &param1->_length;
panda$core$Int64 $tmp341 = *$tmp340;
int64_t $tmp342 = $tmp339.value;
int64_t $tmp343 = $tmp341.value;
bool $tmp344 = $tmp342 < $tmp343;
panda$core$Bit $tmp345 = (panda$core$Bit) {$tmp344};
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block1; else goto block2;
block1:;
// line 509
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit(false);
return $tmp347;
block2:;
// line 511
panda$core$Int64 $tmp348 = (panda$core$Int64) {0};
panda$core$Int64* $tmp349 = &param1->_length;
panda$core$Int64 $tmp350 = *$tmp349;
panda$core$Bit $tmp351 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp352 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp348, $tmp350, $tmp351);
panda$core$Int64 $tmp353 = $tmp352.min;
*(&local0) = $tmp353;
panda$core$Int64 $tmp354 = $tmp352.max;
panda$core$Bit $tmp355 = $tmp352.inclusive;
bool $tmp356 = $tmp355.value;
panda$core$Int64 $tmp357 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp358 = panda$core$Int64$convert$R$panda$core$UInt64($tmp357);
if ($tmp356) goto block6; else goto block7;
block6:;
int64_t $tmp359 = $tmp353.value;
int64_t $tmp360 = $tmp354.value;
bool $tmp361 = $tmp359 <= $tmp360;
panda$core$Bit $tmp362 = (panda$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block3; else goto block4;
block7:;
int64_t $tmp364 = $tmp353.value;
int64_t $tmp365 = $tmp354.value;
bool $tmp366 = $tmp364 < $tmp365;
panda$core$Bit $tmp367 = (panda$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block3; else goto block4;
block3:;
// line 512
panda$core$Char8** $tmp369 = &param0->data;
panda$core$Char8* $tmp370 = *$tmp369;
panda$core$Int64* $tmp371 = &param0->_length;
panda$core$Int64 $tmp372 = *$tmp371;
panda$core$Int64* $tmp373 = &param1->_length;
panda$core$Int64 $tmp374 = *$tmp373;
int64_t $tmp375 = $tmp372.value;
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375 - $tmp376;
panda$core$Int64 $tmp378 = (panda$core$Int64) {$tmp377};
panda$core$Int64 $tmp379 = *(&local0);
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380 + $tmp381;
panda$core$Int64 $tmp383 = (panda$core$Int64) {$tmp382};
int64_t $tmp384 = $tmp383.value;
panda$core$Char8 $tmp385 = $tmp370[$tmp384];
panda$core$Char8** $tmp386 = &param1->data;
panda$core$Char8* $tmp387 = *$tmp386;
panda$core$Int64 $tmp388 = *(&local0);
int64_t $tmp389 = $tmp388.value;
panda$core$Char8 $tmp390 = $tmp387[$tmp389];
panda$core$Bit $tmp391 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp385, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block8; else goto block9;
block8:;
// line 513
panda$core$Bit $tmp393 = panda$core$Bit$init$builtin_bit(false);
return $tmp393;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp394 = *(&local0);
int64_t $tmp395 = $tmp354.value;
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395 - $tmp396;
panda$core$Int64 $tmp398 = (panda$core$Int64) {$tmp397};
panda$core$UInt64 $tmp399 = panda$core$Int64$convert$R$panda$core$UInt64($tmp398);
if ($tmp356) goto block11; else goto block12;
block11:;
uint64_t $tmp400 = $tmp399.value;
uint64_t $tmp401 = $tmp358.value;
bool $tmp402 = $tmp400 >= $tmp401;
panda$core$Bit $tmp403 = (panda$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block10; else goto block4;
block12:;
uint64_t $tmp405 = $tmp399.value;
uint64_t $tmp406 = $tmp358.value;
bool $tmp407 = $tmp405 > $tmp406;
panda$core$Bit $tmp408 = (panda$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block10; else goto block4;
block10:;
int64_t $tmp410 = $tmp394.value;
int64_t $tmp411 = $tmp357.value;
int64_t $tmp412 = $tmp410 + $tmp411;
panda$core$Int64 $tmp413 = (panda$core$Int64) {$tmp412};
*(&local0) = $tmp413;
goto block3;
block4:;
// line 516
panda$core$Bit $tmp414 = panda$core$Bit$init$builtin_bit(true);
return $tmp414;

}
panda$core$String* panda$core$String$get_trimmed$R$panda$core$String(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Bit local1;
panda$core$Int64 local2;
panda$core$Bit local3;
// line 525
panda$core$Int64* $tmp415 = &param0->_length;
panda$core$Int64 $tmp416 = *$tmp415;
panda$core$Int64 $tmp417 = (panda$core$Int64) {0};
panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp416, $tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block1:;
// line 526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 528
panda$core$Int64 $tmp420 = (panda$core$Int64) {0};
*(&local0) = $tmp420;
// line 529
goto block3;
block3:;
panda$core$Int64 $tmp421 = *(&local0);
panda$core$Int64* $tmp422 = &param0->_length;
panda$core$Int64 $tmp423 = *$tmp422;
int64_t $tmp424 = $tmp421.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 < $tmp425;
panda$core$Bit $tmp427 = (panda$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block6; else goto block7;
block6:;
panda$core$Char8** $tmp429 = &param0->data;
panda$core$Char8* $tmp430 = *$tmp429;
panda$core$Int64 $tmp431 = *(&local0);
int64_t $tmp432 = $tmp431.value;
panda$core$Char8 $tmp433 = $tmp430[$tmp432];
panda$core$Bit $tmp434 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp433);
*(&local1) = $tmp434;
goto block8;
block7:;
*(&local1) = $tmp427;
goto block8;
block8:;
panda$core$Bit $tmp435 = *(&local1);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block4; else goto block5;
block4:;
// line 530
panda$core$Int64 $tmp437 = *(&local0);
panda$core$Int64 $tmp438 = (panda$core$Int64) {1};
int64_t $tmp439 = $tmp437.value;
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439 + $tmp440;
panda$core$Int64 $tmp442 = (panda$core$Int64) {$tmp441};
*(&local0) = $tmp442;
goto block3;
block5:;
// line 533
panda$core$Int64* $tmp443 = &param0->_length;
panda$core$Int64 $tmp444 = *$tmp443;
panda$core$Int64 $tmp445 = (panda$core$Int64) {1};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
panda$core$Int64 $tmp449 = (panda$core$Int64) {$tmp448};
*(&local2) = $tmp449;
// line 534
goto block9;
block9:;
panda$core$Int64 $tmp450 = *(&local2);
panda$core$Int64 $tmp451 = *(&local0);
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
bool $tmp454 = $tmp452 >= $tmp453;
panda$core$Bit $tmp455 = (panda$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block12; else goto block13;
block12:;
panda$core$Char8** $tmp457 = &param0->data;
panda$core$Char8* $tmp458 = *$tmp457;
panda$core$Int64 $tmp459 = *(&local2);
int64_t $tmp460 = $tmp459.value;
panda$core$Char8 $tmp461 = $tmp458[$tmp460];
panda$core$Bit $tmp462 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp461);
*(&local3) = $tmp462;
goto block14;
block13:;
*(&local3) = $tmp455;
goto block14;
block14:;
panda$core$Bit $tmp463 = *(&local3);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block10; else goto block11;
block10:;
// line 535
panda$core$Int64 $tmp465 = *(&local2);
panda$core$Int64 $tmp466 = (panda$core$Int64) {1};
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466.value;
int64_t $tmp469 = $tmp467 - $tmp468;
panda$core$Int64 $tmp470 = (panda$core$Int64) {$tmp469};
*(&local2) = $tmp470;
goto block9;
block11:;
// line 538
panda$core$Int64 $tmp471 = *(&local0);
panda$core$String$Index $tmp472 = panda$core$String$Index$init$panda$core$Int64($tmp471);
panda$core$Int64 $tmp473 = *(&local2);
panda$core$String$Index $tmp474 = panda$core$String$Index$init$panda$core$Int64($tmp473);
panda$core$Bit $tmp475 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$String$Index$GT $tmp476 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp472, $tmp474, $tmp475);
panda$core$String* $tmp477 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp476);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing REF($95:panda.core.String)
return $tmp477;

}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$Char8* local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 545
panda$core$Int64* $tmp478 = &param0->_length;
panda$core$Int64 $tmp479 = *$tmp478;
panda$core$Int64* $tmp480 = &param1->_length;
panda$core$Int64 $tmp481 = *$tmp480;
int64_t $tmp482 = $tmp479.value;
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482 + $tmp483;
panda$core$Int64 $tmp485 = (panda$core$Int64) {$tmp484};
int64_t $tmp486 = $tmp485.value;
panda$core$Char8* $tmp487 = ((panda$core$Char8*) pandaZAlloc($tmp486 * 1));
*(&local0) = $tmp487;
// line 546
panda$core$Int64 $tmp488 = (panda$core$Int64) {0};
panda$core$Int64* $tmp489 = &param0->_length;
panda$core$Int64 $tmp490 = *$tmp489;
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp492 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp488, $tmp490, $tmp491);
panda$core$Int64 $tmp493 = $tmp492.min;
*(&local1) = $tmp493;
panda$core$Int64 $tmp494 = $tmp492.max;
panda$core$Bit $tmp495 = $tmp492.inclusive;
bool $tmp496 = $tmp495.value;
panda$core$Int64 $tmp497 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp498 = panda$core$Int64$convert$R$panda$core$UInt64($tmp497);
if ($tmp496) goto block4; else goto block5;
block4:;
int64_t $tmp499 = $tmp493.value;
int64_t $tmp500 = $tmp494.value;
bool $tmp501 = $tmp499 <= $tmp500;
panda$core$Bit $tmp502 = (panda$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block1; else goto block2;
block5:;
int64_t $tmp504 = $tmp493.value;
int64_t $tmp505 = $tmp494.value;
bool $tmp506 = $tmp504 < $tmp505;
panda$core$Bit $tmp507 = (panda$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block1; else goto block2;
block1:;
// line 547
panda$core$Char8* $tmp509 = *(&local0);
panda$core$Int64 $tmp510 = *(&local1);
panda$core$Char8** $tmp511 = &param0->data;
panda$core$Char8* $tmp512 = *$tmp511;
panda$core$Int64 $tmp513 = *(&local1);
int64_t $tmp514 = $tmp513.value;
panda$core$Char8 $tmp515 = $tmp512[$tmp514];
int64_t $tmp516 = $tmp510.value;
$tmp509[$tmp516] = $tmp515;
goto block3;
block3:;
panda$core$Int64 $tmp517 = *(&local1);
int64_t $tmp518 = $tmp494.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 - $tmp519;
panda$core$Int64 $tmp521 = (panda$core$Int64) {$tmp520};
panda$core$UInt64 $tmp522 = panda$core$Int64$convert$R$panda$core$UInt64($tmp521);
if ($tmp496) goto block7; else goto block8;
block7:;
uint64_t $tmp523 = $tmp522.value;
uint64_t $tmp524 = $tmp498.value;
bool $tmp525 = $tmp523 >= $tmp524;
panda$core$Bit $tmp526 = (panda$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block6; else goto block2;
block8:;
uint64_t $tmp528 = $tmp522.value;
uint64_t $tmp529 = $tmp498.value;
bool $tmp530 = $tmp528 > $tmp529;
panda$core$Bit $tmp531 = (panda$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block6; else goto block2;
block6:;
int64_t $tmp533 = $tmp517.value;
int64_t $tmp534 = $tmp497.value;
int64_t $tmp535 = $tmp533 + $tmp534;
panda$core$Int64 $tmp536 = (panda$core$Int64) {$tmp535};
*(&local1) = $tmp536;
goto block1;
block2:;
// line 549
panda$core$Int64 $tmp537 = (panda$core$Int64) {0};
panda$core$Int64* $tmp538 = &param1->_length;
panda$core$Int64 $tmp539 = *$tmp538;
panda$core$Bit $tmp540 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp541 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp537, $tmp539, $tmp540);
panda$core$Int64 $tmp542 = $tmp541.min;
*(&local2) = $tmp542;
panda$core$Int64 $tmp543 = $tmp541.max;
panda$core$Bit $tmp544 = $tmp541.inclusive;
bool $tmp545 = $tmp544.value;
panda$core$Int64 $tmp546 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp547 = panda$core$Int64$convert$R$panda$core$UInt64($tmp546);
if ($tmp545) goto block12; else goto block13;
block12:;
int64_t $tmp548 = $tmp542.value;
int64_t $tmp549 = $tmp543.value;
bool $tmp550 = $tmp548 <= $tmp549;
panda$core$Bit $tmp551 = (panda$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block9; else goto block10;
block13:;
int64_t $tmp553 = $tmp542.value;
int64_t $tmp554 = $tmp543.value;
bool $tmp555 = $tmp553 < $tmp554;
panda$core$Bit $tmp556 = (panda$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block9; else goto block10;
block9:;
// line 550
panda$core$Char8* $tmp558 = *(&local0);
panda$core$Int64* $tmp559 = &param0->_length;
panda$core$Int64 $tmp560 = *$tmp559;
panda$core$Int64 $tmp561 = *(&local2);
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 + $tmp563;
panda$core$Int64 $tmp565 = (panda$core$Int64) {$tmp564};
panda$core$Char8** $tmp566 = &param1->data;
panda$core$Char8* $tmp567 = *$tmp566;
panda$core$Int64 $tmp568 = *(&local2);
int64_t $tmp569 = $tmp568.value;
panda$core$Char8 $tmp570 = $tmp567[$tmp569];
int64_t $tmp571 = $tmp565.value;
$tmp558[$tmp571] = $tmp570;
goto block11;
block11:;
panda$core$Int64 $tmp572 = *(&local2);
int64_t $tmp573 = $tmp543.value;
int64_t $tmp574 = $tmp572.value;
int64_t $tmp575 = $tmp573 - $tmp574;
panda$core$Int64 $tmp576 = (panda$core$Int64) {$tmp575};
panda$core$UInt64 $tmp577 = panda$core$Int64$convert$R$panda$core$UInt64($tmp576);
if ($tmp545) goto block15; else goto block16;
block15:;
uint64_t $tmp578 = $tmp577.value;
uint64_t $tmp579 = $tmp547.value;
bool $tmp580 = $tmp578 >= $tmp579;
panda$core$Bit $tmp581 = (panda$core$Bit) {$tmp580};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block14; else goto block10;
block16:;
uint64_t $tmp583 = $tmp577.value;
uint64_t $tmp584 = $tmp547.value;
bool $tmp585 = $tmp583 > $tmp584;
panda$core$Bit $tmp586 = (panda$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block14; else goto block10;
block14:;
int64_t $tmp588 = $tmp572.value;
int64_t $tmp589 = $tmp546.value;
int64_t $tmp590 = $tmp588 + $tmp589;
panda$core$Int64 $tmp591 = (panda$core$Int64) {$tmp590};
*(&local2) = $tmp591;
goto block9;
block10:;
// line 552
panda$core$String* $tmp592 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp593 = *(&local0);
panda$core$Int64* $tmp594 = &param0->_length;
panda$core$Int64 $tmp595 = *$tmp594;
panda$core$Int64* $tmp596 = &param1->_length;
panda$core$Int64 $tmp597 = *$tmp596;
int64_t $tmp598 = $tmp595.value;
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598 + $tmp599;
panda$core$Int64 $tmp601 = (panda$core$Int64) {$tmp600};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp592, $tmp593, $tmp601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing REF($143:panda.core.String)
return $tmp592;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* param0, panda$core$Object* param1) {

// line 560
$fn603 $tmp602 = ($fn603) param1->$class->vtable[0];
panda$core$String* $tmp604 = $tmp602(param1);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp604);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($2:panda.core.String)
return $tmp605;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp606 = (panda$core$Int64) {0};
int64_t $tmp607 = param1.value;
int64_t $tmp608 = $tmp606.value;
bool $tmp609 = $tmp607 >= $tmp608;
panda$core$Bit $tmp610 = (panda$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp612 = (panda$core$Int64) {567};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s613, $tmp612, &$s614);
abort(); // unreachable
block1:;
// line 568
panda$core$MutableString* $tmp615 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp615);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
panda$core$MutableString* $tmp616 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
*(&local0) = $tmp615;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($11:panda.core.MutableString)
// line 569
panda$core$Int64 $tmp617 = (panda$core$Int64) {0};
panda$core$Bit $tmp618 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp619 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp617, param1, $tmp618);
panda$core$Int64 $tmp620 = $tmp619.min;
*(&local1) = $tmp620;
panda$core$Int64 $tmp621 = $tmp619.max;
panda$core$Bit $tmp622 = $tmp619.inclusive;
bool $tmp623 = $tmp622.value;
panda$core$Int64 $tmp624 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp625 = panda$core$Int64$convert$R$panda$core$UInt64($tmp624);
if ($tmp623) goto block6; else goto block7;
block6:;
int64_t $tmp626 = $tmp620.value;
int64_t $tmp627 = $tmp621.value;
bool $tmp628 = $tmp626 <= $tmp627;
panda$core$Bit $tmp629 = (panda$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block3; else goto block4;
block7:;
int64_t $tmp631 = $tmp620.value;
int64_t $tmp632 = $tmp621.value;
bool $tmp633 = $tmp631 < $tmp632;
panda$core$Bit $tmp634 = (panda$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block3; else goto block4;
block3:;
// line 570
panda$core$MutableString* $tmp636 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp636, param0);
goto block5;
block5:;
panda$core$Int64 $tmp637 = *(&local1);
int64_t $tmp638 = $tmp621.value;
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638 - $tmp639;
panda$core$Int64 $tmp641 = (panda$core$Int64) {$tmp640};
panda$core$UInt64 $tmp642 = panda$core$Int64$convert$R$panda$core$UInt64($tmp641);
if ($tmp623) goto block9; else goto block10;
block9:;
uint64_t $tmp643 = $tmp642.value;
uint64_t $tmp644 = $tmp625.value;
bool $tmp645 = $tmp643 >= $tmp644;
panda$core$Bit $tmp646 = (panda$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block8; else goto block4;
block10:;
uint64_t $tmp648 = $tmp642.value;
uint64_t $tmp649 = $tmp625.value;
bool $tmp650 = $tmp648 > $tmp649;
panda$core$Bit $tmp651 = (panda$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block8; else goto block4;
block8:;
int64_t $tmp653 = $tmp637.value;
int64_t $tmp654 = $tmp624.value;
int64_t $tmp655 = $tmp653 + $tmp654;
panda$core$Int64 $tmp656 = (panda$core$Int64) {$tmp655};
*(&local1) = $tmp656;
goto block3;
block4:;
// line 572
panda$core$MutableString* $tmp657 = *(&local0);
panda$core$String* $tmp658 = panda$core$MutableString$finish$R$panda$core$String($tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp659 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp658;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp660 = (panda$core$Int64) {0};
int64_t $tmp661 = param0.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 >= $tmp662;
panda$core$Bit $tmp664 = (panda$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp666 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s667, $tmp666, &$s668);
abort(); // unreachable
block1:;
// line 581
panda$core$MutableString* $tmp669 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp669);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
panda$core$MutableString* $tmp670 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
*(&local0) = $tmp669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($11:panda.core.MutableString)
// line 582
panda$core$Int64 $tmp671 = (panda$core$Int64) {0};
panda$core$Bit $tmp672 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp673 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp671, param0, $tmp672);
panda$core$Int64 $tmp674 = $tmp673.min;
*(&local1) = $tmp674;
panda$core$Int64 $tmp675 = $tmp673.max;
panda$core$Bit $tmp676 = $tmp673.inclusive;
bool $tmp677 = $tmp676.value;
panda$core$Int64 $tmp678 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp679 = panda$core$Int64$convert$R$panda$core$UInt64($tmp678);
if ($tmp677) goto block6; else goto block7;
block6:;
int64_t $tmp680 = $tmp674.value;
int64_t $tmp681 = $tmp675.value;
bool $tmp682 = $tmp680 <= $tmp681;
panda$core$Bit $tmp683 = (panda$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block3; else goto block4;
block7:;
int64_t $tmp685 = $tmp674.value;
int64_t $tmp686 = $tmp675.value;
bool $tmp687 = $tmp685 < $tmp686;
panda$core$Bit $tmp688 = (panda$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block3; else goto block4;
block3:;
// line 583
panda$core$MutableString* $tmp690 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp690, param1);
goto block5;
block5:;
panda$core$Int64 $tmp691 = *(&local1);
int64_t $tmp692 = $tmp675.value;
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692 - $tmp693;
panda$core$Int64 $tmp695 = (panda$core$Int64) {$tmp694};
panda$core$UInt64 $tmp696 = panda$core$Int64$convert$R$panda$core$UInt64($tmp695);
if ($tmp677) goto block9; else goto block10;
block9:;
uint64_t $tmp697 = $tmp696.value;
uint64_t $tmp698 = $tmp679.value;
bool $tmp699 = $tmp697 >= $tmp698;
panda$core$Bit $tmp700 = (panda$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block8; else goto block4;
block10:;
uint64_t $tmp702 = $tmp696.value;
uint64_t $tmp703 = $tmp679.value;
bool $tmp704 = $tmp702 > $tmp703;
panda$core$Bit $tmp705 = (panda$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block8; else goto block4;
block8:;
int64_t $tmp707 = $tmp691.value;
int64_t $tmp708 = $tmp678.value;
int64_t $tmp709 = $tmp707 + $tmp708;
panda$core$Int64 $tmp710 = (panda$core$Int64) {$tmp709};
*(&local1) = $tmp710;
goto block3;
block4:;
// line 585
panda$core$MutableString* $tmp711 = *(&local0);
panda$core$String* $tmp712 = panda$core$MutableString$finish$R$panda$core$String($tmp711);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp713 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp712;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* param0, panda$core$String* param1) {

// line 594
$fn715 $tmp714 = ($fn715) param0->$class->vtable[0];
panda$core$String* $tmp716 = $tmp714(param0);
panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp716, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing REF($2:panda.core.String)
return $tmp717;

}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 607
panda$core$Int64* $tmp718 = &param0->_length;
panda$core$Int64 $tmp719 = *$tmp718;
panda$core$Int64* $tmp720 = &param1->_length;
panda$core$Int64 $tmp721 = *$tmp720;
int64_t $tmp722 = $tmp719.value;
int64_t $tmp723 = $tmp721.value;
bool $tmp724 = $tmp722 != $tmp723;
panda$core$Bit $tmp725 = (panda$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block1; else goto block2;
block1:;
// line 608
panda$core$Bit $tmp727 = panda$core$Bit$init$builtin_bit(false);
return $tmp727;
block2:;
// line 610
panda$core$Int64 $tmp728 = (panda$core$Int64) {0};
panda$core$Int64* $tmp729 = &param0->_length;
panda$core$Int64 $tmp730 = *$tmp729;
panda$core$Bit $tmp731 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp732 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp728, $tmp730, $tmp731);
panda$core$Int64 $tmp733 = $tmp732.min;
*(&local0) = $tmp733;
panda$core$Int64 $tmp734 = $tmp732.max;
panda$core$Bit $tmp735 = $tmp732.inclusive;
bool $tmp736 = $tmp735.value;
panda$core$Int64 $tmp737 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp738 = panda$core$Int64$convert$R$panda$core$UInt64($tmp737);
if ($tmp736) goto block6; else goto block7;
block6:;
int64_t $tmp739 = $tmp733.value;
int64_t $tmp740 = $tmp734.value;
bool $tmp741 = $tmp739 <= $tmp740;
panda$core$Bit $tmp742 = (panda$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block3; else goto block4;
block7:;
int64_t $tmp744 = $tmp733.value;
int64_t $tmp745 = $tmp734.value;
bool $tmp746 = $tmp744 < $tmp745;
panda$core$Bit $tmp747 = (panda$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block3; else goto block4;
block3:;
// line 611
panda$core$Char8** $tmp749 = &param0->data;
panda$core$Char8* $tmp750 = *$tmp749;
panda$core$Int64 $tmp751 = *(&local0);
int64_t $tmp752 = $tmp751.value;
panda$core$Char8 $tmp753 = $tmp750[$tmp752];
panda$core$Char8** $tmp754 = &param1->data;
panda$core$Char8* $tmp755 = *$tmp754;
panda$core$Int64 $tmp756 = *(&local0);
int64_t $tmp757 = $tmp756.value;
panda$core$Char8 $tmp758 = $tmp755[$tmp757];
panda$core$Bit $tmp759 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp753, $tmp758);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block8; else goto block9;
block8:;
// line 612
panda$core$Bit $tmp761 = panda$core$Bit$init$builtin_bit(false);
return $tmp761;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp762 = *(&local0);
int64_t $tmp763 = $tmp734.value;
int64_t $tmp764 = $tmp762.value;
int64_t $tmp765 = $tmp763 - $tmp764;
panda$core$Int64 $tmp766 = (panda$core$Int64) {$tmp765};
panda$core$UInt64 $tmp767 = panda$core$Int64$convert$R$panda$core$UInt64($tmp766);
if ($tmp736) goto block11; else goto block12;
block11:;
uint64_t $tmp768 = $tmp767.value;
uint64_t $tmp769 = $tmp738.value;
bool $tmp770 = $tmp768 >= $tmp769;
panda$core$Bit $tmp771 = (panda$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block10; else goto block4;
block12:;
uint64_t $tmp773 = $tmp767.value;
uint64_t $tmp774 = $tmp738.value;
bool $tmp775 = $tmp773 > $tmp774;
panda$core$Bit $tmp776 = (panda$core$Bit) {$tmp775};
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block10; else goto block4;
block10:;
int64_t $tmp778 = $tmp762.value;
int64_t $tmp779 = $tmp737.value;
int64_t $tmp780 = $tmp778 + $tmp779;
panda$core$Int64 $tmp781 = (panda$core$Int64) {$tmp780};
*(&local0) = $tmp781;
goto block3;
block4:;
// line 615
panda$core$Bit $tmp782 = panda$core$Bit$init$builtin_bit(true);
return $tmp782;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 622
panda$core$Int64 $tmp783 = param1.value;
*(&local0) = $tmp783;
// line 623
panda$core$Char8** $tmp784 = &param0->data;
panda$core$Char8* $tmp785 = *$tmp784;
panda$core$Int64 $tmp786 = *(&local0);
int64_t $tmp787 = $tmp786.value;
panda$core$Char8 $tmp788 = $tmp785[$tmp787];
*(&local1) = $tmp788;
// line 624
panda$core$Char8 $tmp789 = *(&local1);
panda$core$Int32 $tmp790 = panda$core$Char8$convert$R$panda$core$Int32($tmp789);
*(&local2) = $tmp790;
// line 625
panda$core$Char8 $tmp791 = *(&local1);
uint8_t $tmp792 = $tmp791.value;
int64_t $tmp793 = ((int64_t) $tmp792) & 255;
bool $tmp794 = $tmp793 < 192;
panda$core$Bit $tmp795 = panda$core$Bit$init$builtin_bit($tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block1; else goto block2;
block1:;
// line 626
panda$core$Int32 $tmp797 = *(&local2);
panda$core$Char32 $tmp798 = panda$core$Char32$init$panda$core$Int32($tmp797);
return $tmp798;
block2:;
// line 628
panda$core$Char8 $tmp799 = *(&local1);
uint8_t $tmp800 = $tmp799.value;
int64_t $tmp801 = ((int64_t) $tmp800) & 255;
bool $tmp802 = $tmp801 < 224;
panda$core$Bit $tmp803 = panda$core$Bit$init$builtin_bit($tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block3; else goto block4;
block3:;
// line 629
panda$core$Int64 $tmp805 = *(&local0);
panda$core$Int64 $tmp806 = (panda$core$Int64) {1};
int64_t $tmp807 = $tmp805.value;
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807 + $tmp808;
panda$core$Int64 $tmp810 = (panda$core$Int64) {$tmp809};
panda$core$Int64* $tmp811 = &param0->_length;
panda$core$Int64 $tmp812 = *$tmp811;
int64_t $tmp813 = $tmp810.value;
int64_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 < $tmp814;
panda$core$Bit $tmp816 = (panda$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp818 = (panda$core$Int64) {629};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s819, $tmp818);
abort(); // unreachable
block5:;
// line 630
panda$core$Int32 $tmp820 = *(&local2);
panda$core$Int32 $tmp821 = (panda$core$Int32) {31};
panda$core$Int32 $tmp822 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp820, $tmp821);
panda$core$Int32 $tmp823 = (panda$core$Int32) {6};
panda$core$Int32 $tmp824 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp822, $tmp823);
panda$core$Char8** $tmp825 = &param0->data;
panda$core$Char8* $tmp826 = *$tmp825;
panda$core$Int64 $tmp827 = *(&local0);
panda$core$Int64 $tmp828 = (panda$core$Int64) {1};
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828.value;
int64_t $tmp831 = $tmp829 + $tmp830;
panda$core$Int64 $tmp832 = (panda$core$Int64) {$tmp831};
int64_t $tmp833 = $tmp832.value;
panda$core$Char8 $tmp834 = $tmp826[$tmp833];
panda$core$Int32 $tmp835 = panda$core$Char8$convert$R$panda$core$Int32($tmp834);
panda$core$Int32 $tmp836 = (panda$core$Int32) {63};
panda$core$Int32 $tmp837 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp835, $tmp836);
int32_t $tmp838 = $tmp824.value;
int32_t $tmp839 = $tmp837.value;
int32_t $tmp840 = $tmp838 + $tmp839;
panda$core$Int32 $tmp841 = (panda$core$Int32) {$tmp840};
*(&local2) = $tmp841;
// line 631
panda$core$Int32 $tmp842 = *(&local2);
panda$core$Char32 $tmp843 = panda$core$Char32$init$panda$core$Int32($tmp842);
return $tmp843;
block4:;
// line 633
panda$core$Char8 $tmp844 = *(&local1);
uint8_t $tmp845 = $tmp844.value;
int64_t $tmp846 = ((int64_t) $tmp845) & 255;
bool $tmp847 = $tmp846 < 240;
panda$core$Bit $tmp848 = panda$core$Bit$init$builtin_bit($tmp847);
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block7; else goto block8;
block7:;
// line 634
panda$core$Int64 $tmp850 = *(&local0);
panda$core$Int64 $tmp851 = (panda$core$Int64) {2};
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851.value;
int64_t $tmp854 = $tmp852 + $tmp853;
panda$core$Int64 $tmp855 = (panda$core$Int64) {$tmp854};
panda$core$Int64* $tmp856 = &param0->_length;
panda$core$Int64 $tmp857 = *$tmp856;
int64_t $tmp858 = $tmp855.value;
int64_t $tmp859 = $tmp857.value;
bool $tmp860 = $tmp858 < $tmp859;
panda$core$Bit $tmp861 = (panda$core$Bit) {$tmp860};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp863 = (panda$core$Int64) {634};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s864, $tmp863);
abort(); // unreachable
block9:;
// line 635
panda$core$Int32 $tmp865 = *(&local2);
panda$core$Int32 $tmp866 = (panda$core$Int32) {15};
panda$core$Int32 $tmp867 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp865, $tmp866);
panda$core$Int32 $tmp868 = (panda$core$Int32) {12};
panda$core$Int32 $tmp869 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp867, $tmp868);
panda$core$Char8** $tmp870 = &param0->data;
panda$core$Char8* $tmp871 = *$tmp870;
panda$core$Int64 $tmp872 = *(&local0);
panda$core$Int64 $tmp873 = (panda$core$Int64) {1};
int64_t $tmp874 = $tmp872.value;
int64_t $tmp875 = $tmp873.value;
int64_t $tmp876 = $tmp874 + $tmp875;
panda$core$Int64 $tmp877 = (panda$core$Int64) {$tmp876};
int64_t $tmp878 = $tmp877.value;
panda$core$Char8 $tmp879 = $tmp871[$tmp878];
panda$core$Int32 $tmp880 = panda$core$Char8$convert$R$panda$core$Int32($tmp879);
panda$core$Int32 $tmp881 = (panda$core$Int32) {63};
panda$core$Int32 $tmp882 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp880, $tmp881);
panda$core$Int32 $tmp883 = (panda$core$Int32) {6};
panda$core$Int32 $tmp884 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp882, $tmp883);
int32_t $tmp885 = $tmp869.value;
int32_t $tmp886 = $tmp884.value;
int32_t $tmp887 = $tmp885 + $tmp886;
panda$core$Int32 $tmp888 = (panda$core$Int32) {$tmp887};
panda$core$Char8** $tmp889 = &param0->data;
panda$core$Char8* $tmp890 = *$tmp889;
panda$core$Int64 $tmp891 = *(&local0);
panda$core$Int64 $tmp892 = (panda$core$Int64) {2};
int64_t $tmp893 = $tmp891.value;
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893 + $tmp894;
panda$core$Int64 $tmp896 = (panda$core$Int64) {$tmp895};
int64_t $tmp897 = $tmp896.value;
panda$core$Char8 $tmp898 = $tmp890[$tmp897];
panda$core$Int32 $tmp899 = panda$core$Char8$convert$R$panda$core$Int32($tmp898);
panda$core$Int32 $tmp900 = (panda$core$Int32) {63};
panda$core$Int32 $tmp901 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp899, $tmp900);
int32_t $tmp902 = $tmp888.value;
int32_t $tmp903 = $tmp901.value;
int32_t $tmp904 = $tmp902 + $tmp903;
panda$core$Int32 $tmp905 = (panda$core$Int32) {$tmp904};
*(&local2) = $tmp905;
// line 637
panda$core$Int32 $tmp906 = *(&local2);
panda$core$Char32 $tmp907 = panda$core$Char32$init$panda$core$Int32($tmp906);
return $tmp907;
block8:;
// line 639
panda$core$Int64 $tmp908 = *(&local0);
panda$core$Int64 $tmp909 = (panda$core$Int64) {3};
int64_t $tmp910 = $tmp908.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 + $tmp911;
panda$core$Int64 $tmp913 = (panda$core$Int64) {$tmp912};
panda$core$Int64* $tmp914 = &param0->_length;
panda$core$Int64 $tmp915 = *$tmp914;
int64_t $tmp916 = $tmp913.value;
int64_t $tmp917 = $tmp915.value;
bool $tmp918 = $tmp916 < $tmp917;
panda$core$Bit $tmp919 = (panda$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp921 = (panda$core$Int64) {639};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s922, $tmp921);
abort(); // unreachable
block11:;
// line 640
panda$core$Int32 $tmp923 = *(&local2);
panda$core$Int32 $tmp924 = (panda$core$Int32) {7};
panda$core$Int32 $tmp925 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp923, $tmp924);
panda$core$Int32 $tmp926 = (panda$core$Int32) {18};
panda$core$Int32 $tmp927 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp925, $tmp926);
panda$core$Char8** $tmp928 = &param0->data;
panda$core$Char8* $tmp929 = *$tmp928;
panda$core$Int64 $tmp930 = *(&local0);
panda$core$Int64 $tmp931 = (panda$core$Int64) {1};
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931.value;
int64_t $tmp934 = $tmp932 + $tmp933;
panda$core$Int64 $tmp935 = (panda$core$Int64) {$tmp934};
int64_t $tmp936 = $tmp935.value;
panda$core$Char8 $tmp937 = $tmp929[$tmp936];
panda$core$Int32 $tmp938 = panda$core$Char8$convert$R$panda$core$Int32($tmp937);
panda$core$Int32 $tmp939 = (panda$core$Int32) {63};
panda$core$Int32 $tmp940 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp938, $tmp939);
panda$core$Int32 $tmp941 = (panda$core$Int32) {12};
panda$core$Int32 $tmp942 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp940, $tmp941);
int32_t $tmp943 = $tmp927.value;
int32_t $tmp944 = $tmp942.value;
int32_t $tmp945 = $tmp943 + $tmp944;
panda$core$Int32 $tmp946 = (panda$core$Int32) {$tmp945};
panda$core$Char8** $tmp947 = &param0->data;
panda$core$Char8* $tmp948 = *$tmp947;
panda$core$Int64 $tmp949 = *(&local0);
panda$core$Int64 $tmp950 = (panda$core$Int64) {2};
int64_t $tmp951 = $tmp949.value;
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951 + $tmp952;
panda$core$Int64 $tmp954 = (panda$core$Int64) {$tmp953};
int64_t $tmp955 = $tmp954.value;
panda$core$Char8 $tmp956 = $tmp948[$tmp955];
panda$core$Int32 $tmp957 = panda$core$Char8$convert$R$panda$core$Int32($tmp956);
panda$core$Int32 $tmp958 = (panda$core$Int32) {63};
panda$core$Int32 $tmp959 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp957, $tmp958);
panda$core$Int32 $tmp960 = (panda$core$Int32) {6};
panda$core$Int32 $tmp961 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp959, $tmp960);
int32_t $tmp962 = $tmp946.value;
int32_t $tmp963 = $tmp961.value;
int32_t $tmp964 = $tmp962 + $tmp963;
panda$core$Int32 $tmp965 = (panda$core$Int32) {$tmp964};
panda$core$Char8** $tmp966 = &param0->data;
panda$core$Char8* $tmp967 = *$tmp966;
panda$core$Int64 $tmp968 = *(&local0);
panda$core$Int64 $tmp969 = (panda$core$Int64) {3};
int64_t $tmp970 = $tmp968.value;
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970 + $tmp971;
panda$core$Int64 $tmp973 = (panda$core$Int64) {$tmp972};
int64_t $tmp974 = $tmp973.value;
panda$core$Char8 $tmp975 = $tmp967[$tmp974];
panda$core$Int32 $tmp976 = panda$core$Char8$convert$R$panda$core$Int32($tmp975);
panda$core$Int32 $tmp977 = (panda$core$Int32) {63};
panda$core$Int32 $tmp978 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp976, $tmp977);
int32_t $tmp979 = $tmp965.value;
int32_t $tmp980 = $tmp978.value;
int32_t $tmp981 = $tmp979 + $tmp980;
panda$core$Int32 $tmp982 = (panda$core$Int32) {$tmp981};
*(&local2) = $tmp982;
// line 643
panda$core$Int32 $tmp983 = *(&local2);
panda$core$Char32 $tmp984 = panda$core$Char32$init$panda$core$Int32($tmp983);
return $tmp984;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* param0, panda$core$Int64 param1) {

// line 652
panda$core$String$Index $tmp985 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp986 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp985, param1);
panda$core$Char32 $tmp987 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp986);
return $tmp987;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
// line 665
panda$core$String$Index $tmp988 = param1.max;
panda$core$Int64 $tmp989 = $tmp988.value;
panda$core$String$Index $tmp990 = param1.min;
panda$core$Int64 $tmp991 = $tmp990.value;
int64_t $tmp992 = $tmp989.value;
int64_t $tmp993 = $tmp991.value;
int64_t $tmp994 = $tmp992 - $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {$tmp994};
*(&local0) = $tmp995;
// line 666
panda$core$Bit $tmp996 = param1.inclusive;
bool $tmp997 = $tmp996.value;
if ($tmp997) goto block1; else goto block2;
block1:;
// line 667
panda$core$Int64 $tmp998 = *(&local0);
panda$core$Int64 $tmp999 = (panda$core$Int64) {1};
int64_t $tmp1000 = $tmp998.value;
int64_t $tmp1001 = $tmp999.value;
int64_t $tmp1002 = $tmp1000 + $tmp1001;
panda$core$Int64 $tmp1003 = (panda$core$Int64) {$tmp1002};
*(&local0) = $tmp1003;
goto block2;
block2:;
// line 669
panda$core$String* $tmp1004 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8** $tmp1005 = &param0->data;
panda$core$Char8* $tmp1006 = *$tmp1005;
panda$core$String$Index $tmp1007 = param1.min;
panda$core$Int64 $tmp1008 = $tmp1007.value;
int64_t $tmp1009 = $tmp1008.value;
panda$core$Char8* $tmp1010 = $tmp1006 + $tmp1009;
panda$core$Int64 $tmp1011 = *(&local0);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp1004, $tmp1010, $tmp1011, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
// unreffing REF($24:panda.core.String)
return $tmp1004;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 685
// line 686
panda$core$String$Index$nullable $tmp1012 = param1.min;
panda$core$Bit $tmp1013 = panda$core$Bit$init$builtin_bit($tmp1012.nonnull);
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block1; else goto block3;
block1:;
// line 687
panda$core$String$Index$nullable $tmp1015 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1015.value);
goto block2;
block3:;
// line 1
// line 690
panda$core$String$Index $tmp1016 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1016;
goto block2;
block2:;
// line 693
panda$core$Bit $tmp1017 = param1.inclusive;
*(&local1) = $tmp1017;
// line 694
// line 695
panda$core$String$Index$nullable $tmp1018 = param1.max;
panda$core$Bit $tmp1019 = panda$core$Bit$init$builtin_bit($tmp1018.nonnull);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block4; else goto block6;
block4:;
// line 696
panda$core$String$Index$nullable $tmp1021 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1021.value);
goto block5;
block6:;
// line 1
// line 699
panda$core$String$Index $tmp1022 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1022;
// line 700
panda$core$Bit $tmp1023 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1023;
goto block5;
block5:;
// line 702
panda$core$String$Index $tmp1024 = *(&local0);
panda$core$String$Index $tmp1025 = *(&local2);
panda$core$Bit $tmp1026 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1027 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1024, $tmp1025, $tmp1026);
panda$core$String* $tmp1028 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1027);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($45:panda.core.String)
return $tmp1028;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$Char8 local3;
// line 710
panda$core$String$Index $tmp1029 = param1.min;
panda$core$Int64 $tmp1030 = $tmp1029.value;
*(&local0) = $tmp1030;
// line 711
panda$core$MutableString* $tmp1031 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1031);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
panda$core$MutableString* $tmp1032 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
*(&local1) = $tmp1031;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($5:panda.core.MutableString)
// line 712
panda$core$String$Index $tmp1033 = param1.max;
panda$core$Int64 $tmp1034 = $tmp1033.value;
*(&local2) = $tmp1034;
// line 713
panda$core$Bit $tmp1035 = param1.inclusive;
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block1; else goto block2;
block1:;
// line 714
panda$core$Int64 $tmp1037 = *(&local2);
panda$core$Int64 $tmp1038 = (panda$core$Int64) {1};
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 + $tmp1040;
panda$core$Int64 $tmp1042 = (panda$core$Int64) {$tmp1041};
*(&local2) = $tmp1042;
goto block2;
block2:;
// line 716
goto block3;
block3:;
panda$core$Int64 $tmp1043 = *(&local0);
panda$core$Int64 $tmp1044 = *(&local2);
int64_t $tmp1045 = $tmp1043.value;
int64_t $tmp1046 = $tmp1044.value;
bool $tmp1047 = $tmp1045 < $tmp1046;
panda$core$Bit $tmp1048 = (panda$core$Bit) {$tmp1047};
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block4; else goto block5;
block4:;
// line 717
panda$core$Char8** $tmp1050 = &param0->data;
panda$core$Char8* $tmp1051 = *$tmp1050;
panda$core$Int64 $tmp1052 = *(&local0);
int64_t $tmp1053 = $tmp1052.value;
panda$core$Char8 $tmp1054 = $tmp1051[$tmp1053];
*(&local3) = $tmp1054;
// line 718
panda$core$MutableString* $tmp1055 = *(&local1);
panda$core$Char8 $tmp1056 = *(&local3);
panda$core$MutableString$append$panda$core$Char8($tmp1055, $tmp1056);
// line 719
panda$core$Int64 $tmp1057 = *(&local0);
panda$core$Int64 $tmp1058 = (panda$core$Int64) {1};
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058.value;
int64_t $tmp1061 = $tmp1059 + $tmp1060;
panda$core$Int64 $tmp1062 = (panda$core$Int64) {$tmp1061};
*(&local0) = $tmp1062;
// line 720
panda$core$Char8 $tmp1063 = *(&local3);
uint8_t $tmp1064 = $tmp1063.value;
int64_t $tmp1065 = ((int64_t) $tmp1064) & 255;
bool $tmp1066 = $tmp1065 >= 192;
panda$core$Bit $tmp1067 = panda$core$Bit$init$builtin_bit($tmp1066);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block6; else goto block7;
block6:;
// line 721
panda$core$MutableString* $tmp1069 = *(&local1);
panda$core$Char8** $tmp1070 = &param0->data;
panda$core$Char8* $tmp1071 = *$tmp1070;
panda$core$Int64 $tmp1072 = *(&local0);
int64_t $tmp1073 = $tmp1072.value;
panda$core$Char8 $tmp1074 = $tmp1071[$tmp1073];
panda$core$MutableString$append$panda$core$Char8($tmp1069, $tmp1074);
// line 722
panda$core$Int64 $tmp1075 = *(&local0);
panda$core$Int64 $tmp1076 = (panda$core$Int64) {1};
int64_t $tmp1077 = $tmp1075.value;
int64_t $tmp1078 = $tmp1076.value;
int64_t $tmp1079 = $tmp1077 + $tmp1078;
panda$core$Int64 $tmp1080 = (panda$core$Int64) {$tmp1079};
*(&local0) = $tmp1080;
goto block7;
block7:;
// line 724
panda$core$Char8 $tmp1081 = *(&local3);
uint8_t $tmp1082 = $tmp1081.value;
int64_t $tmp1083 = ((int64_t) $tmp1082) & 255;
bool $tmp1084 = $tmp1083 >= 224;
panda$core$Bit $tmp1085 = panda$core$Bit$init$builtin_bit($tmp1084);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block8; else goto block9;
block8:;
// line 725
panda$core$MutableString* $tmp1087 = *(&local1);
panda$core$Char8** $tmp1088 = &param0->data;
panda$core$Char8* $tmp1089 = *$tmp1088;
panda$core$Int64 $tmp1090 = *(&local0);
int64_t $tmp1091 = $tmp1090.value;
panda$core$Char8 $tmp1092 = $tmp1089[$tmp1091];
panda$core$MutableString$append$panda$core$Char8($tmp1087, $tmp1092);
// line 726
panda$core$Int64 $tmp1093 = *(&local0);
panda$core$Int64 $tmp1094 = (panda$core$Int64) {1};
int64_t $tmp1095 = $tmp1093.value;
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095 + $tmp1096;
panda$core$Int64 $tmp1098 = (panda$core$Int64) {$tmp1097};
*(&local0) = $tmp1098;
goto block9;
block9:;
// line 728
panda$core$Char8 $tmp1099 = *(&local3);
uint8_t $tmp1100 = $tmp1099.value;
int64_t $tmp1101 = ((int64_t) $tmp1100) & 255;
bool $tmp1102 = $tmp1101 >= 240;
panda$core$Bit $tmp1103 = panda$core$Bit$init$builtin_bit($tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block10; else goto block11;
block10:;
// line 729
panda$core$MutableString* $tmp1105 = *(&local1);
panda$core$Char8** $tmp1106 = &param0->data;
panda$core$Char8* $tmp1107 = *$tmp1106;
panda$core$Int64 $tmp1108 = *(&local0);
int64_t $tmp1109 = $tmp1108.value;
panda$core$Char8 $tmp1110 = $tmp1107[$tmp1109];
panda$core$MutableString$append$panda$core$Char8($tmp1105, $tmp1110);
// line 730
panda$core$Int64 $tmp1111 = *(&local0);
panda$core$Int64 $tmp1112 = (panda$core$Int64) {1};
int64_t $tmp1113 = $tmp1111.value;
int64_t $tmp1114 = $tmp1112.value;
int64_t $tmp1115 = $tmp1113 + $tmp1114;
panda$core$Int64 $tmp1116 = (panda$core$Int64) {$tmp1115};
*(&local0) = $tmp1116;
goto block11;
block11:;
goto block3;
block5:;
// line 733
panda$core$MutableString* $tmp1117 = *(&local1);
panda$core$String* $tmp1118 = panda$core$MutableString$finish$R$panda$core$String($tmp1117);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing REF($144:panda.core.String)
panda$core$MutableString* $tmp1119 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp1118;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 744
panda$core$Int64* $tmp1120 = &param0->_length;
panda$core$Int64 $tmp1121 = *$tmp1120;
panda$core$Int64 $tmp1122 = (panda$core$Int64) {0};
panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1121, $tmp1122);
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block1; else goto block2;
block1:;
// line 745
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1125));
return &$s1126;
block2:;
// line 747
// line 748
panda$core$String$Index$nullable $tmp1127 = param1.min;
panda$core$Bit $tmp1128 = panda$core$Bit$init$builtin_bit($tmp1127.nonnull);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block3; else goto block5;
block3:;
// line 749
panda$core$String$Index$nullable $tmp1130 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1130.value);
goto block4;
block5:;
// line 1
// line 752
panda$core$String$Index $tmp1131 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1131;
goto block4;
block4:;
// line 755
panda$core$Bit $tmp1132 = param1.inclusive;
*(&local1) = $tmp1132;
// line 756
// line 757
panda$core$String$Index$nullable $tmp1133 = param1.max;
panda$core$Bit $tmp1134 = panda$core$Bit$init$builtin_bit($tmp1133.nonnull);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block6; else goto block8;
block6:;
// line 758
panda$core$String$Index$nullable $tmp1136 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1136.value);
goto block7;
block8:;
// line 1
// line 761
panda$core$String$Index $tmp1137 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1137;
// line 762
panda$core$Bit $tmp1138 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1138;
goto block7;
block7:;
// line 764
panda$core$String$Index $tmp1139 = *(&local0);
panda$core$String$Index $tmp1140 = *(&local2);
panda$core$Bit $tmp1141 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1142 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1139, $tmp1140, $tmp1141);
panda$core$String* $tmp1143 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1142);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
// unreffing REF($56:panda.core.String)
return $tmp1143;

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
panda$core$Int64* $tmp1144 = &param0->_length;
panda$core$Int64 $tmp1145 = *$tmp1144;
panda$core$Int64 $tmp1146 = (panda$core$Int64) {0};
panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1145, $tmp1146);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block1; else goto block2;
block1:;
// line 781
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1149));
return &$s1150;
block2:;
// line 783
panda$core$Int64 $tmp1151 = param1.step;
*(&local0) = $tmp1151;
// line 785
// line 786
panda$core$String$Index$nullable $tmp1152 = param1.start;
panda$core$Bit $tmp1153 = panda$core$Bit$init$builtin_bit($tmp1152.nonnull);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block3; else goto block5;
block3:;
// line 787
panda$core$String$Index$nullable $tmp1155 = param1.start;
panda$core$Int64 $tmp1156 = ((panda$core$String$Index) $tmp1155.value).value;
*(&local1) = $tmp1156;
goto block4;
block5:;
// line 789
panda$core$Int64 $tmp1157 = *(&local0);
panda$core$Int64 $tmp1158 = (panda$core$Int64) {0};
int64_t $tmp1159 = $tmp1157.value;
int64_t $tmp1160 = $tmp1158.value;
bool $tmp1161 = $tmp1159 > $tmp1160;
panda$core$Bit $tmp1162 = (panda$core$Bit) {$tmp1161};
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block6; else goto block8;
block6:;
// line 790
panda$core$String$Index $tmp1164 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1165 = $tmp1164.value;
*(&local1) = $tmp1165;
goto block7;
block8:;
// line 1
// line 793
panda$core$String$Index $tmp1166 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp1167 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1166);
panda$core$Int64 $tmp1168 = $tmp1167.value;
*(&local1) = $tmp1168;
goto block7;
block7:;
goto block4;
block4:;
// line 796
// line 797
panda$core$String$Index$nullable $tmp1169 = param1.end;
panda$core$Bit $tmp1170 = panda$core$Bit$init$builtin_bit($tmp1169.nonnull);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block9; else goto block11;
block9:;
// line 798
panda$core$String$Index$nullable $tmp1172 = param1.end;
panda$core$Int64 $tmp1173 = ((panda$core$String$Index) $tmp1172.value).value;
*(&local2) = $tmp1173;
goto block10;
block11:;
// line 800
panda$core$Int64 $tmp1174 = *(&local0);
panda$core$Int64 $tmp1175 = (panda$core$Int64) {0};
int64_t $tmp1176 = $tmp1174.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 > $tmp1177;
panda$core$Bit $tmp1179 = (panda$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block12; else goto block14;
block12:;
// line 801
panda$core$String$Index $tmp1181 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1182 = $tmp1181.value;
*(&local2) = $tmp1182;
goto block13;
block14:;
// line 1
// line 804
panda$core$String$Index $tmp1183 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1184 = $tmp1183.value;
*(&local2) = $tmp1184;
goto block13;
block13:;
goto block10;
block10:;
// line 807
panda$core$MutableString* $tmp1185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1185);
*(&local3) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
panda$core$MutableString* $tmp1186 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
*(&local3) = $tmp1185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($84:panda.core.MutableString)
// line 808
panda$core$Int64 $tmp1187 = param1.step;
panda$core$Int64 $tmp1188 = (panda$core$Int64) {0};
int64_t $tmp1189 = $tmp1187.value;
int64_t $tmp1190 = $tmp1188.value;
bool $tmp1191 = $tmp1189 > $tmp1190;
panda$core$Bit $tmp1192 = (panda$core$Bit) {$tmp1191};
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block15; else goto block17;
block15:;
// line 809
goto block18;
block18:;
panda$core$Int64 $tmp1194 = *(&local1);
panda$core$Int64 $tmp1195 = *(&local2);
int64_t $tmp1196 = $tmp1194.value;
int64_t $tmp1197 = $tmp1195.value;
bool $tmp1198 = $tmp1196 < $tmp1197;
panda$core$Bit $tmp1199 = (panda$core$Bit) {$tmp1198};
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block19; else goto block20;
block19:;
// line 810
panda$core$Char8** $tmp1201 = &param0->data;
panda$core$Char8* $tmp1202 = *$tmp1201;
panda$core$Int64 $tmp1203 = *(&local1);
int64_t $tmp1204 = $tmp1203.value;
panda$core$Char8 $tmp1205 = $tmp1202[$tmp1204];
*(&local4) = $tmp1205;
// line 811
panda$core$MutableString* $tmp1206 = *(&local3);
panda$core$Char8 $tmp1207 = *(&local4);
panda$core$MutableString$append$panda$core$Char8($tmp1206, $tmp1207);
// line 812
panda$core$Int64 $tmp1208 = *(&local1);
panda$core$Int64 $tmp1209 = (panda$core$Int64) {1};
int64_t $tmp1210 = $tmp1208.value;
int64_t $tmp1211 = $tmp1209.value;
int64_t $tmp1212 = $tmp1210 + $tmp1211;
panda$core$Int64 $tmp1213 = (panda$core$Int64) {$tmp1212};
*(&local1) = $tmp1213;
// line 813
panda$core$Char8 $tmp1214 = *(&local4);
uint8_t $tmp1215 = $tmp1214.value;
int64_t $tmp1216 = ((int64_t) $tmp1215) & 255;
bool $tmp1217 = $tmp1216 >= 192;
panda$core$Bit $tmp1218 = panda$core$Bit$init$builtin_bit($tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block21; else goto block22;
block21:;
// line 814
panda$core$MutableString* $tmp1220 = *(&local3);
panda$core$Char8** $tmp1221 = &param0->data;
panda$core$Char8* $tmp1222 = *$tmp1221;
panda$core$Int64 $tmp1223 = *(&local1);
int64_t $tmp1224 = $tmp1223.value;
panda$core$Char8 $tmp1225 = $tmp1222[$tmp1224];
panda$core$MutableString$append$panda$core$Char8($tmp1220, $tmp1225);
// line 815
panda$core$Int64 $tmp1226 = *(&local1);
panda$core$Int64 $tmp1227 = (panda$core$Int64) {1};
int64_t $tmp1228 = $tmp1226.value;
int64_t $tmp1229 = $tmp1227.value;
int64_t $tmp1230 = $tmp1228 + $tmp1229;
panda$core$Int64 $tmp1231 = (panda$core$Int64) {$tmp1230};
*(&local1) = $tmp1231;
goto block22;
block22:;
// line 817
panda$core$Char8 $tmp1232 = *(&local4);
uint8_t $tmp1233 = $tmp1232.value;
int64_t $tmp1234 = ((int64_t) $tmp1233) & 255;
bool $tmp1235 = $tmp1234 >= 224;
panda$core$Bit $tmp1236 = panda$core$Bit$init$builtin_bit($tmp1235);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block23; else goto block24;
block23:;
// line 818
panda$core$MutableString* $tmp1238 = *(&local3);
panda$core$Char8** $tmp1239 = &param0->data;
panda$core$Char8* $tmp1240 = *$tmp1239;
panda$core$Int64 $tmp1241 = *(&local1);
int64_t $tmp1242 = $tmp1241.value;
panda$core$Char8 $tmp1243 = $tmp1240[$tmp1242];
panda$core$MutableString$append$panda$core$Char8($tmp1238, $tmp1243);
// line 819
panda$core$Int64 $tmp1244 = *(&local1);
panda$core$Int64 $tmp1245 = (panda$core$Int64) {1};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246 + $tmp1247;
panda$core$Int64 $tmp1249 = (panda$core$Int64) {$tmp1248};
*(&local1) = $tmp1249;
goto block24;
block24:;
// line 821
panda$core$Char8 $tmp1250 = *(&local4);
uint8_t $tmp1251 = $tmp1250.value;
int64_t $tmp1252 = ((int64_t) $tmp1251) & 255;
bool $tmp1253 = $tmp1252 >= 240;
panda$core$Bit $tmp1254 = panda$core$Bit$init$builtin_bit($tmp1253);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block25; else goto block26;
block25:;
// line 822
panda$core$MutableString* $tmp1256 = *(&local3);
panda$core$Char8** $tmp1257 = &param0->data;
panda$core$Char8* $tmp1258 = *$tmp1257;
panda$core$Int64 $tmp1259 = *(&local1);
int64_t $tmp1260 = $tmp1259.value;
panda$core$Char8 $tmp1261 = $tmp1258[$tmp1260];
panda$core$MutableString$append$panda$core$Char8($tmp1256, $tmp1261);
// line 823
panda$core$Int64 $tmp1262 = *(&local1);
panda$core$Int64 $tmp1263 = (panda$core$Int64) {1};
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263.value;
int64_t $tmp1266 = $tmp1264 + $tmp1265;
panda$core$Int64 $tmp1267 = (panda$core$Int64) {$tmp1266};
*(&local1) = $tmp1267;
goto block26;
block26:;
// line 825
panda$core$Int64 $tmp1268 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1269 = *(&local0);
panda$core$Bit $tmp1270 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1271 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1268, $tmp1269, $tmp1270);
panda$core$Int64 $tmp1272 = $tmp1271.min;
*(&local5) = $tmp1272;
panda$core$Int64 $tmp1273 = $tmp1271.max;
panda$core$Bit $tmp1274 = $tmp1271.inclusive;
bool $tmp1275 = $tmp1274.value;
panda$core$Int64 $tmp1276 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1277 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1276);
if ($tmp1275) goto block30; else goto block31;
block30:;
int64_t $tmp1278 = $tmp1272.value;
int64_t $tmp1279 = $tmp1273.value;
bool $tmp1280 = $tmp1278 <= $tmp1279;
panda$core$Bit $tmp1281 = (panda$core$Bit) {$tmp1280};
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block27; else goto block28;
block31:;
int64_t $tmp1283 = $tmp1272.value;
int64_t $tmp1284 = $tmp1273.value;
bool $tmp1285 = $tmp1283 < $tmp1284;
panda$core$Bit $tmp1286 = (panda$core$Bit) {$tmp1285};
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block27; else goto block28;
block27:;
// line 826
panda$core$Int64 $tmp1288 = *(&local1);
panda$core$Int64 $tmp1289 = *(&local2);
int64_t $tmp1290 = $tmp1288.value;
int64_t $tmp1291 = $tmp1289.value;
bool $tmp1292 = $tmp1290 >= $tmp1291;
panda$core$Bit $tmp1293 = (panda$core$Bit) {$tmp1292};
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block32; else goto block33;
block32:;
// line 827
panda$core$MutableString* $tmp1295 = *(&local3);
panda$core$String* $tmp1296 = panda$core$MutableString$convert$R$panda$core$String($tmp1295);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
// unreffing REF($248:panda.core.String)
panda$core$MutableString* $tmp1297 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1296;
block33:;
// line 829
panda$core$Int64 $tmp1298 = *(&local1);
panda$core$String$Index $tmp1299 = panda$core$String$Index$init$panda$core$Int64($tmp1298);
panda$core$String$Index $tmp1300 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1299);
panda$core$Int64 $tmp1301 = $tmp1300.value;
*(&local1) = $tmp1301;
goto block29;
block29:;
panda$core$Int64 $tmp1302 = *(&local5);
int64_t $tmp1303 = $tmp1273.value;
int64_t $tmp1304 = $tmp1302.value;
int64_t $tmp1305 = $tmp1303 - $tmp1304;
panda$core$Int64 $tmp1306 = (panda$core$Int64) {$tmp1305};
panda$core$UInt64 $tmp1307 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1306);
if ($tmp1275) goto block35; else goto block36;
block35:;
uint64_t $tmp1308 = $tmp1307.value;
uint64_t $tmp1309 = $tmp1277.value;
bool $tmp1310 = $tmp1308 >= $tmp1309;
panda$core$Bit $tmp1311 = (panda$core$Bit) {$tmp1310};
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block34; else goto block28;
block36:;
uint64_t $tmp1313 = $tmp1307.value;
uint64_t $tmp1314 = $tmp1277.value;
bool $tmp1315 = $tmp1313 > $tmp1314;
panda$core$Bit $tmp1316 = (panda$core$Bit) {$tmp1315};
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block34; else goto block28;
block34:;
int64_t $tmp1318 = $tmp1302.value;
int64_t $tmp1319 = $tmp1276.value;
int64_t $tmp1320 = $tmp1318 + $tmp1319;
panda$core$Int64 $tmp1321 = (panda$core$Int64) {$tmp1320};
*(&local5) = $tmp1321;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 834
panda$core$Int64 $tmp1322 = param1.step;
panda$core$Int64 $tmp1323 = (panda$core$Int64) {0};
int64_t $tmp1324 = $tmp1322.value;
int64_t $tmp1325 = $tmp1323.value;
bool $tmp1326 = $tmp1324 < $tmp1325;
panda$core$Bit $tmp1327 = (panda$core$Bit) {$tmp1326};
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1329 = (panda$core$Int64) {834};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1330, $tmp1329);
abort(); // unreachable
block37:;
// line 835
goto block39;
block39:;
panda$core$Int64 $tmp1331 = *(&local1);
panda$core$Int64 $tmp1332 = *(&local2);
int64_t $tmp1333 = $tmp1331.value;
int64_t $tmp1334 = $tmp1332.value;
bool $tmp1335 = $tmp1333 > $tmp1334;
panda$core$Bit $tmp1336 = (panda$core$Bit) {$tmp1335};
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block40; else goto block41;
block40:;
// line 836
panda$core$Char8** $tmp1338 = &param0->data;
panda$core$Char8* $tmp1339 = *$tmp1338;
panda$core$Int64 $tmp1340 = *(&local1);
int64_t $tmp1341 = $tmp1340.value;
panda$core$Char8 $tmp1342 = $tmp1339[$tmp1341];
*(&local6) = $tmp1342;
// line 837
panda$core$MutableString* $tmp1343 = *(&local3);
panda$core$Char8 $tmp1344 = *(&local6);
panda$core$MutableString$append$panda$core$Char8($tmp1343, $tmp1344);
// line 838
panda$core$Int64 $tmp1345 = *(&local1);
*(&local7) = $tmp1345;
// line 839
panda$core$Int64 $tmp1346 = *(&local1);
panda$core$Int64 $tmp1347 = (panda$core$Int64) {1};
int64_t $tmp1348 = $tmp1346.value;
int64_t $tmp1349 = $tmp1347.value;
int64_t $tmp1350 = $tmp1348 + $tmp1349;
panda$core$Int64 $tmp1351 = (panda$core$Int64) {$tmp1350};
*(&local1) = $tmp1351;
// line 840
panda$core$Char8 $tmp1352 = *(&local6);
uint8_t $tmp1353 = $tmp1352.value;
int64_t $tmp1354 = ((int64_t) $tmp1353) & 255;
bool $tmp1355 = $tmp1354 >= 192;
panda$core$Bit $tmp1356 = panda$core$Bit$init$builtin_bit($tmp1355);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block42; else goto block43;
block42:;
// line 841
panda$core$MutableString* $tmp1358 = *(&local3);
panda$core$Char8** $tmp1359 = &param0->data;
panda$core$Char8* $tmp1360 = *$tmp1359;
panda$core$Int64 $tmp1361 = *(&local1);
int64_t $tmp1362 = $tmp1361.value;
panda$core$Char8 $tmp1363 = $tmp1360[$tmp1362];
panda$core$MutableString$append$panda$core$Char8($tmp1358, $tmp1363);
// line 842
panda$core$Int64 $tmp1364 = *(&local1);
panda$core$Int64 $tmp1365 = (panda$core$Int64) {1};
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366 + $tmp1367;
panda$core$Int64 $tmp1369 = (panda$core$Int64) {$tmp1368};
*(&local1) = $tmp1369;
goto block43;
block43:;
// line 844
panda$core$Char8 $tmp1370 = *(&local6);
uint8_t $tmp1371 = $tmp1370.value;
int64_t $tmp1372 = ((int64_t) $tmp1371) & 255;
bool $tmp1373 = $tmp1372 >= 224;
panda$core$Bit $tmp1374 = panda$core$Bit$init$builtin_bit($tmp1373);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block44; else goto block45;
block44:;
// line 845
panda$core$MutableString* $tmp1376 = *(&local3);
panda$core$Char8** $tmp1377 = &param0->data;
panda$core$Char8* $tmp1378 = *$tmp1377;
panda$core$Int64 $tmp1379 = *(&local1);
int64_t $tmp1380 = $tmp1379.value;
panda$core$Char8 $tmp1381 = $tmp1378[$tmp1380];
panda$core$MutableString$append$panda$core$Char8($tmp1376, $tmp1381);
// line 846
panda$core$Int64 $tmp1382 = *(&local1);
panda$core$Int64 $tmp1383 = (panda$core$Int64) {1};
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 + $tmp1385;
panda$core$Int64 $tmp1387 = (panda$core$Int64) {$tmp1386};
*(&local1) = $tmp1387;
goto block45;
block45:;
// line 848
panda$core$Char8 $tmp1388 = *(&local6);
uint8_t $tmp1389 = $tmp1388.value;
int64_t $tmp1390 = ((int64_t) $tmp1389) & 255;
bool $tmp1391 = $tmp1390 >= 240;
panda$core$Bit $tmp1392 = panda$core$Bit$init$builtin_bit($tmp1391);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block46; else goto block47;
block46:;
// line 849
panda$core$MutableString* $tmp1394 = *(&local3);
panda$core$Char8** $tmp1395 = &param0->data;
panda$core$Char8* $tmp1396 = *$tmp1395;
panda$core$Int64 $tmp1397 = *(&local1);
int64_t $tmp1398 = $tmp1397.value;
panda$core$Char8 $tmp1399 = $tmp1396[$tmp1398];
panda$core$MutableString$append$panda$core$Char8($tmp1394, $tmp1399);
goto block47;
block47:;
// line 851
panda$core$Int64 $tmp1400 = *(&local7);
panda$core$Int64 $tmp1401 = (panda$core$Int64) {1};
int64_t $tmp1402 = $tmp1400.value;
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402 - $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {$tmp1404};
*(&local1) = $tmp1405;
// line 852
goto block48;
block48:;
panda$core$Char8** $tmp1406 = &param0->data;
panda$core$Char8* $tmp1407 = *$tmp1406;
panda$core$Int64 $tmp1408 = *(&local1);
int64_t $tmp1409 = $tmp1408.value;
panda$core$Char8 $tmp1410 = $tmp1407[$tmp1409];
uint8_t $tmp1411 = $tmp1410.value;
int64_t $tmp1412 = ((int64_t) $tmp1411) & 255;
bool $tmp1413 = $tmp1412 >= 128;
panda$core$Char8** $tmp1414 = &param0->data;
panda$core$Char8* $tmp1415 = *$tmp1414;
panda$core$Int64 $tmp1416 = *(&local1);
int64_t $tmp1417 = $tmp1416.value;
panda$core$Char8 $tmp1418 = $tmp1415[$tmp1417];
uint8_t $tmp1419 = $tmp1418.value;
int64_t $tmp1420 = ((int64_t) $tmp1419) & 255;
bool $tmp1421 = $tmp1420 < 192;
bool $tmp1422 = $tmp1413 & $tmp1421;
panda$core$Bit $tmp1423 = panda$core$Bit$init$builtin_bit($tmp1422);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block49; else goto block50;
block49:;
// line 853
panda$core$Int64 $tmp1425 = *(&local1);
panda$core$Int64 $tmp1426 = (panda$core$Int64) {1};
int64_t $tmp1427 = $tmp1425.value;
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427 - $tmp1428;
panda$core$Int64 $tmp1430 = (panda$core$Int64) {$tmp1429};
*(&local1) = $tmp1430;
goto block48;
block50:;
// line 855
panda$core$Int64 $tmp1431 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp1432 = *(&local0);
panda$core$Int64 $tmp1433 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1434 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1435 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1431, $tmp1432, $tmp1433, $tmp1434);
panda$core$Int64 $tmp1436 = $tmp1435.start;
*(&local8) = $tmp1436;
panda$core$Int64 $tmp1437 = $tmp1435.end;
panda$core$Int64 $tmp1438 = $tmp1435.step;
panda$core$UInt64 $tmp1439 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1438);
panda$core$Int64 $tmp1440 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1438);
panda$core$UInt64 $tmp1441 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1440);
panda$core$Bit $tmp1442 = $tmp1435.inclusive;
bool $tmp1443 = $tmp1442.value;
panda$core$Int64 $tmp1444 = (panda$core$Int64) {0};
int64_t $tmp1445 = $tmp1438.value;
int64_t $tmp1446 = $tmp1444.value;
bool $tmp1447 = $tmp1445 >= $tmp1446;
panda$core$Bit $tmp1448 = (panda$core$Bit) {$tmp1447};
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block54; else goto block55;
block54:;
if ($tmp1443) goto block56; else goto block57;
block56:;
int64_t $tmp1450 = $tmp1436.value;
int64_t $tmp1451 = $tmp1437.value;
bool $tmp1452 = $tmp1450 <= $tmp1451;
panda$core$Bit $tmp1453 = (panda$core$Bit) {$tmp1452};
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block51; else goto block52;
block57:;
int64_t $tmp1455 = $tmp1436.value;
int64_t $tmp1456 = $tmp1437.value;
bool $tmp1457 = $tmp1455 < $tmp1456;
panda$core$Bit $tmp1458 = (panda$core$Bit) {$tmp1457};
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block51; else goto block52;
block55:;
if ($tmp1443) goto block58; else goto block59;
block58:;
int64_t $tmp1460 = $tmp1436.value;
int64_t $tmp1461 = $tmp1437.value;
bool $tmp1462 = $tmp1460 >= $tmp1461;
panda$core$Bit $tmp1463 = (panda$core$Bit) {$tmp1462};
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block51; else goto block52;
block59:;
int64_t $tmp1465 = $tmp1436.value;
int64_t $tmp1466 = $tmp1437.value;
bool $tmp1467 = $tmp1465 > $tmp1466;
panda$core$Bit $tmp1468 = (panda$core$Bit) {$tmp1467};
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block51; else goto block52;
block51:;
// line 856
panda$core$Int64 $tmp1470 = *(&local1);
panda$core$Int64 $tmp1471 = *(&local2);
int64_t $tmp1472 = $tmp1470.value;
int64_t $tmp1473 = $tmp1471.value;
bool $tmp1474 = $tmp1472 <= $tmp1473;
panda$core$Bit $tmp1475 = (panda$core$Bit) {$tmp1474};
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block60; else goto block61;
block60:;
// line 857
panda$core$MutableString* $tmp1477 = *(&local3);
panda$core$String* $tmp1478 = panda$core$MutableString$convert$R$panda$core$String($tmp1477);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
// unreffing REF($509:panda.core.String)
panda$core$MutableString* $tmp1479 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1478;
block61:;
// line 859
panda$core$Int64 $tmp1480 = *(&local1);
panda$core$String$Index $tmp1481 = panda$core$String$Index$init$panda$core$Int64($tmp1480);
panda$core$String$Index $tmp1482 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1481);
panda$core$Int64 $tmp1483 = $tmp1482.value;
*(&local1) = $tmp1483;
goto block53;
block53:;
panda$core$Int64 $tmp1484 = *(&local8);
if ($tmp1449) goto block63; else goto block64;
block63:;
int64_t $tmp1485 = $tmp1437.value;
int64_t $tmp1486 = $tmp1484.value;
int64_t $tmp1487 = $tmp1485 - $tmp1486;
panda$core$Int64 $tmp1488 = (panda$core$Int64) {$tmp1487};
panda$core$UInt64 $tmp1489 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1488);
if ($tmp1443) goto block65; else goto block66;
block65:;
uint64_t $tmp1490 = $tmp1489.value;
uint64_t $tmp1491 = $tmp1439.value;
bool $tmp1492 = $tmp1490 >= $tmp1491;
panda$core$Bit $tmp1493 = (panda$core$Bit) {$tmp1492};
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block62; else goto block52;
block66:;
uint64_t $tmp1495 = $tmp1489.value;
uint64_t $tmp1496 = $tmp1439.value;
bool $tmp1497 = $tmp1495 > $tmp1496;
panda$core$Bit $tmp1498 = (panda$core$Bit) {$tmp1497};
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block62; else goto block52;
block64:;
int64_t $tmp1500 = $tmp1484.value;
int64_t $tmp1501 = $tmp1437.value;
int64_t $tmp1502 = $tmp1500 - $tmp1501;
panda$core$Int64 $tmp1503 = (panda$core$Int64) {$tmp1502};
panda$core$UInt64 $tmp1504 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1503);
if ($tmp1443) goto block67; else goto block68;
block67:;
uint64_t $tmp1505 = $tmp1504.value;
uint64_t $tmp1506 = $tmp1441.value;
bool $tmp1507 = $tmp1505 >= $tmp1506;
panda$core$Bit $tmp1508 = (panda$core$Bit) {$tmp1507};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block62; else goto block52;
block68:;
uint64_t $tmp1510 = $tmp1504.value;
uint64_t $tmp1511 = $tmp1441.value;
bool $tmp1512 = $tmp1510 > $tmp1511;
panda$core$Bit $tmp1513 = (panda$core$Bit) {$tmp1512};
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block62; else goto block52;
block62:;
int64_t $tmp1515 = $tmp1484.value;
int64_t $tmp1516 = $tmp1438.value;
int64_t $tmp1517 = $tmp1515 + $tmp1516;
panda$core$Int64 $tmp1518 = (panda$core$Int64) {$tmp1517};
*(&local8) = $tmp1518;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 863
panda$core$Bit $tmp1519 = param1.inclusive;
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block71; else goto block72;
block71:;
*(&local11) = $tmp1519;
goto block73;
block72:;
panda$core$String$Index$nullable $tmp1521 = param1.end;
panda$core$Bit $tmp1522 = panda$core$Bit$init$builtin_bit(!$tmp1521.nonnull);
*(&local11) = $tmp1522;
goto block73;
block73:;
panda$core$Bit $tmp1523 = *(&local11);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block74; else goto block75;
block74:;
panda$core$Int64 $tmp1525 = *(&local1);
panda$core$Int64 $tmp1526 = *(&local2);
panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1525, $tmp1526);
*(&local10) = $tmp1527;
goto block76;
block75:;
*(&local10) = $tmp1523;
goto block76;
block76:;
panda$core$Bit $tmp1528 = *(&local10);
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block77; else goto block78;
block77:;
panda$core$Int64 $tmp1530 = *(&local2);
panda$core$Int64* $tmp1531 = &param0->_length;
panda$core$Int64 $tmp1532 = *$tmp1531;
int64_t $tmp1533 = $tmp1530.value;
int64_t $tmp1534 = $tmp1532.value;
bool $tmp1535 = $tmp1533 < $tmp1534;
panda$core$Bit $tmp1536 = (panda$core$Bit) {$tmp1535};
*(&local9) = $tmp1536;
goto block79;
block78:;
*(&local9) = $tmp1528;
goto block79;
block79:;
panda$core$Bit $tmp1537 = *(&local9);
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block69; else goto block70;
block69:;
// line 864
panda$core$Char8** $tmp1539 = &param0->data;
panda$core$Char8* $tmp1540 = *$tmp1539;
panda$core$Int64 $tmp1541 = *(&local1);
int64_t $tmp1542 = $tmp1541.value;
panda$core$Char8 $tmp1543 = $tmp1540[$tmp1542];
*(&local12) = $tmp1543;
// line 865
panda$core$MutableString* $tmp1544 = *(&local3);
panda$core$Char8 $tmp1545 = *(&local12);
panda$core$MutableString$append$panda$core$Char8($tmp1544, $tmp1545);
// line 866
panda$core$Int64 $tmp1546 = *(&local1);
panda$core$Int64 $tmp1547 = (panda$core$Int64) {1};
int64_t $tmp1548 = $tmp1546.value;
int64_t $tmp1549 = $tmp1547.value;
int64_t $tmp1550 = $tmp1548 + $tmp1549;
panda$core$Int64 $tmp1551 = (panda$core$Int64) {$tmp1550};
*(&local1) = $tmp1551;
// line 867
panda$core$Char8 $tmp1552 = *(&local12);
uint8_t $tmp1553 = $tmp1552.value;
int64_t $tmp1554 = ((int64_t) $tmp1553) & 255;
bool $tmp1555 = $tmp1554 >= 192;
panda$core$Bit $tmp1556 = panda$core$Bit$init$builtin_bit($tmp1555);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block80; else goto block81;
block80:;
// line 868
panda$core$MutableString* $tmp1558 = *(&local3);
panda$core$Char8** $tmp1559 = &param0->data;
panda$core$Char8* $tmp1560 = *$tmp1559;
panda$core$Int64 $tmp1561 = *(&local1);
int64_t $tmp1562 = $tmp1561.value;
panda$core$Char8 $tmp1563 = $tmp1560[$tmp1562];
panda$core$MutableString$append$panda$core$Char8($tmp1558, $tmp1563);
// line 869
panda$core$Int64 $tmp1564 = *(&local1);
panda$core$Int64 $tmp1565 = (panda$core$Int64) {1};
int64_t $tmp1566 = $tmp1564.value;
int64_t $tmp1567 = $tmp1565.value;
int64_t $tmp1568 = $tmp1566 + $tmp1567;
panda$core$Int64 $tmp1569 = (panda$core$Int64) {$tmp1568};
*(&local1) = $tmp1569;
goto block81;
block81:;
// line 871
panda$core$Char8 $tmp1570 = *(&local12);
uint8_t $tmp1571 = $tmp1570.value;
int64_t $tmp1572 = ((int64_t) $tmp1571) & 255;
bool $tmp1573 = $tmp1572 >= 224;
panda$core$Bit $tmp1574 = panda$core$Bit$init$builtin_bit($tmp1573);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block82; else goto block83;
block82:;
// line 872
panda$core$MutableString* $tmp1576 = *(&local3);
panda$core$Char8** $tmp1577 = &param0->data;
panda$core$Char8* $tmp1578 = *$tmp1577;
panda$core$Int64 $tmp1579 = *(&local1);
int64_t $tmp1580 = $tmp1579.value;
panda$core$Char8 $tmp1581 = $tmp1578[$tmp1580];
panda$core$MutableString$append$panda$core$Char8($tmp1576, $tmp1581);
// line 873
panda$core$Int64 $tmp1582 = *(&local1);
panda$core$Int64 $tmp1583 = (panda$core$Int64) {1};
int64_t $tmp1584 = $tmp1582.value;
int64_t $tmp1585 = $tmp1583.value;
int64_t $tmp1586 = $tmp1584 + $tmp1585;
panda$core$Int64 $tmp1587 = (panda$core$Int64) {$tmp1586};
*(&local1) = $tmp1587;
goto block83;
block83:;
// line 875
panda$core$Char8 $tmp1588 = *(&local12);
uint8_t $tmp1589 = $tmp1588.value;
int64_t $tmp1590 = ((int64_t) $tmp1589) & 255;
bool $tmp1591 = $tmp1590 >= 240;
panda$core$Bit $tmp1592 = panda$core$Bit$init$builtin_bit($tmp1591);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block84; else goto block85;
block84:;
// line 876
panda$core$MutableString* $tmp1594 = *(&local3);
panda$core$Char8** $tmp1595 = &param0->data;
panda$core$Char8* $tmp1596 = *$tmp1595;
panda$core$Int64 $tmp1597 = *(&local1);
int64_t $tmp1598 = $tmp1597.value;
panda$core$Char8 $tmp1599 = $tmp1596[$tmp1598];
panda$core$MutableString$append$panda$core$Char8($tmp1594, $tmp1599);
goto block85;
block85:;
goto block70;
block70:;
// line 879
panda$core$MutableString* $tmp1600 = *(&local3);
panda$core$String* $tmp1601 = panda$core$MutableString$finish$R$panda$core$String($tmp1600);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing REF($704:panda.core.String)
panda$core$MutableString* $tmp1602 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1601;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 888
// line 889
panda$core$Int64$nullable $tmp1603 = param1.min;
panda$core$Bit $tmp1604 = panda$core$Bit$init$builtin_bit($tmp1603.nonnull);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block1; else goto block3;
block1:;
// line 890
panda$core$String$Index $tmp1606 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1607 = param1.min;
panda$core$String$Index $tmp1608 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1606, ((panda$core$Int64) $tmp1607.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1608, true });
goto block2;
block3:;
// line 1
// line 893
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 895
// line 896
panda$core$Int64$nullable $tmp1609 = param1.max;
panda$core$Bit $tmp1610 = panda$core$Bit$init$builtin_bit($tmp1609.nonnull);
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block4; else goto block6;
block4:;
// line 897
panda$core$String$Index $tmp1612 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1613 = param1.max;
panda$core$String$Index $tmp1614 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1612, ((panda$core$Int64) $tmp1613.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1614, true });
goto block5;
block6:;
// line 1
// line 900
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 902
panda$core$String$Index$nullable $tmp1615 = *(&local0);
panda$core$String$Index$nullable $tmp1616 = *(&local1);
panda$core$Bit $tmp1617 = param1.inclusive;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1618 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit($tmp1615, $tmp1616, $tmp1617);
panda$core$String* $tmp1619 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1618);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing REF($43:panda.core.String)
return $tmp1619;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 911
// line 912
panda$core$Int64$nullable $tmp1620 = param1.start;
panda$core$Bit $tmp1621 = panda$core$Bit$init$builtin_bit($tmp1620.nonnull);
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block1; else goto block3;
block1:;
// line 913
panda$core$String$Index $tmp1623 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1624 = param1.start;
panda$core$String$Index $tmp1625 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1623, ((panda$core$Int64) $tmp1624.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1625, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
panda$core$Int64$nullable $tmp1626 = param1.end;
panda$core$Bit $tmp1627 = panda$core$Bit$init$builtin_bit($tmp1626.nonnull);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block4; else goto block6;
block4:;
// line 920
panda$core$String$Index $tmp1629 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1630 = param1.end;
panda$core$String$Index $tmp1631 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1629, ((panda$core$Int64) $tmp1630.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1631, true });
goto block5;
block6:;
// line 1
// line 923
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 925
panda$core$String$Index$nullable $tmp1632 = *(&local0);
panda$core$String$Index$nullable $tmp1633 = *(&local1);
panda$core$Int64 $tmp1634 = param1.step;
panda$core$Bit $tmp1635 = param1.inclusive;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp1636 = panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit($tmp1632, $tmp1633, $tmp1634, $tmp1635);
panda$core$String* $tmp1637 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(param0, $tmp1636);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// unreffing REF($44:panda.core.String)
return $tmp1637;

}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 932
panda$core$Int64 $tmp1638 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1639 = &param0->_length;
panda$core$Int64 $tmp1640 = *$tmp1639;
panda$core$Bit $tmp1641 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1642 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1638, $tmp1640, $tmp1641);
panda$core$Int64 $tmp1643 = $tmp1642.min;
*(&local0) = $tmp1643;
panda$core$Int64 $tmp1644 = $tmp1642.max;
panda$core$Bit $tmp1645 = $tmp1642.inclusive;
bool $tmp1646 = $tmp1645.value;
panda$core$Int64 $tmp1647 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1648 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1647);
if ($tmp1646) goto block4; else goto block5;
block4:;
int64_t $tmp1649 = $tmp1643.value;
int64_t $tmp1650 = $tmp1644.value;
bool $tmp1651 = $tmp1649 <= $tmp1650;
panda$core$Bit $tmp1652 = (panda$core$Bit) {$tmp1651};
bool $tmp1653 = $tmp1652.value;
if ($tmp1653) goto block1; else goto block2;
block5:;
int64_t $tmp1654 = $tmp1643.value;
int64_t $tmp1655 = $tmp1644.value;
bool $tmp1656 = $tmp1654 < $tmp1655;
panda$core$Bit $tmp1657 = (panda$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block1; else goto block2;
block1:;
// line 933
panda$core$Char8** $tmp1659 = &param0->data;
panda$core$Char8* $tmp1660 = *$tmp1659;
panda$core$Int64 $tmp1661 = *(&local0);
int64_t $tmp1662 = $tmp1661.value;
panda$core$Char8 $tmp1663 = $tmp1660[$tmp1662];
panda$core$Bit $tmp1664 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp1663, param1);
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block6; else goto block7;
block6:;
// line 934
panda$core$Bit $tmp1666 = panda$core$Bit$init$builtin_bit(true);
return $tmp1666;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp1667 = *(&local0);
int64_t $tmp1668 = $tmp1644.value;
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668 - $tmp1669;
panda$core$Int64 $tmp1671 = (panda$core$Int64) {$tmp1670};
panda$core$UInt64 $tmp1672 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1671);
if ($tmp1646) goto block9; else goto block10;
block9:;
uint64_t $tmp1673 = $tmp1672.value;
uint64_t $tmp1674 = $tmp1648.value;
bool $tmp1675 = $tmp1673 >= $tmp1674;
panda$core$Bit $tmp1676 = (panda$core$Bit) {$tmp1675};
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block8; else goto block2;
block10:;
uint64_t $tmp1678 = $tmp1672.value;
uint64_t $tmp1679 = $tmp1648.value;
bool $tmp1680 = $tmp1678 > $tmp1679;
panda$core$Bit $tmp1681 = (panda$core$Bit) {$tmp1680};
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block8; else goto block2;
block8:;
int64_t $tmp1683 = $tmp1667.value;
int64_t $tmp1684 = $tmp1647.value;
int64_t $tmp1685 = $tmp1683 + $tmp1684;
panda$core$Int64 $tmp1686 = (panda$core$Int64) {$tmp1685};
*(&local0) = $tmp1686;
goto block1;
block2:;
// line 937
panda$core$Bit $tmp1687 = panda$core$Bit$init$builtin_bit(false);
return $tmp1687;

}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

// line 944
panda$core$String$Index$nullable $tmp1688 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param0, param1);
panda$core$Bit $tmp1689 = panda$core$Bit$init$builtin_bit($tmp1688.nonnull);
return $tmp1689;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 955
panda$core$String$Index $tmp1690 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1691 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1690);
return $tmp1691;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64* $tmp1692 = &param0->_length;
panda$core$Int64 $tmp1693 = *$tmp1692;
panda$core$Int64* $tmp1694 = &param1->_length;
panda$core$Int64 $tmp1695 = *$tmp1694;
int64_t $tmp1696 = $tmp1693.value;
int64_t $tmp1697 = $tmp1695.value;
bool $tmp1698 = $tmp1696 < $tmp1697;
panda$core$Bit $tmp1699 = (panda$core$Bit) {$tmp1698};
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block1; else goto block2;
block1:;
// line 968
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 970
panda$core$Int64 $tmp1701 = param2.value;
panda$core$Int64* $tmp1702 = &param0->_length;
panda$core$Int64 $tmp1703 = *$tmp1702;
panda$core$Int64* $tmp1704 = &param1->_length;
panda$core$Int64 $tmp1705 = *$tmp1704;
int64_t $tmp1706 = $tmp1703.value;
int64_t $tmp1707 = $tmp1705.value;
int64_t $tmp1708 = $tmp1706 - $tmp1707;
panda$core$Int64 $tmp1709 = (panda$core$Int64) {$tmp1708};
panda$core$Bit $tmp1710 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp1711 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1701, $tmp1709, $tmp1710);
panda$core$Int64 $tmp1712 = $tmp1711.min;
*(&local0) = $tmp1712;
panda$core$Int64 $tmp1713 = $tmp1711.max;
panda$core$Bit $tmp1714 = $tmp1711.inclusive;
bool $tmp1715 = $tmp1714.value;
panda$core$Int64 $tmp1716 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1717 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1716);
if ($tmp1715) goto block6; else goto block7;
block6:;
int64_t $tmp1718 = $tmp1712.value;
int64_t $tmp1719 = $tmp1713.value;
bool $tmp1720 = $tmp1718 <= $tmp1719;
panda$core$Bit $tmp1721 = (panda$core$Bit) {$tmp1720};
bool $tmp1722 = $tmp1721.value;
if ($tmp1722) goto block3; else goto block4;
block7:;
int64_t $tmp1723 = $tmp1712.value;
int64_t $tmp1724 = $tmp1713.value;
bool $tmp1725 = $tmp1723 < $tmp1724;
panda$core$Bit $tmp1726 = (panda$core$Bit) {$tmp1725};
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block3; else goto block4;
block3:;
// line 971
panda$core$Int64 $tmp1728 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1729 = &param1->_length;
panda$core$Int64 $tmp1730 = *$tmp1729;
panda$core$Bit $tmp1731 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1732 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1728, $tmp1730, $tmp1731);
panda$core$Int64 $tmp1733 = $tmp1732.min;
*(&local1) = $tmp1733;
panda$core$Int64 $tmp1734 = $tmp1732.max;
panda$core$Bit $tmp1735 = $tmp1732.inclusive;
bool $tmp1736 = $tmp1735.value;
panda$core$Int64 $tmp1737 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1738 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1737);
if ($tmp1736) goto block11; else goto block12;
block11:;
int64_t $tmp1739 = $tmp1733.value;
int64_t $tmp1740 = $tmp1734.value;
bool $tmp1741 = $tmp1739 <= $tmp1740;
panda$core$Bit $tmp1742 = (panda$core$Bit) {$tmp1741};
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block8; else goto block9;
block12:;
int64_t $tmp1744 = $tmp1733.value;
int64_t $tmp1745 = $tmp1734.value;
bool $tmp1746 = $tmp1744 < $tmp1745;
panda$core$Bit $tmp1747 = (panda$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block8; else goto block9;
block8:;
// line 972
panda$core$Char8** $tmp1749 = &param0->data;
panda$core$Char8* $tmp1750 = *$tmp1749;
panda$core$Int64 $tmp1751 = *(&local0);
panda$core$Int64 $tmp1752 = *(&local1);
int64_t $tmp1753 = $tmp1751.value;
int64_t $tmp1754 = $tmp1752.value;
int64_t $tmp1755 = $tmp1753 + $tmp1754;
panda$core$Int64 $tmp1756 = (panda$core$Int64) {$tmp1755};
int64_t $tmp1757 = $tmp1756.value;
panda$core$Char8 $tmp1758 = $tmp1750[$tmp1757];
panda$core$Char8** $tmp1759 = &param1->data;
panda$core$Char8* $tmp1760 = *$tmp1759;
panda$core$Int64 $tmp1761 = *(&local1);
int64_t $tmp1762 = $tmp1761.value;
panda$core$Char8 $tmp1763 = $tmp1760[$tmp1762];
panda$core$Bit $tmp1764 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1758, $tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block13; else goto block14;
block13:;
// line 973
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp1766 = *(&local1);
int64_t $tmp1767 = $tmp1734.value;
int64_t $tmp1768 = $tmp1766.value;
int64_t $tmp1769 = $tmp1767 - $tmp1768;
panda$core$Int64 $tmp1770 = (panda$core$Int64) {$tmp1769};
panda$core$UInt64 $tmp1771 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1770);
if ($tmp1736) goto block16; else goto block17;
block16:;
uint64_t $tmp1772 = $tmp1771.value;
uint64_t $tmp1773 = $tmp1738.value;
bool $tmp1774 = $tmp1772 >= $tmp1773;
panda$core$Bit $tmp1775 = (panda$core$Bit) {$tmp1774};
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block15; else goto block9;
block17:;
uint64_t $tmp1777 = $tmp1771.value;
uint64_t $tmp1778 = $tmp1738.value;
bool $tmp1779 = $tmp1777 > $tmp1778;
panda$core$Bit $tmp1780 = (panda$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block15; else goto block9;
block15:;
int64_t $tmp1782 = $tmp1766.value;
int64_t $tmp1783 = $tmp1737.value;
int64_t $tmp1784 = $tmp1782 + $tmp1783;
panda$core$Int64 $tmp1785 = (panda$core$Int64) {$tmp1784};
*(&local1) = $tmp1785;
goto block8;
block9:;
// line 976
panda$core$Int64 $tmp1786 = *(&local0);
panda$core$String$Index $tmp1787 = panda$core$String$Index$init$panda$core$Int64($tmp1786);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1787, true }).value), true });
block5:;
panda$core$Int64 $tmp1788 = *(&local0);
int64_t $tmp1789 = $tmp1713.value;
int64_t $tmp1790 = $tmp1788.value;
int64_t $tmp1791 = $tmp1789 - $tmp1790;
panda$core$Int64 $tmp1792 = (panda$core$Int64) {$tmp1791};
panda$core$UInt64 $tmp1793 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1792);
if ($tmp1715) goto block19; else goto block20;
block19:;
uint64_t $tmp1794 = $tmp1793.value;
uint64_t $tmp1795 = $tmp1717.value;
bool $tmp1796 = $tmp1794 >= $tmp1795;
panda$core$Bit $tmp1797 = (panda$core$Bit) {$tmp1796};
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block18; else goto block4;
block20:;
uint64_t $tmp1799 = $tmp1793.value;
uint64_t $tmp1800 = $tmp1717.value;
bool $tmp1801 = $tmp1799 > $tmp1800;
panda$core$Bit $tmp1802 = (panda$core$Bit) {$tmp1801};
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block18; else goto block4;
block18:;
int64_t $tmp1804 = $tmp1788.value;
int64_t $tmp1805 = $tmp1716.value;
int64_t $tmp1806 = $tmp1804 + $tmp1805;
panda$core$Int64 $tmp1807 = (panda$core$Int64) {$tmp1806};
*(&local0) = $tmp1807;
goto block3;
block4:;
// line 978
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 989
panda$core$String$Index $tmp1808 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1809 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1808);
return $tmp1809;

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1001
panda$core$Int64* $tmp1810 = &param0->_length;
panda$core$Int64 $tmp1811 = *$tmp1810;
panda$core$Int64* $tmp1812 = &param1->_length;
panda$core$Int64 $tmp1813 = *$tmp1812;
int64_t $tmp1814 = $tmp1811.value;
int64_t $tmp1815 = $tmp1813.value;
bool $tmp1816 = $tmp1814 < $tmp1815;
panda$core$Bit $tmp1817 = (panda$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block1; else goto block2;
block1:;
// line 1002
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1004
panda$core$Int64 $tmp1819 = param2.value;
panda$core$Int64* $tmp1820 = &param0->_length;
panda$core$Int64 $tmp1821 = *$tmp1820;
panda$core$Int64* $tmp1822 = &param1->_length;
panda$core$Int64 $tmp1823 = *$tmp1822;
int64_t $tmp1824 = $tmp1821.value;
int64_t $tmp1825 = $tmp1823.value;
int64_t $tmp1826 = $tmp1824 - $tmp1825;
panda$core$Int64 $tmp1827 = (panda$core$Int64) {$tmp1826};
panda$core$Int64 $tmp1828 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1819, $tmp1827);
*(&local0) = $tmp1828;
// line 1005
panda$core$Int64 $tmp1829 = *(&local0);
panda$core$Int64 $tmp1830 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1831 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1832 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1833 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1829, $tmp1830, $tmp1831, $tmp1832);
panda$core$Int64 $tmp1834 = $tmp1833.start;
*(&local1) = $tmp1834;
panda$core$Int64 $tmp1835 = $tmp1833.end;
panda$core$Int64 $tmp1836 = $tmp1833.step;
panda$core$UInt64 $tmp1837 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1836);
panda$core$Int64 $tmp1838 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1836);
panda$core$UInt64 $tmp1839 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1838);
panda$core$Bit $tmp1840 = $tmp1833.inclusive;
bool $tmp1841 = $tmp1840.value;
panda$core$Int64 $tmp1842 = (panda$core$Int64) {0};
int64_t $tmp1843 = $tmp1836.value;
int64_t $tmp1844 = $tmp1842.value;
bool $tmp1845 = $tmp1843 >= $tmp1844;
panda$core$Bit $tmp1846 = (panda$core$Bit) {$tmp1845};
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block6; else goto block7;
block6:;
if ($tmp1841) goto block8; else goto block9;
block8:;
int64_t $tmp1848 = $tmp1834.value;
int64_t $tmp1849 = $tmp1835.value;
bool $tmp1850 = $tmp1848 <= $tmp1849;
panda$core$Bit $tmp1851 = (panda$core$Bit) {$tmp1850};
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block3; else goto block4;
block9:;
int64_t $tmp1853 = $tmp1834.value;
int64_t $tmp1854 = $tmp1835.value;
bool $tmp1855 = $tmp1853 < $tmp1854;
panda$core$Bit $tmp1856 = (panda$core$Bit) {$tmp1855};
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block3; else goto block4;
block7:;
if ($tmp1841) goto block10; else goto block11;
block10:;
int64_t $tmp1858 = $tmp1834.value;
int64_t $tmp1859 = $tmp1835.value;
bool $tmp1860 = $tmp1858 >= $tmp1859;
panda$core$Bit $tmp1861 = (panda$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block3; else goto block4;
block11:;
int64_t $tmp1863 = $tmp1834.value;
int64_t $tmp1864 = $tmp1835.value;
bool $tmp1865 = $tmp1863 > $tmp1864;
panda$core$Bit $tmp1866 = (panda$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block3; else goto block4;
block3:;
// line 1006
panda$core$Int64 $tmp1868 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1869 = &param1->_length;
panda$core$Int64 $tmp1870 = *$tmp1869;
panda$core$Bit $tmp1871 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1872 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1868, $tmp1870, $tmp1871);
panda$core$Int64 $tmp1873 = $tmp1872.min;
*(&local2) = $tmp1873;
panda$core$Int64 $tmp1874 = $tmp1872.max;
panda$core$Bit $tmp1875 = $tmp1872.inclusive;
bool $tmp1876 = $tmp1875.value;
panda$core$Int64 $tmp1877 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1878 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1877);
if ($tmp1876) goto block15; else goto block16;
block15:;
int64_t $tmp1879 = $tmp1873.value;
int64_t $tmp1880 = $tmp1874.value;
bool $tmp1881 = $tmp1879 <= $tmp1880;
panda$core$Bit $tmp1882 = (panda$core$Bit) {$tmp1881};
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block12; else goto block13;
block16:;
int64_t $tmp1884 = $tmp1873.value;
int64_t $tmp1885 = $tmp1874.value;
bool $tmp1886 = $tmp1884 < $tmp1885;
panda$core$Bit $tmp1887 = (panda$core$Bit) {$tmp1886};
bool $tmp1888 = $tmp1887.value;
if ($tmp1888) goto block12; else goto block13;
block12:;
// line 1007
panda$core$Char8** $tmp1889 = &param0->data;
panda$core$Char8* $tmp1890 = *$tmp1889;
panda$core$Int64 $tmp1891 = *(&local1);
panda$core$Int64 $tmp1892 = *(&local2);
int64_t $tmp1893 = $tmp1891.value;
int64_t $tmp1894 = $tmp1892.value;
int64_t $tmp1895 = $tmp1893 + $tmp1894;
panda$core$Int64 $tmp1896 = (panda$core$Int64) {$tmp1895};
int64_t $tmp1897 = $tmp1896.value;
panda$core$Char8 $tmp1898 = $tmp1890[$tmp1897];
panda$core$Char8** $tmp1899 = &param1->data;
panda$core$Char8* $tmp1900 = *$tmp1899;
panda$core$Int64 $tmp1901 = *(&local2);
int64_t $tmp1902 = $tmp1901.value;
panda$core$Char8 $tmp1903 = $tmp1900[$tmp1902];
panda$core$Bit $tmp1904 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1898, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block17; else goto block18;
block17:;
// line 1008
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1906 = *(&local2);
int64_t $tmp1907 = $tmp1874.value;
int64_t $tmp1908 = $tmp1906.value;
int64_t $tmp1909 = $tmp1907 - $tmp1908;
panda$core$Int64 $tmp1910 = (panda$core$Int64) {$tmp1909};
panda$core$UInt64 $tmp1911 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1910);
if ($tmp1876) goto block20; else goto block21;
block20:;
uint64_t $tmp1912 = $tmp1911.value;
uint64_t $tmp1913 = $tmp1878.value;
bool $tmp1914 = $tmp1912 >= $tmp1913;
panda$core$Bit $tmp1915 = (panda$core$Bit) {$tmp1914};
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block19; else goto block13;
block21:;
uint64_t $tmp1917 = $tmp1911.value;
uint64_t $tmp1918 = $tmp1878.value;
bool $tmp1919 = $tmp1917 > $tmp1918;
panda$core$Bit $tmp1920 = (panda$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block19; else goto block13;
block19:;
int64_t $tmp1922 = $tmp1906.value;
int64_t $tmp1923 = $tmp1877.value;
int64_t $tmp1924 = $tmp1922 + $tmp1923;
panda$core$Int64 $tmp1925 = (panda$core$Int64) {$tmp1924};
*(&local2) = $tmp1925;
goto block12;
block13:;
// line 1011
panda$core$Int64 $tmp1926 = *(&local1);
panda$core$String$Index $tmp1927 = panda$core$String$Index$init$panda$core$Int64($tmp1926);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1927, true }).value), true });
block5:;
panda$core$Int64 $tmp1928 = *(&local1);
if ($tmp1847) goto block23; else goto block24;
block23:;
int64_t $tmp1929 = $tmp1835.value;
int64_t $tmp1930 = $tmp1928.value;
int64_t $tmp1931 = $tmp1929 - $tmp1930;
panda$core$Int64 $tmp1932 = (panda$core$Int64) {$tmp1931};
panda$core$UInt64 $tmp1933 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1932);
if ($tmp1841) goto block25; else goto block26;
block25:;
uint64_t $tmp1934 = $tmp1933.value;
uint64_t $tmp1935 = $tmp1837.value;
bool $tmp1936 = $tmp1934 >= $tmp1935;
panda$core$Bit $tmp1937 = (panda$core$Bit) {$tmp1936};
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block22; else goto block4;
block26:;
uint64_t $tmp1939 = $tmp1933.value;
uint64_t $tmp1940 = $tmp1837.value;
bool $tmp1941 = $tmp1939 > $tmp1940;
panda$core$Bit $tmp1942 = (panda$core$Bit) {$tmp1941};
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block22; else goto block4;
block24:;
int64_t $tmp1944 = $tmp1928.value;
int64_t $tmp1945 = $tmp1835.value;
int64_t $tmp1946 = $tmp1944 - $tmp1945;
panda$core$Int64 $tmp1947 = (panda$core$Int64) {$tmp1946};
panda$core$UInt64 $tmp1948 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1947);
if ($tmp1841) goto block27; else goto block28;
block27:;
uint64_t $tmp1949 = $tmp1948.value;
uint64_t $tmp1950 = $tmp1839.value;
bool $tmp1951 = $tmp1949 >= $tmp1950;
panda$core$Bit $tmp1952 = (panda$core$Bit) {$tmp1951};
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block22; else goto block4;
block28:;
uint64_t $tmp1954 = $tmp1948.value;
uint64_t $tmp1955 = $tmp1839.value;
bool $tmp1956 = $tmp1954 > $tmp1955;
panda$core$Bit $tmp1957 = (panda$core$Bit) {$tmp1956};
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block22; else goto block4;
block22:;
int64_t $tmp1959 = $tmp1928.value;
int64_t $tmp1960 = $tmp1836.value;
int64_t $tmp1961 = $tmp1959 + $tmp1960;
panda$core$Int64 $tmp1962 = (panda$core$Int64) {$tmp1961};
*(&local1) = $tmp1962;
goto block3;
block4:;
// line 1013
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1024
panda$core$Matcher* $tmp1963 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1964;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1964, $tmp1963);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
// unreffing REF($1:panda.core.Matcher)
return $tmp1964;

}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1035
panda$core$Matcher* $tmp1965 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1966 = panda$core$Matcher$find$R$panda$core$Bit($tmp1965);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
// unreffing REF($1:panda.core.Matcher)
return $tmp1966;

}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* param0, panda$core$RegularExpression* param1) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
// line 1049
panda$core$Matcher* $tmp1967 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
panda$core$Matcher* $tmp1968 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
*(&local0) = $tmp1967;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing REF($1:panda.core.Matcher)
// line 1050
panda$core$Matcher* $tmp1969 = *(&local0);
panda$core$Bit $tmp1970;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1970, $tmp1969);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block1; else goto block2;
block1:;
// line 1051
panda$collections$Array* $tmp1972 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1972);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
panda$collections$Array* $tmp1973 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
*(&local1) = $tmp1972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// unreffing REF($18:panda.collections.Array<panda.core.String>)
// line 1052
panda$core$Int64 $tmp1974 = (panda$core$Int64) {1};
panda$core$Matcher* $tmp1975 = *(&local0);
panda$core$Int64 $tmp1976;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1976, $tmp1975);
panda$core$Bit $tmp1977 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1978 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1974, $tmp1976, $tmp1977);
panda$core$Int64 $tmp1979 = $tmp1978.min;
*(&local2) = $tmp1979;
panda$core$Int64 $tmp1980 = $tmp1978.max;
panda$core$Bit $tmp1981 = $tmp1978.inclusive;
bool $tmp1982 = $tmp1981.value;
panda$core$Int64 $tmp1983 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1984 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1983);
if ($tmp1982) goto block6; else goto block7;
block6:;
int64_t $tmp1985 = $tmp1979.value;
int64_t $tmp1986 = $tmp1980.value;
bool $tmp1987 = $tmp1985 <= $tmp1986;
panda$core$Bit $tmp1988 = (panda$core$Bit) {$tmp1987};
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block3; else goto block4;
block7:;
int64_t $tmp1990 = $tmp1979.value;
int64_t $tmp1991 = $tmp1980.value;
bool $tmp1992 = $tmp1990 < $tmp1991;
panda$core$Bit $tmp1993 = (panda$core$Bit) {$tmp1992};
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block3; else goto block4;
block3:;
// line 1053
panda$collections$Array* $tmp1995 = *(&local1);
panda$core$Matcher* $tmp1996 = *(&local0);
panda$core$Int64 $tmp1997 = *(&local2);
panda$core$String* $tmp1998 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1996, $tmp1997);
panda$collections$Array$add$panda$collections$Array$T($tmp1995, ((panda$core$Object*) $tmp1998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// unreffing REF($62:panda.core.String?)
goto block5;
block5:;
panda$core$Int64 $tmp1999 = *(&local2);
int64_t $tmp2000 = $tmp1980.value;
int64_t $tmp2001 = $tmp1999.value;
int64_t $tmp2002 = $tmp2000 - $tmp2001;
panda$core$Int64 $tmp2003 = (panda$core$Int64) {$tmp2002};
panda$core$UInt64 $tmp2004 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2003);
if ($tmp1982) goto block9; else goto block10;
block9:;
uint64_t $tmp2005 = $tmp2004.value;
uint64_t $tmp2006 = $tmp1984.value;
bool $tmp2007 = $tmp2005 >= $tmp2006;
panda$core$Bit $tmp2008 = (panda$core$Bit) {$tmp2007};
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block8; else goto block4;
block10:;
uint64_t $tmp2010 = $tmp2004.value;
uint64_t $tmp2011 = $tmp1984.value;
bool $tmp2012 = $tmp2010 > $tmp2011;
panda$core$Bit $tmp2013 = (panda$core$Bit) {$tmp2012};
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block8; else goto block4;
block8:;
int64_t $tmp2015 = $tmp1999.value;
int64_t $tmp2016 = $tmp1983.value;
int64_t $tmp2017 = $tmp2015 + $tmp2016;
panda$core$Int64 $tmp2018 = (panda$core$Int64) {$tmp2017};
*(&local2) = $tmp2018;
goto block3;
block4:;
// line 1055
panda$collections$Array* $tmp2019 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp2019)));
panda$collections$Array* $tmp2020 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2020));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Matcher* $tmp2021 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) $tmp2019);
block2:;
// line 1057
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$core$Matcher* $tmp2022 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) NULL);

}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
// line 1068
panda$core$Bit $tmp2023 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s2024);
bool $tmp2025 = $tmp2023.value;
if ($tmp2025) goto block1; else goto block2;
block1:;
// line 1069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1071
panda$core$MutableString* $tmp2026 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2026);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
panda$core$MutableString* $tmp2027 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
*(&local0) = $tmp2026;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
// unreffing REF($9:panda.core.MutableString)
// line 1072
panda$core$String$Index $tmp2028 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2028;
// line 1073
goto block3;
block3:;
// line 1074
panda$core$String$Index $tmp2029 = *(&local1);
panda$core$String$Index$nullable $tmp2030 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2029);
*(&local2) = $tmp2030;
// line 1075
panda$core$String$Index$nullable $tmp2031 = *(&local2);
panda$core$Bit $tmp2032 = panda$core$Bit$init$builtin_bit(!$tmp2031.nonnull);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block5; else goto block6;
block5:;
// line 1076
panda$core$MutableString* $tmp2034 = *(&local0);
panda$core$String$Index $tmp2035 = *(&local1);
panda$core$Bit $tmp2036 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2037 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2035, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2036);
panda$core$String* $tmp2038 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2037);
panda$core$MutableString$append$panda$core$String($tmp2034, $tmp2038);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
// unreffing REF($42:panda.core.String)
// line 1077
goto block4;
block6:;
// line 1079
panda$core$MutableString* $tmp2039 = *(&local0);
panda$core$String$Index $tmp2040 = *(&local1);
panda$core$String$Index$nullable $tmp2041 = *(&local2);
panda$core$Bit $tmp2042 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2043 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2040, ((panda$core$String$Index) $tmp2041.value), $tmp2042);
panda$core$String* $tmp2044 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2043);
panda$core$MutableString$append$panda$core$String($tmp2039, $tmp2044);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
// unreffing REF($56:panda.core.String)
// line 1080
panda$core$MutableString* $tmp2045 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp2045, param2);
// line 1081
panda$core$String$Index$nullable $tmp2046 = *(&local2);
panda$core$Int64 $tmp2047 = ((panda$core$String$Index) $tmp2046.value).value;
panda$core$Int64* $tmp2048 = &param1->_length;
panda$core$Int64 $tmp2049 = *$tmp2048;
int64_t $tmp2050 = $tmp2047.value;
int64_t $tmp2051 = $tmp2049.value;
int64_t $tmp2052 = $tmp2050 + $tmp2051;
panda$core$Int64 $tmp2053 = (panda$core$Int64) {$tmp2052};
panda$core$String$Index $tmp2054 = panda$core$String$Index$init$panda$core$Int64($tmp2053);
*(&local1) = $tmp2054;
goto block3;
block4:;
// line 1083
panda$core$MutableString* $tmp2055 = *(&local0);
panda$core$String* $tmp2056 = panda$core$MutableString$finish$R$panda$core$String($tmp2055);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
// unreffing REF($79:panda.core.String)
panda$core$MutableString* $tmp2057 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2056;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 1097
panda$core$Bit $tmp2058 = panda$core$Bit$init$builtin_bit(true);
panda$core$String* $tmp2059 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(param0, param1, param2, $tmp2058);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
// unreffing REF($2:panda.core.String)
return $tmp2059;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
// line 1102
panda$core$MutableString* $tmp2060 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2060);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
panda$core$MutableString* $tmp2061 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
*(&local0) = $tmp2060;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
// unreffing REF($1:panda.core.MutableString)
// line 1103
panda$core$Matcher* $tmp2062 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
panda$core$Matcher* $tmp2063 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
*(&local1) = $tmp2062;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing REF($14:panda.core.Matcher)
// line 1104
goto block1;
block1:;
panda$core$Matcher* $tmp2064 = *(&local1);
panda$core$Bit $tmp2065 = panda$core$Matcher$find$R$panda$core$Bit($tmp2064);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block2; else goto block3;
block2:;
// line 1105
panda$core$Matcher* $tmp2067 = *(&local1);
panda$core$MutableString* $tmp2068 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2067, $tmp2068, param2, param3);
goto block1;
block3:;
// line 1107
panda$core$Matcher* $tmp2069 = *(&local1);
panda$core$MutableString* $tmp2070 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2069, $tmp2070);
// line 1108
panda$core$MutableString* $tmp2071 = *(&local0);
panda$core$String* $tmp2072 = panda$core$MutableString$finish$R$panda$core$String($tmp2071);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
// unreffing REF($42:panda.core.String)
panda$core$Matcher* $tmp2073 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2074 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2074));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2072;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 1129
panda$core$MutableString* $tmp2075 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2075);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
panda$core$MutableString* $tmp2076 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
*(&local0) = $tmp2075;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
// unreffing REF($1:panda.core.MutableString)
// line 1130
panda$core$Matcher* $tmp2077 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
panda$core$Matcher* $tmp2078 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
*(&local1) = $tmp2077;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
// unreffing REF($14:panda.core.Matcher)
// line 1131
goto block1;
block1:;
panda$core$Matcher* $tmp2079 = *(&local1);
panda$core$Bit $tmp2080 = panda$core$Matcher$find$R$panda$core$Bit($tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block2; else goto block3;
block2:;
// line 1132
panda$core$Matcher* $tmp2082 = *(&local1);
panda$core$MutableString* $tmp2083 = *(&local0);
panda$core$Matcher* $tmp2084 = *(&local1);
panda$core$Int64 $tmp2085 = (panda$core$Int64) {0};
panda$core$String* $tmp2086 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2084, $tmp2085);
panda$core$Int8** $tmp2087 = &param2->pointer;
panda$core$Int8* $tmp2088 = *$tmp2087;
panda$core$Object** $tmp2089 = &param2->target;
panda$core$Object* $tmp2090 = *$tmp2089;
bool $tmp2091 = $tmp2090 != ((panda$core$Object*) NULL);
if ($tmp2091) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp2093 = (($fn2092) $tmp2088)($tmp2086);
*(&local2) = $tmp2093;
goto block6;
block4:;
panda$core$Object* $tmp2095 = (($fn2094) $tmp2088)($tmp2090, $tmp2086);
*(&local2) = $tmp2095;
goto block6;
block6:;
panda$core$Object* $tmp2096 = *(&local2);
$fn2098 $tmp2097 = ($fn2098) $tmp2096->$class->vtable[0];
panda$core$String* $tmp2099 = $tmp2097($tmp2096);
panda$core$Bit $tmp2100 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2082, $tmp2083, $tmp2099, $tmp2100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2096);
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
// unreffing REF($36:panda.core.String?)
goto block1;
block3:;
// line 1134
panda$core$Matcher* $tmp2101 = *(&local1);
panda$core$MutableString* $tmp2102 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2101, $tmp2102);
// line 1135
panda$core$MutableString* $tmp2103 = *(&local0);
panda$core$String* $tmp2104 = panda$core$MutableString$convert$R$panda$core$String($tmp2103);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
// unreffing REF($74:panda.core.String)
panda$core$Matcher* $tmp2105 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2106 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2104;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Object* local4 = NULL;
// line 1149
panda$core$MutableString* $tmp2107 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2107);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
panda$core$MutableString* $tmp2108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
*(&local0) = $tmp2107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($1:panda.core.MutableString)
// line 1150
panda$core$Matcher* $tmp2109 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
panda$core$Matcher* $tmp2110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
*(&local1) = $tmp2109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing REF($14:panda.core.Matcher)
// line 1151
goto block1;
block1:;
panda$core$Matcher* $tmp2111 = *(&local1);
panda$core$Bit $tmp2112 = panda$core$Matcher$find$R$panda$core$Bit($tmp2111);
bool $tmp2113 = $tmp2112.value;
if ($tmp2113) goto block2; else goto block3;
block2:;
// line 1152
panda$collections$Array* $tmp2114 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2114);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
panda$collections$Array* $tmp2115 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
*(&local2) = $tmp2114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
// unreffing REF($32:panda.collections.Array<panda.core.String?>)
// line 1153
panda$core$Int64 $tmp2116 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp2117 = *(&local1);
panda$core$Int64 $tmp2118;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2118, $tmp2117);
panda$core$Bit $tmp2119 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2120 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2116, $tmp2118, $tmp2119);
panda$core$Int64 $tmp2121 = $tmp2120.min;
*(&local3) = $tmp2121;
panda$core$Int64 $tmp2122 = $tmp2120.max;
panda$core$Bit $tmp2123 = $tmp2120.inclusive;
bool $tmp2124 = $tmp2123.value;
panda$core$Int64 $tmp2125 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2126 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2125);
if ($tmp2124) goto block7; else goto block8;
block7:;
int64_t $tmp2127 = $tmp2121.value;
int64_t $tmp2128 = $tmp2122.value;
bool $tmp2129 = $tmp2127 <= $tmp2128;
panda$core$Bit $tmp2130 = (panda$core$Bit) {$tmp2129};
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block4; else goto block5;
block8:;
int64_t $tmp2132 = $tmp2121.value;
int64_t $tmp2133 = $tmp2122.value;
bool $tmp2134 = $tmp2132 < $tmp2133;
panda$core$Bit $tmp2135 = (panda$core$Bit) {$tmp2134};
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block4; else goto block5;
block4:;
// line 1154
panda$collections$Array* $tmp2137 = *(&local2);
panda$core$Matcher* $tmp2138 = *(&local1);
panda$core$Int64 $tmp2139 = *(&local3);
panda$core$String* $tmp2140 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2138, $tmp2139);
panda$collections$Array$add$panda$collections$Array$T($tmp2137, ((panda$core$Object*) $tmp2140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing REF($76:panda.core.String?)
goto block6;
block6:;
panda$core$Int64 $tmp2141 = *(&local3);
int64_t $tmp2142 = $tmp2122.value;
int64_t $tmp2143 = $tmp2141.value;
int64_t $tmp2144 = $tmp2142 - $tmp2143;
panda$core$Int64 $tmp2145 = (panda$core$Int64) {$tmp2144};
panda$core$UInt64 $tmp2146 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2145);
if ($tmp2124) goto block10; else goto block11;
block10:;
uint64_t $tmp2147 = $tmp2146.value;
uint64_t $tmp2148 = $tmp2126.value;
bool $tmp2149 = $tmp2147 >= $tmp2148;
panda$core$Bit $tmp2150 = (panda$core$Bit) {$tmp2149};
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block9; else goto block5;
block11:;
uint64_t $tmp2152 = $tmp2146.value;
uint64_t $tmp2153 = $tmp2126.value;
bool $tmp2154 = $tmp2152 > $tmp2153;
panda$core$Bit $tmp2155 = (panda$core$Bit) {$tmp2154};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block9; else goto block5;
block9:;
int64_t $tmp2157 = $tmp2141.value;
int64_t $tmp2158 = $tmp2125.value;
int64_t $tmp2159 = $tmp2157 + $tmp2158;
panda$core$Int64 $tmp2160 = (panda$core$Int64) {$tmp2159};
*(&local3) = $tmp2160;
goto block4;
block5:;
// line 1156
panda$core$Matcher* $tmp2161 = *(&local1);
panda$core$MutableString* $tmp2162 = *(&local0);
panda$collections$Array* $tmp2163 = *(&local2);
panda$core$Int8** $tmp2164 = &param2->pointer;
panda$core$Int8* $tmp2165 = *$tmp2164;
panda$core$Object** $tmp2166 = &param2->target;
panda$core$Object* $tmp2167 = *$tmp2166;
bool $tmp2168 = $tmp2167 != ((panda$core$Object*) NULL);
if ($tmp2168) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp2170 = (($fn2169) $tmp2165)(((panda$collections$ListView*) $tmp2163));
*(&local4) = $tmp2170;
goto block14;
block12:;
panda$core$Object* $tmp2172 = (($fn2171) $tmp2165)($tmp2167, ((panda$collections$ListView*) $tmp2163));
*(&local4) = $tmp2172;
goto block14;
block14:;
panda$core$Object* $tmp2173 = *(&local4);
$fn2175 $tmp2174 = ($fn2175) $tmp2173->$class->vtable[0];
panda$core$String* $tmp2176 = $tmp2174($tmp2173);
panda$core$Bit $tmp2177 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2161, $tmp2162, $tmp2176, $tmp2177);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2173);
// unreffing REF($128:panda.core.Object)
panda$collections$Array* $tmp2178 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2178));
// unreffing groups
*(&local2) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 1158
panda$core$Matcher* $tmp2179 = *(&local1);
panda$core$MutableString* $tmp2180 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2179, $tmp2180);
// line 1159
panda$core$MutableString* $tmp2181 = *(&local0);
panda$core$String* $tmp2182 = panda$core$MutableString$convert$R$panda$core$String($tmp2181);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
// unreffing REF($151:panda.core.String)
panda$core$Matcher* $tmp2183 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2184 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2182;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1163
panda$core$Bit $tmp2185 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2186 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(param0, param1, $tmp2185);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Index>)
return $tmp2186;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Bit param2) {

// line 1167
panda$core$String$MatchIterator* $tmp2187 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp2187, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2187)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing REF($1:panda.core.String.MatchIterator)
return ((panda$collections$Iterator*) $tmp2187);

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1171
panda$core$Bit $tmp2188 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2189 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(param0, param1, $tmp2188);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Match>)
return $tmp2189;

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Bit param2) {

// line 1175
panda$core$String$RegexMatchIterator* $tmp2190 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp2190, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2190)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($1:panda.core.String.RegexMatchIterator)
return ((panda$collections$Iterator*) $tmp2190);

}
panda$core$String$Index panda$core$String$get_start$R$panda$core$String$Index(panda$core$String* param0) {

// line 1182
panda$core$Int64 $tmp2191 = (panda$core$Int64) {0};
panda$core$String$Index $tmp2192 = panda$core$String$Index$init$panda$core$Int64($tmp2191);
return $tmp2192;

}
panda$core$String$Index panda$core$String$get_end$R$panda$core$String$Index(panda$core$String* param0) {

// line 1189
panda$core$Int64* $tmp2193 = &param0->_length;
panda$core$Int64 $tmp2194 = *$tmp2193;
panda$core$String$Index $tmp2195 = panda$core$String$Index$init$panda$core$Int64($tmp2194);
return $tmp2195;

}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

int64_t local0;
// line 1199
panda$core$Int64 $tmp2196 = param1.value;
panda$core$Int64* $tmp2197 = &param0->_length;
panda$core$Int64 $tmp2198 = *$tmp2197;
int64_t $tmp2199 = $tmp2196.value;
int64_t $tmp2200 = $tmp2198.value;
bool $tmp2201 = $tmp2199 < $tmp2200;
panda$core$Bit $tmp2202 = (panda$core$Bit) {$tmp2201};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2204 = (panda$core$Int64) {1199};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2205, $tmp2204);
abort(); // unreachable
block1:;
// line 1200
panda$core$Char8** $tmp2206 = &param0->data;
panda$core$Char8* $tmp2207 = *$tmp2206;
panda$core$Int64 $tmp2208 = param1.value;
int64_t $tmp2209 = $tmp2208.value;
panda$core$Char8 $tmp2210 = $tmp2207[$tmp2209];
uint8_t $tmp2211 = $tmp2210.value;
int64_t $tmp2212 = ((int64_t) $tmp2211) & 255;
*(&local0) = $tmp2212;
// line 1201
int64_t $tmp2213 = *(&local0);
bool $tmp2214 = $tmp2213 >= 240;
panda$core$Bit $tmp2215 = panda$core$Bit$init$builtin_bit($tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block3; else goto block4;
block3:;
// line 1202
panda$core$Int64 $tmp2217 = param1.value;
panda$core$Int64 $tmp2218 = (panda$core$Int64) {4};
int64_t $tmp2219 = $tmp2217.value;
int64_t $tmp2220 = $tmp2218.value;
int64_t $tmp2221 = $tmp2219 + $tmp2220;
panda$core$Int64 $tmp2222 = (panda$core$Int64) {$tmp2221};
panda$core$String$Index $tmp2223 = panda$core$String$Index$init$panda$core$Int64($tmp2222);
return $tmp2223;
block4:;
// line 1204
int64_t $tmp2224 = *(&local0);
bool $tmp2225 = $tmp2224 >= 224;
panda$core$Bit $tmp2226 = panda$core$Bit$init$builtin_bit($tmp2225);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block5; else goto block6;
block5:;
// line 1205
panda$core$Int64 $tmp2228 = param1.value;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {3};
int64_t $tmp2230 = $tmp2228.value;
int64_t $tmp2231 = $tmp2229.value;
int64_t $tmp2232 = $tmp2230 + $tmp2231;
panda$core$Int64 $tmp2233 = (panda$core$Int64) {$tmp2232};
panda$core$String$Index $tmp2234 = panda$core$String$Index$init$panda$core$Int64($tmp2233);
return $tmp2234;
block6:;
// line 1207
int64_t $tmp2235 = *(&local0);
bool $tmp2236 = $tmp2235 >= 192;
panda$core$Bit $tmp2237 = panda$core$Bit$init$builtin_bit($tmp2236);
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block7; else goto block8;
block7:;
// line 1208
panda$core$Int64 $tmp2239 = param1.value;
panda$core$Int64 $tmp2240 = (panda$core$Int64) {2};
int64_t $tmp2241 = $tmp2239.value;
int64_t $tmp2242 = $tmp2240.value;
int64_t $tmp2243 = $tmp2241 + $tmp2242;
panda$core$Int64 $tmp2244 = (panda$core$Int64) {$tmp2243};
panda$core$String$Index $tmp2245 = panda$core$String$Index$init$panda$core$Int64($tmp2244);
return $tmp2245;
block8:;
// line 1210
panda$core$Int64 $tmp2246 = param1.value;
panda$core$Int64 $tmp2247 = (panda$core$Int64) {1};
int64_t $tmp2248 = $tmp2246.value;
int64_t $tmp2249 = $tmp2247.value;
int64_t $tmp2250 = $tmp2248 + $tmp2249;
panda$core$Int64 $tmp2251 = (panda$core$Int64) {$tmp2250};
panda$core$String$Index $tmp2252 = panda$core$String$Index$init$panda$core$Int64($tmp2251);
return $tmp2252;

}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
// line 1220
panda$core$Int64 $tmp2253 = param1.value;
panda$core$Int64 $tmp2254 = (panda$core$Int64) {0};
int64_t $tmp2255 = $tmp2253.value;
int64_t $tmp2256 = $tmp2254.value;
bool $tmp2257 = $tmp2255 > $tmp2256;
panda$core$Bit $tmp2258 = (panda$core$Bit) {$tmp2257};
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2260 = (panda$core$Int64) {1220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2261, $tmp2260);
abort(); // unreachable
block1:;
// line 1221
panda$core$Int64 $tmp2262 = param1.value;
panda$core$Int64 $tmp2263 = (panda$core$Int64) {1};
int64_t $tmp2264 = $tmp2262.value;
int64_t $tmp2265 = $tmp2263.value;
int64_t $tmp2266 = $tmp2264 - $tmp2265;
panda$core$Int64 $tmp2267 = (panda$core$Int64) {$tmp2266};
*(&local0) = $tmp2267;
// line 1222
goto block3;
block3:;
panda$core$Char8** $tmp2268 = &param0->data;
panda$core$Char8* $tmp2269 = *$tmp2268;
panda$core$Int64 $tmp2270 = *(&local0);
int64_t $tmp2271 = $tmp2270.value;
panda$core$Char8 $tmp2272 = $tmp2269[$tmp2271];
uint8_t $tmp2273 = $tmp2272.value;
int64_t $tmp2274 = ((int64_t) $tmp2273) & 255;
bool $tmp2275 = $tmp2274 >= 128;
panda$core$Char8** $tmp2276 = &param0->data;
panda$core$Char8* $tmp2277 = *$tmp2276;
panda$core$Int64 $tmp2278 = *(&local0);
int64_t $tmp2279 = $tmp2278.value;
panda$core$Char8 $tmp2280 = $tmp2277[$tmp2279];
uint8_t $tmp2281 = $tmp2280.value;
int64_t $tmp2282 = ((int64_t) $tmp2281) & 255;
bool $tmp2283 = $tmp2282 < 192;
bool $tmp2284 = $tmp2275 & $tmp2283;
panda$core$Bit $tmp2285 = panda$core$Bit$init$builtin_bit($tmp2284);
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block4; else goto block5;
block4:;
// line 1224
panda$core$Int64 $tmp2287 = *(&local0);
panda$core$Int64 $tmp2288 = (panda$core$Int64) {1};
int64_t $tmp2289 = $tmp2287.value;
int64_t $tmp2290 = $tmp2288.value;
int64_t $tmp2291 = $tmp2289 - $tmp2290;
panda$core$Int64 $tmp2292 = (panda$core$Int64) {$tmp2291};
*(&local0) = $tmp2292;
goto block3;
block5:;
// line 1226
panda$core$Int64 $tmp2293 = *(&local0);
panda$core$String$Index $tmp2294 = panda$core$String$Index$init$panda$core$Int64($tmp2293);
return $tmp2294;

}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1, panda$core$Int64 param2) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1236
*(&local0) = param1;
// line 1237
panda$core$Int64 $tmp2295 = (panda$core$Int64) {0};
int64_t $tmp2296 = param2.value;
int64_t $tmp2297 = $tmp2295.value;
bool $tmp2298 = $tmp2296 > $tmp2297;
panda$core$Bit $tmp2299 = (panda$core$Bit) {$tmp2298};
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block1; else goto block3;
block1:;
// line 1238
panda$core$Int64 $tmp2301 = (panda$core$Int64) {0};
panda$core$Bit $tmp2302 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2303 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2301, param2, $tmp2302);
panda$core$Int64 $tmp2304 = $tmp2303.min;
*(&local1) = $tmp2304;
panda$core$Int64 $tmp2305 = $tmp2303.max;
panda$core$Bit $tmp2306 = $tmp2303.inclusive;
bool $tmp2307 = $tmp2306.value;
panda$core$Int64 $tmp2308 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2309 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2308);
if ($tmp2307) goto block7; else goto block8;
block7:;
int64_t $tmp2310 = $tmp2304.value;
int64_t $tmp2311 = $tmp2305.value;
bool $tmp2312 = $tmp2310 <= $tmp2311;
panda$core$Bit $tmp2313 = (panda$core$Bit) {$tmp2312};
bool $tmp2314 = $tmp2313.value;
if ($tmp2314) goto block4; else goto block5;
block8:;
int64_t $tmp2315 = $tmp2304.value;
int64_t $tmp2316 = $tmp2305.value;
bool $tmp2317 = $tmp2315 < $tmp2316;
panda$core$Bit $tmp2318 = (panda$core$Bit) {$tmp2317};
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block4; else goto block5;
block4:;
// line 1239
panda$core$String$Index $tmp2320 = *(&local0);
panda$core$String$Index $tmp2321 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2320);
*(&local0) = $tmp2321;
goto block6;
block6:;
panda$core$Int64 $tmp2322 = *(&local1);
int64_t $tmp2323 = $tmp2305.value;
int64_t $tmp2324 = $tmp2322.value;
int64_t $tmp2325 = $tmp2323 - $tmp2324;
panda$core$Int64 $tmp2326 = (panda$core$Int64) {$tmp2325};
panda$core$UInt64 $tmp2327 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2326);
if ($tmp2307) goto block10; else goto block11;
block10:;
uint64_t $tmp2328 = $tmp2327.value;
uint64_t $tmp2329 = $tmp2309.value;
bool $tmp2330 = $tmp2328 >= $tmp2329;
panda$core$Bit $tmp2331 = (panda$core$Bit) {$tmp2330};
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block9; else goto block5;
block11:;
uint64_t $tmp2333 = $tmp2327.value;
uint64_t $tmp2334 = $tmp2309.value;
bool $tmp2335 = $tmp2333 > $tmp2334;
panda$core$Bit $tmp2336 = (panda$core$Bit) {$tmp2335};
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block9; else goto block5;
block9:;
int64_t $tmp2338 = $tmp2322.value;
int64_t $tmp2339 = $tmp2308.value;
int64_t $tmp2340 = $tmp2338 + $tmp2339;
panda$core$Int64 $tmp2341 = (panda$core$Int64) {$tmp2340};
*(&local1) = $tmp2341;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1243
panda$core$Int64 $tmp2342 = (panda$core$Int64) {0};
panda$core$Int64 $tmp2343 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2344 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2345 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2342, param2, $tmp2343, $tmp2344);
panda$core$Int64 $tmp2346 = $tmp2345.start;
*(&local2) = $tmp2346;
panda$core$Int64 $tmp2347 = $tmp2345.end;
panda$core$Int64 $tmp2348 = $tmp2345.step;
panda$core$UInt64 $tmp2349 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2348);
panda$core$Int64 $tmp2350 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2348);
panda$core$UInt64 $tmp2351 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2350);
panda$core$Bit $tmp2352 = $tmp2345.inclusive;
bool $tmp2353 = $tmp2352.value;
panda$core$Int64 $tmp2354 = (panda$core$Int64) {0};
int64_t $tmp2355 = $tmp2348.value;
int64_t $tmp2356 = $tmp2354.value;
bool $tmp2357 = $tmp2355 >= $tmp2356;
panda$core$Bit $tmp2358 = (panda$core$Bit) {$tmp2357};
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block15; else goto block16;
block15:;
if ($tmp2353) goto block17; else goto block18;
block17:;
int64_t $tmp2360 = $tmp2346.value;
int64_t $tmp2361 = $tmp2347.value;
bool $tmp2362 = $tmp2360 <= $tmp2361;
panda$core$Bit $tmp2363 = (panda$core$Bit) {$tmp2362};
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block12; else goto block13;
block18:;
int64_t $tmp2365 = $tmp2346.value;
int64_t $tmp2366 = $tmp2347.value;
bool $tmp2367 = $tmp2365 < $tmp2366;
panda$core$Bit $tmp2368 = (panda$core$Bit) {$tmp2367};
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block12; else goto block13;
block16:;
if ($tmp2353) goto block19; else goto block20;
block19:;
int64_t $tmp2370 = $tmp2346.value;
int64_t $tmp2371 = $tmp2347.value;
bool $tmp2372 = $tmp2370 >= $tmp2371;
panda$core$Bit $tmp2373 = (panda$core$Bit) {$tmp2372};
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block12; else goto block13;
block20:;
int64_t $tmp2375 = $tmp2346.value;
int64_t $tmp2376 = $tmp2347.value;
bool $tmp2377 = $tmp2375 > $tmp2376;
panda$core$Bit $tmp2378 = (panda$core$Bit) {$tmp2377};
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block12; else goto block13;
block12:;
// line 1244
panda$core$String$Index $tmp2380 = *(&local0);
panda$core$String$Index $tmp2381 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2380);
*(&local0) = $tmp2381;
goto block14;
block14:;
panda$core$Int64 $tmp2382 = *(&local2);
if ($tmp2359) goto block22; else goto block23;
block22:;
int64_t $tmp2383 = $tmp2347.value;
int64_t $tmp2384 = $tmp2382.value;
int64_t $tmp2385 = $tmp2383 - $tmp2384;
panda$core$Int64 $tmp2386 = (panda$core$Int64) {$tmp2385};
panda$core$UInt64 $tmp2387 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2386);
if ($tmp2353) goto block24; else goto block25;
block24:;
uint64_t $tmp2388 = $tmp2387.value;
uint64_t $tmp2389 = $tmp2349.value;
bool $tmp2390 = $tmp2388 >= $tmp2389;
panda$core$Bit $tmp2391 = (panda$core$Bit) {$tmp2390};
bool $tmp2392 = $tmp2391.value;
if ($tmp2392) goto block21; else goto block13;
block25:;
uint64_t $tmp2393 = $tmp2387.value;
uint64_t $tmp2394 = $tmp2349.value;
bool $tmp2395 = $tmp2393 > $tmp2394;
panda$core$Bit $tmp2396 = (panda$core$Bit) {$tmp2395};
bool $tmp2397 = $tmp2396.value;
if ($tmp2397) goto block21; else goto block13;
block23:;
int64_t $tmp2398 = $tmp2382.value;
int64_t $tmp2399 = $tmp2347.value;
int64_t $tmp2400 = $tmp2398 - $tmp2399;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {$tmp2400};
panda$core$UInt64 $tmp2402 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2401);
if ($tmp2353) goto block26; else goto block27;
block26:;
uint64_t $tmp2403 = $tmp2402.value;
uint64_t $tmp2404 = $tmp2351.value;
bool $tmp2405 = $tmp2403 >= $tmp2404;
panda$core$Bit $tmp2406 = (panda$core$Bit) {$tmp2405};
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block21; else goto block13;
block27:;
uint64_t $tmp2408 = $tmp2402.value;
uint64_t $tmp2409 = $tmp2351.value;
bool $tmp2410 = $tmp2408 > $tmp2409;
panda$core$Bit $tmp2411 = (panda$core$Bit) {$tmp2410};
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block21; else goto block13;
block21:;
int64_t $tmp2413 = $tmp2382.value;
int64_t $tmp2414 = $tmp2348.value;
int64_t $tmp2415 = $tmp2413 + $tmp2414;
panda$core$Int64 $tmp2416 = (panda$core$Int64) {$tmp2415};
*(&local2) = $tmp2416;
goto block12;
block13:;
goto block2;
block2:;
// line 1247
panda$core$String$Index $tmp2417 = *(&local0);
return $tmp2417;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1260
panda$core$Int32 $tmp2418 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2419 = panda$core$Char32$init$panda$core$Int32($tmp2418);
panda$core$String* $tmp2420 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2419);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
// unreffing REF($3:panda.core.String)
return $tmp2420;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1274
panda$core$Int64 $tmp2421 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2422 = $tmp2421.value;
int64_t $tmp2423 = param1.value;
bool $tmp2424 = $tmp2422 >= $tmp2423;
panda$core$Bit $tmp2425 = (panda$core$Bit) {$tmp2424};
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block1; else goto block2;
block1:;
// line 1275
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1277
panda$core$Int64 $tmp2427 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2428 = param1.value;
int64_t $tmp2429 = $tmp2427.value;
int64_t $tmp2430 = $tmp2428 - $tmp2429;
panda$core$Int64 $tmp2431 = (panda$core$Int64) {$tmp2430};
panda$core$String* $tmp2432 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2431);
panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp2432);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing REF($18:panda.core.String)
return $tmp2433;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1290
panda$core$Int32 $tmp2434 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2435 = panda$core$Char32$init$panda$core$Int32($tmp2434);
panda$core$String* $tmp2436 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2435);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing REF($3:panda.core.String)
return $tmp2436;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1304
panda$core$Int64 $tmp2437 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2438 = $tmp2437.value;
int64_t $tmp2439 = param1.value;
bool $tmp2440 = $tmp2438 >= $tmp2439;
panda$core$Bit $tmp2441 = (panda$core$Bit) {$tmp2440};
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block1; else goto block2;
block1:;
// line 1305
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1307
panda$core$Int64 $tmp2443 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2444 = param1.value;
int64_t $tmp2445 = $tmp2443.value;
int64_t $tmp2446 = $tmp2444 - $tmp2445;
panda$core$Int64 $tmp2447 = (panda$core$Int64) {$tmp2446};
panda$core$String* $tmp2448 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2447);
panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing REF($18:panda.core.String)
return $tmp2449;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1322
panda$core$Int32 $tmp2450 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2451 = panda$core$Char32$init$panda$core$Int32($tmp2450);
panda$core$String* $tmp2452 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2451);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing REF($3:panda.core.String)
return $tmp2452;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1338
panda$core$Int64 $tmp2453 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2454 = $tmp2453.value;
int64_t $tmp2455 = param1.value;
bool $tmp2456 = $tmp2454 >= $tmp2455;
panda$core$Bit $tmp2457 = (panda$core$Bit) {$tmp2456};
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block1; else goto block2;
block1:;
// line 1339
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1341
panda$core$Int64 $tmp2459 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2460 = param1.value;
int64_t $tmp2461 = $tmp2459.value;
int64_t $tmp2462 = $tmp2460 - $tmp2461;
panda$core$Int64 $tmp2463 = (panda$core$Int64) {$tmp2462};
*(&local0) = $tmp2463;
// line 1342
panda$core$Int64 $tmp2464 = *(&local0);
panda$core$Int64 $tmp2465 = (panda$core$Int64) {2};
int64_t $tmp2466 = $tmp2464.value;
int64_t $tmp2467 = $tmp2465.value;
int64_t $tmp2468 = $tmp2466 / $tmp2467;
panda$core$Int64 $tmp2469 = (panda$core$Int64) {$tmp2468};
*(&local1) = $tmp2469;
// line 1343
panda$core$Int64 $tmp2470 = *(&local0);
panda$core$Int64 $tmp2471 = *(&local1);
int64_t $tmp2472 = $tmp2470.value;
int64_t $tmp2473 = $tmp2471.value;
int64_t $tmp2474 = $tmp2472 - $tmp2473;
panda$core$Int64 $tmp2475 = (panda$core$Int64) {$tmp2474};
*(&local2) = $tmp2475;
// line 1344
panda$core$Int64 $tmp2476 = *(&local1);
panda$core$String* $tmp2477 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2476);
panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, param0);
panda$core$Int64 $tmp2479 = *(&local2);
panda$core$String* $tmp2480 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2479);
panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, $tmp2480);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// unreffing REF($37:panda.core.String)
return $tmp2481;

}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1355
panda$core$Int64 $tmp2482 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2483 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2483;

}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
panda$core$Bit local3;
// line 1368
panda$collections$Array* $tmp2484 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2484);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
panda$collections$Array* $tmp2485 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
*(&local0) = $tmp2484;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 1369
panda$core$String$Index $tmp2486 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2486;
// line 1370
goto block1;
block1:;
// line 1371
// line 1372
panda$core$Int64* $tmp2487 = &param1->_length;
panda$core$Int64 $tmp2488 = *$tmp2487;
panda$core$Int64 $tmp2489 = (panda$core$Int64) {0};
panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2488, $tmp2489);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block3; else goto block5;
block3:;
// line 1373
panda$core$String$Index $tmp2492 = *(&local1);
panda$core$String$Index $tmp2493 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2492);
*(&local2) = ((panda$core$String$Index$nullable) { $tmp2493, true });
goto block4;
block5:;
// line 1
// line 1376
panda$core$String$Index $tmp2494 = *(&local1);
panda$core$String$Index$nullable $tmp2495 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2494);
*(&local2) = $tmp2495;
goto block4;
block4:;
// line 1378
panda$core$String$Index$nullable $tmp2496 = *(&local2);
panda$core$Bit $tmp2497 = panda$core$Bit$init$builtin_bit(!$tmp2496.nonnull);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2497;
goto block10;
block9:;
panda$collections$Array* $tmp2499 = *(&local0);
ITable* $tmp2500 = ((panda$collections$CollectionView*) $tmp2499)->$class->itable;
while ($tmp2500->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[0];
panda$core$Int64 $tmp2503 = $tmp2501(((panda$collections$CollectionView*) $tmp2499));
panda$core$Int64 $tmp2504 = (panda$core$Int64) {1};
int64_t $tmp2505 = param2.value;
int64_t $tmp2506 = $tmp2504.value;
int64_t $tmp2507 = $tmp2505 - $tmp2506;
panda$core$Int64 $tmp2508 = (panda$core$Int64) {$tmp2507};
panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2503, $tmp2508);
*(&local3) = $tmp2509;
goto block10;
block10:;
panda$core$Bit $tmp2510 = *(&local3);
bool $tmp2511 = $tmp2510.value;
if ($tmp2511) goto block6; else goto block7;
block6:;
// line 1379
panda$collections$Array* $tmp2512 = *(&local0);
panda$core$String$Index $tmp2513 = *(&local1);
panda$core$Bit $tmp2514 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2515 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2513, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2514);
panda$core$String* $tmp2516 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2515);
panda$collections$Array$add$panda$collections$Array$T($tmp2512, ((panda$core$Object*) $tmp2516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing REF($69:panda.core.String)
// line 1380
goto block2;
block7:;
// line 1382
panda$collections$Array* $tmp2517 = *(&local0);
panda$core$String$Index $tmp2518 = *(&local1);
panda$core$String$Index$nullable $tmp2519 = *(&local2);
panda$core$Bit $tmp2520 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2521 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2518, ((panda$core$String$Index) $tmp2519.value), $tmp2520);
panda$core$String* $tmp2522 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2521);
panda$collections$Array$add$panda$collections$Array$T($tmp2517, ((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
// unreffing REF($85:panda.core.String)
// line 1383
panda$core$String$Index$nullable $tmp2523 = *(&local2);
panda$core$Int64 $tmp2524 = ((panda$core$String$Index) $tmp2523.value).value;
panda$core$Int64* $tmp2525 = &param1->_length;
panda$core$Int64 $tmp2526 = *$tmp2525;
int64_t $tmp2527 = $tmp2524.value;
int64_t $tmp2528 = $tmp2526.value;
int64_t $tmp2529 = $tmp2527 + $tmp2528;
panda$core$Int64 $tmp2530 = (panda$core$Int64) {$tmp2529};
panda$core$String$Index $tmp2531 = panda$core$String$Index$init$panda$core$Int64($tmp2530);
*(&local1) = $tmp2531;
goto block1;
block2:;
// line 1385
panda$collections$Array* $tmp2532 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
panda$collections$Array* $tmp2533 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2532;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$String$Index local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$Int64 $tmp2534 = (panda$core$Int64) {0};
int64_t $tmp2535 = param2.value;
int64_t $tmp2536 = $tmp2534.value;
bool $tmp2537 = $tmp2535 > $tmp2536;
panda$core$Bit $tmp2538 = (panda$core$Bit) {$tmp2537};
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2540 = (panda$core$Int64) {1399};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2541, $tmp2540, &$s2542);
abort(); // unreachable
block1:;
// line 1400
panda$collections$Array* $tmp2543 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2543);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
panda$collections$Array* $tmp2544 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
*(&local0) = $tmp2543;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
// unreffing REF($11:panda.collections.Array<panda.core.String>)
// line 1401
panda$core$Matcher* $tmp2545 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
panda$core$Matcher* $tmp2546 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
*(&local1) = $tmp2545;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
// unreffing REF($25:panda.core.Matcher)
// line 1402
panda$core$String$Index $tmp2547 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp2547;
// line 1403
goto block3;
block3:;
// line 1404
panda$core$Matcher* $tmp2548 = *(&local1);
panda$core$Bit $tmp2549 = panda$core$Matcher$find$R$panda$core$Bit($tmp2548);
*(&local3) = $tmp2549;
// line 1405
panda$core$Bit $tmp2550 = *(&local3);
panda$core$Bit $tmp2551 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2550);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2551;
goto block9;
block8:;
panda$collections$Array* $tmp2553 = *(&local0);
ITable* $tmp2554 = ((panda$collections$CollectionView*) $tmp2553)->$class->itable;
while ($tmp2554->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2554 = $tmp2554->next;
}
$fn2556 $tmp2555 = $tmp2554->methods[0];
panda$core$Int64 $tmp2557 = $tmp2555(((panda$collections$CollectionView*) $tmp2553));
panda$core$Int64 $tmp2558 = (panda$core$Int64) {1};
int64_t $tmp2559 = param2.value;
int64_t $tmp2560 = $tmp2558.value;
int64_t $tmp2561 = $tmp2559 - $tmp2560;
panda$core$Int64 $tmp2562 = (panda$core$Int64) {$tmp2561};
panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2557, $tmp2562);
*(&local4) = $tmp2563;
goto block9;
block9:;
panda$core$Bit $tmp2564 = *(&local4);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block5; else goto block6;
block5:;
// line 1406
panda$collections$Array* $tmp2566 = *(&local0);
panda$core$String$Index $tmp2567 = *(&local2);
panda$core$Bit $tmp2568 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2569 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2567, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2568);
panda$core$String* $tmp2570 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2569);
panda$collections$Array$add$panda$collections$Array$T($tmp2566, ((panda$core$Object*) $tmp2570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing REF($74:panda.core.String)
// line 1407
goto block4;
block6:;
// line 1409
panda$core$Matcher* $tmp2571 = *(&local1);
panda$core$String$Index $tmp2572;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2572, $tmp2571);
*(&local5) = $tmp2572;
// line 1410
panda$collections$Array* $tmp2573 = *(&local0);
panda$core$String$Index $tmp2574 = *(&local2);
panda$core$String$Index $tmp2575 = *(&local5);
panda$core$Bit $tmp2576 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2577 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2574, $tmp2575, $tmp2576);
panda$core$String* $tmp2578 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2577);
panda$collections$Array$add$panda$collections$Array$T($tmp2573, ((panda$core$Object*) $tmp2578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing REF($93:panda.core.String)
// line 1411
panda$core$String$Index $tmp2579 = *(&local5);
panda$core$Int64 $tmp2580 = $tmp2579.value;
panda$core$Matcher* $tmp2581 = *(&local1);
panda$core$String$Index $tmp2582;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp2582, $tmp2581);
panda$core$Int64 $tmp2583 = $tmp2582.value;
panda$core$Int64 $tmp2584 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp2580, $tmp2583);
panda$core$String$Index $tmp2585 = panda$core$String$Index$init$panda$core$Int64($tmp2584);
*(&local2) = $tmp2585;
goto block3;
block4:;
// line 1413
panda$collections$Array* $tmp2586 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
panda$core$Matcher* $tmp2587 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$collections$Array* $tmp2588 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2586;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1426
panda$core$Int64 $tmp2589 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2590 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2589);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2590;

}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 1437
panda$core$Int64* $tmp2591 = &param0->_length;
panda$core$Int64 $tmp2592 = *$tmp2591;
panda$core$Int64 $tmp2593 = (panda$core$Int64) {0};
panda$core$Bit $tmp2594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2592, $tmp2593);
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block1; else goto block2;
block1:;
// line 1438
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1440
panda$core$Int64 $tmp2596 = (panda$core$Int64) {0};
*(&local0) = $tmp2596;
// line 1441
// line 1442
panda$core$Char8** $tmp2597 = &param0->data;
panda$core$Char8* $tmp2598 = *$tmp2597;
panda$core$Int64 $tmp2599 = (panda$core$Int64) {0};
int64_t $tmp2600 = $tmp2599.value;
panda$core$Char8 $tmp2601 = $tmp2598[$tmp2600];
panda$core$UInt8 $tmp2602 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2603 = panda$core$Char8$init$panda$core$UInt8($tmp2602);
panda$core$Bit $tmp2604 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2601, $tmp2603);
bool $tmp2605 = $tmp2604.value;
if ($tmp2605) goto block3; else goto block5;
block3:;
// line 1443
panda$core$Int64 $tmp2606 = (panda$core$Int64) {1};
*(&local1) = $tmp2606;
goto block4;
block5:;
// line 1
// line 1446
panda$core$Int64 $tmp2607 = (panda$core$Int64) {0};
*(&local1) = $tmp2607;
goto block4;
block4:;
// line 1448
panda$core$Int64 $tmp2608 = *(&local1);
panda$core$Int64* $tmp2609 = &param0->_length;
panda$core$Int64 $tmp2610 = *$tmp2609;
panda$core$Bit $tmp2611 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2612 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2608, $tmp2610, $tmp2611);
panda$core$Int64 $tmp2613 = $tmp2612.min;
*(&local2) = $tmp2613;
panda$core$Int64 $tmp2614 = $tmp2612.max;
panda$core$Bit $tmp2615 = $tmp2612.inclusive;
bool $tmp2616 = $tmp2615.value;
panda$core$Int64 $tmp2617 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2618 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2617);
if ($tmp2616) goto block9; else goto block10;
block9:;
int64_t $tmp2619 = $tmp2613.value;
int64_t $tmp2620 = $tmp2614.value;
bool $tmp2621 = $tmp2619 <= $tmp2620;
panda$core$Bit $tmp2622 = (panda$core$Bit) {$tmp2621};
bool $tmp2623 = $tmp2622.value;
if ($tmp2623) goto block6; else goto block7;
block10:;
int64_t $tmp2624 = $tmp2613.value;
int64_t $tmp2625 = $tmp2614.value;
bool $tmp2626 = $tmp2624 < $tmp2625;
panda$core$Bit $tmp2627 = (panda$core$Bit) {$tmp2626};
bool $tmp2628 = $tmp2627.value;
if ($tmp2628) goto block6; else goto block7;
block6:;
// line 1449
panda$core$Char8** $tmp2629 = &param0->data;
panda$core$Char8* $tmp2630 = *$tmp2629;
panda$core$Int64 $tmp2631 = *(&local2);
int64_t $tmp2632 = $tmp2631.value;
panda$core$Char8 $tmp2633 = $tmp2630[$tmp2632];
uint8_t $tmp2634 = $tmp2633.value;
panda$core$Int64 $tmp2635 = (panda$core$Int64) {((int64_t) $tmp2634)};
panda$core$Int64 $tmp2636 = (panda$core$Int64) {48};
int64_t $tmp2637 = $tmp2635.value;
int64_t $tmp2638 = $tmp2636.value;
int64_t $tmp2639 = $tmp2637 - $tmp2638;
panda$core$Int64 $tmp2640 = (panda$core$Int64) {$tmp2639};
*(&local3) = $tmp2640;
// line 1450
panda$core$Int64 $tmp2641 = *(&local3);
panda$core$Int64 $tmp2642 = (panda$core$Int64) {0};
int64_t $tmp2643 = $tmp2641.value;
int64_t $tmp2644 = $tmp2642.value;
bool $tmp2645 = $tmp2643 < $tmp2644;
panda$core$Bit $tmp2646 = (panda$core$Bit) {$tmp2645};
bool $tmp2647 = $tmp2646.value;
if ($tmp2647) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2646;
goto block15;
block14:;
panda$core$Int64 $tmp2648 = *(&local3);
panda$core$Int64 $tmp2649 = (panda$core$Int64) {9};
int64_t $tmp2650 = $tmp2648.value;
int64_t $tmp2651 = $tmp2649.value;
bool $tmp2652 = $tmp2650 > $tmp2651;
panda$core$Bit $tmp2653 = (panda$core$Bit) {$tmp2652};
*(&local4) = $tmp2653;
goto block15;
block15:;
panda$core$Bit $tmp2654 = *(&local4);
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block11; else goto block12;
block11:;
// line 1451
return ((panda$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1453
panda$core$Int64 $tmp2656 = *(&local0);
panda$core$Int64 $tmp2657 = (panda$core$Int64) {10};
int64_t $tmp2658 = $tmp2656.value;
int64_t $tmp2659 = $tmp2657.value;
int64_t $tmp2660 = $tmp2658 * $tmp2659;
panda$core$Int64 $tmp2661 = (panda$core$Int64) {$tmp2660};
panda$core$Int64 $tmp2662 = *(&local3);
int64_t $tmp2663 = $tmp2661.value;
int64_t $tmp2664 = $tmp2662.value;
int64_t $tmp2665 = $tmp2663 + $tmp2664;
panda$core$Int64 $tmp2666 = (panda$core$Int64) {$tmp2665};
*(&local0) = $tmp2666;
goto block8;
block8:;
panda$core$Int64 $tmp2667 = *(&local2);
int64_t $tmp2668 = $tmp2614.value;
int64_t $tmp2669 = $tmp2667.value;
int64_t $tmp2670 = $tmp2668 - $tmp2669;
panda$core$Int64 $tmp2671 = (panda$core$Int64) {$tmp2670};
panda$core$UInt64 $tmp2672 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2671);
if ($tmp2616) goto block17; else goto block18;
block17:;
uint64_t $tmp2673 = $tmp2672.value;
uint64_t $tmp2674 = $tmp2618.value;
bool $tmp2675 = $tmp2673 >= $tmp2674;
panda$core$Bit $tmp2676 = (panda$core$Bit) {$tmp2675};
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block16; else goto block7;
block18:;
uint64_t $tmp2678 = $tmp2672.value;
uint64_t $tmp2679 = $tmp2618.value;
bool $tmp2680 = $tmp2678 > $tmp2679;
panda$core$Bit $tmp2681 = (panda$core$Bit) {$tmp2680};
bool $tmp2682 = $tmp2681.value;
if ($tmp2682) goto block16; else goto block7;
block16:;
int64_t $tmp2683 = $tmp2667.value;
int64_t $tmp2684 = $tmp2617.value;
int64_t $tmp2685 = $tmp2683 + $tmp2684;
panda$core$Int64 $tmp2686 = (panda$core$Int64) {$tmp2685};
*(&local2) = $tmp2686;
goto block6;
block7:;
// line 1455
panda$core$Char8** $tmp2687 = &param0->data;
panda$core$Char8* $tmp2688 = *$tmp2687;
panda$core$Int64 $tmp2689 = (panda$core$Int64) {0};
int64_t $tmp2690 = $tmp2689.value;
panda$core$Char8 $tmp2691 = $tmp2688[$tmp2690];
panda$core$UInt8 $tmp2692 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2693 = panda$core$Char8$init$panda$core$UInt8($tmp2692);
panda$core$Bit $tmp2694 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2691, $tmp2693);
bool $tmp2695 = $tmp2694.value;
if ($tmp2695) goto block19; else goto block20;
block19:;
// line 1456
panda$core$Int64 $tmp2696 = *(&local0);
panda$core$Int64 $tmp2697 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2696);
*(&local0) = $tmp2697;
goto block20;
block20:;
// line 1458
panda$core$Int64 $tmp2698 = *(&local0);
return ((panda$core$Int64$nullable) { $tmp2698, true });

}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* param0) {

panda$core$UInt64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$Bit local3;
// line 1468
panda$core$Int64* $tmp2699 = &param0->_length;
panda$core$Int64 $tmp2700 = *$tmp2699;
panda$core$Int64 $tmp2701 = (panda$core$Int64) {0};
panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2700, $tmp2701);
bool $tmp2703 = $tmp2702.value;
if ($tmp2703) goto block1; else goto block2;
block1:;
// line 1469
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1471
panda$core$UInt64 $tmp2704 = (panda$core$UInt64) {0};
*(&local0) = $tmp2704;
// line 1472
panda$core$Int64 $tmp2705 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2706 = &param0->_length;
panda$core$Int64 $tmp2707 = *$tmp2706;
panda$core$Bit $tmp2708 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2709 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2705, $tmp2707, $tmp2708);
panda$core$Int64 $tmp2710 = $tmp2709.min;
*(&local1) = $tmp2710;
panda$core$Int64 $tmp2711 = $tmp2709.max;
panda$core$Bit $tmp2712 = $tmp2709.inclusive;
bool $tmp2713 = $tmp2712.value;
panda$core$Int64 $tmp2714 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2715 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2714);
if ($tmp2713) goto block6; else goto block7;
block6:;
int64_t $tmp2716 = $tmp2710.value;
int64_t $tmp2717 = $tmp2711.value;
bool $tmp2718 = $tmp2716 <= $tmp2717;
panda$core$Bit $tmp2719 = (panda$core$Bit) {$tmp2718};
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block3; else goto block4;
block7:;
int64_t $tmp2721 = $tmp2710.value;
int64_t $tmp2722 = $tmp2711.value;
bool $tmp2723 = $tmp2721 < $tmp2722;
panda$core$Bit $tmp2724 = (panda$core$Bit) {$tmp2723};
bool $tmp2725 = $tmp2724.value;
if ($tmp2725) goto block3; else goto block4;
block3:;
// line 1473
panda$core$Char8** $tmp2726 = &param0->data;
panda$core$Char8* $tmp2727 = *$tmp2726;
panda$core$Int64 $tmp2728 = *(&local1);
int64_t $tmp2729 = $tmp2728.value;
panda$core$Char8 $tmp2730 = $tmp2727[$tmp2729];
uint8_t $tmp2731 = $tmp2730.value;
panda$core$UInt64 $tmp2732 = (panda$core$UInt64) {((uint64_t) $tmp2731)};
panda$core$UInt64 $tmp2733 = (panda$core$UInt64) {48};
uint64_t $tmp2734 = $tmp2732.value;
uint64_t $tmp2735 = $tmp2733.value;
uint64_t $tmp2736 = $tmp2734 - $tmp2735;
panda$core$UInt64 $tmp2737 = (panda$core$UInt64) {$tmp2736};
*(&local2) = $tmp2737;
// line 1474
panda$core$UInt64 $tmp2738 = *(&local2);
panda$core$UInt64 $tmp2739 = (panda$core$UInt64) {0};
uint64_t $tmp2740 = $tmp2738.value;
uint64_t $tmp2741 = $tmp2739.value;
bool $tmp2742 = $tmp2740 < $tmp2741;
panda$core$Bit $tmp2743 = (panda$core$Bit) {$tmp2742};
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2743;
goto block12;
block11:;
panda$core$UInt64 $tmp2745 = *(&local2);
panda$core$UInt64 $tmp2746 = (panda$core$UInt64) {9};
uint64_t $tmp2747 = $tmp2745.value;
uint64_t $tmp2748 = $tmp2746.value;
bool $tmp2749 = $tmp2747 > $tmp2748;
panda$core$Bit $tmp2750 = (panda$core$Bit) {$tmp2749};
*(&local3) = $tmp2750;
goto block12;
block12:;
panda$core$Bit $tmp2751 = *(&local3);
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block8; else goto block9;
block8:;
// line 1475
return ((panda$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1477
panda$core$UInt64 $tmp2753 = *(&local0);
panda$core$UInt64 $tmp2754 = (panda$core$UInt64) {10};
uint64_t $tmp2755 = $tmp2753.value;
uint64_t $tmp2756 = $tmp2754.value;
uint64_t $tmp2757 = $tmp2755 * $tmp2756;
panda$core$UInt64 $tmp2758 = (panda$core$UInt64) {$tmp2757};
panda$core$UInt64 $tmp2759 = *(&local2);
uint64_t $tmp2760 = $tmp2758.value;
uint64_t $tmp2761 = $tmp2759.value;
uint64_t $tmp2762 = $tmp2760 + $tmp2761;
panda$core$UInt64 $tmp2763 = (panda$core$UInt64) {$tmp2762};
*(&local0) = $tmp2763;
goto block5;
block5:;
panda$core$Int64 $tmp2764 = *(&local1);
int64_t $tmp2765 = $tmp2711.value;
int64_t $tmp2766 = $tmp2764.value;
int64_t $tmp2767 = $tmp2765 - $tmp2766;
panda$core$Int64 $tmp2768 = (panda$core$Int64) {$tmp2767};
panda$core$UInt64 $tmp2769 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2768);
if ($tmp2713) goto block14; else goto block15;
block14:;
uint64_t $tmp2770 = $tmp2769.value;
uint64_t $tmp2771 = $tmp2715.value;
bool $tmp2772 = $tmp2770 >= $tmp2771;
panda$core$Bit $tmp2773 = (panda$core$Bit) {$tmp2772};
bool $tmp2774 = $tmp2773.value;
if ($tmp2774) goto block13; else goto block4;
block15:;
uint64_t $tmp2775 = $tmp2769.value;
uint64_t $tmp2776 = $tmp2715.value;
bool $tmp2777 = $tmp2775 > $tmp2776;
panda$core$Bit $tmp2778 = (panda$core$Bit) {$tmp2777};
bool $tmp2779 = $tmp2778.value;
if ($tmp2779) goto block13; else goto block4;
block13:;
int64_t $tmp2780 = $tmp2764.value;
int64_t $tmp2781 = $tmp2714.value;
int64_t $tmp2782 = $tmp2780 + $tmp2781;
panda$core$Int64 $tmp2783 = (panda$core$Int64) {$tmp2782};
*(&local1) = $tmp2783;
goto block3;
block4:;
// line 1479
panda$core$UInt64 $tmp2784 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp2784, true });

}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* param0) {

// line 1489
panda$core$Real64 $tmp2785;
panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp2785, param0);
return ((panda$core$Real64$nullable) { $tmp2785, true });

}
panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1497
panda$core$Int64 $tmp2786 = (panda$core$Int64) {1};
*(&local0) = $tmp2786;
// line 1498
panda$core$Int64 $tmp2787 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2788 = &param0->_length;
panda$core$Int64 $tmp2789 = *$tmp2788;
panda$core$Bit $tmp2790 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2791 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2787, $tmp2789, $tmp2790);
panda$core$Int64 $tmp2792 = $tmp2791.min;
*(&local1) = $tmp2792;
panda$core$Int64 $tmp2793 = $tmp2791.max;
panda$core$Bit $tmp2794 = $tmp2791.inclusive;
bool $tmp2795 = $tmp2794.value;
panda$core$Int64 $tmp2796 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2797 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2796);
if ($tmp2795) goto block4; else goto block5;
block4:;
int64_t $tmp2798 = $tmp2792.value;
int64_t $tmp2799 = $tmp2793.value;
bool $tmp2800 = $tmp2798 <= $tmp2799;
panda$core$Bit $tmp2801 = (panda$core$Bit) {$tmp2800};
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block1; else goto block2;
block5:;
int64_t $tmp2803 = $tmp2792.value;
int64_t $tmp2804 = $tmp2793.value;
bool $tmp2805 = $tmp2803 < $tmp2804;
panda$core$Bit $tmp2806 = (panda$core$Bit) {$tmp2805};
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block1; else goto block2;
block1:;
// line 1499
panda$core$Int64 $tmp2808 = *(&local0);
panda$core$Int64 $tmp2809 = (panda$core$Int64) {101};
int64_t $tmp2810 = $tmp2808.value;
int64_t $tmp2811 = $tmp2809.value;
int64_t $tmp2812 = $tmp2810 * $tmp2811;
panda$core$Int64 $tmp2813 = (panda$core$Int64) {$tmp2812};
panda$core$Char8** $tmp2814 = &param0->data;
panda$core$Char8* $tmp2815 = *$tmp2814;
panda$core$Int64 $tmp2816 = *(&local1);
int64_t $tmp2817 = $tmp2816.value;
panda$core$Char8 $tmp2818 = $tmp2815[$tmp2817];
uint8_t $tmp2819 = $tmp2818.value;
panda$core$Int64 $tmp2820 = (panda$core$Int64) {((int64_t) $tmp2819)};
int64_t $tmp2821 = $tmp2813.value;
int64_t $tmp2822 = $tmp2820.value;
int64_t $tmp2823 = $tmp2821 + $tmp2822;
panda$core$Int64 $tmp2824 = (panda$core$Int64) {$tmp2823};
*(&local0) = $tmp2824;
goto block3;
block3:;
panda$core$Int64 $tmp2825 = *(&local1);
int64_t $tmp2826 = $tmp2793.value;
int64_t $tmp2827 = $tmp2825.value;
int64_t $tmp2828 = $tmp2826 - $tmp2827;
panda$core$Int64 $tmp2829 = (panda$core$Int64) {$tmp2828};
panda$core$UInt64 $tmp2830 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2829);
if ($tmp2795) goto block7; else goto block8;
block7:;
uint64_t $tmp2831 = $tmp2830.value;
uint64_t $tmp2832 = $tmp2797.value;
bool $tmp2833 = $tmp2831 >= $tmp2832;
panda$core$Bit $tmp2834 = (panda$core$Bit) {$tmp2833};
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block6; else goto block2;
block8:;
uint64_t $tmp2836 = $tmp2830.value;
uint64_t $tmp2837 = $tmp2797.value;
bool $tmp2838 = $tmp2836 > $tmp2837;
panda$core$Bit $tmp2839 = (panda$core$Bit) {$tmp2838};
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block6; else goto block2;
block6:;
int64_t $tmp2841 = $tmp2825.value;
int64_t $tmp2842 = $tmp2796.value;
int64_t $tmp2843 = $tmp2841 + $tmp2842;
panda$core$Int64 $tmp2844 = (panda$core$Int64) {$tmp2843};
*(&local1) = $tmp2844;
goto block1;
block2:;
// line 1510
panda$core$Int64 $tmp2845 = *(&local0);
return $tmp2845;

}

