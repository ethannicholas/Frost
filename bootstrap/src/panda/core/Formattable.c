#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Formattable$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { NULL} };

panda$core$Formattable$class_type panda$core$Formattable$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$Formattable$_panda$core$Formattable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL} };




