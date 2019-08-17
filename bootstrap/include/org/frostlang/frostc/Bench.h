#pragma once
#include "frost_c.h"
#include "Bench_types.h"
typedef struct org$frostlang$frostc$Bench org$frostlang$frostc$Bench;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"

void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int(org$frostlang$frostc$Bench* self, frost$core$String* p_name, frost$core$String* p_src, frost$core$Int p_optimizationLevel, frost$core$Int p_safetyLevel);
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(org$frostlang$frostc$Bench* self, frost$core$String* p_name, frost$core$String* p_src);
void org$frostlang$frostc$Bench$run(org$frostlang$frostc$Bench* self);
void org$frostlang$frostc$Bench$init(org$frostlang$frostc$Bench* self);
void org$frostlang$frostc$Bench$cleanup(org$frostlang$frostc$Bench* self);

