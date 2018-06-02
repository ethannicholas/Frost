#pragma once
#include "panda_c.h"
#include "StackIterator_types.h"
typedef struct panda$collections$Stack$StackIterator panda$collections$Stack$StackIterator;
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack);
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self);
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self);
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* self);

