#pragma once
#include "panda_c.h"
#include "Protector_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$pandadoc$Protector org$pandalanguage$pandac$pandadoc$Protector;

panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* self, panda$core$String* p_s);
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$Protector* self, panda$core$String* p_s);
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* self);
void org$pandalanguage$pandac$pandadoc$Protector$init(org$pandalanguage$pandac$pandadoc$Protector* self);
void org$pandalanguage$pandac$pandadoc$Protector$cleanup(org$pandalanguage$pandac$pandadoc$Protector* self);

