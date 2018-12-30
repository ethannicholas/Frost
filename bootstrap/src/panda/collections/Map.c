#include "panda/collections/Map.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Map$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Map$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$Map$_panda$collections$MapWriter, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$Map$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$Map$_panda$collections$Map, { NULL, NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$Map$class_type panda$collections$Map$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Map$_panda$collections$MapView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70", 21, -4500515327555707970, NULL };







