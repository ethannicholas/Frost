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
typedef panda$collections$Iterator* (*$fn64)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn71)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn87)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn91)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn134)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn135)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn151)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn169)(panda$collections$Iterator*);
typedef void (*$fn171)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn172)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };

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
    panda$collections$Iterator* i59 = NULL;
    panda$collections$Iterator* $tmp60;
    panda$collections$Iterator* $tmp61;
    panda$core$Object* result66 = NULL;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp68;
    panda$core$Object* $tmp81;
    panda$core$Object* $tmp82;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp84;
    panda$core$Object* $tmp89;
    panda$core$Object* $returnValue92;
    panda$core$Object* $tmp93;
    ITable* $tmp47 = self->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[0];
    panda$core$Int64 $tmp50 = $tmp48(self);
    panda$core$Bit $tmp51 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp50, ((panda$core$Int64) { 0 }));
    if ($tmp51.value) goto $l52; else goto $l53;
    $l53:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s54, (panda$core$Int64) { 19 }, &$s55);
    abort();
    $l52:;
    int $tmp58;
    {
        ITable* $tmp62 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$collections$Iterator* $tmp65 = $tmp63(((panda$collections$Iterable*) self));
        $tmp61 = $tmp65;
        $tmp60 = $tmp61;
        i59 = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        ITable* $tmp69 = i59->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[1];
        panda$core$Object* $tmp72 = $tmp70(i59);
        $tmp68 = $tmp72;
        $tmp67 = $tmp68;
        result66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object($tmp67);
        panda$core$Panda$unref$panda$core$Object($tmp68);
        $l73:;
        ITable* $tmp76 = i59->$class->itable;
        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp76 = $tmp76->next;
        }
        $fn78 $tmp77 = $tmp76->methods[0];
        panda$core$Bit $tmp79 = $tmp77(i59);
        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
        bool $tmp75 = $tmp80.value;
        if (!$tmp75) goto $l74;
        {
            {
                $tmp81 = result66;
                ITable* $tmp85 = i59->$class->itable;
                while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp85 = $tmp85->next;
                }
                $fn87 $tmp86 = $tmp85->methods[1];
                panda$core$Object* $tmp88 = $tmp86(i59);
                $tmp84 = $tmp88;
                if (p_f->target) {
                    $tmp89 = (($fn90) p_f->pointer)(p_f->target, result66, $tmp84);
                } else {
                    $tmp89 = (($fn91) p_f->pointer)(result66, $tmp84);
                }
                $tmp83 = $tmp89;
                $tmp82 = $tmp83;
                result66 = $tmp82;
                panda$core$Panda$ref$panda$core$Object($tmp82);
                panda$core$Panda$unref$panda$core$Object($tmp83);
                panda$core$Panda$unref$panda$core$Object($tmp84);
                panda$core$Panda$unref$panda$core$Object($tmp81);
            }
        }
        goto $l73;
        $l74:;
        $tmp93 = result66;
        $returnValue92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object($tmp93);
        $tmp58 = 0;
        goto $l56;
        $l94:;
        return $returnValue92;
    }
    $l56:;
    panda$core$Panda$unref$panda$core$Object(result66);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i59));
    i59 = NULL;
    result66 = NULL;
    switch ($tmp58) {
        case 0: goto $l94;
    }
    $l96:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result100 = NULL;
    panda$core$Object* $tmp101;
    panda$collections$Iterator* Iter$30$9105 = NULL;
    panda$collections$Iterator* $tmp106;
    panda$collections$Iterator* $tmp107;
    panda$core$Object* v123 = NULL;
    panda$core$Object* $tmp124;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp130;
    panda$core$Object* $tmp131;
    panda$core$Object* $tmp132;
    panda$core$Object* $tmp133;
    panda$core$Object* $returnValue138;
    panda$core$Object* $tmp139;
    int $tmp99;
    {
        $tmp101 = p_start;
        result100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object($tmp101);
        {
            int $tmp104;
            {
                ITable* $tmp108 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp108 = $tmp108->next;
                }
                $fn110 $tmp109 = $tmp108->methods[0];
                panda$collections$Iterator* $tmp111 = $tmp109(((panda$collections$Iterable*) self));
                $tmp107 = $tmp111;
                $tmp106 = $tmp107;
                Iter$30$9105 = $tmp106;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
                $l112:;
                ITable* $tmp115 = Iter$30$9105->$class->itable;
                while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp115 = $tmp115->next;
                }
                $fn117 $tmp116 = $tmp115->methods[0];
                panda$core$Bit $tmp118 = $tmp116(Iter$30$9105);
                panda$core$Bit $tmp119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp118);
                bool $tmp114 = $tmp119.value;
                if (!$tmp114) goto $l113;
                {
                    int $tmp122;
                    {
                        ITable* $tmp126 = Iter$30$9105->$class->itable;
                        while ($tmp126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp126 = $tmp126->next;
                        }
                        $fn128 $tmp127 = $tmp126->methods[1];
                        panda$core$Object* $tmp129 = $tmp127(Iter$30$9105);
                        $tmp125 = $tmp129;
                        $tmp124 = $tmp125;
                        v123 = $tmp124;
                        panda$core$Panda$ref$panda$core$Object($tmp124);
                        panda$core$Panda$unref$panda$core$Object($tmp125);
                        {
                            $tmp130 = result100;
                            if (p_f->target) {
                                $tmp133 = (($fn134) p_f->pointer)(p_f->target, result100, v123);
                            } else {
                                $tmp133 = (($fn135) p_f->pointer)(result100, v123);
                            }
                            $tmp132 = $tmp133;
                            $tmp131 = $tmp132;
                            result100 = $tmp131;
                            panda$core$Panda$ref$panda$core$Object($tmp131);
                            panda$core$Panda$unref$panda$core$Object($tmp132);
                            panda$core$Panda$unref$panda$core$Object($tmp130);
                        }
                    }
                    $tmp122 = -1;
                    goto $l120;
                    $l120:;
                    panda$core$Panda$unref$panda$core$Object(v123);
                    v123 = NULL;
                    switch ($tmp122) {
                        case -1: goto $l136;
                    }
                    $l136:;
                }
                goto $l112;
                $l113:;
            }
            $tmp104 = -1;
            goto $l102;
            $l102:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$9105));
            Iter$30$9105 = NULL;
            switch ($tmp104) {
                case -1: goto $l137;
            }
            $l137:;
        }
        $tmp139 = result100;
        $returnValue138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object($tmp139);
        $tmp99 = 0;
        goto $l97;
        $l140:;
        return $returnValue138;
    }
    $l97:;
    panda$core$Panda$unref$panda$core$Object(result100);
    result100 = NULL;
    switch ($tmp99) {
        case 0: goto $l140;
    }
    $l142:;
    abort();
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$37$9146 = NULL;
    panda$collections$Iterator* $tmp147;
    panda$collections$Iterator* $tmp148;
    panda$core$Object* v164 = NULL;
    panda$core$Object* $tmp165;
    panda$core$Object* $tmp166;
    {
        int $tmp145;
        {
            ITable* $tmp149 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp149 = $tmp149->next;
            }
            $fn151 $tmp150 = $tmp149->methods[0];
            panda$collections$Iterator* $tmp152 = $tmp150(((panda$collections$Iterable*) self));
            $tmp148 = $tmp152;
            $tmp147 = $tmp148;
            Iter$37$9146 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
            $l153:;
            ITable* $tmp156 = Iter$37$9146->$class->itable;
            while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp156 = $tmp156->next;
            }
            $fn158 $tmp157 = $tmp156->methods[0];
            panda$core$Bit $tmp159 = $tmp157(Iter$37$9146);
            panda$core$Bit $tmp160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp159);
            bool $tmp155 = $tmp160.value;
            if (!$tmp155) goto $l154;
            {
                int $tmp163;
                {
                    ITable* $tmp167 = Iter$37$9146->$class->itable;
                    while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp167 = $tmp167->next;
                    }
                    $fn169 $tmp168 = $tmp167->methods[1];
                    panda$core$Object* $tmp170 = $tmp168(Iter$37$9146);
                    $tmp166 = $tmp170;
                    $tmp165 = $tmp166;
                    v164 = $tmp165;
                    panda$core$Panda$ref$panda$core$Object($tmp165);
                    panda$core$Panda$unref$panda$core$Object($tmp166);
                    if (p_m->target) {
                        (($fn171) p_m->pointer)(p_m->target, v164);
                    } else {
                        (($fn172) p_m->pointer)(v164);
                    }
                }
                $tmp163 = -1;
                goto $l161;
                $l161:;
                panda$core$Panda$unref$panda$core$Object(v164);
                v164 = NULL;
                switch ($tmp163) {
                    case -1: goto $l173;
                }
                $l173:;
            }
            goto $l153;
            $l154:;
        }
        $tmp145 = -1;
        goto $l143;
        $l143:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$37$9146));
        Iter$37$9146 = NULL;
        switch ($tmp145) {
            case -1: goto $l174;
        }
        $l174:;
    }
}





