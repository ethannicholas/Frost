#pragma once
#include "frost_c.h"
#include "GenericParameter_types.h"
typedef struct org$frostlang$frostc$MethodDecl$GenericParameter org$frostlang$frostc$MethodDecl$GenericParameter;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* self, org$frostlang$frostc$Position p_position, frost$core$String* p_owner, frost$core$String* p_name, org$frostlang$frostc$Type* p_bound);
frost$core$String* org$frostlang$frostc$MethodDecl$GenericParameter$convert$R$frost$core$String(org$frostlang$frostc$MethodDecl$GenericParameter* self);
void org$frostlang$frostc$MethodDecl$GenericParameter$cleanup(org$frostlang$frostc$MethodDecl$GenericParameter* self);

