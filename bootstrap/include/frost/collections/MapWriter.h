#pragma once
#include "frost_c.h"
#include "MapWriter_types.h"
typedef struct frost$collections$MapWriter frost$collections$MapWriter;
typedef struct frost$core$Object frost$core$Object;

void frost$collections$MapWriter$$IDXEQ$frost$collections$MapWriter$K$frost$collections$MapWriter$V(frost$collections$MapWriter* self, frost$core$Object* p_key, frost$core$Object* p_value);
void frost$collections$MapWriter$remove$frost$collections$MapWriter$K(frost$collections$MapWriter* self, frost$core$Object* p_key);
void frost$collections$MapWriter$clear(frost$collections$MapWriter* self);

