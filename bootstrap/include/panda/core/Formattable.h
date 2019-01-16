#pragma once
#include "panda_c.h"
#include "Formattable_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Formattable panda$core$Formattable;

panda$core$String* panda$core$Formattable$format$panda$core$String$R$panda$core$String(panda$core$Formattable* self, panda$core$String* p_fmt);

