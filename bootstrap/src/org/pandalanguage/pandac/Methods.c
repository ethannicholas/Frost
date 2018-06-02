#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Methods$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn50)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn67)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn91)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x3a\x20", 18, -8206996285794407181, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Int64 $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Bit $tmp17;
    panda$core$Range$LTpanda$core$Int64$GT $tmp31;
    panda$core$Int64 $tmp32;
    panda$core$Bit $tmp33;
    panda$core$Object* $tmp47;
    panda$core$Object* $tmp52;
    panda$core$Bit $tmp57;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    panda$core$Object* $tmp64;
    org$pandalanguage$pandac$Symbol$Kind $tmp84;
    panda$core$Int64 $tmp85;
    org$pandalanguage$pandac$Position $tmp86;
    panda$core$Object* $tmp87;
    panda$core$Int64 $tmp88;
    panda$collections$ImmutableArray* $tmp93;
    panda$collections$ImmutableArray* $tmp94;
    panda$collections$ImmutableArray* $tmp95;
    self->name = NULL;
    self->methods = NULL;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_methods));
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit $tmp7 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5, $tmp6);
    if ($tmp7.value) goto $l8; else goto $l9;
    $l9:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s10, (panda$core$Int64) { 8 });
    abort();
    $l8:;
    panda$core$Int64$init$builtin_int64(&$tmp12, 1);
    ITable* $tmp13 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp13->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp13 = $tmp13->next;
    }
    $fn15 $tmp14 = $tmp13->methods[0];
    panda$core$Int64 $tmp16 = $tmp14(((panda$collections$CollectionView*) p_methods));
    panda$core$Bit$init$builtin_bit(&$tmp17, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, $tmp12, $tmp16, $tmp17);
    int64_t $tmp19 = $tmp11.min.value;
    panda$core$Int64 i18 = { $tmp19 };
    int64_t $tmp21 = $tmp11.max.value;
    bool $tmp22 = $tmp11.inclusive.value;
    if ($tmp22) goto $l29; else goto $l30;
    $l29:;
    if ($tmp19 <= $tmp21) goto $l23; else goto $l25;
    $l30:;
    if ($tmp19 < $tmp21) goto $l23; else goto $l25;
    $l23:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp32, 0);
        panda$core$Bit$init$builtin_bit(&$tmp33, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp31, $tmp32, i18, $tmp33);
        int64_t $tmp35 = $tmp31.min.value;
        panda$core$Int64 j34 = { $tmp35 };
        int64_t $tmp37 = $tmp31.max.value;
        bool $tmp38 = $tmp31.inclusive.value;
        if ($tmp38) goto $l45; else goto $l46;
        $l45:;
        if ($tmp35 <= $tmp37) goto $l39; else goto $l41;
        $l46:;
        if ($tmp35 < $tmp37) goto $l39; else goto $l41;
        $l39:;
        {
            ITable* $tmp48 = p_methods->$class->itable;
            while ($tmp48->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp48 = $tmp48->next;
            }
            $fn50 $tmp49 = $tmp48->methods[0];
            panda$core$Object* $tmp51 = $tmp49(p_methods, i18);
            $tmp47 = $tmp51;
            ITable* $tmp53 = p_methods->$class->itable;
            while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp53 = $tmp53->next;
            }
            $fn55 $tmp54 = $tmp53->methods[0];
            panda$core$Object* $tmp56 = $tmp54(p_methods, j34);
            $tmp52 = $tmp56;
            panda$core$Panda$unref$panda$core$Object($tmp52);
            panda$core$Panda$unref$panda$core$Object($tmp47);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp47)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp52)) }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp57, false);
                if ($tmp57.value) goto $l58; else goto $l59;
                $l59:;
                ITable* $tmp65 = p_methods->$class->itable;
                while ($tmp65->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp65 = $tmp65->next;
                }
                $fn67 $tmp66 = $tmp65->methods[0];
                panda$core$Object* $tmp68 = $tmp66(p_methods, i18);
                $tmp64 = $tmp68;
                panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s63, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp64)));
                $tmp62 = $tmp69;
                panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s70);
                $tmp61 = $tmp71;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s60, (panda$core$Int64) { 12 }, $tmp61);
                abort();
                $l58:;
            }
            }
        }
        $l42:;
        int64_t $tmp73 = $tmp37 - j34.value;
        if ($tmp38) goto $l74; else goto $l75;
        $l74:;
        if ((uint64_t) $tmp73 >= 1) goto $l72; else goto $l41;
        $l75:;
        if ((uint64_t) $tmp73 > 1) goto $l72; else goto $l41;
        $l72:;
        j34.value += 1;
        goto $l39;
        $l41:;
    }
    $l26:;
    int64_t $tmp79 = $tmp21 - i18.value;
    if ($tmp22) goto $l80; else goto $l81;
    $l80:;
    if ((uint64_t) $tmp79 >= 1) goto $l78; else goto $l25;
    $l81:;
    if ((uint64_t) $tmp79 > 1) goto $l78; else goto $l25;
    $l78:;
    i18.value += 1;
    goto $l23;
    $l25:;
    panda$core$Int64$init$builtin_int64(&$tmp85, 4);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp84, $tmp85);
    org$pandalanguage$pandac$Position$init(&$tmp86);
    panda$core$Int64$init$builtin_int64(&$tmp88, 0);
    ITable* $tmp89 = p_methods->$class->itable;
    while ($tmp89->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp89 = $tmp89->next;
    }
    $fn91 $tmp90 = $tmp89->methods[0];
    panda$core$Object* $tmp92 = $tmp90(p_methods, $tmp88);
    $tmp87 = $tmp92;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp84, $tmp86, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp87))->name);
    panda$core$Panda$unref$panda$core$Object($tmp87);
    {
        $tmp93 = self->methods;
        panda$collections$ImmutableArray* $tmp96 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp96, p_methods);
        $tmp95 = $tmp96;
        $tmp94 = $tmp95;
        self->methods = $tmp94;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    }
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    int $tmp99;
    {
    }
    $tmp99 = -1;
    goto $l97;
    $l97:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp99) {
        case -1: goto $l100;
    }
    $l100:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
}

