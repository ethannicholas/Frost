#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn48)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn52)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn79)(panda$collections$ListView*, panda$core$Int64);


void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp28;
    org$pandalanguage$pandac$Position $tmp76;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_methods));
    panda$core$Bit $tmp5 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5.value);
    ITable* $tmp7 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) p_methods));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 1 }), $tmp10, ((panda$core$Bit) { false }));
    int64_t $tmp12 = $tmp6.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp6.max.value;
    bool $tmp15 = $tmp6.inclusive.value;
    bool $tmp22 = 1 > 0;
    if ($tmp22) goto $l20; else goto $l21;
    $l20:;
    if ($tmp15) goto $l23; else goto $l24;
    $l23:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l24:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l21:;
    if ($tmp15) goto $l25; else goto $l26;
    $l25:;
    if ($tmp12 >= $tmp14) goto $l16; else goto $l18;
    $l26:;
    if ($tmp12 > $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp28, ((panda$core$Int64) { 0 }), i11, ((panda$core$Bit) { false }));
        int64_t $tmp30 = $tmp28.min.value;
        panda$core$Int64 j29 = { $tmp30 };
        int64_t $tmp32 = $tmp28.max.value;
        bool $tmp33 = $tmp28.inclusive.value;
        bool $tmp40 = 1 > 0;
        if ($tmp40) goto $l38; else goto $l39;
        $l38:;
        if ($tmp33) goto $l41; else goto $l42;
        $l41:;
        if ($tmp30 <= $tmp32) goto $l34; else goto $l36;
        $l42:;
        if ($tmp30 < $tmp32) goto $l34; else goto $l36;
        $l39:;
        if ($tmp33) goto $l43; else goto $l44;
        $l43:;
        if ($tmp30 >= $tmp32) goto $l34; else goto $l36;
        $l44:;
        if ($tmp30 > $tmp32) goto $l34; else goto $l36;
        $l34:;
        {
            ITable* $tmp46 = p_methods->$class->itable;
            while ($tmp46->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp46 = $tmp46->next;
            }
            $fn48 $tmp47 = $tmp46->methods[0];
            panda$core$Object* $tmp49 = $tmp47(p_methods, i11);
            ITable* $tmp50 = p_methods->$class->itable;
            while ($tmp50->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp50 = $tmp50->next;
            }
            $fn52 $tmp51 = $tmp50->methods[0];
            panda$core$Object* $tmp53 = $tmp51(p_methods, j29);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp49)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp53)) }).value) {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $l37:;
        if ($tmp40) goto $l55; else goto $l56;
        $l55:;
        int64_t $tmp57 = $tmp32 - j29.value;
        if ($tmp33) goto $l58; else goto $l59;
        $l58:;
        if ($tmp57 >= 1) goto $l54; else goto $l36;
        $l59:;
        if ($tmp57 > 1) goto $l54; else goto $l36;
        $l56:;
        int64_t $tmp61 = j29.value - $tmp32;
        if ($tmp33) goto $l62; else goto $l63;
        $l62:;
        if ($tmp61 >= -1) goto $l54; else goto $l36;
        $l63:;
        if ($tmp61 > -1) goto $l54; else goto $l36;
        $l54:;
        j29.value += 1;
        goto $l34;
        $l36:;
    }
    $l19:;
    if ($tmp22) goto $l66; else goto $l67;
    $l66:;
    int64_t $tmp68 = $tmp14 - i11.value;
    if ($tmp15) goto $l69; else goto $l70;
    $l69:;
    if ($tmp68 >= 1) goto $l65; else goto $l18;
    $l70:;
    if ($tmp68 > 1) goto $l65; else goto $l18;
    $l67:;
    int64_t $tmp72 = i11.value - $tmp14;
    if ($tmp15) goto $l73; else goto $l74;
    $l73:;
    if ($tmp72 >= -1) goto $l65; else goto $l18;
    $l74:;
    if ($tmp72 > -1) goto $l65; else goto $l18;
    $l65:;
    i11.value += 1;
    goto $l16;
    $l18:;
    org$pandalanguage$pandac$Position$init(&$tmp76);
    ITable* $tmp77 = p_methods->$class->itable;
    while ($tmp77->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp77 = $tmp77->next;
    }
    $fn79 $tmp78 = $tmp77->methods[0];
    panda$core$Object* $tmp80 = $tmp78(p_methods, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), $tmp76, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp80))->name);
    panda$collections$ImmutableArray* $tmp81 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp81->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp81->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp81, p_methods);
    self->methods = $tmp81;
}

