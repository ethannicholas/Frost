#pragma once
#include "frost_c.h"
#include "Thread_types.h"
typedef struct frost$threads$Thread frost$threads$Thread;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$Method frost$core$Method;
#include "frost/core/Bit_types.h"
#include "frost/core/Int_types.h"

void frost$threads$Thread$init(void* rawSelf);
void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(void* rawSelf, frost$core$MutableMethod* p_m, bool p_preventsExit);
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$frost$threads$Thread(frost$core$Method* p_run);
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$Method* p_run, frost$core$Bit p_preventsExit);
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$frost$threads$Thread(frost$core$MutableMethod* p_run);
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$MutableMethod* p_run, frost$core$Bit p_preventsExit);
void frost$threads$Thread$waitFor(void* rawSelf);
frost$core$Int frost$threads$Thread$preferredThreadCount$R$frost$core$Int();
void frost$threads$Thread$sleep$frost$core$Int(frost$core$Int p_millis);
void frost$threads$Thread$cleanup(void* rawSelf);

