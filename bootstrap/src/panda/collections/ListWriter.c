#include "panda/collections/ListWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionWriter.h"

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ListWriter$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, NULL, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$ListWriter$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$ListWriter$_panda$collections$ListWriter, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$ListWriter$class_type panda$collections$ListWriter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListWriter$_panda$collections$CollectionWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };






