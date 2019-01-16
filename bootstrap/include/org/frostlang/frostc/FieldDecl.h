#pragma once
#include "frost_c.h"
#include "FieldDecl_types.h"
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Annotations org$frostlang$frostc$Annotations;
#include "org/frostlang/frostc/FieldDecl/Kind_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;

void org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$FieldDecl* self, org$frostlang$frostc$ClassDecl* p_owner, org$frostlang$frostc$Position p_position, frost$core$String* p_doccomment, org$frostlang$frostc$Annotations* p_annotations, org$frostlang$frostc$FieldDecl$Kind p_fieldKind, frost$core$String* p_name, org$frostlang$frostc$Type* p_type, org$frostlang$frostc$ASTNode* p_value);
frost$core$String* org$frostlang$frostc$FieldDecl$convert$R$frost$core$String(org$frostlang$frostc$FieldDecl* self);
void org$frostlang$frostc$FieldDecl$cleanup(org$frostlang$frostc$FieldDecl* self);

