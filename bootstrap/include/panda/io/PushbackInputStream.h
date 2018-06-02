#pragma once
#include "panda_c.h"
#include "PushbackInputStream_types.h"
typedef struct panda$io$PushbackInputStream panda$io$PushbackInputStream;
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/UInt8_types.h"
#include "panda/core/Int8_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Char8_types.h"
typedef struct panda$core$String panda$core$String;

void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* self, panda$io$InputStream* p_source);
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self);
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v);
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v);
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v);
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v);
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c);
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c);
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s);
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self);

