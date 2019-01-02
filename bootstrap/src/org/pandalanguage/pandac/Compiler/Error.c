#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"

__attribute__((weak)) void org$pandalanguage$pandac$Compiler$Error$cleanup$shim(org$pandalanguage$pandac$Compiler$Error* p0) {
    org$pandalanguage$pandac$Compiler$Error$cleanup(p0);

}

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Error$class_type org$pandalanguage$pandac$Compiler$Error$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$Error$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x72\x72\x6f\x72", 39, -1546528409449826735, NULL };

void org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$Error* param0, panda$io$File* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 41
panda$io$File** $tmp2 = &param0->file;
panda$io$File* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp4 = &param0->file;
*$tmp4 = param1;
// line 42
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 43
panda$core$String** $tmp6 = &param0->message;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp8 = &param0->message;
*$tmp8 = param3;
return;

}
void org$pandalanguage$pandac$Compiler$Error$cleanup(org$pandalanguage$pandac$Compiler$Error* param0) {

panda$io$File** $tmp9 = &param0->file;
panda$io$File* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$String** $tmp11 = &param0->message;
panda$core$String* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
return;

}

