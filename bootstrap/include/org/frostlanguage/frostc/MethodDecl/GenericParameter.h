#pragma once
#include "frost_c.h"
#include "GenericParameter_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl$GenericParameter org$frostlanguage$frostc$MethodDecl$GenericParameter;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;

void org$frostlanguage$frostc$MethodDecl$GenericParameter$init$org$frostlanguage$frostc$Position$frost$core$String$frost$core$String$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl$GenericParameter* self, org$frostlanguage$frostc$Position p_position, frost$core$String* p_owner, frost$core$String* p_name, org$frostlanguage$frostc$Type* p_bound);
frost$core$String* org$frostlanguage$frostc$MethodDecl$GenericParameter$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl$GenericParameter* self);
void org$frostlanguage$frostc$MethodDecl$GenericParameter$cleanup(org$frostlanguage$frostc$MethodDecl$GenericParameter* self);

