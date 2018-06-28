#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$core$String* (*$fn8)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$Int64 (*$fn16)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn39)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn57)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn71)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn94)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn114)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn140)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn157)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn158)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn174)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn181)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn192)(panda$collections$Iterator*);
typedef void (*$fn194)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn195)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };

panda$core$String* panda$collections$CollectionView$join$R$panda$core$String(panda$collections$CollectionView* self) {
    panda$core$String* $returnValue2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    ITable* $tmp6 = self->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[2];
    panda$core$String* $tmp9 = $tmp7(self, &$s5);
    $tmp4 = $tmp9;
    $tmp3 = $tmp4;
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$String* panda$collections$CollectionView$join$panda$core$String$R$panda$core$String(panda$collections$CollectionView* self, panda$core$String* p_separator) {
    panda$core$Int64 $tmp18;
    panda$core$String* $returnValue20;
    panda$core$String* $tmp21;
    panda$core$Bit first25;
    panda$core$Bit $tmp26;
    panda$core$MutableString* result27 = NULL;
    panda$core$MutableString* $tmp28;
    panda$core$MutableString* $tmp29;
    panda$collections$Iterator* Iter$45$934 = NULL;
    panda$collections$Iterator* $tmp35;
    panda$collections$Iterator* $tmp36;
    panda$core$Object* v52 = NULL;
    panda$core$Object* $tmp53;
    panda$core$Object* $tmp54;
    panda$core$Bit $tmp59;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    int $tmp13;
    {
        ITable* $tmp14 = self->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$core$Int64 $tmp17 = $tmp15(self);
        panda$core$Int64$init$builtin_int64(&$tmp18, 0);
        panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp17, $tmp18);
        if ($tmp19.value) {
        {
            $tmp21 = &$s22;
            $returnValue20 = $tmp21;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
            $tmp13 = 0;
            goto $l11;
            $l23:;
            return $returnValue20;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp26, true);
        first25 = $tmp26;
        panda$core$MutableString* $tmp30 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp30);
        $tmp29 = $tmp30;
        $tmp28 = $tmp29;
        result27 = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        {
            int $tmp33;
            {
                ITable* $tmp37 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp37 = $tmp37->next;
                }
                $fn39 $tmp38 = $tmp37->methods[0];
                panda$collections$Iterator* $tmp40 = $tmp38(((panda$collections$Iterable*) self));
                $tmp36 = $tmp40;
                $tmp35 = $tmp36;
                Iter$45$934 = $tmp35;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
                $l41:;
                ITable* $tmp44 = Iter$45$934->$class->itable;
                while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp44 = $tmp44->next;
                }
                $fn46 $tmp45 = $tmp44->methods[0];
                panda$core$Bit $tmp47 = $tmp45(Iter$45$934);
                panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
                bool $tmp43 = $tmp48.value;
                if (!$tmp43) goto $l42;
                {
                    int $tmp51;
                    {
                        ITable* $tmp55 = Iter$45$934->$class->itable;
                        while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp55 = $tmp55->next;
                        }
                        $fn57 $tmp56 = $tmp55->methods[1];
                        panda$core$Object* $tmp58 = $tmp56(Iter$45$934);
                        $tmp54 = $tmp58;
                        $tmp53 = $tmp54;
                        v52 = $tmp53;
                        panda$core$Panda$ref$panda$core$Object($tmp53);
                        panda$core$Panda$unref$panda$core$Object($tmp54);
                        if (first25.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp59, false);
                            first25 = $tmp59;
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result27, p_separator);
                        }
                        }
                        if (((panda$core$Bit) { v52 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result27, v52);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result27, &$s60);
                        }
                        }
                    }
                    $tmp51 = -1;
                    goto $l49;
                    $l49:;
                    panda$core$Panda$unref$panda$core$Object(v52);
                    v52 = NULL;
                    switch ($tmp51) {
                        case -1: goto $l61;
                    }
                    $l61:;
                }
                goto $l41;
                $l42:;
            }
            $tmp33 = -1;
            goto $l31;
            $l31:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$45$934));
            Iter$45$934 = NULL;
            switch ($tmp33) {
                case -1: goto $l62;
            }
            $l62:;
        }
        panda$core$String* $tmp65 = panda$core$MutableString$finish$R$panda$core$String(result27);
        $tmp64 = $tmp65;
        $tmp63 = $tmp64;
        $returnValue20 = $tmp63;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        $tmp13 = 1;
        goto $l11;
        $l66:;
        return $returnValue20;
    }
    $l11:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
    result27 = NULL;
    switch ($tmp13) {
        case 0: goto $l23;
        case 1: goto $l66;
    }
    $l68:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f) {
    panda$core$Int64 $tmp73;
    panda$collections$Iterator* i82 = NULL;
    panda$collections$Iterator* $tmp83;
    panda$collections$Iterator* $tmp84;
    panda$core$Object* result89 = NULL;
    panda$core$Object* $tmp90;
    panda$core$Object* $tmp91;
    panda$core$Object* $tmp104;
    panda$core$Object* $tmp105;
    panda$core$Object* $tmp106;
    panda$core$Object* $tmp107;
    panda$core$Object* $tmp112;
    panda$core$Object* $returnValue115;
    panda$core$Object* $tmp116;
    ITable* $tmp69 = self->$class->itable;
    while ($tmp69->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp69 = $tmp69->next;
    }
    $fn71 $tmp70 = $tmp69->methods[0];
    panda$core$Int64 $tmp72 = $tmp70(self);
    panda$core$Int64$init$builtin_int64(&$tmp73, 0);
    panda$core$Bit $tmp74 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp72, $tmp73);
    if ($tmp74.value) goto $l75; else goto $l76;
    $l76:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, (panda$core$Int64) { 87 }, &$s78);
    abort();
    $l75:;
    int $tmp81;
    {
        ITable* $tmp85 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp85 = $tmp85->next;
        }
        $fn87 $tmp86 = $tmp85->methods[0];
        panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) self));
        $tmp84 = $tmp88;
        $tmp83 = $tmp84;
        i82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        ITable* $tmp92 = i82->$class->itable;
        while ($tmp92->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp92 = $tmp92->next;
        }
        $fn94 $tmp93 = $tmp92->methods[1];
        panda$core$Object* $tmp95 = $tmp93(i82);
        $tmp91 = $tmp95;
        $tmp90 = $tmp91;
        result89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object($tmp90);
        panda$core$Panda$unref$panda$core$Object($tmp91);
        $l96:;
        ITable* $tmp99 = i82->$class->itable;
        while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp99 = $tmp99->next;
        }
        $fn101 $tmp100 = $tmp99->methods[0];
        panda$core$Bit $tmp102 = $tmp100(i82);
        panda$core$Bit $tmp103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp102);
        bool $tmp98 = $tmp103.value;
        if (!$tmp98) goto $l97;
        {
            {
                $tmp104 = result89;
                ITable* $tmp108 = i82->$class->itable;
                while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp108 = $tmp108->next;
                }
                $fn110 $tmp109 = $tmp108->methods[1];
                panda$core$Object* $tmp111 = $tmp109(i82);
                $tmp107 = $tmp111;
                if (p_f->target) {
                    $tmp112 = (($fn113) p_f->pointer)(p_f->target, result89, $tmp107);
                } else {
                    $tmp112 = (($fn114) p_f->pointer)(result89, $tmp107);
                }
                $tmp106 = $tmp112;
                $tmp105 = $tmp106;
                result89 = $tmp105;
                panda$core$Panda$ref$panda$core$Object($tmp105);
                panda$core$Panda$unref$panda$core$Object($tmp106);
                panda$core$Panda$unref$panda$core$Object($tmp107);
                panda$core$Panda$unref$panda$core$Object($tmp104);
            }
        }
        goto $l96;
        $l97:;
        $tmp116 = result89;
        $returnValue115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object($tmp116);
        $tmp81 = 0;
        goto $l79;
        $l117:;
        return $returnValue115;
    }
    $l79:;
    panda$core$Panda$unref$panda$core$Object(result89);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) i82));
    i82 = NULL;
    result89 = NULL;
    switch ($tmp81) {
        case 0: goto $l117;
    }
    $l119:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result123 = NULL;
    panda$core$Object* $tmp124;
    panda$collections$Iterator* Iter$109$9128 = NULL;
    panda$collections$Iterator* $tmp129;
    panda$collections$Iterator* $tmp130;
    panda$core$Object* v146 = NULL;
    panda$core$Object* $tmp147;
    panda$core$Object* $tmp148;
    panda$core$Object* $tmp153;
    panda$core$Object* $tmp154;
    panda$core$Object* $tmp155;
    panda$core$Object* $tmp156;
    panda$core$Object* $returnValue161;
    panda$core$Object* $tmp162;
    int $tmp122;
    {
        $tmp124 = p_start;
        result123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object($tmp124);
        {
            int $tmp127;
            {
                ITable* $tmp131 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp131 = $tmp131->next;
                }
                $fn133 $tmp132 = $tmp131->methods[0];
                panda$collections$Iterator* $tmp134 = $tmp132(((panda$collections$Iterable*) self));
                $tmp130 = $tmp134;
                $tmp129 = $tmp130;
                Iter$109$9128 = $tmp129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                $l135:;
                ITable* $tmp138 = Iter$109$9128->$class->itable;
                while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp138 = $tmp138->next;
                }
                $fn140 $tmp139 = $tmp138->methods[0];
                panda$core$Bit $tmp141 = $tmp139(Iter$109$9128);
                panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
                bool $tmp137 = $tmp142.value;
                if (!$tmp137) goto $l136;
                {
                    int $tmp145;
                    {
                        ITable* $tmp149 = Iter$109$9128->$class->itable;
                        while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp149 = $tmp149->next;
                        }
                        $fn151 $tmp150 = $tmp149->methods[1];
                        panda$core$Object* $tmp152 = $tmp150(Iter$109$9128);
                        $tmp148 = $tmp152;
                        $tmp147 = $tmp148;
                        v146 = $tmp147;
                        panda$core$Panda$ref$panda$core$Object($tmp147);
                        panda$core$Panda$unref$panda$core$Object($tmp148);
                        {
                            $tmp153 = result123;
                            if (p_f->target) {
                                $tmp156 = (($fn157) p_f->pointer)(p_f->target, result123, v146);
                            } else {
                                $tmp156 = (($fn158) p_f->pointer)(result123, v146);
                            }
                            $tmp155 = $tmp156;
                            $tmp154 = $tmp155;
                            result123 = $tmp154;
                            panda$core$Panda$ref$panda$core$Object($tmp154);
                            panda$core$Panda$unref$panda$core$Object($tmp155);
                            panda$core$Panda$unref$panda$core$Object($tmp153);
                        }
                    }
                    $tmp145 = -1;
                    goto $l143;
                    $l143:;
                    panda$core$Panda$unref$panda$core$Object(v146);
                    v146 = NULL;
                    switch ($tmp145) {
                        case -1: goto $l159;
                    }
                    $l159:;
                }
                goto $l135;
                $l136:;
            }
            $tmp127 = -1;
            goto $l125;
            $l125:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$109$9128));
            Iter$109$9128 = NULL;
            switch ($tmp127) {
                case -1: goto $l160;
            }
            $l160:;
        }
        $tmp162 = result123;
        $returnValue161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object($tmp162);
        $tmp122 = 0;
        goto $l120;
        $l163:;
        return $returnValue161;
    }
    $l120:;
    panda$core$Panda$unref$panda$core$Object(result123);
    result123 = NULL;
    switch ($tmp122) {
        case 0: goto $l163;
    }
    $l165:;
    abort();
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$125$9169 = NULL;
    panda$collections$Iterator* $tmp170;
    panda$collections$Iterator* $tmp171;
    panda$core$Object* v187 = NULL;
    panda$core$Object* $tmp188;
    panda$core$Object* $tmp189;
    {
        int $tmp168;
        {
            ITable* $tmp172 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp172 = $tmp172->next;
            }
            $fn174 $tmp173 = $tmp172->methods[0];
            panda$collections$Iterator* $tmp175 = $tmp173(((panda$collections$Iterable*) self));
            $tmp171 = $tmp175;
            $tmp170 = $tmp171;
            Iter$125$9169 = $tmp170;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
            $l176:;
            ITable* $tmp179 = Iter$125$9169->$class->itable;
            while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp179 = $tmp179->next;
            }
            $fn181 $tmp180 = $tmp179->methods[0];
            panda$core$Bit $tmp182 = $tmp180(Iter$125$9169);
            panda$core$Bit $tmp183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp182);
            bool $tmp178 = $tmp183.value;
            if (!$tmp178) goto $l177;
            {
                int $tmp186;
                {
                    ITable* $tmp190 = Iter$125$9169->$class->itable;
                    while ($tmp190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp190 = $tmp190->next;
                    }
                    $fn192 $tmp191 = $tmp190->methods[1];
                    panda$core$Object* $tmp193 = $tmp191(Iter$125$9169);
                    $tmp189 = $tmp193;
                    $tmp188 = $tmp189;
                    v187 = $tmp188;
                    panda$core$Panda$ref$panda$core$Object($tmp188);
                    panda$core$Panda$unref$panda$core$Object($tmp189);
                    if (p_m->target) {
                        (($fn194) p_m->pointer)(p_m->target, v187);
                    } else {
                        (($fn195) p_m->pointer)(v187);
                    }
                }
                $tmp186 = -1;
                goto $l184;
                $l184:;
                panda$core$Panda$unref$panda$core$Object(v187);
                v187 = NULL;
                switch ($tmp186) {
                    case -1: goto $l196;
                }
                $l196:;
            }
            goto $l176;
            $l177:;
        }
        $tmp168 = -1;
        goto $l166;
        $l166:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$125$9169));
        Iter$125$9169 = NULL;
        switch ($tmp168) {
            case -1: goto $l197;
        }
        $l197:;
    }
}





