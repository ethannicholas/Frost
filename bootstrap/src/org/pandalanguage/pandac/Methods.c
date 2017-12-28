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
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn44)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn61)(panda$collections$ListView*, panda$core$Int64);


void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp24;
    org$pandalanguage$pandac$Position $tmp58;
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
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp24, ((panda$core$Int64) { 0 }), i11, ((panda$core$Bit) { false }));
        int64_t $tmp26 = $tmp24.min.value;
        panda$core$Int64 j25 = { $tmp26 };
        int64_t $tmp28 = $tmp24.max.value;
        bool $tmp29 = $tmp24.inclusive.value;
        if ($tmp29) goto $l36; else goto $l37;
        $l36:;
        if ($tmp26 <= $tmp28) goto $l30; else goto $l32;
        $l37:;
        if ($tmp26 < $tmp28) goto $l30; else goto $l32;
        $l30:;
        {
            ITable* $tmp38 = p_methods->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[0];
            panda$core$Object* $tmp41 = $tmp39(p_methods, i11);
            ITable* $tmp42 = p_methods->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[0];
            panda$core$Object* $tmp45 = $tmp43(p_methods, j25);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp41)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp45)) }).value) {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $l33:;
        int64_t $tmp47 = $tmp28 - j25.value;
        if ($tmp29) goto $l48; else goto $l49;
        $l48:;
        if ((uint64_t) $tmp47 >= 1) goto $l46; else goto $l32;
        $l49:;
        if ((uint64_t) $tmp47 > 1) goto $l46; else goto $l32;
        $l46:;
        j25.value += 1;
        goto $l30;
        $l32:;
    }
    $l19:;
    int64_t $tmp53 = $tmp14 - i11.value;
    if ($tmp15) goto $l54; else goto $l55;
    $l54:;
    if ((uint64_t) $tmp53 >= 1) goto $l52; else goto $l18;
    $l55:;
    if ((uint64_t) $tmp53 > 1) goto $l52; else goto $l18;
    $l52:;
    i11.value += 1;
    goto $l16;
    $l18:;
    org$pandalanguage$pandac$Position$init(&$tmp58);
    ITable* $tmp59 = p_methods->$class->itable;
    while ($tmp59->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp59 = $tmp59->next;
    }
    $fn61 $tmp60 = $tmp59->methods[0];
    panda$core$Object* $tmp62 = $tmp60(p_methods, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), $tmp58, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp62))->name);
    {
        panda$collections$ImmutableArray* $tmp63 = (panda$collections$ImmutableArray*) pandaAlloc(40);
        $tmp63->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp63->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp63, p_methods);
        panda$core$Object* $tmp65 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp63));
        self->methods = ((panda$collections$ImmutableArray*) $tmp65);
    }
}

