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
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn347)(panda$core$Object*);
typedef panda$core$String* (*$fn397)(panda$core$Object*);
typedef panda$core$Object* (*$fn1121)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn1122)(panda$core$String*);
typedef panda$core$String* (*$fn1123)(panda$core$Object*);
typedef panda$core$Object* (*$fn1183)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1184)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1185)(panda$core$Object*);

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
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 172, -4332006218848187331, NULL };

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
    panda$core$String* $match$377_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$382$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$383_2192;
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
        $match$377_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$377_948, &$s50);
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
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$377_948, &$s56);
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
                        Iter$382$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$382$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$382$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$382$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$382$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp87);
                            {
                                $match$383_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp109);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$1769));
                    Iter$382$1769 = NULL;
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 403 });
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
    panda$core$Int64 count161;
    panda$core$Int64 $tmp162;
    panda$collections$Iterator* iter163 = NULL;
    panda$collections$Iterator* $tmp164;
    panda$collections$Iterator* $tmp165;
    panda$core$Int64 $tmp175;
    panda$core$Object* $tmp177;
    panda$core$Int64 $returnValue182;
    int $tmp160;
    {
        panda$core$Int64$init$builtin_int64(&$tmp162, 0);
        count161 = $tmp162;
        panda$collections$Iterator* $tmp166 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
        $tmp165 = $tmp166;
        $tmp164 = $tmp165;
        iter163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        $l167:;
        ITable* $tmp170 = iter163->$class->itable;
        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp170 = $tmp170->next;
        }
        $fn172 $tmp171 = $tmp170->methods[0];
        panda$core$Bit $tmp173 = $tmp171(iter163);
        panda$core$Bit $tmp174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp173);
        bool $tmp169 = $tmp174.value;
        if (!$tmp169) goto $l168;
        {
            panda$core$Int64$init$builtin_int64(&$tmp175, 1);
            panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count161, $tmp175);
            count161 = $tmp176;
            ITable* $tmp178 = iter163->$class->itable;
            while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp178 = $tmp178->next;
            }
            $fn180 $tmp179 = $tmp178->methods[1];
            panda$core$Object* $tmp181 = $tmp179(iter163);
            $tmp177 = $tmp181;
            panda$core$Panda$unref$panda$core$Object($tmp177);
        }
        goto $l167;
        $l168:;
        $returnValue182 = count161;
        $tmp160 = 0;
        goto $l158;
        $l183:;
        return $returnValue182;
    }
    $l158:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter163));
    iter163 = NULL;
    switch ($tmp160) {
        case 0: goto $l183;
    }
    $l185:;
    abort();
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue186;
    $returnValue186 = self->_length;
    return $returnValue186;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue189;
    panda$core$Bit $tmp190;
    panda$core$Range$LTpanda$core$Int64$GT $tmp192;
    panda$core$Int64 $tmp193;
    panda$core$Bit $tmp194;
    panda$core$Bit $tmp209;
    panda$core$Bit $tmp217;
    panda$core$Bit $tmp188 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp188.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp190, false);
        $returnValue189 = $tmp190;
        return $returnValue189;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp193, 0);
    panda$core$Bit$init$builtin_bit(&$tmp194, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp192, $tmp193, p_other->_length, $tmp194);
    int64_t $tmp196 = $tmp192.min.value;
    panda$core$Int64 i195 = { $tmp196 };
    int64_t $tmp198 = $tmp192.max.value;
    bool $tmp199 = $tmp192.inclusive.value;
    if ($tmp199) goto $l206; else goto $l207;
    $l206:;
    if ($tmp196 <= $tmp198) goto $l200; else goto $l202;
    $l207:;
    if ($tmp196 < $tmp198) goto $l200; else goto $l202;
    $l200:;
    {
        panda$core$Bit $tmp208 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i195.value], p_other->data[i195.value]);
        if ($tmp208.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp209, false);
            $returnValue189 = $tmp209;
            return $returnValue189;
        }
        }
    }
    $l203:;
    int64_t $tmp212 = $tmp198 - i195.value;
    if ($tmp199) goto $l213; else goto $l214;
    $l213:;
    if ((uint64_t) $tmp212 >= 1) goto $l211; else goto $l202;
    $l214:;
    if ((uint64_t) $tmp212 > 1) goto $l211; else goto $l202;
    $l211:;
    i195.value += 1;
    goto $l200;
    $l202:;
    panda$core$Bit$init$builtin_bit(&$tmp217, true);
    $returnValue189 = $tmp217;
    return $returnValue189;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue220;
    panda$core$Bit $tmp221;
    panda$core$Range$LTpanda$core$Int64$GT $tmp223;
    panda$core$Int64 $tmp224;
    panda$core$Bit $tmp225;
    panda$core$Bit $tmp242;
    panda$core$Bit $tmp250;
    panda$core$Bit $tmp219 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp219.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp221, false);
        $returnValue220 = $tmp221;
        return $returnValue220;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp224, 0);
    panda$core$Bit$init$builtin_bit(&$tmp225, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp223, $tmp224, p_other->_length, $tmp225);
    int64_t $tmp227 = $tmp223.min.value;
    panda$core$Int64 i226 = { $tmp227 };
    int64_t $tmp229 = $tmp223.max.value;
    bool $tmp230 = $tmp223.inclusive.value;
    if ($tmp230) goto $l237; else goto $l238;
    $l237:;
    if ($tmp227 <= $tmp229) goto $l231; else goto $l233;
    $l238:;
    if ($tmp227 < $tmp229) goto $l231; else goto $l233;
    $l231:;
    {
        panda$core$Int64 $tmp239 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp239, i226);
        panda$core$Bit $tmp241 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp240.value], p_other->data[i226.value]);
        if ($tmp241.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp242, false);
            $returnValue220 = $tmp242;
            return $returnValue220;
        }
        }
    }
    $l234:;
    int64_t $tmp245 = $tmp229 - i226.value;
    if ($tmp230) goto $l246; else goto $l247;
    $l246:;
    if ((uint64_t) $tmp245 >= 1) goto $l244; else goto $l233;
    $l247:;
    if ((uint64_t) $tmp245 > 1) goto $l244; else goto $l233;
    $l244:;
    i226.value += 1;
    goto $l231;
    $l233:;
    panda$core$Bit$init$builtin_bit(&$tmp250, true);
    $returnValue220 = $tmp250;
    return $returnValue220;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 $tmp252;
    panda$core$String* $returnValue254;
    panda$core$String* $tmp255;
    panda$core$Int64 start257;
    panda$core$Int64 $tmp258;
    panda$core$Int64 $tmp267;
    panda$core$Int64 end269;
    panda$core$Int64 $tmp270;
    panda$core$Int64 $tmp280;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp284;
    panda$core$String$Index $tmp285;
    panda$core$String$Index $tmp286;
    panda$core$Bit $tmp287;
    panda$core$Int64$init$builtin_int64(&$tmp252, 0);
    panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp252);
    if ($tmp253.value) {
    {
        $tmp255 = self;
        $returnValue254 = $tmp255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
        return $returnValue254;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp258, 0);
    start257 = $tmp258;
    $l259:;
    panda$core$Bit $tmp263 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start257, self->_length);
    bool $tmp262 = $tmp263.value;
    if (!$tmp262) goto $l264;
    panda$core$Bit $tmp265 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start257.value]);
    $tmp262 = $tmp265.value;
    $l264:;
    panda$core$Bit $tmp266 = { $tmp262 };
    bool $tmp261 = $tmp266.value;
    if (!$tmp261) goto $l260;
    {
        panda$core$Int64$init$builtin_int64(&$tmp267, 1);
        panda$core$Int64 $tmp268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start257, $tmp267);
        start257 = $tmp268;
    }
    goto $l259;
    $l260:;
    panda$core$Int64$init$builtin_int64(&$tmp270, 1);
    panda$core$Int64 $tmp271 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp270);
    end269 = $tmp271;
    $l272:;
    panda$core$Bit $tmp276 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end269, start257);
    bool $tmp275 = $tmp276.value;
    if (!$tmp275) goto $l277;
    panda$core$Bit $tmp278 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end269.value]);
    $tmp275 = $tmp278.value;
    $l277:;
    panda$core$Bit $tmp279 = { $tmp275 };
    bool $tmp274 = $tmp279.value;
    if (!$tmp274) goto $l273;
    {
        panda$core$Int64$init$builtin_int64(&$tmp280, 1);
        panda$core$Int64 $tmp281 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end269, $tmp280);
        end269 = $tmp281;
    }
    goto $l272;
    $l273:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp285, start257);
    panda$core$String$Index$init$panda$core$Int64(&$tmp286, end269);
    panda$core$Bit$init$builtin_bit(&$tmp287, true);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp284, $tmp285, $tmp286, $tmp287);
    panda$core$String* $tmp288 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp284);
    $tmp283 = $tmp288;
    $tmp282 = $tmp283;
    $returnValue254 = $tmp282;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
    return $returnValue254;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result290;
    panda$core$Range$LTpanda$core$Int64$GT $tmp292;
    panda$core$Int64 $tmp293;
    panda$core$Bit $tmp294;
    panda$core$Range$LTpanda$core$Int64$GT $tmp314;
    panda$core$Int64 $tmp315;
    panda$core$Bit $tmp316;
    panda$core$String* $returnValue337;
    panda$core$String* $tmp338;
    panda$core$String* $tmp339;
    panda$core$Int64 $tmp291 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result290 = ((panda$core$Char8*) pandaZAlloc($tmp291.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp293, 0);
    panda$core$Bit$init$builtin_bit(&$tmp294, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp292, $tmp293, self->_length, $tmp294);
    int64_t $tmp296 = $tmp292.min.value;
    panda$core$Int64 i295 = { $tmp296 };
    int64_t $tmp298 = $tmp292.max.value;
    bool $tmp299 = $tmp292.inclusive.value;
    if ($tmp299) goto $l306; else goto $l307;
    $l306:;
    if ($tmp296 <= $tmp298) goto $l300; else goto $l302;
    $l307:;
    if ($tmp296 < $tmp298) goto $l300; else goto $l302;
    $l300:;
    {
        result290[i295.value] = self->data[i295.value];
    }
    $l303:;
    int64_t $tmp309 = $tmp298 - i295.value;
    if ($tmp299) goto $l310; else goto $l311;
    $l310:;
    if ((uint64_t) $tmp309 >= 1) goto $l308; else goto $l302;
    $l311:;
    if ((uint64_t) $tmp309 > 1) goto $l308; else goto $l302;
    $l308:;
    i295.value += 1;
    goto $l300;
    $l302:;
    panda$core$Int64$init$builtin_int64(&$tmp315, 0);
    panda$core$Bit$init$builtin_bit(&$tmp316, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp314, $tmp315, p_other->_length, $tmp316);
    int64_t $tmp318 = $tmp314.min.value;
    panda$core$Int64 i317 = { $tmp318 };
    int64_t $tmp320 = $tmp314.max.value;
    bool $tmp321 = $tmp314.inclusive.value;
    if ($tmp321) goto $l328; else goto $l329;
    $l328:;
    if ($tmp318 <= $tmp320) goto $l322; else goto $l324;
    $l329:;
    if ($tmp318 < $tmp320) goto $l322; else goto $l324;
    $l322:;
    {
        panda$core$Int64 $tmp330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i317);
        result290[$tmp330.value] = p_other->data[i317.value];
    }
    $l325:;
    int64_t $tmp332 = $tmp320 - i317.value;
    if ($tmp321) goto $l333; else goto $l334;
    $l333:;
    if ((uint64_t) $tmp332 >= 1) goto $l331; else goto $l324;
    $l334:;
    if ((uint64_t) $tmp332 > 1) goto $l331; else goto $l324;
    $l331:;
    i317.value += 1;
    goto $l322;
    $l324:;
    panda$core$String* $tmp340 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp340, result290, $tmp341);
    $tmp339 = $tmp340;
    $tmp338 = $tmp339;
    $returnValue337 = $tmp338;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
    return $returnValue337;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp348 = (($fn347) p_other->$class->vtable[0])(p_other);
    $tmp346 = $tmp348;
    panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp346);
    $tmp345 = $tmp349;
    $tmp344 = $tmp345;
    $returnValue343 = $tmp344;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
    return $returnValue343;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp351;
    panda$core$MutableString* result360 = NULL;
    panda$core$MutableString* $tmp361;
    panda$core$MutableString* $tmp362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp364;
    panda$core$Int64 $tmp365;
    panda$core$Bit $tmp366;
    panda$core$String* $returnValue386;
    panda$core$String* $tmp387;
    panda$core$String* $tmp388;
    panda$core$Int64$init$builtin_int64(&$tmp351, 0);
    panda$core$Bit $tmp352 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp351);
    if ($tmp352.value) goto $l353; else goto $l354;
    $l354:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s355, (panda$core$Int64) { 523 }, &$s356);
    abort();
    $l353:;
    int $tmp359;
    {
        panda$core$MutableString* $tmp363 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp363);
        $tmp362 = $tmp363;
        $tmp361 = $tmp362;
        result360 = $tmp361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Int64$init$builtin_int64(&$tmp365, 0);
        panda$core$Bit$init$builtin_bit(&$tmp366, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp364, $tmp365, p_count, $tmp366);
        int64_t $tmp368 = $tmp364.min.value;
        panda$core$Int64 i367 = { $tmp368 };
        int64_t $tmp370 = $tmp364.max.value;
        bool $tmp371 = $tmp364.inclusive.value;
        if ($tmp371) goto $l378; else goto $l379;
        $l378:;
        if ($tmp368 <= $tmp370) goto $l372; else goto $l374;
        $l379:;
        if ($tmp368 < $tmp370) goto $l372; else goto $l374;
        $l372:;
        {
            panda$core$MutableString$append$panda$core$String(result360, self);
        }
        $l375:;
        int64_t $tmp381 = $tmp370 - i367.value;
        if ($tmp371) goto $l382; else goto $l383;
        $l382:;
        if ((uint64_t) $tmp381 >= 1) goto $l380; else goto $l374;
        $l383:;
        if ((uint64_t) $tmp381 > 1) goto $l380; else goto $l374;
        $l380:;
        i367.value += 1;
        goto $l372;
        $l374:;
        panda$core$String* $tmp389 = panda$core$MutableString$finish$R$panda$core$String(result360);
        $tmp388 = $tmp389;
        $tmp387 = $tmp388;
        $returnValue386 = $tmp387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
        $tmp359 = 0;
        goto $l357;
        $l390:;
        return $returnValue386;
    }
    $l357:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result360));
    result360 = NULL;
    switch ($tmp359) {
        case 0: goto $l390;
    }
    $l392:;
    abort();
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    panda$core$String* $tmp396;
    panda$core$String* $tmp398 = (($fn397) p_o->$class->vtable[0])(p_o);
    $tmp396 = $tmp398;
    panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, p_s);
    $tmp395 = $tmp399;
    $tmp394 = $tmp395;
    $returnValue393 = $tmp394;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
    return $returnValue393;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue402;
    panda$core$Bit $tmp403;
    panda$core$Range$LTpanda$core$Int64$GT $tmp405;
    panda$core$Int64 $tmp406;
    panda$core$Bit $tmp407;
    panda$core$Bit $tmp422;
    panda$core$Bit $tmp430;
    panda$core$Bit $tmp401 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp401.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp403, false);
        $returnValue402 = $tmp403;
        return $returnValue402;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp406, 0);
    panda$core$Bit$init$builtin_bit(&$tmp407, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp405, $tmp406, self->_length, $tmp407);
    int64_t $tmp409 = $tmp405.min.value;
    panda$core$Int64 i408 = { $tmp409 };
    int64_t $tmp411 = $tmp405.max.value;
    bool $tmp412 = $tmp405.inclusive.value;
    if ($tmp412) goto $l419; else goto $l420;
    $l419:;
    if ($tmp409 <= $tmp411) goto $l413; else goto $l415;
    $l420:;
    if ($tmp409 < $tmp411) goto $l413; else goto $l415;
    $l413:;
    {
        panda$core$Bit $tmp421 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i408.value], p_other->data[i408.value]);
        if ($tmp421.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp422, false);
            $returnValue402 = $tmp422;
            return $returnValue402;
        }
        }
    }
    $l416:;
    int64_t $tmp425 = $tmp411 - i408.value;
    if ($tmp412) goto $l426; else goto $l427;
    $l426:;
    if ((uint64_t) $tmp425 >= 1) goto $l424; else goto $l415;
    $l427:;
    if ((uint64_t) $tmp425 > 1) goto $l424; else goto $l415;
    $l424:;
    i408.value += 1;
    goto $l413;
    $l415:;
    panda$core$Bit$init$builtin_bit(&$tmp430, true);
    $returnValue402 = $tmp430;
    return $returnValue402;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue432;
    panda$core$Bit $tmp433 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp433);
    $returnValue432 = $tmp434;
    return $returnValue432;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx436;
    panda$core$Char8 c437;
    panda$core$Int32 result438;
    panda$core$Bit $tmp440;
    panda$core$Char32 $returnValue443;
    panda$core$Char32 $tmp444;
    panda$core$Bit $tmp446;
    panda$core$Int64 $tmp449;
    panda$core$Int32 $tmp455;
    panda$core$Int32 $tmp457;
    panda$core$Int64 $tmp459;
    panda$core$Int32 $tmp462;
    panda$core$Char32 $tmp465;
    panda$core$Bit $tmp467;
    panda$core$Int64 $tmp470;
    panda$core$Int32 $tmp476;
    panda$core$Int32 $tmp478;
    panda$core$Int64 $tmp480;
    panda$core$Int32 $tmp483;
    panda$core$Int32 $tmp485;
    panda$core$Int64 $tmp488;
    panda$core$Int32 $tmp491;
    panda$core$Char32 $tmp494;
    panda$core$Int64 $tmp496;
    panda$core$Int32 $tmp502;
    panda$core$Int32 $tmp504;
    panda$core$Int64 $tmp506;
    panda$core$Int32 $tmp509;
    panda$core$Int32 $tmp511;
    panda$core$Int64 $tmp514;
    panda$core$Int32 $tmp517;
    panda$core$Int32 $tmp519;
    panda$core$Int64 $tmp522;
    panda$core$Int32 $tmp525;
    panda$core$Char32 $tmp528;
    idx436 = p_index.value;
    c437 = self->data[idx436.value];
    panda$core$Int32 $tmp439 = panda$core$Char8$convert$R$panda$core$Int32(c437);
    result438 = $tmp439;
    int64_t $tmp441 = ((int64_t) c437.value) & 255;
    bool $tmp442 = $tmp441 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp440, $tmp442);
    if ($tmp440.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp444, result438);
        $returnValue443 = $tmp444;
        return $returnValue443;
    }
    }
    int64_t $tmp447 = ((int64_t) c437.value) & 255;
    bool $tmp448 = $tmp447 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp446, $tmp448);
    if ($tmp446.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp449, 1);
        panda$core$Int64 $tmp450 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp449);
        panda$core$Bit $tmp451 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp450, self->_length);
        if ($tmp451.value) goto $l452; else goto $l453;
        $l453:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s454, (panda$core$Int64) { 565 });
        abort();
        $l452:;
        panda$core$Int32$init$builtin_int32(&$tmp455, 31);
        panda$core$Int32 $tmp456 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result438, $tmp455);
        panda$core$Int32$init$builtin_int32(&$tmp457, 6);
        panda$core$Int32 $tmp458 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp456, $tmp457);
        panda$core$Int64$init$builtin_int64(&$tmp459, 1);
        panda$core$Int64 $tmp460 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp459);
        panda$core$Int32 $tmp461 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp460.value]);
        panda$core$Int32$init$builtin_int32(&$tmp462, 63);
        panda$core$Int32 $tmp463 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp461, $tmp462);
        panda$core$Int32 $tmp464 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp458, $tmp463);
        result438 = $tmp464;
        panda$core$Char32$init$panda$core$Int32(&$tmp465, result438);
        $returnValue443 = $tmp465;
        return $returnValue443;
    }
    }
    int64_t $tmp468 = ((int64_t) c437.value) & 255;
    bool $tmp469 = $tmp468 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp467, $tmp469);
    if ($tmp467.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp470, 2);
        panda$core$Int64 $tmp471 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp470);
        panda$core$Bit $tmp472 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp471, self->_length);
        if ($tmp472.value) goto $l473; else goto $l474;
        $l474:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s475, (panda$core$Int64) { 570 });
        abort();
        $l473:;
        panda$core$Int32$init$builtin_int32(&$tmp476, 15);
        panda$core$Int32 $tmp477 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result438, $tmp476);
        panda$core$Int32$init$builtin_int32(&$tmp478, 12);
        panda$core$Int32 $tmp479 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp477, $tmp478);
        panda$core$Int64$init$builtin_int64(&$tmp480, 1);
        panda$core$Int64 $tmp481 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp480);
        panda$core$Int32 $tmp482 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp481.value]);
        panda$core$Int32$init$builtin_int32(&$tmp483, 63);
        panda$core$Int32 $tmp484 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp482, $tmp483);
        panda$core$Int32$init$builtin_int32(&$tmp485, 6);
        panda$core$Int32 $tmp486 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp484, $tmp485);
        panda$core$Int32 $tmp487 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp479, $tmp486);
        panda$core$Int64$init$builtin_int64(&$tmp488, 2);
        panda$core$Int64 $tmp489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp488);
        panda$core$Int32 $tmp490 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp489.value]);
        panda$core$Int32$init$builtin_int32(&$tmp491, 63);
        panda$core$Int32 $tmp492 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp490, $tmp491);
        panda$core$Int32 $tmp493 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp487, $tmp492);
        result438 = $tmp493;
        panda$core$Char32$init$panda$core$Int32(&$tmp494, result438);
        $returnValue443 = $tmp494;
        return $returnValue443;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp496, 3);
    panda$core$Int64 $tmp497 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp496);
    panda$core$Bit $tmp498 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp497, self->_length);
    if ($tmp498.value) goto $l499; else goto $l500;
    $l500:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s501, (panda$core$Int64) { 575 });
    abort();
    $l499:;
    panda$core$Int32$init$builtin_int32(&$tmp502, 7);
    panda$core$Int32 $tmp503 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result438, $tmp502);
    panda$core$Int32$init$builtin_int32(&$tmp504, 18);
    panda$core$Int32 $tmp505 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp503, $tmp504);
    panda$core$Int64$init$builtin_int64(&$tmp506, 1);
    panda$core$Int64 $tmp507 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp506);
    panda$core$Int32 $tmp508 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp507.value]);
    panda$core$Int32$init$builtin_int32(&$tmp509, 63);
    panda$core$Int32 $tmp510 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp508, $tmp509);
    panda$core$Int32$init$builtin_int32(&$tmp511, 12);
    panda$core$Int32 $tmp512 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp510, $tmp511);
    panda$core$Int32 $tmp513 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp505, $tmp512);
    panda$core$Int64$init$builtin_int64(&$tmp514, 2);
    panda$core$Int64 $tmp515 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp514);
    panda$core$Int32 $tmp516 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp515.value]);
    panda$core$Int32$init$builtin_int32(&$tmp517, 63);
    panda$core$Int32 $tmp518 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp516, $tmp517);
    panda$core$Int32$init$builtin_int32(&$tmp519, 6);
    panda$core$Int32 $tmp520 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp518, $tmp519);
    panda$core$Int32 $tmp521 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp513, $tmp520);
    panda$core$Int64$init$builtin_int64(&$tmp522, 3);
    panda$core$Int64 $tmp523 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx436, $tmp522);
    panda$core$Int32 $tmp524 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp523.value]);
    panda$core$Int32$init$builtin_int32(&$tmp525, 63);
    panda$core$Int32 $tmp526 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp524, $tmp525);
    panda$core$Int32 $tmp527 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp521, $tmp526);
    result438 = $tmp527;
    panda$core$Char32$init$panda$core$Int32(&$tmp528, result438);
    $returnValue443 = $tmp528;
    return $returnValue443;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue530;
    panda$core$String$Index $tmp531 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp532 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp531, p_index);
    panda$core$Char32 $tmp533 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp532);
    $returnValue530 = $tmp533;
    return $returnValue530;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue535;
    panda$core$String* $tmp536;
    panda$core$String* $tmp537;
    panda$core$String* $tmp538 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp539 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp538, (self->data + p_r.min.value.value), $tmp539, self);
    $tmp537 = $tmp538;
    $tmp536 = $tmp537;
    $returnValue535 = $tmp536;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
    return $returnValue535;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min541;
    panda$core$String$Index max543;
    panda$core$String* $returnValue546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp549;
    memset(&min541, 0, sizeof(min541));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min541 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp542 = panda$core$String$start$R$panda$core$String$Index(self);
        min541 = $tmp542;
    }
    }
    memset(&max543, 0, sizeof(max543));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max543 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp544 = panda$core$String$end$R$panda$core$String$Index(self);
        max543 = $tmp544;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp545 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max543);
            max543 = $tmp545;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp549, min541, max543, p_r.inclusive);
    panda$core$String* $tmp550 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp549);
    $tmp548 = $tmp550;
    $tmp547 = $tmp548;
    $returnValue546 = $tmp547;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
    return $returnValue546;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current555;
    panda$core$MutableString* result556 = NULL;
    panda$core$MutableString* $tmp557;
    panda$core$MutableString* $tmp558;
    panda$core$Int64 max560;
    panda$core$Int64 $tmp561;
    panda$core$Char8 c567;
    panda$core$Int64 $tmp568;
    panda$core$Bit $tmp570;
    panda$core$Int64 $tmp573;
    panda$core$Bit $tmp575;
    panda$core$Int64 $tmp578;
    panda$core$Bit $tmp580;
    panda$core$Int64 $tmp583;
    panda$core$String* $returnValue585;
    panda$core$String* $tmp586;
    panda$core$String* $tmp587;
    int $tmp554;
    {
        current555 = p_r.min.value;
        panda$core$MutableString* $tmp559 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp559);
        $tmp558 = $tmp559;
        $tmp557 = $tmp558;
        result556 = $tmp557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        max560 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp561, 1);
            panda$core$Int64 $tmp562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max560, $tmp561);
            max560 = $tmp562;
        }
        }
        $l563:;
        panda$core$Bit $tmp566 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current555, max560);
        bool $tmp565 = $tmp566.value;
        if (!$tmp565) goto $l564;
        {
            c567 = self->data[current555.value];
            panda$core$MutableString$append$panda$core$Char8(result556, c567);
            panda$core$Int64$init$builtin_int64(&$tmp568, 1);
            panda$core$Int64 $tmp569 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current555, $tmp568);
            current555 = $tmp569;
            int64_t $tmp571 = ((int64_t) c567.value) & 255;
            bool $tmp572 = $tmp571 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp570, $tmp572);
            if ($tmp570.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result556, self->data[current555.value]);
                panda$core$Int64$init$builtin_int64(&$tmp573, 1);
                panda$core$Int64 $tmp574 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current555, $tmp573);
                current555 = $tmp574;
            }
            }
            int64_t $tmp576 = ((int64_t) c567.value) & 255;
            bool $tmp577 = $tmp576 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp575, $tmp577);
            if ($tmp575.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result556, self->data[current555.value]);
                panda$core$Int64$init$builtin_int64(&$tmp578, 1);
                panda$core$Int64 $tmp579 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current555, $tmp578);
                current555 = $tmp579;
            }
            }
            int64_t $tmp581 = ((int64_t) c567.value) & 255;
            bool $tmp582 = $tmp581 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp580, $tmp582);
            if ($tmp580.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result556, self->data[current555.value]);
                panda$core$Int64$init$builtin_int64(&$tmp583, 1);
                panda$core$Int64 $tmp584 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current555, $tmp583);
                current555 = $tmp584;
            }
            }
        }
        goto $l563;
        $l564:;
        panda$core$String* $tmp588 = panda$core$MutableString$finish$R$panda$core$String(result556);
        $tmp587 = $tmp588;
        $tmp586 = $tmp587;
        $returnValue585 = $tmp586;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
        $tmp554 = 0;
        goto $l552;
        $l589:;
        return $returnValue585;
    }
    $l552:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result556));
    result556 = NULL;
    switch ($tmp554) {
        case 0: goto $l589;
    }
    $l591:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp592;
    panda$core$String* $returnValue594;
    panda$core$String* $tmp595;
    panda$core$String$Index min598;
    panda$core$String$Index max600;
    panda$core$String* $tmp603;
    panda$core$String* $tmp604;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp605;
    panda$core$Int64$init$builtin_int64(&$tmp592, 0);
    panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp592);
    if ($tmp593.value) {
    {
        $tmp595 = &$s596;
        $returnValue594 = $tmp595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
        return $returnValue594;
    }
    }
    memset(&min598, 0, sizeof(min598));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min598 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp599 = panda$core$String$start$R$panda$core$String$Index(self);
        min598 = $tmp599;
    }
    }
    memset(&max600, 0, sizeof(max600));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max600 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp601 = panda$core$String$end$R$panda$core$String$Index(self);
        max600 = $tmp601;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp602 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max600);
            max600 = $tmp602;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp605, min598, max600, p_r.inclusive);
    panda$core$String* $tmp606 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp605);
    $tmp604 = $tmp606;
    $tmp603 = $tmp604;
    $returnValue594 = $tmp603;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
    return $returnValue594;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp611;
    panda$core$String* $returnValue613;
    panda$core$String* $tmp614;
    panda$core$Int64 step618;
    panda$core$Int64 current619;
    panda$core$Int64 $tmp620;
    panda$core$Int64 end625;
    panda$core$Int64 $tmp626;
    panda$core$MutableString* result630 = NULL;
    panda$core$MutableString* $tmp631;
    panda$core$MutableString* $tmp632;
    panda$core$Int64 $tmp634;
    panda$core$Char8 c640;
    panda$core$Int64 $tmp641;
    panda$core$Bit $tmp643;
    panda$core$Int64 $tmp646;
    panda$core$Bit $tmp648;
    panda$core$Int64 $tmp651;
    panda$core$Bit $tmp653;
    panda$core$Int64 $tmp656;
    panda$core$Range$LTpanda$core$Int64$GT $tmp658;
    panda$core$Int64 $tmp659;
    panda$core$Bit $tmp660;
    panda$core$String* $tmp675;
    panda$core$String* $tmp676;
    panda$core$String$Index $tmp680;
    panda$core$Int64 $tmp688;
    panda$core$Char8 c697;
    panda$core$Int64 old698;
    panda$core$Int64 $tmp699;
    panda$core$Bit $tmp701;
    panda$core$Int64 $tmp704;
    panda$core$Bit $tmp706;
    panda$core$Int64 $tmp709;
    panda$core$Bit $tmp711;
    panda$core$Int64 $tmp714;
    panda$core$Bit $tmp719;
    panda$core$Int64 $tmp726;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp728;
    panda$core$Int64 $tmp729;
    panda$core$Int64 $tmp730;
    panda$core$Bit $tmp731;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    panda$core$String$Index $tmp756;
    panda$core$Char8 c780;
    panda$core$Int64 $tmp781;
    panda$core$Bit $tmp783;
    panda$core$Int64 $tmp786;
    panda$core$Bit $tmp788;
    panda$core$Int64 $tmp791;
    panda$core$Bit $tmp793;
    panda$core$String* $tmp796;
    panda$core$String* $tmp797;
    int $tmp610;
    {
        panda$core$Int64$init$builtin_int64(&$tmp611, 0);
        panda$core$Bit $tmp612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp611);
        if ($tmp612.value) {
        {
            $tmp614 = &$s615;
            $returnValue613 = $tmp614;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
            $tmp610 = 0;
            goto $l608;
            $l616:;
            return $returnValue613;
        }
        }
        step618 = p_r.step;
        memset(&current619, 0, sizeof(current619));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current619 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp620, 0);
        panda$core$Bit $tmp621 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step618, $tmp620);
        if ($tmp621.value) {
        {
            panda$core$String$Index $tmp622 = panda$core$String$start$R$panda$core$String$Index(self);
            current619 = $tmp622.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp623 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp624 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp623);
            current619 = $tmp624.value;
        }
        }
        }
        memset(&end625, 0, sizeof(end625));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end625 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp626, 0);
        panda$core$Bit $tmp627 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step618, $tmp626);
        if ($tmp627.value) {
        {
            panda$core$String$Index $tmp628 = panda$core$String$end$R$panda$core$String$Index(self);
            end625 = $tmp628.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp629 = panda$core$String$start$R$panda$core$String$Index(self);
            end625 = $tmp629.value;
        }
        }
        }
        panda$core$MutableString* $tmp633 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp633);
        $tmp632 = $tmp633;
        $tmp631 = $tmp632;
        result630 = $tmp631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
        panda$core$Int64$init$builtin_int64(&$tmp634, 0);
        panda$core$Bit $tmp635 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp634);
        if ($tmp635.value) {
        {
            $l636:;
            panda$core$Bit $tmp639 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current619, end625);
            bool $tmp638 = $tmp639.value;
            if (!$tmp638) goto $l637;
            {
                c640 = self->data[current619.value];
                panda$core$MutableString$append$panda$core$Char8(result630, c640);
                panda$core$Int64$init$builtin_int64(&$tmp641, 1);
                panda$core$Int64 $tmp642 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp641);
                current619 = $tmp642;
                int64_t $tmp644 = ((int64_t) c640.value) & 255;
                bool $tmp645 = $tmp644 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp643, $tmp645);
                if ($tmp643.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp646, 1);
                    panda$core$Int64 $tmp647 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp646);
                    current619 = $tmp647;
                }
                }
                int64_t $tmp649 = ((int64_t) c640.value) & 255;
                bool $tmp650 = $tmp649 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp648, $tmp650);
                if ($tmp648.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp651, 1);
                    panda$core$Int64 $tmp652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp651);
                    current619 = $tmp652;
                }
                }
                int64_t $tmp654 = ((int64_t) c640.value) & 255;
                bool $tmp655 = $tmp654 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp653, $tmp655);
                if ($tmp653.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp656, 1);
                    panda$core$Int64 $tmp657 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp656);
                    current619 = $tmp657;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp659, 1);
                panda$core$Bit$init$builtin_bit(&$tmp660, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp658, $tmp659, step618, $tmp660);
                int64_t $tmp662 = $tmp658.min.value;
                panda$core$Int64 i661 = { $tmp662 };
                int64_t $tmp664 = $tmp658.max.value;
                bool $tmp665 = $tmp658.inclusive.value;
                if ($tmp665) goto $l672; else goto $l673;
                $l672:;
                if ($tmp662 <= $tmp664) goto $l666; else goto $l668;
                $l673:;
                if ($tmp662 < $tmp664) goto $l666; else goto $l668;
                $l666:;
                {
                    panda$core$Bit $tmp674 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current619, end625);
                    if ($tmp674.value) {
                    {
                        panda$core$String* $tmp677 = panda$core$MutableString$convert$R$panda$core$String(result630);
                        $tmp676 = $tmp677;
                        $tmp675 = $tmp676;
                        $returnValue613 = $tmp675;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                        $tmp610 = 1;
                        goto $l608;
                        $l678:;
                        return $returnValue613;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp680, current619);
                    panda$core$String$Index $tmp681 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp680);
                    current619 = $tmp681.value;
                }
                $l669:;
                int64_t $tmp683 = $tmp664 - i661.value;
                if ($tmp665) goto $l684; else goto $l685;
                $l684:;
                if ((uint64_t) $tmp683 >= 1) goto $l682; else goto $l668;
                $l685:;
                if ((uint64_t) $tmp683 > 1) goto $l682; else goto $l668;
                $l682:;
                i661.value += 1;
                goto $l666;
                $l668:;
            }
            goto $l636;
            $l637:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp688, 0);
            panda$core$Bit $tmp689 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp688);
            if ($tmp689.value) goto $l690; else goto $l691;
            $l691:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s692, (panda$core$Int64) { 766 });
            abort();
            $l690:;
            $l693:;
            panda$core$Bit $tmp696 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current619, end625);
            bool $tmp695 = $tmp696.value;
            if (!$tmp695) goto $l694;
            {
                c697 = self->data[current619.value];
                panda$core$MutableString$append$panda$core$Char8(result630, c697);
                old698 = current619;
                panda$core$Int64$init$builtin_int64(&$tmp699, 1);
                panda$core$Int64 $tmp700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp699);
                current619 = $tmp700;
                int64_t $tmp702 = ((int64_t) c697.value) & 255;
                bool $tmp703 = $tmp702 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp701, $tmp703);
                if ($tmp701.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp704, 1);
                    panda$core$Int64 $tmp705 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp704);
                    current619 = $tmp705;
                }
                }
                int64_t $tmp707 = ((int64_t) c697.value) & 255;
                bool $tmp708 = $tmp707 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp706, $tmp708);
                if ($tmp706.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp709, 1);
                    panda$core$Int64 $tmp710 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp709);
                    current619 = $tmp710;
                }
                }
                int64_t $tmp712 = ((int64_t) c697.value) & 255;
                bool $tmp713 = $tmp712 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp711, $tmp713);
                if ($tmp711.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp714, 1);
                panda$core$Int64 $tmp715 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old698, $tmp714);
                current619 = $tmp715;
                $l716:;
                int64_t $tmp721 = ((int64_t) self->data[current619.value].value) & 255;
                bool $tmp722 = $tmp721 >= 128;
                bool $tmp720 = $tmp722;
                if (!$tmp720) goto $l723;
                int64_t $tmp724 = ((int64_t) self->data[current619.value].value) & 255;
                bool $tmp725 = $tmp724 < 192;
                $tmp720 = $tmp725;
                $l723:;
                panda$core$Bit$init$builtin_bit(&$tmp719, $tmp720);
                bool $tmp718 = $tmp719.value;
                if (!$tmp718) goto $l717;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp726, 1);
                    panda$core$Int64 $tmp727 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current619, $tmp726);
                    current619 = $tmp727;
                }
                goto $l716;
                $l717:;
                panda$core$Int64$init$builtin_int64(&$tmp729, -1);
                panda$core$Int64$init$builtin_int64(&$tmp730, -1);
                panda$core$Bit$init$builtin_bit(&$tmp731, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp728, $tmp729, step618, $tmp730, $tmp731);
                int64_t $tmp733 = $tmp728.start.value;
                panda$core$Int64 i732 = { $tmp733 };
                int64_t $tmp735 = $tmp728.end.value;
                int64_t $tmp736 = $tmp728.step.value;
                bool $tmp737 = $tmp728.inclusive.value;
                bool $tmp744 = $tmp736 > 0;
                if ($tmp744) goto $l742; else goto $l743;
                $l742:;
                if ($tmp737) goto $l745; else goto $l746;
                $l745:;
                if ($tmp733 <= $tmp735) goto $l738; else goto $l740;
                $l746:;
                if ($tmp733 < $tmp735) goto $l738; else goto $l740;
                $l743:;
                if ($tmp737) goto $l747; else goto $l748;
                $l747:;
                if ($tmp733 >= $tmp735) goto $l738; else goto $l740;
                $l748:;
                if ($tmp733 > $tmp735) goto $l738; else goto $l740;
                $l738:;
                {
                    panda$core$Bit $tmp750 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current619, end625);
                    if ($tmp750.value) {
                    {
                        panda$core$String* $tmp753 = panda$core$MutableString$convert$R$panda$core$String(result630);
                        $tmp752 = $tmp753;
                        $tmp751 = $tmp752;
                        $returnValue613 = $tmp751;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                        $tmp610 = 2;
                        goto $l608;
                        $l754:;
                        return $returnValue613;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp756, current619);
                    panda$core$String$Index $tmp757 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp756);
                    current619 = $tmp757.value;
                }
                $l741:;
                if ($tmp744) goto $l759; else goto $l760;
                $l759:;
                int64_t $tmp761 = $tmp735 - i732.value;
                if ($tmp737) goto $l762; else goto $l763;
                $l762:;
                if ((uint64_t) $tmp761 >= $tmp736) goto $l758; else goto $l740;
                $l763:;
                if ((uint64_t) $tmp761 > $tmp736) goto $l758; else goto $l740;
                $l760:;
                int64_t $tmp765 = i732.value - $tmp735;
                if ($tmp737) goto $l766; else goto $l767;
                $l766:;
                if ((uint64_t) $tmp765 >= -$tmp736) goto $l758; else goto $l740;
                $l767:;
                if ((uint64_t) $tmp765 > -$tmp736) goto $l758; else goto $l740;
                $l758:;
                i732.value += $tmp736;
                goto $l738;
                $l740:;
            }
            goto $l693;
            $l694:;
        }
        }
        bool $tmp771 = p_r.inclusive.value;
        if ($tmp771) goto $l772;
        $tmp771 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l772:;
        panda$core$Bit $tmp773 = { $tmp771 };
        bool $tmp770 = $tmp773.value;
        if (!$tmp770) goto $l774;
        panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current619, end625);
        $tmp770 = $tmp775.value;
        $l774:;
        panda$core$Bit $tmp776 = { $tmp770 };
        bool $tmp769 = $tmp776.value;
        if (!$tmp769) goto $l777;
        panda$core$Bit $tmp778 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end625, self->_length);
        $tmp769 = $tmp778.value;
        $l777:;
        panda$core$Bit $tmp779 = { $tmp769 };
        if ($tmp779.value) {
        {
            c780 = self->data[current619.value];
            panda$core$MutableString$append$panda$core$Char8(result630, c780);
            panda$core$Int64$init$builtin_int64(&$tmp781, 1);
            panda$core$Int64 $tmp782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp781);
            current619 = $tmp782;
            int64_t $tmp784 = ((int64_t) c780.value) & 255;
            bool $tmp785 = $tmp784 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp783, $tmp785);
            if ($tmp783.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                panda$core$Int64$init$builtin_int64(&$tmp786, 1);
                panda$core$Int64 $tmp787 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp786);
                current619 = $tmp787;
            }
            }
            int64_t $tmp789 = ((int64_t) c780.value) & 255;
            bool $tmp790 = $tmp789 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp788, $tmp790);
            if ($tmp788.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
                panda$core$Int64$init$builtin_int64(&$tmp791, 1);
                panda$core$Int64 $tmp792 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current619, $tmp791);
                current619 = $tmp792;
            }
            }
            int64_t $tmp794 = ((int64_t) c780.value) & 255;
            bool $tmp795 = $tmp794 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp793, $tmp795);
            if ($tmp793.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result630, self->data[current619.value]);
            }
            }
        }
        }
        panda$core$String* $tmp798 = panda$core$MutableString$finish$R$panda$core$String(result630);
        $tmp797 = $tmp798;
        $tmp796 = $tmp797;
        $returnValue613 = $tmp796;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
        $tmp610 = 3;
        goto $l608;
        $l799:;
        return $returnValue613;
    }
    $l608:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result630));
    result630 = NULL;
    switch ($tmp610) {
        case 2: goto $l754;
        case 3: goto $l799;
        case 1: goto $l678;
        case 0: goto $l616;
    }
    $l801:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start802;
    panda$core$String$Index$nullable end805;
    panda$core$String* $returnValue808;
    panda$core$String* $tmp809;
    panda$core$String* $tmp810;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp811;
    memset(&start802, 0, sizeof(start802));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp803 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp804 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp803, ((panda$core$Int64) p_r.min.value));
        start802 = ((panda$core$String$Index$nullable) { $tmp804, true });
    }
    }
    else {
    {
        start802 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end805, 0, sizeof(end805));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp806 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp807 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp806, ((panda$core$Int64) p_r.max.value));
        end805 = ((panda$core$String$Index$nullable) { $tmp807, true });
    }
    }
    else {
    {
        end805 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp811, start802, end805, p_r.inclusive);
    panda$core$String* $tmp812 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp811);
    $tmp810 = $tmp812;
    $tmp809 = $tmp810;
    $returnValue808 = $tmp809;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
    return $returnValue808;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start814;
    panda$core$String$Index$nullable end817;
    panda$core$String* $returnValue820;
    panda$core$String* $tmp821;
    panda$core$String* $tmp822;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp823;
    memset(&start814, 0, sizeof(start814));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp815 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp816 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp815, ((panda$core$Int64) p_r.start.value));
        start814 = ((panda$core$String$Index$nullable) { $tmp816, true });
    }
    }
    else {
    {
        start814 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end817, 0, sizeof(end817));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp818 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp819 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp818, ((panda$core$Int64) p_r.end.value));
        end817 = ((panda$core$String$Index$nullable) { $tmp819, true });
    }
    }
    else {
    {
        end817 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp823, start814, end817, p_r.step, p_r.inclusive);
    panda$core$String* $tmp824 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp823);
    $tmp822 = $tmp824;
    $tmp821 = $tmp822;
    $returnValue820 = $tmp821;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
    return $returnValue820;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp826;
    panda$core$Int64 $tmp827;
    panda$core$Bit $tmp828;
    panda$core$Bit $returnValue843;
    panda$core$Bit $tmp844;
    panda$core$Bit $tmp852;
    panda$core$Int64$init$builtin_int64(&$tmp827, 0);
    panda$core$Bit$init$builtin_bit(&$tmp828, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp826, $tmp827, self->_length, $tmp828);
    int64_t $tmp830 = $tmp826.min.value;
    panda$core$Int64 i829 = { $tmp830 };
    int64_t $tmp832 = $tmp826.max.value;
    bool $tmp833 = $tmp826.inclusive.value;
    if ($tmp833) goto $l840; else goto $l841;
    $l840:;
    if ($tmp830 <= $tmp832) goto $l834; else goto $l836;
    $l841:;
    if ($tmp830 < $tmp832) goto $l834; else goto $l836;
    $l834:;
    {
        panda$core$Bit $tmp842 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i829.value], p_c);
        if ($tmp842.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp844, true);
            $returnValue843 = $tmp844;
            return $returnValue843;
        }
        }
    }
    $l837:;
    int64_t $tmp847 = $tmp832 - i829.value;
    if ($tmp833) goto $l848; else goto $l849;
    $l848:;
    if ((uint64_t) $tmp847 >= 1) goto $l846; else goto $l836;
    $l849:;
    if ((uint64_t) $tmp847 > 1) goto $l846; else goto $l836;
    $l846:;
    i829.value += 1;
    goto $l834;
    $l836:;
    panda$core$Bit$init$builtin_bit(&$tmp852, false);
    $returnValue843 = $tmp852;
    return $returnValue843;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue854;
    panda$core$String$Index$nullable $tmp855 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue854 = ((panda$core$Bit) { $tmp855.nonnull });
    return $returnValue854;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue857;
    panda$core$String$Index $tmp858 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp859 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp858);
    $returnValue857 = $tmp859;
    return $returnValue857;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue862;
    panda$core$Range$LTpanda$core$Int64$GT $tmp864;
    panda$core$Bit $tmp866;
    panda$core$Range$LTpanda$core$Int64$GT $tmp880;
    panda$core$Int64 $tmp881;
    panda$core$Bit $tmp882;
    panda$core$String$Index $tmp904;
    panda$core$Bit $tmp861 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp861.value) {
    {
        $returnValue862 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue862;
    }
    }
    panda$core$Int64 $tmp865 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp866, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp864, p_start.value, $tmp865, $tmp866);
    int64_t $tmp868 = $tmp864.min.value;
    panda$core$Int64 i867 = { $tmp868 };
    int64_t $tmp870 = $tmp864.max.value;
    bool $tmp871 = $tmp864.inclusive.value;
    if ($tmp871) goto $l878; else goto $l879;
    $l878:;
    if ($tmp868 <= $tmp870) goto $l872; else goto $l874;
    $l879:;
    if ($tmp868 < $tmp870) goto $l872; else goto $l874;
    $l872:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp881, 0);
        panda$core$Bit$init$builtin_bit(&$tmp882, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp880, $tmp881, p_s->_length, $tmp882);
        int64_t $tmp884 = $tmp880.min.value;
        panda$core$Int64 j883 = { $tmp884 };
        int64_t $tmp886 = $tmp880.max.value;
        bool $tmp887 = $tmp880.inclusive.value;
        if ($tmp887) goto $l894; else goto $l895;
        $l894:;
        if ($tmp884 <= $tmp886) goto $l888; else goto $l890;
        $l895:;
        if ($tmp884 < $tmp886) goto $l888; else goto $l890;
        $l888:;
        {
            panda$core$Int64 $tmp896 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i867, j883);
            panda$core$Bit $tmp897 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp896.value], p_s->data[j883.value]);
            if ($tmp897.value) {
            {
                goto $l875;
            }
            }
        }
        $l891:;
        int64_t $tmp899 = $tmp886 - j883.value;
        if ($tmp887) goto $l900; else goto $l901;
        $l900:;
        if ((uint64_t) $tmp899 >= 1) goto $l898; else goto $l890;
        $l901:;
        if ((uint64_t) $tmp899 > 1) goto $l898; else goto $l890;
        $l898:;
        j883.value += 1;
        goto $l888;
        $l890:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp904, i867);
        $returnValue862 = ((panda$core$String$Index$nullable) { $tmp904, true });
        return $returnValue862;
    }
    $l875:;
    int64_t $tmp907 = $tmp870 - i867.value;
    if ($tmp871) goto $l908; else goto $l909;
    $l908:;
    if ((uint64_t) $tmp907 >= 1) goto $l906; else goto $l874;
    $l909:;
    if ((uint64_t) $tmp907 > 1) goto $l906; else goto $l874;
    $l906:;
    i867.value += 1;
    goto $l872;
    $l874:;
    $returnValue862 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue862;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue913;
    panda$core$String$Index $tmp914 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp915 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp914);
    $returnValue913 = $tmp915;
    return $returnValue913;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue918;
    panda$core$Int64 startPos920;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp923;
    panda$core$Int64 $tmp924;
    panda$core$Int64 $tmp925;
    panda$core$Bit $tmp926;
    panda$core$Range$LTpanda$core$Int64$GT $tmp945;
    panda$core$Int64 $tmp946;
    panda$core$Bit $tmp947;
    panda$core$String$Index $tmp969;
    panda$core$Bit $tmp917 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp917.value) {
    {
        $returnValue918 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue918;
    }
    }
    panda$core$Int64 $tmp921 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp922 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp921);
    startPos920 = $tmp922;
    panda$core$Int64$init$builtin_int64(&$tmp924, 0);
    panda$core$Int64$init$builtin_int64(&$tmp925, -1);
    panda$core$Bit$init$builtin_bit(&$tmp926, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp923, startPos920, $tmp924, $tmp925, $tmp926);
    int64_t $tmp928 = $tmp923.start.value;
    panda$core$Int64 i927 = { $tmp928 };
    int64_t $tmp930 = $tmp923.end.value;
    int64_t $tmp931 = $tmp923.step.value;
    bool $tmp932 = $tmp923.inclusive.value;
    bool $tmp939 = $tmp931 > 0;
    if ($tmp939) goto $l937; else goto $l938;
    $l937:;
    if ($tmp932) goto $l940; else goto $l941;
    $l940:;
    if ($tmp928 <= $tmp930) goto $l933; else goto $l935;
    $l941:;
    if ($tmp928 < $tmp930) goto $l933; else goto $l935;
    $l938:;
    if ($tmp932) goto $l942; else goto $l943;
    $l942:;
    if ($tmp928 >= $tmp930) goto $l933; else goto $l935;
    $l943:;
    if ($tmp928 > $tmp930) goto $l933; else goto $l935;
    $l933:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp946, 0);
        panda$core$Bit$init$builtin_bit(&$tmp947, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp945, $tmp946, p_s->_length, $tmp947);
        int64_t $tmp949 = $tmp945.min.value;
        panda$core$Int64 j948 = { $tmp949 };
        int64_t $tmp951 = $tmp945.max.value;
        bool $tmp952 = $tmp945.inclusive.value;
        if ($tmp952) goto $l959; else goto $l960;
        $l959:;
        if ($tmp949 <= $tmp951) goto $l953; else goto $l955;
        $l960:;
        if ($tmp949 < $tmp951) goto $l953; else goto $l955;
        $l953:;
        {
            panda$core$Int64 $tmp961 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i927, j948);
            panda$core$Bit $tmp962 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp961.value], p_s->data[j948.value]);
            if ($tmp962.value) {
            {
                goto $l936;
            }
            }
        }
        $l956:;
        int64_t $tmp964 = $tmp951 - j948.value;
        if ($tmp952) goto $l965; else goto $l966;
        $l965:;
        if ((uint64_t) $tmp964 >= 1) goto $l963; else goto $l955;
        $l966:;
        if ((uint64_t) $tmp964 > 1) goto $l963; else goto $l955;
        $l963:;
        j948.value += 1;
        goto $l953;
        $l955:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp969, i927);
        $returnValue918 = ((panda$core$String$Index$nullable) { $tmp969, true });
        return $returnValue918;
    }
    $l936:;
    if ($tmp939) goto $l972; else goto $l973;
    $l972:;
    int64_t $tmp974 = $tmp930 - i927.value;
    if ($tmp932) goto $l975; else goto $l976;
    $l975:;
    if ((uint64_t) $tmp974 >= $tmp931) goto $l971; else goto $l935;
    $l976:;
    if ((uint64_t) $tmp974 > $tmp931) goto $l971; else goto $l935;
    $l973:;
    int64_t $tmp978 = i927.value - $tmp930;
    if ($tmp932) goto $l979; else goto $l980;
    $l979:;
    if ((uint64_t) $tmp978 >= -$tmp931) goto $l971; else goto $l935;
    $l980:;
    if ((uint64_t) $tmp978 > -$tmp931) goto $l971; else goto $l935;
    $l971:;
    i927.value += $tmp931;
    goto $l933;
    $l935:;
    $returnValue918 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue918;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue983;
    panda$core$Matcher* $tmp984;
    panda$core$Bit $tmp986;
    panda$core$Matcher* $tmp985 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp984 = $tmp985;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp986, $tmp984);
    $returnValue983 = $tmp986;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
    return $returnValue983;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue988;
    panda$core$Matcher* $tmp989;
    panda$core$Matcher* $tmp990 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp989 = $tmp990;
    panda$core$Bit $tmp991 = panda$core$Matcher$find$R$panda$core$Bit($tmp989);
    $returnValue988 = $tmp991;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
    return $returnValue988;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher996 = NULL;
    panda$core$Matcher* $tmp997;
    panda$core$Matcher* $tmp998;
    panda$core$Bit $tmp1000;
    panda$collections$Array* result1004 = NULL;
    panda$collections$Array* $tmp1005;
    panda$collections$Array* $tmp1006;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1008;
    panda$core$Int64 $tmp1009;
    panda$core$Int64 $tmp1010;
    panda$core$Bit $tmp1011;
    panda$core$String* $tmp1025;
    panda$collections$ListView* $returnValue1033;
    panda$collections$ListView* $tmp1034;
    panda$collections$ListView* $tmp1039;
    int $tmp995;
    {
        panda$core$Matcher* $tmp999 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp998 = $tmp999;
        $tmp997 = $tmp998;
        matcher996 = $tmp997;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1000, matcher996);
        if ($tmp1000.value) {
        {
            int $tmp1003;
            {
                panda$collections$Array* $tmp1007 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1007);
                $tmp1006 = $tmp1007;
                $tmp1005 = $tmp1006;
                result1004 = $tmp1005;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                panda$core$Int64$init$builtin_int64(&$tmp1009, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1010, matcher996);
                panda$core$Bit$init$builtin_bit(&$tmp1011, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1008, $tmp1009, $tmp1010, $tmp1011);
                int64_t $tmp1013 = $tmp1008.min.value;
                panda$core$Int64 i1012 = { $tmp1013 };
                int64_t $tmp1015 = $tmp1008.max.value;
                bool $tmp1016 = $tmp1008.inclusive.value;
                if ($tmp1016) goto $l1023; else goto $l1024;
                $l1023:;
                if ($tmp1013 <= $tmp1015) goto $l1017; else goto $l1019;
                $l1024:;
                if ($tmp1013 < $tmp1015) goto $l1017; else goto $l1019;
                $l1017:;
                {
                    panda$core$String* $tmp1026 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher996, i1012);
                    $tmp1025 = $tmp1026;
                    panda$collections$Array$add$panda$collections$Array$T(result1004, ((panda$core$Object*) $tmp1025));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
                }
                $l1020:;
                int64_t $tmp1028 = $tmp1015 - i1012.value;
                if ($tmp1016) goto $l1029; else goto $l1030;
                $l1029:;
                if ((uint64_t) $tmp1028 >= 1) goto $l1027; else goto $l1019;
                $l1030:;
                if ((uint64_t) $tmp1028 > 1) goto $l1027; else goto $l1019;
                $l1027:;
                i1012.value += 1;
                goto $l1017;
                $l1019:;
                $tmp1034 = ((panda$collections$ListView*) result1004);
                $returnValue1033 = $tmp1034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
                $tmp1003 = 0;
                goto $l1001;
                $l1035:;
                $tmp995 = 0;
                goto $l993;
                $l1036:;
                return $returnValue1033;
            }
            $l1001:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1004));
            result1004 = NULL;
            switch ($tmp1003) {
                case 0: goto $l1035;
            }
            $l1038:;
        }
        }
        $tmp1039 = NULL;
        $returnValue1033 = $tmp1039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
        $tmp995 = 1;
        goto $l993;
        $l1040:;
        return $returnValue1033;
    }
    $l993:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher996));
    matcher996 = NULL;
    switch ($tmp995) {
        case 1: goto $l1040;
        case 0: goto $l1036;
    }
    $l1042:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1048;
    panda$core$String* $tmp1049;
    panda$core$MutableString* result1052 = NULL;
    panda$core$MutableString* $tmp1053;
    panda$core$MutableString* $tmp1054;
    panda$core$String$Index index1056;
    panda$core$String$Index$nullable nextIndex1060;
    panda$core$String* $tmp1062;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1063;
    panda$core$Bit $tmp1064;
    panda$core$String* $tmp1066;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1067;
    panda$core$Bit $tmp1068;
    panda$core$String$Index $tmp1070;
    panda$core$String* $tmp1072;
    panda$core$String* $tmp1073;
    int $tmp1045;
    {
        panda$core$Bit $tmp1047 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1046);
        if ($tmp1047.value) {
        {
            $tmp1049 = self;
            $returnValue1048 = $tmp1049;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
            $tmp1045 = 0;
            goto $l1043;
            $l1050:;
            return $returnValue1048;
        }
        }
        panda$core$MutableString* $tmp1055 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1055);
        $tmp1054 = $tmp1055;
        $tmp1053 = $tmp1054;
        result1052 = $tmp1053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
        panda$core$String$Index $tmp1057 = panda$core$String$start$R$panda$core$String$Index(self);
        index1056 = $tmp1057;
        $l1058:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1061 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1056);
            nextIndex1060 = $tmp1061;
            if (((panda$core$Bit) { !nextIndex1060.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1064, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1063, ((panda$core$String$Index$nullable) { index1056, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1064);
                panda$core$String* $tmp1065 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1063);
                $tmp1062 = $tmp1065;
                panda$core$MutableString$append$panda$core$String(result1052, $tmp1062);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                goto $l1059;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1068, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1067, index1056, ((panda$core$String$Index) nextIndex1060.value), $tmp1068);
            panda$core$String* $tmp1069 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1067);
            $tmp1066 = $tmp1069;
            panda$core$MutableString$append$panda$core$String(result1052, $tmp1066);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
            panda$core$MutableString$append$panda$core$String(result1052, p_replacement);
            panda$core$Int64 $tmp1071 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1060.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1070, $tmp1071);
            index1056 = $tmp1070;
        }
        }
        $l1059:;
        panda$core$String* $tmp1074 = panda$core$MutableString$finish$R$panda$core$String(result1052);
        $tmp1073 = $tmp1074;
        $tmp1072 = $tmp1073;
        $returnValue1048 = $tmp1072;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
        $tmp1045 = 1;
        goto $l1043;
        $l1075:;
        return $returnValue1048;
    }
    $l1043:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1052));
    result1052 = NULL;
    switch ($tmp1045) {
        case 1: goto $l1075;
        case 0: goto $l1050;
    }
    $l1077:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result1081 = NULL;
    panda$core$MutableString* $tmp1082;
    panda$core$MutableString* $tmp1083;
    panda$core$Matcher* matcher1085 = NULL;
    panda$core$Matcher* $tmp1086;
    panda$core$Matcher* $tmp1087;
    panda$core$String* $returnValue1093;
    panda$core$String* $tmp1094;
    panda$core$String* $tmp1095;
    int $tmp1080;
    {
        panda$core$MutableString* $tmp1084 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1084);
        $tmp1083 = $tmp1084;
        $tmp1082 = $tmp1083;
        result1081 = $tmp1082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
        panda$core$Matcher* $tmp1088 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1087 = $tmp1088;
        $tmp1086 = $tmp1087;
        matcher1085 = $tmp1086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
        $l1089:;
        panda$core$Bit $tmp1092 = panda$core$Matcher$find$R$panda$core$Bit(matcher1085);
        bool $tmp1091 = $tmp1092.value;
        if (!$tmp1091) goto $l1090;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(matcher1085, result1081, p_replacement);
        }
        goto $l1089;
        $l1090:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1085, result1081);
        panda$core$String* $tmp1096 = panda$core$MutableString$finish$R$panda$core$String(result1081);
        $tmp1095 = $tmp1096;
        $tmp1094 = $tmp1095;
        $returnValue1093 = $tmp1094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
        $tmp1080 = 0;
        goto $l1078;
        $l1097:;
        return $returnValue1093;
    }
    $l1078:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1085));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1081));
    result1081 = NULL;
    matcher1085 = NULL;
    switch ($tmp1080) {
        case 0: goto $l1097;
    }
    $l1099:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1103 = NULL;
    panda$core$MutableString* $tmp1104;
    panda$core$MutableString* $tmp1105;
    panda$core$Matcher* matcher1107 = NULL;
    panda$core$Matcher* $tmp1108;
    panda$core$Matcher* $tmp1109;
    panda$core$String* $tmp1115;
    panda$core$Object* $tmp1116;
    panda$core$String* $tmp1117;
    panda$core$Int64 $tmp1118;
    panda$core$Object* $tmp1120;
    panda$core$Bit $tmp1125;
    panda$core$String* $returnValue1126;
    panda$core$String* $tmp1127;
    panda$core$String* $tmp1128;
    int $tmp1102;
    {
        panda$core$MutableString* $tmp1106 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1106);
        $tmp1105 = $tmp1106;
        $tmp1104 = $tmp1105;
        result1103 = $tmp1104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
        panda$core$Matcher* $tmp1110 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1109 = $tmp1110;
        $tmp1108 = $tmp1109;
        matcher1107 = $tmp1108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
        $l1111:;
        panda$core$Bit $tmp1114 = panda$core$Matcher$find$R$panda$core$Bit(matcher1107);
        bool $tmp1113 = $tmp1114.value;
        if (!$tmp1113) goto $l1112;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1118, 0);
            panda$core$String* $tmp1119 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher1107, $tmp1118);
            $tmp1117 = $tmp1119;
            if (p_replacement->target) {
                $tmp1120 = (($fn1121) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp1117);
            } else {
                $tmp1120 = (($fn1122) p_replacement->pointer)($tmp1117);
            }
            $tmp1116 = $tmp1120;
            panda$core$String* $tmp1124 = (($fn1123) $tmp1116->$class->vtable[0])($tmp1116);
            $tmp1115 = $tmp1124;
            panda$core$Bit$init$builtin_bit(&$tmp1125, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1107, result1103, $tmp1115, $tmp1125);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
            panda$core$Panda$unref$panda$core$Object($tmp1116);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1117));
        }
        goto $l1111;
        $l1112:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1107, result1103);
        panda$core$String* $tmp1129 = panda$core$MutableString$convert$R$panda$core$String(result1103);
        $tmp1128 = $tmp1129;
        $tmp1127 = $tmp1128;
        $returnValue1126 = $tmp1127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
        $tmp1102 = 0;
        goto $l1100;
        $l1130:;
        return $returnValue1126;
    }
    $l1100:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1107));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1103));
    result1103 = NULL;
    matcher1107 = NULL;
    switch ($tmp1102) {
        case 0: goto $l1130;
    }
    $l1132:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1136 = NULL;
    panda$core$MutableString* $tmp1137;
    panda$core$MutableString* $tmp1138;
    panda$core$Matcher* matcher1140 = NULL;
    panda$core$Matcher* $tmp1141;
    panda$core$Matcher* $tmp1142;
    panda$collections$Array* groups1151 = NULL;
    panda$collections$Array* $tmp1152;
    panda$collections$Array* $tmp1153;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1155;
    panda$core$Int64 $tmp1156;
    panda$core$Int64 $tmp1157;
    panda$core$Bit $tmp1158;
    panda$core$String* $tmp1172;
    panda$core$String* $tmp1180;
    panda$core$Object* $tmp1181;
    panda$core$Object* $tmp1182;
    panda$core$Bit $tmp1187;
    panda$core$String* $returnValue1189;
    panda$core$String* $tmp1190;
    panda$core$String* $tmp1191;
    int $tmp1135;
    {
        panda$core$MutableString* $tmp1139 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1139);
        $tmp1138 = $tmp1139;
        $tmp1137 = $tmp1138;
        result1136 = $tmp1137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
        panda$core$Matcher* $tmp1143 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1142 = $tmp1143;
        $tmp1141 = $tmp1142;
        matcher1140 = $tmp1141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
        $l1144:;
        panda$core$Bit $tmp1147 = panda$core$Matcher$find$R$panda$core$Bit(matcher1140);
        bool $tmp1146 = $tmp1147.value;
        if (!$tmp1146) goto $l1145;
        {
            int $tmp1150;
            {
                panda$collections$Array* $tmp1154 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1154);
                $tmp1153 = $tmp1154;
                $tmp1152 = $tmp1153;
                groups1151 = $tmp1152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                panda$core$Int64$init$builtin_int64(&$tmp1156, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1157, matcher1140);
                panda$core$Bit$init$builtin_bit(&$tmp1158, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1155, $tmp1156, $tmp1157, $tmp1158);
                int64_t $tmp1160 = $tmp1155.min.value;
                panda$core$Int64 i1159 = { $tmp1160 };
                int64_t $tmp1162 = $tmp1155.max.value;
                bool $tmp1163 = $tmp1155.inclusive.value;
                if ($tmp1163) goto $l1170; else goto $l1171;
                $l1170:;
                if ($tmp1160 <= $tmp1162) goto $l1164; else goto $l1166;
                $l1171:;
                if ($tmp1160 < $tmp1162) goto $l1164; else goto $l1166;
                $l1164:;
                {
                    panda$core$String* $tmp1173 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher1140, i1159);
                    $tmp1172 = $tmp1173;
                    panda$collections$Array$add$panda$collections$Array$T(groups1151, ((panda$core$Object*) $tmp1172));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                }
                $l1167:;
                int64_t $tmp1175 = $tmp1162 - i1159.value;
                if ($tmp1163) goto $l1176; else goto $l1177;
                $l1176:;
                if ((uint64_t) $tmp1175 >= 1) goto $l1174; else goto $l1166;
                $l1177:;
                if ((uint64_t) $tmp1175 > 1) goto $l1174; else goto $l1166;
                $l1174:;
                i1159.value += 1;
                goto $l1164;
                $l1166:;
                if (p_replacement->target) {
                    $tmp1182 = (($fn1183) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups1151));
                } else {
                    $tmp1182 = (($fn1184) p_replacement->pointer)(((panda$collections$ListView*) groups1151));
                }
                $tmp1181 = $tmp1182;
                panda$core$String* $tmp1186 = (($fn1185) $tmp1181->$class->vtable[0])($tmp1181);
                $tmp1180 = $tmp1186;
                panda$core$Bit$init$builtin_bit(&$tmp1187, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1140, result1136, $tmp1180, $tmp1187);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$Panda$unref$panda$core$Object($tmp1181);
            }
            $tmp1150 = -1;
            goto $l1148;
            $l1148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1151));
            groups1151 = NULL;
            switch ($tmp1150) {
                case -1: goto $l1188;
            }
            $l1188:;
        }
        goto $l1144;
        $l1145:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1140, result1136);
        panda$core$String* $tmp1192 = panda$core$MutableString$convert$R$panda$core$String(result1136);
        $tmp1191 = $tmp1192;
        $tmp1190 = $tmp1191;
        $returnValue1189 = $tmp1190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
        $tmp1135 = 0;
        goto $l1133;
        $l1193:;
        return $returnValue1189;
    }
    $l1133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1136));
    result1136 = NULL;
    matcher1140 = NULL;
    switch ($tmp1135) {
        case 0: goto $l1193;
    }
    $l1195:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1196;
    panda$collections$Iterator* $tmp1197;
    panda$collections$Iterator* $tmp1198;
    panda$core$Bit $tmp1199;
    panda$core$Bit$init$builtin_bit(&$tmp1199, false);
    panda$collections$Iterator* $tmp1200 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1199);
    $tmp1198 = $tmp1200;
    $tmp1197 = $tmp1198;
    $returnValue1196 = $tmp1197;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
    return $returnValue1196;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1202;
    panda$collections$Iterator* $tmp1203;
    panda$core$String$MatchIterator* $tmp1204;
    panda$core$String$MatchIterator* $tmp1205 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1205, self, p_needle, p_overlapping);
    $tmp1204 = $tmp1205;
    $tmp1203 = ((panda$collections$Iterator*) $tmp1204);
    $returnValue1202 = $tmp1203;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
    return $returnValue1202;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1207;
    panda$collections$Iterator* $tmp1208;
    panda$collections$Iterator* $tmp1209;
    panda$core$Bit $tmp1210;
    panda$core$Bit$init$builtin_bit(&$tmp1210, false);
    panda$collections$Iterator* $tmp1211 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1210);
    $tmp1209 = $tmp1211;
    $tmp1208 = $tmp1209;
    $returnValue1207 = $tmp1208;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
    return $returnValue1207;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1213;
    panda$collections$Iterator* $tmp1214;
    panda$core$String$RegexMatchIterator* $tmp1215;
    panda$core$String$RegexMatchIterator* $tmp1216 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1216, self, p_needle, p_overlapping);
    $tmp1215 = $tmp1216;
    $tmp1214 = ((panda$collections$Iterator*) $tmp1215);
    $returnValue1213 = $tmp1214;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1214));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
    return $returnValue1213;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1218;
    panda$core$String$Index $tmp1219;
    panda$core$Int64 $tmp1220;
    panda$core$Int64$init$builtin_int64(&$tmp1220, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1219, $tmp1220);
    $returnValue1218 = $tmp1219;
    return $returnValue1218;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1222;
    panda$core$String$Index $tmp1223;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1223, self->_length);
    $returnValue1222 = $tmp1223;
    return $returnValue1222;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1229;
    panda$core$Bit $tmp1231;
    panda$core$String$Index $returnValue1233;
    panda$core$String$Index $tmp1234;
    panda$core$Int64 $tmp1235;
    panda$core$Bit $tmp1238;
    panda$core$String$Index $tmp1240;
    panda$core$Int64 $tmp1241;
    panda$core$Bit $tmp1244;
    panda$core$String$Index $tmp1246;
    panda$core$Int64 $tmp1247;
    panda$core$String$Index $tmp1250;
    panda$core$Int64 $tmp1251;
    panda$core$Bit $tmp1225 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1225.value) goto $l1226; else goto $l1227;
    $l1227:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1228, (panda$core$Int64) { 1126 });
    abort();
    $l1226:;
    int64_t $tmp1230 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1229 = $tmp1230;
    bool $tmp1232 = c1229 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1231, $tmp1232);
    if ($tmp1231.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1235, 4);
        panda$core$Int64 $tmp1236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1235);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1234, $tmp1236);
        $returnValue1233 = $tmp1234;
        return $returnValue1233;
    }
    }
    bool $tmp1239 = c1229 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1238, $tmp1239);
    if ($tmp1238.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1241, 3);
        panda$core$Int64 $tmp1242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1241);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1240, $tmp1242);
        $returnValue1233 = $tmp1240;
        return $returnValue1233;
    }
    }
    bool $tmp1245 = c1229 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1244, $tmp1245);
    if ($tmp1244.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1247, 2);
        panda$core$Int64 $tmp1248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1247);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1246, $tmp1248);
        $returnValue1233 = $tmp1246;
        return $returnValue1233;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1251, 1);
    panda$core$Int64 $tmp1252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1251);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1250, $tmp1252);
    $returnValue1233 = $tmp1250;
    return $returnValue1233;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1254;
    panda$core$Int64 newValue1259;
    panda$core$Int64 $tmp1260;
    panda$core$Bit $tmp1265;
    panda$core$Int64 $tmp1272;
    panda$core$String$Index $returnValue1274;
    panda$core$String$Index $tmp1275;
    panda$core$Int64$init$builtin_int64(&$tmp1254, 0);
    panda$core$Bit $tmp1255 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1254);
    if ($tmp1255.value) goto $l1256; else goto $l1257;
    $l1257:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1258, (panda$core$Int64) { 1147 });
    abort();
    $l1256:;
    panda$core$Int64$init$builtin_int64(&$tmp1260, 1);
    panda$core$Int64 $tmp1261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1260);
    newValue1259 = $tmp1261;
    $l1262:;
    int64_t $tmp1267 = ((int64_t) self->data[newValue1259.value].value) & 255;
    bool $tmp1268 = $tmp1267 >= 128;
    bool $tmp1266 = $tmp1268;
    if (!$tmp1266) goto $l1269;
    int64_t $tmp1270 = ((int64_t) self->data[newValue1259.value].value) & 255;
    bool $tmp1271 = $tmp1270 < 192;
    $tmp1266 = $tmp1271;
    $l1269:;
    panda$core$Bit$init$builtin_bit(&$tmp1265, $tmp1266);
    bool $tmp1264 = $tmp1265.value;
    if (!$tmp1264) goto $l1263;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1272, 1);
        panda$core$Int64 $tmp1273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1259, $tmp1272);
        newValue1259 = $tmp1273;
    }
    goto $l1262;
    $l1263:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1275, newValue1259);
    $returnValue1274 = $tmp1275;
    return $returnValue1274;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1277;
    panda$core$Int64 $tmp1278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1280;
    panda$core$Int64 $tmp1281;
    panda$core$Bit $tmp1282;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1303;
    panda$core$Int64 $tmp1304;
    panda$core$Int64 $tmp1305;
    panda$core$Bit $tmp1306;
    panda$core$String$Index $returnValue1337;
    result1277 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1278, 0);
    panda$core$Bit $tmp1279 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1278);
    if ($tmp1279.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1281, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1282, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1280, $tmp1281, p_offset, $tmp1282);
        int64_t $tmp1284 = $tmp1280.min.value;
        panda$core$Int64 i1283 = { $tmp1284 };
        int64_t $tmp1286 = $tmp1280.max.value;
        bool $tmp1287 = $tmp1280.inclusive.value;
        if ($tmp1287) goto $l1294; else goto $l1295;
        $l1294:;
        if ($tmp1284 <= $tmp1286) goto $l1288; else goto $l1290;
        $l1295:;
        if ($tmp1284 < $tmp1286) goto $l1288; else goto $l1290;
        $l1288:;
        {
            panda$core$String$Index $tmp1296 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1277);
            result1277 = $tmp1296;
        }
        $l1291:;
        int64_t $tmp1298 = $tmp1286 - i1283.value;
        if ($tmp1287) goto $l1299; else goto $l1300;
        $l1299:;
        if ((uint64_t) $tmp1298 >= 1) goto $l1297; else goto $l1290;
        $l1300:;
        if ((uint64_t) $tmp1298 > 1) goto $l1297; else goto $l1290;
        $l1297:;
        i1283.value += 1;
        goto $l1288;
        $l1290:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1304, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1305, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1306, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1303, $tmp1304, p_offset, $tmp1305, $tmp1306);
        int64_t $tmp1308 = $tmp1303.start.value;
        panda$core$Int64 i1307 = { $tmp1308 };
        int64_t $tmp1310 = $tmp1303.end.value;
        int64_t $tmp1311 = $tmp1303.step.value;
        bool $tmp1312 = $tmp1303.inclusive.value;
        bool $tmp1319 = $tmp1311 > 0;
        if ($tmp1319) goto $l1317; else goto $l1318;
        $l1317:;
        if ($tmp1312) goto $l1320; else goto $l1321;
        $l1320:;
        if ($tmp1308 <= $tmp1310) goto $l1313; else goto $l1315;
        $l1321:;
        if ($tmp1308 < $tmp1310) goto $l1313; else goto $l1315;
        $l1318:;
        if ($tmp1312) goto $l1322; else goto $l1323;
        $l1322:;
        if ($tmp1308 >= $tmp1310) goto $l1313; else goto $l1315;
        $l1323:;
        if ($tmp1308 > $tmp1310) goto $l1313; else goto $l1315;
        $l1313:;
        {
            panda$core$String$Index $tmp1325 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1277);
            result1277 = $tmp1325;
        }
        $l1316:;
        if ($tmp1319) goto $l1327; else goto $l1328;
        $l1327:;
        int64_t $tmp1329 = $tmp1310 - i1307.value;
        if ($tmp1312) goto $l1330; else goto $l1331;
        $l1330:;
        if ((uint64_t) $tmp1329 >= $tmp1311) goto $l1326; else goto $l1315;
        $l1331:;
        if ((uint64_t) $tmp1329 > $tmp1311) goto $l1326; else goto $l1315;
        $l1328:;
        int64_t $tmp1333 = i1307.value - $tmp1310;
        if ($tmp1312) goto $l1334; else goto $l1335;
        $l1334:;
        if ((uint64_t) $tmp1333 >= -$tmp1311) goto $l1326; else goto $l1315;
        $l1335:;
        if ((uint64_t) $tmp1333 > -$tmp1311) goto $l1326; else goto $l1315;
        $l1326:;
        i1307.value += $tmp1311;
        goto $l1313;
        $l1315:;
    }
    }
    $returnValue1337 = result1277;
    return $returnValue1337;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$Char32 $tmp1342;
    panda$core$Int32 $tmp1343;
    panda$core$Int32$init$builtin_int32(&$tmp1343, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1342, $tmp1343);
    panda$core$String* $tmp1344 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1342);
    $tmp1341 = $tmp1344;
    $tmp1340 = $tmp1341;
    $returnValue1339 = $tmp1340;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
    return $returnValue1339;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$Int64 $tmp1346 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1347 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1346, p_width);
    if ($tmp1347.value) {
    {
        $tmp1349 = self;
        $returnValue1348 = $tmp1349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
        return $returnValue1348;
    }
    }
    panda$core$Int64 $tmp1354 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1355 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1354);
    panda$core$String* $tmp1356 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1355);
    $tmp1353 = $tmp1356;
    panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1353);
    $tmp1352 = $tmp1357;
    $tmp1351 = $tmp1352;
    $returnValue1348 = $tmp1351;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
    return $returnValue1348;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1359;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1361;
    panda$core$Char32 $tmp1362;
    panda$core$Int32 $tmp1363;
    panda$core$Int32$init$builtin_int32(&$tmp1363, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1362, $tmp1363);
    panda$core$String* $tmp1364 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1362);
    $tmp1361 = $tmp1364;
    $tmp1360 = $tmp1361;
    $returnValue1359 = $tmp1360;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
    return $returnValue1359;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1368;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1373;
    panda$core$Int64 $tmp1366 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1367 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1366, p_width);
    if ($tmp1367.value) {
    {
        $tmp1369 = self;
        $returnValue1368 = $tmp1369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
        return $returnValue1368;
    }
    }
    panda$core$Int64 $tmp1374 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1375 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1374);
    panda$core$String* $tmp1376 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1375);
    $tmp1373 = $tmp1376;
    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, self);
    $tmp1372 = $tmp1377;
    $tmp1371 = $tmp1372;
    $returnValue1368 = $tmp1371;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
    return $returnValue1368;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1379;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$Char32 $tmp1382;
    panda$core$Int32 $tmp1383;
    panda$core$Int32$init$builtin_int32(&$tmp1383, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1382, $tmp1383);
    panda$core$String* $tmp1384 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1382);
    $tmp1381 = $tmp1384;
    $tmp1380 = $tmp1381;
    $returnValue1379 = $tmp1380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
    return $returnValue1379;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1388;
    panda$core$String* $tmp1389;
    panda$core$Int64 pad1391;
    panda$core$Int64 left1394;
    panda$core$Int64 $tmp1395;
    panda$core$Int64 right1397;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$String* $tmp1405;
    panda$core$Int64 $tmp1386 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1387 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1386, p_width);
    if ($tmp1387.value) {
    {
        $tmp1389 = self;
        $returnValue1388 = $tmp1389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
        return $returnValue1388;
    }
    }
    panda$core$Int64 $tmp1392 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1393 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1392);
    pad1391 = $tmp1393;
    panda$core$Int64$init$builtin_int64(&$tmp1395, 2);
    panda$core$Int64 $tmp1396 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1391, $tmp1395);
    left1394 = $tmp1396;
    panda$core$Int64 $tmp1398 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1391, left1394);
    right1397 = $tmp1398;
    panda$core$String* $tmp1403 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1394);
    $tmp1402 = $tmp1403;
    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, self);
    $tmp1401 = $tmp1404;
    panda$core$String* $tmp1406 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1397);
    $tmp1405 = $tmp1406;
    panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, $tmp1405);
    $tmp1400 = $tmp1407;
    $tmp1399 = $tmp1400;
    $returnValue1388 = $tmp1399;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
    return $returnValue1388;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1409;
    panda$collections$Array* $tmp1410;
    panda$collections$Array* $tmp1411;
    panda$core$Int64 $tmp1412;
    panda$core$Int64$init$builtin_int64(&$tmp1412, 9223372036854775807);
    panda$collections$Array* $tmp1413 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1412);
    $tmp1411 = $tmp1413;
    $tmp1410 = $tmp1411;
    $returnValue1409 = $tmp1410;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
    return $returnValue1409;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1418 = NULL;
    panda$collections$Array* $tmp1419;
    panda$collections$Array* $tmp1420;
    panda$core$String$Index index1422;
    panda$core$String$Index$nullable nextIndex1426;
    panda$core$Int64 $tmp1427;
    panda$core$Int64 $tmp1433;
    panda$core$String* $tmp1437;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1438;
    panda$core$Bit $tmp1439;
    panda$core$String* $tmp1441;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1442;
    panda$core$Bit $tmp1443;
    panda$core$String$Index $tmp1445;
    panda$collections$Array* $returnValue1447;
    panda$collections$Array* $tmp1448;
    int $tmp1417;
    {
        panda$collections$Array* $tmp1421 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1421);
        $tmp1420 = $tmp1421;
        $tmp1419 = $tmp1420;
        result1418 = $tmp1419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
        panda$core$String$Index $tmp1423 = panda$core$String$start$R$panda$core$String$Index(self);
        index1422 = $tmp1423;
        $l1424:;
        while (true) {
        {
            memset(&nextIndex1426, 0, sizeof(nextIndex1426));
            panda$core$Int64$init$builtin_int64(&$tmp1427, 0);
            panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1427);
            if ($tmp1428.value) {
            {
                panda$core$String$Index $tmp1429 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1422);
                nextIndex1426 = ((panda$core$String$Index$nullable) { $tmp1429, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1430 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1422);
                nextIndex1426 = $tmp1430;
            }
            }
            bool $tmp1431 = ((panda$core$Bit) { !nextIndex1426.nonnull }).value;
            if ($tmp1431) goto $l1432;
            panda$core$Int64$init$builtin_int64(&$tmp1433, 1);
            panda$core$Int64 $tmp1434 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1433);
            panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1418->count, $tmp1434);
            $tmp1431 = $tmp1435.value;
            $l1432:;
            panda$core$Bit $tmp1436 = { $tmp1431 };
            if ($tmp1436.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1439, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1438, ((panda$core$String$Index$nullable) { index1422, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1439);
                panda$core$String* $tmp1440 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1438);
                $tmp1437 = $tmp1440;
                panda$collections$Array$add$panda$collections$Array$T(result1418, ((panda$core$Object*) $tmp1437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
                goto $l1425;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1443, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1442, index1422, ((panda$core$String$Index) nextIndex1426.value), $tmp1443);
            panda$core$String* $tmp1444 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1442);
            $tmp1441 = $tmp1444;
            panda$collections$Array$add$panda$collections$Array$T(result1418, ((panda$core$Object*) $tmp1441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
            panda$core$Int64 $tmp1446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1426.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1445, $tmp1446);
            index1422 = $tmp1445;
        }
        }
        $l1425:;
        $tmp1448 = result1418;
        $returnValue1447 = $tmp1448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1448));
        $tmp1417 = 0;
        goto $l1415;
        $l1449:;
        return $returnValue1447;
    }
    $l1415:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1418));
    result1418 = NULL;
    switch ($tmp1417) {
        case 0: goto $l1449;
    }
    $l1451:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1452;
    panda$collections$Array* result1461 = NULL;
    panda$collections$Array* $tmp1462;
    panda$collections$Array* $tmp1463;
    panda$core$Matcher* matcher1465 = NULL;
    panda$core$Matcher* $tmp1466;
    panda$core$Matcher* $tmp1467;
    panda$core$String$Index index1469;
    panda$core$Bit found1473;
    panda$core$Int64 $tmp1478;
    panda$core$String* $tmp1482;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1483;
    panda$core$Bit $tmp1484;
    panda$core$String$Index start1486;
    panda$core$String$Index $tmp1487;
    panda$core$String* $tmp1488;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1489;
    panda$core$Bit $tmp1490;
    panda$core$String$Index $tmp1492;
    panda$core$String$Index $tmp1493;
    panda$collections$ListView* $returnValue1495;
    panda$collections$ListView* $tmp1496;
    panda$core$Int64$init$builtin_int64(&$tmp1452, 0);
    panda$core$Bit $tmp1453 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1452);
    if ($tmp1453.value) goto $l1454; else goto $l1455;
    $l1455:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1456, (panda$core$Int64) { 1326 }, &$s1457);
    abort();
    $l1454:;
    int $tmp1460;
    {
        panda$collections$Array* $tmp1464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1464);
        $tmp1463 = $tmp1464;
        $tmp1462 = $tmp1463;
        result1461 = $tmp1462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
        panda$core$Matcher* $tmp1468 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1467 = $tmp1468;
        $tmp1466 = $tmp1467;
        matcher1465 = $tmp1466;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
        panda$core$String$Index $tmp1470 = panda$core$String$start$R$panda$core$String$Index(self);
        index1469 = $tmp1470;
        $l1471:;
        while (true) {
        {
            panda$core$Bit $tmp1474 = panda$core$Matcher$find$R$panda$core$Bit(matcher1465);
            found1473 = $tmp1474;
            panda$core$Bit $tmp1476 = panda$core$Bit$$NOT$R$panda$core$Bit(found1473);
            bool $tmp1475 = $tmp1476.value;
            if ($tmp1475) goto $l1477;
            panda$core$Int64$init$builtin_int64(&$tmp1478, 1);
            panda$core$Int64 $tmp1479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1478);
            panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1461->count, $tmp1479);
            $tmp1475 = $tmp1480.value;
            $l1477:;
            panda$core$Bit $tmp1481 = { $tmp1475 };
            if ($tmp1481.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1484, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1483, ((panda$core$String$Index$nullable) { index1469, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1484);
                panda$core$String* $tmp1485 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1483);
                $tmp1482 = $tmp1485;
                panda$collections$Array$add$panda$collections$Array$T(result1461, ((panda$core$Object*) $tmp1482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
                goto $l1472;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1487, matcher1465);
            start1486 = $tmp1487;
            panda$core$Bit$init$builtin_bit(&$tmp1490, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1489, index1469, start1486, $tmp1490);
            panda$core$String* $tmp1491 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1489);
            $tmp1488 = $tmp1491;
            panda$collections$Array$add$panda$collections$Array$T(result1461, ((panda$core$Object*) $tmp1488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1493, matcher1465);
            panda$core$Int64 $tmp1494 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1486.value, $tmp1493.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1492, $tmp1494);
            index1469 = $tmp1492;
        }
        }
        $l1472:;
        $tmp1496 = ((panda$collections$ListView*) result1461);
        $returnValue1495 = $tmp1496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
        $tmp1460 = 0;
        goto $l1458;
        $l1497:;
        return $returnValue1495;
    }
    $l1458:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1465));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1461));
    result1461 = NULL;
    matcher1465 = NULL;
    switch ($tmp1460) {
        case 0: goto $l1497;
    }
    $l1499:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1500;
    panda$collections$ListView* $tmp1501;
    panda$collections$ListView* $tmp1502;
    panda$core$Int64 $tmp1503;
    panda$core$Int64$init$builtin_int64(&$tmp1503, 9223372036854775807);
    panda$collections$ListView* $tmp1504 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, $tmp1503);
    $tmp1502 = $tmp1504;
    $tmp1501 = $tmp1502;
    $returnValue1500 = $tmp1501;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
    return $returnValue1500;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1506;
    panda$core$Int64$nullable $returnValue1508;
    panda$core$Int64 result1510;
    panda$core$Int64 $tmp1511;
    panda$core$Int64 start1512;
    panda$core$Int64 $tmp1513;
    panda$core$Char8 $tmp1514;
    panda$core$UInt8 $tmp1515;
    panda$core$Int64 $tmp1517;
    panda$core$Int64 $tmp1518;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1519;
    panda$core$Bit $tmp1520;
    panda$core$Int64 digit1534;
    panda$core$Int64 $tmp1535;
    panda$core$Int64 $tmp1536;
    panda$core$Int64 $tmp1539;
    panda$core$Int64 $tmp1542;
    panda$core$Int64 $tmp1546;
    panda$core$Int64 $tmp1555;
    panda$core$Char8 $tmp1556;
    panda$core$UInt8 $tmp1557;
    panda$core$Int64$init$builtin_int64(&$tmp1506, 0);
    panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1506);
    if ($tmp1507.value) {
    {
        $returnValue1508 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1508;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1511, 0);
    result1510 = $tmp1511;
    memset(&start1512, 0, sizeof(start1512));
    panda$core$Int64$init$builtin_int64(&$tmp1513, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1515, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1514, $tmp1515);
    panda$core$Bit $tmp1516 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1513.value], $tmp1514);
    if ($tmp1516.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1517, 1);
        start1512 = $tmp1517;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1518, 0);
        start1512 = $tmp1518;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1520, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1519, start1512, self->_length, $tmp1520);
    int64_t $tmp1522 = $tmp1519.min.value;
    panda$core$Int64 i1521 = { $tmp1522 };
    int64_t $tmp1524 = $tmp1519.max.value;
    bool $tmp1525 = $tmp1519.inclusive.value;
    if ($tmp1525) goto $l1532; else goto $l1533;
    $l1532:;
    if ($tmp1522 <= $tmp1524) goto $l1526; else goto $l1528;
    $l1533:;
    if ($tmp1522 < $tmp1524) goto $l1526; else goto $l1528;
    $l1526:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1535, ((int64_t) self->data[i1521.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1536, 48);
        panda$core$Int64 $tmp1537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1535, $tmp1536);
        digit1534 = $tmp1537;
        panda$core$Int64$init$builtin_int64(&$tmp1539, 0);
        panda$core$Bit $tmp1540 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1534, $tmp1539);
        bool $tmp1538 = $tmp1540.value;
        if ($tmp1538) goto $l1541;
        panda$core$Int64$init$builtin_int64(&$tmp1542, 9);
        panda$core$Bit $tmp1543 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1534, $tmp1542);
        $tmp1538 = $tmp1543.value;
        $l1541:;
        panda$core$Bit $tmp1544 = { $tmp1538 };
        if ($tmp1544.value) {
        {
            $returnValue1508 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1508;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1546, 10);
        panda$core$Int64 $tmp1547 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1510, $tmp1546);
        panda$core$Int64 $tmp1548 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1547, digit1534);
        result1510 = $tmp1548;
    }
    $l1529:;
    int64_t $tmp1550 = $tmp1524 - i1521.value;
    if ($tmp1525) goto $l1551; else goto $l1552;
    $l1551:;
    if ((uint64_t) $tmp1550 >= 1) goto $l1549; else goto $l1528;
    $l1552:;
    if ((uint64_t) $tmp1550 > 1) goto $l1549; else goto $l1528;
    $l1549:;
    i1521.value += 1;
    goto $l1526;
    $l1528:;
    panda$core$Int64$init$builtin_int64(&$tmp1555, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1557, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1556, $tmp1557);
    panda$core$Bit $tmp1558 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1555.value], $tmp1556);
    if ($tmp1558.value) {
    {
        panda$core$Int64 $tmp1559 = panda$core$Int64$$SUB$R$panda$core$Int64(result1510);
        result1510 = $tmp1559;
    }
    }
    $returnValue1508 = ((panda$core$Int64$nullable) { result1510, true });
    return $returnValue1508;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1561;
    panda$core$UInt64$nullable $returnValue1563;
    panda$core$UInt64 result1565;
    panda$core$UInt64 $tmp1566;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1567;
    panda$core$Int64 $tmp1568;
    panda$core$Bit $tmp1569;
    panda$core$UInt64 digit1583;
    panda$core$UInt64 $tmp1584;
    panda$core$UInt64 $tmp1585;
    panda$core$UInt64 $tmp1588;
    panda$core$UInt64 $tmp1591;
    panda$core$UInt64 $tmp1595;
    panda$core$Int64$init$builtin_int64(&$tmp1561, 0);
    panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1561);
    if ($tmp1562.value) {
    {
        $returnValue1563 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1563;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1566, 0);
    result1565 = $tmp1566;
    panda$core$Int64$init$builtin_int64(&$tmp1568, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1569, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1567, $tmp1568, self->_length, $tmp1569);
    int64_t $tmp1571 = $tmp1567.min.value;
    panda$core$Int64 i1570 = { $tmp1571 };
    int64_t $tmp1573 = $tmp1567.max.value;
    bool $tmp1574 = $tmp1567.inclusive.value;
    if ($tmp1574) goto $l1581; else goto $l1582;
    $l1581:;
    if ($tmp1571 <= $tmp1573) goto $l1575; else goto $l1577;
    $l1582:;
    if ($tmp1571 < $tmp1573) goto $l1575; else goto $l1577;
    $l1575:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1584, ((uint64_t) self->data[i1570.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1585, 48);
        panda$core$UInt64 $tmp1586 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1584, $tmp1585);
        digit1583 = $tmp1586;
        panda$core$UInt64$init$builtin_uint64(&$tmp1588, 0);
        panda$core$Bit $tmp1589 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1583, $tmp1588);
        bool $tmp1587 = $tmp1589.value;
        if ($tmp1587) goto $l1590;
        panda$core$UInt64$init$builtin_uint64(&$tmp1591, 9);
        panda$core$Bit $tmp1592 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1583, $tmp1591);
        $tmp1587 = $tmp1592.value;
        $l1590:;
        panda$core$Bit $tmp1593 = { $tmp1587 };
        if ($tmp1593.value) {
        {
            $returnValue1563 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1563;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1595, 10);
        panda$core$UInt64 $tmp1596 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1565, $tmp1595);
        panda$core$UInt64 $tmp1597 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1596, digit1583);
        result1565 = $tmp1597;
    }
    $l1578:;
    int64_t $tmp1599 = $tmp1573 - i1570.value;
    if ($tmp1574) goto $l1600; else goto $l1601;
    $l1600:;
    if ((uint64_t) $tmp1599 >= 1) goto $l1598; else goto $l1577;
    $l1601:;
    if ((uint64_t) $tmp1599 > 1) goto $l1598; else goto $l1577;
    $l1598:;
    i1570.value += 1;
    goto $l1575;
    $l1577:;
    $returnValue1563 = ((panda$core$UInt64$nullable) { result1565, true });
    return $returnValue1563;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1605;
    panda$core$Int64 h1607;
    panda$core$Int64 $tmp1608;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1609;
    panda$core$Int64 $tmp1610;
    panda$core$Bit $tmp1611;
    panda$core$Int64 $tmp1625;
    panda$core$Int64 $tmp1627;
    panda$core$Int64 $returnValue1635;
    panda$core$Int64$init$builtin_int64(&$tmp1605, 0);
    panda$core$Bit $tmp1606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1605);
    if ($tmp1606.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1608, 1);
        h1607 = $tmp1608;
        panda$core$Int64$init$builtin_int64(&$tmp1610, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1611, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1609, $tmp1610, self->_length, $tmp1611);
        int64_t $tmp1613 = $tmp1609.min.value;
        panda$core$Int64 i1612 = { $tmp1613 };
        int64_t $tmp1615 = $tmp1609.max.value;
        bool $tmp1616 = $tmp1609.inclusive.value;
        if ($tmp1616) goto $l1623; else goto $l1624;
        $l1623:;
        if ($tmp1613 <= $tmp1615) goto $l1617; else goto $l1619;
        $l1624:;
        if ($tmp1613 < $tmp1615) goto $l1617; else goto $l1619;
        $l1617:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1625, 101);
            panda$core$Int64 $tmp1626 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1607, $tmp1625);
            panda$core$Int64$init$builtin_int64(&$tmp1627, ((int64_t) self->data[i1612.value].value));
            panda$core$Int64 $tmp1628 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1626, $tmp1627);
            h1607 = $tmp1628;
        }
        $l1620:;
        int64_t $tmp1630 = $tmp1615 - i1612.value;
        if ($tmp1616) goto $l1631; else goto $l1632;
        $l1631:;
        if ((uint64_t) $tmp1630 >= 1) goto $l1629; else goto $l1619;
        $l1632:;
        if ((uint64_t) $tmp1630 > 1) goto $l1629; else goto $l1619;
        $l1629:;
        i1612.value += 1;
        goto $l1617;
        $l1619:;
        self->_hash = h1607;
    }
    }
    $returnValue1635 = self->_hash;
    return $returnValue1635;
}

