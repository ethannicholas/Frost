#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$io$File {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* path;
} panda$io$File;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[21]; } panda$io$File$class_type;
extern panda$io$File$class_type panda$io$File$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/Int64.h"

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path);
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path);
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self);
panda$core$String* panda$io$File$absolutePath$R$panda$core$String(panda$io$File* self);
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self);
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self);
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self);
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self);
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext);
void panda$io$File$exists$R$panda$core$Bit(panda$core$Bit* result, panda$io$File* self);
panda$collections$ListView* panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT(panda$io$File* self);
void panda$io$File$createDirectory(panda$io$File* self);
void panda$io$File$createDirectories(panda$io$File* self);
panda$io$InputStream* panda$io$File$openInputStream$R$panda$io$InputStream(panda$io$File* self);
panda$io$OutputStream* panda$io$File$openOutputStream$R$panda$io$OutputStream(panda$io$File* self);
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self);
void panda$io$File$delete(panda$io$File* self);
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other);
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other);
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self);
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self);

#endif
