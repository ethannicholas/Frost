#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$json$Lexer org$pandalanguage$json$Lexer;
#include "org/pandalanguage/json/Token.h"

typedef struct panda$json$JSONParser {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* source;
    org$pandalanguage$json$Lexer* lexer;
    org$pandalanguage$json$Token$nullable pushbackToken;
} panda$json$JSONParser;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[12]; } panda$json$JSONParser$class_type;
extern panda$json$JSONParser$class_type panda$json$JSONParser$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$json$JSON panda$json$JSON;
typedef struct panda$json$JSONParser panda$json$JSONParser;
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/json/Token.h"
#include "org/pandalanguage/json/Token/Kind.h"

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON(panda$json$JSONParser* self, panda$core$String* p_json);
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

#endif
