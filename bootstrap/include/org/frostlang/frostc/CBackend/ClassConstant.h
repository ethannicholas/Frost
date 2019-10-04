#pragma once
#include "frost_c.h"
#include "ClassConstant_types.h"
typedef struct org$frostlang$frostc$CBackend$ClassConstant org$frostlang$frostc$CBackend$ClassConstant;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CBackend$ClassConstant$init$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$CBackend$ClassConstant$cleanup(void* rawSelf);

