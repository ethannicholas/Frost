#pragma once
#include "frost_c.h"
#include "StackIterator_types.h"
typedef struct frost$collections$Stack$StackIterator frost$collections$Stack$StackIterator;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(frost$collections$Stack$StackIterator* self, frost$collections$Stack* p_stack);
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(frost$collections$Stack$StackIterator* self);
frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(frost$collections$Stack$StackIterator* self);
void frost$collections$Stack$StackIterator$cleanup(frost$collections$Stack$StackIterator* self);

