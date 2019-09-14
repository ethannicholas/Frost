#pragma once
#include "frost_c.h"
#include "LineIterator_types.h"
typedef struct frost$io$InputStream$LineIterator frost$io$InputStream$LineIterator;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$InputStream$LineIterator$init$frost$io$InputStream(void* rawSelf, frost$io$InputStream* p_input);
frost$core$Bit frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$String* frost$io$InputStream$LineIterator$next$R$frost$core$String(void* rawSelf);
void frost$io$InputStream$LineIterator$readNext(void* rawSelf);
void frost$io$InputStream$LineIterator$cleanup(void* rawSelf);

