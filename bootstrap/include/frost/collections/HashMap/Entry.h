#pragma once
#include "frost_c.h"
#include "Entry_types.h"
typedef struct frost$collections$HashMap$Entry frost$collections$HashMap$Entry;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;

void frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V(void* rawSelf, frost$collections$HashKey* p_key, frost$core$Object* p_value);
void frost$collections$HashMap$Entry$cleanup(void* rawSelf);

