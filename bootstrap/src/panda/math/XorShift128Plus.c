#include "panda/math/XorShift128Plus.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$math$XorShift128Plus$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64} };

static panda$core$String $s1;
panda$math$XorShift128Plus$class_type panda$math$XorShift128Plus$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$XorShift128Plus$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$XorShift128Plus$cleanup, panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn26)(panda$math$XorShift128Plus*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 215641961116556169, NULL };

void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_seed, ((panda$core$Int64) { 123456789 }));
    self->state1 = $tmp2;
    panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->state1, ((panda$core$Int64) { 0 }));
    if ($tmp3.value) {
    {
        self->state1 = ((panda$core$Int64) { 123456789 });
    }
    }
    panda$core$Int64 $tmp4 = panda$core$Int64$$BNOT$R$panda$core$Int64(self->state1);
    self->state2 = $tmp4;
}
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* self) {
    panda$core$Int64 x5;
    panda$core$Int64 y6;
    panda$core$Int64 $finallyReturn13;
    x5 = self->state1;
    y6 = self->state2;
    self->state1 = y6;
    panda$core$Int64 $tmp7 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(x5, ((panda$core$Int64) { 23 }));
    panda$core$Int64 $tmp8 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x5, $tmp7);
    x5 = $tmp8;
    panda$core$Int64 $tmp9 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x5, y6);
    panda$core$Int64 $tmp10 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(x5, ((panda$core$Int64) { 17 }));
    panda$core$Int64 $tmp11 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp10);
    panda$core$Int64 $tmp12 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(y6, ((panda$core$Int64) { 26 }));
    panda$core$Int64 $tmp13 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp11, $tmp12);
    self->state2 = $tmp13;
    panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->state2, y6);
    $finallyReturn13 = $tmp15;
    return $finallyReturn13;
}
panda$core$Int64 panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_n) {
    panda$core$Int64 $finallyReturn17;
    panda$core$Int64 min20;
    panda$core$Int64 x25;
    panda$core$Int64 $finallyReturn28;
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
    if ($tmp17.value) {
    {
        $finallyReturn17 = ((panda$core$Int64) { 0 });
        return $finallyReturn17;
    }
    }
    panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
    panda$core$Int64 $tmp22 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp21, p_n);
    min20 = $tmp22;
    $l23:;
    while (true) {
    {
        panda$core$Int64 $tmp27 = (($fn26) self->$class->vtable[2])(self);
        x25 = $tmp27;
        panda$core$Bit $tmp28 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x25, min20);
        if ($tmp28.value) {
        {
            panda$core$Int64 $tmp30 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x25, p_n);
            $finallyReturn28 = $tmp30;
            return $finallyReturn28;
        }
        }
    }
    }
    $l24:;
}
void panda$math$XorShift128Plus$cleanup(panda$math$XorShift128Plus* self) {
    int $tmp34;
    {
    }
    $tmp34 = -1;
    goto $l32;
    $l32:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp34) {
        case -1: goto $l35;
    }
    $l35:;
}

