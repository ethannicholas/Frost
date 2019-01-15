#pragma once
#include "frost_c.h"
#include "XorShift128Plus_types.h"
typedef struct frost$math$XorShift128Plus frost$math$XorShift128Plus;
#include "frost/core/Int64_types.h"

void frost$math$XorShift128Plus$init$frost$core$Int64(frost$math$XorShift128Plus* self, frost$core$Int64 p_seed);
frost$core$Int64 frost$math$XorShift128Plus$int64$R$frost$core$Int64(frost$math$XorShift128Plus* self);
void frost$math$XorShift128Plus$cleanup(frost$math$XorShift128Plus* self);

