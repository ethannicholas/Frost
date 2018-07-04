#include "panda/math/XorShift128Plus.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$XorShift128Plus$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$XorShift128Plus$class_type panda$math$XorShift128Plus$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$XorShift128Plus$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$XorShift128Plus$cleanup, panda$math$XorShift128Plus$int64$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 215641961116556169, NULL };

void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp8;
    panda$core$Int64$init$builtin_int64(&$tmp2, 6713);
    panda$core$Int64 $tmp3 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(p_seed, $tmp2);
    panda$core$Int64$init$builtin_int64(&$tmp4, 123456789);
    panda$core$Int64 $tmp5 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3, $tmp4);
    self->state1 = $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->state1, $tmp6);
    if ($tmp7.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp8, 123456789);
        self->state1 = $tmp8;
    }
    }
    panda$core$Int64 $tmp9 = panda$core$Int64$$BNOT$R$panda$core$Int64(self->state1);
    self->state2 = $tmp9;
}
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* self) {
    panda$core$Int64 x10;
    panda$core$Int64 y11;
    panda$core$Int64 $tmp12;
    panda$core$Int64 $tmp16;
    panda$core$Int64 $tmp19;
    panda$core$Int64 $returnValue22;
    x10 = self->state1;
    y11 = self->state2;
    self->state1 = y11;
    panda$core$Int64$init$builtin_int64(&$tmp12, 23);
    panda$core$Int64 $tmp13 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(x10, $tmp12);
    panda$core$Int64 $tmp14 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x10, $tmp13);
    x10 = $tmp14;
    panda$core$Int64 $tmp15 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(x10, y11);
    panda$core$Int64$init$builtin_int64(&$tmp16, 17);
    panda$core$Int64 $tmp17 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(x10, $tmp16);
    panda$core$Int64 $tmp18 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp15, $tmp17);
    panda$core$Int64$init$builtin_int64(&$tmp19, 26);
    panda$core$Int64 $tmp20 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(y11, $tmp19);
    panda$core$Int64 $tmp21 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp18, $tmp20);
    self->state2 = $tmp21;
    panda$core$Int64 $tmp23 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->state2, y11);
    $returnValue22 = $tmp23;
    return $returnValue22;
}
void panda$math$XorShift128Plus$cleanup(panda$math$XorShift128Plus* self) {
    int $tmp27;
    {
    }
    $tmp27 = -1;
    goto $l25;
    $l25:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp27) {
        case -1: goto $l28;
    }
    $l28:;
}





