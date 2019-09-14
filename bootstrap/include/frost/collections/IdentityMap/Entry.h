#pragma once
#include "frost_c.h"
#include "Entry_types.h"
typedef struct frost$collections$IdentityMap$Entry frost$collections$IdentityMap$Entry;
typedef struct frost$core$Object frost$core$Object;

void frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V(void* rawSelf, frost$core$Object* p_key, frost$core$Object* p_value);
void frost$collections$IdentityMap$Entry$cleanup(void* rawSelf);

