#include "panda/collections/MapView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$MapView$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, NULL, { NULL, NULL, NULL, NULL} };

panda$collections$MapView$class_type panda$collections$MapView$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$MapView$_panda$collections$MapView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL, NULL} };




