#pragma once
#include "frost_c.h"
#include "MethodRef_types.h"
typedef struct org$frostlang$frostc$MethodRef org$frostlang$frostc$MethodRef;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Type* p_target, org$frostlang$frostc$MethodDecl* p_value);
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Type* p_target, org$frostlang$frostc$MethodDecl* p_value, frost$collections$ListView* p_genericArguments);
frost$core$Int org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int(org$frostlang$frostc$MethodRef* self);
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* self, frost$core$Int p_index);
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* self);
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* self);
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* self);

