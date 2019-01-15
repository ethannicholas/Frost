#pragma once
#include "frost_c.h"
#include "Variable_types.h"
typedef struct org$frostlanguage$frostc$Variable org$frostlanguage$frostc$Variable;
#include "org/frostlanguage/frostc/Position_types.h"
#include "org/frostlanguage/frostc/Variable/Kind_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$Variable$Storage org$frostlanguage$frostc$Variable$Storage;

void org$frostlanguage$frostc$Variable$init$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Variable$Storage(org$frostlanguage$frostc$Variable* self, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Variable$Kind p_kind, frost$core$String* p_name, org$frostlanguage$frostc$Type* p_type, org$frostlanguage$frostc$Variable$Storage* p_storage);
frost$core$String* org$frostlanguage$frostc$Variable$convert$R$frost$core$String(org$frostlanguage$frostc$Variable* self);
void org$frostlanguage$frostc$Variable$cleanup(org$frostlanguage$frostc$Variable* self);

