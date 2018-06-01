#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Formattable$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { NULL} };

static panda$core$String $s1;
panda$core$Formattable$class_type panda$core$Formattable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Formattable$_panda$core$Formattable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };






