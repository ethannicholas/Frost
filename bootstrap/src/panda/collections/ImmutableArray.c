#include "panda/collections/ImmutableArray.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"
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

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String, panda$collections$ImmutableArray$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn42)(panda$collections$ImmutableArray*);
typedef panda$core$Int64 (*$fn47)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn56)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn62)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn74)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn78)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn85)(panda$collections$ImmutableArray*, panda$core$String*);
typedef panda$core$Object* (*$fn92)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn94)(panda$core$Object*);
typedef void (*$fn115)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn116)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn118)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn130)(panda$core$MutableString*);
typedef void (*$fn136)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);
typedef void (*$fn156)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn158)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn160)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn161)(panda$core$MutableString*);
typedef panda$collections$ImmutableArray* (*$fn164)(panda$collections$ImmutableArray*, panda$core$Range);

static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self) {
    self->count = ((panda$core$Int64) { 0 });
}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_data)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_data));
    self->count = $tmp4;
    self->data = ((panda$core$Object**) malloc(self->count.value * 8));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
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
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range p_r) {
    panda$core$Int64 step39;
    panda$core$Int64 current40;
    panda$core$Int64 end45;
    panda$collections$Array* result49;
    step39 = p_r.step;
    if (((panda$core$Bit) { (p_r.start != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) p_r.start)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull }).value) {
    {
        current40 = ((panda$core$Int64) (p_r.start != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) p_r.start)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
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
        panda$core$Int64 $tmp43 = (($fn42) self->$class->vtable[3])(self);
        panda$core$Int64 $tmp44 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp43, ((panda$core$Int64) { 1 }));
        current40 = $tmp44;
    }
    }
    }
    if (((panda$core$Bit) { (p_r.end != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) p_r.end)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull }).value) {
    {
        end45 = ((panda$core$Int64) (p_r.end != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) p_r.end)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    }
    }
    else {
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step39, ((panda$core$Int64) { 0 }));
    if ($tmp46.value) {
    {
        panda$core$Int64 $tmp48 = (($fn47) self->$class->vtable[3])(self);
        end45 = $tmp48;
    }
    }
    else {
    {
        end45 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp50 = (panda$collections$Array*) malloc(40);
    $tmp50->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp50->refCount.value = 1;
    panda$collections$Array$init($tmp50);
    result49 = $tmp50;
    panda$core$Bit $tmp52 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp52.value) {
    {
        $l53:;
        panda$core$Bit $tmp55 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current40, end45);
        if (!$tmp55.value) goto $l54;
        {
            panda$core$Object* $tmp57 = (($fn56) self->$class->vtable[2])(self, current40);
            panda$collections$Array$add$panda$collections$Array$T(result49, $tmp57);
            panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current40, step39);
            current40 = $tmp58;
        }
        goto $l53;
        $l54:;
    }
    }
    else {
    {
        $l59:;
        panda$core$Bit $tmp61 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current40, end45);
        if (!$tmp61.value) goto $l60;
        {
            panda$core$Object* $tmp63 = (($fn62) self->$class->vtable[2])(self, current40);
            panda$collections$Array$add$panda$collections$Array$T(result49, $tmp63);
            panda$core$Int64 $tmp64 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current40, step39);
            current40 = $tmp64;
        }
        goto $l59;
        $l60:;
    }
    }
    bool $tmp67 = p_r.inclusive.value;
    if ($tmp67) goto $l68;
    $tmp67 = ((panda$core$Bit) { !(p_r.end != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) p_r.end)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull }).value;
    $l68:;
    panda$core$Bit $tmp69 = { $tmp67 };
    bool $tmp66 = $tmp69.value;
    if (!$tmp66) goto $l70;
    panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current40, end45);
    $tmp66 = $tmp71.value;
    $l70:;
    panda$core$Bit $tmp72 = { $tmp66 };
    bool $tmp65 = $tmp72.value;
    if (!$tmp65) goto $l73;
    panda$core$Int64 $tmp75 = (($fn74) self->$class->vtable[3])(self);
    panda$core$Bit $tmp76 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end45, $tmp75);
    $tmp65 = $tmp76.value;
    $l73:;
    panda$core$Bit $tmp77 = { $tmp65 };
    if ($tmp77.value) {
    {
        panda$core$Object* $tmp79 = (($fn78) self->$class->vtable[2])(self, current40);
        panda$collections$Array$add$panda$collections$Array$T(result49, $tmp79);
    }
    }
    panda$collections$ImmutableArray* $tmp80 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp80->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp80->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp80, ((panda$collections$ListView*) result49));
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
    panda$core$String* $tmp86 = (($fn85) self->$class->vtable[7])(self, &$s84);
    return $tmp86;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result89;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp96;
    panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp87.value) {
    {
        return &$s88;
    }
    }
    panda$core$MutableString* $tmp90 = (panda$core$MutableString*) malloc(40);
    $tmp90->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp90->refCount.value = 1;
    panda$core$Object* $tmp93 = (($fn92) self->$class->vtable[2])(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp95 = (($fn94) $tmp93->$class->vtable[0])($tmp93);
    panda$core$MutableString$init$panda$core$String($tmp90, $tmp95);
    result89 = $tmp90;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp96, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp98 = $tmp96.start.value;
    panda$core$Int64 i97 = { $tmp98 };
    int64_t $tmp100 = $tmp96.end.value;
    int64_t $tmp101 = $tmp96.step.value;
    bool $tmp102 = $tmp96.inclusive.value;
    bool $tmp109 = $tmp101 > 0;
    if ($tmp109) goto $l107; else goto $l108;
    $l107:;
    if ($tmp102) goto $l110; else goto $l111;
    $l110:;
    if ($tmp98 <= $tmp100) goto $l103; else goto $l105;
    $l111:;
    if ($tmp98 < $tmp100) goto $l103; else goto $l105;
    $l108:;
    if ($tmp102) goto $l112; else goto $l113;
    $l112:;
    if ($tmp98 >= $tmp100) goto $l103; else goto $l105;
    $l113:;
    if ($tmp98 > $tmp100) goto $l103; else goto $l105;
    $l103:;
    {
        (($fn115) result89->$class->vtable[3])(result89, p_separator);
        panda$core$Object* $tmp117 = (($fn116) self->$class->vtable[2])(self, i97);
        (($fn118) result89->$class->vtable[5])(result89, $tmp117);
    }
    $l106:;
    if ($tmp109) goto $l120; else goto $l121;
    $l120:;
    int64_t $tmp122 = $tmp100 - i97.value;
    if ($tmp102) goto $l123; else goto $l124;
    $l123:;
    if ($tmp122 >= $tmp101) goto $l119; else goto $l105;
    $l124:;
    if ($tmp122 > $tmp101) goto $l119; else goto $l105;
    $l121:;
    int64_t $tmp126 = i97.value - $tmp100;
    if ($tmp102) goto $l127; else goto $l128;
    $l127:;
    if ($tmp126 >= -$tmp101) goto $l119; else goto $l105;
    $l128:;
    if ($tmp126 > -$tmp101) goto $l119; else goto $l105;
    $l119:;
    i97.value += $tmp101;
    goto $l103;
    $l105:;
    panda$core$String* $tmp131 = (($fn130) result89->$class->vtable[0])(result89);
    return $tmp131;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result132;
    panda$core$String* separator137;
    panda$collections$Iterator* v$Iter139;
    panda$core$Object* v151;
    panda$core$MutableString* $tmp133 = (panda$core$MutableString*) malloc(40);
    $tmp133->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp133->refCount.value = 1;
    panda$core$MutableString$init($tmp133);
    result132 = $tmp133;
    (($fn136) result132->$class->vtable[3])(result132, &$s135);
    separator137 = &$s138;
    {
        ITable* $tmp140 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$collections$Iterator* $tmp143 = $tmp141(((panda$collections$Iterable*) self));
        v$Iter139 = $tmp143;
        $l144:;
        ITable* $tmp146 = v$Iter139->$class->itable;
        while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp146 = $tmp146->next;
        }
        $fn148 $tmp147 = $tmp146->methods[0];
        panda$core$Bit $tmp149 = $tmp147(v$Iter139);
        panda$core$Bit $tmp150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp149);
        if (!$tmp150.value) goto $l145;
        {
            ITable* $tmp152 = v$Iter139->$class->itable;
            while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp152 = $tmp152->next;
            }
            $fn154 $tmp153 = $tmp152->methods[1];
            panda$core$Object* $tmp155 = $tmp153(v$Iter139);
            v151 = $tmp155;
            (($fn156) result132->$class->vtable[3])(result132, separator137);
            separator137 = &$s157;
            (($fn158) result132->$class->vtable[5])(result132, v151);
        }
        goto $l144;
        $l145:;
    }
    (($fn160) result132->$class->vtable[3])(result132, &$s159);
    panda$core$String* $tmp162 = (($fn161) result132->$class->vtable[0])(result132);
    return $tmp162;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Range $tmp163;
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp163, (p_r.start.nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) p_r.start.value))) : NULL), (p_r.end.nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) p_r.end.value))) : NULL), ((panda$core$Int64$nullable) { p_r.step, true }), p_r.inclusive);
    panda$collections$ImmutableArray* $tmp165 = (($fn164) self->$class->vtable[4])(self, $tmp163);
    return $tmp165;
}

