#include "org/pandalanguage/pandac/Main/Errors.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/io/Console.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Main$Errors$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Main$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

static panda$core$String $s1;
org$pandalanguage$pandac$Main$Errors$class_type org$pandalanguage$pandac$Main$Errors$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Main$Errors$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Errors$cleanup, org$pandalanguage$pandac$Main$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x45\x72\x72\x6f\x72\x73", 36, -5644571915946781694, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x20\x69\x6e\x20", 9, 2199715080198003434, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Main$Errors$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Main$Errors* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2, ((panda$core$Object*) p_file));
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
    org$pandalanguage$pandac$Position$wrapper* $tmp6;
    $tmp6 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
    $tmp6->value = p_pos;
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5, ((panda$core$Object*) $tmp6));
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s8);
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, p_msg);
    panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s11);
    panda$io$Console$printLine$panda$core$String($tmp12);
}
void org$pandalanguage$pandac$Main$Errors$init(org$pandalanguage$pandac$Main$Errors* self) {
}
void org$pandalanguage$pandac$Main$Errors$cleanup(org$pandalanguage$pandac$Main$Errors* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

