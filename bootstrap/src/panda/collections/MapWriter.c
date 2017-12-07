#include "panda/collections/MapWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$MapWriter$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { NULL} };

panda$collections$MapWriter$class_type panda$collections$MapWriter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$MapWriter$_panda$collections$MapWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL} };




