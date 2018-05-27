#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"

void org$pandalanguage$regex$RegexToken$cleanup$wrappershim(org$pandalanguage$regex$RegexToken$wrapper* self) {
    org$pandalanguage$regex$RegexToken$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$regex$RegexToken$class_type org$pandalanguage$regex$RegexToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexToken$cleanup} };

static panda$core$String $s2;
org$pandalanguage$regex$RegexToken$wrapperclass_type org$pandalanguage$regex$RegexToken$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexToken$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, -5515257697727992090, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, -5515257697727992090, NULL };

void org$pandalanguage$regex$RegexToken$init$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$regex$RegexToken* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$pandac$Position p_position) {
    self->kind = p_kind;
    self->start = p_start;
    self->end = p_end;
    self->position = p_position;
}
void org$pandalanguage$regex$RegexToken$cleanup(org$pandalanguage$regex$RegexToken self) {
}

