#include "panda/core/Value.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"


panda$core$Value$class_type panda$core$Value$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup} };



void panda$core$Value$init(panda$core$Value* self) {
}
void panda$core$Value$cleanup(panda$core$Value* self) {
}

