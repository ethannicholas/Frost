#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$core$Bit (*$fn2)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn60)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn67)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn82)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn122)(panda$collections$Iterator*);
typedef void (*$fn134)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn150)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn161)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };

panda$collections$CollectionView* panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT(panda$collections$CollectionView* self, $fn2 p_predicate) {
    panda$collections$Array* result6 = NULL;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp8;
    panda$collections$Iterator* Iter$10$913 = NULL;
    panda$collections$Iterator* $tmp14;
    panda$collections$Iterator* $tmp15;
    panda$core$Object* v31 = NULL;
    panda$core$Object* $tmp32;
    panda$core$Object* $tmp33;
    panda$core$Bit $tmp38;
    panda$collections$CollectionView* $returnValue41;
    panda$collections$CollectionView* $tmp42;
    int $tmp5;
    {
        panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp9);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        result6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        {
            int $tmp12;
            {
                ITable* $tmp16 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp16 = $tmp16->next;
                }
                $fn18 $tmp17 = $tmp16->methods[0];
                panda$collections$Iterator* $tmp19 = $tmp17(((panda$collections$Iterable*) self));
                $tmp15 = $tmp19;
                $tmp14 = $tmp15;
                Iter$10$913 = $tmp14;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
                $l20:;
                ITable* $tmp23 = Iter$10$913->$class->itable;
                while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp23 = $tmp23->next;
                }
                $fn25 $tmp24 = $tmp23->methods[0];
                panda$core$Bit $tmp26 = $tmp24(Iter$10$913);
                panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
                bool $tmp22 = $tmp27.value;
                if (!$tmp22) goto $l21;
                {
                    int $tmp30;
                    {
                        ITable* $tmp34 = Iter$10$913->$class->itable;
                        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp34 = $tmp34->next;
                        }
                        $fn36 $tmp35 = $tmp34->methods[1];
                        panda$core$Object* $tmp37 = $tmp35(Iter$10$913);
                        $tmp33 = $tmp37;
                        $tmp32 = $tmp33;
                        v31 = $tmp32;
                        panda$core$Panda$ref$panda$core$Object($tmp32);
                        panda$core$Panda$unref$panda$core$Object($tmp33);
                        $tmp38 = p_predicate(v31);
                        if ($tmp38.value) {
                        {
                            panda$collections$Array$add$panda$collections$Array$T(result6, v31);
                        }
                        }
                    }
                    $tmp30 = -1;
                    goto $l28;
                    $l28:;
                    panda$core$Panda$unref$panda$core$Object(v31);
                    v31 = NULL;
                    switch ($tmp30) {
                        case -1: goto $l39;
                    }
                    $l39:;
                }
                goto $l20;
                $l21:;
            }
            $tmp12 = -1;
            goto $l10;
            $l10:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$10$913));
            Iter$10$913 = NULL;
            switch ($tmp12) {
                case -1: goto $l40;
            }
            $l40:;
        }
        $tmp42 = ((panda$collections$CollectionView*) result6);
        $returnValue41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        $tmp5 = 0;
        goto $l3;
        $l43:;
        return $returnValue41;
    }
    $l3:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
    result6 = NULL;
    switch ($tmp5) {
        case 0: goto $l43;
    }
    $l45:;
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, $fn46 p_f) {
    panda$collections$Iterator* i55 = NULL;
    panda$collections$Iterator* $tmp56;
    panda$collections$Iterator* $tmp57;
    panda$core$Object* result62 = NULL;
    panda$core$Object* $tmp63;
    panda$core$Object* $tmp64;
    panda$core$Object* $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Object* $tmp84;
    panda$core$Object* $returnValue85;
    panda$core$Object* $tmp86;
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
                ITable* $tmp80 = i55->$class->itable;
                while ($tmp80->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp80 = $tmp80->next;
                }
                $fn82 $tmp81 = $tmp80->methods[1];
                panda$core$Object* $tmp83 = $tmp81(i55);
                $tmp79 = $tmp83;
                $tmp84 = p_f(result62, $tmp79);
                $tmp78 = $tmp84;
                result62 = $tmp78;
                panda$core$Panda$ref$panda$core$Object($tmp78);
                panda$core$Panda$unref$panda$core$Object($tmp79);
                panda$core$Panda$unref$panda$core$Object($tmp77);
            }
        }
        goto $l69;
        $l70:;
        $tmp86 = result62;
        $returnValue85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object($tmp86);
        $tmp54 = 0;
        goto $l52;
        $l87:;
        return $returnValue85;
    }
    $l52:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i55));
    i55 = NULL;
    panda$core$Panda$unref$panda$core$Object(result62);
    result62 = NULL;
    switch ($tmp54) {
        case 0: goto $l87;
    }
    $l89:;
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, $fn90 p_f, panda$core$Object* p_start) {
    panda$core$Object* result94 = NULL;
    panda$core$Object* $tmp95;
    panda$collections$Iterator* Iter$30$999 = NULL;
    panda$collections$Iterator* $tmp100;
    panda$collections$Iterator* $tmp101;
    panda$core$Object* v117 = NULL;
    panda$core$Object* $tmp118;
    panda$core$Object* $tmp119;
    panda$core$Object* $tmp124;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp126;
    panda$core$Object* $returnValue129;
    panda$core$Object* $tmp130;
    int $tmp93;
    {
        $tmp95 = p_start;
        result94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object($tmp95);
        {
            int $tmp98;
            {
                ITable* $tmp102 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp102 = $tmp102->next;
                }
                $fn104 $tmp103 = $tmp102->methods[0];
                panda$collections$Iterator* $tmp105 = $tmp103(((panda$collections$Iterable*) self));
                $tmp101 = $tmp105;
                $tmp100 = $tmp101;
                Iter$30$999 = $tmp100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                $l106:;
                ITable* $tmp109 = Iter$30$999->$class->itable;
                while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp109 = $tmp109->next;
                }
                $fn111 $tmp110 = $tmp109->methods[0];
                panda$core$Bit $tmp112 = $tmp110(Iter$30$999);
                panda$core$Bit $tmp113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp112);
                bool $tmp108 = $tmp113.value;
                if (!$tmp108) goto $l107;
                {
                    int $tmp116;
                    {
                        ITable* $tmp120 = Iter$30$999->$class->itable;
                        while ($tmp120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp120 = $tmp120->next;
                        }
                        $fn122 $tmp121 = $tmp120->methods[1];
                        panda$core$Object* $tmp123 = $tmp121(Iter$30$999);
                        $tmp119 = $tmp123;
                        $tmp118 = $tmp119;
                        v117 = $tmp118;
                        panda$core$Panda$ref$panda$core$Object($tmp118);
                        panda$core$Panda$unref$panda$core$Object($tmp119);
                        {
                            $tmp124 = result94;
                            $tmp126 = p_f(result94, v117);
                            $tmp125 = $tmp126;
                            result94 = $tmp125;
                            panda$core$Panda$ref$panda$core$Object($tmp125);
                            panda$core$Panda$unref$panda$core$Object($tmp124);
                        }
                    }
                    $tmp116 = -1;
                    goto $l114;
                    $l114:;
                    panda$core$Panda$unref$panda$core$Object(v117);
                    v117 = NULL;
                    switch ($tmp116) {
                        case -1: goto $l127;
                    }
                    $l127:;
                }
                goto $l106;
                $l107:;
            }
            $tmp98 = -1;
            goto $l96;
            $l96:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$999));
            Iter$30$999 = NULL;
            switch ($tmp98) {
                case -1: goto $l128;
            }
            $l128:;
        }
        $tmp130 = result94;
        $returnValue129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object($tmp130);
        $tmp93 = 0;
        goto $l91;
        $l131:;
        return $returnValue129;
    }
    $l91:;
    panda$core$Panda$unref$panda$core$Object(result94);
    result94 = NULL;
    switch ($tmp93) {
        case 0: goto $l131;
    }
    $l133:;
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, $fn134 p_m) {
    panda$collections$Iterator* Iter$37$9138 = NULL;
    panda$collections$Iterator* $tmp139;
    panda$collections$Iterator* $tmp140;
    panda$core$Object* v156 = NULL;
    panda$core$Object* $tmp157;
    panda$core$Object* $tmp158;
    {
        int $tmp137;
        {
            ITable* $tmp141 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp141 = $tmp141->next;
            }
            $fn143 $tmp142 = $tmp141->methods[0];
            panda$collections$Iterator* $tmp144 = $tmp142(((panda$collections$Iterable*) self));
            $tmp140 = $tmp144;
            $tmp139 = $tmp140;
            Iter$37$9138 = $tmp139;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
            $l145:;
            ITable* $tmp148 = Iter$37$9138->$class->itable;
            while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp148 = $tmp148->next;
            }
            $fn150 $tmp149 = $tmp148->methods[0];
            panda$core$Bit $tmp151 = $tmp149(Iter$37$9138);
            panda$core$Bit $tmp152 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp151);
            bool $tmp147 = $tmp152.value;
            if (!$tmp147) goto $l146;
            {
                int $tmp155;
                {
                    ITable* $tmp159 = Iter$37$9138->$class->itable;
                    while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp159 = $tmp159->next;
                    }
                    $fn161 $tmp160 = $tmp159->methods[1];
                    panda$core$Object* $tmp162 = $tmp160(Iter$37$9138);
                    $tmp158 = $tmp162;
                    $tmp157 = $tmp158;
                    v156 = $tmp157;
                    panda$core$Panda$ref$panda$core$Object($tmp157);
                    panda$core$Panda$unref$panda$core$Object($tmp158);
                }
                $tmp155 = -1;
                goto $l153;
                $l153:;
                panda$core$Panda$unref$panda$core$Object(v156);
                v156 = NULL;
                switch ($tmp155) {
                    case -1: goto $l163;
                }
                $l163:;
            }
            goto $l145;
            $l146:;
        }
        $tmp137 = -1;
        goto $l135;
        $l135:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$37$9138));
        Iter$37$9138 = NULL;
        switch ($tmp137) {
            case -1: goto $l164;
        }
        $l164:;
    }
}






