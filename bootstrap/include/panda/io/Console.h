#pragma once
#include "panda_c.h"
#include "Console_types.h"
typedef struct panda$io$Console panda$io$Console;
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Char8_types.h"

void panda$io$Console$init(panda$io$Console* self);
panda$io$InputStream* panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$OutputStream* panda$io$Console$outputStream$R$panda$io$OutputStream();
panda$io$OutputStream* panda$io$Console$errorStream$R$panda$io$OutputStream();
void panda$io$Console$print$panda$core$String(panda$core$String* p_s);
void panda$io$Console$printLine$panda$core$String(panda$core$String* p_s);
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o);
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o);
void panda$io$Console$printLine();
void panda$io$Console$read$R$panda$core$Char8$Q(panda$core$Char8$nullable* result);
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q();
void panda$io$Console$cleanup(panda$io$Console* self);

