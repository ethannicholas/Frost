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
#include "frost/core/Int_types.h"

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* p_path, frost$core$String$Index p_start);
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(void* rawSelf, frost$core$String* p_path);
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(void* rawSelf, frost$core$String* p_path);
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(void* rawSelf, frost$core$String* p_path);
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(void* rawSelf, frost$core$String* p_path);
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(void* rawSelf, frost$core$String* p_path);
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(void* rawSelf, frost$core$String* p_path);
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(void* rawSelf, frost$core$String* p_path);
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(void* rawSelf);
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(void* rawSelf);
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(void* rawSelf);
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(void* rawSelf);
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(void* rawSelf);
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(void* rawSelf);
void frost$json$JSON$cleanup(void* rawSelf);
void frost$json$JSON$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int p_rv, frost$core$Int p_f0);
void frost$json$JSON$init$frost$core$Int$frost$core$Real64(void* rawSelf, frost$core$Int p_rv, frost$core$Real64 p_f0);
void frost$json$JSON$init$frost$core$Int$frost$core$String(void* rawSelf, frost$core$Int p_rv, frost$core$String* p_f0);
void frost$json$JSON$init$frost$core$Int$frost$core$Bit(void* rawSelf, frost$core$Int p_rv, frost$core$Bit p_f0);
void frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(void* rawSelf, frost$core$Int p_rv, frost$collections$MapView* p_f0);
void frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(void* rawSelf, frost$core$Int p_rv, frost$collections$ListView* p_f0);
void frost$json$JSON$init$frost$core$Int(void* rawSelf, frost$core$Int p_rv);

