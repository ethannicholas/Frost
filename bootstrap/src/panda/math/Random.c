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
typedef panda$core$Int64 (*$fn23)(panda$math$Random*);
typedef panda$core$Int64 (*$fn50)(panda$math$Random*);
typedef panda$core$Int32 (*$fn77)(panda$math$Random*);
typedef panda$core$Int64 (*$fn104)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 91, -8241417805943957811, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 4829225525059687821, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, 219884244517965983, NULL };

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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    return $returnValue2;
}
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* self) {
    panda$core$Int64 test9;
    panda$core$Bit $returnValue14;
    panda$core$Int64 $tmp15;
    panda$core$Int64 $tmp17;
    ITable* $tmp10 = self->$class->itable;
    while ($tmp10->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp10 = $tmp10->next;
    }
    $fn12 $tmp11 = $tmp10->methods[2];
    panda$core$Int64 $tmp13 = $tmp11(self);
    test9 = $tmp13;
    panda$core$Int64$init$builtin_int64(&$tmp15, 1);
    panda$core$Int64 $tmp16 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(test9, $tmp15);
    panda$core$Int64$init$builtin_int64(&$tmp17, 0);
    panda$core$Bit $tmp18 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp16, $tmp17);
    $returnValue14 = $tmp18;
    return $returnValue14;
}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* self) {
    panda$core$Int32 $returnValue20;
    ITable* $tmp21 = self->$class->itable;
    while ($tmp21->$class != (panda$core$Class*) &panda$math$Random$class) {
        $tmp21 = $tmp21->next;
    }
    $fn23 $tmp22 = $tmp21->methods[2];
    panda$core$Int64 $tmp24 = $tmp22(self);
    panda$core$Int32 $tmp25 = panda$core$Int64$convert$R$panda$core$Int32($tmp24);
    $returnValue20 = $tmp25;
    return $returnValue20;
}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n) {
    panda$core$Int64 $tmp30;
    panda$core$Int64 $tmp36;
    panda$core$Int64 $returnValue38;
    panda$core$Int64 $tmp39;
    panda$core$Int64 min42;
    panda$core$Int64 x47;
    panda$core$Int64 $tmp62;
    int $tmp29;
    {
        panda$core$Int64$init$builtin_int64(&$tmp30, 1);
        panda$core$Bit $tmp31 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_n, $tmp30);
        if ($tmp31.value) goto $l32; else goto $l33;
        $l33:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, (panda$core$Int64) { 54 }, &$s35);
        abort();
        $l32:;
        panda$core$Int64$init$builtin_int64(&$tmp36, 1);
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, $tmp36);
        if ($tmp37.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp39, 0);
            $returnValue38 = $tmp39;
            $tmp29 = 0;
            goto $l27;
            $l40:;
            return $returnValue38;
        }
        }
        panda$core$Int64 $tmp43 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
        panda$core$Int64 $tmp44 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp43, p_n);
        min42 = $tmp44;
        $l45:;
        while (true) {
        {
            ITable* $tmp48 = self->$class->itable;
            while ($tmp48->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp48 = $tmp48->next;
            }
            $fn50 $tmp49 = $tmp48->methods[2];
            panda$core$Int64 $tmp51 = $tmp49(self);
            x47 = $tmp51;
            panda$core$Bit $tmp52 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x47, min42);
            if ($tmp52.value) {
            {
                panda$core$Int64 $tmp53 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x47, p_n);
                $returnValue38 = $tmp53;
                $tmp29 = 1;
                goto $l27;
                $l54:;
                return $returnValue38;
            }
            }
        }
        }
        $l46:;
        if (false) goto $l56; else goto $l57;
        $l57:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s58, (panda$core$Int64) { 54 }, &$s59);
        abort();
        $l56:;
    }
    $tmp29 = -1;
    goto $l27;
    $l27:;
    panda$core$Int64$init$builtin_int64(&$tmp62, 0);
    panda$core$Bit $tmp63 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue38, $tmp62);
    bool $tmp61 = $tmp63.value;
    if (!$tmp61) goto $l64;
    panda$core$Bit $tmp65 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($returnValue38, p_n);
    $tmp61 = $tmp65.value;
    $l64:;
    panda$core$Bit $tmp66 = { $tmp61 };
    if ($tmp66.value) goto $l67; else goto $l68;
    $l68:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s69, (panda$core$Int64) { 54 }, &$s70);
    abort();
    $l67:;
    switch ($tmp29) {
        case 1: goto $l54;
        case -1: goto $l60;
        case 0: goto $l40;
    }
    $l60:;
    abort();
}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self) {
    panda$core$Real32 $returnValue74;
    panda$core$UInt32 $tmp80;
    panda$core$UInt32 $tmp82;
    panda$core$Real32 $tmp88;
    panda$core$Real32 $tmp91;
    int $tmp73;
    {
        ITable* $tmp75 = self->$class->itable;
        while ($tmp75->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp75 = $tmp75->next;
        }
        $fn77 $tmp76 = $tmp75->methods[1];
        panda$core$Int32 $tmp78 = $tmp76(self);
        panda$core$UInt32 $tmp79 = panda$core$Int32$convert$R$panda$core$UInt32($tmp78);
        panda$core$UInt32$init$builtin_uint32(&$tmp80, 8);
        panda$core$UInt32 $tmp81 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp79, $tmp80);
        panda$core$UInt32$init$builtin_uint32(&$tmp82, 16777216);
        panda$core$Real32 $tmp83 = panda$core$UInt32$$DIV$panda$core$UInt32$R$panda$core$Real32($tmp81, $tmp82);
        $returnValue74 = $tmp83;
        $tmp73 = 0;
        goto $l71;
        $l84:;
        return $returnValue74;
    }
    $l71:;
    panda$core$Real32$init$builtin_float32(&$tmp88, 0.0);
    panda$core$Bit $tmp89 = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit($returnValue74, $tmp88);
    bool $tmp87 = $tmp89.value;
    if (!$tmp87) goto $l90;
    panda$core$Real32$init$builtin_float32(&$tmp91, 1.0);
    panda$core$Bit $tmp92 = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit($returnValue74, $tmp91);
    $tmp87 = $tmp92.value;
    $l90:;
    panda$core$Bit $tmp93 = { $tmp87 };
    if ($tmp93.value) goto $l94; else goto $l95;
    $l95:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s96, (panda$core$Int64) { 75 }, &$s97);
    abort();
    $l94:;
    switch ($tmp73) {
        case 0: goto $l84;
    }
    $l86:;
    abort();
}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self) {
    panda$core$Real64 $returnValue101;
    panda$core$UInt64 $tmp107;
    panda$core$UInt64 $tmp109;
    panda$core$Real64 $tmp115;
    panda$core$Real64 $tmp118;
    int $tmp100;
    {
        ITable* $tmp102 = self->$class->itable;
        while ($tmp102->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp102 = $tmp102->next;
        }
        $fn104 $tmp103 = $tmp102->methods[2];
        panda$core$Int64 $tmp105 = $tmp103(self);
        panda$core$UInt64 $tmp106 = panda$core$Int64$convert$R$panda$core$UInt64($tmp105);
        panda$core$UInt64$init$builtin_uint64(&$tmp107, 11);
        panda$core$UInt64 $tmp108 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp106, $tmp107);
        panda$core$UInt64$init$builtin_uint64(&$tmp109, 9007199254740992);
        panda$core$Real64 $tmp110 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp108, $tmp109);
        $returnValue101 = $tmp110;
        $tmp100 = 0;
        goto $l98;
        $l111:;
        return $returnValue101;
    }
    $l98:;
    panda$core$Real64$init$builtin_float64(&$tmp115, 0.0);
    panda$core$Bit $tmp116 = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit($returnValue101, $tmp115);
    bool $tmp114 = $tmp116.value;
    if (!$tmp114) goto $l117;
    panda$core$Real64$init$builtin_float64(&$tmp118, 1.0);
    panda$core$Bit $tmp119 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit($returnValue101, $tmp118);
    $tmp114 = $tmp119.value;
    $l117:;
    panda$core$Bit $tmp120 = { $tmp114 };
    if ($tmp120.value) goto $l121; else goto $l122;
    $l122:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, (panda$core$Int64) { 86 }, &$s124);
    abort();
    $l121:;
    switch ($tmp100) {
        case 0: goto $l111;
    }
    $l113:;
    abort();
}





