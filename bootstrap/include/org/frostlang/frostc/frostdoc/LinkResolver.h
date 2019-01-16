#pragma once
#include "frost_c.h"
#include "LinkResolver_types.h"
typedef struct org$frostlang$frostc$frostdoc$LinkResolver org$frostlang$frostc$frostdoc$LinkResolver;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$Symbol org$frostlang$frostc$Symbol;

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$Compiler* p_compiler, frost$core$String* p_apiRelativePath);
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$Compiler* p_compiler, frost$core$String* p_apiRelativePath, org$frostlang$frostc$ClassDecl* p_context);
frost$core$Bit org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$MethodDecl* p_m, frost$collections$ListView* p_parameters);
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$FieldDecl* p_f);
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$MethodDecl* p_m);
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* self, org$frostlang$frostc$Symbol* p_s);
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* self, frost$core$String* p_link);
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* self);

