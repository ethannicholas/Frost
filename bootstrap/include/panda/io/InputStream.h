#pragma once
#include "panda_c.h"
#include "InputStream_types.h"
#include "panda/core/UInt8_types.h"
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/Int64_types.h"
#include "panda/core/Int8_types.h"
#include "panda/core/Char8_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int16_types.h"
#include "panda/core/Int32_types.h"
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$collections$Iterator panda$collections$Iterator;

panda$core$UInt8$nullable panda$io$InputStream$read$R$panda$core$UInt8$Q(panda$io$InputStream* self);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Int8* p_buffer, panda$core$Int64 p_max);
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* self, panda$core$Char8* p_buffer, panda$core$Int64 p_max);
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* self);
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* self);
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* self);
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* self);
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* self);
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* self);
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* self, panda$io$OutputStream* p_out);
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* self);
void panda$io$InputStream$init(panda$io$InputStream* self);
void panda$io$InputStream$cleanup(panda$io$InputStream* self);

