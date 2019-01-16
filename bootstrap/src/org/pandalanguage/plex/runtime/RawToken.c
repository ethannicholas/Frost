#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"

__attribute__((weak)) void org$pandalanguage$plex$runtime$RawToken$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$plex$runtime$RawToken$cleanup(((org$pandalanguage$plex$runtime$RawToken$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$plex$runtime$RawToken$wrapperclass_type org$pandalanguage$plex$runtime$RawToken$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 39, 3077586406795953085, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 39, 3077586406795953085, NULL };

org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(panda$core$Int64 param0, panda$core$String$Index param1, panda$core$String$Index param2, panda$core$Int64 param3, panda$core$Int64 param4) {

org$pandalanguage$plex$runtime$RawToken local0;
// line 12
panda$core$Int64* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 13
panda$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 14
panda$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 15
panda$core$Int64* $tmp6 = &(&local0)->line;
*$tmp6 = param3;
// line 16
panda$core$Int64* $tmp7 = &(&local0)->column;
*$tmp7 = param4;
org$pandalanguage$plex$runtime$RawToken $tmp8 = *(&local0);
return $tmp8;

}
void org$pandalanguage$plex$runtime$RawToken$cleanup(org$pandalanguage$plex$runtime$RawToken param0) {

return;

}






