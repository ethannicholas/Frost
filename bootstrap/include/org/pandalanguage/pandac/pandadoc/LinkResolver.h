#pragma once
#include "panda_c.h"
#include "LinkResolver_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$LinkResolver org$pandalanguage$pandac$pandadoc$LinkResolver;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;
typedef struct org$pandalanguage$pandac$Symbol org$pandalanguage$pandac$Symbol;

void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ClassDecl* p_context);
panda$core$Bit org$pandalanguage$pandac$pandadoc$LinkResolver$matches$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ListView* p_parameters);
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$ClassDecl* p_cl);
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$FieldDecl* p_f);
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$MethodDecl* p_m);
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$linkTo$org$pandalanguage$pandac$Symbol$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, org$pandalanguage$pandac$Symbol* p_s);
panda$core$String* org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$LinkResolver* self, panda$core$String* p_link);
void org$pandalanguage$pandac$pandadoc$LinkResolver$cleanup(org$pandalanguage$pandac$pandadoc$LinkResolver* self);

