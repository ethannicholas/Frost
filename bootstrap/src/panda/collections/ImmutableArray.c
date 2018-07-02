#include "panda/collections/ImmutableArray.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p0, p1);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn31)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn233)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn240)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn251)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -4326513854706852849, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->_count = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->data = ((panda$core$Object**) pandaZAlloc($tmp3.value * 8));
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp11;
    panda$core$Object** $tmp25;
    panda$core$Int64 $tmp26;
    panda$core$Object* $tmp27;
    panda$core$Object* $tmp28;
    ITable* $tmp4 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(((panda$collections$CollectionView*) p_data));
    self->_count = $tmp7;
    self->data = ((panda$core$Object**) pandaZAlloc(self->_count.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Int64 $tmp10 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit$init$builtin_bit(&$tmp11, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, $tmp9, $tmp10, $tmp11);
    int64_t $tmp13 = $tmp8.min.value;
    panda$core$Int64 i12 = { $tmp13 };
    int64_t $tmp15 = $tmp8.max.value;
    bool $tmp16 = $tmp8.inclusive.value;
    if ($tmp16) goto $l23; else goto $l24;
    $l23:;
    if ($tmp13 <= $tmp15) goto $l17; else goto $l19;
    $l24:;
    if ($tmp13 < $tmp15) goto $l17; else goto $l19;
    $l17:;
    {
        {
            $tmp25 = self->data;
            $tmp26 = i12;
            panda$core$Panda$unref$panda$core$Object($tmp25[$tmp26.value]);
            ITable* $tmp29 = p_data->$class->itable;
            while ($tmp29->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp29 = $tmp29->next;
            }
            $fn31 $tmp30 = $tmp29->methods[0];
            panda$core$Object* $tmp32 = $tmp30(p_data, i12);
            $tmp28 = $tmp32;
            $tmp27 = $tmp28;
            panda$core$Panda$ref$panda$core$Object($tmp27);
            panda$core$Panda$unref$panda$core$Object($tmp28);
            $tmp25[$tmp26.value] = $tmp27;
        }
    }
    $l20:;
    int64_t $tmp34 = $tmp15 - i12.value;
    if ($tmp16) goto $l35; else goto $l36;
    $l35:;
    if ((uint64_t) $tmp34 >= 1) goto $l33; else goto $l19;
    $l36:;
    if ((uint64_t) $tmp34 > 1) goto $l33; else goto $l19;
    $l33:;
    i12.value += 1;
    goto $l17;
    $l19:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->_count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp42;
    panda$core$Int64 $tmp43;
    panda$core$Bit $tmp45;
    panda$core$Object** $tmp59;
    panda$core$Int64 $tmp60;
    panda$core$Object* $tmp61;
    int $tmp41;
    {
        panda$core$Int64$init$builtin_int64(&$tmp43, 0);
        panda$core$Int64 $tmp44 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Bit$init$builtin_bit(&$tmp45, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp42, $tmp43, $tmp44, $tmp45);
        int64_t $tmp47 = $tmp42.min.value;
        panda$core$Int64 i46 = { $tmp47 };
        int64_t $tmp49 = $tmp42.max.value;
        bool $tmp50 = $tmp42.inclusive.value;
        if ($tmp50) goto $l57; else goto $l58;
        $l57:;
        if ($tmp47 <= $tmp49) goto $l51; else goto $l53;
        $l58:;
        if ($tmp47 < $tmp49) goto $l51; else goto $l53;
        $l51:;
        {
            {
                $tmp59 = self->data;
                $tmp60 = i46;
                panda$core$Panda$unref$panda$core$Object($tmp59[$tmp60.value]);
                $tmp61 = NULL;
                panda$core$Panda$ref$panda$core$Object($tmp61);
                $tmp59[$tmp60.value] = $tmp61;
            }
        }
        $l54:;
        int64_t $tmp63 = $tmp49 - i46.value;
        if ($tmp50) goto $l64; else goto $l65;
        $l64:;
        if ((uint64_t) $tmp63 >= 1) goto $l62; else goto $l53;
        $l65:;
        if ((uint64_t) $tmp63 > 1) goto $l62; else goto $l53;
        $l62:;
        i46.value += 1;
        goto $l51;
        $l53:;
        pandaFree(self->data);
    }
    $tmp41 = -1;
    goto $l39;
    $l39:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp41) {
        case -1: goto $l68;
    }
    $l68:;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp70;
    panda$core$Int64 $tmp81;
    panda$core$Object* $returnValue90;
    panda$core$Object* $tmp91;
    panda$core$Int64$init$builtin_int64(&$tmp70, 0);
    panda$core$Bit $tmp71 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp70);
    bool $tmp69 = $tmp71.value;
    if (!$tmp69) goto $l72;
    panda$core$Int64 $tmp73 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp73);
    $tmp69 = $tmp74.value;
    $l72:;
    panda$core$Bit $tmp75 = { $tmp69 };
    if ($tmp75.value) goto $l76; else goto $l77;
    $l77:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, (panda$core$Int64) { 66 }, &$s79);
    abort();
    $l76:;
    panda$core$Int64$init$builtin_int64(&$tmp81, 0);
    panda$core$Bit $tmp82 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp81);
    bool $tmp80 = $tmp82.value;
    if (!$tmp80) goto $l83;
    panda$core$Int64 $tmp84 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp85 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp84);
    $tmp80 = $tmp85.value;
    $l83:;
    panda$core$Bit $tmp86 = { $tmp80 };
    if ($tmp86.value) goto $l87; else goto $l88;
    $l88:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s89, (panda$core$Int64) { 67 });
    abort();
    $l87:;
    $tmp91 = self->data[p_index.value];
    $returnValue90 = $tmp91;
    panda$core$Panda$ref$panda$core$Object($tmp91);
    return $returnValue90;
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    panda$core$Int64 $returnValue93;
    $returnValue93 = self->_count;
    return $returnValue93;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max95;
    panda$core$Int64 $tmp96;
    panda$core$Int64 count98;
    panda$core$Object** result100;
    panda$core$Range$LTpanda$core$Int64$GT $tmp101;
    panda$core$Int64 $tmp102;
    panda$core$Bit $tmp103;
    panda$core$Object** $tmp117;
    panda$core$Int64 $tmp118;
    panda$core$Object* $tmp119;
    panda$core$Object* $tmp120;
    panda$collections$ImmutableArray* $returnValue129;
    panda$collections$ImmutableArray* $tmp130;
    panda$collections$ImmutableArray* $tmp131;
    max95 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp96, 1);
        panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max95, $tmp96);
        max95 = $tmp97;
    }
    }
    panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max95, p_r.min);
    count98 = $tmp99;
    result100 = ((panda$core$Object**) pandaZAlloc(count98.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp102, 0);
    panda$core$Bit$init$builtin_bit(&$tmp103, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp101, $tmp102, count98, $tmp103);
    int64_t $tmp105 = $tmp101.min.value;
    panda$core$Int64 i104 = { $tmp105 };
    int64_t $tmp107 = $tmp101.max.value;
    bool $tmp108 = $tmp101.inclusive.value;
    if ($tmp108) goto $l115; else goto $l116;
    $l115:;
    if ($tmp105 <= $tmp107) goto $l109; else goto $l111;
    $l116:;
    if ($tmp105 < $tmp107) goto $l109; else goto $l111;
    $l109:;
    {
        {
            $tmp117 = result100;
            $tmp118 = i104;
            panda$core$Panda$unref$panda$core$Object($tmp117[$tmp118.value]);
            panda$core$Int64 $tmp121 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i104);
            panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp121);
            $tmp120 = $tmp122;
            $tmp119 = $tmp120;
            panda$core$Panda$ref$panda$core$Object($tmp119);
            panda$core$Panda$unref$panda$core$Object($tmp120);
            $tmp117[$tmp118.value] = $tmp119;
        }
    }
    $l112:;
    int64_t $tmp124 = $tmp107 - i104.value;
    if ($tmp108) goto $l125; else goto $l126;
    $l125:;
    if ((uint64_t) $tmp124 >= 1) goto $l123; else goto $l111;
    $l126:;
    if ((uint64_t) $tmp124 > 1) goto $l123; else goto $l111;
    $l123:;
    i104.value += 1;
    goto $l109;
    $l111:;
    panda$collections$ImmutableArray* $tmp132 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp132, result100, count98);
    $tmp131 = $tmp132;
    $tmp130 = $tmp131;
    $returnValue129 = $tmp130;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    return $returnValue129;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start134;
    panda$core$Int64 $tmp135;
    panda$core$Int64 end136;
    panda$core$Int64 $tmp137;
    panda$collections$ImmutableArray* $returnValue139;
    panda$collections$ImmutableArray* $tmp140;
    panda$collections$ImmutableArray* $tmp141;
    panda$core$Range$LTpanda$core$Int64$GT $tmp142;
    memset(&start134, 0, sizeof(start134));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start134 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp135, 0);
        start134 = $tmp135;
    }
    }
    memset(&end136, 0, sizeof(end136));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end136 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        end136 = self->_count;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp137, 1);
            panda$core$Int64 $tmp138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end136, $tmp137);
            end136 = $tmp138;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp142, start134, end136, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp143 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp142);
    $tmp141 = $tmp143;
    $tmp140 = $tmp141;
    $returnValue139 = $tmp140;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
    return $returnValue139;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step148;
    panda$core$Int64 current149;
    panda$core$Int64 $tmp150;
    panda$core$Int64 $tmp152;
    panda$core$Int64 $tmp153;
    panda$core$Int64 end155;
    panda$core$Int64 $tmp156;
    panda$core$Int64 $tmp158;
    panda$collections$Array* result159 = NULL;
    panda$collections$Array* $tmp160;
    panda$collections$Array* $tmp161;
    panda$core$Int64 $tmp163;
    panda$core$Object* $tmp169;
    panda$core$Int64 $tmp172;
    panda$core$Object* $tmp181;
    panda$core$Object* $tmp195;
    panda$collections$ImmutableArray* $returnValue197;
    panda$collections$ImmutableArray* $tmp198;
    panda$collections$ImmutableArray* $tmp199;
    int $tmp147;
    {
        step148 = p_r.step;
        memset(&current149, 0, sizeof(current149));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current149 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp150, 0);
        panda$core$Bit $tmp151 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step148, $tmp150);
        if ($tmp151.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp152, 0);
            current149 = $tmp152;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp153, 1);
            panda$core$Int64 $tmp154 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp153);
            current149 = $tmp154;
        }
        }
        }
        memset(&end155, 0, sizeof(end155));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end155 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp156, 0);
        panda$core$Bit $tmp157 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step148, $tmp156);
        if ($tmp157.value) {
        {
            end155 = self->_count;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp158, 0);
            end155 = $tmp158;
        }
        }
        }
        panda$collections$Array* $tmp162 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp162);
        $tmp161 = $tmp162;
        $tmp160 = $tmp161;
        result159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Int64$init$builtin_int64(&$tmp163, 0);
        panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp163);
        if ($tmp164.value) {
        {
            $l165:;
            panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current149, end155);
            bool $tmp167 = $tmp168.value;
            if (!$tmp167) goto $l166;
            {
                panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current149);
                $tmp169 = $tmp170;
                panda$collections$Array$add$panda$collections$Array$T(result159, $tmp169);
                panda$core$Panda$unref$panda$core$Object($tmp169);
                panda$core$Int64 $tmp171 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current149, step148);
                current149 = $tmp171;
            }
            goto $l165;
            $l166:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp172, 0);
            panda$core$Bit $tmp173 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp172);
            if ($tmp173.value) goto $l174; else goto $l175;
            $l175:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s176, (panda$core$Int64) { 156 });
            abort();
            $l174:;
            $l177:;
            panda$core$Bit $tmp180 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current149, end155);
            bool $tmp179 = $tmp180.value;
            if (!$tmp179) goto $l178;
            {
                panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current149);
                $tmp181 = $tmp182;
                panda$collections$Array$add$panda$collections$Array$T(result159, $tmp181);
                panda$core$Panda$unref$panda$core$Object($tmp181);
                panda$core$Int64 $tmp183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current149, step148);
                current149 = $tmp183;
            }
            goto $l177;
            $l178:;
        }
        }
        bool $tmp186 = p_r.inclusive.value;
        if ($tmp186) goto $l187;
        $tmp186 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l187:;
        panda$core$Bit $tmp188 = { $tmp186 };
        bool $tmp185 = $tmp188.value;
        if (!$tmp185) goto $l189;
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current149, end155);
        $tmp185 = $tmp190.value;
        $l189:;
        panda$core$Bit $tmp191 = { $tmp185 };
        bool $tmp184 = $tmp191.value;
        if (!$tmp184) goto $l192;
        panda$core$Bit $tmp193 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end155, self->_count);
        $tmp184 = $tmp193.value;
        $l192:;
        panda$core$Bit $tmp194 = { $tmp184 };
        if ($tmp194.value) {
        {
            panda$core$Object* $tmp196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current149);
            $tmp195 = $tmp196;
            panda$collections$Array$add$panda$collections$Array$T(result159, $tmp195);
            panda$core$Panda$unref$panda$core$Object($tmp195);
        }
        }
        panda$collections$ImmutableArray* $tmp200 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp200, ((panda$collections$ListView*) result159));
        $tmp199 = $tmp200;
        $tmp198 = $tmp199;
        $returnValue197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
        $tmp147 = 0;
        goto $l145;
        $l201:;
        return $returnValue197;
    }
    $l145:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
    result159 = NULL;
    switch ($tmp147) {
        case 0: goto $l201;
    }
    $l203:;
    if (false) goto $l204; else goto $l205;
    $l205:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s206, (panda$core$Int64) { 123 }, &$s207);
    abort();
    $l204:;
    abort();
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* $returnValue208;
    panda$collections$Iterator* $tmp209;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp210;
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp211 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp211, self);
    $tmp210 = $tmp211;
    $tmp209 = ((panda$collections$Iterator*) $tmp210);
    $returnValue208 = $tmp209;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
    return $returnValue208;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result216 = NULL;
    panda$core$MutableString* $tmp217;
    panda$core$MutableString* $tmp218;
    panda$core$Char8 $tmp220;
    panda$core$UInt8 $tmp221;
    panda$core$String* separator222 = NULL;
    panda$core$String* $tmp223;
    panda$collections$Iterator* Iter$178$9228 = NULL;
    panda$collections$Iterator* $tmp229;
    panda$collections$Iterator* $tmp230;
    panda$core$Object* v246 = NULL;
    panda$core$Object* $tmp247;
    panda$core$Object* $tmp248;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$core$Char8 $tmp258;
    panda$core$UInt8 $tmp259;
    panda$core$String* $returnValue260;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    int $tmp215;
    {
        panda$core$MutableString* $tmp219 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp219);
        $tmp218 = $tmp219;
        $tmp217 = $tmp218;
        result216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$UInt8$init$builtin_uint8(&$tmp221, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp220, $tmp221);
        panda$core$MutableString$append$panda$core$Char8(result216, $tmp220);
        $tmp223 = &$s224;
        separator222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        {
            int $tmp227;
            {
                ITable* $tmp231 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp231 = $tmp231->next;
                }
                $fn233 $tmp232 = $tmp231->methods[0];
                panda$collections$Iterator* $tmp234 = $tmp232(((panda$collections$Iterable*) self));
                $tmp230 = $tmp234;
                $tmp229 = $tmp230;
                Iter$178$9228 = $tmp229;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                $l235:;
                ITable* $tmp238 = Iter$178$9228->$class->itable;
                while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp238 = $tmp238->next;
                }
                $fn240 $tmp239 = $tmp238->methods[0];
                panda$core$Bit $tmp241 = $tmp239(Iter$178$9228);
                panda$core$Bit $tmp242 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp241);
                bool $tmp237 = $tmp242.value;
                if (!$tmp237) goto $l236;
                {
                    int $tmp245;
                    {
                        ITable* $tmp249 = Iter$178$9228->$class->itable;
                        while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp249 = $tmp249->next;
                        }
                        $fn251 $tmp250 = $tmp249->methods[1];
                        panda$core$Object* $tmp252 = $tmp250(Iter$178$9228);
                        $tmp248 = $tmp252;
                        $tmp247 = $tmp248;
                        v246 = $tmp247;
                        panda$core$Panda$ref$panda$core$Object($tmp247);
                        panda$core$Panda$unref$panda$core$Object($tmp248);
                        panda$core$MutableString$append$panda$core$String(result216, separator222);
                        {
                            $tmp253 = separator222;
                            $tmp254 = &$s255;
                            separator222 = $tmp254;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                        }
                        panda$core$MutableString$append$panda$core$Object(result216, v246);
                    }
                    $tmp245 = -1;
                    goto $l243;
                    $l243:;
                    panda$core$Panda$unref$panda$core$Object(v246);
                    v246 = NULL;
                    switch ($tmp245) {
                        case -1: goto $l256;
                    }
                    $l256:;
                }
                goto $l235;
                $l236:;
            }
            $tmp227 = -1;
            goto $l225;
            $l225:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9228));
            Iter$178$9228 = NULL;
            switch ($tmp227) {
                case -1: goto $l257;
            }
            $l257:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp259, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp258, $tmp259);
        panda$core$MutableString$append$panda$core$Char8(result216, $tmp258);
        panda$core$String* $tmp263 = panda$core$MutableString$finish$R$panda$core$String(result216);
        $tmp262 = $tmp263;
        $tmp261 = $tmp262;
        $returnValue260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
        $tmp215 = 0;
        goto $l213;
        $l264:;
        return $returnValue260;
    }
    $l213:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator222));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result216));
    result216 = NULL;
    separator222 = NULL;
    switch ($tmp215) {
        case 0: goto $l264;
    }
    $l266:;
    if (false) goto $l267; else goto $l268;
    $l268:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s269, (panda$core$Int64) { 174 }, &$s270);
    abort();
    $l267:;
    abort();
}

