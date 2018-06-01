#include "org/pandalanguage/json/Token.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/json/Position.h"
void org$pandalanguage$json$Token$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Token$cleanup(((org$pandalanguage$json$Token$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$json$Token$class_type org$pandalanguage$json$Token$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$json$Token$wrapperclass_type org$pandalanguage$json$Token$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 28, 2732806792715086710, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 28, 2732806792715086710, NULL };

void org$pandalanguage$json$Token$init$org$pandalanguage$json$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$json$Position(org$pandalanguage$json$Token* self, org$pandalanguage$json$Token$Kind p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, org$pandalanguage$json$Position p_position) {
    self->kind = p_kind;
    self->start = p_start;
    self->end = p_end;
    self->position = p_position;
}
void org$pandalanguage$json$Token$cleanup(org$pandalanguage$json$Token self) {
}

