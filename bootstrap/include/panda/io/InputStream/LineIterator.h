#pragma once
#include "panda_c.h"
#include "LineIterator_types.h"
typedef struct panda$io$InputStream$LineIterator panda$io$InputStream$LineIterator;
typedef struct panda$io$InputStream panda$io$InputStream;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input);
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self);
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self);
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self);
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self);

