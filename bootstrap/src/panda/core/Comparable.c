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

typedef panda$core$Bit (*$fn4)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn8)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn13)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -5254568576296725552, NULL };

panda$core$Bit panda$core$Comparable$$LT$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* param0, panda$core$Comparable* param1) {

// line 13
ITable* $tmp2 = param1->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
panda$core$Bit $tmp5 = $tmp3(param1, param0);
return $tmp5;

}
panda$core$Bit panda$core$Comparable$$GE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* param0, panda$core$Comparable* param1) {

// line 18
ITable* $tmp6 = param0->$class->itable;
while ($tmp6->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[1];
panda$core$Bit $tmp9 = $tmp7(param0, param1);
panda$core$Bit $tmp10 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp9);
return $tmp10;

}
panda$core$Bit panda$core$Comparable$$LE$panda$core$Comparable$T$R$panda$core$Bit(panda$core$Comparable* param0, panda$core$Comparable* param1) {

// line 23
ITable* $tmp11 = param0->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Bit $tmp14 = $tmp12(param0, param1);
panda$core$Bit $tmp15 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp14);
return $tmp15;

}






