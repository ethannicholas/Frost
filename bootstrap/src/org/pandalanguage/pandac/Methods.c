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
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Methods$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn42)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn47)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn65)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp25;
    org$pandalanguage$pandac$Position $tmp61;
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
            ITable* $tmp40 = p_methods->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[0];
            panda$core$Object* $tmp43 = $tmp41(p_methods, i12);
            panda$core$Object* $tmp39 = $tmp43;
            ITable* $tmp45 = p_methods->$class->itable;
            while ($tmp45->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp45 = $tmp45->next;
            }
            $fn47 $tmp46 = $tmp45->methods[0];
            panda$core$Object* $tmp48 = $tmp46(p_methods, j26);
            panda$core$Object* $tmp44 = $tmp48;
            panda$core$Panda$unref$panda$core$Object($tmp44);
            panda$core$Panda$unref$panda$core$Object($tmp39);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp39)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp44)) }).value) {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $l34:;
        int64_t $tmp50 = $tmp29 - j26.value;
        if ($tmp30) goto $l51; else goto $l52;
        $l51:;
        if ((uint64_t) $tmp50 >= 1) goto $l49; else goto $l33;
        $l52:;
        if ((uint64_t) $tmp50 > 1) goto $l49; else goto $l33;
        $l49:;
        j26.value += 1;
        goto $l31;
        $l33:;
    }
    $l20:;
    int64_t $tmp56 = $tmp15 - i12.value;
    if ($tmp16) goto $l57; else goto $l58;
    $l57:;
    if ((uint64_t) $tmp56 >= 1) goto $l55; else goto $l19;
    $l58:;
    if ((uint64_t) $tmp56 > 1) goto $l55; else goto $l19;
    $l55:;
    i12.value += 1;
    goto $l17;
    $l19:;
    org$pandalanguage$pandac$Position$init(&$tmp61);
    ITable* $tmp63 = p_methods->$class->itable;
    while ($tmp63->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp63 = $tmp63->next;
    }
    $fn65 $tmp64 = $tmp63->methods[0];
    panda$core$Object* $tmp66 = $tmp64(p_methods, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp62 = $tmp66;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 205 }), $tmp61, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp62))->name);
    panda$core$Panda$unref$panda$core$Object($tmp62);
    {
        panda$collections$ImmutableArray* $tmp67 = self->methods;
        panda$collections$ImmutableArray* $tmp70 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp70, p_methods);
        panda$collections$ImmutableArray* $tmp69 = $tmp70;
        panda$collections$ImmutableArray* $tmp68 = $tmp69;
        self->methods = $tmp68;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    }
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
}

