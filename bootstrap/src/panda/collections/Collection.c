#include "panda/collections/Collection.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Collection$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Collection$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Collection$_panda$collections$Iterable, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Collection$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Collection$_panda$collections$CollectionWriter, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Collection$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Collection$_panda$collections$Collection, { NULL} };

panda$collections$Collection$class_type panda$collections$Collection$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Collection$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };




