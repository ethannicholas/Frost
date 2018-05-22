#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Method.h"
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
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn91)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef void (*$fn136)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn152)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn163)(panda$collections$Iterator*);

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
    panda$core$Object* $tmp80;
    panda$core$Object* $tmp85;
    panda$core$Object* $returnValue86;
    panda$core$Object* $tmp87;
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
                $tmp85 = p_f(result62, $tmp80);
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
        $tmp87 = result62;
        $returnValue86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object($tmp87);
        $tmp54 = 0;
        goto $l52;
        $l88:;
        return $returnValue86;
    }
    $l52:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i55));
    i55 = NULL;
    panda$core$Panda$unref$panda$core$Object(result62);
    result62 = NULL;
    switch ($tmp54) {
        case 0: goto $l88;
    }
    $l90:;
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, $fn91 p_f, panda$core$Object* p_start) {
    panda$core$Object* result95 = NULL;
    panda$core$Object* $tmp96;
    panda$collections$Iterator* Iter$30$9100 = NULL;
    panda$collections$Iterator* $tmp101;
    panda$collections$Iterator* $tmp102;
    panda$core$Object* v118 = NULL;
    panda$core$Object* $tmp119;
    panda$core$Object* $tmp120;
    panda$core$Object* $tmp125;
    panda$core$Object* $tmp126;
    panda$core$Object* $tmp127;
    panda$core$Object* $tmp128;
    panda$core$Object* $returnValue131;
    panda$core$Object* $tmp132;
    int $tmp94;
    {
        $tmp96 = p_start;
        result95 = $tmp96;
        panda$core$Panda$ref$panda$core$Object($tmp96);
        {
            int $tmp99;
            {
                ITable* $tmp103 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp103 = $tmp103->next;
                }
                $fn105 $tmp104 = $tmp103->methods[0];
                panda$collections$Iterator* $tmp106 = $tmp104(((panda$collections$Iterable*) self));
                $tmp102 = $tmp106;
                $tmp101 = $tmp102;
                Iter$30$9100 = $tmp101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
                $l107:;
                ITable* $tmp110 = Iter$30$9100->$class->itable;
                while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp110 = $tmp110->next;
                }
                $fn112 $tmp111 = $tmp110->methods[0];
                panda$core$Bit $tmp113 = $tmp111(Iter$30$9100);
                panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
                bool $tmp109 = $tmp114.value;
                if (!$tmp109) goto $l108;
                {
                    int $tmp117;
                    {
                        ITable* $tmp121 = Iter$30$9100->$class->itable;
                        while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp121 = $tmp121->next;
                        }
                        $fn123 $tmp122 = $tmp121->methods[1];
                        panda$core$Object* $tmp124 = $tmp122(Iter$30$9100);
                        $tmp120 = $tmp124;
                        $tmp119 = $tmp120;
                        v118 = $tmp119;
                        panda$core$Panda$ref$panda$core$Object($tmp119);
                        panda$core$Panda$unref$panda$core$Object($tmp120);
                        {
                            $tmp125 = result95;
                            $tmp128 = p_f(result95, v118);
                            $tmp127 = $tmp128;
                            $tmp126 = $tmp127;
                            result95 = $tmp126;
                            panda$core$Panda$ref$panda$core$Object($tmp126);
                            panda$core$Panda$unref$panda$core$Object($tmp127);
                            panda$core$Panda$unref$panda$core$Object($tmp125);
                        }
                    }
                    $tmp117 = -1;
                    goto $l115;
                    $l115:;
                    panda$core$Panda$unref$panda$core$Object(v118);
                    v118 = NULL;
                    switch ($tmp117) {
                        case -1: goto $l129;
                    }
                    $l129:;
                }
                goto $l107;
                $l108:;
            }
            $tmp99 = -1;
            goto $l97;
            $l97:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$9100));
            Iter$30$9100 = NULL;
            switch ($tmp99) {
                case -1: goto $l130;
            }
            $l130:;
        }
        $tmp132 = result95;
        $returnValue131 = $tmp132;
        panda$core$Panda$ref$panda$core$Object($tmp132);
        $tmp94 = 0;
        goto $l92;
        $l133:;
        return $returnValue131;
    }
    $l92:;
    panda$core$Panda$unref$panda$core$Object(result95);
    result95 = NULL;
    switch ($tmp94) {
        case 0: goto $l133;
    }
    $l135:;
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, $fn136 p_m) {
    panda$collections$Iterator* Iter$37$9140 = NULL;
    panda$collections$Iterator* $tmp141;
    panda$collections$Iterator* $tmp142;
    panda$core$Object* v158 = NULL;
    panda$core$Object* $tmp159;
    panda$core$Object* $tmp160;
    {
        int $tmp139;
        {
            ITable* $tmp143 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp143 = $tmp143->next;
            }
            $fn145 $tmp144 = $tmp143->methods[0];
            panda$collections$Iterator* $tmp146 = $tmp144(((panda$collections$Iterable*) self));
            $tmp142 = $tmp146;
            $tmp141 = $tmp142;
            Iter$37$9140 = $tmp141;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
            $l147:;
            ITable* $tmp150 = Iter$37$9140->$class->itable;
            while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp150 = $tmp150->next;
            }
            $fn152 $tmp151 = $tmp150->methods[0];
            panda$core$Bit $tmp153 = $tmp151(Iter$37$9140);
            panda$core$Bit $tmp154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp153);
            bool $tmp149 = $tmp154.value;
            if (!$tmp149) goto $l148;
            {
                int $tmp157;
                {
                    ITable* $tmp161 = Iter$37$9140->$class->itable;
                    while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp161 = $tmp161->next;
                    }
                    $fn163 $tmp162 = $tmp161->methods[1];
                    panda$core$Object* $tmp164 = $tmp162(Iter$37$9140);
                    $tmp160 = $tmp164;
                    $tmp159 = $tmp160;
                    v158 = $tmp159;
                    panda$core$Panda$ref$panda$core$Object($tmp159);
                    panda$core$Panda$unref$panda$core$Object($tmp160);
                }
                $tmp157 = -1;
                goto $l155;
                $l155:;
                panda$core$Panda$unref$panda$core$Object(v158);
                v158 = NULL;
                switch ($tmp157) {
                    case -1: goto $l165;
                }
                $l165:;
            }
            goto $l147;
            $l148:;
        }
        $tmp139 = -1;
        goto $l137;
        $l137:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$37$9140));
        Iter$37$9140 = NULL;
        switch ($tmp139) {
            case -1: goto $l166;
        }
        $l166:;
    }
}






