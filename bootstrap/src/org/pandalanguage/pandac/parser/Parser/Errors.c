#include "org/pandalanguage/pandac/parser/Parser/Errors.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/io/Console.h"
#include "panda/core/Panda.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$parser$Parser$Errors$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$Errors$class_type org$pandalanguage$pandac$parser$Parser$Errors$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$parser$Parser$Errors$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$Errors$cleanup, org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x45\x72\x72\x6f\x72\x73", 45, 5432131389041037085, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$parser$Parser$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$parser$Parser$Errors* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    panda$core$String* $tmp6 = org$pandalanguage$pandac$Position$convert$R$panda$core$String(p_pos);
    panda$core$String* $tmp5 = $tmp6;
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s7);
    panda$core$String* $tmp4 = $tmp8;
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, p_msg);
    panda$core$String* $tmp3 = $tmp9;
    panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s10);
    panda$core$String* $tmp2 = $tmp11;
    panda$io$Console$printLine$panda$core$String($tmp2);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
}
void org$pandalanguage$pandac$parser$Parser$Errors$init(org$pandalanguage$pandac$parser$Parser$Errors* self) {
}
void org$pandalanguage$pandac$parser$Parser$Errors$cleanup(org$pandalanguage$pandac$parser$Parser$Errors* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

