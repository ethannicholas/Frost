#include "panda/math/XorShift128Plus.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/math/Random.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$math$XorShift128Plus$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64} };

panda$math$XorShift128Plus$class_type panda$math$XorShift128Plus$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$XorShift128Plus$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn21)(panda$math$XorShift128Plus*);


void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_seed, ((panda$core$Int64) { 123456789 }));
    self->state1 = $tmp1;
    panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->state1, ((panda$core$Int64) { 0 }));
    if ($tmp2.value) {
    {
        self->state1 = ((panda$core$Int64) { 123456789 });
    }
    }
    panda$core$Int64 $tmp3 = panda$core$Int64$$BNOT$R$panda$core$Int64(self->state1);
    self->state2 = $tmp3;
}
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* self) {
    panda$core$Int64 x4;
    panda$core$Int64 y5;
    x4 = self->state1;
    y5 = self->state2;
    self->state1 = y5;
    panda$core$Int64 $tmp6 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(x4, ((panda$core$Int64) { 23 }));
    panda$core$Int64 $tmp7 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x4, $tmp6);
    x4 = $tmp7;
    panda$core$Int64 $tmp8 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x4, y5);
    panda$core$Int64 $tmp9 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(x4, ((panda$core$Int64) { 17 }));
    panda$core$Int64 $tmp10 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp8, $tmp9);
    panda$core$Int64 $tmp11 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(y5, ((panda$core$Int64) { 26 }));
    panda$core$Int64 $tmp12 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp10, $tmp11);
    self->state2 = $tmp12;
    panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->state2, y5);
    return $tmp13;
}
panda$core$Int64 panda$math$XorShift128Plus$int$panda$core$Int64$R$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_n) {
    panda$core$Int64 min15;
    panda$core$Int64 x20;
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n, ((panda$core$Int64) { 1 }));
    if ($tmp14.value) {
    {
        return ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Int64 $tmp16 = panda$core$Int64$$SUB$R$panda$core$Int64(p_n);
    panda$core$Int64 $tmp17 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp16, p_n);
    min15 = $tmp17;
    $l18:;
    while (true) {
    {
        panda$core$Int64 $tmp22 = (($fn21) self->$class->vtable[2])(self);
        x20 = $tmp22;
        panda$core$Bit $tmp23 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(x20, min15);
        if ($tmp23.value) {
        {
            panda$core$Int64 $tmp24 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(x20, p_n);
            return $tmp24;
        }
        }
    }
    }
    $l19:;
}

