#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
void org$pandalanguage$plex$runtime$RawToken$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$plex$runtime$RawToken$cleanup(((org$pandalanguage$plex$runtime$RawToken$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$plex$runtime$RawToken$wrapperclass_type org$pandalanguage$plex$runtime$RawToken$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 39, 3077586406795953085, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 39, 3077586406795953085, NULL };

void org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(org$pandalanguage$plex$runtime$RawToken* self, panda$core$Int64 p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    self->kind = p_kind;
    self->start = p_start;
    self->end = p_end;
    self->line = p_line;
    self->column = p_column;
}
void org$pandalanguage$plex$runtime$RawToken$cleanup(org$pandalanguage$plex$runtime$RawToken self) {
}





