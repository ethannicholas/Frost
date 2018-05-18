#include "panda/core/Comparable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Comparable$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { NULL, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Comparable$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Comparable$_panda$core$Comparable, { NULL, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$core$Comparable$class_type panda$core$Comparable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Comparable$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit, panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn5)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn11)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn18)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -5254568576296725552, NULL };

panda$core$Bit panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other) {
    panda$core$Bit $finallyReturn1;
    ITable* $tmp3 = p_other->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$core$Comparable$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Bit $tmp6 = $tmp4(p_other, self);
    $finallyReturn1 = $tmp6;
    return $finallyReturn1;
}
panda$core$Bit panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other) {
    panda$core$Bit $finallyReturn7;
    ITable* $tmp9 = self->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$core$Comparable$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[1];
    panda$core$Bit $tmp12 = $tmp10(self, p_other);
    panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
    $finallyReturn7 = $tmp13;
    return $finallyReturn7;
}
panda$core$Bit panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* self, panda$core$Comparable* p_other) {
    panda$core$Bit $finallyReturn14;
    ITable* $tmp16 = self->$class->itable;
    while ($tmp16->$class != (panda$core$Class*) &panda$core$Comparable$class) {
        $tmp16 = $tmp16->next;
    }
    $fn18 $tmp17 = $tmp16->methods[0];
    panda$core$Bit $tmp19 = $tmp17(self, p_other);
    panda$core$Bit $tmp20 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp19);
    $finallyReturn14 = $tmp20;
    return $finallyReturn14;
}






