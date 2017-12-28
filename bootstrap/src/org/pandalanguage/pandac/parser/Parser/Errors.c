#include "org/pandalanguage/pandac/parser/Parser/Errors.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "panda/io/Console.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$parser$Parser$Errors$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$parser$Parser$Errors$class_type org$pandalanguage$pandac$parser$Parser$Errors$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$parser$Parser$Errors$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };


static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$parser$Parser$Errors* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    panda$core$String* $tmp1 = org$pandalanguage$pandac$Position$convert$R$panda$core$String(p_pos);
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1, &$s2);
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, p_msg);
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, &$s5);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp6));
}
void org$pandalanguage$pandac$parser$Parser$Errors$init(org$pandalanguage$pandac$parser$Parser$Errors* self) {
}

