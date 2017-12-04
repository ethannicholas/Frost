#include "panda/core/System.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


panda$core$System$class_type panda$core$System$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$System$Process$class_type panda$core$System$Process$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$System$Process$waitFor$R$panda$core$Int64} };



void panda$core$System$init(panda$core$System* self) {
}
void panda$core$System$Process$init(panda$core$System$Process* self) {
}

