#pragma once
#include "frost_c.h"
#include "MethodDecl_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/MethodDecl/Kind_types.h"
typedef struct frost$collections$Array frost$collections$Array;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$FixedArray org$frostlanguage$frostc$FixedArray;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$MethodDecl* self, org$frostlanguage$frostc$ClassDecl* p_owner, org$frostlanguage$frostc$Position p_position, frost$core$String* p_doccomment, org$frostlanguage$frostc$Annotations* p_annotations, org$frostlanguage$frostc$MethodDecl$Kind p_methodKind, frost$core$String* p_name, frost$collections$Array* p_genericParameters, frost$collections$Array* p_parameters, org$frostlanguage$frostc$Type* p_returnType, org$frostlanguage$frostc$FixedArray* p_body);
frost$core$Bit org$frostlanguage$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* self);
frost$core$Bit org$frostlanguage$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* self);
frost$core$Bit org$frostlanguage$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* self);
frost$core$Bit org$frostlanguage$frostc$MethodDecl$matches$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* self, org$frostlanguage$frostc$MethodDecl* p_other);
frost$core$Int64 org$frostlanguage$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlanguage$frostc$MethodDecl* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl* self);
frost$core$String* org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* self);
frost$core$String* org$frostlanguage$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* self);
frost$core$String* org$frostlanguage$frostc$MethodDecl$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* self);
void org$frostlanguage$frostc$MethodDecl$cleanup(org$frostlanguage$frostc$MethodDecl* self);

