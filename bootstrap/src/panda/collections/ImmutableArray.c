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
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
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

panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String, panda$collections$ImmutableArray$cleanup, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim, panda$collections$ImmutableArray$join$R$panda$core$String, panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn21)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn117)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);

static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };

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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.min.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.max.value;
    bool $tmp10 = $tmp5.inclusive.value;
    if ($tmp10) goto $l17; else goto $l18;
    $l17:;
    if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
    $l18:;
    if ($tmp7 < $tmp9) goto $l11; else goto $l13;
    $l11:;
    {
        ITable* $tmp19 = p_data->$class->itable;
        while ($tmp19->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp19 = $tmp19->next;
        }
        $fn21 $tmp20 = $tmp19->methods[0];
        panda$core$Object* $tmp22 = $tmp20(p_data, i6);
        self->data[i6.value] = $tmp22;
    }
    $l14:;
    int64_t $tmp24 = $tmp9 - i6.value;
    if ($tmp10) goto $l25; else goto $l26;
    $l25:;
    if ($tmp24 >= 1) goto $l23; else goto $l13;
    $l26:;
    if ($tmp24 > 1) goto $l23; else goto $l13;
    $l23:;
    i6.value += 1;
    goto $l11;
    $l13:;
}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->data = p_data;
    self->count = p_count;
}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self) {
    free(self->data);
}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp30 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp29 = $tmp30.value;
    if (!$tmp29) goto $l31;
    panda$core$Bit $tmp32 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp29 = $tmp32.value;
    $l31:;
    panda$core$Bit $tmp33 = { $tmp29 };
    PANDA_ASSERT($tmp33.value);
    return self->data[p_index.value];
}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self) {
    return self->count;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max34;
    panda$core$Int64 count36;
    panda$core$Object** result38;
    panda$core$Range$LTpanda$core$Int64$GT $tmp39;
    max34 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max34, ((panda$core$Int64) { 1 }));
        max34 = $tmp35;
    }
    }
    panda$core$Int64 $tmp37 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max34, p_r.min);
    count36 = $tmp37;
    result38 = ((panda$core$Object**) malloc(count36.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp39, ((panda$core$Int64) { 0 }), count36, ((panda$core$Bit) { false }));
    int64_t $tmp41 = $tmp39.min.value;
    panda$core$Int64 i40 = { $tmp41 };
    int64_t $tmp43 = $tmp39.max.value;
    bool $tmp44 = $tmp39.inclusive.value;
    if ($tmp44) goto $l51; else goto $l52;
    $l51:;
    if ($tmp41 <= $tmp43) goto $l45; else goto $l47;
    $l52:;
    if ($tmp41 < $tmp43) goto $l45; else goto $l47;
    $l45:;
    {
        panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i40);
        panda$core$Object* $tmp54 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, $tmp53);
        result38[i40.value] = $tmp54;
    }
    $l48:;
    int64_t $tmp56 = $tmp43 - i40.value;
    if ($tmp44) goto $l57; else goto $l58;
    $l57:;
    if ($tmp56 >= 1) goto $l55; else goto $l47;
    $l58:;
    if ($tmp56 > 1) goto $l55; else goto $l47;
    $l55:;
    i40.value += 1;
    goto $l45;
    $l47:;
    panda$collections$ImmutableArray* $tmp61 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp61->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp61->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64($tmp61, result38, count36);
    return $tmp61;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start63;
    panda$core$Int64 end64;
    panda$core$Range$LTpanda$core$Int64$GT $tmp67;
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start63 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start63 = ((panda$core$Int64) { 0 });
    }
    }
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end64 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp65 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end64 = $tmp65;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end64, ((panda$core$Int64) { 1 }));
            end64 = $tmp66;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp67, start63, end64, p_r.inclusive);
    panda$collections$ImmutableArray* $tmp68 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self, $tmp67);
    return $tmp68;
}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step69;
    panda$core$Int64 current70;
    panda$core$Int64 end74;
    panda$collections$Array* result77;
    step69 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current70 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp71 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step69, ((panda$core$Int64) { 0 }));
    if ($tmp71.value) {
    {
        current70 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp72 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
        current70 = $tmp73;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end74 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp75 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step69, ((panda$core$Int64) { 0 }));
    if ($tmp75.value) {
    {
        panda$core$Int64 $tmp76 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
        end74 = $tmp76;
    }
    }
    else {
    {
        end74 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp78 = (panda$collections$Array*) malloc(40);
    $tmp78->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp78->refCount.value = 1;
    panda$collections$Array$init($tmp78);
    result77 = $tmp78;
    panda$core$Bit $tmp80 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp80.value) {
    {
        $l81:;
        panda$core$Bit $tmp83 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current70, end74);
        if (!$tmp83.value) goto $l82;
        {
            panda$core$Object* $tmp84 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
            panda$collections$Array$add$panda$collections$Array$T(result77, $tmp84);
            panda$core$Int64 $tmp85 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current70, step69);
            current70 = $tmp85;
        }
        goto $l81;
        $l82:;
    }
    }
    else {
    {
        panda$core$Bit $tmp86 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp86.value);
        $l87:;
        panda$core$Bit $tmp89 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current70, end74);
        if (!$tmp89.value) goto $l88;
        {
            panda$core$Object* $tmp90 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
            panda$collections$Array$add$panda$collections$Array$T(result77, $tmp90);
            panda$core$Int64 $tmp91 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current70, step69);
            current70 = $tmp91;
        }
        goto $l87;
        $l88:;
    }
    }
    bool $tmp94 = p_r.inclusive.value;
    if ($tmp94) goto $l95;
    $tmp94 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l95:;
    panda$core$Bit $tmp96 = { $tmp94 };
    bool $tmp93 = $tmp96.value;
    if (!$tmp93) goto $l97;
    panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current70, end74);
    $tmp93 = $tmp98.value;
    $l97:;
    panda$core$Bit $tmp99 = { $tmp93 };
    bool $tmp92 = $tmp99.value;
    if (!$tmp92) goto $l100;
    panda$core$Int64 $tmp101 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp102 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end74, $tmp101);
    $tmp92 = $tmp102.value;
    $l100:;
    panda$core$Bit $tmp103 = { $tmp92 };
    if ($tmp103.value) {
    {
        panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, current70);
        panda$collections$Array$add$panda$collections$Array$T(result77, $tmp104);
    }
    }
    panda$collections$ImmutableArray* $tmp105 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp105->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp105->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp105, ((panda$collections$ListView*) result77));
    return $tmp105;
}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self) {
    panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp107 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) malloc(32);
    $tmp107->$class = (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class;
    $tmp107->refCount.value = 1;
    panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp107, self);
    return ((panda$collections$Iterator*) $tmp107);
}
panda$core$String* panda$collections$ImmutableArray$join$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$String* $tmp110 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(self, &$s109);
    return $tmp110;
}
panda$core$String* panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(panda$collections$ImmutableArray* self, panda$core$String* p_separator) {
    panda$core$MutableString* result113;
    panda$core$Range$LTpanda$core$Int64$GT $tmp119;
    panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp111.value) {
    {
        return &$s112;
    }
    }
    panda$core$MutableString* $tmp114 = (panda$core$MutableString*) malloc(40);
    $tmp114->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp114->refCount.value = 1;
    panda$core$Object* $tmp116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp118 = (($fn117) $tmp116->$class->vtable[0])($tmp116);
    panda$core$MutableString$init$panda$core$String($tmp114, $tmp118);
    result113 = $tmp114;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp119, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp121 = $tmp119.min.value;
    panda$core$Int64 i120 = { $tmp121 };
    int64_t $tmp123 = $tmp119.max.value;
    bool $tmp124 = $tmp119.inclusive.value;
    if ($tmp124) goto $l131; else goto $l132;
    $l131:;
    if ($tmp121 <= $tmp123) goto $l125; else goto $l127;
    $l132:;
    if ($tmp121 < $tmp123) goto $l125; else goto $l127;
    $l125:;
    {
        panda$core$MutableString$append$panda$core$String(result113, p_separator);
        panda$core$Object* $tmp133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self, i120);
        panda$core$MutableString$append$panda$core$Object(result113, $tmp133);
    }
    $l128:;
    int64_t $tmp135 = $tmp123 - i120.value;
    if ($tmp124) goto $l136; else goto $l137;
    $l136:;
    if ($tmp135 >= 1) goto $l134; else goto $l127;
    $l137:;
    if ($tmp135 > 1) goto $l134; else goto $l127;
    $l134:;
    i120.value += 1;
    goto $l125;
    $l127:;
    panda$core$String* $tmp140 = panda$core$MutableString$finish$R$panda$core$String(result113);
    return $tmp140;
}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self) {
    panda$core$MutableString* result141;
    panda$core$String* separator145;
    panda$collections$Iterator* v$Iter147;
    panda$core$Object* v159;
    panda$core$MutableString* $tmp142 = (panda$core$MutableString*) malloc(40);
    $tmp142->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp142->refCount.value = 1;
    panda$core$MutableString$init($tmp142);
    result141 = $tmp142;
    panda$core$MutableString$append$panda$core$String(result141, &$s144);
    separator145 = &$s146;
    {
        ITable* $tmp148 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp148 = $tmp148->next;
        }
        $fn150 $tmp149 = $tmp148->methods[0];
        panda$collections$Iterator* $tmp151 = $tmp149(((panda$collections$Iterable*) self));
        v$Iter147 = $tmp151;
        $l152:;
        ITable* $tmp154 = v$Iter147->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[0];
        panda$core$Bit $tmp157 = $tmp155(v$Iter147);
        panda$core$Bit $tmp158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp157);
        if (!$tmp158.value) goto $l153;
        {
            ITable* $tmp160 = v$Iter147->$class->itable;
            while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp160 = $tmp160->next;
            }
            $fn162 $tmp161 = $tmp160->methods[1];
            panda$core$Object* $tmp163 = $tmp161(v$Iter147);
            v159 = $tmp163;
            panda$core$MutableString$append$panda$core$String(result141, separator145);
            separator145 = &$s164;
            panda$core$MutableString$append$panda$core$Object(result141, v159);
        }
        goto $l152;
        $l153:;
    }
    panda$core$MutableString$append$panda$core$String(result141, &$s165);
    panda$core$String* $tmp166 = panda$core$MutableString$finish$R$panda$core$String(result141);
    return $tmp166;
}

