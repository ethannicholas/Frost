#pragma once
#include "panda_c.h"
#include "CodeReplacer_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer;
typedef struct org$pandalanguage$pandac$pandadoc$Markdown org$pandalanguage$pandac$pandadoc$Markdown;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, org$pandalanguage$pandac$pandadoc$Markdown* p_markdown);
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$collections$ListView* p_groups);
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_text);
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_line);
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_firstLine, panda$core$String* p_text);
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self, panda$core$String* p_text);
void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* self);

