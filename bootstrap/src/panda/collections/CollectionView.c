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
typedef panda$core$Int64 (*$fn75)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn98)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn117)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn118)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn166)(panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn204)(panda$collections$Iterator*);
typedef void (*$fn206)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn207)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
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
                        panda$core$Panda$ref$panda$core$Object$Q($tmp53);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp54);
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
                    panda$core$Panda$unref$panda$core$Object$Q(v52);
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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$45$934));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
        $tmp13 = 1;
        goto $l11;
        $l66:;
        return $returnValue20;
    }
    $l11:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result27));
    result27 = NULL;
    switch ($tmp13) {
        case 0: goto $l23;
        case 1: goto $l66;
    }
    $l68:;
    if (false) goto $l69; else goto $l70;
    $l70:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, (panda$core$Int64) { 39 }, &$s72);
    abort();
    $l69:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f) {
    panda$core$Int64 $tmp77;
    panda$collections$Iterator* i86 = NULL;
    panda$collections$Iterator* $tmp87;
    panda$collections$Iterator* $tmp88;
    panda$core$Object* result93 = NULL;
    panda$core$Object* $tmp94;
    panda$core$Object* $tmp95;
    panda$core$Object* $tmp108;
    panda$core$Object* $tmp109;
    panda$core$Object* $tmp110;
    panda$core$Object* $tmp111;
    panda$core$Object* $tmp116;
    panda$core$Object* $returnValue119;
    panda$core$Object* $tmp120;
    ITable* $tmp73 = self->$class->itable;
    while ($tmp73->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp73 = $tmp73->next;
    }
    $fn75 $tmp74 = $tmp73->methods[0];
    panda$core$Int64 $tmp76 = $tmp74(self);
    panda$core$Int64$init$builtin_int64(&$tmp77, 0);
    panda$core$Bit $tmp78 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp76, $tmp77);
    if ($tmp78.value) goto $l79; else goto $l80;
    $l80:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s81, (panda$core$Int64) { 87 }, &$s82);
    abort();
    $l79:;
    int $tmp85;
    {
        ITable* $tmp89 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp89 = $tmp89->next;
        }
        $fn91 $tmp90 = $tmp89->methods[0];
        panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) self));
        $tmp88 = $tmp92;
        $tmp87 = $tmp88;
        i86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
        ITable* $tmp96 = i86->$class->itable;
        while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp96 = $tmp96->next;
        }
        $fn98 $tmp97 = $tmp96->methods[1];
        panda$core$Object* $tmp99 = $tmp97(i86);
        $tmp95 = $tmp99;
        $tmp94 = $tmp95;
        result93 = $tmp94;
        panda$core$Panda$ref$panda$core$Object$Q($tmp94);
        panda$core$Panda$unref$panda$core$Object$Q($tmp95);
        $l100:;
        ITable* $tmp103 = i86->$class->itable;
        while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp103 = $tmp103->next;
        }
        $fn105 $tmp104 = $tmp103->methods[0];
        panda$core$Bit $tmp106 = $tmp104(i86);
        panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
        bool $tmp102 = $tmp107.value;
        if (!$tmp102) goto $l101;
        {
            {
                $tmp108 = result93;
                ITable* $tmp112 = i86->$class->itable;
                while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp112 = $tmp112->next;
                }
                $fn114 $tmp113 = $tmp112->methods[1];
                panda$core$Object* $tmp115 = $tmp113(i86);
                $tmp111 = $tmp115;
                if (p_f->target) {
                    $tmp116 = (($fn117) p_f->pointer)(p_f->target, result93, $tmp111);
                } else {
                    $tmp116 = (($fn118) p_f->pointer)(result93, $tmp111);
                }
                $tmp110 = $tmp116;
                $tmp109 = $tmp110;
                result93 = $tmp109;
                panda$core$Panda$ref$panda$core$Object$Q($tmp109);
                panda$core$Panda$unref$panda$core$Object$Q($tmp110);
                panda$core$Panda$unref$panda$core$Object$Q($tmp111);
                panda$core$Panda$unref$panda$core$Object$Q($tmp108);
            }
        }
        goto $l100;
        $l101:;
        $tmp120 = result93;
        $returnValue119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object$Q($tmp120);
        $tmp85 = 0;
        goto $l83;
        $l121:;
        return $returnValue119;
    }
    $l83:;
    panda$core$Panda$unref$panda$core$Object$Q(result93);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) i86));
    i86 = NULL;
    result93 = NULL;
    switch ($tmp85) {
        case 0: goto $l121;
    }
    $l123:;
    if (false) goto $l124; else goto $l125;
    $l125:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, (panda$core$Int64) { 87 }, &$s127);
    abort();
    $l124:;
    abort();
}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result131 = NULL;
    panda$core$Object* $tmp132;
    panda$collections$Iterator* Iter$109$9136 = NULL;
    panda$collections$Iterator* $tmp137;
    panda$collections$Iterator* $tmp138;
    panda$core$Object* v154 = NULL;
    panda$core$Object* $tmp155;
    panda$core$Object* $tmp156;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp162;
    panda$core$Object* $tmp163;
    panda$core$Object* $tmp164;
    panda$core$Object* $returnValue169;
    panda$core$Object* $tmp170;
    int $tmp130;
    {
        $tmp132 = p_start;
        result131 = $tmp132;
        panda$core$Panda$ref$panda$core$Object$Q($tmp132);
        {
            int $tmp135;
            {
                ITable* $tmp139 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp139 = $tmp139->next;
                }
                $fn141 $tmp140 = $tmp139->methods[0];
                panda$collections$Iterator* $tmp142 = $tmp140(((panda$collections$Iterable*) self));
                $tmp138 = $tmp142;
                $tmp137 = $tmp138;
                Iter$109$9136 = $tmp137;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
                $l143:;
                ITable* $tmp146 = Iter$109$9136->$class->itable;
                while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp146 = $tmp146->next;
                }
                $fn148 $tmp147 = $tmp146->methods[0];
                panda$core$Bit $tmp149 = $tmp147(Iter$109$9136);
                panda$core$Bit $tmp150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp149);
                bool $tmp145 = $tmp150.value;
                if (!$tmp145) goto $l144;
                {
                    int $tmp153;
                    {
                        ITable* $tmp157 = Iter$109$9136->$class->itable;
                        while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp157 = $tmp157->next;
                        }
                        $fn159 $tmp158 = $tmp157->methods[1];
                        panda$core$Object* $tmp160 = $tmp158(Iter$109$9136);
                        $tmp156 = $tmp160;
                        $tmp155 = $tmp156;
                        v154 = $tmp155;
                        panda$core$Panda$ref$panda$core$Object$Q($tmp155);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp156);
                        {
                            $tmp161 = result131;
                            if (p_f->target) {
                                $tmp164 = (($fn165) p_f->pointer)(p_f->target, result131, v154);
                            } else {
                                $tmp164 = (($fn166) p_f->pointer)(result131, v154);
                            }
                            $tmp163 = $tmp164;
                            $tmp162 = $tmp163;
                            result131 = $tmp162;
                            panda$core$Panda$ref$panda$core$Object$Q($tmp162);
                            panda$core$Panda$unref$panda$core$Object$Q($tmp163);
                            panda$core$Panda$unref$panda$core$Object$Q($tmp161);
                        }
                    }
                    $tmp153 = -1;
                    goto $l151;
                    $l151:;
                    panda$core$Panda$unref$panda$core$Object$Q(v154);
                    v154 = NULL;
                    switch ($tmp153) {
                        case -1: goto $l167;
                    }
                    $l167:;
                }
                goto $l143;
                $l144:;
            }
            $tmp135 = -1;
            goto $l133;
            $l133:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$109$9136));
            Iter$109$9136 = NULL;
            switch ($tmp135) {
                case -1: goto $l168;
            }
            $l168:;
        }
        $tmp170 = result131;
        $returnValue169 = $tmp170;
        panda$core$Panda$ref$panda$core$Object$Q($tmp170);
        $tmp130 = 0;
        goto $l128;
        $l171:;
        return $returnValue169;
    }
    $l128:;
    panda$core$Panda$unref$panda$core$Object$Q(result131);
    result131 = NULL;
    switch ($tmp130) {
        case 0: goto $l171;
    }
    $l173:;
    if (false) goto $l174; else goto $l175;
    $l175:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s176, (panda$core$Int64) { 107 }, &$s177);
    abort();
    $l174:;
    abort();
}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$125$9181 = NULL;
    panda$collections$Iterator* $tmp182;
    panda$collections$Iterator* $tmp183;
    panda$core$Object* v199 = NULL;
    panda$core$Object* $tmp200;
    panda$core$Object* $tmp201;
    {
        int $tmp180;
        {
            ITable* $tmp184 = ((panda$collections$Iterable*) self)->$class->itable;
            while ($tmp184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp184 = $tmp184->next;
            }
            $fn186 $tmp185 = $tmp184->methods[0];
            panda$collections$Iterator* $tmp187 = $tmp185(((panda$collections$Iterable*) self));
            $tmp183 = $tmp187;
            $tmp182 = $tmp183;
            Iter$125$9181 = $tmp182;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
            $l188:;
            ITable* $tmp191 = Iter$125$9181->$class->itable;
            while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp191 = $tmp191->next;
            }
            $fn193 $tmp192 = $tmp191->methods[0];
            panda$core$Bit $tmp194 = $tmp192(Iter$125$9181);
            panda$core$Bit $tmp195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp194);
            bool $tmp190 = $tmp195.value;
            if (!$tmp190) goto $l189;
            {
                int $tmp198;
                {
                    ITable* $tmp202 = Iter$125$9181->$class->itable;
                    while ($tmp202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp202 = $tmp202->next;
                    }
                    $fn204 $tmp203 = $tmp202->methods[1];
                    panda$core$Object* $tmp205 = $tmp203(Iter$125$9181);
                    $tmp201 = $tmp205;
                    $tmp200 = $tmp201;
                    v199 = $tmp200;
                    panda$core$Panda$ref$panda$core$Object$Q($tmp200);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp201);
                    if (p_m->target) {
                        (($fn206) p_m->pointer)(p_m->target, v199);
                    } else {
                        (($fn207) p_m->pointer)(v199);
                    }
                }
                $tmp198 = -1;
                goto $l196;
                $l196:;
                panda$core$Panda$unref$panda$core$Object$Q(v199);
                v199 = NULL;
                switch ($tmp198) {
                    case -1: goto $l208;
                }
                $l208:;
            }
            goto $l188;
            $l189:;
        }
        $tmp180 = -1;
        goto $l178;
        $l178:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$125$9181));
        Iter$125$9181 = NULL;
        switch ($tmp180) {
            case -1: goto $l209;
        }
        $l209:;
    }
}





