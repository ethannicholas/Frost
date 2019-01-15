#pragma once
#include "frost_c.h"
#include "MethodRef_types.h"
typedef struct org$frostlanguage$frostc$MethodRef org$frostlanguage$frostc$MethodRef;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl(org$frostlanguage$frostc$MethodRef* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Type* p_target, org$frostlanguage$frostc$MethodDecl* p_value);
void org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$Q(org$frostlanguage$frostc$MethodRef* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Type* p_target, org$frostlanguage$frostc$MethodDecl* p_value, frost$collections$ListView* p_genericArguments);
frost$core$Int64 org$frostlanguage$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlanguage$frostc$MethodRef* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodRef* self, frost$core$Int64 p_index);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodRef$get_returnType$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodRef* self);
frost$core$String* org$frostlanguage$frostc$MethodRef$convert$R$frost$core$String(org$frostlanguage$frostc$MethodRef* self);
void org$frostlanguage$frostc$MethodRef$cleanup(org$frostlanguage$frostc$MethodRef* self);

