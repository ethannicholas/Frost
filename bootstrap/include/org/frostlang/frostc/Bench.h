#pragma once
#include "frost_c.h"
#include "Bench_types.h"
typedef struct org$frostlang$frostc$Bench org$frostlang$frostc$Bench;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"

void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$String* p_name, frost$core$String* p_src, frost$core$Int p_optimizationLevel, frost$core$Int p_safetyLevel);
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_src);
void org$frostlang$frostc$Bench$run(void* rawSelf);
void org$frostlang$frostc$Bench$init(void* rawSelf);
void org$frostlang$frostc$Bench$cleanup(void* rawSelf);

