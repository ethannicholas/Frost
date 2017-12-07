#include "panda/collections/CollectionWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$CollectionWriter$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { NULL, NULL, NULL} };

panda$collections$CollectionWriter$class_type panda$collections$CollectionWriter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionWriter$_panda$collections$CollectionWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL} };




