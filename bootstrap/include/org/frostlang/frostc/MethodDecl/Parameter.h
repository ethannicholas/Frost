#pragma once
#include "frost_c.h"
#include "Parameter_types.h"
typedef struct org$frostlang$frostc$MethodDecl$Parameter org$frostlang$frostc$MethodDecl$Parameter;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type(void* rawSelf, frost$core$String* p_name, org$frostlang$frostc$Type* p_type);
frost$core$String* org$frostlang$frostc$MethodDecl$Parameter$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$MethodDecl$Parameter$cleanup(void* rawSelf);

