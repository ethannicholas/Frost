#pragma once
#include "frost_c.h"
#include "LinkResolver_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$LinkResolver org$frostlanguage$frostc$frostdoc$LinkResolver;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$ClassDecl org$frostlanguage$frostc$ClassDecl;
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$FieldDecl org$frostlanguage$frostc$FieldDecl;
typedef struct org$frostlanguage$frostc$Symbol org$frostlanguage$frostc$Symbol;

void org$frostlanguage$frostc$frostdoc$LinkResolver$init$org$frostlanguage$frostc$Compiler$frost$core$String(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$Compiler* p_compiler, frost$core$String* p_apiRelativePath);
void org$frostlanguage$frostc$frostdoc$LinkResolver$init$org$frostlanguage$frostc$Compiler$frost$core$String$org$frostlanguage$frostc$ClassDecl$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$Compiler* p_compiler, frost$core$String* p_apiRelativePath, org$frostlanguage$frostc$ClassDecl* p_context);
frost$core$Bit org$frostlanguage$frostc$frostdoc$LinkResolver$matches$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$R$frost$core$Bit(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$MethodDecl* p_m, frost$collections$ListView* p_parameters);
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$ClassDecl$R$frost$core$String(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$ClassDecl* p_cl);
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$FieldDecl$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$FieldDecl* p_f);
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$MethodDecl$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$MethodDecl* p_m);
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$Symbol$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* self, org$frostlanguage$frostc$Symbol* p_s);
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* self, frost$core$String* p_link);
void org$frostlanguage$frostc$frostdoc$LinkResolver$cleanup(org$frostlanguage$frostc$frostdoc$LinkResolver* self);

