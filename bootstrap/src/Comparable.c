#include "panda/core/Comparable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Comparable$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Comparable$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Comparable$_panda$core$Equatable, { NULL, NULL, NULL, NULL} };

panda$core$Comparable$class_type panda$core$Comparable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Comparable$_panda$core$Comparable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL, NULL} };




