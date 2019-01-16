#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$Parameter$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 45, -3830084543813460970, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2) {

// line 19
panda$core$Weak* $tmp2 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp3 = &param0->owner;
panda$core$Weak* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Weak** $tmp5 = &param0->owner;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp6 = &param0->name;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$String** $tmp8 = &param0->name;
*$tmp8 = param1;
// line 23
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp9 = &param0->type;
org$pandalanguage$pandac$Type* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$Type** $tmp11 = &param0->type;
*$tmp11 = param2;
return;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* param0) {

// line 28
panda$core$String** $tmp12 = &param0->name;
panda$core$String* $tmp13 = *$tmp12;
panda$core$String* $tmp14 = panda$core$String$convert$R$panda$core$String($tmp13);
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s16);
org$pandalanguage$pandac$Type** $tmp17 = &param0->type;
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, ((panda$core$Object*) $tmp18));
panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s21);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($3:panda.core.String)
return $tmp20;

}
void org$pandalanguage$pandac$MethodDecl$Parameter$cleanup(org$pandalanguage$pandac$MethodDecl$Parameter* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp22 = &param0->name;
panda$core$String* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$Type** $tmp24 = &param0->type;
org$pandalanguage$pandac$Type* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Weak** $tmp26 = &param0->owner;
panda$core$Weak* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
return;

}

