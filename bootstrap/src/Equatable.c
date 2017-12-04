#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Equatable$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { NULL, NULL} };

panda$core$Equatable$class_type panda$core$Equatable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Equatable$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL} };




