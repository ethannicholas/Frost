#pragma once
#include "panda_c.h"
#include "Main_types.h"
typedef struct org$pandalanguage$pandac$Main org$pandalanguage$pandac$Main;
typedef struct panda$io$File panda$io$File;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self);
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level, panda$core$Bit p_preserveTemporaries);
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Bit p_preserveTemporaries);
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries);
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries);
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out);
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs);
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s);
void pandaMain(panda$collections$ListView* p_args);
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self);

