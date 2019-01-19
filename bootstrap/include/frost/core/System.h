#pragma once
#include "frost_c.h"
#include "System_types.h"
typedef struct frost$core$System frost$core$System;
typedef struct frost$io$File frost$io$File;
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$collections$ListView frost$collections$ListView;

void frost$core$System$init(frost$core$System* self);
frost$io$File* frost$core$System$workingDirectory$R$frost$io$File();
frost$io$File* frost$core$System$temporaryDirectory$R$frost$io$File();
void frost$core$System$exit$frost$core$UInt8(frost$core$UInt8 p_status);
void frost$core$System$crash();
frost$core$Maybe* frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(frost$io$File* p_path, frost$collections$ListView* p_args);
void frost$core$System$cleanup(frost$core$System* self);

