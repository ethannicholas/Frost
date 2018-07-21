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
typedef panda$core$Int64 (*$fn71)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn75)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn94)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn105)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn114)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn118)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 135, 8418565472397904326, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$core$Int64$init$builtin_int64(&$tmp18, 5);
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
    panda$core$Panda$unref$panda$core$Object$Q($tmp20);
    {
        $tmp26 = self->methods;
        panda$collections$ImmutableArray* $tmp29 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp29, p_methods);
        $tmp28 = $tmp29;
        $tmp27 = $tmp28;
        self->methods = $tmp27;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
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
    panda$collections$Iterator* Iter$21$1382 = NULL;
    panda$collections$Iterator* $tmp83;
    panda$collections$Iterator* $tmp84;
    org$pandalanguage$pandac$MethodDecl* m100 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp101;
    panda$core$Object* $tmp102;
    panda$core$String* $tmp107;
    panda$core$Bit $returnValue111;
    int $tmp32;
    {
        panda$collections$HashSet* $tmp36 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp36);
        $tmp35 = $tmp36;
        $tmp34 = $tmp35;
        sigs33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
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
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp60);
                        panda$core$String* $tmp66 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m58);
                        $tmp65 = $tmp66;
                        panda$collections$HashSet$add$panda$collections$HashSet$T(sigs33, ((panda$collections$Key*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
                    }
                    $tmp57 = -1;
                    goto $l55;
                    $l55:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m58));
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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$16$940));
            Iter$16$940 = NULL;
            switch ($tmp39) {
                case -1: goto $l68;
            }
            $l68:;
        }
        ITable* $tmp69 = ((panda$collections$CollectionView*) sigs33)->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        panda$core$Int64 $tmp72 = $tmp70(((panda$collections$CollectionView*) sigs33));
        ITable* $tmp73 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
        while ($tmp73->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp73 = $tmp73->next;
        }
        $fn75 $tmp74 = $tmp73->methods[0];
        panda$core$Int64 $tmp76 = $tmp74(((panda$collections$CollectionView*) p_methods));
        panda$core$Bit $tmp77 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp72, $tmp76);
        if ($tmp77.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s78);
            {
                int $tmp81;
                {
                    ITable* $tmp85 = ((panda$collections$Iterable*) p_methods)->$class->itable;
                    while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp85 = $tmp85->next;
                    }
                    $fn87 $tmp86 = $tmp85->methods[0];
                    panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) p_methods));
                    $tmp84 = $tmp88;
                    $tmp83 = $tmp84;
                    Iter$21$1382 = $tmp83;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
                    $l89:;
                    ITable* $tmp92 = Iter$21$1382->$class->itable;
                    while ($tmp92->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp92 = $tmp92->next;
                    }
                    $fn94 $tmp93 = $tmp92->methods[0];
                    panda$core$Bit $tmp95 = $tmp93(Iter$21$1382);
                    panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
                    bool $tmp91 = $tmp96.value;
                    if (!$tmp91) goto $l90;
                    {
                        int $tmp99;
                        {
                            ITable* $tmp103 = Iter$21$1382->$class->itable;
                            while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp103 = $tmp103->next;
                            }
                            $fn105 $tmp104 = $tmp103->methods[1];
                            panda$core$Object* $tmp106 = $tmp104(Iter$21$1382);
                            $tmp102 = $tmp106;
                            $tmp101 = ((org$pandalanguage$pandac$MethodDecl*) $tmp102);
                            m100 = $tmp101;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp102);
                            panda$core$String* $tmp108 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(m100);
                            $tmp107 = $tmp108;
                            panda$io$Console$printLine$panda$core$String($tmp107);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
                        }
                        $tmp99 = -1;
                        goto $l97;
                        $l97:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m100));
                        m100 = NULL;
                        switch ($tmp99) {
                            case -1: goto $l109;
                        }
                        $l109:;
                    }
                    goto $l89;
                    $l90:;
                }
                $tmp81 = -1;
                goto $l79;
                $l79:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$21$1382));
                Iter$21$1382 = NULL;
                switch ($tmp81) {
                    case -1: goto $l110;
                }
                $l110:;
            }
        }
        }
        ITable* $tmp112 = ((panda$collections$CollectionView*) sigs33)->$class->itable;
        while ($tmp112->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp112 = $tmp112->next;
        }
        $fn114 $tmp113 = $tmp112->methods[0];
        panda$core$Int64 $tmp115 = $tmp113(((panda$collections$CollectionView*) sigs33));
        ITable* $tmp116 = ((panda$collections$CollectionView*) p_methods)->$class->itable;
        while ($tmp116->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp116 = $tmp116->next;
        }
        $fn118 $tmp117 = $tmp116->methods[0];
        panda$core$Int64 $tmp119 = $tmp117(((panda$collections$CollectionView*) p_methods));
        panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp115, $tmp119);
        $returnValue111 = $tmp120;
        $tmp32 = 0;
        goto $l30;
        $l121:;
        return $returnValue111;
    }
    $l30:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) sigs33));
    sigs33 = NULL;
    switch ($tmp32) {
        case 0: goto $l121;
    }
    $l123:;
    if (false) goto $l124; else goto $l125;
    $l125:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, (panda$core$Int64) { 14 }, &$s127);
    abort();
    $l124:;
    abort();
}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* self) {
    int $tmp130;
    {
    }
    $tmp130 = -1;
    goto $l128;
    $l128:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp130) {
        case -1: goto $l131;
    }
    $l131:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->methods));
}





