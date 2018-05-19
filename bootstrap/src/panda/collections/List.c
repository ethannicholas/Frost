#include "panda/collections/List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListWriter.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { NULL, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };







