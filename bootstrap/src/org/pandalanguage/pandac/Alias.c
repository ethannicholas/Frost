#include "org/pandalanguage/pandac/Alias.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Alias$class_type org$pandalanguage$pandac$Alias$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Alias$convert$R$panda$core$String, org$pandalanguage$pandac$Alias$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6c\x69\x61\x73", 30, 3930399941291923048, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1756024389231, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Alias* param0, panda$core$String* param1, panda$core$String* param2, org$pandalanguage$pandac$Position param3) {

// line 8
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Symbol$Kind $tmp3 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp2);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp3, param3, param1);
// line 9
panda$core$String** $tmp4 = &param0->fullName;
panda$core$String* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp6 = &param0->fullName;
*$tmp6 = param2;
return;

}
panda$core$String* org$pandalanguage$pandac$Alias$convert$R$panda$core$String(org$pandalanguage$pandac$Alias* param0) {

// line 14
panda$core$String** $tmp7 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp8 = *$tmp7;
panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s10, $tmp8);
panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s12);
panda$core$String** $tmp13 = &param0->fullName;
panda$core$String* $tmp14 = *$tmp13;
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, $tmp14);
panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, &$s17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($4:panda.core.String)
return $tmp16;

}
void org$pandalanguage$pandac$Alias$cleanup(org$pandalanguage$pandac$Alias* param0) {

// line 4
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$core$String** $tmp18 = &param0->fullName;
panda$core$String* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
return;

}






