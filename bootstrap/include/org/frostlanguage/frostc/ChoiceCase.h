#pragma once
#include "frost_c.h"
#include "ChoiceCase_types.h"
typedef struct org$frostlanguage$frostc$ChoiceCase org$frostlanguage$frostc$ChoiceCase;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;

void org$frostlanguage$frostc$ChoiceCase$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT(org$frostlanguage$frostc$ChoiceCase* self, org$frostlanguage$frostc$ClassDecl* p_owner, org$frostlanguage$frostc$Position p_position, frost$core$String* p_name, frost$core$String* p_doccomment, frost$core$Int64 p_rawValue, frost$collections$ListView* p_fields);
frost$core$String* org$frostlanguage$frostc$ChoiceCase$convert$R$frost$core$String(org$frostlanguage$frostc$ChoiceCase* self);
void org$frostlanguage$frostc$ChoiceCase$cleanup(org$frostlanguage$frostc$ChoiceCase* self);

