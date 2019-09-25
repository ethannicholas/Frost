#pragma once
#include "frost_c.h"
#include "MutableMethod_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

void frost$core$MutableMethod$init$builtin_int$frost$core$Object$Q(void* rawSelf, int64_t p_pointer, frost$core$Object* p_target);
frost$core$String* frost$core$MutableMethod$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$MutableMethod$cleanup(void* rawSelf);

