#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { NULL, NULL, NULL, NULL, NULL, NULL} };

org$pandalanguage$pandac$CodeGenerator$class_type org$pandalanguage$pandac$CodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, NULL, NULL, NULL, NULL} };




