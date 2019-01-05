#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type org$pandalanguage$pandac$ClassDecl$GenericParameter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 51, 6472012266806966452, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, panda$core$String* param3, org$pandalanguage$pandac$Type* param4) {

// line 28
panda$core$String** $tmp2 = &param0->owner;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp4 = &param0->owner;
*$tmp4 = param2;
// line 29
org$pandalanguage$pandac$Type** $tmp5 = &param0->bound;
org$pandalanguage$pandac$Type* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp7 = &param0->bound;
*$tmp7 = param4;
// line 30
panda$core$Int64 $tmp8 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Symbol$Kind $tmp9 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp8);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp9, param1, param3);
return;

}
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* param0) {

// line 35
panda$core$String** $tmp10 = &param0->owner;
panda$core$String* $tmp11 = *$tmp10;
panda$core$String* $tmp12 = panda$core$String$convert$R$panda$core$String($tmp11);
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, &$s14);
panda$core$String** $tmp15 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp16 = *$tmp15;
panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, $tmp16);
panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, &$s19);
org$pandalanguage$pandac$Type** $tmp20 = &param0->bound;
org$pandalanguage$pandac$Type* $tmp21 = *$tmp20;
panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp18, ((panda$core$Object*) $tmp21));
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s24);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($3:panda.core.String)
return $tmp23;

}
void org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup(org$pandalanguage$pandac$ClassDecl$GenericParameter* param0) {

// line 22
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$core$String** $tmp25 = &param0->owner;
panda$core$String* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Type** $tmp27 = &param0->bound;
org$pandalanguage$pandac$Type* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
return;

}

