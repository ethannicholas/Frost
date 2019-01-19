#pragma once
#include "frost_c.h"
#include "JSON_types.h"
typedef struct frost$json$JSON$PathKey frost$json$JSON$PathKey;
typedef struct frost$core$String frost$core$String;
#include "frost/core/String/Index_types.h"
typedef struct frost$json$JSON frost$json$JSON;
#include "frost/core/Int64_types.h"
#include "frost/core/Real64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$MapView frost$collections$MapView;

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* p_path, frost$core$String$Index p_start);
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$collections$ListView* frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$collections$MapView* frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* self, frost$core$String* p_path);
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* self);
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* self);
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* self);
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* self);
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* self);
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* self);
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(frost$json$JSON* self);
void frost$json$JSON$cleanup(frost$json$JSON* self);
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* self, frost$core$Int64 p_rv, frost$core$Int64 p_f0);
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* self, frost$core$Int64 p_rv, frost$core$Real64 p_f0);
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* self, frost$core$Int64 p_rv, frost$core$String* p_f0);
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* self, frost$core$Int64 p_rv, frost$core$Bit p_f0);
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* self, frost$core$Int64 p_rv, frost$collections$MapView* p_f0);
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* self, frost$core$Int64 p_rv, frost$collections$ListView* p_f0);
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* self, frost$core$Int64 p_rv);

