#include "panda/core/RegularExpression.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"

__attribute__((weak)) void panda$core$RegularExpression$cleanup$shim(panda$core$RegularExpression* p0) {
    panda$core$RegularExpression$cleanup(p0);

}

static panda$core$String $s1;
panda$core$RegularExpression$class_type panda$core$RegularExpression$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$RegularExpression$cleanup$shim, panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher, panda$core$RegularExpression$compile$panda$core$String$panda$core$Int64, panda$core$RegularExpression$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };

void panda$core$RegularExpression$init$panda$core$String(panda$core$RegularExpression* param0, panda$core$String* param1) {

// line 15
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64(param0, param1, $tmp2);
return;

}
void panda$core$RegularExpression$init$panda$core$String$panda$core$Int64(panda$core$RegularExpression* param0, panda$core$String* param1, panda$core$Int64 param2) {

// line 19
panda$core$RegularExpression$compile$panda$core$String$panda$core$Int64(param0, param1, param2);
return;

}
void panda$core$RegularExpression$cleanup(panda$core$RegularExpression* param0) {

// line 27
panda$core$RegularExpression$destroy(param0);
return;

}






