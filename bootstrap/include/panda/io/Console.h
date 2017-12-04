#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$io$Console {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$io$Console;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$io$Console$class_type;
extern panda$io$Console$class_type panda$io$Console$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$io$InputStream panda$io$InputStream;
typedef struct panda$io$OutputStream panda$io$OutputStream;
#include "panda/core/Char8.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$io$Console panda$io$Console;

panda$io$InputStream* panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$OutputStream* panda$io$Console$outputStream$R$panda$io$OutputStream();
panda$io$OutputStream* panda$io$Console$errorStream$R$panda$io$OutputStream();
void panda$io$Console$write$panda$core$Char8(panda$core$Char8 p_c);
void panda$io$Console$print$panda$core$String(panda$core$String* p_s);
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o);
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o);
void panda$io$Console$printLine();
void panda$io$Console$read$R$panda$core$Char8$Q(panda$core$Char8$nullable* result);
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q();
void panda$io$Console$init(panda$io$Console* self);

#endif
