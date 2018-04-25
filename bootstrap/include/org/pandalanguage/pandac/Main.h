#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* llvmDir;
    panda$core$String* triple;
    panda$io$File* opt;
    panda$io$File* llc;
    panda$io$File* gcc;
    panda$io$File* pandaHome;
} org$pandalanguage$pandac$Main;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } org$pandalanguage$pandac$Main$class_type;
extern org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Main org$pandalanguage$pandac$Main;
typedef struct panda$io$File panda$io$File;
#include "panda/core/Int64.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self);
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level);
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm);
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest);
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest);
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out);
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs);
void pandaMain(panda$collections$ListView* p_args);
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self);

#endif
