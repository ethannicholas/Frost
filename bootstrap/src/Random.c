#include "panda/math/Random.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$math$Random$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { NULL, NULL} };

panda$math$Random$class_type panda$math$Random$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$Random$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL} };




