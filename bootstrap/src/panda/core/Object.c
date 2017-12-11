#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"


panda$core$Object$class_type panda$core$Object$class = { (panda$core$Class*) &panda$core$Class$class, 1, NULL, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x62\x6A\x65\x63\x74\x3E", 8, 17380249030973254, NULL };

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* self) {
    return &$s1;
}
void panda$core$Object$cleanup(panda$core$Object* self) {
}
void panda$core$Object$init(panda$core$Object* self) {
}

