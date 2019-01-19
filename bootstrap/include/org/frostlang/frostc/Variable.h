#pragma once
#include "frost_c.h"
#include "Variable_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
#include "org/frostlang/frostc/Position_types.h"
#include "org/frostlang/frostc/Variable/Kind_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$Variable$Storage org$frostlang$frostc$Variable$Storage;

void org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage(org$frostlang$frostc$Variable* self, org$frostlang$frostc$Position p_position, org$frostlang$frostc$Variable$Kind p_kind, frost$core$String* p_name, org$frostlang$frostc$Type* p_type, org$frostlang$frostc$Variable$Storage* p_storage);
frost$core$String* org$frostlang$frostc$Variable$get_asString$R$frost$core$String(org$frostlang$frostc$Variable* self);
void org$frostlang$frostc$Variable$cleanup(org$frostlang$frostc$Variable* self);

