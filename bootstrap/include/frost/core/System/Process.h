#pragma once
#include "frost_c.h"
#include "Process_types.h"
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$core$System$Process frost$core$System$Process;
#include "frost/core/Int64_types.h"

frost$core$Maybe* frost$core$System$Process$openStandardInput$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(frost$core$System$Process* self);
frost$core$Maybe* frost$core$System$Process$openStandardOutput$R$frost$core$Maybe$LTfrost$io$InputStream$GT(frost$core$System$Process* self);
frost$core$Maybe* frost$core$System$Process$openStandardError$R$frost$core$Maybe$LTfrost$io$InputStream$GT(frost$core$System$Process* self);
void frost$core$System$Process$exitCode$R$frost$core$Int64$Q(frost$core$Int64$nullable* result, frost$core$System$Process* self);
void frost$core$System$Process$waitFor$R$frost$core$Int64(frost$core$Int64* result, frost$core$System$Process* self);
void frost$core$System$Process$_cleanup(frost$core$System$Process* self);
void frost$core$System$Process$cleanup(frost$core$System$Process* self);
void frost$core$System$Process$init(frost$core$System$Process* self);

