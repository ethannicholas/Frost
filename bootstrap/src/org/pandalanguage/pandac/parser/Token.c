#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"

__attribute__((weak)) void org$pandalanguage$pandac$parser$Token$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$parser$Token$cleanup(((org$pandalanguage$pandac$parser$Token$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Token$class_type org$pandalanguage$pandac$parser$Token$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Token$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$pandac$parser$Token$wrapperclass_type org$pandalanguage$pandac$parser$Token$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Token$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 37, -3553406637857422662, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 37, -3553406637857422662, NULL };

org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Token$Kind param0, panda$core$String$Index param1, panda$core$String$Index param2, org$pandalanguage$pandac$Position param3) {

org$pandalanguage$pandac$parser$Token local0;
// line 244
org$pandalanguage$pandac$parser$Token$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 245
panda$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 246
panda$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 247
org$pandalanguage$pandac$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$pandalanguage$pandac$parser$Token $tmp7 = *(&local0);
return $tmp7;

}
void org$pandalanguage$pandac$parser$Token$cleanup(org$pandalanguage$pandac$parser$Token param0) {

return;

}

