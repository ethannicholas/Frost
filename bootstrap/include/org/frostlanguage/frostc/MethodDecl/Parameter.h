#pragma once
#include "frost_c.h"
#include "Parameter_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl$Parameter org$frostlanguage$frostc$MethodDecl$Parameter;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;

void org$frostlanguage$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl$Parameter* self, frost$core$String* p_name, org$frostlanguage$frostc$Type* p_type);
frost$core$String* org$frostlanguage$frostc$MethodDecl$Parameter$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl$Parameter* self);
void org$frostlanguage$frostc$MethodDecl$Parameter$cleanup(org$frostlanguage$frostc$MethodDecl$Parameter* self);

