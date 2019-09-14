#pragma once
#include "frost_c.h"
#include "StackIterator_types.h"
typedef struct frost$collections$Stack$StackIterator frost$collections$Stack$StackIterator;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(void* rawSelf, frost$collections$Stack* p_stack);
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(void* rawSelf);
void frost$collections$Stack$StackIterator$cleanup(void* rawSelf);

