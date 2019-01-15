#pragma once
#include "frost_c.h"
#include "FieldDecl_types.h"
typedef struct org$frostlanguage$frostc$FieldDecl org$frostlanguage$frostc$FieldDecl;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Annotations org$frostlanguage$frostc$Annotations;
#include "org/frostlanguage/frostc/FieldDecl/Kind_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;

void org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$FieldDecl* self, org$frostlanguage$frostc$ClassDecl* p_owner, org$frostlanguage$frostc$Position p_position, frost$core$String* p_doccomment, org$frostlanguage$frostc$Annotations* p_annotations, org$frostlanguage$frostc$FieldDecl$Kind p_fieldKind, frost$core$String* p_name, org$frostlanguage$frostc$Type* p_type, org$frostlanguage$frostc$ASTNode* p_value);
frost$core$String* org$frostlanguage$frostc$FieldDecl$convert$R$frost$core$String(org$frostlanguage$frostc$FieldDecl* self);
void org$frostlanguage$frostc$FieldDecl$cleanup(org$frostlanguage$frostc$FieldDecl* self);

