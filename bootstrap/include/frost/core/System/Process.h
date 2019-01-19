#pragma once
#include "frost_c.h"
#include "Process_types.h"
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$core$System$Process frost$core$System$Process;
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/Int64_types.h"

frost$io$OutputStream* frost$core$System$Process$standardInput$R$frost$io$OutputStream(frost$core$System$Process* self);
frost$io$InputStream* frost$core$System$Process$standardOutput$R$frost$io$InputStream(frost$core$System$Process* self);
frost$io$InputStream* frost$core$System$Process$standardError$R$frost$io$InputStream(frost$core$System$Process* self);
void frost$core$System$Process$exitCode$R$frost$core$Int64$Q(frost$core$Int64$nullable* result, frost$core$System$Process* self);
void frost$core$System$Process$waitFor$R$frost$core$Int64(frost$core$Int64* result, frost$core$System$Process* self);
void frost$core$System$Process$_cleanup(frost$core$System$Process* self);
void frost$core$System$Process$cleanup(frost$core$System$Process* self);
void frost$core$System$Process$init(frost$core$System$Process* self);

