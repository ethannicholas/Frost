#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn45)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn49)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn75)(panda$collections$ListView*, panda$core$Int64);


void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp24;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_methods));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1, ((panda$core$Int64) { 1 }), $tmp5, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp1.start.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp1.end.value;
    int64_t $tmp10 = $tmp1.step.value;
    bool $tmp11 = $tmp1.inclusive.value;
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
        panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp24, ((panda$core$Int64) { 0 }), i6, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp26 = $tmp24.start.value;
        panda$core$Int64 j25 = { $tmp26 };
        int64_t $tmp28 = $tmp24.end.value;
        int64_t $tmp29 = $tmp24.step.value;
        bool $tmp30 = $tmp24.inclusive.value;
        bool $tmp37 = $tmp29 > 0;
        if ($tmp37) goto $l35; else goto $l36;
        $l35:;
        if ($tmp30) goto $l38; else goto $l39;
        $l38:;
        if ($tmp26 <= $tmp28) goto $l31; else goto $l33;
        $l39:;
        if ($tmp26 < $tmp28) goto $l31; else goto $l33;
        $l36:;
        if ($tmp30) goto $l40; else goto $l41;
        $l40:;
        if ($tmp26 >= $tmp28) goto $l31; else goto $l33;
        $l41:;
        if ($tmp26 > $tmp28) goto $l31; else goto $l33;
        $l31:;
        {
            ITable* $tmp43 = p_methods->$class->itable;
            while ($tmp43->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp43 = $tmp43->next;
            }
            $fn45 $tmp44 = $tmp43->methods[0];
            panda$core$Object* $tmp46 = $tmp44(p_methods, i6);
            ITable* $tmp47 = p_methods->$class->itable;
            while ($tmp47->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp47 = $tmp47->next;
            }
            $fn49 $tmp48 = $tmp47->methods[0];
            panda$core$Object* $tmp50 = $tmp48(p_methods, j25);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp46)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp50)) }).value) {
            {
            }
            }
        }
        $l34:;
        if ($tmp37) goto $l52; else goto $l53;
        $l52:;
        int64_t $tmp54 = $tmp28 - j25.value;
        if ($tmp30) goto $l55; else goto $l56;
        $l55:;
        if ($tmp54 >= $tmp29) goto $l51; else goto $l33;
        $l56:;
        if ($tmp54 > $tmp29) goto $l51; else goto $l33;
        $l53:;
        int64_t $tmp58 = j25.value - $tmp28;
        if ($tmp30) goto $l59; else goto $l60;
        $l59:;
        if ($tmp58 >= -$tmp29) goto $l51; else goto $l33;
        $l60:;
        if ($tmp58 > -$tmp29) goto $l51; else goto $l33;
        $l51:;
        j25.value += $tmp29;
        goto $l31;
        $l33:;
    }
    $l15:;
    if ($tmp18) goto $l63; else goto $l64;
    $l63:;
    int64_t $tmp65 = $tmp9 - i6.value;
    if ($tmp11) goto $l66; else goto $l67;
    $l66:;
    if ($tmp65 >= $tmp10) goto $l62; else goto $l14;
    $l67:;
    if ($tmp65 > $tmp10) goto $l62; else goto $l14;
    $l64:;
    int64_t $tmp69 = i6.value - $tmp9;
    if ($tmp11) goto $l70; else goto $l71;
    $l70:;
    if ($tmp69 >= -$tmp10) goto $l62; else goto $l14;
    $l71:;
    if ($tmp69 > -$tmp10) goto $l62; else goto $l14;
    $l62:;
    i6.value += $tmp10;
    goto $l12;
    $l14:;
    ITable* $tmp73 = p_methods->$class->itable;
    while ($tmp73->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp73 = $tmp73->next;
    }
    $fn75 $tmp74 = $tmp73->methods[0];
    panda$core$Object* $tmp76 = $tmp74(p_methods, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), ((panda$core$Int64) { -1 }), ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp76))->name);
    panda$collections$ImmutableArray* $tmp77 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp77->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp77->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp77, p_methods);
    self->methods = $tmp77;
}

