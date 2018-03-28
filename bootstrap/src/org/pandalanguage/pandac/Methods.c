#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Methods$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn41)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn45)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn62)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp25;
    org$pandalanguage$pandac$Position $tmp59;
    self->name = NULL;
    self->methods = NULL;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_methods));
    panda$core$Bit $tmp6 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp6.value);
    ITable* $tmp8 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp8->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp8 = $tmp8->next;
    }
    $fn10 $tmp9 = $tmp8->methods[0];
    panda$core$Int64 $tmp11 = $tmp9(((panda$collections$CollectionView*) p_methods));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp7, ((panda$core$Int64) { 1 }), $tmp11, ((panda$core$Bit) { false }));
    int64_t $tmp13 = $tmp7.min.value;
    panda$core$Int64 i12 = { $tmp13 };
    int64_t $tmp15 = $tmp7.max.value;
    bool $tmp16 = $tmp7.inclusive.value;
    if ($tmp16) goto $l23; else goto $l24;
    $l23:;
    if ($tmp13 <= $tmp15) goto $l17; else goto $l19;
    $l24:;
    if ($tmp13 < $tmp15) goto $l17; else goto $l19;
    $l17:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp25, ((panda$core$Int64) { 0 }), i12, ((panda$core$Bit) { false }));
        int64_t $tmp27 = $tmp25.min.value;
        panda$core$Int64 j26 = { $tmp27 };
        int64_t $tmp29 = $tmp25.max.value;
        bool $tmp30 = $tmp25.inclusive.value;
        if ($tmp30) goto $l37; else goto $l38;
        $l37:;
        if ($tmp27 <= $tmp29) goto $l31; else goto $l33;
        $l38:;
        if ($tmp27 < $tmp29) goto $l31; else goto $l33;
        $l31:;
        {
            ITable* $tmp39 = p_methods->$class->itable;
            while ($tmp39->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp39 = $tmp39->next;
            }
            $fn41 $tmp40 = $tmp39->methods[0];
            panda$core$Object* $tmp42 = $tmp40(p_methods, i12);
            ITable* $tmp43 = p_methods->$class->itable;
            while ($tmp43->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp43 = $tmp43->next;
            }
            $fn45 $tmp44 = $tmp43->methods[0];
            panda$core$Object* $tmp46 = $tmp44(p_methods, j26);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp42)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp46)) }).value) {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $l34:;
        int64_t $tmp48 = $tmp29 - j26.value;
        if ($tmp30) goto $l49; else goto $l50;
        $l49:;
        if ((uint64_t) $tmp48 >= 1) goto $l47; else goto $l33;
        $l50:;
        if ((uint64_t) $tmp48 > 1) goto $l47; else goto $l33;
        $l47:;
        j26.value += 1;
        goto $l31;
        $l33:;
    }
    $l20:;
    int64_t $tmp54 = $tmp15 - i12.value;
    if ($tmp16) goto $l55; else goto $l56;
    $l55:;
    if ((uint64_t) $tmp54 >= 1) goto $l53; else goto $l19;
    $l56:;
    if ((uint64_t) $tmp54 > 1) goto $l53; else goto $l19;
    $l53:;
    i12.value += 1;
    goto $l17;
    $l19:;
    org$pandalanguage$pandac$Position$init(&$tmp59);
    ITable* $tmp60 = p_methods->$class->itable;
    while ($tmp60->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp60 = $tmp60->next;
    }
    $fn62 $tmp61 = $tmp60->methods[0];
    panda$core$Object* $tmp63 = $tmp61(p_methods, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), $tmp59, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp63))->name);
    {
        panda$collections$ImmutableArray* $tmp64 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp64, p_methods);
        self->methods = $tmp64;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
    }
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
}

