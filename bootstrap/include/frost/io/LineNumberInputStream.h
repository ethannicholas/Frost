#pragma once
#include "frost_c.h"
#include "LineNumberInputStream_types.h"
typedef struct frost$io$LineNumberInputStream frost$io$LineNumberInputStream;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/UInt8_types.h"

void frost$io$LineNumberInputStream$init$frost$io$InputStream(frost$io$LineNumberInputStream* self, frost$io$InputStream* p_source);
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(frost$io$LineNumberInputStream* self);
void frost$io$LineNumberInputStream$cleanup(frost$io$LineNumberInputStream* self);

