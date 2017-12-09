#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
org$pandalanguage$pandac$Position$wrapper* wrap_org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Position self) {
    org$pandalanguage$pandac$Position$wrapper* result = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"

panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim(org$pandalanguage$pandac$Position$wrapper* self) {
    return org$pandalanguage$pandac$Position$convert$R$panda$core$String(self->value);
}

org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$Position$init(org$pandalanguage$pandac$Position* self) {
    self->line = ((panda$core$Int64) { -1 });
    self->column = ((panda$core$Int64) { -1 });
}
void org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self) {
    panda$core$String* $tmp2 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1, ((panda$core$Object*) wrap_panda$core$Int64(self.line)));
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2, &$s3);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4, ((panda$core$Object*) wrap_panda$core$Int64(self.column)));
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s6);
    return $tmp7;
}

