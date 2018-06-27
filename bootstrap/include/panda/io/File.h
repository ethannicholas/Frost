#pragma once
#include "panda_c.h"
#include "File_types.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/Int64_types.h"

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path);
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path);
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self);
panda$core$Bit panda$io$File$isAbsolute$R$panda$core$Bit(panda$io$File* self);
panda$core$String* panda$io$File$absolutePath$R$panda$core$String(panda$io$File* self);
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self);
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self);
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self);
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self);
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext);
void panda$io$File$exists$R$panda$core$Bit(panda$core$Bit* result, panda$io$File* self);
void panda$io$File$isDirectory$R$panda$core$Bit(panda$core$Bit* result, panda$io$File* self);
panda$collections$ListView* panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT(panda$io$File* self);
void panda$io$File$createDirectory(panda$io$File* self);
void panda$io$File$createDirectories(panda$io$File* self);
panda$io$InputStream* panda$io$File$openInputStream$R$panda$io$InputStream(panda$io$File* self);
panda$io$OutputStream* panda$io$File$openOutputStream$R$panda$io$OutputStream(panda$io$File* self);
panda$io$OutputStream* panda$io$File$openForAppend$R$panda$io$OutputStream(panda$io$File* self);
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self);
void panda$io$File$write$panda$core$String(panda$io$File* self, panda$core$String* p_contents);
void panda$io$File$delete(panda$io$File* self);
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other);
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self);
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self);
void panda$io$File$cleanup(panda$io$File* self);

