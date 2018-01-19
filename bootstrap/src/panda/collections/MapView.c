#include "panda/collections/MapView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$MapView$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, NULL, { NULL, NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$MapView$class_type panda$collections$MapView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$MapView$_panda$collections$MapView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL, NULL} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };


