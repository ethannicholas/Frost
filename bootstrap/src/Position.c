#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"


org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };

void org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$String* p_file, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    self->file = p_file;
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position* self) {
    panda$core$String* $tmp2 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1, self->file);
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2, &$s3);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4, ((panda$core$Object*) wrap_panda$core$Int64(self->line)));
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s6);
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp7, ((panda$core$Object*) wrap_panda$core$Int64(self->column)));
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, &$s9);
    return $tmp10;
}

