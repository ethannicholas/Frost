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
typedef panda$collections$Iterator* (*$fn60)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn67)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn86)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn87)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn106)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn130)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn131)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef void (*$fn167)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn168)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };

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
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f) {
    panda$collections$Iterator* i55 = NULL;
    panda$collections$Iterator* $tmp56;
    panda$collections$Iterator* $tmp57;
    panda$core$Object* result62 = NULL;
    panda$core$Object* $tmp63;
    panda$core$Object* $tmp64;
    panda$core$Object* $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Object* $tmp80;
    panda$core$Object* $tmp85;
    panda$core$Object* $returnValue88;
    panda$core$Object* $tmp89;
    ITable* $tmp47 = self->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[0];
    panda$core$Int64 $tmp50 = $tmp48(self);
    panda$core$Bit $tmp51 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp50, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp51.value);
    int $tmp54;
    {
        ITable* $tmp58 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp58 = $tmp58->next;
        }
        $fn60 $tmp59 = $tmp58->methods[0];
        panda$collections$Iterator* $tmp61 = $tmp59(((panda$collections$Iterable*) self));
        $tmp57 = $tmp61;
        $tmp56 = $tmp57;
        i55 = $tmp56;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
        ITable* $tmp65 = i55->$class->itable;
        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp65 = $tmp65->next;
        }
        $fn67 $tmp66 = $tmp65->methods[1];
        panda$core$Object* $tmp68 = $tmp66(i55);
        $tmp64 = $tmp68;
        $tmp63 = $tmp64;
        result62 = $tmp63;
        panda$core$Panda$ref$panda$core$Object($tmp63);
        panda$core$Panda$unref$panda$core$Object($tmp64);
        $l69:;
        ITable* $tmp72 = i55->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[0];
        panda$core$Bit $tmp75 = $tmp73(i55);
        panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp75);
        bool $tmp71 = $tmp76.value;
        if (!$tmp71) goto $l70;
        {
            {
                $tmp77 = result62;
                ITable* $tmp81 = i55->$class->itable;
                while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp81 = $tmp81->next;
                }
                $fn83 $tmp82 = $tmp81->methods[1];
                panda$core$Object* $tmp84 = $tmp82(i55);
                $tmp80 = $tmp84;
                if (p_f->target) {
                    $tmp85 = (($fn86) p_f->pointer)(p_f->target, result62, $tmp80);
                } else {
                    $tmp85 = (($fn87) p_f->pointer)(result62, $tmp80);
                }
                $tmp79 = $tmp85;
                $tmp78 = $tmp79;
                result62 = $tmp78;
                panda$core$Panda$ref$panda$core$Object($tmp78);
                panda$core$Panda$unref$panda$core$Object($tmp79);
                panda$core$Panda$unref$panda$core$Object($tmp80);
                panda$core$Panda$unref$panda$core$Object($tmp77);
            }
        }
        goto $l69;
        $l70:;
        $tmp89 = result62;
        $returnValue88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object($tmp89);
        $tmp54 = 0;
        goto $l52;
        $l90:;
        return $returnValue88;
    }
    $l52:;
    panda$core$Panda$unref$panda$core$Object(result62);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i55));
    i55 = NULL;
    result62 = NULL;
    switch ($tmp54) {
        case 0: goto $l90;
    }
    $l92:;
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result96 = NULL;
    panda$core$Object* $tmp97;
    panda$collections$Iterator* Iter$30$9101 = NULL;
    panda$collections$Iterator* $tmp102;
    panda$collections$Iterator* $tmp103;
    panda$core$Object* v119 = NULL;
    panda$core$Object* $tmp120;
    panda$core$Object* $tmp121;
    panda$core$Object* $tmp126;
    panda$core$Object* $tmp127;
    panda$core$Object* $tmp128;
    panda$core$Object* $tmp129;
    panda$core$Object* $returnValue134;
    panda$core$Object* $tmp135;
    int $tmp95;
    {
        $tmp97 = p_start;
        result96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object($tmp97);
        {
            int $tmp100;
            {
                ITable* $tmp104 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp104 = $tmp104->next;
                }
                $fn106 $tmp105 = $tmp104->methods[0];
                panda$collections$Iterator* $tmp107 = $tmp105(((panda$collections$Iterable*) self));
                $tmp103 = $tmp107;
                $tmp102 = $tmp103;
                Iter$30$9101 = $tmp102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
                $l108:;
                ITable* $tmp111 = Iter$30$9101->$class->itable;
                while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp111 = $tmp111->next;
                }
                $fn113 $tmp112 = $tmp111->methods[0];
                panda$core$Bit $tmp114 = $tmp112(Iter$30$9101);
                panda$core$Bit $tmp115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp114);
                bool $tmp110 = $tmp115.value;
                if (!$tmp110) goto $l109;
                {
                    int $tmp118;
                    {
                        ITable* $tmp122 = Iter$30$9101->$class->itable;
                        while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp122 = $tmp122->next;
                        }
                        $fn124 $tmp123 = $tmp122->methods[1];
                        panda$core$Object* $tmp125 = $tmp123(Iter$30$9101);
                        $tmp121 = $tmp125;
                        $tmp120 = $tmp121;
                        v119 = $tmp120;
                        panda$core$Panda$ref$panda$core$Object($tmp120);
                        panda$core$Panda$unref$panda$core$Object($tmp121);
                        {
                            $tmp126 = result96;
                            if (p_f->target) {
                                $tmp129 = (($fn130) p_f->pointer)(p_f->target, result96, v119);
                            } else {
                                $tmp129 = (($fn131) p_f->pointer)(result96, v119);
                            }
                            $tmp128 = $tmp129;
                            $tmp127 = $tmp128;
                            result96 = $tmp127;
                            panda$core$Panda$ref$panda$core$Object($tmp127);
                            panda$core$Panda$unref$panda$core$Object($tmp128);
                            panda$core$Panda$unref$panda$core$Object($tmp126);
                        }
                    }
                    $tmp118 = -1;
                    goto $l116;
                    $l116:;
                    panda$core$Panda$unref$panda$core$Object(v119);
                    v119 = NULL;
                    switch ($tmp118) {
                        case -1: goto $l132;
                    }
                    $l132:;
                }
                goto $l108;
                $l109:;
            }
            $tmp100 = -1;
            goto $l98;
            $l98:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$9101));
            Iter$30$9101 = NULL;
            switch ($tmp100) {
                case -1: goto $l133;
            }
            $l133:;
        }
        $tmp135 = result96;
        $returnValue134 = $tmp135;
        panda$core$Panda$ref$panda$core$Object($tmp135);
        $tmp95 = 0;
        goto $l93;
        $l136:;
        return $returnValue134;
    }
    $l93:;
    panda$core$Panda$unref$panda$core$Object(result96);
    result96 = NULL;
    switch ($tmp95) {
        case 0: goto $l136;
    }
    $l138:;
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$37$9142 = NULL;
    panda$collections$Iterator* $tmp143;
    panda$collections$Iterator* $tmp144;
    panda$core$Object* v160 = NULL;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp162;
    {
        int $tmp141;
        {
            ITable* $tmp145 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp145 = $tmp145->next;
            }
            $fn147 $tmp146 = $tmp145->methods[0];
            panda$collections$Iterator* $tmp148 = $tmp146(((panda$collections$Iterable*) self));
            $tmp144 = $tmp148;
            $tmp143 = $tmp144;
            Iter$37$9142 = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
            $l149:;
            ITable* $tmp152 = Iter$37$9142->$class->itable;
            while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp152 = $tmp152->next;
            }
            $fn154 $tmp153 = $tmp152->methods[0];
            panda$core$Bit $tmp155 = $tmp153(Iter$37$9142);
            panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
            bool $tmp151 = $tmp156.value;
            if (!$tmp151) goto $l150;
            {
                int $tmp159;
                {
                    ITable* $tmp163 = Iter$37$9142->$class->itable;
                    while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp163 = $tmp163->next;
                    }
                    $fn165 $tmp164 = $tmp163->methods[1];
                    panda$core$Object* $tmp166 = $tmp164(Iter$37$9142);
                    $tmp162 = $tmp166;
                    $tmp161 = $tmp162;
                    v160 = $tmp161;
                    panda$core$Panda$ref$panda$core$Object($tmp161);
                    panda$core$Panda$unref$panda$core$Object($tmp162);
                    if (p_m->target) {
                        (($fn167) p_m->pointer)(p_m->target, v160);
                    } else {
                        (($fn168) p_m->pointer)(v160);
                    }
                }
                $tmp159 = -1;
                goto $l157;
                $l157:;
                panda$core$Panda$unref$panda$core$Object(v160);
                v160 = NULL;
                switch ($tmp159) {
                    case -1: goto $l169;
                }
                $l169:;
            }
            goto $l149;
            $l150:;
        }
        $tmp141 = -1;
        goto $l139;
        $l139:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$37$9142));
        Iter$37$9142 = NULL;
        switch ($tmp141) {
            case -1: goto $l170;
        }
        $l170:;
    }
}






