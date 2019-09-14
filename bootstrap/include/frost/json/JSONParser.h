#pragma once
#include "frost_c.h"
#include "JSONParser_types.h"
typedef struct frost$json$JSON frost$json$JSON;
typedef struct frost$json$JSONParser frost$json$JSONParser;
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/json/Token_types.h"
#include "org/frostlang/json/Token/Kind_types.h"

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(void* rawSelf, frost$core$String* p_json);
org$frostlang$json$Token frost$json$JSONParser$next$R$org$frostlang$json$Token(void* rawSelf);
void frost$json$JSONParser$pushback$org$frostlang$json$Token(void* rawSelf, org$frostlang$json$Token p_token);
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(void* rawSelf);
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(void* rawSelf, org$frostlang$json$Token$Kind p_kind);
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(void* rawSelf, org$frostlang$json$Token p_token);
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(void* rawSelf);
frost$json$JSON* frost$json$JSONParser$map$R$frost$json$JSON(void* rawSelf);
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(void* rawSelf);
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(void* rawSelf);
void frost$json$JSONParser$init(void* rawSelf);
void frost$json$JSONParser$cleanup(void* rawSelf);

