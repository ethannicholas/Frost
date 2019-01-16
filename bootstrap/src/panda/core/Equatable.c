#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Equatable$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { NULL, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$core$Equatable$class_type panda$core$Equatable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Equatable$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn4)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65", 20, 3987957135724734002, NULL };

panda$core$Bit panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit(panda$core$Equatable* param0, panda$core$Equatable* param1) {

// line 18
ITable* $tmp2 = param0->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
panda$core$Bit $tmp5 = $tmp3(param0, param1);
panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
return $tmp6;

}






