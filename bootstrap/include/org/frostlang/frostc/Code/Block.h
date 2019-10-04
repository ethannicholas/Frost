#pragma once
#include "frost_c.h"
#include "Block_types.h"
typedef struct org$frostlang$frostc$Code$Block org$frostlang$frostc$Code$Block;
#include "org/frostlang/frostc/Code/Block/ID_types.h"
typedef struct frost$collections$Array frost$collections$Array;

void org$frostlang$frostc$Code$Block$init$org$frostlang$frostc$Code$Block$ID$frost$collections$Array$LTorg$frostlang$frostc$Code$Statement$GT(void* rawSelf, org$frostlang$frostc$Code$Block$ID p_id, frost$collections$Array* p_statements);
void org$frostlang$frostc$Code$Block$cleanup(void* rawSelf);

