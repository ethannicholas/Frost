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
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$Random$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$Random$class_type panda$math$Random$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$Random$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

typedef panda$core$Int64 (*$fn12)(panda$math$Random*);
typedef panda$core$Int64 (*$fn20)(panda$math$Random*);
typedef panda$core$Int64 (*$fn47)(panda$math$Random*);
typedef panda$core$Int32 (*$fn74)(panda$math$Random*);
typedef panda$core$Int64 (*$fn101)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 91, -8241417805943957811, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 4829225525059687821, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, 219884244517965983, NULL };

panda$math$Random* panda$math$Random$default$R$panda$math$Random() {
    panda$math$Random* $returnValue2;
    panda$math$Random* $tmp3;
    panda$math$XorShift128Plus* $tmp4;
    panda$core$Int64 $tmp6;
    panda$math$XorShift128Plus* $tmp5 = (panda$math$XorShift128Plus*) pandaObjectAlloc(32, (panda$core$Class*) &panda$math$XorShift128Plus$class);
    int64_t $tmp7 = panda$core$Panda$currentTime$R$builtin_int64();
    panda$core$Int64$init$builtin_int64(&$tmp6, $tmp7);
    panda$math$XorShift128Plus$init$panda$core$Int64($tmp5, $tmp6);
    $tmp4 = $tmp5;
    $tmp3 = ((panda$math$Random*) $tmp4);
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* self) {
    panda$core$Bit $returnValue9;
    panda$core$Int64 $tmp14;
    ITable* $tmp10 = self->$class->itable;
    while ($tmp10->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp10 = $tmp10->next;
    }
    $fn12 $tmp11 = $tmp10->methods[2];
    panda$core$Int64 $tmp13 = $tmp11(self);
    panda$core$Int64$init$builtin_int64(&$tmp14, 0);
    panda$core$Bit $tmp15 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp13, $tmp14);
    $returnValue9 = $tmp15;
    return $returnValue9;
}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* self) {
    panda$core$Int32 $returnValue17;
    ITable* $tmp18 = self->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[2];
    panda$core$Int64 $tmp21 = $tmp19(self);
    panda$core$Int32 $tmp22 = panda$core$Int64$convert$R$panda$core$Int32($tmp21);
    $returnValue17 = $tmp22;
    return $returnValue17;
}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n) {
    panda$core$Int64 $tmp27;
    panda$core$Int64 $tmp33;
    panda$core$Int64 $returnValue35;
    panda$core$Int64 $tmp36;
    panda$core$Int64 min39;
    panda$core$Int64 x44;
    panda$core$Int64 $tmp59;
    int $tmp26;
    {
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Bit $tmp28 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_n, $tmp27);
        if ($tmp28.value) goto $l29; else goto $l30;
        $l30:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s31, (panda$core$Int64) { 53 }, &$s32);
        abort();
        $l29:;
        panda$core$Int64$init$builtin_int64(&$tmp33, 1);
        panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, $tmp33);
        if ($tmp34.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp36, 0);
            $returnValue35 = $tmp36;
            $tmp26 = 0;
            goto $l24;
            $l37:;
            return $returnValue35;
        }
        }
        panda$core$Int64 $tmp40 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
        panda$core$Int64 $tmp41 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp40, p_n);
        min39 = $tmp41;
        $l42:;
        while (true) {
        {
            ITable* $tmp45 = self->$class->itable;
            while ($tmp45->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp45 = $tmp45->next;
            }
            $fn47 $tmp46 = $tmp45->methods[2];
            panda$core$Int64 $tmp48 = $tmp46(self);
            x44 = $tmp48;
            panda$core$Bit $tmp49 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x44, min39);
            if ($tmp49.value) {
            {
                panda$core$Int64 $tmp50 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x44, p_n);
                $returnValue35 = $tmp50;
                $tmp26 = 1;
                goto $l24;
                $l51:;
                return $returnValue35;
            }
            }
        }
        }
        $l43:;
        if (false) goto $l53; else goto $l54;
        $l54:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, (panda$core$Int64) { 53 }, &$s56);
        abort();
        $l53:;
    }
    $tmp26 = -1;
    goto $l24;
    $l24:;
    panda$core$Int64$init$builtin_int64(&$tmp59, 0);
    panda$core$Bit $tmp60 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue35, $tmp59);
    bool $tmp58 = $tmp60.value;
    if (!$tmp58) goto $l61;
    panda$core$Bit $tmp62 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($returnValue35, p_n);
    $tmp58 = $tmp62.value;
    $l61:;
    panda$core$Bit $tmp63 = { $tmp58 };
    if ($tmp63.value) goto $l64; else goto $l65;
    $l65:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s66, (panda$core$Int64) { 53 }, &$s67);
    abort();
    $l64:;
    switch ($tmp26) {
        case -1: goto $l57;
        case 0: goto $l37;
        case 1: goto $l51;
    }
    $l57:;
    abort();
}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self) {
    panda$core$Real32 $returnValue71;
    panda$core$UInt32 $tmp77;
    panda$core$UInt32 $tmp79;
    panda$core$Real32 $tmp85;
    panda$core$Real32 $tmp88;
    int $tmp70;
    {
        ITable* $tmp72 = self->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[1];
        panda$core$Int32 $tmp75 = $tmp73(self);
        panda$core$UInt32 $tmp76 = panda$core$Int32$convert$R$panda$core$UInt32($tmp75);
        panda$core$UInt32$init$builtin_uint32(&$tmp77, 8);
        panda$core$UInt32 $tmp78 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp76, $tmp77);
        panda$core$UInt32$init$builtin_uint32(&$tmp79, 16777216);
        panda$core$Real32 $tmp80 = panda$core$UInt32$$DIV$panda$core$UInt32$R$panda$core$Real32($tmp78, $tmp79);
        $returnValue71 = $tmp80;
        $tmp70 = 0;
        goto $l68;
        $l81:;
        return $returnValue71;
    }
    $l68:;
    panda$core$Real32$init$builtin_float32(&$tmp85, 0.0);
    panda$core$Bit $tmp86 = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit($returnValue71, $tmp85);
    bool $tmp84 = $tmp86.value;
    if (!$tmp84) goto $l87;
    panda$core$Real32$init$builtin_float32(&$tmp88, 1.0);
    panda$core$Bit $tmp89 = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit($returnValue71, $tmp88);
    $tmp84 = $tmp89.value;
    $l87:;
    panda$core$Bit $tmp90 = { $tmp84 };
    if ($tmp90.value) goto $l91; else goto $l92;
    $l92:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s93, (panda$core$Int64) { 74 }, &$s94);
    abort();
    $l91:;
    switch ($tmp70) {
        case 0: goto $l81;
    }
    $l83:;
    abort();
}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self) {
    panda$core$Real64 $returnValue98;
    panda$core$UInt64 $tmp104;
    panda$core$UInt64 $tmp106;
    panda$core$Real64 $tmp112;
    panda$core$Real64 $tmp115;
    int $tmp97;
    {
        ITable* $tmp99 = self->$class->itable;
        while ($tmp99->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp99 = $tmp99->next;
        }
        $fn101 $tmp100 = $tmp99->methods[2];
        panda$core$Int64 $tmp102 = $tmp100(self);
        panda$core$UInt64 $tmp103 = panda$core$Int64$convert$R$panda$core$UInt64($tmp102);
        panda$core$UInt64$init$builtin_uint64(&$tmp104, 11);
        panda$core$UInt64 $tmp105 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp103, $tmp104);
        panda$core$UInt64$init$builtin_uint64(&$tmp106, 9007199254740992);
        panda$core$Real64 $tmp107 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp105, $tmp106);
        $returnValue98 = $tmp107;
        $tmp97 = 0;
        goto $l95;
        $l108:;
        return $returnValue98;
    }
    $l95:;
    panda$core$Real64$init$builtin_float64(&$tmp112, 0.0);
    panda$core$Bit $tmp113 = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit($returnValue98, $tmp112);
    bool $tmp111 = $tmp113.value;
    if (!$tmp111) goto $l114;
    panda$core$Real64$init$builtin_float64(&$tmp115, 1.0);
    panda$core$Bit $tmp116 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit($returnValue98, $tmp115);
    $tmp111 = $tmp116.value;
    $l114:;
    panda$core$Bit $tmp117 = { $tmp111 };
    if ($tmp117.value) goto $l118; else goto $l119;
    $l119:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s120, (panda$core$Int64) { 85 }, &$s121);
    abort();
    $l118:;
    switch ($tmp97) {
        case 0: goto $l108;
    }
    $l110:;
    abort();
}





