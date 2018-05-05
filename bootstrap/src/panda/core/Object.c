#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$core$Object$class_type panda$core$Object$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, NULL, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6f\x62\x6a\x65\x63\x74\x3e", 8, 17380249030973254, NULL };

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* self) {
    panda$core$String* $tmp3 = &$s4;
    panda$core$String* $tmp2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    return $tmp2;
}
void panda$core$Object$cleanup(panda$core$Object* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->$class));
}
void panda$core$Object$init(panda$core$Object* self) {
}

