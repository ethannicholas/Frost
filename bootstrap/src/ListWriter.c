#include "panda/collections/ListWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/CollectionWriter.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ListWriter$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, NULL, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ListWriter$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$ListWriter$_panda$collections$CollectionWriter, { NULL, NULL, NULL} };

panda$collections$ListWriter$class_type panda$collections$ListWriter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListWriter$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL} };




