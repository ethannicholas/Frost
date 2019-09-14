#pragma once
#include "frost_c.h"
#include "ChoiceCase_types.h"
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;

void org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(void* rawSelf, org$frostlang$frostc$ClassDecl* p_owner, org$frostlang$frostc$Position p_position, frost$core$String* p_name, frost$core$String* p_doccomment, frost$core$Int p_rawValue, frost$collections$ListView* p_fields);
frost$core$String* org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$ChoiceCase$cleanup(void* rawSelf);

