#pragma once
#include "panda_c.h"
#include "JSONParser_types.h"
typedef struct panda$json$JSON panda$json$JSON;
typedef struct panda$json$JSONParser panda$json$JSONParser;
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/json/Token_types.h"
#include "org/pandalanguage/json/Token/Kind_types.h"

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q(panda$json$JSONParser* self, panda$core$String* p_json);
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* self);
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token);
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self);
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind);
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token);
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self);
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self);
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self);
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self);
void panda$json$JSONParser$init(panda$json$JSONParser* self);
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self);

