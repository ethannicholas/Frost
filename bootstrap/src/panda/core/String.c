#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
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
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn327)(panda$core$Object*);
typedef panda$core$String* (*$fn419)(panda$core$Object*);
typedef panda$core$Object* (*$fn1150)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn1151)(panda$core$String*);
typedef panda$core$String* (*$fn1152)(panda$core$Object*);
typedef panda$core$Object* (*$fn1212)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1213)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1214)(panda$core$Object*);
typedef panda$core$Int64 (*$fn1464)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1513)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    panda$core$Int64 $tmp2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->_hash = $tmp2;
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp3 = self->owner;
        $tmp4 = NULL;
        self->owner = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    panda$core$Int64 $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->_hash = $tmp5;
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp6 = self->owner;
        $tmp7 = p_owner;
        self->owner = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Int64 $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT $tmp13;
    panda$core$Int64 $tmp14;
    panda$core$Bit $tmp15;
    panda$core$Object* $tmp29;
    panda$core$String* $tmp40;
    panda$core$String* $tmp41;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp8, 0);
    self->_hash = $tmp8;
    ITable* $tmp9 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[0];
    panda$core$Int64 $tmp12 = $tmp10(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp12;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp14, 0);
    panda$core$Bit$init$builtin_bit(&$tmp15, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp13, $tmp14, self->_length, $tmp15);
    int64_t $tmp17 = $tmp13.min.value;
    panda$core$Int64 i16 = { $tmp17 };
    int64_t $tmp19 = $tmp13.max.value;
    bool $tmp20 = $tmp13.inclusive.value;
    if ($tmp20) goto $l27; else goto $l28;
    $l27:;
    if ($tmp17 <= $tmp19) goto $l21; else goto $l23;
    $l28:;
    if ($tmp17 < $tmp19) goto $l21; else goto $l23;
    $l21:;
    {
        ITable* $tmp30 = p_chars->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$core$Object* $tmp33 = $tmp31(p_chars, i16);
        $tmp29 = $tmp33;
        self->data[i16.value] = ((panda$core$Char8$wrapper*) $tmp29)->value;
        panda$core$Panda$unref$panda$core$Object($tmp29);
    }
    $l24:;
    int64_t $tmp35 = $tmp19 - i16.value;
    if ($tmp20) goto $l36; else goto $l37;
    $l36:;
    if ((uint64_t) $tmp35 >= 1) goto $l34; else goto $l23;
    $l37:;
    if ((uint64_t) $tmp35 > 1) goto $l34; else goto $l23;
    $l34:;
    i16.value += 1;
    goto $l21;
    $l23:;
    {
        $tmp40 = self->owner;
        $tmp41 = NULL;
        self->owner = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue42;
    panda$core$String* $tmp43;
    $tmp43 = self;
    $returnValue42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $returnValue42;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$376_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$381$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$382_2192;
    panda$core$Char8 $tmp93;
    panda$core$UInt8 $tmp94;
    panda$core$Char8 $tmp97;
    panda$core$UInt8 $tmp98;
    panda$core$Char8 $tmp101;
    panda$core$UInt8 $tmp102;
    panda$core$Char8 $tmp105;
    panda$core$UInt8 $tmp106;
    panda$core$Char8 $tmp109;
    panda$core$UInt8 $tmp110;
    panda$core$UInt8 $tmp115;
    panda$core$UInt8 $tmp119;
    panda$core$Char8 $tmp122;
    panda$core$UInt8 $tmp123;
    panda$core$Char8 $tmp125;
    panda$core$UInt8 $tmp126;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$Bit $tmp134;
    int $tmp47;
    {
        $tmp49 = p_fmt;
        $match$376_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$376_948, &$s50);
        if ($tmp51.value) {
        {
            $tmp53 = self;
            $returnValue52 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            $tmp47 = 0;
            goto $l45;
            $l54:;
            return $returnValue52;
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$376_948, &$s56);
        if ($tmp57.value) {
        {
            int $tmp60;
            {
                panda$core$MutableString* $tmp64 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp64, &$s65);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                result61 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                {
                    int $tmp68;
                    {
                        panda$collections$ListView* $tmp73 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(self);
                        $tmp72 = $tmp73;
                        ITable* $tmp74 = ((panda$collections$Iterable*) $tmp72)->$class->itable;
                        while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp74 = $tmp74->next;
                        }
                        $fn76 $tmp75 = $tmp74->methods[0];
                        panda$collections$Iterator* $tmp77 = $tmp75(((panda$collections$Iterable*) $tmp72));
                        $tmp71 = $tmp77;
                        $tmp70 = $tmp71;
                        Iter$381$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$381$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$381$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$381$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$381$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp87);
                            {
                                $match$382_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp109);
                                if ($tmp111.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s112);
                                }
                                }
                                else {
                                {
                                    panda$core$UInt8 $tmp114 = panda$core$Char8$convert$R$panda$core$UInt8(c86);
                                    panda$core$UInt8$init$builtin_uint8(&$tmp115, 32);
                                    panda$core$Bit $tmp116 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit($tmp114, $tmp115);
                                    bool $tmp113 = $tmp116.value;
                                    if (!$tmp113) goto $l117;
                                    panda$core$UInt8 $tmp118 = panda$core$Char8$convert$R$panda$core$UInt8(c86);
                                    panda$core$UInt8$init$builtin_uint8(&$tmp119, 126);
                                    panda$core$Bit $tmp120 = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit($tmp118, $tmp119);
                                    $tmp113 = $tmp120.value;
                                    $l117:;
                                    panda$core$Bit $tmp121 = { $tmp113 };
                                    if ($tmp121.value) {
                                    {
                                        panda$core$MutableString$append$panda$core$Char8(result61, c86);
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$UInt8$init$builtin_uint8(&$tmp123, 63);
                                        panda$core$Char8$init$panda$core$UInt8(&$tmp122, $tmp123);
                                        panda$core$MutableString$append$panda$core$Char8(result61, $tmp122);
                                    }
                                    }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                        }
                        goto $l78;
                        $l79:;
                    }
                    $tmp68 = -1;
                    goto $l66;
                    $l66:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$381$1769));
                    Iter$381$1769 = NULL;
                    switch ($tmp68) {
                        case -1: goto $l124;
                    }
                    $l124:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp126, 34);
                panda$core$Char8$init$panda$core$UInt8(&$tmp125, $tmp126);
                panda$core$MutableString$append$panda$core$Char8(result61, $tmp125);
                panda$core$String* $tmp129 = panda$core$MutableString$finish$R$panda$core$String(result61);
                $tmp128 = $tmp129;
                $tmp127 = $tmp128;
                $returnValue52 = $tmp127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                $tmp60 = 0;
                goto $l58;
                $l130:;
                $tmp47 = 1;
                goto $l45;
                $l131:;
                return $returnValue52;
            }
            $l58:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result61));
            result61 = NULL;
            switch ($tmp60) {
                case 0: goto $l130;
            }
            $l133:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp134, false);
            if ($tmp134.value) goto $l135; else goto $l136;
            $l136:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 402 });
            abort();
            $l135:;
        }
        }
        }
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
    switch ($tmp47) {
        case 1: goto $l131;
        case 0: goto $l54;
        case -1: goto $l138;
    }
    $l138:;
    abort();
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp141;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp141 = -1;
    goto $l139;
    $l139:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp141) {
        case -1: goto $l142;
    }
    $l142:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $returnValue143;
    panda$collections$ListView* $tmp144;
    panda$core$String$UTF8List* $tmp145;
    panda$core$String$UTF8List* $tmp146 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp146, self);
    $tmp145 = $tmp146;
    $tmp144 = ((panda$collections$ListView*) $tmp145);
    $returnValue143 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    return $returnValue143;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue148;
    panda$collections$Iterator* $tmp149;
    panda$core$String$UTF16Iterator* $tmp150;
    panda$core$String$UTF16Iterator* $tmp151 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp151, self);
    $tmp150 = $tmp151;
    $tmp149 = ((panda$collections$Iterator*) $tmp150);
    $returnValue148 = $tmp149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    return $returnValue148;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue153;
    panda$collections$Iterator* $tmp154;
    panda$core$String$UTF32Iterator* $tmp155;
    panda$core$String$UTF32Iterator* $tmp156 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp156, self);
    $tmp155 = $tmp156;
    $tmp154 = ((panda$collections$Iterator*) $tmp155);
    $returnValue153 = $tmp154;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    return $returnValue153;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue158;
    panda$collections$Iterator* $tmp159;
    panda$collections$Iterator* $tmp160 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    $tmp159 = $tmp160;
    ITable* $tmp161 = $tmp159->$class->itable;
    while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp161 = $tmp161->next;
    }
    $fn163 $tmp162 = $tmp161->methods[2];
    panda$core$Int64 $tmp164 = $tmp162($tmp159);
    $returnValue158 = $tmp164;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    return $returnValue158;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue166;
    $returnValue166 = self->_length;
    return $returnValue166;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue169;
    panda$core$Bit $tmp170;
    panda$core$Range$LTpanda$core$Int64$GT $tmp172;
    panda$core$Int64 $tmp173;
    panda$core$Bit $tmp174;
    panda$core$Bit $tmp189;
    panda$core$Bit $tmp197;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp168.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp170, false);
        $returnValue169 = $tmp170;
        return $returnValue169;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp173, 0);
    panda$core$Bit$init$builtin_bit(&$tmp174, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp172, $tmp173, p_other->_length, $tmp174);
    int64_t $tmp176 = $tmp172.min.value;
    panda$core$Int64 i175 = { $tmp176 };
    int64_t $tmp178 = $tmp172.max.value;
    bool $tmp179 = $tmp172.inclusive.value;
    if ($tmp179) goto $l186; else goto $l187;
    $l186:;
    if ($tmp176 <= $tmp178) goto $l180; else goto $l182;
    $l187:;
    if ($tmp176 < $tmp178) goto $l180; else goto $l182;
    $l180:;
    {
        panda$core$Bit $tmp188 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i175.value], p_other->data[i175.value]);
        if ($tmp188.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp189, false);
            $returnValue169 = $tmp189;
            return $returnValue169;
        }
        }
    }
    $l183:;
    int64_t $tmp192 = $tmp178 - i175.value;
    if ($tmp179) goto $l193; else goto $l194;
    $l193:;
    if ((uint64_t) $tmp192 >= 1) goto $l191; else goto $l182;
    $l194:;
    if ((uint64_t) $tmp192 > 1) goto $l191; else goto $l182;
    $l191:;
    i175.value += 1;
    goto $l180;
    $l182:;
    panda$core$Bit$init$builtin_bit(&$tmp197, true);
    $returnValue169 = $tmp197;
    return $returnValue169;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue200;
    panda$core$Bit $tmp201;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    panda$core$Int64 $tmp204;
    panda$core$Bit $tmp205;
    panda$core$Bit $tmp222;
    panda$core$Bit $tmp230;
    panda$core$Bit $tmp199 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp199.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp201, false);
        $returnValue200 = $tmp201;
        return $returnValue200;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp204, 0);
    panda$core$Bit$init$builtin_bit(&$tmp205, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, $tmp204, p_other->_length, $tmp205);
    int64_t $tmp207 = $tmp203.min.value;
    panda$core$Int64 i206 = { $tmp207 };
    int64_t $tmp209 = $tmp203.max.value;
    bool $tmp210 = $tmp203.inclusive.value;
    if ($tmp210) goto $l217; else goto $l218;
    $l217:;
    if ($tmp207 <= $tmp209) goto $l211; else goto $l213;
    $l218:;
    if ($tmp207 < $tmp209) goto $l211; else goto $l213;
    $l211:;
    {
        panda$core$Int64 $tmp219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp219, i206);
        panda$core$Bit $tmp221 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp220.value], p_other->data[i206.value]);
        if ($tmp221.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp222, false);
            $returnValue200 = $tmp222;
            return $returnValue200;
        }
        }
    }
    $l214:;
    int64_t $tmp225 = $tmp209 - i206.value;
    if ($tmp210) goto $l226; else goto $l227;
    $l226:;
    if ((uint64_t) $tmp225 >= 1) goto $l224; else goto $l213;
    $l227:;
    if ((uint64_t) $tmp225 > 1) goto $l224; else goto $l213;
    $l224:;
    i206.value += 1;
    goto $l211;
    $l213:;
    panda$core$Bit$init$builtin_bit(&$tmp230, true);
    $returnValue200 = $tmp230;
    return $returnValue200;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 $tmp232;
    panda$core$String* $returnValue234;
    panda$core$String* $tmp235;
    panda$core$Int64 start237;
    panda$core$Int64 $tmp238;
    panda$core$Int64 $tmp247;
    panda$core$Int64 end249;
    panda$core$Int64 $tmp250;
    panda$core$Int64 $tmp260;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp264;
    panda$core$String$Index $tmp265;
    panda$core$String$Index $tmp266;
    panda$core$Bit $tmp267;
    panda$core$Int64$init$builtin_int64(&$tmp232, 0);
    panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp232);
    if ($tmp233.value) {
    {
        $tmp235 = self;
        $returnValue234 = $tmp235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
        return $returnValue234;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp238, 0);
    start237 = $tmp238;
    $l239:;
    panda$core$Bit $tmp243 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start237, self->_length);
    bool $tmp242 = $tmp243.value;
    if (!$tmp242) goto $l244;
    panda$core$Bit $tmp245 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start237.value]);
    $tmp242 = $tmp245.value;
    $l244:;
    panda$core$Bit $tmp246 = { $tmp242 };
    bool $tmp241 = $tmp246.value;
    if (!$tmp241) goto $l240;
    {
        panda$core$Int64$init$builtin_int64(&$tmp247, 1);
        panda$core$Int64 $tmp248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start237, $tmp247);
        start237 = $tmp248;
    }
    goto $l239;
    $l240:;
    panda$core$Int64$init$builtin_int64(&$tmp250, 1);
    panda$core$Int64 $tmp251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp250);
    end249 = $tmp251;
    $l252:;
    panda$core$Bit $tmp256 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end249, start237);
    bool $tmp255 = $tmp256.value;
    if (!$tmp255) goto $l257;
    panda$core$Bit $tmp258 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end249.value]);
    $tmp255 = $tmp258.value;
    $l257:;
    panda$core$Bit $tmp259 = { $tmp255 };
    bool $tmp254 = $tmp259.value;
    if (!$tmp254) goto $l253;
    {
        panda$core$Int64$init$builtin_int64(&$tmp260, 1);
        panda$core$Int64 $tmp261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end249, $tmp260);
        end249 = $tmp261;
    }
    goto $l252;
    $l253:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp265, start237);
    panda$core$String$Index$init$panda$core$Int64(&$tmp266, end249);
    panda$core$Bit$init$builtin_bit(&$tmp267, true);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp264, $tmp265, $tmp266, $tmp267);
    panda$core$String* $tmp268 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp264);
    $tmp263 = $tmp268;
    $tmp262 = $tmp263;
    $returnValue234 = $tmp262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    return $returnValue234;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp272;
    panda$core$Int64 $tmp273;
    panda$core$Bit $tmp274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp294;
    panda$core$Int64 $tmp295;
    panda$core$Bit $tmp296;
    panda$core$String* $returnValue317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result270 = ((panda$core$Char8*) pandaZAlloc($tmp271.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp273, 0);
    panda$core$Bit$init$builtin_bit(&$tmp274, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp272, $tmp273, self->_length, $tmp274);
    int64_t $tmp276 = $tmp272.min.value;
    panda$core$Int64 i275 = { $tmp276 };
    int64_t $tmp278 = $tmp272.max.value;
    bool $tmp279 = $tmp272.inclusive.value;
    if ($tmp279) goto $l286; else goto $l287;
    $l286:;
    if ($tmp276 <= $tmp278) goto $l280; else goto $l282;
    $l287:;
    if ($tmp276 < $tmp278) goto $l280; else goto $l282;
    $l280:;
    {
        result270[i275.value] = self->data[i275.value];
    }
    $l283:;
    int64_t $tmp289 = $tmp278 - i275.value;
    if ($tmp279) goto $l290; else goto $l291;
    $l290:;
    if ((uint64_t) $tmp289 >= 1) goto $l288; else goto $l282;
    $l291:;
    if ((uint64_t) $tmp289 > 1) goto $l288; else goto $l282;
    $l288:;
    i275.value += 1;
    goto $l280;
    $l282:;
    panda$core$Int64$init$builtin_int64(&$tmp295, 0);
    panda$core$Bit$init$builtin_bit(&$tmp296, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp294, $tmp295, p_other->_length, $tmp296);
    int64_t $tmp298 = $tmp294.min.value;
    panda$core$Int64 i297 = { $tmp298 };
    int64_t $tmp300 = $tmp294.max.value;
    bool $tmp301 = $tmp294.inclusive.value;
    if ($tmp301) goto $l308; else goto $l309;
    $l308:;
    if ($tmp298 <= $tmp300) goto $l302; else goto $l304;
    $l309:;
    if ($tmp298 < $tmp300) goto $l302; else goto $l304;
    $l302:;
    {
        panda$core$Int64 $tmp310 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i297);
        result270[$tmp310.value] = p_other->data[i297.value];
    }
    $l305:;
    int64_t $tmp312 = $tmp300 - i297.value;
    if ($tmp301) goto $l313; else goto $l314;
    $l313:;
    if ((uint64_t) $tmp312 >= 1) goto $l311; else goto $l304;
    $l314:;
    if ((uint64_t) $tmp312 > 1) goto $l311; else goto $l304;
    $l311:;
    i297.value += 1;
    goto $l302;
    $l304:;
    panda$core$String* $tmp320 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp320, result270, $tmp321);
    $tmp319 = $tmp320;
    $tmp318 = $tmp319;
    $returnValue317 = $tmp318;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    return $returnValue317;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$String* $tmp328 = (($fn327) p_other->$class->vtable[0])(p_other);
    $tmp326 = $tmp328;
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp326);
    $tmp325 = $tmp329;
    $tmp324 = $tmp325;
    $returnValue323 = $tmp324;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    return $returnValue323;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp331;
    panda$core$MutableString* result340 = NULL;
    panda$core$MutableString* $tmp341;
    panda$core$MutableString* $tmp342;
    panda$core$Range$LTpanda$core$Int64$GT $tmp344;
    panda$core$Int64 $tmp345;
    panda$core$Bit $tmp346;
    panda$core$String* $returnValue366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$Int64$init$builtin_int64(&$tmp331, 0);
    panda$core$Bit $tmp332 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp331);
    if ($tmp332.value) goto $l333; else goto $l334;
    $l334:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, (panda$core$Int64) { 527 }, &$s336);
    abort();
    $l333:;
    int $tmp339;
    {
        panda$core$MutableString* $tmp343 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp343);
        $tmp342 = $tmp343;
        $tmp341 = $tmp342;
        result340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
        panda$core$Int64$init$builtin_int64(&$tmp345, 0);
        panda$core$Bit$init$builtin_bit(&$tmp346, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp344, $tmp345, p_count, $tmp346);
        int64_t $tmp348 = $tmp344.min.value;
        panda$core$Int64 i347 = { $tmp348 };
        int64_t $tmp350 = $tmp344.max.value;
        bool $tmp351 = $tmp344.inclusive.value;
        if ($tmp351) goto $l358; else goto $l359;
        $l358:;
        if ($tmp348 <= $tmp350) goto $l352; else goto $l354;
        $l359:;
        if ($tmp348 < $tmp350) goto $l352; else goto $l354;
        $l352:;
        {
            panda$core$MutableString$append$panda$core$String(result340, self);
        }
        $l355:;
        int64_t $tmp361 = $tmp350 - i347.value;
        if ($tmp351) goto $l362; else goto $l363;
        $l362:;
        if ((uint64_t) $tmp361 >= 1) goto $l360; else goto $l354;
        $l363:;
        if ((uint64_t) $tmp361 > 1) goto $l360; else goto $l354;
        $l360:;
        i347.value += 1;
        goto $l352;
        $l354:;
        panda$core$String* $tmp369 = panda$core$MutableString$finish$R$panda$core$String(result340);
        $tmp368 = $tmp369;
        $tmp367 = $tmp368;
        $returnValue366 = $tmp367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
        $tmp339 = 0;
        goto $l337;
        $l370:;
        return $returnValue366;
    }
    $l337:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result340));
    result340 = NULL;
    switch ($tmp339) {
        case 0: goto $l370;
    }
    $l372:;
    abort();
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 p_count, panda$core$String* p_s) {
    panda$core$Int64 $tmp373;
    panda$core$MutableString* result382 = NULL;
    panda$core$MutableString* $tmp383;
    panda$core$MutableString* $tmp384;
    panda$core$Range$LTpanda$core$Int64$GT $tmp386;
    panda$core$Int64 $tmp387;
    panda$core$Bit $tmp388;
    panda$core$String* $returnValue408;
    panda$core$String* $tmp409;
    panda$core$String* $tmp410;
    panda$core$Int64$init$builtin_int64(&$tmp373, 0);
    panda$core$Bit $tmp374 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp373);
    if ($tmp374.value) goto $l375; else goto $l376;
    $l376:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s377, (panda$core$Int64) { 540 }, &$s378);
    abort();
    $l375:;
    int $tmp381;
    {
        panda$core$MutableString* $tmp385 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp385);
        $tmp384 = $tmp385;
        $tmp383 = $tmp384;
        result382 = $tmp383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
        panda$core$Int64$init$builtin_int64(&$tmp387, 0);
        panda$core$Bit$init$builtin_bit(&$tmp388, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp386, $tmp387, p_count, $tmp388);
        int64_t $tmp390 = $tmp386.min.value;
        panda$core$Int64 i389 = { $tmp390 };
        int64_t $tmp392 = $tmp386.max.value;
        bool $tmp393 = $tmp386.inclusive.value;
        if ($tmp393) goto $l400; else goto $l401;
        $l400:;
        if ($tmp390 <= $tmp392) goto $l394; else goto $l396;
        $l401:;
        if ($tmp390 < $tmp392) goto $l394; else goto $l396;
        $l394:;
        {
            panda$core$MutableString$append$panda$core$String(result382, p_s);
        }
        $l397:;
        int64_t $tmp403 = $tmp392 - i389.value;
        if ($tmp393) goto $l404; else goto $l405;
        $l404:;
        if ((uint64_t) $tmp403 >= 1) goto $l402; else goto $l396;
        $l405:;
        if ((uint64_t) $tmp403 > 1) goto $l402; else goto $l396;
        $l402:;
        i389.value += 1;
        goto $l394;
        $l396:;
        panda$core$String* $tmp411 = panda$core$MutableString$finish$R$panda$core$String(result382);
        $tmp410 = $tmp411;
        $tmp409 = $tmp410;
        $returnValue408 = $tmp409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
        $tmp381 = 0;
        goto $l379;
        $l412:;
        return $returnValue408;
    }
    $l379:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result382));
    result382 = NULL;
    switch ($tmp381) {
        case 0: goto $l412;
    }
    $l414:;
    abort();
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp418;
    panda$core$String* $tmp420 = (($fn419) p_o->$class->vtable[0])(p_o);
    $tmp418 = $tmp420;
    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, p_s);
    $tmp417 = $tmp421;
    $tmp416 = $tmp417;
    $returnValue415 = $tmp416;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
    return $returnValue415;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue424;
    panda$core$Bit $tmp425;
    panda$core$Range$LTpanda$core$Int64$GT $tmp427;
    panda$core$Int64 $tmp428;
    panda$core$Bit $tmp429;
    panda$core$Bit $tmp444;
    panda$core$Bit $tmp452;
    panda$core$Bit $tmp423 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp423.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp425, false);
        $returnValue424 = $tmp425;
        return $returnValue424;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp428, 0);
    panda$core$Bit$init$builtin_bit(&$tmp429, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp427, $tmp428, self->_length, $tmp429);
    int64_t $tmp431 = $tmp427.min.value;
    panda$core$Int64 i430 = { $tmp431 };
    int64_t $tmp433 = $tmp427.max.value;
    bool $tmp434 = $tmp427.inclusive.value;
    if ($tmp434) goto $l441; else goto $l442;
    $l441:;
    if ($tmp431 <= $tmp433) goto $l435; else goto $l437;
    $l442:;
    if ($tmp431 < $tmp433) goto $l435; else goto $l437;
    $l435:;
    {
        panda$core$Bit $tmp443 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i430.value], p_other->data[i430.value]);
        if ($tmp443.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp444, false);
            $returnValue424 = $tmp444;
            return $returnValue424;
        }
        }
    }
    $l438:;
    int64_t $tmp447 = $tmp433 - i430.value;
    if ($tmp434) goto $l448; else goto $l449;
    $l448:;
    if ((uint64_t) $tmp447 >= 1) goto $l446; else goto $l437;
    $l449:;
    if ((uint64_t) $tmp447 > 1) goto $l446; else goto $l437;
    $l446:;
    i430.value += 1;
    goto $l435;
    $l437:;
    panda$core$Bit$init$builtin_bit(&$tmp452, true);
    $returnValue424 = $tmp452;
    return $returnValue424;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx454;
    panda$core$Char8 c455;
    panda$core$Int32 result456;
    panda$core$Bit $tmp458;
    panda$core$Char32 $returnValue461;
    panda$core$Char32 $tmp462;
    panda$core$Bit $tmp464;
    panda$core$Int64 $tmp467;
    panda$core$Int32 $tmp473;
    panda$core$Int32 $tmp475;
    panda$core$Int64 $tmp477;
    panda$core$Int32 $tmp480;
    panda$core$Char32 $tmp483;
    panda$core$Bit $tmp485;
    panda$core$Int64 $tmp488;
    panda$core$Int32 $tmp494;
    panda$core$Int32 $tmp496;
    panda$core$Int64 $tmp498;
    panda$core$Int32 $tmp501;
    panda$core$Int32 $tmp503;
    panda$core$Int64 $tmp506;
    panda$core$Int32 $tmp509;
    panda$core$Char32 $tmp512;
    panda$core$Int64 $tmp514;
    panda$core$Int32 $tmp520;
    panda$core$Int32 $tmp522;
    panda$core$Int64 $tmp524;
    panda$core$Int32 $tmp527;
    panda$core$Int32 $tmp529;
    panda$core$Int64 $tmp532;
    panda$core$Int32 $tmp535;
    panda$core$Int32 $tmp537;
    panda$core$Int64 $tmp540;
    panda$core$Int32 $tmp543;
    panda$core$Char32 $tmp546;
    idx454 = p_index.value;
    c455 = self->data[idx454.value];
    panda$core$Int32 $tmp457 = panda$core$Char8$convert$R$panda$core$Int32(c455);
    result456 = $tmp457;
    int64_t $tmp459 = ((int64_t) c455.value) & 255;
    bool $tmp460 = $tmp459 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp458, $tmp460);
    if ($tmp458.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp462, result456);
        $returnValue461 = $tmp462;
        return $returnValue461;
    }
    }
    int64_t $tmp465 = ((int64_t) c455.value) & 255;
    bool $tmp466 = $tmp465 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp464, $tmp466);
    if ($tmp464.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp467, 1);
        panda$core$Int64 $tmp468 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp467);
        panda$core$Bit $tmp469 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp468, self->_length);
        if ($tmp469.value) goto $l470; else goto $l471;
        $l471:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s472, (panda$core$Int64) { 589 });
        abort();
        $l470:;
        panda$core$Int32$init$builtin_int32(&$tmp473, 31);
        panda$core$Int32 $tmp474 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result456, $tmp473);
        panda$core$Int32$init$builtin_int32(&$tmp475, 6);
        panda$core$Int32 $tmp476 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp474, $tmp475);
        panda$core$Int64$init$builtin_int64(&$tmp477, 1);
        panda$core$Int64 $tmp478 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp477);
        panda$core$Int32 $tmp479 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp478.value]);
        panda$core$Int32$init$builtin_int32(&$tmp480, 63);
        panda$core$Int32 $tmp481 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp479, $tmp480);
        panda$core$Int32 $tmp482 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp476, $tmp481);
        result456 = $tmp482;
        panda$core$Char32$init$panda$core$Int32(&$tmp483, result456);
        $returnValue461 = $tmp483;
        return $returnValue461;
    }
    }
    int64_t $tmp486 = ((int64_t) c455.value) & 255;
    bool $tmp487 = $tmp486 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp485, $tmp487);
    if ($tmp485.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp488, 2);
        panda$core$Int64 $tmp489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp488);
        panda$core$Bit $tmp490 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp489, self->_length);
        if ($tmp490.value) goto $l491; else goto $l492;
        $l492:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s493, (panda$core$Int64) { 594 });
        abort();
        $l491:;
        panda$core$Int32$init$builtin_int32(&$tmp494, 15);
        panda$core$Int32 $tmp495 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result456, $tmp494);
        panda$core$Int32$init$builtin_int32(&$tmp496, 12);
        panda$core$Int32 $tmp497 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp495, $tmp496);
        panda$core$Int64$init$builtin_int64(&$tmp498, 1);
        panda$core$Int64 $tmp499 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp498);
        panda$core$Int32 $tmp500 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp499.value]);
        panda$core$Int32$init$builtin_int32(&$tmp501, 63);
        panda$core$Int32 $tmp502 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp500, $tmp501);
        panda$core$Int32$init$builtin_int32(&$tmp503, 6);
        panda$core$Int32 $tmp504 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp502, $tmp503);
        panda$core$Int32 $tmp505 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp497, $tmp504);
        panda$core$Int64$init$builtin_int64(&$tmp506, 2);
        panda$core$Int64 $tmp507 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp506);
        panda$core$Int32 $tmp508 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp507.value]);
        panda$core$Int32$init$builtin_int32(&$tmp509, 63);
        panda$core$Int32 $tmp510 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp508, $tmp509);
        panda$core$Int32 $tmp511 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp505, $tmp510);
        result456 = $tmp511;
        panda$core$Char32$init$panda$core$Int32(&$tmp512, result456);
        $returnValue461 = $tmp512;
        return $returnValue461;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp514, 3);
    panda$core$Int64 $tmp515 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp514);
    panda$core$Bit $tmp516 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp515, self->_length);
    if ($tmp516.value) goto $l517; else goto $l518;
    $l518:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s519, (panda$core$Int64) { 599 });
    abort();
    $l517:;
    panda$core$Int32$init$builtin_int32(&$tmp520, 7);
    panda$core$Int32 $tmp521 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result456, $tmp520);
    panda$core$Int32$init$builtin_int32(&$tmp522, 18);
    panda$core$Int32 $tmp523 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp521, $tmp522);
    panda$core$Int64$init$builtin_int64(&$tmp524, 1);
    panda$core$Int64 $tmp525 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp524);
    panda$core$Int32 $tmp526 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp525.value]);
    panda$core$Int32$init$builtin_int32(&$tmp527, 63);
    panda$core$Int32 $tmp528 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp526, $tmp527);
    panda$core$Int32$init$builtin_int32(&$tmp529, 12);
    panda$core$Int32 $tmp530 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp528, $tmp529);
    panda$core$Int32 $tmp531 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp523, $tmp530);
    panda$core$Int64$init$builtin_int64(&$tmp532, 2);
    panda$core$Int64 $tmp533 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp532);
    panda$core$Int32 $tmp534 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp533.value]);
    panda$core$Int32$init$builtin_int32(&$tmp535, 63);
    panda$core$Int32 $tmp536 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp534, $tmp535);
    panda$core$Int32$init$builtin_int32(&$tmp537, 6);
    panda$core$Int32 $tmp538 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp536, $tmp537);
    panda$core$Int32 $tmp539 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp531, $tmp538);
    panda$core$Int64$init$builtin_int64(&$tmp540, 3);
    panda$core$Int64 $tmp541 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx454, $tmp540);
    panda$core$Int32 $tmp542 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp541.value]);
    panda$core$Int32$init$builtin_int32(&$tmp543, 63);
    panda$core$Int32 $tmp544 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp542, $tmp543);
    panda$core$Int32 $tmp545 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp539, $tmp544);
    result456 = $tmp545;
    panda$core$Char32$init$panda$core$Int32(&$tmp546, result456);
    $returnValue461 = $tmp546;
    return $returnValue461;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue548;
    panda$core$String$Index $tmp549 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp550 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp549, p_index);
    panda$core$Char32 $tmp551 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp550);
    $returnValue548 = $tmp551;
    return $returnValue548;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 length553;
    panda$core$Int64 $tmp555;
    panda$core$String* $returnValue557;
    panda$core$String* $tmp558;
    panda$core$String* $tmp559;
    panda$core$Int64 $tmp554 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    length553 = $tmp554;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp555, 1);
        panda$core$Int64 $tmp556 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(length553, $tmp555);
        length553 = $tmp556;
    }
    }
    panda$core$String* $tmp560 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp560, (self->data + p_r.min.value.value), length553, self);
    $tmp559 = $tmp560;
    $tmp558 = $tmp559;
    $returnValue557 = $tmp558;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
    return $returnValue557;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min562;
    panda$core$Bit inclusive564;
    panda$core$String$Index max565;
    panda$core$Bit $tmp567;
    panda$core$String* $returnValue568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp570;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp571;
    memset(&min562, 0, sizeof(min562));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min562 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp563 = panda$core$String$start$R$panda$core$String$Index(self);
        min562 = $tmp563;
    }
    }
    inclusive564 = p_r.inclusive;
    memset(&max565, 0, sizeof(max565));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max565 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp566 = panda$core$String$end$R$panda$core$String$Index(self);
        max565 = $tmp566;
        panda$core$Bit$init$builtin_bit(&$tmp567, false);
        inclusive564 = $tmp567;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp571, min562, max565, inclusive564);
    panda$core$String* $tmp572 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp571);
    $tmp570 = $tmp572;
    $tmp569 = $tmp570;
    $returnValue568 = $tmp569;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
    return $returnValue568;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current577;
    panda$core$MutableString* result578 = NULL;
    panda$core$MutableString* $tmp579;
    panda$core$MutableString* $tmp580;
    panda$core$Int64 max582;
    panda$core$Int64 $tmp583;
    panda$core$Char8 c589;
    panda$core$Int64 $tmp590;
    panda$core$Bit $tmp592;
    panda$core$Int64 $tmp595;
    panda$core$Bit $tmp597;
    panda$core$Int64 $tmp600;
    panda$core$Bit $tmp602;
    panda$core$Int64 $tmp605;
    panda$core$String* $returnValue607;
    panda$core$String* $tmp608;
    panda$core$String* $tmp609;
    int $tmp576;
    {
        current577 = p_r.min.value;
        panda$core$MutableString* $tmp581 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp581);
        $tmp580 = $tmp581;
        $tmp579 = $tmp580;
        result578 = $tmp579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
        max582 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp583, 1);
            panda$core$Int64 $tmp584 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max582, $tmp583);
            max582 = $tmp584;
        }
        }
        $l585:;
        panda$core$Bit $tmp588 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current577, max582);
        bool $tmp587 = $tmp588.value;
        if (!$tmp587) goto $l586;
        {
            c589 = self->data[current577.value];
            panda$core$MutableString$append$panda$core$Char8(result578, c589);
            panda$core$Int64$init$builtin_int64(&$tmp590, 1);
            panda$core$Int64 $tmp591 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current577, $tmp590);
            current577 = $tmp591;
            int64_t $tmp593 = ((int64_t) c589.value) & 255;
            bool $tmp594 = $tmp593 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp592, $tmp594);
            if ($tmp592.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result578, self->data[current577.value]);
                panda$core$Int64$init$builtin_int64(&$tmp595, 1);
                panda$core$Int64 $tmp596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current577, $tmp595);
                current577 = $tmp596;
            }
            }
            int64_t $tmp598 = ((int64_t) c589.value) & 255;
            bool $tmp599 = $tmp598 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp597, $tmp599);
            if ($tmp597.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result578, self->data[current577.value]);
                panda$core$Int64$init$builtin_int64(&$tmp600, 1);
                panda$core$Int64 $tmp601 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current577, $tmp600);
                current577 = $tmp601;
            }
            }
            int64_t $tmp603 = ((int64_t) c589.value) & 255;
            bool $tmp604 = $tmp603 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp602, $tmp604);
            if ($tmp602.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result578, self->data[current577.value]);
                panda$core$Int64$init$builtin_int64(&$tmp605, 1);
                panda$core$Int64 $tmp606 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current577, $tmp605);
                current577 = $tmp606;
            }
            }
        }
        goto $l585;
        $l586:;
        panda$core$String* $tmp610 = panda$core$MutableString$finish$R$panda$core$String(result578);
        $tmp609 = $tmp610;
        $tmp608 = $tmp609;
        $returnValue607 = $tmp608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
        $tmp576 = 0;
        goto $l574;
        $l611:;
        return $returnValue607;
    }
    $l574:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result578));
    result578 = NULL;
    switch ($tmp576) {
        case 0: goto $l611;
    }
    $l613:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp614;
    panda$core$String* $returnValue616;
    panda$core$String* $tmp617;
    panda$core$String$Index min620;
    panda$core$Bit inclusive622;
    panda$core$String$Index max623;
    panda$core$Bit $tmp625;
    panda$core$String* $tmp626;
    panda$core$String* $tmp627;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp628;
    panda$core$Int64$init$builtin_int64(&$tmp614, 0);
    panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp614);
    if ($tmp615.value) {
    {
        $tmp617 = &$s618;
        $returnValue616 = $tmp617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
        return $returnValue616;
    }
    }
    memset(&min620, 0, sizeof(min620));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min620 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp621 = panda$core$String$start$R$panda$core$String$Index(self);
        min620 = $tmp621;
    }
    }
    inclusive622 = p_r.inclusive;
    memset(&max623, 0, sizeof(max623));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max623 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp624 = panda$core$String$end$R$panda$core$String$Index(self);
        max623 = $tmp624;
        panda$core$Bit$init$builtin_bit(&$tmp625, false);
        inclusive622 = $tmp625;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp628, min620, max623, inclusive622);
    panda$core$String* $tmp629 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp628);
    $tmp627 = $tmp629;
    $tmp626 = $tmp627;
    $returnValue616 = $tmp626;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
    return $returnValue616;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp634;
    panda$core$String* $returnValue636;
    panda$core$String* $tmp637;
    panda$core$Int64 step641;
    panda$core$Int64 current642;
    panda$core$Int64 $tmp643;
    panda$core$Int64 end648;
    panda$core$Int64 $tmp649;
    panda$core$MutableString* result653 = NULL;
    panda$core$MutableString* $tmp654;
    panda$core$MutableString* $tmp655;
    panda$core$Int64 $tmp657;
    panda$core$Char8 c663;
    panda$core$Int64 $tmp664;
    panda$core$Bit $tmp666;
    panda$core$Int64 $tmp669;
    panda$core$Bit $tmp671;
    panda$core$Int64 $tmp674;
    panda$core$Bit $tmp676;
    panda$core$Int64 $tmp679;
    panda$core$Range$LTpanda$core$Int64$GT $tmp681;
    panda$core$Int64 $tmp682;
    panda$core$Bit $tmp683;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$String$Index $tmp703;
    panda$core$Int64 $tmp711;
    panda$core$Char8 c720;
    panda$core$Int64 old721;
    panda$core$Int64 $tmp722;
    panda$core$Bit $tmp724;
    panda$core$Int64 $tmp727;
    panda$core$Bit $tmp729;
    panda$core$Int64 $tmp732;
    panda$core$Bit $tmp734;
    panda$core$Int64 $tmp737;
    panda$core$Bit $tmp742;
    panda$core$Int64 $tmp749;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp751;
    panda$core$Int64 $tmp752;
    panda$core$Int64 $tmp753;
    panda$core$Bit $tmp754;
    panda$core$String* $tmp774;
    panda$core$String* $tmp775;
    panda$core$String$Index $tmp779;
    panda$core$Char8 c803;
    panda$core$Int64 $tmp804;
    panda$core$Bit $tmp806;
    panda$core$Int64 $tmp809;
    panda$core$Bit $tmp811;
    panda$core$Int64 $tmp814;
    panda$core$Bit $tmp816;
    panda$core$String* $tmp819;
    panda$core$String* $tmp820;
    int $tmp633;
    {
        panda$core$Int64$init$builtin_int64(&$tmp634, 0);
        panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp634);
        if ($tmp635.value) {
        {
            $tmp637 = &$s638;
            $returnValue636 = $tmp637;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
            $tmp633 = 0;
            goto $l631;
            $l639:;
            return $returnValue636;
        }
        }
        step641 = p_r.step;
        memset(&current642, 0, sizeof(current642));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current642 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp643, 0);
        panda$core$Bit $tmp644 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step641, $tmp643);
        if ($tmp644.value) {
        {
            panda$core$String$Index $tmp645 = panda$core$String$start$R$panda$core$String$Index(self);
            current642 = $tmp645.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp646 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp647 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp646);
            current642 = $tmp647.value;
        }
        }
        }
        memset(&end648, 0, sizeof(end648));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end648 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp649, 0);
        panda$core$Bit $tmp650 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step641, $tmp649);
        if ($tmp650.value) {
        {
            panda$core$String$Index $tmp651 = panda$core$String$end$R$panda$core$String$Index(self);
            end648 = $tmp651.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp652 = panda$core$String$start$R$panda$core$String$Index(self);
            end648 = $tmp652.value;
        }
        }
        }
        panda$core$MutableString* $tmp656 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp656);
        $tmp655 = $tmp656;
        $tmp654 = $tmp655;
        result653 = $tmp654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
        panda$core$Int64$init$builtin_int64(&$tmp657, 0);
        panda$core$Bit $tmp658 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp657);
        if ($tmp658.value) {
        {
            $l659:;
            panda$core$Bit $tmp662 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current642, end648);
            bool $tmp661 = $tmp662.value;
            if (!$tmp661) goto $l660;
            {
                c663 = self->data[current642.value];
                panda$core$MutableString$append$panda$core$Char8(result653, c663);
                panda$core$Int64$init$builtin_int64(&$tmp664, 1);
                panda$core$Int64 $tmp665 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp664);
                current642 = $tmp665;
                int64_t $tmp667 = ((int64_t) c663.value) & 255;
                bool $tmp668 = $tmp667 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp666, $tmp668);
                if ($tmp666.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp669, 1);
                    panda$core$Int64 $tmp670 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp669);
                    current642 = $tmp670;
                }
                }
                int64_t $tmp672 = ((int64_t) c663.value) & 255;
                bool $tmp673 = $tmp672 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp671, $tmp673);
                if ($tmp671.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp674, 1);
                    panda$core$Int64 $tmp675 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp674);
                    current642 = $tmp675;
                }
                }
                int64_t $tmp677 = ((int64_t) c663.value) & 255;
                bool $tmp678 = $tmp677 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp676, $tmp678);
                if ($tmp676.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp679, 1);
                    panda$core$Int64 $tmp680 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp679);
                    current642 = $tmp680;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp682, 1);
                panda$core$Bit$init$builtin_bit(&$tmp683, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp681, $tmp682, step641, $tmp683);
                int64_t $tmp685 = $tmp681.min.value;
                panda$core$Int64 i684 = { $tmp685 };
                int64_t $tmp687 = $tmp681.max.value;
                bool $tmp688 = $tmp681.inclusive.value;
                if ($tmp688) goto $l695; else goto $l696;
                $l695:;
                if ($tmp685 <= $tmp687) goto $l689; else goto $l691;
                $l696:;
                if ($tmp685 < $tmp687) goto $l689; else goto $l691;
                $l689:;
                {
                    panda$core$Bit $tmp697 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current642, end648);
                    if ($tmp697.value) {
                    {
                        panda$core$String* $tmp700 = panda$core$MutableString$convert$R$panda$core$String(result653);
                        $tmp699 = $tmp700;
                        $tmp698 = $tmp699;
                        $returnValue636 = $tmp698;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                        $tmp633 = 1;
                        goto $l631;
                        $l701:;
                        return $returnValue636;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp703, current642);
                    panda$core$String$Index $tmp704 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp703);
                    current642 = $tmp704.value;
                }
                $l692:;
                int64_t $tmp706 = $tmp687 - i684.value;
                if ($tmp688) goto $l707; else goto $l708;
                $l707:;
                if ((uint64_t) $tmp706 >= 1) goto $l705; else goto $l691;
                $l708:;
                if ((uint64_t) $tmp706 > 1) goto $l705; else goto $l691;
                $l705:;
                i684.value += 1;
                goto $l689;
                $l691:;
            }
            goto $l659;
            $l660:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp711, 0);
            panda$core$Bit $tmp712 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp711);
            if ($tmp712.value) goto $l713; else goto $l714;
            $l714:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s715, (panda$core$Int64) { 792 });
            abort();
            $l713:;
            $l716:;
            panda$core$Bit $tmp719 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current642, end648);
            bool $tmp718 = $tmp719.value;
            if (!$tmp718) goto $l717;
            {
                c720 = self->data[current642.value];
                panda$core$MutableString$append$panda$core$Char8(result653, c720);
                old721 = current642;
                panda$core$Int64$init$builtin_int64(&$tmp722, 1);
                panda$core$Int64 $tmp723 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp722);
                current642 = $tmp723;
                int64_t $tmp725 = ((int64_t) c720.value) & 255;
                bool $tmp726 = $tmp725 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp724, $tmp726);
                if ($tmp724.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp727, 1);
                    panda$core$Int64 $tmp728 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp727);
                    current642 = $tmp728;
                }
                }
                int64_t $tmp730 = ((int64_t) c720.value) & 255;
                bool $tmp731 = $tmp730 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp729, $tmp731);
                if ($tmp729.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp732, 1);
                    panda$core$Int64 $tmp733 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp732);
                    current642 = $tmp733;
                }
                }
                int64_t $tmp735 = ((int64_t) c720.value) & 255;
                bool $tmp736 = $tmp735 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp734, $tmp736);
                if ($tmp734.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp737, 1);
                panda$core$Int64 $tmp738 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old721, $tmp737);
                current642 = $tmp738;
                $l739:;
                int64_t $tmp744 = ((int64_t) self->data[current642.value].value) & 255;
                bool $tmp745 = $tmp744 >= 128;
                bool $tmp743 = $tmp745;
                if (!$tmp743) goto $l746;
                int64_t $tmp747 = ((int64_t) self->data[current642.value].value) & 255;
                bool $tmp748 = $tmp747 < 192;
                $tmp743 = $tmp748;
                $l746:;
                panda$core$Bit$init$builtin_bit(&$tmp742, $tmp743);
                bool $tmp741 = $tmp742.value;
                if (!$tmp741) goto $l740;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp749, 1);
                    panda$core$Int64 $tmp750 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current642, $tmp749);
                    current642 = $tmp750;
                }
                goto $l739;
                $l740:;
                panda$core$Int64$init$builtin_int64(&$tmp752, -1);
                panda$core$Int64$init$builtin_int64(&$tmp753, -1);
                panda$core$Bit$init$builtin_bit(&$tmp754, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp751, $tmp752, step641, $tmp753, $tmp754);
                int64_t $tmp756 = $tmp751.start.value;
                panda$core$Int64 i755 = { $tmp756 };
                int64_t $tmp758 = $tmp751.end.value;
                int64_t $tmp759 = $tmp751.step.value;
                bool $tmp760 = $tmp751.inclusive.value;
                bool $tmp767 = $tmp759 > 0;
                if ($tmp767) goto $l765; else goto $l766;
                $l765:;
                if ($tmp760) goto $l768; else goto $l769;
                $l768:;
                if ($tmp756 <= $tmp758) goto $l761; else goto $l763;
                $l769:;
                if ($tmp756 < $tmp758) goto $l761; else goto $l763;
                $l766:;
                if ($tmp760) goto $l770; else goto $l771;
                $l770:;
                if ($tmp756 >= $tmp758) goto $l761; else goto $l763;
                $l771:;
                if ($tmp756 > $tmp758) goto $l761; else goto $l763;
                $l761:;
                {
                    panda$core$Bit $tmp773 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current642, end648);
                    if ($tmp773.value) {
                    {
                        panda$core$String* $tmp776 = panda$core$MutableString$convert$R$panda$core$String(result653);
                        $tmp775 = $tmp776;
                        $tmp774 = $tmp775;
                        $returnValue636 = $tmp774;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                        $tmp633 = 2;
                        goto $l631;
                        $l777:;
                        return $returnValue636;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp779, current642);
                    panda$core$String$Index $tmp780 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp779);
                    current642 = $tmp780.value;
                }
                $l764:;
                if ($tmp767) goto $l782; else goto $l783;
                $l782:;
                int64_t $tmp784 = $tmp758 - i755.value;
                if ($tmp760) goto $l785; else goto $l786;
                $l785:;
                if ((uint64_t) $tmp784 >= $tmp759) goto $l781; else goto $l763;
                $l786:;
                if ((uint64_t) $tmp784 > $tmp759) goto $l781; else goto $l763;
                $l783:;
                int64_t $tmp788 = i755.value - $tmp758;
                if ($tmp760) goto $l789; else goto $l790;
                $l789:;
                if ((uint64_t) $tmp788 >= -$tmp759) goto $l781; else goto $l763;
                $l790:;
                if ((uint64_t) $tmp788 > -$tmp759) goto $l781; else goto $l763;
                $l781:;
                i755.value += $tmp759;
                goto $l761;
                $l763:;
            }
            goto $l716;
            $l717:;
        }
        }
        bool $tmp794 = p_r.inclusive.value;
        if ($tmp794) goto $l795;
        $tmp794 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l795:;
        panda$core$Bit $tmp796 = { $tmp794 };
        bool $tmp793 = $tmp796.value;
        if (!$tmp793) goto $l797;
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current642, end648);
        $tmp793 = $tmp798.value;
        $l797:;
        panda$core$Bit $tmp799 = { $tmp793 };
        bool $tmp792 = $tmp799.value;
        if (!$tmp792) goto $l800;
        panda$core$Bit $tmp801 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end648, self->_length);
        $tmp792 = $tmp801.value;
        $l800:;
        panda$core$Bit $tmp802 = { $tmp792 };
        if ($tmp802.value) {
        {
            c803 = self->data[current642.value];
            panda$core$MutableString$append$panda$core$Char8(result653, c803);
            panda$core$Int64$init$builtin_int64(&$tmp804, 1);
            panda$core$Int64 $tmp805 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp804);
            current642 = $tmp805;
            int64_t $tmp807 = ((int64_t) c803.value) & 255;
            bool $tmp808 = $tmp807 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp806, $tmp808);
            if ($tmp806.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                panda$core$Int64$init$builtin_int64(&$tmp809, 1);
                panda$core$Int64 $tmp810 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp809);
                current642 = $tmp810;
            }
            }
            int64_t $tmp812 = ((int64_t) c803.value) & 255;
            bool $tmp813 = $tmp812 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp811, $tmp813);
            if ($tmp811.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
                panda$core$Int64$init$builtin_int64(&$tmp814, 1);
                panda$core$Int64 $tmp815 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current642, $tmp814);
                current642 = $tmp815;
            }
            }
            int64_t $tmp817 = ((int64_t) c803.value) & 255;
            bool $tmp818 = $tmp817 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp816, $tmp818);
            if ($tmp816.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result653, self->data[current642.value]);
            }
            }
        }
        }
        panda$core$String* $tmp821 = panda$core$MutableString$finish$R$panda$core$String(result653);
        $tmp820 = $tmp821;
        $tmp819 = $tmp820;
        $returnValue636 = $tmp819;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp819));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
        $tmp633 = 3;
        goto $l631;
        $l822:;
        return $returnValue636;
    }
    $l631:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result653));
    result653 = NULL;
    switch ($tmp633) {
        case 3: goto $l822;
        case 2: goto $l777;
        case 0: goto $l639;
        case 1: goto $l701;
    }
    $l824:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start825;
    panda$core$String$Index$nullable end828;
    panda$core$String* $returnValue831;
    panda$core$String* $tmp832;
    panda$core$String* $tmp833;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp834;
    memset(&start825, 0, sizeof(start825));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp826 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp827 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp826, ((panda$core$Int64) p_r.min.value));
        start825 = ((panda$core$String$Index$nullable) { $tmp827, true });
    }
    }
    else {
    {
        start825 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end828, 0, sizeof(end828));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp829 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp830 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp829, ((panda$core$Int64) p_r.max.value));
        end828 = ((panda$core$String$Index$nullable) { $tmp830, true });
    }
    }
    else {
    {
        end828 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp834, start825, end828, p_r.inclusive);
    panda$core$String* $tmp835 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp834);
    $tmp833 = $tmp835;
    $tmp832 = $tmp833;
    $returnValue831 = $tmp832;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
    return $returnValue831;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start837;
    panda$core$String$Index$nullable end840;
    panda$core$String* $returnValue843;
    panda$core$String* $tmp844;
    panda$core$String* $tmp845;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp846;
    memset(&start837, 0, sizeof(start837));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp838 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp839 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp838, ((panda$core$Int64) p_r.start.value));
        start837 = ((panda$core$String$Index$nullable) { $tmp839, true });
    }
    }
    else {
    {
        start837 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end840, 0, sizeof(end840));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp841 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp842 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp841, ((panda$core$Int64) p_r.end.value));
        end840 = ((panda$core$String$Index$nullable) { $tmp842, true });
    }
    }
    else {
    {
        end840 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp846, start837, end840, p_r.step, p_r.inclusive);
    panda$core$String* $tmp847 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp846);
    $tmp845 = $tmp847;
    $tmp844 = $tmp845;
    $returnValue843 = $tmp844;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
    return $returnValue843;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp849;
    panda$core$Int64 $tmp850;
    panda$core$Bit $tmp851;
    panda$core$Bit $returnValue866;
    panda$core$Bit $tmp867;
    panda$core$Bit $tmp875;
    panda$core$Int64$init$builtin_int64(&$tmp850, 0);
    panda$core$Bit$init$builtin_bit(&$tmp851, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp849, $tmp850, self->_length, $tmp851);
    int64_t $tmp853 = $tmp849.min.value;
    panda$core$Int64 i852 = { $tmp853 };
    int64_t $tmp855 = $tmp849.max.value;
    bool $tmp856 = $tmp849.inclusive.value;
    if ($tmp856) goto $l863; else goto $l864;
    $l863:;
    if ($tmp853 <= $tmp855) goto $l857; else goto $l859;
    $l864:;
    if ($tmp853 < $tmp855) goto $l857; else goto $l859;
    $l857:;
    {
        panda$core$Bit $tmp865 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i852.value], p_c);
        if ($tmp865.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp867, true);
            $returnValue866 = $tmp867;
            return $returnValue866;
        }
        }
    }
    $l860:;
    int64_t $tmp870 = $tmp855 - i852.value;
    if ($tmp856) goto $l871; else goto $l872;
    $l871:;
    if ((uint64_t) $tmp870 >= 1) goto $l869; else goto $l859;
    $l872:;
    if ((uint64_t) $tmp870 > 1) goto $l869; else goto $l859;
    $l869:;
    i852.value += 1;
    goto $l857;
    $l859:;
    panda$core$Bit$init$builtin_bit(&$tmp875, false);
    $returnValue866 = $tmp875;
    return $returnValue866;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue877;
    panda$core$String$Index$nullable $tmp878 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue877 = ((panda$core$Bit) { $tmp878.nonnull });
    return $returnValue877;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue880;
    panda$core$String$Index $tmp881 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp882 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp881);
    $returnValue880 = $tmp882;
    return $returnValue880;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue885;
    panda$core$Range$LTpanda$core$Int64$GT $tmp887;
    panda$core$Bit $tmp889;
    panda$core$Range$LTpanda$core$Int64$GT $tmp903;
    panda$core$Int64 $tmp904;
    panda$core$Bit $tmp905;
    panda$core$String$Index $tmp927;
    panda$core$Bit $tmp884 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp884.value) {
    {
        $returnValue885 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue885;
    }
    }
    panda$core$Int64 $tmp888 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp889, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp887, p_start.value, $tmp888, $tmp889);
    int64_t $tmp891 = $tmp887.min.value;
    panda$core$Int64 i890 = { $tmp891 };
    int64_t $tmp893 = $tmp887.max.value;
    bool $tmp894 = $tmp887.inclusive.value;
    if ($tmp894) goto $l901; else goto $l902;
    $l901:;
    if ($tmp891 <= $tmp893) goto $l895; else goto $l897;
    $l902:;
    if ($tmp891 < $tmp893) goto $l895; else goto $l897;
    $l895:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp904, 0);
        panda$core$Bit$init$builtin_bit(&$tmp905, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp903, $tmp904, p_s->_length, $tmp905);
        int64_t $tmp907 = $tmp903.min.value;
        panda$core$Int64 j906 = { $tmp907 };
        int64_t $tmp909 = $tmp903.max.value;
        bool $tmp910 = $tmp903.inclusive.value;
        if ($tmp910) goto $l917; else goto $l918;
        $l917:;
        if ($tmp907 <= $tmp909) goto $l911; else goto $l913;
        $l918:;
        if ($tmp907 < $tmp909) goto $l911; else goto $l913;
        $l911:;
        {
            panda$core$Int64 $tmp919 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i890, j906);
            panda$core$Bit $tmp920 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp919.value], p_s->data[j906.value]);
            if ($tmp920.value) {
            {
                goto $l898;
            }
            }
        }
        $l914:;
        int64_t $tmp922 = $tmp909 - j906.value;
        if ($tmp910) goto $l923; else goto $l924;
        $l923:;
        if ((uint64_t) $tmp922 >= 1) goto $l921; else goto $l913;
        $l924:;
        if ((uint64_t) $tmp922 > 1) goto $l921; else goto $l913;
        $l921:;
        j906.value += 1;
        goto $l911;
        $l913:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp927, i890);
        $returnValue885 = ((panda$core$String$Index$nullable) { $tmp927, true });
        return $returnValue885;
    }
    $l898:;
    int64_t $tmp930 = $tmp893 - i890.value;
    if ($tmp894) goto $l931; else goto $l932;
    $l931:;
    if ((uint64_t) $tmp930 >= 1) goto $l929; else goto $l897;
    $l932:;
    if ((uint64_t) $tmp930 > 1) goto $l929; else goto $l897;
    $l929:;
    i890.value += 1;
    goto $l895;
    $l897:;
    $returnValue885 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue885;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue936;
    panda$core$String$Index $tmp937 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp938 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp937);
    $returnValue936 = $tmp938;
    return $returnValue936;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue941;
    panda$core$Int64 startPos943;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp946;
    panda$core$Int64 $tmp947;
    panda$core$Int64 $tmp948;
    panda$core$Bit $tmp949;
    panda$core$Range$LTpanda$core$Int64$GT $tmp968;
    panda$core$Int64 $tmp969;
    panda$core$Bit $tmp970;
    panda$core$String$Index $tmp992;
    panda$core$Bit $tmp940 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp940.value) {
    {
        $returnValue941 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue941;
    }
    }
    panda$core$Int64 $tmp944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp945 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp944);
    startPos943 = $tmp945;
    panda$core$Int64$init$builtin_int64(&$tmp947, 0);
    panda$core$Int64$init$builtin_int64(&$tmp948, -1);
    panda$core$Bit$init$builtin_bit(&$tmp949, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp946, startPos943, $tmp947, $tmp948, $tmp949);
    int64_t $tmp951 = $tmp946.start.value;
    panda$core$Int64 i950 = { $tmp951 };
    int64_t $tmp953 = $tmp946.end.value;
    int64_t $tmp954 = $tmp946.step.value;
    bool $tmp955 = $tmp946.inclusive.value;
    bool $tmp962 = $tmp954 > 0;
    if ($tmp962) goto $l960; else goto $l961;
    $l960:;
    if ($tmp955) goto $l963; else goto $l964;
    $l963:;
    if ($tmp951 <= $tmp953) goto $l956; else goto $l958;
    $l964:;
    if ($tmp951 < $tmp953) goto $l956; else goto $l958;
    $l961:;
    if ($tmp955) goto $l965; else goto $l966;
    $l965:;
    if ($tmp951 >= $tmp953) goto $l956; else goto $l958;
    $l966:;
    if ($tmp951 > $tmp953) goto $l956; else goto $l958;
    $l956:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp969, 0);
        panda$core$Bit$init$builtin_bit(&$tmp970, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp968, $tmp969, p_s->_length, $tmp970);
        int64_t $tmp972 = $tmp968.min.value;
        panda$core$Int64 j971 = { $tmp972 };
        int64_t $tmp974 = $tmp968.max.value;
        bool $tmp975 = $tmp968.inclusive.value;
        if ($tmp975) goto $l982; else goto $l983;
        $l982:;
        if ($tmp972 <= $tmp974) goto $l976; else goto $l978;
        $l983:;
        if ($tmp972 < $tmp974) goto $l976; else goto $l978;
        $l976:;
        {
            panda$core$Int64 $tmp984 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i950, j971);
            panda$core$Bit $tmp985 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp984.value], p_s->data[j971.value]);
            if ($tmp985.value) {
            {
                goto $l959;
            }
            }
        }
        $l979:;
        int64_t $tmp987 = $tmp974 - j971.value;
        if ($tmp975) goto $l988; else goto $l989;
        $l988:;
        if ((uint64_t) $tmp987 >= 1) goto $l986; else goto $l978;
        $l989:;
        if ((uint64_t) $tmp987 > 1) goto $l986; else goto $l978;
        $l986:;
        j971.value += 1;
        goto $l976;
        $l978:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp992, i950);
        $returnValue941 = ((panda$core$String$Index$nullable) { $tmp992, true });
        return $returnValue941;
    }
    $l959:;
    if ($tmp962) goto $l995; else goto $l996;
    $l995:;
    int64_t $tmp997 = $tmp953 - i950.value;
    if ($tmp955) goto $l998; else goto $l999;
    $l998:;
    if ((uint64_t) $tmp997 >= $tmp954) goto $l994; else goto $l958;
    $l999:;
    if ((uint64_t) $tmp997 > $tmp954) goto $l994; else goto $l958;
    $l996:;
    int64_t $tmp1001 = i950.value - $tmp953;
    if ($tmp955) goto $l1002; else goto $l1003;
    $l1002:;
    if ((uint64_t) $tmp1001 >= -$tmp954) goto $l994; else goto $l958;
    $l1003:;
    if ((uint64_t) $tmp1001 > -$tmp954) goto $l994; else goto $l958;
    $l994:;
    i950.value += $tmp954;
    goto $l956;
    $l958:;
    $returnValue941 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue941;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue1006;
    panda$core$Matcher* $tmp1007;
    panda$core$Bit $tmp1009;
    panda$core$Matcher* $tmp1008 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp1007 = $tmp1008;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1009, $tmp1007);
    $returnValue1006 = $tmp1009;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
    return $returnValue1006;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue1011;
    panda$core$Matcher* $tmp1012;
    panda$core$Matcher* $tmp1013 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp1012 = $tmp1013;
    panda$core$Bit $tmp1014 = panda$core$Matcher$find$R$panda$core$Bit($tmp1012);
    $returnValue1011 = $tmp1014;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
    return $returnValue1011;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher1019 = NULL;
    panda$core$Matcher* $tmp1020;
    panda$core$Matcher* $tmp1021;
    panda$core$Bit $tmp1023;
    panda$collections$Array* result1027 = NULL;
    panda$collections$Array* $tmp1028;
    panda$collections$Array* $tmp1029;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1031;
    panda$core$Int64 $tmp1032;
    panda$core$Int64 $tmp1033;
    panda$core$Bit $tmp1034;
    panda$core$String* $tmp1048;
    panda$collections$ListView* $returnValue1056;
    panda$collections$ListView* $tmp1057;
    panda$collections$ListView* $tmp1062;
    int $tmp1018;
    {
        panda$core$Matcher* $tmp1022 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp1021 = $tmp1022;
        $tmp1020 = $tmp1021;
        matcher1019 = $tmp1020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1023, matcher1019);
        if ($tmp1023.value) {
        {
            int $tmp1026;
            {
                panda$collections$Array* $tmp1030 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1030);
                $tmp1029 = $tmp1030;
                $tmp1028 = $tmp1029;
                result1027 = $tmp1028;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
                panda$core$Int64$init$builtin_int64(&$tmp1032, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1033, matcher1019);
                panda$core$Bit$init$builtin_bit(&$tmp1034, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1031, $tmp1032, $tmp1033, $tmp1034);
                int64_t $tmp1036 = $tmp1031.min.value;
                panda$core$Int64 i1035 = { $tmp1036 };
                int64_t $tmp1038 = $tmp1031.max.value;
                bool $tmp1039 = $tmp1031.inclusive.value;
                if ($tmp1039) goto $l1046; else goto $l1047;
                $l1046:;
                if ($tmp1036 <= $tmp1038) goto $l1040; else goto $l1042;
                $l1047:;
                if ($tmp1036 < $tmp1038) goto $l1040; else goto $l1042;
                $l1040:;
                {
                    panda$core$String* $tmp1049 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1019, i1035);
                    $tmp1048 = $tmp1049;
                    panda$collections$Array$add$panda$collections$Array$T(result1027, ((panda$core$Object*) $tmp1048));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                }
                $l1043:;
                int64_t $tmp1051 = $tmp1038 - i1035.value;
                if ($tmp1039) goto $l1052; else goto $l1053;
                $l1052:;
                if ((uint64_t) $tmp1051 >= 1) goto $l1050; else goto $l1042;
                $l1053:;
                if ((uint64_t) $tmp1051 > 1) goto $l1050; else goto $l1042;
                $l1050:;
                i1035.value += 1;
                goto $l1040;
                $l1042:;
                $tmp1057 = ((panda$collections$ListView*) result1027);
                $returnValue1056 = $tmp1057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
                $tmp1026 = 0;
                goto $l1024;
                $l1058:;
                $tmp1018 = 0;
                goto $l1016;
                $l1059:;
                return $returnValue1056;
            }
            $l1024:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1027));
            result1027 = NULL;
            switch ($tmp1026) {
                case 0: goto $l1058;
            }
            $l1061:;
        }
        }
        $tmp1062 = NULL;
        $returnValue1056 = $tmp1062;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
        $tmp1018 = 1;
        goto $l1016;
        $l1063:;
        return $returnValue1056;
    }
    $l1016:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1019));
    matcher1019 = NULL;
    switch ($tmp1018) {
        case 1: goto $l1063;
        case 0: goto $l1059;
    }
    $l1065:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1071;
    panda$core$String* $tmp1072;
    panda$core$MutableString* result1075 = NULL;
    panda$core$MutableString* $tmp1076;
    panda$core$MutableString* $tmp1077;
    panda$core$String$Index index1079;
    panda$core$String$Index$nullable nextIndex1083;
    panda$core$String* $tmp1085;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1086;
    panda$core$Bit $tmp1087;
    panda$core$String* $tmp1089;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1090;
    panda$core$Bit $tmp1091;
    panda$core$String$Index $tmp1093;
    panda$core$String* $tmp1095;
    panda$core$String* $tmp1096;
    int $tmp1068;
    {
        panda$core$Bit $tmp1070 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1069);
        if ($tmp1070.value) {
        {
            $tmp1072 = self;
            $returnValue1071 = $tmp1072;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
            $tmp1068 = 0;
            goto $l1066;
            $l1073:;
            return $returnValue1071;
        }
        }
        panda$core$MutableString* $tmp1078 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1078);
        $tmp1077 = $tmp1078;
        $tmp1076 = $tmp1077;
        result1075 = $tmp1076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1077));
        panda$core$String$Index $tmp1080 = panda$core$String$start$R$panda$core$String$Index(self);
        index1079 = $tmp1080;
        $l1081:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1084 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1079);
            nextIndex1083 = $tmp1084;
            if (((panda$core$Bit) { !nextIndex1083.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1087, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1086, ((panda$core$String$Index$nullable) { index1079, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1087);
                panda$core$String* $tmp1088 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1086);
                $tmp1085 = $tmp1088;
                panda$core$MutableString$append$panda$core$String(result1075, $tmp1085);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                goto $l1082;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1091, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1090, index1079, ((panda$core$String$Index) nextIndex1083.value), $tmp1091);
            panda$core$String* $tmp1092 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1090);
            $tmp1089 = $tmp1092;
            panda$core$MutableString$append$panda$core$String(result1075, $tmp1089);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
            panda$core$MutableString$append$panda$core$String(result1075, p_replacement);
            panda$core$Int64 $tmp1094 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1083.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1093, $tmp1094);
            index1079 = $tmp1093;
        }
        }
        $l1082:;
        panda$core$String* $tmp1097 = panda$core$MutableString$finish$R$panda$core$String(result1075);
        $tmp1096 = $tmp1097;
        $tmp1095 = $tmp1096;
        $returnValue1071 = $tmp1095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
        $tmp1068 = 1;
        goto $l1066;
        $l1098:;
        return $returnValue1071;
    }
    $l1066:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1075));
    result1075 = NULL;
    switch ($tmp1068) {
        case 1: goto $l1098;
        case 0: goto $l1073;
    }
    $l1100:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1101;
    panda$core$String* $tmp1102;
    panda$core$String* $tmp1103;
    panda$core$Bit $tmp1104;
    panda$core$Bit$init$builtin_bit(&$tmp1104, true);
    panda$core$String* $tmp1105 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(self, p_search, p_replacement, $tmp1104);
    $tmp1103 = $tmp1105;
    $tmp1102 = $tmp1103;
    $returnValue1101 = $tmp1102;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
    return $returnValue1101;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$MutableString* result1110 = NULL;
    panda$core$MutableString* $tmp1111;
    panda$core$MutableString* $tmp1112;
    panda$core$Matcher* matcher1114 = NULL;
    panda$core$Matcher* $tmp1115;
    panda$core$Matcher* $tmp1116;
    panda$core$String* $returnValue1122;
    panda$core$String* $tmp1123;
    panda$core$String* $tmp1124;
    int $tmp1109;
    {
        panda$core$MutableString* $tmp1113 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1113);
        $tmp1112 = $tmp1113;
        $tmp1111 = $tmp1112;
        result1110 = $tmp1111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
        panda$core$Matcher* $tmp1117 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1116 = $tmp1117;
        $tmp1115 = $tmp1116;
        matcher1114 = $tmp1115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
        $l1118:;
        panda$core$Bit $tmp1121 = panda$core$Matcher$find$R$panda$core$Bit(matcher1114);
        bool $tmp1120 = $tmp1121.value;
        if (!$tmp1120) goto $l1119;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1114, result1110, p_replacement, p_allowGroupReferences);
        }
        goto $l1118;
        $l1119:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1114, result1110);
        panda$core$String* $tmp1125 = panda$core$MutableString$finish$R$panda$core$String(result1110);
        $tmp1124 = $tmp1125;
        $tmp1123 = $tmp1124;
        $returnValue1122 = $tmp1123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
        $tmp1109 = 0;
        goto $l1107;
        $l1126:;
        return $returnValue1122;
    }
    $l1107:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1114));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1110));
    result1110 = NULL;
    matcher1114 = NULL;
    switch ($tmp1109) {
        case 0: goto $l1126;
    }
    $l1128:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1132 = NULL;
    panda$core$MutableString* $tmp1133;
    panda$core$MutableString* $tmp1134;
    panda$core$Matcher* matcher1136 = NULL;
    panda$core$Matcher* $tmp1137;
    panda$core$Matcher* $tmp1138;
    panda$core$String* $tmp1144;
    panda$core$Object* $tmp1145;
    panda$core$String* $tmp1146;
    panda$core$Int64 $tmp1147;
    panda$core$Object* $tmp1149;
    panda$core$Bit $tmp1154;
    panda$core$String* $returnValue1155;
    panda$core$String* $tmp1156;
    panda$core$String* $tmp1157;
    int $tmp1131;
    {
        panda$core$MutableString* $tmp1135 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1135);
        $tmp1134 = $tmp1135;
        $tmp1133 = $tmp1134;
        result1132 = $tmp1133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
        panda$core$Matcher* $tmp1139 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1138 = $tmp1139;
        $tmp1137 = $tmp1138;
        matcher1136 = $tmp1137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
        $l1140:;
        panda$core$Bit $tmp1143 = panda$core$Matcher$find$R$panda$core$Bit(matcher1136);
        bool $tmp1142 = $tmp1143.value;
        if (!$tmp1142) goto $l1141;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1147, 0);
            panda$core$String* $tmp1148 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1136, $tmp1147);
            $tmp1146 = $tmp1148;
            if (p_replacement->target) {
                $tmp1149 = (($fn1150) p_replacement->pointer)(p_replacement->target, $tmp1146);
            } else {
                $tmp1149 = (($fn1151) p_replacement->pointer)($tmp1146);
            }
            $tmp1145 = $tmp1149;
            panda$core$String* $tmp1153 = (($fn1152) $tmp1145->$class->vtable[0])($tmp1145);
            $tmp1144 = $tmp1153;
            panda$core$Bit$init$builtin_bit(&$tmp1154, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1136, result1132, $tmp1144, $tmp1154);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
            panda$core$Panda$unref$panda$core$Object($tmp1145);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1146));
        }
        goto $l1140;
        $l1141:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1136, result1132);
        panda$core$String* $tmp1158 = panda$core$MutableString$convert$R$panda$core$String(result1132);
        $tmp1157 = $tmp1158;
        $tmp1156 = $tmp1157;
        $returnValue1155 = $tmp1156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
        $tmp1131 = 0;
        goto $l1129;
        $l1159:;
        return $returnValue1155;
    }
    $l1129:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1132));
    result1132 = NULL;
    matcher1136 = NULL;
    switch ($tmp1131) {
        case 0: goto $l1159;
    }
    $l1161:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1165 = NULL;
    panda$core$MutableString* $tmp1166;
    panda$core$MutableString* $tmp1167;
    panda$core$Matcher* matcher1169 = NULL;
    panda$core$Matcher* $tmp1170;
    panda$core$Matcher* $tmp1171;
    panda$collections$Array* groups1180 = NULL;
    panda$collections$Array* $tmp1181;
    panda$collections$Array* $tmp1182;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1184;
    panda$core$Int64 $tmp1185;
    panda$core$Int64 $tmp1186;
    panda$core$Bit $tmp1187;
    panda$core$String* $tmp1201;
    panda$core$String* $tmp1209;
    panda$core$Object* $tmp1210;
    panda$core$Object* $tmp1211;
    panda$core$Bit $tmp1216;
    panda$core$String* $returnValue1218;
    panda$core$String* $tmp1219;
    panda$core$String* $tmp1220;
    int $tmp1164;
    {
        panda$core$MutableString* $tmp1168 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1168);
        $tmp1167 = $tmp1168;
        $tmp1166 = $tmp1167;
        result1165 = $tmp1166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1167));
        panda$core$Matcher* $tmp1172 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1171 = $tmp1172;
        $tmp1170 = $tmp1171;
        matcher1169 = $tmp1170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
        $l1173:;
        panda$core$Bit $tmp1176 = panda$core$Matcher$find$R$panda$core$Bit(matcher1169);
        bool $tmp1175 = $tmp1176.value;
        if (!$tmp1175) goto $l1174;
        {
            int $tmp1179;
            {
                panda$collections$Array* $tmp1183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1183);
                $tmp1182 = $tmp1183;
                $tmp1181 = $tmp1182;
                groups1180 = $tmp1181;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
                panda$core$Int64$init$builtin_int64(&$tmp1185, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1186, matcher1169);
                panda$core$Bit$init$builtin_bit(&$tmp1187, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1184, $tmp1185, $tmp1186, $tmp1187);
                int64_t $tmp1189 = $tmp1184.min.value;
                panda$core$Int64 i1188 = { $tmp1189 };
                int64_t $tmp1191 = $tmp1184.max.value;
                bool $tmp1192 = $tmp1184.inclusive.value;
                if ($tmp1192) goto $l1199; else goto $l1200;
                $l1199:;
                if ($tmp1189 <= $tmp1191) goto $l1193; else goto $l1195;
                $l1200:;
                if ($tmp1189 < $tmp1191) goto $l1193; else goto $l1195;
                $l1193:;
                {
                    panda$core$String* $tmp1202 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1169, i1188);
                    $tmp1201 = $tmp1202;
                    panda$collections$Array$add$panda$collections$Array$T(groups1180, ((panda$core$Object*) $tmp1201));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                }
                $l1196:;
                int64_t $tmp1204 = $tmp1191 - i1188.value;
                if ($tmp1192) goto $l1205; else goto $l1206;
                $l1205:;
                if ((uint64_t) $tmp1204 >= 1) goto $l1203; else goto $l1195;
                $l1206:;
                if ((uint64_t) $tmp1204 > 1) goto $l1203; else goto $l1195;
                $l1203:;
                i1188.value += 1;
                goto $l1193;
                $l1195:;
                if (p_replacement->target) {
                    $tmp1211 = (($fn1212) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups1180));
                } else {
                    $tmp1211 = (($fn1213) p_replacement->pointer)(((panda$collections$ListView*) groups1180));
                }
                $tmp1210 = $tmp1211;
                panda$core$String* $tmp1215 = (($fn1214) $tmp1210->$class->vtable[0])($tmp1210);
                $tmp1209 = $tmp1215;
                panda$core$Bit$init$builtin_bit(&$tmp1216, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1169, result1165, $tmp1209, $tmp1216);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                panda$core$Panda$unref$panda$core$Object($tmp1210);
            }
            $tmp1179 = -1;
            goto $l1177;
            $l1177:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1180));
            groups1180 = NULL;
            switch ($tmp1179) {
                case -1: goto $l1217;
            }
            $l1217:;
        }
        goto $l1173;
        $l1174:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1169, result1165);
        panda$core$String* $tmp1221 = panda$core$MutableString$convert$R$panda$core$String(result1165);
        $tmp1220 = $tmp1221;
        $tmp1219 = $tmp1220;
        $returnValue1218 = $tmp1219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
        $tmp1164 = 0;
        goto $l1162;
        $l1222:;
        return $returnValue1218;
    }
    $l1162:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1169));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1165));
    result1165 = NULL;
    matcher1169 = NULL;
    switch ($tmp1164) {
        case 0: goto $l1222;
    }
    $l1224:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1225;
    panda$collections$Iterator* $tmp1226;
    panda$collections$Iterator* $tmp1227;
    panda$core$Bit $tmp1228;
    panda$core$Bit$init$builtin_bit(&$tmp1228, false);
    panda$collections$Iterator* $tmp1229 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1228);
    $tmp1227 = $tmp1229;
    $tmp1226 = $tmp1227;
    $returnValue1225 = $tmp1226;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
    return $returnValue1225;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1231;
    panda$collections$Iterator* $tmp1232;
    panda$core$String$MatchIterator* $tmp1233;
    panda$core$String$MatchIterator* $tmp1234 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1234, self, p_needle, p_overlapping);
    $tmp1233 = $tmp1234;
    $tmp1232 = ((panda$collections$Iterator*) $tmp1233);
    $returnValue1231 = $tmp1232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1233));
    return $returnValue1231;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1236;
    panda$collections$Iterator* $tmp1237;
    panda$collections$Iterator* $tmp1238;
    panda$core$Bit $tmp1239;
    panda$core$Bit$init$builtin_bit(&$tmp1239, false);
    panda$collections$Iterator* $tmp1240 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1239);
    $tmp1238 = $tmp1240;
    $tmp1237 = $tmp1238;
    $returnValue1236 = $tmp1237;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
    return $returnValue1236;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1242;
    panda$collections$Iterator* $tmp1243;
    panda$core$String$RegexMatchIterator* $tmp1244;
    panda$core$String$RegexMatchIterator* $tmp1245 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1245, self, p_needle, p_overlapping);
    $tmp1244 = $tmp1245;
    $tmp1243 = ((panda$collections$Iterator*) $tmp1244);
    $returnValue1242 = $tmp1243;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
    return $returnValue1242;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1247;
    panda$core$String$Index $tmp1248;
    panda$core$Int64 $tmp1249;
    panda$core$Int64$init$builtin_int64(&$tmp1249, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1248, $tmp1249);
    $returnValue1247 = $tmp1248;
    return $returnValue1247;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1251;
    panda$core$String$Index $tmp1252;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1252, self->_length);
    $returnValue1251 = $tmp1252;
    return $returnValue1251;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1258;
    panda$core$Bit $tmp1260;
    panda$core$String$Index $returnValue1262;
    panda$core$String$Index $tmp1263;
    panda$core$Int64 $tmp1264;
    panda$core$Bit $tmp1267;
    panda$core$String$Index $tmp1269;
    panda$core$Int64 $tmp1270;
    panda$core$Bit $tmp1273;
    panda$core$String$Index $tmp1275;
    panda$core$Int64 $tmp1276;
    panda$core$String$Index $tmp1279;
    panda$core$Int64 $tmp1280;
    panda$core$Bit $tmp1254 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1254.value) goto $l1255; else goto $l1256;
    $l1256:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1257, (panda$core$Int64) { 1157 });
    abort();
    $l1255:;
    int64_t $tmp1259 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1258 = $tmp1259;
    bool $tmp1261 = c1258 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1260, $tmp1261);
    if ($tmp1260.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1264, 4);
        panda$core$Int64 $tmp1265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1264);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1263, $tmp1265);
        $returnValue1262 = $tmp1263;
        return $returnValue1262;
    }
    }
    bool $tmp1268 = c1258 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1267, $tmp1268);
    if ($tmp1267.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1270, 3);
        panda$core$Int64 $tmp1271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1270);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1269, $tmp1271);
        $returnValue1262 = $tmp1269;
        return $returnValue1262;
    }
    }
    bool $tmp1274 = c1258 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1273, $tmp1274);
    if ($tmp1273.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1276, 2);
        panda$core$Int64 $tmp1277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1276);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1275, $tmp1277);
        $returnValue1262 = $tmp1275;
        return $returnValue1262;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1280, 1);
    panda$core$Int64 $tmp1281 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1280);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1279, $tmp1281);
    $returnValue1262 = $tmp1279;
    return $returnValue1262;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1283;
    panda$core$Int64 newValue1288;
    panda$core$Int64 $tmp1289;
    panda$core$Bit $tmp1294;
    panda$core$Int64 $tmp1301;
    panda$core$String$Index $returnValue1303;
    panda$core$String$Index $tmp1304;
    panda$core$Int64$init$builtin_int64(&$tmp1283, 0);
    panda$core$Bit $tmp1284 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1283);
    if ($tmp1284.value) goto $l1285; else goto $l1286;
    $l1286:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1287, (panda$core$Int64) { 1178 });
    abort();
    $l1285:;
    panda$core$Int64$init$builtin_int64(&$tmp1289, 1);
    panda$core$Int64 $tmp1290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1289);
    newValue1288 = $tmp1290;
    $l1291:;
    int64_t $tmp1296 = ((int64_t) self->data[newValue1288.value].value) & 255;
    bool $tmp1297 = $tmp1296 >= 128;
    bool $tmp1295 = $tmp1297;
    if (!$tmp1295) goto $l1298;
    int64_t $tmp1299 = ((int64_t) self->data[newValue1288.value].value) & 255;
    bool $tmp1300 = $tmp1299 < 192;
    $tmp1295 = $tmp1300;
    $l1298:;
    panda$core$Bit$init$builtin_bit(&$tmp1294, $tmp1295);
    bool $tmp1293 = $tmp1294.value;
    if (!$tmp1293) goto $l1292;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1301, 1);
        panda$core$Int64 $tmp1302 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1288, $tmp1301);
        newValue1288 = $tmp1302;
    }
    goto $l1291;
    $l1292:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1304, newValue1288);
    $returnValue1303 = $tmp1304;
    return $returnValue1303;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1306;
    panda$core$Int64 $tmp1307;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1309;
    panda$core$Int64 $tmp1310;
    panda$core$Bit $tmp1311;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1332;
    panda$core$Int64 $tmp1333;
    panda$core$Int64 $tmp1334;
    panda$core$Bit $tmp1335;
    panda$core$String$Index $returnValue1366;
    result1306 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1307, 0);
    panda$core$Bit $tmp1308 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1307);
    if ($tmp1308.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1310, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1311, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1309, $tmp1310, p_offset, $tmp1311);
        int64_t $tmp1313 = $tmp1309.min.value;
        panda$core$Int64 i1312 = { $tmp1313 };
        int64_t $tmp1315 = $tmp1309.max.value;
        bool $tmp1316 = $tmp1309.inclusive.value;
        if ($tmp1316) goto $l1323; else goto $l1324;
        $l1323:;
        if ($tmp1313 <= $tmp1315) goto $l1317; else goto $l1319;
        $l1324:;
        if ($tmp1313 < $tmp1315) goto $l1317; else goto $l1319;
        $l1317:;
        {
            panda$core$String$Index $tmp1325 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1306);
            result1306 = $tmp1325;
        }
        $l1320:;
        int64_t $tmp1327 = $tmp1315 - i1312.value;
        if ($tmp1316) goto $l1328; else goto $l1329;
        $l1328:;
        if ((uint64_t) $tmp1327 >= 1) goto $l1326; else goto $l1319;
        $l1329:;
        if ((uint64_t) $tmp1327 > 1) goto $l1326; else goto $l1319;
        $l1326:;
        i1312.value += 1;
        goto $l1317;
        $l1319:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1333, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1334, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1335, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1332, $tmp1333, p_offset, $tmp1334, $tmp1335);
        int64_t $tmp1337 = $tmp1332.start.value;
        panda$core$Int64 i1336 = { $tmp1337 };
        int64_t $tmp1339 = $tmp1332.end.value;
        int64_t $tmp1340 = $tmp1332.step.value;
        bool $tmp1341 = $tmp1332.inclusive.value;
        bool $tmp1348 = $tmp1340 > 0;
        if ($tmp1348) goto $l1346; else goto $l1347;
        $l1346:;
        if ($tmp1341) goto $l1349; else goto $l1350;
        $l1349:;
        if ($tmp1337 <= $tmp1339) goto $l1342; else goto $l1344;
        $l1350:;
        if ($tmp1337 < $tmp1339) goto $l1342; else goto $l1344;
        $l1347:;
        if ($tmp1341) goto $l1351; else goto $l1352;
        $l1351:;
        if ($tmp1337 >= $tmp1339) goto $l1342; else goto $l1344;
        $l1352:;
        if ($tmp1337 > $tmp1339) goto $l1342; else goto $l1344;
        $l1342:;
        {
            panda$core$String$Index $tmp1354 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1306);
            result1306 = $tmp1354;
        }
        $l1345:;
        if ($tmp1348) goto $l1356; else goto $l1357;
        $l1356:;
        int64_t $tmp1358 = $tmp1339 - i1336.value;
        if ($tmp1341) goto $l1359; else goto $l1360;
        $l1359:;
        if ((uint64_t) $tmp1358 >= $tmp1340) goto $l1355; else goto $l1344;
        $l1360:;
        if ((uint64_t) $tmp1358 > $tmp1340) goto $l1355; else goto $l1344;
        $l1357:;
        int64_t $tmp1362 = i1336.value - $tmp1339;
        if ($tmp1341) goto $l1363; else goto $l1364;
        $l1363:;
        if ((uint64_t) $tmp1362 >= -$tmp1340) goto $l1355; else goto $l1344;
        $l1364:;
        if ((uint64_t) $tmp1362 > -$tmp1340) goto $l1355; else goto $l1344;
        $l1355:;
        i1336.value += $tmp1340;
        goto $l1342;
        $l1344:;
    }
    }
    $returnValue1366 = result1306;
    return $returnValue1366;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1368;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$Char32 $tmp1371;
    panda$core$Int32 $tmp1372;
    panda$core$Int32$init$builtin_int32(&$tmp1372, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1371, $tmp1372);
    panda$core$String* $tmp1373 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1371);
    $tmp1370 = $tmp1373;
    $tmp1369 = $tmp1370;
    $returnValue1368 = $tmp1369;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
    return $returnValue1368;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1377;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$Int64 $tmp1375 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1376 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1375, p_width);
    if ($tmp1376.value) {
    {
        $tmp1378 = self;
        $returnValue1377 = $tmp1378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
        return $returnValue1377;
    }
    }
    panda$core$Int64 $tmp1383 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1384 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1383);
    panda$core$String* $tmp1385 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1384);
    $tmp1382 = $tmp1385;
    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1382);
    $tmp1381 = $tmp1386;
    $tmp1380 = $tmp1381;
    $returnValue1377 = $tmp1380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
    return $returnValue1377;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1388;
    panda$core$String* $tmp1389;
    panda$core$String* $tmp1390;
    panda$core$Char32 $tmp1391;
    panda$core$Int32 $tmp1392;
    panda$core$Int32$init$builtin_int32(&$tmp1392, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1391, $tmp1392);
    panda$core$String* $tmp1393 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1391);
    $tmp1390 = $tmp1393;
    $tmp1389 = $tmp1390;
    $returnValue1388 = $tmp1389;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
    return $returnValue1388;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1397;
    panda$core$String* $tmp1398;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$Int64 $tmp1395 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1396 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1395, p_width);
    if ($tmp1396.value) {
    {
        $tmp1398 = self;
        $returnValue1397 = $tmp1398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
        return $returnValue1397;
    }
    }
    panda$core$Int64 $tmp1403 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1403);
    panda$core$String* $tmp1405 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1404);
    $tmp1402 = $tmp1405;
    panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, self);
    $tmp1401 = $tmp1406;
    $tmp1400 = $tmp1401;
    $returnValue1397 = $tmp1400;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1400));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
    return $returnValue1397;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$Char32 $tmp1411;
    panda$core$Int32 $tmp1412;
    panda$core$Int32$init$builtin_int32(&$tmp1412, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1411, $tmp1412);
    panda$core$String* $tmp1413 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1411);
    $tmp1410 = $tmp1413;
    $tmp1409 = $tmp1410;
    $returnValue1408 = $tmp1409;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
    return $returnValue1408;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1417;
    panda$core$String* $tmp1418;
    panda$core$Int64 pad1420;
    panda$core$Int64 left1423;
    panda$core$Int64 $tmp1424;
    panda$core$Int64 right1426;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1434;
    panda$core$Int64 $tmp1415 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1416 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1415, p_width);
    if ($tmp1416.value) {
    {
        $tmp1418 = self;
        $returnValue1417 = $tmp1418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1418));
        return $returnValue1417;
    }
    }
    panda$core$Int64 $tmp1421 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1422 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1421);
    pad1420 = $tmp1422;
    panda$core$Int64$init$builtin_int64(&$tmp1424, 2);
    panda$core$Int64 $tmp1425 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1420, $tmp1424);
    left1423 = $tmp1425;
    panda$core$Int64 $tmp1427 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1420, left1423);
    right1426 = $tmp1427;
    panda$core$String* $tmp1432 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1423);
    $tmp1431 = $tmp1432;
    panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, self);
    $tmp1430 = $tmp1433;
    panda$core$String* $tmp1435 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1426);
    $tmp1434 = $tmp1435;
    panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, $tmp1434);
    $tmp1429 = $tmp1436;
    $tmp1428 = $tmp1429;
    $returnValue1417 = $tmp1428;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
    return $returnValue1417;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1438;
    panda$collections$Array* $tmp1439;
    panda$collections$Array* $tmp1440;
    panda$core$Int64 $tmp1441;
    panda$core$Int64$init$builtin_int64(&$tmp1441, 9223372036854775807);
    panda$collections$Array* $tmp1442 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1441);
    $tmp1440 = $tmp1442;
    $tmp1439 = $tmp1440;
    $returnValue1438 = $tmp1439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
    return $returnValue1438;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1447 = NULL;
    panda$collections$Array* $tmp1448;
    panda$collections$Array* $tmp1449;
    panda$core$String$Index index1451;
    panda$core$String$Index$nullable nextIndex1455;
    panda$core$Int64 $tmp1456;
    panda$core$Int64 $tmp1466;
    panda$core$String* $tmp1470;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1471;
    panda$core$Bit $tmp1472;
    panda$core$String* $tmp1474;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1475;
    panda$core$Bit $tmp1476;
    panda$core$String$Index $tmp1478;
    panda$collections$Array* $returnValue1480;
    panda$collections$Array* $tmp1481;
    int $tmp1446;
    {
        panda$collections$Array* $tmp1450 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1450);
        $tmp1449 = $tmp1450;
        $tmp1448 = $tmp1449;
        result1447 = $tmp1448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
        panda$core$String$Index $tmp1452 = panda$core$String$start$R$panda$core$String$Index(self);
        index1451 = $tmp1452;
        $l1453:;
        while (true) {
        {
            memset(&nextIndex1455, 0, sizeof(nextIndex1455));
            panda$core$Int64$init$builtin_int64(&$tmp1456, 0);
            panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1456);
            if ($tmp1457.value) {
            {
                panda$core$String$Index $tmp1458 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1451);
                nextIndex1455 = ((panda$core$String$Index$nullable) { $tmp1458, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1459 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1451);
                nextIndex1455 = $tmp1459;
            }
            }
            bool $tmp1460 = ((panda$core$Bit) { !nextIndex1455.nonnull }).value;
            if ($tmp1460) goto $l1461;
            ITable* $tmp1462 = ((panda$collections$CollectionView*) result1447)->$class->itable;
            while ($tmp1462->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1462 = $tmp1462->next;
            }
            $fn1464 $tmp1463 = $tmp1462->methods[0];
            panda$core$Int64 $tmp1465 = $tmp1463(((panda$collections$CollectionView*) result1447));
            panda$core$Int64$init$builtin_int64(&$tmp1466, 1);
            panda$core$Int64 $tmp1467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1466);
            panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1465, $tmp1467);
            $tmp1460 = $tmp1468.value;
            $l1461:;
            panda$core$Bit $tmp1469 = { $tmp1460 };
            if ($tmp1469.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1472, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1471, ((panda$core$String$Index$nullable) { index1451, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1472);
                panda$core$String* $tmp1473 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1471);
                $tmp1470 = $tmp1473;
                panda$collections$Array$add$panda$collections$Array$T(result1447, ((panda$core$Object*) $tmp1470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                goto $l1454;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1476, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1475, index1451, ((panda$core$String$Index) nextIndex1455.value), $tmp1476);
            panda$core$String* $tmp1477 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1475);
            $tmp1474 = $tmp1477;
            panda$collections$Array$add$panda$collections$Array$T(result1447, ((panda$core$Object*) $tmp1474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
            panda$core$Int64 $tmp1479 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1455.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1478, $tmp1479);
            index1451 = $tmp1478;
        }
        }
        $l1454:;
        $tmp1481 = result1447;
        $returnValue1480 = $tmp1481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1481));
        $tmp1446 = 0;
        goto $l1444;
        $l1482:;
        return $returnValue1480;
    }
    $l1444:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1447));
    result1447 = NULL;
    switch ($tmp1446) {
        case 0: goto $l1482;
    }
    $l1484:;
    abort();
}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1485;
    panda$collections$Array* result1494 = NULL;
    panda$collections$Array* $tmp1495;
    panda$collections$Array* $tmp1496;
    panda$core$Matcher* matcher1498 = NULL;
    panda$core$Matcher* $tmp1499;
    panda$core$Matcher* $tmp1500;
    panda$core$String$Index index1502;
    panda$core$Bit found1506;
    panda$core$Int64 $tmp1515;
    panda$core$String* $tmp1519;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1520;
    panda$core$Bit $tmp1521;
    panda$core$String$Index start1523;
    panda$core$String$Index $tmp1524;
    panda$core$String* $tmp1525;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1526;
    panda$core$Bit $tmp1527;
    panda$core$String$Index $tmp1529;
    panda$core$String$Index $tmp1530;
    panda$collections$Array* $returnValue1532;
    panda$collections$Array* $tmp1533;
    panda$core$Int64$init$builtin_int64(&$tmp1485, 0);
    panda$core$Bit $tmp1486 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1485);
    if ($tmp1486.value) goto $l1487; else goto $l1488;
    $l1488:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1489, (panda$core$Int64) { 1357 }, &$s1490);
    abort();
    $l1487:;
    int $tmp1493;
    {
        panda$collections$Array* $tmp1497 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1497);
        $tmp1496 = $tmp1497;
        $tmp1495 = $tmp1496;
        result1494 = $tmp1495;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
        panda$core$Matcher* $tmp1501 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1500 = $tmp1501;
        $tmp1499 = $tmp1500;
        matcher1498 = $tmp1499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
        panda$core$String$Index $tmp1503 = panda$core$String$start$R$panda$core$String$Index(self);
        index1502 = $tmp1503;
        $l1504:;
        while (true) {
        {
            panda$core$Bit $tmp1507 = panda$core$Matcher$find$R$panda$core$Bit(matcher1498);
            found1506 = $tmp1507;
            panda$core$Bit $tmp1509 = panda$core$Bit$$NOT$R$panda$core$Bit(found1506);
            bool $tmp1508 = $tmp1509.value;
            if ($tmp1508) goto $l1510;
            ITable* $tmp1511 = ((panda$collections$CollectionView*) result1494)->$class->itable;
            while ($tmp1511->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1511 = $tmp1511->next;
            }
            $fn1513 $tmp1512 = $tmp1511->methods[0];
            panda$core$Int64 $tmp1514 = $tmp1512(((panda$collections$CollectionView*) result1494));
            panda$core$Int64$init$builtin_int64(&$tmp1515, 1);
            panda$core$Int64 $tmp1516 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1515);
            panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1514, $tmp1516);
            $tmp1508 = $tmp1517.value;
            $l1510:;
            panda$core$Bit $tmp1518 = { $tmp1508 };
            if ($tmp1518.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1521, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1520, ((panda$core$String$Index$nullable) { index1502, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1521);
                panda$core$String* $tmp1522 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1520);
                $tmp1519 = $tmp1522;
                panda$collections$Array$add$panda$collections$Array$T(result1494, ((panda$core$Object*) $tmp1519));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                goto $l1505;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1524, matcher1498);
            start1523 = $tmp1524;
            panda$core$Bit$init$builtin_bit(&$tmp1527, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1526, index1502, start1523, $tmp1527);
            panda$core$String* $tmp1528 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1526);
            $tmp1525 = $tmp1528;
            panda$collections$Array$add$panda$collections$Array$T(result1494, ((panda$core$Object*) $tmp1525));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1530, matcher1498);
            panda$core$Int64 $tmp1531 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1523.value, $tmp1530.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1529, $tmp1531);
            index1502 = $tmp1529;
        }
        }
        $l1505:;
        $tmp1533 = result1494;
        $returnValue1532 = $tmp1533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
        $tmp1493 = 0;
        goto $l1491;
        $l1534:;
        return $returnValue1532;
    }
    $l1491:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1498));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1494));
    result1494 = NULL;
    matcher1498 = NULL;
    switch ($tmp1493) {
        case 0: goto $l1534;
    }
    $l1536:;
    abort();
}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$Array* $returnValue1537;
    panda$collections$Array* $tmp1538;
    panda$collections$Array* $tmp1539;
    panda$core$Int64 $tmp1540;
    panda$core$Int64$init$builtin_int64(&$tmp1540, 9223372036854775807);
    panda$collections$Array* $tmp1541 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1540);
    $tmp1539 = $tmp1541;
    $tmp1538 = $tmp1539;
    $returnValue1537 = $tmp1538;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
    return $returnValue1537;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1543;
    panda$core$Int64$nullable $returnValue1545;
    panda$core$Int64 result1547;
    panda$core$Int64 $tmp1548;
    panda$core$Int64 start1549;
    panda$core$Int64 $tmp1550;
    panda$core$Char8 $tmp1551;
    panda$core$UInt8 $tmp1552;
    panda$core$Int64 $tmp1554;
    panda$core$Int64 $tmp1555;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1556;
    panda$core$Bit $tmp1557;
    panda$core$Int64 digit1571;
    panda$core$Int64 $tmp1572;
    panda$core$Int64 $tmp1573;
    panda$core$Int64 $tmp1576;
    panda$core$Int64 $tmp1579;
    panda$core$Int64 $tmp1583;
    panda$core$Int64 $tmp1592;
    panda$core$Char8 $tmp1593;
    panda$core$UInt8 $tmp1594;
    panda$core$Int64$init$builtin_int64(&$tmp1543, 0);
    panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1543);
    if ($tmp1544.value) {
    {
        $returnValue1545 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1545;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1548, 0);
    result1547 = $tmp1548;
    memset(&start1549, 0, sizeof(start1549));
    panda$core$Int64$init$builtin_int64(&$tmp1550, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1552, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1551, $tmp1552);
    panda$core$Bit $tmp1553 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1550.value], $tmp1551);
    if ($tmp1553.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1554, 1);
        start1549 = $tmp1554;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1555, 0);
        start1549 = $tmp1555;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1557, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1556, start1549, self->_length, $tmp1557);
    int64_t $tmp1559 = $tmp1556.min.value;
    panda$core$Int64 i1558 = { $tmp1559 };
    int64_t $tmp1561 = $tmp1556.max.value;
    bool $tmp1562 = $tmp1556.inclusive.value;
    if ($tmp1562) goto $l1569; else goto $l1570;
    $l1569:;
    if ($tmp1559 <= $tmp1561) goto $l1563; else goto $l1565;
    $l1570:;
    if ($tmp1559 < $tmp1561) goto $l1563; else goto $l1565;
    $l1563:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1572, ((int64_t) self->data[i1558.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1573, 48);
        panda$core$Int64 $tmp1574 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1572, $tmp1573);
        digit1571 = $tmp1574;
        panda$core$Int64$init$builtin_int64(&$tmp1576, 0);
        panda$core$Bit $tmp1577 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1571, $tmp1576);
        bool $tmp1575 = $tmp1577.value;
        if ($tmp1575) goto $l1578;
        panda$core$Int64$init$builtin_int64(&$tmp1579, 9);
        panda$core$Bit $tmp1580 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1571, $tmp1579);
        $tmp1575 = $tmp1580.value;
        $l1578:;
        panda$core$Bit $tmp1581 = { $tmp1575 };
        if ($tmp1581.value) {
        {
            $returnValue1545 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1545;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1583, 10);
        panda$core$Int64 $tmp1584 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1547, $tmp1583);
        panda$core$Int64 $tmp1585 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1584, digit1571);
        result1547 = $tmp1585;
    }
    $l1566:;
    int64_t $tmp1587 = $tmp1561 - i1558.value;
    if ($tmp1562) goto $l1588; else goto $l1589;
    $l1588:;
    if ((uint64_t) $tmp1587 >= 1) goto $l1586; else goto $l1565;
    $l1589:;
    if ((uint64_t) $tmp1587 > 1) goto $l1586; else goto $l1565;
    $l1586:;
    i1558.value += 1;
    goto $l1563;
    $l1565:;
    panda$core$Int64$init$builtin_int64(&$tmp1592, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1594, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1593, $tmp1594);
    panda$core$Bit $tmp1595 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1592.value], $tmp1593);
    if ($tmp1595.value) {
    {
        panda$core$Int64 $tmp1596 = panda$core$Int64$$SUB$R$panda$core$Int64(result1547);
        result1547 = $tmp1596;
    }
    }
    $returnValue1545 = ((panda$core$Int64$nullable) { result1547, true });
    return $returnValue1545;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1598;
    panda$core$UInt64$nullable $returnValue1600;
    panda$core$UInt64 result1602;
    panda$core$UInt64 $tmp1603;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1604;
    panda$core$Int64 $tmp1605;
    panda$core$Bit $tmp1606;
    panda$core$UInt64 digit1620;
    panda$core$UInt64 $tmp1621;
    panda$core$UInt64 $tmp1622;
    panda$core$UInt64 $tmp1625;
    panda$core$UInt64 $tmp1628;
    panda$core$UInt64 $tmp1632;
    panda$core$Int64$init$builtin_int64(&$tmp1598, 0);
    panda$core$Bit $tmp1599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1598);
    if ($tmp1599.value) {
    {
        $returnValue1600 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1600;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1603, 0);
    result1602 = $tmp1603;
    panda$core$Int64$init$builtin_int64(&$tmp1605, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1606, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1604, $tmp1605, self->_length, $tmp1606);
    int64_t $tmp1608 = $tmp1604.min.value;
    panda$core$Int64 i1607 = { $tmp1608 };
    int64_t $tmp1610 = $tmp1604.max.value;
    bool $tmp1611 = $tmp1604.inclusive.value;
    if ($tmp1611) goto $l1618; else goto $l1619;
    $l1618:;
    if ($tmp1608 <= $tmp1610) goto $l1612; else goto $l1614;
    $l1619:;
    if ($tmp1608 < $tmp1610) goto $l1612; else goto $l1614;
    $l1612:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1621, ((uint64_t) self->data[i1607.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1622, 48);
        panda$core$UInt64 $tmp1623 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1621, $tmp1622);
        digit1620 = $tmp1623;
        panda$core$UInt64$init$builtin_uint64(&$tmp1625, 0);
        panda$core$Bit $tmp1626 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1620, $tmp1625);
        bool $tmp1624 = $tmp1626.value;
        if ($tmp1624) goto $l1627;
        panda$core$UInt64$init$builtin_uint64(&$tmp1628, 9);
        panda$core$Bit $tmp1629 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1620, $tmp1628);
        $tmp1624 = $tmp1629.value;
        $l1627:;
        panda$core$Bit $tmp1630 = { $tmp1624 };
        if ($tmp1630.value) {
        {
            $returnValue1600 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1600;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1632, 10);
        panda$core$UInt64 $tmp1633 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1602, $tmp1632);
        panda$core$UInt64 $tmp1634 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1633, digit1620);
        result1602 = $tmp1634;
    }
    $l1615:;
    int64_t $tmp1636 = $tmp1610 - i1607.value;
    if ($tmp1611) goto $l1637; else goto $l1638;
    $l1637:;
    if ((uint64_t) $tmp1636 >= 1) goto $l1635; else goto $l1614;
    $l1638:;
    if ((uint64_t) $tmp1636 > 1) goto $l1635; else goto $l1614;
    $l1635:;
    i1607.value += 1;
    goto $l1612;
    $l1614:;
    $returnValue1600 = ((panda$core$UInt64$nullable) { result1602, true });
    return $returnValue1600;
}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* self) {
    panda$core$Real64$nullable $returnValue1642;
    panda$core$Real64 $tmp1643;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp1643, self);
    $returnValue1642 = ((panda$core$Real64$nullable) { $tmp1643, true });
    return $returnValue1642;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1645;
    panda$core$Int64 h1647;
    panda$core$Int64 $tmp1648;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1649;
    panda$core$Int64 $tmp1650;
    panda$core$Bit $tmp1651;
    panda$core$Int64 $tmp1665;
    panda$core$Int64 $tmp1667;
    panda$core$Int64 $returnValue1675;
    panda$core$Int64$init$builtin_int64(&$tmp1645, 0);
    panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1645);
    if ($tmp1646.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1648, 1);
        h1647 = $tmp1648;
        panda$core$Int64$init$builtin_int64(&$tmp1650, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1651, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1649, $tmp1650, self->_length, $tmp1651);
        int64_t $tmp1653 = $tmp1649.min.value;
        panda$core$Int64 i1652 = { $tmp1653 };
        int64_t $tmp1655 = $tmp1649.max.value;
        bool $tmp1656 = $tmp1649.inclusive.value;
        if ($tmp1656) goto $l1663; else goto $l1664;
        $l1663:;
        if ($tmp1653 <= $tmp1655) goto $l1657; else goto $l1659;
        $l1664:;
        if ($tmp1653 < $tmp1655) goto $l1657; else goto $l1659;
        $l1657:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1665, 101);
            panda$core$Int64 $tmp1666 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1647, $tmp1665);
            panda$core$Int64$init$builtin_int64(&$tmp1667, ((int64_t) self->data[i1652.value].value));
            panda$core$Int64 $tmp1668 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1666, $tmp1667);
            h1647 = $tmp1668;
        }
        $l1660:;
        int64_t $tmp1670 = $tmp1655 - i1652.value;
        if ($tmp1656) goto $l1671; else goto $l1672;
        $l1671:;
        if ((uint64_t) $tmp1670 >= 1) goto $l1669; else goto $l1659;
        $l1672:;
        if ((uint64_t) $tmp1670 > 1) goto $l1669; else goto $l1659;
        $l1669:;
        i1652.value += 1;
        goto $l1657;
        $l1659:;
        self->_hash = h1647;
    }
    }
    $returnValue1675 = self->_hash;
    return $returnValue1675;
}

