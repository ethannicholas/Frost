#pragma once
#include "panda_c.h"
#include "HTMLProcessor_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$HTMLProcessor org$pandalanguage$pandac$HTMLProcessor;
typedef struct org$pandalanguage$pandac$parser$Parser org$pandalanguage$pandac$parser$Parser;
typedef struct panda$io$File panda$io$File;

panda$core$String* org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* self, org$pandalanguage$pandac$parser$Parser* p_parser);
void org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* self, panda$io$File* p_input, panda$io$File* p_output, panda$core$String* p_root);
void org$pandalanguage$pandac$HTMLProcessor$init(org$pandalanguage$pandac$HTMLProcessor* self);
void org$pandalanguage$pandac$HTMLProcessor$cleanup(org$pandalanguage$pandac$HTMLProcessor* self);

