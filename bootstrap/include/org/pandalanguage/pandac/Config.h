#pragma once
#include "panda_c.h"
#include "Config_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Config org$pandalanguage$pandac$Config;

panda$core$String* org$pandalanguage$pandac$Config$srcDir$R$panda$core$String();
panda$core$String* org$pandalanguage$pandac$Config$libDir$R$panda$core$String();
panda$core$String* org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$core$String* org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$core$String* org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
void org$pandalanguage$pandac$Config$init(org$pandalanguage$pandac$Config* self);
void org$pandalanguage$pandac$Config$cleanup(org$pandalanguage$pandac$Config* self);

