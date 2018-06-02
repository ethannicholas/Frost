#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$collections$Iterator* (*$fn17)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn24)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn38)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn39)(panda$core$Object*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn65)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn79)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn88)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn91)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn92)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn135)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn136)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn170)(panda$collections$Iterator*);
typedef void (*$fn172)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn173)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };

panda$collections$CollectionView* panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT(panda$collections$CollectionView* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Array* result5 = NULL;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    panda$collections$Iterator* Iter$10$912 = NULL;
    panda$collections$Iterator* $tmp13;
    panda$collections$Iterator* $tmp14;
    panda$core$Object* v30 = NULL;
    panda$core$Object* $tmp31;
    panda$core$Object* $tmp32;
    panda$core$Bit $tmp37;
    panda$collections$CollectionView* $returnValue42;
    panda$collections$CollectionView* $tmp43;
    int $tmp4;
    {
        panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp8);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        result5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        {
            int $tmp11;
            {
                ITable* $tmp15 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp15 = $tmp15->next;
                }
                $fn17 $tmp16 = $tmp15->methods[0];
                panda$collections$Iterator* $tmp18 = $tmp16(((panda$collections$Iterable*) self));
                $tmp14 = $tmp18;
                $tmp13 = $tmp14;
                Iter$10$912 = $tmp13;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
                $l19:;
                ITable* $tmp22 = Iter$10$912->$class->itable;
                while ($tmp22->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp22 = $tmp22->next;
                }
                $fn24 $tmp23 = $tmp22->methods[0];
                panda$core$Bit $tmp25 = $tmp23(Iter$10$912);
                panda$core$Bit $tmp26 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp25);
                bool $tmp21 = $tmp26.value;
                if (!$tmp21) goto $l20;
                {
                    int $tmp29;
                    {
                        ITable* $tmp33 = Iter$10$912->$class->itable;
                        while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp33 = $tmp33->next;
                        }
                        $fn35 $tmp34 = $tmp33->methods[1];
                        panda$core$Object* $tmp36 = $tmp34(Iter$10$912);
                        $tmp32 = $tmp36;
                        $tmp31 = $tmp32;
                        v30 = $tmp31;
                        panda$core$Panda$ref$panda$core$Object($tmp31);
                        panda$core$Panda$unref$panda$core$Object($tmp32);
                        if (p_predicate->target) {
                            $tmp37 = (($fn38) p_predicate->pointer)(p_predicate->target, v30);
                        } else {
                            $tmp37 = (($fn39) p_predicate->pointer)(v30);
                        }
                        if ($tmp37.value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result5, v30);
                        }
                        }
                    }
                    $tmp29 = -1;
                    goto $l27;
                    $l27:;
                    panda$core$Panda$unref$panda$core$Object(v30);
                    v30 = NULL;
                    switch ($tmp29) {
                        case -1: goto $l40;
                    }
                    $l40:;
                }
                goto $l19;
                $l20:;
            }
            $tmp11 = -1;
            goto $l9;
            $l9:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$10$912));
            Iter$10$912 = NULL;
            switch ($tmp11) {
                case -1: goto $l41;
            }
            $l41:;
        }
        $tmp43 = ((panda$collections$CollectionView*) result5);
        $returnValue42 = $tmp43;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
        $tmp4 = 0;
        goto $l2;
        $l44:;
        return $returnValue42;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l44;
    }
    $l46:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f) {
    panda$core$Int64 $tmp51;
    panda$collections$Iterator* i60 = NULL;
    panda$collections$Iterator* $tmp61;
    panda$collections$Iterator* $tmp62;
    panda$core$Object* result67 = NULL;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp69;
    panda$core$Object* $tmp82;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp84;
    panda$core$Object* $tmp85;
    panda$core$Object* $tmp90;
    panda$core$Object* $returnValue93;
    panda$core$Object* $tmp94;
    ITable* $tmp47 = self->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[0];
    panda$core$Int64 $tmp50 = $tmp48(self);
    panda$core$Int64$init$builtin_int64(&$tmp51, 0);
    panda$core$Bit $tmp52 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp50, $tmp51);
    if ($tmp52.value) goto $l53; else goto $l54;
    $l54:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, (panda$core$Int64) { 19 }, &$s56);
    abort();
    $l53:;
    int $tmp59;
    {
        ITable* $tmp63 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp63 = $tmp63->next;
        }
        $fn65 $tmp64 = $tmp63->methods[0];
        panda$collections$Iterator* $tmp66 = $tmp64(((panda$collections$Iterable*) self));
        $tmp62 = $tmp66;
        $tmp61 = $tmp62;
        i60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        ITable* $tmp70 = i60->$class->itable;
        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp70 = $tmp70->next;
        }
        $fn72 $tmp71 = $tmp70->methods[1];
        panda$core$Object* $tmp73 = $tmp71(i60);
        $tmp69 = $tmp73;
        $tmp68 = $tmp69;
        result67 = $tmp68;
        panda$core$Panda$ref$panda$core$Object($tmp68);
        panda$core$Panda$unref$panda$core$Object($tmp69);
        $l74:;
        ITable* $tmp77 = i60->$class->itable;
        while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp77 = $tmp77->next;
        }
        $fn79 $tmp78 = $tmp77->methods[0];
        panda$core$Bit $tmp80 = $tmp78(i60);
        panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
        bool $tmp76 = $tmp81.value;
        if (!$tmp76) goto $l75;
        {
            {
                $tmp82 = result67;
                ITable* $tmp86 = i60->$class->itable;
                while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp86 = $tmp86->next;
                }
                $fn88 $tmp87 = $tmp86->methods[1];
                panda$core$Object* $tmp89 = $tmp87(i60);
                $tmp85 = $tmp89;
                if (p_f->target) {
                    $tmp90 = (($fn91) p_f->pointer)(p_f->target, result67, $tmp85);
                } else {
                    $tmp90 = (($fn92) p_f->pointer)(result67, $tmp85);
                }
                $tmp84 = $tmp90;
                $tmp83 = $tmp84;
                result67 = $tmp83;
                panda$core$Panda$ref$panda$core$Object($tmp83);
                panda$core$Panda$unref$panda$core$Object($tmp84);
                panda$core$Panda$unref$panda$core$Object($tmp85);
                panda$core$Panda$unref$panda$core$Object($tmp82);
            }
        }
        goto $l74;
        $l75:;
        $tmp94 = result67;
        $returnValue93 = $tmp94;
        panda$core$Panda$ref$panda$core$Object($tmp94);
        $tmp59 = 0;
        goto $l57;
        $l95:;
        return $returnValue93;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(result67);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i60));
    i60 = NULL;
    result67 = NULL;
    switch ($tmp59) {
        case 0: goto $l95;
    }
    $l97:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result101 = NULL;
    panda$core$Object* $tmp102;
    panda$collections$Iterator* Iter$30$9106 = NULL;
    panda$collections$Iterator* $tmp107;
    panda$collections$Iterator* $tmp108;
    panda$core$Object* v124 = NULL;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp126;
    panda$core$Object* $tmp131;
    panda$core$Object* $tmp132;
    panda$core$Object* $tmp133;
    panda$core$Object* $tmp134;
    panda$core$Object* $returnValue139;
    panda$core$Object* $tmp140;
    int $tmp100;
    {
        $tmp102 = p_start;
        result101 = $tmp102;
        panda$core$Panda$ref$panda$core$Object($tmp102);
        {
            int $tmp105;
            {
                ITable* $tmp109 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp109 = $tmp109->next;
                }
                $fn111 $tmp110 = $tmp109->methods[0];
                panda$collections$Iterator* $tmp112 = $tmp110(((panda$collections$Iterable*) self));
                $tmp108 = $tmp112;
                $tmp107 = $tmp108;
                Iter$30$9106 = $tmp107;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
                $l113:;
                ITable* $tmp116 = Iter$30$9106->$class->itable;
                while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp116 = $tmp116->next;
                }
                $fn118 $tmp117 = $tmp116->methods[0];
                panda$core$Bit $tmp119 = $tmp117(Iter$30$9106);
                panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp119);
                bool $tmp115 = $tmp120.value;
                if (!$tmp115) goto $l114;
                {
                    int $tmp123;
                    {
                        ITable* $tmp127 = Iter$30$9106->$class->itable;
                        while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp127 = $tmp127->next;
                        }
                        $fn129 $tmp128 = $tmp127->methods[1];
                        panda$core$Object* $tmp130 = $tmp128(Iter$30$9106);
                        $tmp126 = $tmp130;
                        $tmp125 = $tmp126;
                        v124 = $tmp125;
                        panda$core$Panda$ref$panda$core$Object($tmp125);
                        panda$core$Panda$unref$panda$core$Object($tmp126);
                        {
                            $tmp131 = result101;
                            if (p_f->target) {
                                $tmp134 = (($fn135) p_f->pointer)(p_f->target, result101, v124);
                            } else {
                                $tmp134 = (($fn136) p_f->pointer)(result101, v124);
                            }
                            $tmp133 = $tmp134;
                            $tmp132 = $tmp133;
                            result101 = $tmp132;
                            panda$core$Panda$ref$panda$core$Object($tmp132);
                            panda$core$Panda$unref$panda$core$Object($tmp133);
                            panda$core$Panda$unref$panda$core$Object($tmp131);
                        }
                    }
                    $tmp123 = -1;
                    goto $l121;
                    $l121:;
                    panda$core$Panda$unref$panda$core$Object(v124);
                    v124 = NULL;
                    switch ($tmp123) {
                        case -1: goto $l137;
                    }
                    $l137:;
                }
                goto $l113;
                $l114:;
            }
            $tmp105 = -1;
            goto $l103;
            $l103:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$9106));
            Iter$30$9106 = NULL;
            switch ($tmp105) {
                case -1: goto $l138;
            }
            $l138:;
        }
        $tmp140 = result101;
        $returnValue139 = $tmp140;
        panda$core$Panda$ref$panda$core$Object($tmp140);
        $tmp100 = 0;
        goto $l98;
        $l141:;
        return $returnValue139;
    }
    $l98:;
    panda$core$Panda$unref$panda$core$Object(result101);
    result101 = NULL;
    switch ($tmp100) {
        case 0: goto $l141;
    }
    $l143:;
    abort();
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$37$9147 = NULL;
    panda$collections$Iterator* $tmp148;
    panda$collections$Iterator* $tmp149;
    panda$core$Object* v165 = NULL;
    panda$core$Object* $tmp166;
    panda$core$Object* $tmp167;
    {
        int $tmp146;
        {
            ITable* $tmp150 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp150 = $tmp150->next;
            }
            $fn152 $tmp151 = $tmp150->methods[0];
            panda$collections$Iterator* $tmp153 = $tmp151(((panda$collections$Iterable*) self));
            $tmp149 = $tmp153;
            $tmp148 = $tmp149;
            Iter$37$9147 = $tmp148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
            $l154:;
            ITable* $tmp157 = Iter$37$9147->$class->itable;
            while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp157 = $tmp157->next;
            }
            $fn159 $tmp158 = $tmp157->methods[0];
            panda$core$Bit $tmp160 = $tmp158(Iter$37$9147);
            panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
            bool $tmp156 = $tmp161.value;
            if (!$tmp156) goto $l155;
            {
                int $tmp164;
                {
                    ITable* $tmp168 = Iter$37$9147->$class->itable;
                    while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp168 = $tmp168->next;
                    }
                    $fn170 $tmp169 = $tmp168->methods[1];
                    panda$core$Object* $tmp171 = $tmp169(Iter$37$9147);
                    $tmp167 = $tmp171;
                    $tmp166 = $tmp167;
                    v165 = $tmp166;
                    panda$core$Panda$ref$panda$core$Object($tmp166);
                    panda$core$Panda$unref$panda$core$Object($tmp167);
                    if (p_m->target) {
                        (($fn172) p_m->pointer)(p_m->target, v165);
                    } else {
                        (($fn173) p_m->pointer)(v165);
                    }
                }
                $tmp164 = -1;
                goto $l162;
                $l162:;
                panda$core$Panda$unref$panda$core$Object(v165);
                v165 = NULL;
                switch ($tmp164) {
                    case -1: goto $l174;
                }
                $l174:;
            }
            goto $l154;
            $l155:;
        }
        $tmp146 = -1;
        goto $l144;
        $l144:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$37$9147));
        Iter$37$9147 = NULL;
        switch ($tmp146) {
            case -1: goto $l175;
        }
        $l175:;
    }
}





