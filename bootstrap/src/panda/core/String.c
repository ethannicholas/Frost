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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn327)(panda$core$Object*);
typedef panda$core$String* (*$fn377)(panda$core$Object*);
typedef panda$core$Object* (*$fn1108)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn1109)(panda$core$String*);
typedef panda$core$String* (*$fn1110)(panda$core$Object*);
typedef panda$core$Object* (*$fn1170)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1171)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1172)(panda$core$Object*);

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
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 172, -4332006218848187331, NULL };

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
    panda$core$String* $match$363_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$368$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$369_2192;
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
        $match$363_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$363_948, &$s50);
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
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$363_948, &$s56);
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
                        Iter$368$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$368$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$368$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$368$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$368$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp87);
                            {
                                $match$369_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$369_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$369_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$369_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$369_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$369_2192, $tmp109);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$368$1769));
                    Iter$368$1769 = NULL;
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 389 });
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, (panda$core$Int64) { 514 }, &$s336);
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
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue373;
    panda$core$String* $tmp374;
    panda$core$String* $tmp375;
    panda$core$String* $tmp376;
    panda$core$String* $tmp378 = (($fn377) p_o->$class->vtable[0])(p_o);
    $tmp376 = $tmp378;
    panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, p_s);
    $tmp375 = $tmp379;
    $tmp374 = $tmp375;
    $returnValue373 = $tmp374;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
    return $returnValue373;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue382;
    panda$core$Bit $tmp383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp385;
    panda$core$Int64 $tmp386;
    panda$core$Bit $tmp387;
    panda$core$Bit $tmp402;
    panda$core$Bit $tmp410;
    panda$core$Bit $tmp381 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp381.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp383, false);
        $returnValue382 = $tmp383;
        return $returnValue382;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp386, 0);
    panda$core$Bit$init$builtin_bit(&$tmp387, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp385, $tmp386, self->_length, $tmp387);
    int64_t $tmp389 = $tmp385.min.value;
    panda$core$Int64 i388 = { $tmp389 };
    int64_t $tmp391 = $tmp385.max.value;
    bool $tmp392 = $tmp385.inclusive.value;
    if ($tmp392) goto $l399; else goto $l400;
    $l399:;
    if ($tmp389 <= $tmp391) goto $l393; else goto $l395;
    $l400:;
    if ($tmp389 < $tmp391) goto $l393; else goto $l395;
    $l393:;
    {
        panda$core$Bit $tmp401 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i388.value], p_other->data[i388.value]);
        if ($tmp401.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp402, false);
            $returnValue382 = $tmp402;
            return $returnValue382;
        }
        }
    }
    $l396:;
    int64_t $tmp405 = $tmp391 - i388.value;
    if ($tmp392) goto $l406; else goto $l407;
    $l406:;
    if ((uint64_t) $tmp405 >= 1) goto $l404; else goto $l395;
    $l407:;
    if ((uint64_t) $tmp405 > 1) goto $l404; else goto $l395;
    $l404:;
    i388.value += 1;
    goto $l393;
    $l395:;
    panda$core$Bit$init$builtin_bit(&$tmp410, true);
    $returnValue382 = $tmp410;
    return $returnValue382;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx412;
    panda$core$Char8 c413;
    panda$core$Int32 result414;
    panda$core$Bit $tmp416;
    panda$core$Char32 $returnValue419;
    panda$core$Char32 $tmp420;
    panda$core$Bit $tmp422;
    panda$core$Int64 $tmp425;
    panda$core$Int32 $tmp431;
    panda$core$Int32 $tmp433;
    panda$core$Int64 $tmp435;
    panda$core$Int32 $tmp438;
    panda$core$Char32 $tmp441;
    panda$core$Bit $tmp443;
    panda$core$Int64 $tmp446;
    panda$core$Int32 $tmp452;
    panda$core$Int32 $tmp454;
    panda$core$Int64 $tmp456;
    panda$core$Int32 $tmp459;
    panda$core$Int32 $tmp461;
    panda$core$Int64 $tmp464;
    panda$core$Int32 $tmp467;
    panda$core$Char32 $tmp470;
    panda$core$Int64 $tmp472;
    panda$core$Int32 $tmp478;
    panda$core$Int32 $tmp480;
    panda$core$Int64 $tmp482;
    panda$core$Int32 $tmp485;
    panda$core$Int32 $tmp487;
    panda$core$Int64 $tmp490;
    panda$core$Int32 $tmp493;
    panda$core$Int32 $tmp495;
    panda$core$Int64 $tmp498;
    panda$core$Int32 $tmp501;
    panda$core$Char32 $tmp504;
    idx412 = p_index.value;
    c413 = self->data[idx412.value];
    panda$core$Int32 $tmp415 = panda$core$Char8$convert$R$panda$core$Int32(c413);
    result414 = $tmp415;
    int64_t $tmp417 = ((int64_t) c413.value) & 255;
    bool $tmp418 = $tmp417 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp416, $tmp418);
    if ($tmp416.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp420, result414);
        $returnValue419 = $tmp420;
        return $returnValue419;
    }
    }
    int64_t $tmp423 = ((int64_t) c413.value) & 255;
    bool $tmp424 = $tmp423 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp422, $tmp424);
    if ($tmp422.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp425, 1);
        panda$core$Int64 $tmp426 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp425);
        panda$core$Bit $tmp427 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp426, self->_length);
        if ($tmp427.value) goto $l428; else goto $l429;
        $l429:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s430, (panda$core$Int64) { 563 });
        abort();
        $l428:;
        panda$core$Int32$init$builtin_int32(&$tmp431, 31);
        panda$core$Int32 $tmp432 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result414, $tmp431);
        panda$core$Int32$init$builtin_int32(&$tmp433, 6);
        panda$core$Int32 $tmp434 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp432, $tmp433);
        panda$core$Int64$init$builtin_int64(&$tmp435, 1);
        panda$core$Int64 $tmp436 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp435);
        panda$core$Int32 $tmp437 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp436.value]);
        panda$core$Int32$init$builtin_int32(&$tmp438, 63);
        panda$core$Int32 $tmp439 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp437, $tmp438);
        panda$core$Int32 $tmp440 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp434, $tmp439);
        result414 = $tmp440;
        panda$core$Char32$init$panda$core$Int32(&$tmp441, result414);
        $returnValue419 = $tmp441;
        return $returnValue419;
    }
    }
    int64_t $tmp444 = ((int64_t) c413.value) & 255;
    bool $tmp445 = $tmp444 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp443, $tmp445);
    if ($tmp443.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp446, 2);
        panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp446);
        panda$core$Bit $tmp448 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp447, self->_length);
        if ($tmp448.value) goto $l449; else goto $l450;
        $l450:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s451, (panda$core$Int64) { 568 });
        abort();
        $l449:;
        panda$core$Int32$init$builtin_int32(&$tmp452, 15);
        panda$core$Int32 $tmp453 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result414, $tmp452);
        panda$core$Int32$init$builtin_int32(&$tmp454, 12);
        panda$core$Int32 $tmp455 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp453, $tmp454);
        panda$core$Int64$init$builtin_int64(&$tmp456, 1);
        panda$core$Int64 $tmp457 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp456);
        panda$core$Int32 $tmp458 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp457.value]);
        panda$core$Int32$init$builtin_int32(&$tmp459, 63);
        panda$core$Int32 $tmp460 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp458, $tmp459);
        panda$core$Int32$init$builtin_int32(&$tmp461, 6);
        panda$core$Int32 $tmp462 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp460, $tmp461);
        panda$core$Int32 $tmp463 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp455, $tmp462);
        panda$core$Int64$init$builtin_int64(&$tmp464, 2);
        panda$core$Int64 $tmp465 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp464);
        panda$core$Int32 $tmp466 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp465.value]);
        panda$core$Int32$init$builtin_int32(&$tmp467, 63);
        panda$core$Int32 $tmp468 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp466, $tmp467);
        panda$core$Int32 $tmp469 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp463, $tmp468);
        result414 = $tmp469;
        panda$core$Char32$init$panda$core$Int32(&$tmp470, result414);
        $returnValue419 = $tmp470;
        return $returnValue419;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp472, 3);
    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp472);
    panda$core$Bit $tmp474 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp473, self->_length);
    if ($tmp474.value) goto $l475; else goto $l476;
    $l476:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s477, (panda$core$Int64) { 573 });
    abort();
    $l475:;
    panda$core$Int32$init$builtin_int32(&$tmp478, 7);
    panda$core$Int32 $tmp479 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result414, $tmp478);
    panda$core$Int32$init$builtin_int32(&$tmp480, 18);
    panda$core$Int32 $tmp481 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp479, $tmp480);
    panda$core$Int64$init$builtin_int64(&$tmp482, 1);
    panda$core$Int64 $tmp483 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp482);
    panda$core$Int32 $tmp484 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp483.value]);
    panda$core$Int32$init$builtin_int32(&$tmp485, 63);
    panda$core$Int32 $tmp486 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp484, $tmp485);
    panda$core$Int32$init$builtin_int32(&$tmp487, 12);
    panda$core$Int32 $tmp488 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp486, $tmp487);
    panda$core$Int32 $tmp489 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp481, $tmp488);
    panda$core$Int64$init$builtin_int64(&$tmp490, 2);
    panda$core$Int64 $tmp491 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp490);
    panda$core$Int32 $tmp492 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp491.value]);
    panda$core$Int32$init$builtin_int32(&$tmp493, 63);
    panda$core$Int32 $tmp494 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp492, $tmp493);
    panda$core$Int32$init$builtin_int32(&$tmp495, 6);
    panda$core$Int32 $tmp496 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp494, $tmp495);
    panda$core$Int32 $tmp497 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp489, $tmp496);
    panda$core$Int64$init$builtin_int64(&$tmp498, 3);
    panda$core$Int64 $tmp499 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx412, $tmp498);
    panda$core$Int32 $tmp500 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp499.value]);
    panda$core$Int32$init$builtin_int32(&$tmp501, 63);
    panda$core$Int32 $tmp502 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp500, $tmp501);
    panda$core$Int32 $tmp503 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp497, $tmp502);
    result414 = $tmp503;
    panda$core$Char32$init$panda$core$Int32(&$tmp504, result414);
    $returnValue419 = $tmp504;
    return $returnValue419;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue506;
    panda$core$String$Index $tmp507 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp508 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp507, p_index);
    panda$core$Char32 $tmp509 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp508);
    $returnValue506 = $tmp509;
    return $returnValue506;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 length511;
    panda$core$Int64 $tmp513;
    panda$core$String* $returnValue515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$Int64 $tmp512 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    length511 = $tmp512;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp513, 1);
        panda$core$Int64 $tmp514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(length511, $tmp513);
        length511 = $tmp514;
    }
    }
    panda$core$String* $tmp518 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp518, (self->data + p_r.min.value.value), length511, self);
    $tmp517 = $tmp518;
    $tmp516 = $tmp517;
    $returnValue515 = $tmp516;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
    return $returnValue515;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min520;
    panda$core$Bit inclusive522;
    panda$core$String$Index max523;
    panda$core$Bit $tmp525;
    panda$core$String* $returnValue526;
    panda$core$String* $tmp527;
    panda$core$String* $tmp528;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp529;
    memset(&min520, 0, sizeof(min520));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min520 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp521 = panda$core$String$start$R$panda$core$String$Index(self);
        min520 = $tmp521;
    }
    }
    inclusive522 = p_r.inclusive;
    memset(&max523, 0, sizeof(max523));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max523 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp524 = panda$core$String$end$R$panda$core$String$Index(self);
        max523 = $tmp524;
        panda$core$Bit$init$builtin_bit(&$tmp525, false);
        inclusive522 = $tmp525;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp529, min520, max523, inclusive522);
    panda$core$String* $tmp530 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp529);
    $tmp528 = $tmp530;
    $tmp527 = $tmp528;
    $returnValue526 = $tmp527;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
    return $returnValue526;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current535;
    panda$core$MutableString* result536 = NULL;
    panda$core$MutableString* $tmp537;
    panda$core$MutableString* $tmp538;
    panda$core$Int64 max540;
    panda$core$Int64 $tmp541;
    panda$core$Char8 c547;
    panda$core$Int64 $tmp548;
    panda$core$Bit $tmp550;
    panda$core$Int64 $tmp553;
    panda$core$Bit $tmp555;
    panda$core$Int64 $tmp558;
    panda$core$Bit $tmp560;
    panda$core$Int64 $tmp563;
    panda$core$String* $returnValue565;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    int $tmp534;
    {
        current535 = p_r.min.value;
        panda$core$MutableString* $tmp539 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp539);
        $tmp538 = $tmp539;
        $tmp537 = $tmp538;
        result536 = $tmp537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
        max540 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp541, 1);
            panda$core$Int64 $tmp542 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max540, $tmp541);
            max540 = $tmp542;
        }
        }
        $l543:;
        panda$core$Bit $tmp546 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current535, max540);
        bool $tmp545 = $tmp546.value;
        if (!$tmp545) goto $l544;
        {
            c547 = self->data[current535.value];
            panda$core$MutableString$append$panda$core$Char8(result536, c547);
            panda$core$Int64$init$builtin_int64(&$tmp548, 1);
            panda$core$Int64 $tmp549 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current535, $tmp548);
            current535 = $tmp549;
            int64_t $tmp551 = ((int64_t) c547.value) & 255;
            bool $tmp552 = $tmp551 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp550, $tmp552);
            if ($tmp550.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result536, self->data[current535.value]);
                panda$core$Int64$init$builtin_int64(&$tmp553, 1);
                panda$core$Int64 $tmp554 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current535, $tmp553);
                current535 = $tmp554;
            }
            }
            int64_t $tmp556 = ((int64_t) c547.value) & 255;
            bool $tmp557 = $tmp556 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp555, $tmp557);
            if ($tmp555.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result536, self->data[current535.value]);
                panda$core$Int64$init$builtin_int64(&$tmp558, 1);
                panda$core$Int64 $tmp559 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current535, $tmp558);
                current535 = $tmp559;
            }
            }
            int64_t $tmp561 = ((int64_t) c547.value) & 255;
            bool $tmp562 = $tmp561 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp560, $tmp562);
            if ($tmp560.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result536, self->data[current535.value]);
                panda$core$Int64$init$builtin_int64(&$tmp563, 1);
                panda$core$Int64 $tmp564 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current535, $tmp563);
                current535 = $tmp564;
            }
            }
        }
        goto $l543;
        $l544:;
        panda$core$String* $tmp568 = panda$core$MutableString$finish$R$panda$core$String(result536);
        $tmp567 = $tmp568;
        $tmp566 = $tmp567;
        $returnValue565 = $tmp566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
        $tmp534 = 0;
        goto $l532;
        $l569:;
        return $returnValue565;
    }
    $l532:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result536));
    result536 = NULL;
    switch ($tmp534) {
        case 0: goto $l569;
    }
    $l571:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp572;
    panda$core$String* $returnValue574;
    panda$core$String* $tmp575;
    panda$core$String$Index min578;
    panda$core$Bit inclusive580;
    panda$core$String$Index max581;
    panda$core$Bit $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp585;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp586;
    panda$core$Int64$init$builtin_int64(&$tmp572, 0);
    panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp572);
    if ($tmp573.value) {
    {
        $tmp575 = &$s576;
        $returnValue574 = $tmp575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
        return $returnValue574;
    }
    }
    memset(&min578, 0, sizeof(min578));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min578 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp579 = panda$core$String$start$R$panda$core$String$Index(self);
        min578 = $tmp579;
    }
    }
    inclusive580 = p_r.inclusive;
    memset(&max581, 0, sizeof(max581));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max581 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp582 = panda$core$String$end$R$panda$core$String$Index(self);
        max581 = $tmp582;
        panda$core$Bit$init$builtin_bit(&$tmp583, false);
        inclusive580 = $tmp583;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp586, min578, max581, inclusive580);
    panda$core$String* $tmp587 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp586);
    $tmp585 = $tmp587;
    $tmp584 = $tmp585;
    $returnValue574 = $tmp584;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
    return $returnValue574;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp592;
    panda$core$String* $returnValue594;
    panda$core$String* $tmp595;
    panda$core$Int64 step599;
    panda$core$Int64 current600;
    panda$core$Int64 $tmp601;
    panda$core$Int64 end606;
    panda$core$Int64 $tmp607;
    panda$core$MutableString* result611 = NULL;
    panda$core$MutableString* $tmp612;
    panda$core$MutableString* $tmp613;
    panda$core$Int64 $tmp615;
    panda$core$Char8 c621;
    panda$core$Int64 $tmp622;
    panda$core$Bit $tmp624;
    panda$core$Int64 $tmp627;
    panda$core$Bit $tmp629;
    panda$core$Int64 $tmp632;
    panda$core$Bit $tmp634;
    panda$core$Int64 $tmp637;
    panda$core$Range$LTpanda$core$Int64$GT $tmp639;
    panda$core$Int64 $tmp640;
    panda$core$Bit $tmp641;
    panda$core$String* $tmp656;
    panda$core$String* $tmp657;
    panda$core$String$Index $tmp661;
    panda$core$Int64 $tmp669;
    panda$core$Char8 c678;
    panda$core$Int64 old679;
    panda$core$Int64 $tmp680;
    panda$core$Bit $tmp682;
    panda$core$Int64 $tmp685;
    panda$core$Bit $tmp687;
    panda$core$Int64 $tmp690;
    panda$core$Bit $tmp692;
    panda$core$Int64 $tmp695;
    panda$core$Bit $tmp700;
    panda$core$Int64 $tmp707;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp709;
    panda$core$Int64 $tmp710;
    panda$core$Int64 $tmp711;
    panda$core$Bit $tmp712;
    panda$core$String* $tmp732;
    panda$core$String* $tmp733;
    panda$core$String$Index $tmp737;
    panda$core$Char8 c761;
    panda$core$Int64 $tmp762;
    panda$core$Bit $tmp764;
    panda$core$Int64 $tmp767;
    panda$core$Bit $tmp769;
    panda$core$Int64 $tmp772;
    panda$core$Bit $tmp774;
    panda$core$String* $tmp777;
    panda$core$String* $tmp778;
    int $tmp591;
    {
        panda$core$Int64$init$builtin_int64(&$tmp592, 0);
        panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp592);
        if ($tmp593.value) {
        {
            $tmp595 = &$s596;
            $returnValue594 = $tmp595;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
            $tmp591 = 0;
            goto $l589;
            $l597:;
            return $returnValue594;
        }
        }
        step599 = p_r.step;
        memset(&current600, 0, sizeof(current600));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current600 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp601, 0);
        panda$core$Bit $tmp602 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step599, $tmp601);
        if ($tmp602.value) {
        {
            panda$core$String$Index $tmp603 = panda$core$String$start$R$panda$core$String$Index(self);
            current600 = $tmp603.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp604 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp605 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp604);
            current600 = $tmp605.value;
        }
        }
        }
        memset(&end606, 0, sizeof(end606));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end606 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp607, 0);
        panda$core$Bit $tmp608 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step599, $tmp607);
        if ($tmp608.value) {
        {
            panda$core$String$Index $tmp609 = panda$core$String$end$R$panda$core$String$Index(self);
            end606 = $tmp609.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp610 = panda$core$String$start$R$panda$core$String$Index(self);
            end606 = $tmp610.value;
        }
        }
        }
        panda$core$MutableString* $tmp614 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp614);
        $tmp613 = $tmp614;
        $tmp612 = $tmp613;
        result611 = $tmp612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
        panda$core$Int64$init$builtin_int64(&$tmp615, 0);
        panda$core$Bit $tmp616 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp615);
        if ($tmp616.value) {
        {
            $l617:;
            panda$core$Bit $tmp620 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current600, end606);
            bool $tmp619 = $tmp620.value;
            if (!$tmp619) goto $l618;
            {
                c621 = self->data[current600.value];
                panda$core$MutableString$append$panda$core$Char8(result611, c621);
                panda$core$Int64$init$builtin_int64(&$tmp622, 1);
                panda$core$Int64 $tmp623 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp622);
                current600 = $tmp623;
                int64_t $tmp625 = ((int64_t) c621.value) & 255;
                bool $tmp626 = $tmp625 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp624, $tmp626);
                if ($tmp624.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp627, 1);
                    panda$core$Int64 $tmp628 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp627);
                    current600 = $tmp628;
                }
                }
                int64_t $tmp630 = ((int64_t) c621.value) & 255;
                bool $tmp631 = $tmp630 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp629, $tmp631);
                if ($tmp629.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp632, 1);
                    panda$core$Int64 $tmp633 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp632);
                    current600 = $tmp633;
                }
                }
                int64_t $tmp635 = ((int64_t) c621.value) & 255;
                bool $tmp636 = $tmp635 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp634, $tmp636);
                if ($tmp634.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp637, 1);
                    panda$core$Int64 $tmp638 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp637);
                    current600 = $tmp638;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp640, 1);
                panda$core$Bit$init$builtin_bit(&$tmp641, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp639, $tmp640, step599, $tmp641);
                int64_t $tmp643 = $tmp639.min.value;
                panda$core$Int64 i642 = { $tmp643 };
                int64_t $tmp645 = $tmp639.max.value;
                bool $tmp646 = $tmp639.inclusive.value;
                if ($tmp646) goto $l653; else goto $l654;
                $l653:;
                if ($tmp643 <= $tmp645) goto $l647; else goto $l649;
                $l654:;
                if ($tmp643 < $tmp645) goto $l647; else goto $l649;
                $l647:;
                {
                    panda$core$Bit $tmp655 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current600, end606);
                    if ($tmp655.value) {
                    {
                        panda$core$String* $tmp658 = panda$core$MutableString$convert$R$panda$core$String(result611);
                        $tmp657 = $tmp658;
                        $tmp656 = $tmp657;
                        $returnValue594 = $tmp656;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp656));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                        $tmp591 = 1;
                        goto $l589;
                        $l659:;
                        return $returnValue594;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp661, current600);
                    panda$core$String$Index $tmp662 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp661);
                    current600 = $tmp662.value;
                }
                $l650:;
                int64_t $tmp664 = $tmp645 - i642.value;
                if ($tmp646) goto $l665; else goto $l666;
                $l665:;
                if ((uint64_t) $tmp664 >= 1) goto $l663; else goto $l649;
                $l666:;
                if ((uint64_t) $tmp664 > 1) goto $l663; else goto $l649;
                $l663:;
                i642.value += 1;
                goto $l647;
                $l649:;
            }
            goto $l617;
            $l618:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp669, 0);
            panda$core$Bit $tmp670 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp669);
            if ($tmp670.value) goto $l671; else goto $l672;
            $l672:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s673, (panda$core$Int64) { 766 });
            abort();
            $l671:;
            $l674:;
            panda$core$Bit $tmp677 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current600, end606);
            bool $tmp676 = $tmp677.value;
            if (!$tmp676) goto $l675;
            {
                c678 = self->data[current600.value];
                panda$core$MutableString$append$panda$core$Char8(result611, c678);
                old679 = current600;
                panda$core$Int64$init$builtin_int64(&$tmp680, 1);
                panda$core$Int64 $tmp681 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp680);
                current600 = $tmp681;
                int64_t $tmp683 = ((int64_t) c678.value) & 255;
                bool $tmp684 = $tmp683 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp682, $tmp684);
                if ($tmp682.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp685, 1);
                    panda$core$Int64 $tmp686 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp685);
                    current600 = $tmp686;
                }
                }
                int64_t $tmp688 = ((int64_t) c678.value) & 255;
                bool $tmp689 = $tmp688 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp687, $tmp689);
                if ($tmp687.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp690, 1);
                    panda$core$Int64 $tmp691 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp690);
                    current600 = $tmp691;
                }
                }
                int64_t $tmp693 = ((int64_t) c678.value) & 255;
                bool $tmp694 = $tmp693 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp692, $tmp694);
                if ($tmp692.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp695, 1);
                panda$core$Int64 $tmp696 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old679, $tmp695);
                current600 = $tmp696;
                $l697:;
                int64_t $tmp702 = ((int64_t) self->data[current600.value].value) & 255;
                bool $tmp703 = $tmp702 >= 128;
                bool $tmp701 = $tmp703;
                if (!$tmp701) goto $l704;
                int64_t $tmp705 = ((int64_t) self->data[current600.value].value) & 255;
                bool $tmp706 = $tmp705 < 192;
                $tmp701 = $tmp706;
                $l704:;
                panda$core$Bit$init$builtin_bit(&$tmp700, $tmp701);
                bool $tmp699 = $tmp700.value;
                if (!$tmp699) goto $l698;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp707, 1);
                    panda$core$Int64 $tmp708 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current600, $tmp707);
                    current600 = $tmp708;
                }
                goto $l697;
                $l698:;
                panda$core$Int64$init$builtin_int64(&$tmp710, -1);
                panda$core$Int64$init$builtin_int64(&$tmp711, -1);
                panda$core$Bit$init$builtin_bit(&$tmp712, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp709, $tmp710, step599, $tmp711, $tmp712);
                int64_t $tmp714 = $tmp709.start.value;
                panda$core$Int64 i713 = { $tmp714 };
                int64_t $tmp716 = $tmp709.end.value;
                int64_t $tmp717 = $tmp709.step.value;
                bool $tmp718 = $tmp709.inclusive.value;
                bool $tmp725 = $tmp717 > 0;
                if ($tmp725) goto $l723; else goto $l724;
                $l723:;
                if ($tmp718) goto $l726; else goto $l727;
                $l726:;
                if ($tmp714 <= $tmp716) goto $l719; else goto $l721;
                $l727:;
                if ($tmp714 < $tmp716) goto $l719; else goto $l721;
                $l724:;
                if ($tmp718) goto $l728; else goto $l729;
                $l728:;
                if ($tmp714 >= $tmp716) goto $l719; else goto $l721;
                $l729:;
                if ($tmp714 > $tmp716) goto $l719; else goto $l721;
                $l719:;
                {
                    panda$core$Bit $tmp731 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current600, end606);
                    if ($tmp731.value) {
                    {
                        panda$core$String* $tmp734 = panda$core$MutableString$convert$R$panda$core$String(result611);
                        $tmp733 = $tmp734;
                        $tmp732 = $tmp733;
                        $returnValue594 = $tmp732;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp732));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                        $tmp591 = 2;
                        goto $l589;
                        $l735:;
                        return $returnValue594;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp737, current600);
                    panda$core$String$Index $tmp738 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp737);
                    current600 = $tmp738.value;
                }
                $l722:;
                if ($tmp725) goto $l740; else goto $l741;
                $l740:;
                int64_t $tmp742 = $tmp716 - i713.value;
                if ($tmp718) goto $l743; else goto $l744;
                $l743:;
                if ((uint64_t) $tmp742 >= $tmp717) goto $l739; else goto $l721;
                $l744:;
                if ((uint64_t) $tmp742 > $tmp717) goto $l739; else goto $l721;
                $l741:;
                int64_t $tmp746 = i713.value - $tmp716;
                if ($tmp718) goto $l747; else goto $l748;
                $l747:;
                if ((uint64_t) $tmp746 >= -$tmp717) goto $l739; else goto $l721;
                $l748:;
                if ((uint64_t) $tmp746 > -$tmp717) goto $l739; else goto $l721;
                $l739:;
                i713.value += $tmp717;
                goto $l719;
                $l721:;
            }
            goto $l674;
            $l675:;
        }
        }
        bool $tmp752 = p_r.inclusive.value;
        if ($tmp752) goto $l753;
        $tmp752 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l753:;
        panda$core$Bit $tmp754 = { $tmp752 };
        bool $tmp751 = $tmp754.value;
        if (!$tmp751) goto $l755;
        panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current600, end606);
        $tmp751 = $tmp756.value;
        $l755:;
        panda$core$Bit $tmp757 = { $tmp751 };
        bool $tmp750 = $tmp757.value;
        if (!$tmp750) goto $l758;
        panda$core$Bit $tmp759 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end606, self->_length);
        $tmp750 = $tmp759.value;
        $l758:;
        panda$core$Bit $tmp760 = { $tmp750 };
        if ($tmp760.value) {
        {
            c761 = self->data[current600.value];
            panda$core$MutableString$append$panda$core$Char8(result611, c761);
            panda$core$Int64$init$builtin_int64(&$tmp762, 1);
            panda$core$Int64 $tmp763 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp762);
            current600 = $tmp763;
            int64_t $tmp765 = ((int64_t) c761.value) & 255;
            bool $tmp766 = $tmp765 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp764, $tmp766);
            if ($tmp764.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                panda$core$Int64$init$builtin_int64(&$tmp767, 1);
                panda$core$Int64 $tmp768 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp767);
                current600 = $tmp768;
            }
            }
            int64_t $tmp770 = ((int64_t) c761.value) & 255;
            bool $tmp771 = $tmp770 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp769, $tmp771);
            if ($tmp769.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
                panda$core$Int64$init$builtin_int64(&$tmp772, 1);
                panda$core$Int64 $tmp773 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current600, $tmp772);
                current600 = $tmp773;
            }
            }
            int64_t $tmp775 = ((int64_t) c761.value) & 255;
            bool $tmp776 = $tmp775 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp774, $tmp776);
            if ($tmp774.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result611, self->data[current600.value]);
            }
            }
        }
        }
        panda$core$String* $tmp779 = panda$core$MutableString$finish$R$panda$core$String(result611);
        $tmp778 = $tmp779;
        $tmp777 = $tmp778;
        $returnValue594 = $tmp777;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
        $tmp591 = 3;
        goto $l589;
        $l780:;
        return $returnValue594;
    }
    $l589:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result611));
    result611 = NULL;
    switch ($tmp591) {
        case 2: goto $l735;
        case 3: goto $l780;
        case 0: goto $l597;
        case 1: goto $l659;
    }
    $l782:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start783;
    panda$core$String$Index$nullable end786;
    panda$core$String* $returnValue789;
    panda$core$String* $tmp790;
    panda$core$String* $tmp791;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp792;
    memset(&start783, 0, sizeof(start783));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp784 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp785 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp784, ((panda$core$Int64) p_r.min.value));
        start783 = ((panda$core$String$Index$nullable) { $tmp785, true });
    }
    }
    else {
    {
        start783 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end786, 0, sizeof(end786));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp787 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp788 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp787, ((panda$core$Int64) p_r.max.value));
        end786 = ((panda$core$String$Index$nullable) { $tmp788, true });
    }
    }
    else {
    {
        end786 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp792, start783, end786, p_r.inclusive);
    panda$core$String* $tmp793 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp792);
    $tmp791 = $tmp793;
    $tmp790 = $tmp791;
    $returnValue789 = $tmp790;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp790));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
    return $returnValue789;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start795;
    panda$core$String$Index$nullable end798;
    panda$core$String* $returnValue801;
    panda$core$String* $tmp802;
    panda$core$String* $tmp803;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp804;
    memset(&start795, 0, sizeof(start795));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp796 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp797 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp796, ((panda$core$Int64) p_r.start.value));
        start795 = ((panda$core$String$Index$nullable) { $tmp797, true });
    }
    }
    else {
    {
        start795 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end798, 0, sizeof(end798));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp799 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp800 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp799, ((panda$core$Int64) p_r.end.value));
        end798 = ((panda$core$String$Index$nullable) { $tmp800, true });
    }
    }
    else {
    {
        end798 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp804, start795, end798, p_r.step, p_r.inclusive);
    panda$core$String* $tmp805 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp804);
    $tmp803 = $tmp805;
    $tmp802 = $tmp803;
    $returnValue801 = $tmp802;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
    return $returnValue801;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp807;
    panda$core$Int64 $tmp808;
    panda$core$Bit $tmp809;
    panda$core$Bit $returnValue824;
    panda$core$Bit $tmp825;
    panda$core$Bit $tmp833;
    panda$core$Int64$init$builtin_int64(&$tmp808, 0);
    panda$core$Bit$init$builtin_bit(&$tmp809, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp807, $tmp808, self->_length, $tmp809);
    int64_t $tmp811 = $tmp807.min.value;
    panda$core$Int64 i810 = { $tmp811 };
    int64_t $tmp813 = $tmp807.max.value;
    bool $tmp814 = $tmp807.inclusive.value;
    if ($tmp814) goto $l821; else goto $l822;
    $l821:;
    if ($tmp811 <= $tmp813) goto $l815; else goto $l817;
    $l822:;
    if ($tmp811 < $tmp813) goto $l815; else goto $l817;
    $l815:;
    {
        panda$core$Bit $tmp823 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i810.value], p_c);
        if ($tmp823.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp825, true);
            $returnValue824 = $tmp825;
            return $returnValue824;
        }
        }
    }
    $l818:;
    int64_t $tmp828 = $tmp813 - i810.value;
    if ($tmp814) goto $l829; else goto $l830;
    $l829:;
    if ((uint64_t) $tmp828 >= 1) goto $l827; else goto $l817;
    $l830:;
    if ((uint64_t) $tmp828 > 1) goto $l827; else goto $l817;
    $l827:;
    i810.value += 1;
    goto $l815;
    $l817:;
    panda$core$Bit$init$builtin_bit(&$tmp833, false);
    $returnValue824 = $tmp833;
    return $returnValue824;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue835;
    panda$core$String$Index$nullable $tmp836 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue835 = ((panda$core$Bit) { $tmp836.nonnull });
    return $returnValue835;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue838;
    panda$core$String$Index $tmp839 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp840 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp839);
    $returnValue838 = $tmp840;
    return $returnValue838;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue843;
    panda$core$Range$LTpanda$core$Int64$GT $tmp845;
    panda$core$Bit $tmp847;
    panda$core$Range$LTpanda$core$Int64$GT $tmp861;
    panda$core$Int64 $tmp862;
    panda$core$Bit $tmp863;
    panda$core$String$Index $tmp885;
    panda$core$Bit $tmp842 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp842.value) {
    {
        $returnValue843 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue843;
    }
    }
    panda$core$Int64 $tmp846 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp847, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp845, p_start.value, $tmp846, $tmp847);
    int64_t $tmp849 = $tmp845.min.value;
    panda$core$Int64 i848 = { $tmp849 };
    int64_t $tmp851 = $tmp845.max.value;
    bool $tmp852 = $tmp845.inclusive.value;
    if ($tmp852) goto $l859; else goto $l860;
    $l859:;
    if ($tmp849 <= $tmp851) goto $l853; else goto $l855;
    $l860:;
    if ($tmp849 < $tmp851) goto $l853; else goto $l855;
    $l853:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp862, 0);
        panda$core$Bit$init$builtin_bit(&$tmp863, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp861, $tmp862, p_s->_length, $tmp863);
        int64_t $tmp865 = $tmp861.min.value;
        panda$core$Int64 j864 = { $tmp865 };
        int64_t $tmp867 = $tmp861.max.value;
        bool $tmp868 = $tmp861.inclusive.value;
        if ($tmp868) goto $l875; else goto $l876;
        $l875:;
        if ($tmp865 <= $tmp867) goto $l869; else goto $l871;
        $l876:;
        if ($tmp865 < $tmp867) goto $l869; else goto $l871;
        $l869:;
        {
            panda$core$Int64 $tmp877 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i848, j864);
            panda$core$Bit $tmp878 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp877.value], p_s->data[j864.value]);
            if ($tmp878.value) {
            {
                goto $l856;
            }
            }
        }
        $l872:;
        int64_t $tmp880 = $tmp867 - j864.value;
        if ($tmp868) goto $l881; else goto $l882;
        $l881:;
        if ((uint64_t) $tmp880 >= 1) goto $l879; else goto $l871;
        $l882:;
        if ((uint64_t) $tmp880 > 1) goto $l879; else goto $l871;
        $l879:;
        j864.value += 1;
        goto $l869;
        $l871:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp885, i848);
        $returnValue843 = ((panda$core$String$Index$nullable) { $tmp885, true });
        return $returnValue843;
    }
    $l856:;
    int64_t $tmp888 = $tmp851 - i848.value;
    if ($tmp852) goto $l889; else goto $l890;
    $l889:;
    if ((uint64_t) $tmp888 >= 1) goto $l887; else goto $l855;
    $l890:;
    if ((uint64_t) $tmp888 > 1) goto $l887; else goto $l855;
    $l887:;
    i848.value += 1;
    goto $l853;
    $l855:;
    $returnValue843 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue843;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue894;
    panda$core$String$Index $tmp895 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp896 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp895);
    $returnValue894 = $tmp896;
    return $returnValue894;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue899;
    panda$core$Int64 startPos901;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp904;
    panda$core$Int64 $tmp905;
    panda$core$Int64 $tmp906;
    panda$core$Bit $tmp907;
    panda$core$Range$LTpanda$core$Int64$GT $tmp926;
    panda$core$Int64 $tmp927;
    panda$core$Bit $tmp928;
    panda$core$String$Index $tmp950;
    panda$core$Bit $tmp898 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp898.value) {
    {
        $returnValue899 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue899;
    }
    }
    panda$core$Int64 $tmp902 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp903 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp902);
    startPos901 = $tmp903;
    panda$core$Int64$init$builtin_int64(&$tmp905, 0);
    panda$core$Int64$init$builtin_int64(&$tmp906, -1);
    panda$core$Bit$init$builtin_bit(&$tmp907, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp904, startPos901, $tmp905, $tmp906, $tmp907);
    int64_t $tmp909 = $tmp904.start.value;
    panda$core$Int64 i908 = { $tmp909 };
    int64_t $tmp911 = $tmp904.end.value;
    int64_t $tmp912 = $tmp904.step.value;
    bool $tmp913 = $tmp904.inclusive.value;
    bool $tmp920 = $tmp912 > 0;
    if ($tmp920) goto $l918; else goto $l919;
    $l918:;
    if ($tmp913) goto $l921; else goto $l922;
    $l921:;
    if ($tmp909 <= $tmp911) goto $l914; else goto $l916;
    $l922:;
    if ($tmp909 < $tmp911) goto $l914; else goto $l916;
    $l919:;
    if ($tmp913) goto $l923; else goto $l924;
    $l923:;
    if ($tmp909 >= $tmp911) goto $l914; else goto $l916;
    $l924:;
    if ($tmp909 > $tmp911) goto $l914; else goto $l916;
    $l914:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp927, 0);
        panda$core$Bit$init$builtin_bit(&$tmp928, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp926, $tmp927, p_s->_length, $tmp928);
        int64_t $tmp930 = $tmp926.min.value;
        panda$core$Int64 j929 = { $tmp930 };
        int64_t $tmp932 = $tmp926.max.value;
        bool $tmp933 = $tmp926.inclusive.value;
        if ($tmp933) goto $l940; else goto $l941;
        $l940:;
        if ($tmp930 <= $tmp932) goto $l934; else goto $l936;
        $l941:;
        if ($tmp930 < $tmp932) goto $l934; else goto $l936;
        $l934:;
        {
            panda$core$Int64 $tmp942 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i908, j929);
            panda$core$Bit $tmp943 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp942.value], p_s->data[j929.value]);
            if ($tmp943.value) {
            {
                goto $l917;
            }
            }
        }
        $l937:;
        int64_t $tmp945 = $tmp932 - j929.value;
        if ($tmp933) goto $l946; else goto $l947;
        $l946:;
        if ((uint64_t) $tmp945 >= 1) goto $l944; else goto $l936;
        $l947:;
        if ((uint64_t) $tmp945 > 1) goto $l944; else goto $l936;
        $l944:;
        j929.value += 1;
        goto $l934;
        $l936:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp950, i908);
        $returnValue899 = ((panda$core$String$Index$nullable) { $tmp950, true });
        return $returnValue899;
    }
    $l917:;
    if ($tmp920) goto $l953; else goto $l954;
    $l953:;
    int64_t $tmp955 = $tmp911 - i908.value;
    if ($tmp913) goto $l956; else goto $l957;
    $l956:;
    if ((uint64_t) $tmp955 >= $tmp912) goto $l952; else goto $l916;
    $l957:;
    if ((uint64_t) $tmp955 > $tmp912) goto $l952; else goto $l916;
    $l954:;
    int64_t $tmp959 = i908.value - $tmp911;
    if ($tmp913) goto $l960; else goto $l961;
    $l960:;
    if ((uint64_t) $tmp959 >= -$tmp912) goto $l952; else goto $l916;
    $l961:;
    if ((uint64_t) $tmp959 > -$tmp912) goto $l952; else goto $l916;
    $l952:;
    i908.value += $tmp912;
    goto $l914;
    $l916:;
    $returnValue899 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue899;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue964;
    panda$core$Matcher* $tmp965;
    panda$core$Bit $tmp967;
    panda$core$Matcher* $tmp966 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp965 = $tmp966;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp967, $tmp965);
    $returnValue964 = $tmp967;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
    return $returnValue964;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue969;
    panda$core$Matcher* $tmp970;
    panda$core$Matcher* $tmp971 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp970 = $tmp971;
    panda$core$Bit $tmp972 = panda$core$Matcher$find$R$panda$core$Bit($tmp970);
    $returnValue969 = $tmp972;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
    return $returnValue969;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher977 = NULL;
    panda$core$Matcher* $tmp978;
    panda$core$Matcher* $tmp979;
    panda$core$Bit $tmp981;
    panda$collections$Array* result985 = NULL;
    panda$collections$Array* $tmp986;
    panda$collections$Array* $tmp987;
    panda$core$Range$LTpanda$core$Int64$GT $tmp989;
    panda$core$Int64 $tmp990;
    panda$core$Int64 $tmp991;
    panda$core$Bit $tmp992;
    panda$core$String* $tmp1006;
    panda$collections$ListView* $returnValue1014;
    panda$collections$ListView* $tmp1015;
    panda$collections$ListView* $tmp1020;
    int $tmp976;
    {
        panda$core$Matcher* $tmp980 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp979 = $tmp980;
        $tmp978 = $tmp979;
        matcher977 = $tmp978;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp981, matcher977);
        if ($tmp981.value) {
        {
            int $tmp984;
            {
                panda$collections$Array* $tmp988 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp988);
                $tmp987 = $tmp988;
                $tmp986 = $tmp987;
                result985 = $tmp986;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                panda$core$Int64$init$builtin_int64(&$tmp990, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp991, matcher977);
                panda$core$Bit$init$builtin_bit(&$tmp992, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp989, $tmp990, $tmp991, $tmp992);
                int64_t $tmp994 = $tmp989.min.value;
                panda$core$Int64 i993 = { $tmp994 };
                int64_t $tmp996 = $tmp989.max.value;
                bool $tmp997 = $tmp989.inclusive.value;
                if ($tmp997) goto $l1004; else goto $l1005;
                $l1004:;
                if ($tmp994 <= $tmp996) goto $l998; else goto $l1000;
                $l1005:;
                if ($tmp994 < $tmp996) goto $l998; else goto $l1000;
                $l998:;
                {
                    panda$core$String* $tmp1007 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher977, i993);
                    $tmp1006 = $tmp1007;
                    panda$collections$Array$add$panda$collections$Array$T(result985, ((panda$core$Object*) $tmp1006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                }
                $l1001:;
                int64_t $tmp1009 = $tmp996 - i993.value;
                if ($tmp997) goto $l1010; else goto $l1011;
                $l1010:;
                if ((uint64_t) $tmp1009 >= 1) goto $l1008; else goto $l1000;
                $l1011:;
                if ((uint64_t) $tmp1009 > 1) goto $l1008; else goto $l1000;
                $l1008:;
                i993.value += 1;
                goto $l998;
                $l1000:;
                $tmp1015 = ((panda$collections$ListView*) result985);
                $returnValue1014 = $tmp1015;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
                $tmp984 = 0;
                goto $l982;
                $l1016:;
                $tmp976 = 0;
                goto $l974;
                $l1017:;
                return $returnValue1014;
            }
            $l982:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result985));
            result985 = NULL;
            switch ($tmp984) {
                case 0: goto $l1016;
            }
            $l1019:;
        }
        }
        $tmp1020 = NULL;
        $returnValue1014 = $tmp1020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1020));
        $tmp976 = 1;
        goto $l974;
        $l1021:;
        return $returnValue1014;
    }
    $l974:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher977));
    matcher977 = NULL;
    switch ($tmp976) {
        case 0: goto $l1017;
        case 1: goto $l1021;
    }
    $l1023:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1029;
    panda$core$String* $tmp1030;
    panda$core$MutableString* result1033 = NULL;
    panda$core$MutableString* $tmp1034;
    panda$core$MutableString* $tmp1035;
    panda$core$String$Index index1037;
    panda$core$String$Index$nullable nextIndex1041;
    panda$core$String* $tmp1043;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1044;
    panda$core$Bit $tmp1045;
    panda$core$String* $tmp1047;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1048;
    panda$core$Bit $tmp1049;
    panda$core$String$Index $tmp1051;
    panda$core$String* $tmp1053;
    panda$core$String* $tmp1054;
    int $tmp1026;
    {
        panda$core$Bit $tmp1028 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1027);
        if ($tmp1028.value) {
        {
            $tmp1030 = self;
            $returnValue1029 = $tmp1030;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
            $tmp1026 = 0;
            goto $l1024;
            $l1031:;
            return $returnValue1029;
        }
        }
        panda$core$MutableString* $tmp1036 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1036);
        $tmp1035 = $tmp1036;
        $tmp1034 = $tmp1035;
        result1033 = $tmp1034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
        panda$core$String$Index $tmp1038 = panda$core$String$start$R$panda$core$String$Index(self);
        index1037 = $tmp1038;
        $l1039:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1042 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1037);
            nextIndex1041 = $tmp1042;
            if (((panda$core$Bit) { !nextIndex1041.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1045, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1044, ((panda$core$String$Index$nullable) { index1037, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1045);
                panda$core$String* $tmp1046 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1044);
                $tmp1043 = $tmp1046;
                panda$core$MutableString$append$panda$core$String(result1033, $tmp1043);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                goto $l1040;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1049, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1048, index1037, ((panda$core$String$Index) nextIndex1041.value), $tmp1049);
            panda$core$String* $tmp1050 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1048);
            $tmp1047 = $tmp1050;
            panda$core$MutableString$append$panda$core$String(result1033, $tmp1047);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
            panda$core$MutableString$append$panda$core$String(result1033, p_replacement);
            panda$core$Int64 $tmp1052 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1041.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1051, $tmp1052);
            index1037 = $tmp1051;
        }
        }
        $l1040:;
        panda$core$String* $tmp1055 = panda$core$MutableString$finish$R$panda$core$String(result1033);
        $tmp1054 = $tmp1055;
        $tmp1053 = $tmp1054;
        $returnValue1029 = $tmp1053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
        $tmp1026 = 1;
        goto $l1024;
        $l1056:;
        return $returnValue1029;
    }
    $l1024:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1033));
    result1033 = NULL;
    switch ($tmp1026) {
        case 1: goto $l1056;
        case 0: goto $l1031;
    }
    $l1058:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1059;
    panda$core$String* $tmp1060;
    panda$core$String* $tmp1061;
    panda$core$Bit $tmp1062;
    panda$core$Bit$init$builtin_bit(&$tmp1062, true);
    panda$core$String* $tmp1063 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(self, p_search, p_replacement, $tmp1062);
    $tmp1061 = $tmp1063;
    $tmp1060 = $tmp1061;
    $returnValue1059 = $tmp1060;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1060));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1061));
    return $returnValue1059;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$MutableString* result1068 = NULL;
    panda$core$MutableString* $tmp1069;
    panda$core$MutableString* $tmp1070;
    panda$core$Matcher* matcher1072 = NULL;
    panda$core$Matcher* $tmp1073;
    panda$core$Matcher* $tmp1074;
    panda$core$String* $returnValue1080;
    panda$core$String* $tmp1081;
    panda$core$String* $tmp1082;
    int $tmp1067;
    {
        panda$core$MutableString* $tmp1071 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1071);
        $tmp1070 = $tmp1071;
        $tmp1069 = $tmp1070;
        result1068 = $tmp1069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
        panda$core$Matcher* $tmp1075 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1074 = $tmp1075;
        $tmp1073 = $tmp1074;
        matcher1072 = $tmp1073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
        $l1076:;
        panda$core$Bit $tmp1079 = panda$core$Matcher$find$R$panda$core$Bit(matcher1072);
        bool $tmp1078 = $tmp1079.value;
        if (!$tmp1078) goto $l1077;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1072, result1068, p_replacement, p_allowGroupReferences);
        }
        goto $l1076;
        $l1077:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1072, result1068);
        panda$core$String* $tmp1083 = panda$core$MutableString$finish$R$panda$core$String(result1068);
        $tmp1082 = $tmp1083;
        $tmp1081 = $tmp1082;
        $returnValue1080 = $tmp1081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1082));
        $tmp1067 = 0;
        goto $l1065;
        $l1084:;
        return $returnValue1080;
    }
    $l1065:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1072));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1068));
    result1068 = NULL;
    matcher1072 = NULL;
    switch ($tmp1067) {
        case 0: goto $l1084;
    }
    $l1086:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1090 = NULL;
    panda$core$MutableString* $tmp1091;
    panda$core$MutableString* $tmp1092;
    panda$core$Matcher* matcher1094 = NULL;
    panda$core$Matcher* $tmp1095;
    panda$core$Matcher* $tmp1096;
    panda$core$String* $tmp1102;
    panda$core$Object* $tmp1103;
    panda$core$String* $tmp1104;
    panda$core$Int64 $tmp1105;
    panda$core$Object* $tmp1107;
    panda$core$Bit $tmp1112;
    panda$core$String* $returnValue1113;
    panda$core$String* $tmp1114;
    panda$core$String* $tmp1115;
    int $tmp1089;
    {
        panda$core$MutableString* $tmp1093 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1093);
        $tmp1092 = $tmp1093;
        $tmp1091 = $tmp1092;
        result1090 = $tmp1091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
        panda$core$Matcher* $tmp1097 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1096 = $tmp1097;
        $tmp1095 = $tmp1096;
        matcher1094 = $tmp1095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
        $l1098:;
        panda$core$Bit $tmp1101 = panda$core$Matcher$find$R$panda$core$Bit(matcher1094);
        bool $tmp1100 = $tmp1101.value;
        if (!$tmp1100) goto $l1099;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1105, 0);
            panda$core$String* $tmp1106 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1094, $tmp1105);
            $tmp1104 = $tmp1106;
            if (p_replacement->target) {
                $tmp1107 = (($fn1108) p_replacement->pointer)(p_replacement->target, $tmp1104);
            } else {
                $tmp1107 = (($fn1109) p_replacement->pointer)($tmp1104);
            }
            $tmp1103 = $tmp1107;
            panda$core$String* $tmp1111 = (($fn1110) $tmp1103->$class->vtable[0])($tmp1103);
            $tmp1102 = $tmp1111;
            panda$core$Bit$init$builtin_bit(&$tmp1112, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1094, result1090, $tmp1102, $tmp1112);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
            panda$core$Panda$unref$panda$core$Object($tmp1103);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
        }
        goto $l1098;
        $l1099:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1094, result1090);
        panda$core$String* $tmp1116 = panda$core$MutableString$convert$R$panda$core$String(result1090);
        $tmp1115 = $tmp1116;
        $tmp1114 = $tmp1115;
        $returnValue1113 = $tmp1114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
        $tmp1089 = 0;
        goto $l1087;
        $l1117:;
        return $returnValue1113;
    }
    $l1087:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1094));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1090));
    result1090 = NULL;
    matcher1094 = NULL;
    switch ($tmp1089) {
        case 0: goto $l1117;
    }
    $l1119:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1123 = NULL;
    panda$core$MutableString* $tmp1124;
    panda$core$MutableString* $tmp1125;
    panda$core$Matcher* matcher1127 = NULL;
    panda$core$Matcher* $tmp1128;
    panda$core$Matcher* $tmp1129;
    panda$collections$Array* groups1138 = NULL;
    panda$collections$Array* $tmp1139;
    panda$collections$Array* $tmp1140;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1142;
    panda$core$Int64 $tmp1143;
    panda$core$Int64 $tmp1144;
    panda$core$Bit $tmp1145;
    panda$core$String* $tmp1159;
    panda$core$String* $tmp1167;
    panda$core$Object* $tmp1168;
    panda$core$Object* $tmp1169;
    panda$core$Bit $tmp1174;
    panda$core$String* $returnValue1176;
    panda$core$String* $tmp1177;
    panda$core$String* $tmp1178;
    int $tmp1122;
    {
        panda$core$MutableString* $tmp1126 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1126);
        $tmp1125 = $tmp1126;
        $tmp1124 = $tmp1125;
        result1123 = $tmp1124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Matcher* $tmp1130 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1129 = $tmp1130;
        $tmp1128 = $tmp1129;
        matcher1127 = $tmp1128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
        $l1131:;
        panda$core$Bit $tmp1134 = panda$core$Matcher$find$R$panda$core$Bit(matcher1127);
        bool $tmp1133 = $tmp1134.value;
        if (!$tmp1133) goto $l1132;
        {
            int $tmp1137;
            {
                panda$collections$Array* $tmp1141 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1141);
                $tmp1140 = $tmp1141;
                $tmp1139 = $tmp1140;
                groups1138 = $tmp1139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                panda$core$Int64$init$builtin_int64(&$tmp1143, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1144, matcher1127);
                panda$core$Bit$init$builtin_bit(&$tmp1145, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1142, $tmp1143, $tmp1144, $tmp1145);
                int64_t $tmp1147 = $tmp1142.min.value;
                panda$core$Int64 i1146 = { $tmp1147 };
                int64_t $tmp1149 = $tmp1142.max.value;
                bool $tmp1150 = $tmp1142.inclusive.value;
                if ($tmp1150) goto $l1157; else goto $l1158;
                $l1157:;
                if ($tmp1147 <= $tmp1149) goto $l1151; else goto $l1153;
                $l1158:;
                if ($tmp1147 < $tmp1149) goto $l1151; else goto $l1153;
                $l1151:;
                {
                    panda$core$String* $tmp1160 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1127, i1146);
                    $tmp1159 = $tmp1160;
                    panda$collections$Array$add$panda$collections$Array$T(groups1138, ((panda$core$Object*) $tmp1159));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                }
                $l1154:;
                int64_t $tmp1162 = $tmp1149 - i1146.value;
                if ($tmp1150) goto $l1163; else goto $l1164;
                $l1163:;
                if ((uint64_t) $tmp1162 >= 1) goto $l1161; else goto $l1153;
                $l1164:;
                if ((uint64_t) $tmp1162 > 1) goto $l1161; else goto $l1153;
                $l1161:;
                i1146.value += 1;
                goto $l1151;
                $l1153:;
                if (p_replacement->target) {
                    $tmp1169 = (($fn1170) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups1138));
                } else {
                    $tmp1169 = (($fn1171) p_replacement->pointer)(((panda$collections$ListView*) groups1138));
                }
                $tmp1168 = $tmp1169;
                panda$core$String* $tmp1173 = (($fn1172) $tmp1168->$class->vtable[0])($tmp1168);
                $tmp1167 = $tmp1173;
                panda$core$Bit$init$builtin_bit(&$tmp1174, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1127, result1123, $tmp1167, $tmp1174);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1167));
                panda$core$Panda$unref$panda$core$Object($tmp1168);
            }
            $tmp1137 = -1;
            goto $l1135;
            $l1135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1138));
            groups1138 = NULL;
            switch ($tmp1137) {
                case -1: goto $l1175;
            }
            $l1175:;
        }
        goto $l1131;
        $l1132:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1127, result1123);
        panda$core$String* $tmp1179 = panda$core$MutableString$convert$R$panda$core$String(result1123);
        $tmp1178 = $tmp1179;
        $tmp1177 = $tmp1178;
        $returnValue1176 = $tmp1177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
        $tmp1122 = 0;
        goto $l1120;
        $l1180:;
        return $returnValue1176;
    }
    $l1120:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1123));
    result1123 = NULL;
    matcher1127 = NULL;
    switch ($tmp1122) {
        case 0: goto $l1180;
    }
    $l1182:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1183;
    panda$collections$Iterator* $tmp1184;
    panda$collections$Iterator* $tmp1185;
    panda$core$Bit $tmp1186;
    panda$core$Bit$init$builtin_bit(&$tmp1186, false);
    panda$collections$Iterator* $tmp1187 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1186);
    $tmp1185 = $tmp1187;
    $tmp1184 = $tmp1185;
    $returnValue1183 = $tmp1184;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
    return $returnValue1183;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1189;
    panda$collections$Iterator* $tmp1190;
    panda$core$String$MatchIterator* $tmp1191;
    panda$core$String$MatchIterator* $tmp1192 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1192, self, p_needle, p_overlapping);
    $tmp1191 = $tmp1192;
    $tmp1190 = ((panda$collections$Iterator*) $tmp1191);
    $returnValue1189 = $tmp1190;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
    return $returnValue1189;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1194;
    panda$collections$Iterator* $tmp1195;
    panda$collections$Iterator* $tmp1196;
    panda$core$Bit $tmp1197;
    panda$core$Bit$init$builtin_bit(&$tmp1197, false);
    panda$collections$Iterator* $tmp1198 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1197);
    $tmp1196 = $tmp1198;
    $tmp1195 = $tmp1196;
    $returnValue1194 = $tmp1195;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1196));
    return $returnValue1194;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1200;
    panda$collections$Iterator* $tmp1201;
    panda$core$String$RegexMatchIterator* $tmp1202;
    panda$core$String$RegexMatchIterator* $tmp1203 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1203, self, p_needle, p_overlapping);
    $tmp1202 = $tmp1203;
    $tmp1201 = ((panda$collections$Iterator*) $tmp1202);
    $returnValue1200 = $tmp1201;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1202));
    return $returnValue1200;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1205;
    panda$core$String$Index $tmp1206;
    panda$core$Int64 $tmp1207;
    panda$core$Int64$init$builtin_int64(&$tmp1207, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1206, $tmp1207);
    $returnValue1205 = $tmp1206;
    return $returnValue1205;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1209;
    panda$core$String$Index $tmp1210;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1210, self->_length);
    $returnValue1209 = $tmp1210;
    return $returnValue1209;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1216;
    panda$core$Bit $tmp1218;
    panda$core$String$Index $returnValue1220;
    panda$core$String$Index $tmp1221;
    panda$core$Int64 $tmp1222;
    panda$core$Bit $tmp1225;
    panda$core$String$Index $tmp1227;
    panda$core$Int64 $tmp1228;
    panda$core$Bit $tmp1231;
    panda$core$String$Index $tmp1233;
    panda$core$Int64 $tmp1234;
    panda$core$String$Index $tmp1237;
    panda$core$Int64 $tmp1238;
    panda$core$Bit $tmp1212 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1212.value) goto $l1213; else goto $l1214;
    $l1214:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1215, (panda$core$Int64) { 1131 });
    abort();
    $l1213:;
    int64_t $tmp1217 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1216 = $tmp1217;
    bool $tmp1219 = c1216 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1218, $tmp1219);
    if ($tmp1218.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1222, 4);
        panda$core$Int64 $tmp1223 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1222);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1221, $tmp1223);
        $returnValue1220 = $tmp1221;
        return $returnValue1220;
    }
    }
    bool $tmp1226 = c1216 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1225, $tmp1226);
    if ($tmp1225.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1228, 3);
        panda$core$Int64 $tmp1229 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1228);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1227, $tmp1229);
        $returnValue1220 = $tmp1227;
        return $returnValue1220;
    }
    }
    bool $tmp1232 = c1216 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1231, $tmp1232);
    if ($tmp1231.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1234, 2);
        panda$core$Int64 $tmp1235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1234);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1233, $tmp1235);
        $returnValue1220 = $tmp1233;
        return $returnValue1220;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1238, 1);
    panda$core$Int64 $tmp1239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1238);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1237, $tmp1239);
    $returnValue1220 = $tmp1237;
    return $returnValue1220;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1241;
    panda$core$Int64 newValue1246;
    panda$core$Int64 $tmp1247;
    panda$core$Bit $tmp1252;
    panda$core$Int64 $tmp1259;
    panda$core$String$Index $returnValue1261;
    panda$core$String$Index $tmp1262;
    panda$core$Int64$init$builtin_int64(&$tmp1241, 0);
    panda$core$Bit $tmp1242 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1241);
    if ($tmp1242.value) goto $l1243; else goto $l1244;
    $l1244:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1245, (panda$core$Int64) { 1152 });
    abort();
    $l1243:;
    panda$core$Int64$init$builtin_int64(&$tmp1247, 1);
    panda$core$Int64 $tmp1248 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1247);
    newValue1246 = $tmp1248;
    $l1249:;
    int64_t $tmp1254 = ((int64_t) self->data[newValue1246.value].value) & 255;
    bool $tmp1255 = $tmp1254 >= 128;
    bool $tmp1253 = $tmp1255;
    if (!$tmp1253) goto $l1256;
    int64_t $tmp1257 = ((int64_t) self->data[newValue1246.value].value) & 255;
    bool $tmp1258 = $tmp1257 < 192;
    $tmp1253 = $tmp1258;
    $l1256:;
    panda$core$Bit$init$builtin_bit(&$tmp1252, $tmp1253);
    bool $tmp1251 = $tmp1252.value;
    if (!$tmp1251) goto $l1250;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1259, 1);
        panda$core$Int64 $tmp1260 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1246, $tmp1259);
        newValue1246 = $tmp1260;
    }
    goto $l1249;
    $l1250:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1262, newValue1246);
    $returnValue1261 = $tmp1262;
    return $returnValue1261;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1264;
    panda$core$Int64 $tmp1265;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1267;
    panda$core$Int64 $tmp1268;
    panda$core$Bit $tmp1269;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1290;
    panda$core$Int64 $tmp1291;
    panda$core$Int64 $tmp1292;
    panda$core$Bit $tmp1293;
    panda$core$String$Index $returnValue1324;
    result1264 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1265, 0);
    panda$core$Bit $tmp1266 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1265);
    if ($tmp1266.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1268, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1269, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1267, $tmp1268, p_offset, $tmp1269);
        int64_t $tmp1271 = $tmp1267.min.value;
        panda$core$Int64 i1270 = { $tmp1271 };
        int64_t $tmp1273 = $tmp1267.max.value;
        bool $tmp1274 = $tmp1267.inclusive.value;
        if ($tmp1274) goto $l1281; else goto $l1282;
        $l1281:;
        if ($tmp1271 <= $tmp1273) goto $l1275; else goto $l1277;
        $l1282:;
        if ($tmp1271 < $tmp1273) goto $l1275; else goto $l1277;
        $l1275:;
        {
            panda$core$String$Index $tmp1283 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1264);
            result1264 = $tmp1283;
        }
        $l1278:;
        int64_t $tmp1285 = $tmp1273 - i1270.value;
        if ($tmp1274) goto $l1286; else goto $l1287;
        $l1286:;
        if ((uint64_t) $tmp1285 >= 1) goto $l1284; else goto $l1277;
        $l1287:;
        if ((uint64_t) $tmp1285 > 1) goto $l1284; else goto $l1277;
        $l1284:;
        i1270.value += 1;
        goto $l1275;
        $l1277:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1291, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1292, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1293, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1290, $tmp1291, p_offset, $tmp1292, $tmp1293);
        int64_t $tmp1295 = $tmp1290.start.value;
        panda$core$Int64 i1294 = { $tmp1295 };
        int64_t $tmp1297 = $tmp1290.end.value;
        int64_t $tmp1298 = $tmp1290.step.value;
        bool $tmp1299 = $tmp1290.inclusive.value;
        bool $tmp1306 = $tmp1298 > 0;
        if ($tmp1306) goto $l1304; else goto $l1305;
        $l1304:;
        if ($tmp1299) goto $l1307; else goto $l1308;
        $l1307:;
        if ($tmp1295 <= $tmp1297) goto $l1300; else goto $l1302;
        $l1308:;
        if ($tmp1295 < $tmp1297) goto $l1300; else goto $l1302;
        $l1305:;
        if ($tmp1299) goto $l1309; else goto $l1310;
        $l1309:;
        if ($tmp1295 >= $tmp1297) goto $l1300; else goto $l1302;
        $l1310:;
        if ($tmp1295 > $tmp1297) goto $l1300; else goto $l1302;
        $l1300:;
        {
            panda$core$String$Index $tmp1312 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1264);
            result1264 = $tmp1312;
        }
        $l1303:;
        if ($tmp1306) goto $l1314; else goto $l1315;
        $l1314:;
        int64_t $tmp1316 = $tmp1297 - i1294.value;
        if ($tmp1299) goto $l1317; else goto $l1318;
        $l1317:;
        if ((uint64_t) $tmp1316 >= $tmp1298) goto $l1313; else goto $l1302;
        $l1318:;
        if ((uint64_t) $tmp1316 > $tmp1298) goto $l1313; else goto $l1302;
        $l1315:;
        int64_t $tmp1320 = i1294.value - $tmp1297;
        if ($tmp1299) goto $l1321; else goto $l1322;
        $l1321:;
        if ((uint64_t) $tmp1320 >= -$tmp1298) goto $l1313; else goto $l1302;
        $l1322:;
        if ((uint64_t) $tmp1320 > -$tmp1298) goto $l1313; else goto $l1302;
        $l1313:;
        i1294.value += $tmp1298;
        goto $l1300;
        $l1302:;
    }
    }
    $returnValue1324 = result1264;
    return $returnValue1324;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1326;
    panda$core$String* $tmp1327;
    panda$core$String* $tmp1328;
    panda$core$Char32 $tmp1329;
    panda$core$Int32 $tmp1330;
    panda$core$Int32$init$builtin_int32(&$tmp1330, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1329, $tmp1330);
    panda$core$String* $tmp1331 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1329);
    $tmp1328 = $tmp1331;
    $tmp1327 = $tmp1328;
    $returnValue1326 = $tmp1327;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
    return $returnValue1326;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1335;
    panda$core$String* $tmp1336;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$Int64 $tmp1333 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1334 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1333, p_width);
    if ($tmp1334.value) {
    {
        $tmp1336 = self;
        $returnValue1335 = $tmp1336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
        return $returnValue1335;
    }
    }
    panda$core$Int64 $tmp1341 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1341);
    panda$core$String* $tmp1343 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1342);
    $tmp1340 = $tmp1343;
    panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1340);
    $tmp1339 = $tmp1344;
    $tmp1338 = $tmp1339;
    $returnValue1335 = $tmp1338;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1338));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
    return $returnValue1335;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1346;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$Char32 $tmp1349;
    panda$core$Int32 $tmp1350;
    panda$core$Int32$init$builtin_int32(&$tmp1350, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1349, $tmp1350);
    panda$core$String* $tmp1351 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1349);
    $tmp1348 = $tmp1351;
    $tmp1347 = $tmp1348;
    $returnValue1346 = $tmp1347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
    return $returnValue1346;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1355;
    panda$core$String* $tmp1356;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1359;
    panda$core$String* $tmp1360;
    panda$core$Int64 $tmp1353 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1354 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1353, p_width);
    if ($tmp1354.value) {
    {
        $tmp1356 = self;
        $returnValue1355 = $tmp1356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1356));
        return $returnValue1355;
    }
    }
    panda$core$Int64 $tmp1361 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1362 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1361);
    panda$core$String* $tmp1363 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1362);
    $tmp1360 = $tmp1363;
    panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, self);
    $tmp1359 = $tmp1364;
    $tmp1358 = $tmp1359;
    $returnValue1355 = $tmp1358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
    return $returnValue1355;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1368;
    panda$core$Char32 $tmp1369;
    panda$core$Int32 $tmp1370;
    panda$core$Int32$init$builtin_int32(&$tmp1370, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1369, $tmp1370);
    panda$core$String* $tmp1371 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1369);
    $tmp1368 = $tmp1371;
    $tmp1367 = $tmp1368;
    $returnValue1366 = $tmp1367;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
    return $returnValue1366;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1375;
    panda$core$String* $tmp1376;
    panda$core$Int64 pad1378;
    panda$core$Int64 left1381;
    panda$core$Int64 $tmp1382;
    panda$core$Int64 right1384;
    panda$core$String* $tmp1386;
    panda$core$String* $tmp1387;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1389;
    panda$core$String* $tmp1392;
    panda$core$Int64 $tmp1373 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1374 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1373, p_width);
    if ($tmp1374.value) {
    {
        $tmp1376 = self;
        $returnValue1375 = $tmp1376;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1376));
        return $returnValue1375;
    }
    }
    panda$core$Int64 $tmp1379 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1380 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1379);
    pad1378 = $tmp1380;
    panda$core$Int64$init$builtin_int64(&$tmp1382, 2);
    panda$core$Int64 $tmp1383 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1378, $tmp1382);
    left1381 = $tmp1383;
    panda$core$Int64 $tmp1385 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1378, left1381);
    right1384 = $tmp1385;
    panda$core$String* $tmp1390 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1381);
    $tmp1389 = $tmp1390;
    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, self);
    $tmp1388 = $tmp1391;
    panda$core$String* $tmp1393 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1384);
    $tmp1392 = $tmp1393;
    panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, $tmp1392);
    $tmp1387 = $tmp1394;
    $tmp1386 = $tmp1387;
    $returnValue1375 = $tmp1386;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
    return $returnValue1375;
}
panda$collections$ListView* panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$ListView* $returnValue1396;
    panda$collections$ListView* $tmp1397;
    panda$collections$ListView* $tmp1398;
    panda$core$Int64 $tmp1399;
    panda$core$Int64$init$builtin_int64(&$tmp1399, 9223372036854775807);
    panda$collections$ListView* $tmp1400 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, $tmp1399);
    $tmp1398 = $tmp1400;
    $tmp1397 = $tmp1398;
    $returnValue1396 = $tmp1397;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
    return $returnValue1396;
}
panda$collections$ListView* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1405 = NULL;
    panda$collections$Array* $tmp1406;
    panda$collections$Array* $tmp1407;
    panda$core$String$Index index1409;
    panda$core$String$Index$nullable nextIndex1413;
    panda$core$Int64 $tmp1414;
    panda$core$Int64 $tmp1420;
    panda$core$String* $tmp1424;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1425;
    panda$core$Bit $tmp1426;
    panda$core$String* $tmp1428;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1429;
    panda$core$Bit $tmp1430;
    panda$core$String$Index $tmp1432;
    panda$collections$ListView* $returnValue1434;
    panda$collections$ListView* $tmp1435;
    int $tmp1404;
    {
        panda$collections$Array* $tmp1408 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1408);
        $tmp1407 = $tmp1408;
        $tmp1406 = $tmp1407;
        result1405 = $tmp1406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
        panda$core$String$Index $tmp1410 = panda$core$String$start$R$panda$core$String$Index(self);
        index1409 = $tmp1410;
        $l1411:;
        while (true) {
        {
            memset(&nextIndex1413, 0, sizeof(nextIndex1413));
            panda$core$Int64$init$builtin_int64(&$tmp1414, 0);
            panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1414);
            if ($tmp1415.value) {
            {
                panda$core$String$Index $tmp1416 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1409);
                nextIndex1413 = ((panda$core$String$Index$nullable) { $tmp1416, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1417 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1409);
                nextIndex1413 = $tmp1417;
            }
            }
            bool $tmp1418 = ((panda$core$Bit) { !nextIndex1413.nonnull }).value;
            if ($tmp1418) goto $l1419;
            panda$core$Int64$init$builtin_int64(&$tmp1420, 1);
            panda$core$Int64 $tmp1421 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1420);
            panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1405->count, $tmp1421);
            $tmp1418 = $tmp1422.value;
            $l1419:;
            panda$core$Bit $tmp1423 = { $tmp1418 };
            if ($tmp1423.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1426, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1425, ((panda$core$String$Index$nullable) { index1409, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1426);
                panda$core$String* $tmp1427 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1425);
                $tmp1424 = $tmp1427;
                panda$collections$Array$add$panda$collections$Array$T(result1405, ((panda$core$Object*) $tmp1424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
                goto $l1412;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1430, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1429, index1409, ((panda$core$String$Index) nextIndex1413.value), $tmp1430);
            panda$core$String* $tmp1431 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1429);
            $tmp1428 = $tmp1431;
            panda$collections$Array$add$panda$collections$Array$T(result1405, ((panda$core$Object*) $tmp1428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
            panda$core$Int64 $tmp1433 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1413.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1432, $tmp1433);
            index1409 = $tmp1432;
        }
        }
        $l1412:;
        $tmp1435 = ((panda$collections$ListView*) result1405);
        $returnValue1434 = $tmp1435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1435));
        $tmp1404 = 0;
        goto $l1402;
        $l1436:;
        return $returnValue1434;
    }
    $l1402:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1405));
    result1405 = NULL;
    switch ($tmp1404) {
        case 0: goto $l1436;
    }
    $l1438:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1439;
    panda$collections$Array* result1448 = NULL;
    panda$collections$Array* $tmp1449;
    panda$collections$Array* $tmp1450;
    panda$core$Matcher* matcher1452 = NULL;
    panda$core$Matcher* $tmp1453;
    panda$core$Matcher* $tmp1454;
    panda$core$String$Index index1456;
    panda$core$Bit found1460;
    panda$core$Int64 $tmp1465;
    panda$core$String* $tmp1469;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1470;
    panda$core$Bit $tmp1471;
    panda$core$String$Index start1473;
    panda$core$String$Index $tmp1474;
    panda$core$String* $tmp1475;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1476;
    panda$core$Bit $tmp1477;
    panda$core$String$Index $tmp1479;
    panda$core$String$Index $tmp1480;
    panda$collections$ListView* $returnValue1482;
    panda$collections$ListView* $tmp1483;
    panda$core$Int64$init$builtin_int64(&$tmp1439, 0);
    panda$core$Bit $tmp1440 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1439);
    if ($tmp1440.value) goto $l1441; else goto $l1442;
    $l1442:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1443, (panda$core$Int64) { 1331 }, &$s1444);
    abort();
    $l1441:;
    int $tmp1447;
    {
        panda$collections$Array* $tmp1451 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1451);
        $tmp1450 = $tmp1451;
        $tmp1449 = $tmp1450;
        result1448 = $tmp1449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
        panda$core$Matcher* $tmp1455 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1454 = $tmp1455;
        $tmp1453 = $tmp1454;
        matcher1452 = $tmp1453;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
        panda$core$String$Index $tmp1457 = panda$core$String$start$R$panda$core$String$Index(self);
        index1456 = $tmp1457;
        $l1458:;
        while (true) {
        {
            panda$core$Bit $tmp1461 = panda$core$Matcher$find$R$panda$core$Bit(matcher1452);
            found1460 = $tmp1461;
            panda$core$Bit $tmp1463 = panda$core$Bit$$NOT$R$panda$core$Bit(found1460);
            bool $tmp1462 = $tmp1463.value;
            if ($tmp1462) goto $l1464;
            panda$core$Int64$init$builtin_int64(&$tmp1465, 1);
            panda$core$Int64 $tmp1466 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1465);
            panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1448->count, $tmp1466);
            $tmp1462 = $tmp1467.value;
            $l1464:;
            panda$core$Bit $tmp1468 = { $tmp1462 };
            if ($tmp1468.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1471, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1470, ((panda$core$String$Index$nullable) { index1456, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1471);
                panda$core$String* $tmp1472 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1470);
                $tmp1469 = $tmp1472;
                panda$collections$Array$add$panda$collections$Array$T(result1448, ((panda$core$Object*) $tmp1469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                goto $l1459;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1474, matcher1452);
            start1473 = $tmp1474;
            panda$core$Bit$init$builtin_bit(&$tmp1477, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1476, index1456, start1473, $tmp1477);
            panda$core$String* $tmp1478 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1476);
            $tmp1475 = $tmp1478;
            panda$collections$Array$add$panda$collections$Array$T(result1448, ((panda$core$Object*) $tmp1475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1480, matcher1452);
            panda$core$Int64 $tmp1481 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1473.value, $tmp1480.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1479, $tmp1481);
            index1456 = $tmp1479;
        }
        }
        $l1459:;
        $tmp1483 = ((panda$collections$ListView*) result1448);
        $returnValue1482 = $tmp1483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
        $tmp1447 = 0;
        goto $l1445;
        $l1484:;
        return $returnValue1482;
    }
    $l1445:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1452));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1448));
    result1448 = NULL;
    matcher1452 = NULL;
    switch ($tmp1447) {
        case 0: goto $l1484;
    }
    $l1486:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1487;
    panda$collections$ListView* $tmp1488;
    panda$collections$ListView* $tmp1489;
    panda$core$Int64 $tmp1490;
    panda$core$Int64$init$builtin_int64(&$tmp1490, 9223372036854775807);
    panda$collections$ListView* $tmp1491 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, $tmp1490);
    $tmp1489 = $tmp1491;
    $tmp1488 = $tmp1489;
    $returnValue1487 = $tmp1488;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
    return $returnValue1487;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1493;
    panda$core$Int64$nullable $returnValue1495;
    panda$core$Int64 result1497;
    panda$core$Int64 $tmp1498;
    panda$core$Int64 start1499;
    panda$core$Int64 $tmp1500;
    panda$core$Char8 $tmp1501;
    panda$core$UInt8 $tmp1502;
    panda$core$Int64 $tmp1504;
    panda$core$Int64 $tmp1505;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1506;
    panda$core$Bit $tmp1507;
    panda$core$Int64 digit1521;
    panda$core$Int64 $tmp1522;
    panda$core$Int64 $tmp1523;
    panda$core$Int64 $tmp1526;
    panda$core$Int64 $tmp1529;
    panda$core$Int64 $tmp1533;
    panda$core$Int64 $tmp1542;
    panda$core$Char8 $tmp1543;
    panda$core$UInt8 $tmp1544;
    panda$core$Int64$init$builtin_int64(&$tmp1493, 0);
    panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1493);
    if ($tmp1494.value) {
    {
        $returnValue1495 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1495;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1498, 0);
    result1497 = $tmp1498;
    memset(&start1499, 0, sizeof(start1499));
    panda$core$Int64$init$builtin_int64(&$tmp1500, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1502, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1501, $tmp1502);
    panda$core$Bit $tmp1503 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1500.value], $tmp1501);
    if ($tmp1503.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1504, 1);
        start1499 = $tmp1504;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1505, 0);
        start1499 = $tmp1505;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1507, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1506, start1499, self->_length, $tmp1507);
    int64_t $tmp1509 = $tmp1506.min.value;
    panda$core$Int64 i1508 = { $tmp1509 };
    int64_t $tmp1511 = $tmp1506.max.value;
    bool $tmp1512 = $tmp1506.inclusive.value;
    if ($tmp1512) goto $l1519; else goto $l1520;
    $l1519:;
    if ($tmp1509 <= $tmp1511) goto $l1513; else goto $l1515;
    $l1520:;
    if ($tmp1509 < $tmp1511) goto $l1513; else goto $l1515;
    $l1513:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1522, ((int64_t) self->data[i1508.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1523, 48);
        panda$core$Int64 $tmp1524 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1522, $tmp1523);
        digit1521 = $tmp1524;
        panda$core$Int64$init$builtin_int64(&$tmp1526, 0);
        panda$core$Bit $tmp1527 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1521, $tmp1526);
        bool $tmp1525 = $tmp1527.value;
        if ($tmp1525) goto $l1528;
        panda$core$Int64$init$builtin_int64(&$tmp1529, 9);
        panda$core$Bit $tmp1530 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1521, $tmp1529);
        $tmp1525 = $tmp1530.value;
        $l1528:;
        panda$core$Bit $tmp1531 = { $tmp1525 };
        if ($tmp1531.value) {
        {
            $returnValue1495 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1495;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1533, 10);
        panda$core$Int64 $tmp1534 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1497, $tmp1533);
        panda$core$Int64 $tmp1535 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1534, digit1521);
        result1497 = $tmp1535;
    }
    $l1516:;
    int64_t $tmp1537 = $tmp1511 - i1508.value;
    if ($tmp1512) goto $l1538; else goto $l1539;
    $l1538:;
    if ((uint64_t) $tmp1537 >= 1) goto $l1536; else goto $l1515;
    $l1539:;
    if ((uint64_t) $tmp1537 > 1) goto $l1536; else goto $l1515;
    $l1536:;
    i1508.value += 1;
    goto $l1513;
    $l1515:;
    panda$core$Int64$init$builtin_int64(&$tmp1542, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1544, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1543, $tmp1544);
    panda$core$Bit $tmp1545 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1542.value], $tmp1543);
    if ($tmp1545.value) {
    {
        panda$core$Int64 $tmp1546 = panda$core$Int64$$SUB$R$panda$core$Int64(result1497);
        result1497 = $tmp1546;
    }
    }
    $returnValue1495 = ((panda$core$Int64$nullable) { result1497, true });
    return $returnValue1495;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1548;
    panda$core$UInt64$nullable $returnValue1550;
    panda$core$UInt64 result1552;
    panda$core$UInt64 $tmp1553;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1554;
    panda$core$Int64 $tmp1555;
    panda$core$Bit $tmp1556;
    panda$core$UInt64 digit1570;
    panda$core$UInt64 $tmp1571;
    panda$core$UInt64 $tmp1572;
    panda$core$UInt64 $tmp1575;
    panda$core$UInt64 $tmp1578;
    panda$core$UInt64 $tmp1582;
    panda$core$Int64$init$builtin_int64(&$tmp1548, 0);
    panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1548);
    if ($tmp1549.value) {
    {
        $returnValue1550 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1550;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1553, 0);
    result1552 = $tmp1553;
    panda$core$Int64$init$builtin_int64(&$tmp1555, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1556, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1554, $tmp1555, self->_length, $tmp1556);
    int64_t $tmp1558 = $tmp1554.min.value;
    panda$core$Int64 i1557 = { $tmp1558 };
    int64_t $tmp1560 = $tmp1554.max.value;
    bool $tmp1561 = $tmp1554.inclusive.value;
    if ($tmp1561) goto $l1568; else goto $l1569;
    $l1568:;
    if ($tmp1558 <= $tmp1560) goto $l1562; else goto $l1564;
    $l1569:;
    if ($tmp1558 < $tmp1560) goto $l1562; else goto $l1564;
    $l1562:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1571, ((uint64_t) self->data[i1557.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1572, 48);
        panda$core$UInt64 $tmp1573 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1571, $tmp1572);
        digit1570 = $tmp1573;
        panda$core$UInt64$init$builtin_uint64(&$tmp1575, 0);
        panda$core$Bit $tmp1576 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1570, $tmp1575);
        bool $tmp1574 = $tmp1576.value;
        if ($tmp1574) goto $l1577;
        panda$core$UInt64$init$builtin_uint64(&$tmp1578, 9);
        panda$core$Bit $tmp1579 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1570, $tmp1578);
        $tmp1574 = $tmp1579.value;
        $l1577:;
        panda$core$Bit $tmp1580 = { $tmp1574 };
        if ($tmp1580.value) {
        {
            $returnValue1550 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1550;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1582, 10);
        panda$core$UInt64 $tmp1583 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1552, $tmp1582);
        panda$core$UInt64 $tmp1584 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1583, digit1570);
        result1552 = $tmp1584;
    }
    $l1565:;
    int64_t $tmp1586 = $tmp1560 - i1557.value;
    if ($tmp1561) goto $l1587; else goto $l1588;
    $l1587:;
    if ((uint64_t) $tmp1586 >= 1) goto $l1585; else goto $l1564;
    $l1588:;
    if ((uint64_t) $tmp1586 > 1) goto $l1585; else goto $l1564;
    $l1585:;
    i1557.value += 1;
    goto $l1562;
    $l1564:;
    $returnValue1550 = ((panda$core$UInt64$nullable) { result1552, true });
    return $returnValue1550;
}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* self) {
    panda$core$Real64$nullable $returnValue1592;
    panda$core$Real64 $tmp1593;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp1593, self);
    $returnValue1592 = ((panda$core$Real64$nullable) { $tmp1593, true });
    return $returnValue1592;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1595;
    panda$core$Int64 h1597;
    panda$core$Int64 $tmp1598;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1599;
    panda$core$Int64 $tmp1600;
    panda$core$Bit $tmp1601;
    panda$core$Int64 $tmp1615;
    panda$core$Int64 $tmp1617;
    panda$core$Int64 $returnValue1625;
    panda$core$Int64$init$builtin_int64(&$tmp1595, 0);
    panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1595);
    if ($tmp1596.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1598, 1);
        h1597 = $tmp1598;
        panda$core$Int64$init$builtin_int64(&$tmp1600, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1601, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1599, $tmp1600, self->_length, $tmp1601);
        int64_t $tmp1603 = $tmp1599.min.value;
        panda$core$Int64 i1602 = { $tmp1603 };
        int64_t $tmp1605 = $tmp1599.max.value;
        bool $tmp1606 = $tmp1599.inclusive.value;
        if ($tmp1606) goto $l1613; else goto $l1614;
        $l1613:;
        if ($tmp1603 <= $tmp1605) goto $l1607; else goto $l1609;
        $l1614:;
        if ($tmp1603 < $tmp1605) goto $l1607; else goto $l1609;
        $l1607:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1615, 101);
            panda$core$Int64 $tmp1616 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1597, $tmp1615);
            panda$core$Int64$init$builtin_int64(&$tmp1617, ((int64_t) self->data[i1602.value].value));
            panda$core$Int64 $tmp1618 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1616, $tmp1617);
            h1597 = $tmp1618;
        }
        $l1610:;
        int64_t $tmp1620 = $tmp1605 - i1602.value;
        if ($tmp1606) goto $l1621; else goto $l1622;
        $l1621:;
        if ((uint64_t) $tmp1620 >= 1) goto $l1619; else goto $l1609;
        $l1622:;
        if ((uint64_t) $tmp1620 > 1) goto $l1619; else goto $l1609;
        $l1619:;
        i1602.value += 1;
        goto $l1607;
        $l1609:;
        self->_hash = h1597;
    }
    }
    $returnValue1625 = self->_hash;
    return $returnValue1625;
}

