#pragma once
#include "panda_c.h"
#include "LinkDefinition_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* self, panda$core$String* p_url, panda$core$String* p_title);
void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* self);

