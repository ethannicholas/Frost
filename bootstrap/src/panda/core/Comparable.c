#include "panda/core/Comparable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Comparable$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { NULL, NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Comparable$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Comparable$_panda$core$Comparable, { NULL, NULL} };

static panda$core$String $s1;
panda$core$Comparable$class_type panda$core$Comparable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Comparable$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL, NULL} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -5254568576296725552, NULL };







