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
typedef panda$core$Object* (*$fn50)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn81)(panda$collections$ListView*, panda$core$Int64);


void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp29;
    org$pandalanguage$pandac$Position $tmp78;
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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 1 }), $tmp10, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp12 = $tmp6.start.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp6.end.value;
    int64_t $tmp15 = $tmp6.step.value;
    bool $tmp16 = $tmp6.inclusive.value;
    bool $tmp23 = $tmp15 > 0;
    if ($tmp23) goto $l21; else goto $l22;
    $l21:;
    if ($tmp16) goto $l24; else goto $l25;
    $l24:;
    if ($tmp12 <= $tmp14) goto $l17; else goto $l19;
    $l25:;
    if ($tmp12 < $tmp14) goto $l17; else goto $l19;
    $l22:;
    if ($tmp16) goto $l26; else goto $l27;
    $l26:;
    if ($tmp12 >= $tmp14) goto $l17; else goto $l19;
    $l27:;
    if ($tmp12 > $tmp14) goto $l17; else goto $l19;
    $l17:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp29, ((panda$core$Int64) { 0 }), i11, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp31 = $tmp29.start.value;
        panda$core$Int64 j30 = { $tmp31 };
        int64_t $tmp33 = $tmp29.end.value;
        int64_t $tmp34 = $tmp29.step.value;
        bool $tmp35 = $tmp29.inclusive.value;
        bool $tmp42 = $tmp34 > 0;
        if ($tmp42) goto $l40; else goto $l41;
        $l40:;
        if ($tmp35) goto $l43; else goto $l44;
        $l43:;
        if ($tmp31 <= $tmp33) goto $l36; else goto $l38;
        $l44:;
        if ($tmp31 < $tmp33) goto $l36; else goto $l38;
        $l41:;
        if ($tmp35) goto $l45; else goto $l46;
        $l45:;
        if ($tmp31 >= $tmp33) goto $l36; else goto $l38;
        $l46:;
        if ($tmp31 > $tmp33) goto $l36; else goto $l38;
        $l36:;
        {
            ITable* $tmp48 = p_methods->$class->itable;
            while ($tmp48->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp48 = $tmp48->next;
            }
            $fn50 $tmp49 = $tmp48->methods[0];
            panda$core$Object* $tmp51 = $tmp49(p_methods, i11);
            ITable* $tmp52 = p_methods->$class->itable;
            while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp52 = $tmp52->next;
            }
            $fn54 $tmp53 = $tmp52->methods[0];
            panda$core$Object* $tmp55 = $tmp53(p_methods, j30);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp51)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp55)) }).value) {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $l39:;
        if ($tmp42) goto $l57; else goto $l58;
        $l57:;
        int64_t $tmp59 = $tmp33 - j30.value;
        if ($tmp35) goto $l60; else goto $l61;
        $l60:;
        if ($tmp59 >= $tmp34) goto $l56; else goto $l38;
        $l61:;
        if ($tmp59 > $tmp34) goto $l56; else goto $l38;
        $l58:;
        int64_t $tmp63 = j30.value - $tmp33;
        if ($tmp35) goto $l64; else goto $l65;
        $l64:;
        if ($tmp63 >= -$tmp34) goto $l56; else goto $l38;
        $l65:;
        if ($tmp63 > -$tmp34) goto $l56; else goto $l38;
        $l56:;
        j30.value += $tmp34;
        goto $l36;
        $l38:;
    }
    $l20:;
    if ($tmp23) goto $l68; else goto $l69;
    $l68:;
    int64_t $tmp70 = $tmp14 - i11.value;
    if ($tmp16) goto $l71; else goto $l72;
    $l71:;
    if ($tmp70 >= $tmp15) goto $l67; else goto $l19;
    $l72:;
    if ($tmp70 > $tmp15) goto $l67; else goto $l19;
    $l69:;
    int64_t $tmp74 = i11.value - $tmp14;
    if ($tmp16) goto $l75; else goto $l76;
    $l75:;
    if ($tmp74 >= -$tmp15) goto $l67; else goto $l19;
    $l76:;
    if ($tmp74 > -$tmp15) goto $l67; else goto $l19;
    $l67:;
    i11.value += $tmp15;
    goto $l17;
    $l19:;
    org$pandalanguage$pandac$Position$init(&$tmp78);
    ITable* $tmp79 = p_methods->$class->itable;
    while ($tmp79->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp79 = $tmp79->next;
    }
    $fn81 $tmp80 = $tmp79->methods[0];
    panda$core$Object* $tmp82 = $tmp80(p_methods, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), $tmp78, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp82))->name);
    panda$collections$ImmutableArray* $tmp83 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp83->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp83->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp83, p_methods);
    self->methods = $tmp83;
}

