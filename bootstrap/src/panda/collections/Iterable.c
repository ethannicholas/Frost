#include "panda/collections/Iterable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Iterable$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

panda$collections$Iterable$class_type panda$collections$Iterable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterable$_panda$collections$Iterable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL} };




