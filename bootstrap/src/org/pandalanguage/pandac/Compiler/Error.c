#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Error$class_type org$pandalanguage$pandac$Compiler$Error$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$Error$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x72\x72\x6f\x72", 39, -1546528409449826735, NULL };

void org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$Error* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_position, panda$core$String* p_message) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->file = NULL;
    self->message = NULL;
    {
        $tmp2 = self->file;
        $tmp3 = p_file;
        self->file = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
    self->position = p_position;
    {
        $tmp4 = self->message;
        $tmp5 = p_message;
        self->message = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    }
}
void org$pandalanguage$pandac$Compiler$Error$cleanup(org$pandalanguage$pandac$Compiler$Error* self) {
    int $tmp8;
    {
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->file));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->message));
}

