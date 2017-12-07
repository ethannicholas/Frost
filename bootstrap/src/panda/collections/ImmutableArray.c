#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, p0);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim} };

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn92)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn147)(panda$collections$Iterator*);

static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_data));
    self->count = $tmp4;
    self->data = ((panda$core$Object**) malloc(self->count.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.start.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.end.value;
    int64_t $tmp10 = $tmp5.step.value;
    bool $tmp11 = $tmp5.inclusive.value;
    bool $tmp18 = $tmp10 > 0;
    if ($tmp18) goto $l16; else goto $l17;
    $l16:;
    if ($tmp11) goto $l19; else goto $l20;
    $l19:;
    if ($tmp7 <= $tmp9) goto $l12; else goto $l14;
    $l20:;
    if ($tmp7 < $tmp9) goto $l12; else goto $l14;
    $l17:;
    if ($tmp11) goto $l21; else goto $l22;
    $l21:;
    if ($tmp7 >= $tmp9) goto $l12; else goto $l14;
    $l22:;
    if ($tmp7 > $tmp9) goto $l12; else goto $l14;
    $l12:;
    {
        ITable* $tmp24 = p_data->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Object* $tmp27 = $tmp25(p_data, i6);
        self->data[i6.value] = $tmp27;
    }
    $l15:;
    if ($tmp18) goto $l29; else goto $l30;
    $l29:;
    int64_t $tmp31 = $tmp9 - i6.value;
    if ($tmp11) goto $l32; else goto $l33;
    $l32:;
    if ($tmp31 >= $tmp10) goto $l28; else goto $l14;
    $l33:;
    if ($tmp31 > $tmp10) goto $l28; else goto $l14;
    $l30:;
    int64_t $tmp35 = i6.value - $tmp9;
    if ($tmp11) goto $l36; else goto $l37;
    $l36:;
    if ($tmp35 >= -$tmp10) goto $l28; else goto $l14;
    $l37:;
    if ($tmp35 > -$tmp10) goto $l28; else goto $l14;
    $l28:;
    i6.value += $tmp10;
    goto $l12;
    $l14:;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    free(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp40 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp39 = $tmp40.value;
    if (!$tmp39) goto $l41;
    panda$core$Bit $tmp42 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp39 = $tmp42.value;
    $l41:;
    panda$core$Bit $tmp43 = { $tmp39 };
    PANDA_ASSERT($tmp43.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step44;
    panda$core$Int64 current45;
    panda$core$Int64 end49;
    panda$collections$Array* result52;
    step44 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current45 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step44, ((panda$core$Int64) { 0 }));
    if ($tmp46.value) {
    {
        current45 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp47 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp48 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp47, ((panda$core$Int64) { 1 }));
        current45 = $tmp48;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end49 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp50 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step44, ((panda$core$Int64) { 0 }));
    if ($tmp50.value) {
    {
        panda$core$Int64 $tmp51 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end49 = $tmp51;
    }
    }
    else {
    {
        end49 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp53 = (panda$collections$Array*) malloc(40);
    $tmp53->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp53->refCount.value = 1;
    panda$collections$Array$init($tmp53);
    result52 = $tmp53;
    panda$core$Bit $tmp55 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp55.value) {
    {
        $l56:;
        panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current45, end49);
        if (!$tmp58.value) goto $l57;
        {
            panda$core$Object* $tmp59 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current45);
            panda$collections$Array$add$panda$collections$Array$T(result52, $tmp59);
            panda$core$Int64 $tmp60 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current45, step44);
            current45 = $tmp60;
        }
        goto $l56;
        $l57:;
    }
    }
    else {
    {
        panda$core$Bit $tmp61 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp61.value);
        $l62:;
        panda$core$Bit $tmp64 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current45, end49);
        if (!$tmp64.value) goto $l63;
        {
            panda$core$Object* $tmp65 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current45);
            panda$collections$Array$add$panda$collections$Array$T(result52, $tmp65);
            panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current45, step44);
            current45 = $tmp66;
        }
        goto $l62;
        $l63:;
    }
    }
    bool $tmp69 = p_r.inclusive.value;
    if ($tmp69) goto $l70;
    $tmp69 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l70:;
    panda$core$Bit $tmp71 = { $tmp69 };
    bool $tmp68 = $tmp71.value;
    if (!$tmp68) goto $l72;
    panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current45, end49);
    $tmp68 = $tmp73.value;
    $l72:;
    panda$core$Bit $tmp74 = { $tmp68 };
    bool $tmp67 = $tmp74.value;
    if (!$tmp67) goto $l75;
    panda$core$Int64 $tmp76 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp77 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end49, $tmp76);
    $tmp67 = $tmp77.value;
    $l75:;
    panda$core$Bit $tmp78 = { $tmp67 };
    if ($tmp78.value) {
    {
        panda$core$Object* $tmp79 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current45);
        panda$collections$Array$add$panda$collections$Array$T(result52, $tmp79);
    }
    }
    panda$collections$ImmutableArray* $tmp80 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp80->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp80->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp80, ((panda$collections$ListView*) result52));
    return $tmp80;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp82 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp82->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp82->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp82, self);
    return ((panda$collections$Iterator*) $tmp82);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp85 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s84);
    return $tmp85;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result88;
    panda$core$Range$LTpanda$core$Int64$GT $tmp94;
    panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp86.value) {
    {
        return &$s87;
    }
    }
    panda$core$MutableString* $tmp89 = (panda$core$MutableString*) malloc(40);
    $tmp89->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp89->refCount.value = 1;
    panda$core$Object* $tmp91 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp93 = (($fn92) $tmp91->$class->vtable[0])($tmp91);
    panda$core$MutableString$init$panda$core$String($tmp89, $tmp93);
    result88 = $tmp89;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp94, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp96 = $tmp94.start.value;
    panda$core$Int64 i95 = { $tmp96 };
    int64_t $tmp98 = $tmp94.end.value;
    int64_t $tmp99 = $tmp94.step.value;
    bool $tmp100 = $tmp94.inclusive.value;
    bool $tmp107 = $tmp99 > 0;
    if ($tmp107) goto $l105; else goto $l106;
    $l105:;
    if ($tmp100) goto $l108; else goto $l109;
    $l108:;
    if ($tmp96 <= $tmp98) goto $l101; else goto $l103;
    $l109:;
    if ($tmp96 < $tmp98) goto $l101; else goto $l103;
    $l106:;
    if ($tmp100) goto $l110; else goto $l111;
    $l110:;
    if ($tmp96 >= $tmp98) goto $l101; else goto $l103;
    $l111:;
    if ($tmp96 > $tmp98) goto $l101; else goto $l103;
    $l101:;
    {
        panda$core$MutableString$append$panda$core$String(result88, p_separator);
        panda$core$Object* $tmp113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i95);
        panda$core$MutableString$append$panda$core$Object(result88, $tmp113);
    }
    $l104:;
    if ($tmp107) goto $l115; else goto $l116;
    $l115:;
    int64_t $tmp117 = $tmp98 - i95.value;
    if ($tmp100) goto $l118; else goto $l119;
    $l118:;
    if ($tmp117 >= $tmp99) goto $l114; else goto $l103;
    $l119:;
    if ($tmp117 > $tmp99) goto $l114; else goto $l103;
    $l116:;
    int64_t $tmp121 = i95.value - $tmp98;
    if ($tmp100) goto $l122; else goto $l123;
    $l122:;
    if ($tmp121 >= -$tmp99) goto $l114; else goto $l103;
    $l123:;
    if ($tmp121 > -$tmp99) goto $l114; else goto $l103;
    $l114:;
    i95.value += $tmp99;
    goto $l101;
    $l103:;
    panda$core$String* $tmp125 = panda$core$MutableString$convert$R$panda$core$String(result88);
    return $tmp125;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result126;
    panda$core$String* separator130;
    panda$collections$Iterator* v$Iter132;
    panda$core$Object* v144;
    panda$core$MutableString* $tmp127 = (panda$core$MutableString*) malloc(40);
    $tmp127->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp127->refCount.value = 1;
    panda$core$MutableString$init($tmp127);
    result126 = $tmp127;
    panda$core$MutableString$append$panda$core$String(result126, &$s129);
    separator130 = &$s131;
    {
        ITable* $tmp133 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp133 = $tmp133->next;
        }
        $fn135 $tmp134 = $tmp133->methods[0];
        panda$collections$Iterator* $tmp136 = $tmp134(((panda$collections$Iterable*) self));
        v$Iter132 = $tmp136;
        $l137:;
        ITable* $tmp139 = v$Iter132->$class->itable;
        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp139 = $tmp139->next;
        }
        $fn141 $tmp140 = $tmp139->methods[0];
        panda$core$Bit $tmp142 = $tmp140(v$Iter132);
        panda$core$Bit $tmp143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp142);
        if (!$tmp143.value) goto $l138;
        {
            ITable* $tmp145 = v$Iter132->$class->itable;
            while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp145 = $tmp145->next;
            }
            $fn147 $tmp146 = $tmp145->methods[1];
            panda$core$Object* $tmp148 = $tmp146(v$Iter132);
            v144 = $tmp148;
            panda$core$MutableString$append$panda$core$String(result126, separator130);
            separator130 = &$s149;
            panda$core$MutableString$append$panda$core$Object(result126, v144);
        }
        goto $l137;
        $l138:;
    }
    panda$core$MutableString$append$panda$core$String(result126, &$s150);
    panda$core$String* $tmp151 = panda$core$MutableString$convert$R$panda$core$String(result126);
    return $tmp151;
}

