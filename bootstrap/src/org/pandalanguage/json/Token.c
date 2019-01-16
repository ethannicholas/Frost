#include "org/pandalanguage/json/Token.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/json/Position.h"

__attribute__((weak)) void org$pandalanguage$json$Token$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Token$cleanup(((org$pandalanguage$json$Token$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$json$Token$class_type org$pandalanguage$json$Token$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$json$Token$wrapperclass_type org$pandalanguage$json$Token$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Token$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 28, 2732806792715086710, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 28, 2732806792715086710, NULL };

org$pandalanguage$json$Token org$pandalanguage$json$Token$init$org$pandalanguage$json$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$json$Position(org$pandalanguage$json$Token$Kind param0, panda$core$String$Index param1, panda$core$String$Index param2, org$pandalanguage$json$Position param3) {

org$pandalanguage$json$Token local0;
// line 58
org$pandalanguage$json$Token$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 59
panda$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 60
panda$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 61
org$pandalanguage$json$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$pandalanguage$json$Token $tmp7 = *(&local0);
return $tmp7;

}
void org$pandalanguage$json$Token$cleanup(org$pandalanguage$json$Token param0) {

return;

}

