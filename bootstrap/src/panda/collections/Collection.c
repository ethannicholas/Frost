#include "panda/collections/Collection.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Collection$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Collection$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Collection$_panda$collections$Iterable, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Collection$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Collection$_panda$collections$Collection, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Collection$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Collection$_panda$collections$CollectionWriter, { NULL} };

static panda$core$String $s1;
panda$collections$Collection$class_type panda$collections$Collection$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Collection$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e", 28, 2859598962617493300, NULL };


