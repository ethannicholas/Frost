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
typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn45)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn50)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn61)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn83)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x3a\x20", 18, -8206996285794407181, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$Range$LTpanda$core$Int64$GT $tmp28;
    panda$core$Object* $tmp42;
    panda$core$Object* $tmp47;
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$Object* $tmp58;
    org$pandalanguage$pandac$Symbol$Kind $tmp78;
    org$pandalanguage$pandac$Position $tmp79;
    panda$core$Object* $tmp80;
    panda$collections$ImmutableArray* $tmp85;
    panda$collections$ImmutableArray* $tmp86;
    panda$collections$ImmutableArray* $tmp87;
    self->name = NULL;
    self->methods = NULL;
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_methods));
    panda$core$Bit $tmp6 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5, ((panda$core$Int64) { 0 }));
    if ($tmp6.value) goto $l7; else goto $l8;
    $l8:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s9, (panda$core$Int64) { 8 });
    abort();
    $l7:;
    ITable* $tmp11 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp11 = $tmp11->next;
    }
    $fn13 $tmp12 = $tmp11->methods[0];
    panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) p_methods));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, ((panda$core$Int64) { 1 }), $tmp14, ((panda$core$Bit) { false }));
    int64_t $tmp16 = $tmp10.min.value;
    panda$core$Int64 i15 = { $tmp16 };
    int64_t $tmp18 = $tmp10.max.value;
    bool $tmp19 = $tmp10.inclusive.value;
    if ($tmp19) goto $l26; else goto $l27;
    $l26:;
    if ($tmp16 <= $tmp18) goto $l20; else goto $l22;
    $l27:;
    if ($tmp16 < $tmp18) goto $l20; else goto $l22;
    $l20:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp28, ((panda$core$Int64) { 0 }), i15, ((panda$core$Bit) { false }));
        int64_t $tmp30 = $tmp28.min.value;
        panda$core$Int64 j29 = { $tmp30 };
        int64_t $tmp32 = $tmp28.max.value;
        bool $tmp33 = $tmp28.inclusive.value;
        if ($tmp33) goto $l40; else goto $l41;
        $l40:;
        if ($tmp30 <= $tmp32) goto $l34; else goto $l36;
        $l41:;
        if ($tmp30 < $tmp32) goto $l34; else goto $l36;
        $l34:;
        {
            ITable* $tmp43 = p_methods->$class->itable;
            while ($tmp43->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp43 = $tmp43->next;
            }
            $fn45 $tmp44 = $tmp43->methods[0];
            panda$core$Object* $tmp46 = $tmp44(p_methods, i15);
            $tmp42 = $tmp46;
            ITable* $tmp48 = p_methods->$class->itable;
            while ($tmp48->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp48 = $tmp48->next;
            }
            $fn50 $tmp49 = $tmp48->methods[0];
            panda$core$Object* $tmp51 = $tmp49(p_methods, j29);
            $tmp47 = $tmp51;
            panda$core$Panda$unref$panda$core$Object($tmp47);
            panda$core$Panda$unref$panda$core$Object($tmp42);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp42)) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp47)) }).value) {
            {
                if (((panda$core$Bit) { false }).value) goto $l52; else goto $l53;
                $l53:;
                ITable* $tmp59 = p_methods->$class->itable;
                while ($tmp59->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp59 = $tmp59->next;
                }
                $fn61 $tmp60 = $tmp59->methods[0];
                panda$core$Object* $tmp62 = $tmp60(p_methods, i15);
                $tmp58 = $tmp62;
                panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s57, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp58)));
                $tmp56 = $tmp63;
                panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s64);
                $tmp55 = $tmp65;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s54, (panda$core$Int64) { 12 }, $tmp55);
                abort();
                $l52:;
            }
            }
        }
        $l37:;
        int64_t $tmp67 = $tmp32 - j29.value;
        if ($tmp33) goto $l68; else goto $l69;
        $l68:;
        if ((uint64_t) $tmp67 >= 1) goto $l66; else goto $l36;
        $l69:;
        if ((uint64_t) $tmp67 > 1) goto $l66; else goto $l36;
        $l66:;
        j29.value += 1;
        goto $l34;
        $l36:;
    }
    $l23:;
    int64_t $tmp73 = $tmp18 - i15.value;
    if ($tmp19) goto $l74; else goto $l75;
    $l74:;
    if ((uint64_t) $tmp73 >= 1) goto $l72; else goto $l22;
    $l75:;
    if ((uint64_t) $tmp73 > 1) goto $l72; else goto $l22;
    $l72:;
    i15.value += 1;
    goto $l20;
    $l22:;
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp78, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp79);
    ITable* $tmp81 = p_methods->$class->itable;
    while ($tmp81->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp81 = $tmp81->next;
    }
    $fn83 $tmp82 = $tmp81->methods[0];
    panda$core$Object* $tmp84 = $tmp82(p_methods, ((panda$core$Int64) { 0 }));
    $tmp80 = $tmp84;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp78, $tmp79, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp80))->name);
    panda$core$Panda$unref$panda$core$Object($tmp80);
    {
        $tmp85 = self->methods;
        panda$collections$ImmutableArray* $tmp88 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp88, p_methods);
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        self->methods = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    }
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    int $tmp91;
    {
    }
    $tmp91 = -1;
    goto $l89;
    $l89:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp91) {
        case -1: goto $l92;
    }
    $l92:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
}

