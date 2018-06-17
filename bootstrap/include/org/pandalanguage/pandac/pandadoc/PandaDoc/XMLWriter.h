#pragma once
#include "panda_c.h"
#include "XMLWriter_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter;
typedef struct panda$io$OutputStream panda$io$OutputStream;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$io$OutputStream* p_out);
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$open$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag);
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$close$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag);
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$write$panda$core$String$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag, panda$core$String* p_text);
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self);

