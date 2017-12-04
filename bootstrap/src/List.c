#include "panda/collections/List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Collection.h"
#include "panda/collections/ListWriter.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { NULL} };

panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };




