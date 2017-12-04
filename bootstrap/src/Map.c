#include "panda/collections/Map.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Map$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Map$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$Map$_panda$collections$Map, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$Map$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$Map$_panda$collections$MapWriter, { NULL, NULL, NULL, NULL} };

panda$collections$Map$class_type panda$collections$Map$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Map$_panda$collections$MapView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };




