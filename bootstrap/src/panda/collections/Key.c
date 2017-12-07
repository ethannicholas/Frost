#include "panda/collections/Key.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Key$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Key$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$Key$_panda$collections$Key, { NULL, NULL} };

panda$collections$Key$class_type panda$collections$Key$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Key$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL} };




