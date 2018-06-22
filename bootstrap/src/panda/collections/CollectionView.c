#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn47)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn84)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn91)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);
typedef void (*$fn127)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn128)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };

panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f) {
    panda$core$Int64 $tmp6;
    panda$collections$Iterator* i15 = NULL;
    panda$collections$Iterator* $tmp16;
    panda$collections$Iterator* $tmp17;
    panda$core$Object* result22 = NULL;
    panda$core$Object* $tmp23;
    panda$core$Object* $tmp24;
    panda$core$Object* $tmp37;
    panda$core$Object* $tmp38;
    panda$core$Object* $tmp39;
    panda$core$Object* $tmp40;
    panda$core$Object* $tmp45;
    panda$core$Object* $returnValue48;
    panda$core$Object* $tmp49;
    ITable* $tmp2 = self->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(self);
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit $tmp7 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5, $tmp6);
    if ($tmp7.value) goto $l8; else goto $l9;
    $l9:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s10, (panda$core$Int64) { 17 }, &$s11);
    abort();
    $l8:;
    int $tmp14;
    {
        ITable* $tmp18 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp18 = $tmp18->next;
        }
        $fn20 $tmp19 = $tmp18->methods[0];
        panda$collections$Iterator* $tmp21 = $tmp19(((panda$collections$Iterable*) self));
        $tmp17 = $tmp21;
        $tmp16 = $tmp17;
        i15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
        ITable* $tmp25 = i15->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[1];
        panda$core$Object* $tmp28 = $tmp26(i15);
        $tmp24 = $tmp28;
        $tmp23 = $tmp24;
        result22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object($tmp23);
        panda$core$Panda$unref$panda$core$Object($tmp24);
        $l29:;
        ITable* $tmp32 = i15->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(i15);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        bool $tmp31 = $tmp36.value;
        if (!$tmp31) goto $l30;
        {
            {
                $tmp37 = result22;
                ITable* $tmp41 = i15->$class->itable;
                while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp41 = $tmp41->next;
                }
                $fn43 $tmp42 = $tmp41->methods[1];
                panda$core$Object* $tmp44 = $tmp42(i15);
                $tmp40 = $tmp44;
                if (p_f->target) {
                    $tmp45 = (($fn46) p_f->pointer)(p_f->target, result22, $tmp40);
                } else {
                    $tmp45 = (($fn47) p_f->pointer)(result22, $tmp40);
                }
                $tmp39 = $tmp45;
                $tmp38 = $tmp39;
                result22 = $tmp38;
                panda$core$Panda$ref$panda$core$Object($tmp38);
                panda$core$Panda$unref$panda$core$Object($tmp39);
                panda$core$Panda$unref$panda$core$Object($tmp40);
                panda$core$Panda$unref$panda$core$Object($tmp37);
            }
        }
        goto $l29;
        $l30:;
        $tmp49 = result22;
        $returnValue48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object($tmp49);
        $tmp14 = 0;
        goto $l12;
        $l50:;
        return $returnValue48;
    }
    $l12:;
    panda$core$Panda$unref$panda$core$Object(result22);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i15));
    i15 = NULL;
    result22 = NULL;
    switch ($tmp14) {
        case 0: goto $l50;
    }
    $l52:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result56 = NULL;
    panda$core$Object* $tmp57;
    panda$collections$Iterator* Iter$28$961 = NULL;
    panda$collections$Iterator* $tmp62;
    panda$collections$Iterator* $tmp63;
    panda$core$Object* v79 = NULL;
    panda$core$Object* $tmp80;
    panda$core$Object* $tmp81;
    panda$core$Object* $tmp86;
    panda$core$Object* $tmp87;
    panda$core$Object* $tmp88;
    panda$core$Object* $tmp89;
    panda$core$Object* $returnValue94;
    panda$core$Object* $tmp95;
    int $tmp55;
    {
        $tmp57 = p_start;
        result56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object($tmp57);
        {
            int $tmp60;
            {
                ITable* $tmp64 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp64 = $tmp64->next;
                }
                $fn66 $tmp65 = $tmp64->methods[0];
                panda$collections$Iterator* $tmp67 = $tmp65(((panda$collections$Iterable*) self));
                $tmp63 = $tmp67;
                $tmp62 = $tmp63;
                Iter$28$961 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                $l68:;
                ITable* $tmp71 = Iter$28$961->$class->itable;
                while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp71 = $tmp71->next;
                }
                $fn73 $tmp72 = $tmp71->methods[0];
                panda$core$Bit $tmp74 = $tmp72(Iter$28$961);
                panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
                bool $tmp70 = $tmp75.value;
                if (!$tmp70) goto $l69;
                {
                    int $tmp78;
                    {
                        ITable* $tmp82 = Iter$28$961->$class->itable;
                        while ($tmp82->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp82 = $tmp82->next;
                        }
                        $fn84 $tmp83 = $tmp82->methods[1];
                        panda$core$Object* $tmp85 = $tmp83(Iter$28$961);
                        $tmp81 = $tmp85;
                        $tmp80 = $tmp81;
                        v79 = $tmp80;
                        panda$core$Panda$ref$panda$core$Object($tmp80);
                        panda$core$Panda$unref$panda$core$Object($tmp81);
                        {
                            $tmp86 = result56;
                            if (p_f->target) {
                                $tmp89 = (($fn90) p_f->pointer)(p_f->target, result56, v79);
                            } else {
                                $tmp89 = (($fn91) p_f->pointer)(result56, v79);
                            }
                            $tmp88 = $tmp89;
                            $tmp87 = $tmp88;
                            result56 = $tmp87;
                            panda$core$Panda$ref$panda$core$Object($tmp87);
                            panda$core$Panda$unref$panda$core$Object($tmp88);
                            panda$core$Panda$unref$panda$core$Object($tmp86);
                        }
                    }
                    $tmp78 = -1;
                    goto $l76;
                    $l76:;
                    panda$core$Panda$unref$panda$core$Object(v79);
                    v79 = NULL;
                    switch ($tmp78) {
                        case -1: goto $l92;
                    }
                    $l92:;
                }
                goto $l68;
                $l69:;
            }
            $tmp60 = -1;
            goto $l58;
            $l58:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$28$961));
            Iter$28$961 = NULL;
            switch ($tmp60) {
                case -1: goto $l93;
            }
            $l93:;
        }
        $tmp95 = result56;
        $returnValue94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object($tmp95);
        $tmp55 = 0;
        goto $l53;
        $l96:;
        return $returnValue94;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(result56);
    result56 = NULL;
    switch ($tmp55) {
        case 0: goto $l96;
    }
    $l98:;
    abort();
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$35$9102 = NULL;
    panda$collections$Iterator* $tmp103;
    panda$collections$Iterator* $tmp104;
    panda$core$Object* v120 = NULL;
    panda$core$Object* $tmp121;
    panda$core$Object* $tmp122;
    {
        int $tmp101;
        {
            ITable* $tmp105 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp105 = $tmp105->next;
            }
            $fn107 $tmp106 = $tmp105->methods[0];
            panda$collections$Iterator* $tmp108 = $tmp106(((panda$collections$Iterable*) self));
            $tmp104 = $tmp108;
            $tmp103 = $tmp104;
            Iter$35$9102 = $tmp103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
            $l109:;
            ITable* $tmp112 = Iter$35$9102->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[0];
            panda$core$Bit $tmp115 = $tmp113(Iter$35$9102);
            panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
            bool $tmp111 = $tmp116.value;
            if (!$tmp111) goto $l110;
            {
                int $tmp119;
                {
                    ITable* $tmp123 = Iter$35$9102->$class->itable;
                    while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp123 = $tmp123->next;
                    }
                    $fn125 $tmp124 = $tmp123->methods[1];
                    panda$core$Object* $tmp126 = $tmp124(Iter$35$9102);
                    $tmp122 = $tmp126;
                    $tmp121 = $tmp122;
                    v120 = $tmp121;
                    panda$core$Panda$ref$panda$core$Object($tmp121);
                    panda$core$Panda$unref$panda$core$Object($tmp122);
                    if (p_m->target) {
                        (($fn127) p_m->pointer)(p_m->target, v120);
                    } else {
                        (($fn128) p_m->pointer)(v120);
                    }
                }
                $tmp119 = -1;
                goto $l117;
                $l117:;
                panda$core$Panda$unref$panda$core$Object(v120);
                v120 = NULL;
                switch ($tmp119) {
                    case -1: goto $l129;
                }
                $l129:;
            }
            goto $l109;
            $l110:;
        }
        $tmp101 = -1;
        goto $l99;
        $l99:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$35$9102));
        Iter$35$9102 = NULL;
        switch ($tmp101) {
            case -1: goto $l130;
        }
        $l130:;
    }
}





