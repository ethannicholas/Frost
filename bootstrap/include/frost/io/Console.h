#pragma once
#include "frost_c.h"
#include "Console_types.h"
typedef struct frost$io$Console frost$io$Console;
typedef struct frost$io$InputStream frost$io$InputStream;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Char8_types.h"

void frost$io$Console$init(frost$io$Console* self);
frost$io$InputStream* frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$OutputStream* frost$io$Console$outputStream$R$frost$io$OutputStream();
frost$io$OutputStream* frost$io$Console$errorStream$R$frost$io$OutputStream();
void frost$io$Console$print$frost$core$String(frost$core$String* p_s);
void frost$io$Console$printLine$frost$core$String(frost$core$String* p_s);
void frost$io$Console$print$frost$core$Object(frost$core$Object* p_o);
void frost$io$Console$printLine$frost$core$Object(frost$core$Object* p_o);
void frost$io$Console$printLine();
void frost$io$Console$read$R$frost$core$Char8$Q(frost$core$Char8$nullable* result);
frost$core$String* frost$io$Console$readLine$R$frost$core$String$Q();
void frost$io$Console$cleanup(frost$io$Console* self);

