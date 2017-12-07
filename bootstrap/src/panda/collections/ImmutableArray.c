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
typedef panda$core$String* (*$fn86)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn141)(panda$collections$Iterator*);

static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

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
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 step39;
    panda$core$Int64 current40;
    panda$core$Int64 end44;
    panda$collections$Array* result47;
    step39 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current40 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp41 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step39, ((panda$core$Int64) { 0 }));
    if ($tmp41.value) {
    {
        current40 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp42 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp43 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp42, ((panda$core$Int64) { 1 }));
        current40 = $tmp43;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end44 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp45 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step39, ((panda$core$Int64) { 0 }));
    if ($tmp45.value) {
    {
        panda$core$Int64 $tmp46 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end44 = $tmp46;
    }
    }
    else {
    {
        end44 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp48 = (panda$collections$Array*) malloc(40);
    $tmp48->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp48->refCount.value = 1;
    panda$collections$Array$init($tmp48);
    result47 = $tmp48;
    panda$core$Bit $tmp50 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp50.value) {
    {
        $l51:;
        panda$core$Bit $tmp53 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current40, end44);
        if (!$tmp53.value) goto $l52;
        {
            panda$core$Object* $tmp54 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current40);
            panda$collections$Array$add$panda$collections$Array$T(result47, $tmp54);
            panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current40, step39);
            current40 = $tmp55;
        }
        goto $l51;
        $l52:;
    }
    }
    else {
    {
        $l56:;
        panda$core$Bit $tmp58 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current40, end44);
        if (!$tmp58.value) goto $l57;
        {
            panda$core$Object* $tmp59 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current40);
            panda$collections$Array$add$panda$collections$Array$T(result47, $tmp59);
            panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current40, step39);
            current40 = $tmp60;
        }
        goto $l56;
        $l57:;
    }
    }
    bool $tmp63 = p_r.inclusive.value;
    if ($tmp63) goto $l64;
    $tmp63 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l64:;
    panda$core$Bit $tmp65 = { $tmp63 };
    bool $tmp62 = $tmp65.value;
    if (!$tmp62) goto $l66;
    panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current40, end44);
    $tmp62 = $tmp67.value;
    $l66:;
    panda$core$Bit $tmp68 = { $tmp62 };
    bool $tmp61 = $tmp68.value;
    if (!$tmp61) goto $l69;
    panda$core$Int64 $tmp70 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp71 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end44, $tmp70);
    $tmp61 = $tmp71.value;
    $l69:;
    panda$core$Bit $tmp72 = { $tmp61 };
    if ($tmp72.value) {
    {
        panda$core$Object* $tmp73 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current40);
        panda$collections$Array$add$panda$collections$Array$T(result47, $tmp73);
    }
    }
    panda$collections$ImmutableArray* $tmp74 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp74->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp74->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp74, ((panda$collections$ListView*) result47));
    return $tmp74;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp76 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp76->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp76->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp76, self);
    return ((panda$collections$Iterator*) $tmp76);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp79 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s78);
    return $tmp79;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result82;
    panda$core$Range$LTpanda$core$Int64$GT $tmp88;
    panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp80.value) {
    {
        return &$s81;
    }
    }
    panda$core$MutableString* $tmp83 = (panda$core$MutableString*) malloc(40);
    $tmp83->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp83->refCount.value = 1;
    panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp87 = (($fn86) $tmp85->$class->vtable[0])($tmp85);
    panda$core$MutableString$init$panda$core$String($tmp83, $tmp87);
    result82 = $tmp83;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp88, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp90 = $tmp88.start.value;
    panda$core$Int64 i89 = { $tmp90 };
    int64_t $tmp92 = $tmp88.end.value;
    int64_t $tmp93 = $tmp88.step.value;
    bool $tmp94 = $tmp88.inclusive.value;
    bool $tmp101 = $tmp93 > 0;
    if ($tmp101) goto $l99; else goto $l100;
    $l99:;
    if ($tmp94) goto $l102; else goto $l103;
    $l102:;
    if ($tmp90 <= $tmp92) goto $l95; else goto $l97;
    $l103:;
    if ($tmp90 < $tmp92) goto $l95; else goto $l97;
    $l100:;
    if ($tmp94) goto $l104; else goto $l105;
    $l104:;
    if ($tmp90 >= $tmp92) goto $l95; else goto $l97;
    $l105:;
    if ($tmp90 > $tmp92) goto $l95; else goto $l97;
    $l95:;
    {
        panda$core$MutableString$append$panda$core$String(result82, p_separator);
        panda$core$Object* $tmp107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i89);
        panda$core$MutableString$append$panda$core$Object(result82, $tmp107);
    }
    $l98:;
    if ($tmp101) goto $l109; else goto $l110;
    $l109:;
    int64_t $tmp111 = $tmp92 - i89.value;
    if ($tmp94) goto $l112; else goto $l113;
    $l112:;
    if ($tmp111 >= $tmp93) goto $l108; else goto $l97;
    $l113:;
    if ($tmp111 > $tmp93) goto $l108; else goto $l97;
    $l110:;
    int64_t $tmp115 = i89.value - $tmp92;
    if ($tmp94) goto $l116; else goto $l117;
    $l116:;
    if ($tmp115 >= -$tmp93) goto $l108; else goto $l97;
    $l117:;
    if ($tmp115 > -$tmp93) goto $l108; else goto $l97;
    $l108:;
    i89.value += $tmp93;
    goto $l95;
    $l97:;
    panda$core$String* $tmp119 = panda$core$MutableString$convert$R$panda$core$String(result82);
    return $tmp119;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result120;
    panda$core$String* separator124;
    panda$collections$Iterator* v$Iter126;
    panda$core$Object* v138;
    panda$core$MutableString* $tmp121 = (panda$core$MutableString*) malloc(40);
    $tmp121->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp121->refCount.value = 1;
    panda$core$MutableString$init($tmp121);
    result120 = $tmp121;
    panda$core$MutableString$append$panda$core$String(result120, &$s123);
    separator124 = &$s125;
    {
        ITable* $tmp127 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp127 = $tmp127->next;
        }
        $fn129 $tmp128 = $tmp127->methods[0];
        panda$collections$Iterator* $tmp130 = $tmp128(((panda$collections$Iterable*) self));
        v$Iter126 = $tmp130;
        $l131:;
        ITable* $tmp133 = v$Iter126->$class->itable;
        while ($tmp133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp133 = $tmp133->next;
        }
        $fn135 $tmp134 = $tmp133->methods[0];
        panda$core$Bit $tmp136 = $tmp134(v$Iter126);
        panda$core$Bit $tmp137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp136);
        if (!$tmp137.value) goto $l132;
        {
            ITable* $tmp139 = v$Iter126->$class->itable;
            while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp139 = $tmp139->next;
            }
            $fn141 $tmp140 = $tmp139->methods[1];
            panda$core$Object* $tmp142 = $tmp140(v$Iter126);
            v138 = $tmp142;
            panda$core$MutableString$append$panda$core$String(result120, separator124);
            separator124 = &$s143;
            panda$core$MutableString$append$panda$core$Object(result120, v138);
        }
        goto $l131;
        $l132:;
    }
    panda$core$MutableString$append$panda$core$String(result120, &$s144);
    panda$core$String* $tmp145 = panda$core$MutableString$convert$R$panda$core$String(result120);
    return $tmp145;
}

