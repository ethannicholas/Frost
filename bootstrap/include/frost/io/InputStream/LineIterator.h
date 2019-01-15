#pragma once
#include "frost_c.h"
#include "LineIterator_types.h"
typedef struct frost$io$InputStream$LineIterator frost$io$InputStream$LineIterator;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$io$InputStream$LineIterator$init$frost$io$InputStream(frost$io$InputStream$LineIterator* self, frost$io$InputStream* p_input);
frost$core$Bit frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit(frost$io$InputStream$LineIterator* self);
frost$core$String* frost$io$InputStream$LineIterator$next$R$frost$core$String(frost$io$InputStream$LineIterator* self);
void frost$io$InputStream$LineIterator$readNext(frost$io$InputStream$LineIterator* self);
void frost$io$InputStream$LineIterator$cleanup(frost$io$InputStream$LineIterator* self);

