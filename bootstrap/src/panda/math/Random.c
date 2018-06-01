#include "panda/math/Random.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/XorShift128Plus.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$Random$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$Random$class_type panda$math$Random$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$Random$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

typedef panda$core$Int64 (*$fn11)(panda$math$Random*);
typedef panda$core$Int64 (*$fn18)(panda$math$Random*);
typedef panda$core$Int64 (*$fn42)(panda$math$Random*);
typedef panda$core$Int64 (*$fn80)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 91, -8241417805943957811, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 4829225525059687821, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, 219884244517965983, NULL };

panda$math$Random* panda$math$Random$default$R$panda$math$Random() {
    panda$math$Random* $returnValue2;
    panda$math$Random* $tmp3;
    panda$math$XorShift128Plus* $tmp4;
    panda$math$XorShift128Plus* $tmp5 = (panda$math$XorShift128Plus*) pandaObjectAlloc(32, (panda$core$Class*) &panda$math$XorShift128Plus$class);
    int64_t $tmp6 = panda$core$Panda$currentTime$R$builtin_int64();
    panda$math$XorShift128Plus$init$panda$core$Int64($tmp5, ((panda$core$Int64) { $tmp6 }));
    $tmp4 = $tmp5;
    $tmp3 = ((panda$math$Random*) $tmp4);
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* self) {
    panda$core$Bit $returnValue8;
    ITable* $tmp9 = self->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[2];
    panda$core$Int64 $tmp12 = $tmp10(self);
    panda$core$Bit $tmp13 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp12, ((panda$core$Int64) { 0 }));
    $returnValue8 = $tmp13;
    return $returnValue8;
}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* self) {
    panda$core$Int32 $returnValue15;
    ITable* $tmp16 = self->$class->itable;
    while ($tmp16->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp16 = $tmp16->next;
    }
    $fn18 $tmp17 = $tmp16->methods[2];
    panda$core$Int64 $tmp19 = $tmp17(self);
    panda$core$Int32 $tmp20 = panda$core$Int64$convert$R$panda$core$Int32($tmp19);
    $returnValue15 = $tmp20;
    return $returnValue15;
}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n) {
    panda$core$Int64 $returnValue31;
    panda$core$Int64 min34;
    panda$core$Int64 x39;
    int $tmp24;
    {
        panda$core$Bit $tmp25 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
        if ($tmp25.value) goto $l26; else goto $l27;
        $l27:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s28, (panda$core$Int64) { 46 }, &$s29);
        abort();
        $l26:;
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
        if ($tmp30.value) {
        {
            $returnValue31 = ((panda$core$Int64) { 0 });
            $tmp24 = 0;
            goto $l22;
            $l32:;
            return $returnValue31;
        }
        }
        panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
        panda$core$Int64 $tmp36 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp35, p_n);
        min34 = $tmp36;
        $l37:;
        while (true) {
        {
            ITable* $tmp40 = self->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[2];
            panda$core$Int64 $tmp43 = $tmp41(self);
            x39 = $tmp43;
            panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x39, min34);
            if ($tmp44.value) {
            {
                panda$core$Int64 $tmp45 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x39, p_n);
                $returnValue31 = $tmp45;
                $tmp24 = 1;
                goto $l22;
                $l46:;
                return $returnValue31;
            }
            }
        }
        }
        $l38:;
    }
    $tmp24 = -1;
    goto $l22;
    $l22:;
    panda$core$Bit $tmp50 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue31, ((panda$core$Int64) { 0 }));
    bool $tmp49 = $tmp50.value;
    if (!$tmp49) goto $l51;
    panda$core$Bit $tmp52 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($returnValue31, p_n);
    $tmp49 = $tmp52.value;
    $l51:;
    panda$core$Bit $tmp53 = { $tmp49 };
    if ($tmp53.value) goto $l54; else goto $l55;
    $l55:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s56, (panda$core$Int64) { 46 }, &$s57);
    abort();
    $l54:;
    switch ($tmp24) {
        case -1: goto $l48;
        case 1: goto $l46;
        case 0: goto $l32;
    }
    $l48:;
    abort();
}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self) {
    panda$core$Real32 $returnValue61;
    int $tmp60;
    {
        $returnValue61 = ((panda$core$Real32) { 12.0 });
        $tmp60 = 0;
        goto $l58;
        $l62:;
        return $returnValue61;
    }
    $l58:;
    panda$core$Bit $tmp66 = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit($returnValue61, ((panda$core$Real32) { 0.0 }));
    bool $tmp65 = $tmp66.value;
    if (!$tmp65) goto $l67;
    panda$core$Bit $tmp68 = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit($returnValue61, ((panda$core$Real32) { 1.0 }));
    $tmp65 = $tmp68.value;
    $l67:;
    panda$core$Bit $tmp69 = { $tmp65 };
    if ($tmp69.value) goto $l70; else goto $l71;
    $l71:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s72, (panda$core$Int64) { 66 }, &$s73);
    abort();
    $l70:;
    switch ($tmp60) {
        case 0: goto $l62;
    }
    $l64:;
    abort();
}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self) {
    panda$core$Real64 $returnValue77;
    int $tmp76;
    {
        ITable* $tmp78 = self->$class->itable;
        while ($tmp78->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp78 = $tmp78->next;
        }
        $fn80 $tmp79 = $tmp78->methods[2];
        panda$core$Int64 $tmp81 = $tmp79(self);
        panda$core$UInt64 $tmp82 = panda$core$Int64$convert$R$panda$core$UInt64($tmp81);
        panda$core$UInt64 $tmp83 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp82, ((panda$core$UInt64) { 11 }));
        panda$core$Real64 $tmp84 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp83, ((panda$core$UInt64) { 9007199254740992 }));
        $returnValue77 = $tmp84;
        $tmp76 = 0;
        goto $l74;
        $l85:;
        return $returnValue77;
    }
    $l74:;
    panda$core$Bit $tmp89 = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit($returnValue77, ((panda$core$Real64) { 0.0 }));
    bool $tmp88 = $tmp89.value;
    if (!$tmp88) goto $l90;
    panda$core$Bit $tmp91 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit($returnValue77, ((panda$core$Real64) { 1.0 }));
    $tmp88 = $tmp91.value;
    $l90:;
    panda$core$Bit $tmp92 = { $tmp88 };
    if ($tmp92.value) goto $l93; else goto $l94;
    $l94:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s95, (panda$core$Int64) { 76 }, &$s96);
    abort();
    $l93:;
    switch ($tmp76) {
        case 0: goto $l85;
    }
    $l87:;
    abort();
}





