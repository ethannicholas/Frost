#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"

__attribute__((weak)) void org$pandalanguage$regex$RegexToken$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$regex$RegexToken$cleanup(((org$pandalanguage$regex$RegexToken$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$regex$RegexToken$class_type org$pandalanguage$regex$RegexToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexToken$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$regex$RegexToken$wrapperclass_type org$pandalanguage$regex$RegexToken$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexToken$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, -5515257697727992090, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, -5515257697727992090, NULL };

org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexToken$init$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(org$pandalanguage$regex$RegexToken$Kind param0, panda$core$String$Index param1, panda$core$String$Index param2, org$pandalanguage$pandac$Position param3) {

org$pandalanguage$regex$RegexToken local0;
// line 68
org$pandalanguage$regex$RegexToken$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 69
panda$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 70
panda$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 71
org$pandalanguage$pandac$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$pandalanguage$regex$RegexToken $tmp7 = *(&local0);
return $tmp7;

}
void org$pandalanguage$regex$RegexToken$cleanup(org$pandalanguage$regex$RegexToken param0) {

return;

}

