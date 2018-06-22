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
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/HashSet.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Key.h"
#include "panda/io/Console.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Methods$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn45)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn52)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn63)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn72)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn84)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn91)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn112)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 135, 8418565472397904326, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods) {
    panda$core$Int64 $tmp7;
    org$pandalanguage$pandac$Symbol$Kind $tmp17;
    panda$core$Int64 $tmp18;
    org$pandalanguage$pandac$Position $tmp19;
    panda$core$Object* $tmp20;
    panda$core$Int64 $tmp21;
    panda$collections$ImmutableArray* $tmp26;
    panda$collections$ImmutableArray* $tmp27;
    panda$collections$ImmutableArray* $tmp28;
    self->name = NULL;
    self->methods = NULL;
    ITable* $tmp3 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) p_methods));
    panda$core$Int64$init$builtin_int64(&$tmp7, 0);
    panda$core$Bit $tmp8 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6, $tmp7);
    bool $tmp2 = $tmp8.value;
    if (!$tmp2) goto $l9;
    panda$core$Bit $tmp10 = org$pandalanguage$pandac$Methods$containsDuplicates$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$R$panda$core$Bit(p_methods);
    panda$core$Bit $tmp11 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp10);
    $tmp2 = $tmp11.value;
    $l9:;
    panda$core$Bit $tmp12 = { $tmp2 };
    if ($tmp12.value) goto $l13; else goto $l14;
    $l14:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, (panda$core$Int64) { 8 }, &$s16);
    abort();
    $l13:;
    panda$core$Int64$init$builtin_int64(&$tmp18, 4);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp17, $tmp18);
    org$pandalanguage$pandac$Position$init(&$tmp19);
    panda$core$Int64$init$builtin_int64(&$tmp21, 0);
    ITable* $tmp22 = p_methods->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Object* $tmp25 = $tmp23(p_methods, $tmp21);
    $tmp20 = $tmp25;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp17, $tmp19, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp20))->name);
    panda$core$Panda$unref$panda$core$Object($tmp20);
    {
        $tmp26 = self->methods;
        panda$collections$ImmutableArray* $tmp29 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp29, p_methods);
        $tmp28 = $tmp29;
        $tmp27 = $tmp28;
        self->methods = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
}
panda$core$Bit org$pandalanguage$pandac$Methods$containsDuplicates$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$R$panda$core$Bit(panda$collections$ListView* p_methods) {
    panda$collections$HashSet* sigs33 = NULL;
    panda$collections$HashSet* $tmp34;
    panda$collections$HashSet* $tmp35;
    panda$collections$Iterator* Iter$16$940 = NULL;
    panda$collections$Iterator* $tmp41;
    panda$collections$Iterator* $tmp42;
    org$pandalanguage$pandac$MethodDecl* m58 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp59;
    panda$core$Object* $tmp60;
    panda$core$String* $tmp65;
    panda$collections$Iterator* Iter$21$1379 = NULL;
    panda$collections$Iterator* $tmp80;
    panda$collections$Iterator* $tmp81;
    org$pandalanguage$pandac$MethodDecl* m97 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp98;
    panda$core$Object* $tmp99;
    panda$core$String* $tmp104;
    panda$core$Bit $returnValue108;
    int $tmp32;
    {
        panda$collections$HashSet* $tmp36 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp36);
        $tmp35 = $tmp36;
        $tmp34 = $tmp35;
        sigs33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        {
            int $tmp39;
            {
                ITable* $tmp43 = ((panda$collections$Iterable*) p_methods)->$class->itable;
                while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp43 = $tmp43->next;
                }
                $fn45 $tmp44 = $tmp43->methods[0];
                panda$collections$Iterator* $tmp46 = $tmp44(((panda$collections$Iterable*) p_methods));
                $tmp42 = $tmp46;
                $tmp41 = $tmp42;
                Iter$16$940 = $tmp41;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
                $l47:;
                ITable* $tmp50 = Iter$16$940->$class->itable;
                while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp50 = $tmp50->next;
                }
                $fn52 $tmp51 = $tmp50->methods[0];
                panda$core$Bit $tmp53 = $tmp51(Iter$16$940);
                panda$core$Bit $tmp54 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp53);
                bool $tmp49 = $tmp54.value;
                if (!$tmp49) goto $l48;
                {
                    int $tmp57;
                    {
                        ITable* $tmp61 = Iter$16$940->$class->itable;
                        while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp61 = $tmp61->next;
                        }
                        $fn63 $tmp62 = $tmp61->methods[1];
                        panda$core$Object* $tmp64 = $tmp62(Iter$16$940);
                        $tmp60 = $tmp64;
                        $tmp59 = ((org$pandalanguage$pandac$MethodDecl*) $tmp60);
                        m58 = $tmp59;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
                        panda$core$Panda$unref$panda$core$Object($tmp60);
                        panda$core$String* $tmp66 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m58);
                        $tmp65 = $tmp66;
                        panda$collections$HashSet$add$panda$collections$HashSet$T(sigs33, ((panda$collections$Key*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                    }
                    $tmp57 = -1;
                    goto $l55;
                    $l55:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m58));
                    m58 = NULL;
                    switch ($tmp57) {
                        case -1: goto $l67;
                    }
                    $l67:;
                }
                goto $l47;
                $l48:;
            }
            $tmp39 = -1;
            goto $l37;
            $l37:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$16$940));
            Iter$16$940 = NULL;
            switch ($tmp39) {
                case -1: goto $l68;
            }
            $l68:;
        }
        panda$core$Int64 $tmp69 = panda$collections$HashSet$get_count$R$panda$core$Int64(sigs33);
        ITable* $tmp70 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
        while ($tmp70->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp70 = $tmp70->next;
        }
        $fn72 $tmp71 = $tmp70->methods[0];
        panda$core$Int64 $tmp73 = $tmp71(((panda$collections$CollectionView*) p_methods));
        panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp73);
        if ($tmp74.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s75);
            {
                int $tmp78;
                {
                    ITable* $tmp82 = ((panda$collections$Iterable*) p_methods)->$class->itable;
                    while ($tmp82->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp82 = $tmp82->next;
                    }
                    $fn84 $tmp83 = $tmp82->methods[0];
                    panda$collections$Iterator* $tmp85 = $tmp83(((panda$collections$Iterable*) p_methods));
                    $tmp81 = $tmp85;
                    $tmp80 = $tmp81;
                    Iter$21$1379 = $tmp80;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
                    $l86:;
                    ITable* $tmp89 = Iter$21$1379->$class->itable;
                    while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp89 = $tmp89->next;
                    }
                    $fn91 $tmp90 = $tmp89->methods[0];
                    panda$core$Bit $tmp92 = $tmp90(Iter$21$1379);
                    panda$core$Bit $tmp93 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp92);
                    bool $tmp88 = $tmp93.value;
                    if (!$tmp88) goto $l87;
                    {
                        int $tmp96;
                        {
                            ITable* $tmp100 = Iter$21$1379->$class->itable;
                            while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp100 = $tmp100->next;
                            }
                            $fn102 $tmp101 = $tmp100->methods[1];
                            panda$core$Object* $tmp103 = $tmp101(Iter$21$1379);
                            $tmp99 = $tmp103;
                            $tmp98 = ((org$pandalanguage$pandac$MethodDecl*) $tmp99);
                            m97 = $tmp98;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                            panda$core$Panda$unref$panda$core$Object($tmp99);
                            panda$core$String* $tmp105 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(m97);
                            $tmp104 = $tmp105;
                            panda$io$Console$printLine$panda$core$String($tmp104);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
                        }
                        $tmp96 = -1;
                        goto $l94;
                        $l94:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m97));
                        m97 = NULL;
                        switch ($tmp96) {
                            case -1: goto $l106;
                        }
                        $l106:;
                    }
                    goto $l86;
                    $l87:;
                }
                $tmp78 = -1;
                goto $l76;
                $l76:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$21$1379));
                Iter$21$1379 = NULL;
                switch ($tmp78) {
                    case -1: goto $l107;
                }
                $l107:;
            }
        }
        }
        panda$core$Int64 $tmp109 = panda$collections$HashSet$get_count$R$panda$core$Int64(sigs33);
        ITable* $tmp110 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
        while ($tmp110->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp110 = $tmp110->next;
        }
        $fn112 $tmp111 = $tmp110->methods[0];
        panda$core$Int64 $tmp113 = $tmp111(((panda$collections$CollectionView*) p_methods));
        panda$core$Bit $tmp114 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp109, $tmp113);
        $returnValue108 = $tmp114;
        $tmp32 = 0;
        goto $l30;
        $l115:;
        return $returnValue108;
    }
    $l30:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sigs33));
    sigs33 = NULL;
    switch ($tmp32) {
        case 0: goto $l115;
    }
    $l117:;
    abort();
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    int $tmp120;
    {
    }
    $tmp120 = -1;
    goto $l118;
    $l118:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp120) {
        case -1: goto $l121;
    }
    $l121:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->methods));
}





