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
typedef panda$core$Int64 (*$fn38)(panda$math$Random*);
typedef panda$core$Int64 (*$fn68)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };

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
    panda$core$Int64 $returnValue27;
    panda$core$Int64 min30;
    panda$core$Int64 x35;
    int $tmp24;
    {
        panda$core$Bit $tmp25 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp25.value);
        panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
        if ($tmp26.value) {
        {
            $returnValue27 = ((panda$core$Int64) { 0 });
            $tmp24 = 0;
            goto $l22;
            $l28:;
            return $returnValue27;
        }
        }
        panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
        panda$core$Int64 $tmp32 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp31, p_n);
        min30 = $tmp32;
        $l33:;
        while (true) {
        {
            ITable* $tmp36 = self->$class->itable;
            while ($tmp36->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp36 = $tmp36->next;
            }
            $fn38 $tmp37 = $tmp36->methods[2];
            panda$core$Int64 $tmp39 = $tmp37(self);
            x35 = $tmp39;
            panda$core$Bit $tmp40 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x35, min30);
            if ($tmp40.value) {
            {
                panda$core$Int64 $tmp41 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x35, p_n);
                $returnValue27 = $tmp41;
                $tmp24 = 1;
                goto $l22;
                $l42:;
                return $returnValue27;
            }
            }
        }
        }
        $l34:;
    }
    $tmp24 = -1;
    goto $l22;
    $l22:;
    panda$core$Bit $tmp46 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($returnValue27, ((panda$core$Int64) { 0 }));
    bool $tmp45 = $tmp46.value;
    if (!$tmp45) goto $l47;
    panda$core$Bit $tmp48 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($returnValue27, p_n);
    $tmp45 = $tmp48.value;
    $l47:;
    panda$core$Bit $tmp49 = { $tmp45 };
    PANDA_ASSERT($tmp49.value);
    switch ($tmp24) {
        case -1: goto $l44;
        case 0: goto $l28;
        case 1: goto $l42;
    }
    $l44:;
}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self) {
    panda$core$Real32 $returnValue53;
    int $tmp52;
    {
        $returnValue53 = ((panda$core$Real32) { 12.0 });
        $tmp52 = 0;
        goto $l50;
        $l54:;
        return $returnValue53;
    }
    $l50:;
    panda$core$Bit $tmp58 = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit($returnValue53, ((panda$core$Real32) { 0.0 }));
    bool $tmp57 = $tmp58.value;
    if (!$tmp57) goto $l59;
    panda$core$Bit $tmp60 = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit($returnValue53, ((panda$core$Real32) { 1.0 }));
    $tmp57 = $tmp60.value;
    $l59:;
    panda$core$Bit $tmp61 = { $tmp57 };
    PANDA_ASSERT($tmp61.value);
    switch ($tmp52) {
        case 0: goto $l54;
    }
    $l56:;
}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self) {
    panda$core$Real64 $returnValue65;
    int $tmp64;
    {
        ITable* $tmp66 = self->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[2];
        panda$core$Int64 $tmp69 = $tmp67(self);
        panda$core$UInt64 $tmp70 = panda$core$Int64$convert$R$panda$core$UInt64($tmp69);
        panda$core$UInt64 $tmp71 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp70, ((panda$core$UInt64) { 11 }));
        panda$core$Real64 $tmp72 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp71, ((panda$core$UInt64) { 9007199254740992 }));
        $returnValue65 = $tmp72;
        $tmp64 = 0;
        goto $l62;
        $l73:;
        return $returnValue65;
    }
    $l62:;
    panda$core$Bit $tmp77 = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit($returnValue65, ((panda$core$Real64) { 0.0 }));
    bool $tmp76 = $tmp77.value;
    if (!$tmp76) goto $l78;
    panda$core$Bit $tmp79 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit($returnValue65, ((panda$core$Real64) { 1.0 }));
    $tmp76 = $tmp79.value;
    $l78:;
    panda$core$Bit $tmp80 = { $tmp76 };
    PANDA_ASSERT($tmp80.value);
    switch ($tmp64) {
        case 0: goto $l73;
    }
    $l75:;
}






