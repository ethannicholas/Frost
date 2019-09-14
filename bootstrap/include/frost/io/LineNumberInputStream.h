#pragma once
#include "frost_c.h"
#include "LineNumberInputStream_types.h"
typedef struct frost$io$LineNumberInputStream frost$io$LineNumberInputStream;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/UInt8_types.h"

void frost$io$LineNumberInputStream$init$frost$io$InputStream(void* rawSelf, frost$io$InputStream* p_source);
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(void* rawSelf);
void frost$io$LineNumberInputStream$cleanup(void* rawSelf);

