#pragma once
#include "frost_c.h"
#include "Process_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$System$Process frost$core$System$Process;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Int_types.h"

frost$io$OutputStream* frost$core$System$Process$standardInput$R$frost$io$OutputStream(void* rawSelf);
frost$io$InputStream* frost$core$System$Process$standardOutput$R$frost$io$InputStream(void* rawSelf);
frost$io$InputStream* frost$core$System$Process$standardError$R$frost$io$InputStream(void* rawSelf);
void frost$core$System$Process$exitCode$R$frost$core$Int$Q(frost$core$Int$nullable* result, void* rawSelf);
void frost$core$System$Process$waitFor$R$frost$core$Int(frost$core$Int* result, void* rawSelf);
void frost$core$System$Process$_cleanup(void* rawSelf);
void frost$core$System$Process$cleanup(void* rawSelf);
void frost$core$System$Process$init(void* rawSelf);

