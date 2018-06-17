#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class_type org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 57, -5424329575063409142, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* self, panda$core$String* p_url, panda$core$String* p_title) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->url = NULL;
    self->title = NULL;
    {
        $tmp2 = self->url;
        $tmp3 = p_url;
        self->url = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->title;
        $tmp5 = p_title;
        self->title = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* self) {
    int $tmp8;
    {
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->url));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->title));
}

