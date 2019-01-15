#pragma once
#include "frost_c.h"
#include "ListWriter_types.h"
typedef struct frost$collections$ListWriter frost$collections$ListWriter;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Object frost$core$Object;

void frost$collections$ListWriter$$IDXEQ$frost$core$Int64$frost$collections$ListWriter$T(frost$collections$ListWriter* self, frost$core$Int64 p_index, frost$core$Object* p_value);
void frost$collections$ListWriter$insert$frost$core$Int64$frost$collections$ListWriter$T(frost$collections$ListWriter* self, frost$core$Int64 p_index, frost$core$Object* p_value);
frost$core$Object* frost$collections$ListWriter$removeIndex$frost$core$Int64$R$frost$collections$ListWriter$T(frost$collections$ListWriter* self, frost$core$Int64 p_index);

