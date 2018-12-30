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
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* param0, panda$core$String* param1, org$pandalanguage$pandac$Type* param2) {

// line 19
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Weak** $tmp3 = &param0->owner;
panda$core$Weak* $tmp4 = *$tmp3;
bool $tmp5 = $tmp4 != ((panda$core$Weak*) NULL);
if ($tmp5) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp6 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp6)));
panda$core$Panda$unref$panda$core$Object$Q($tmp6);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp7 = &param0->owner;
*$tmp7 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 22
panda$core$String** $tmp8 = &param0->name;
panda$core$String* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp10 = &param0->name;
*$tmp10 = param1;
// line 23
org$pandalanguage$pandac$Type** $tmp11 = &param0->type;
org$pandalanguage$pandac$Type* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp13 = &param0->type;
*$tmp13 = param2;
return;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* param0) {

// line 28
panda$core$String** $tmp14 = &param0->name;
panda$core$String* $tmp15 = *$tmp14;
panda$core$String* $tmp16 = panda$core$String$convert$R$panda$core$String($tmp15);
panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, &$s18);
org$pandalanguage$pandac$Type** $tmp19 = &param0->type;
org$pandalanguage$pandac$Type* $tmp20 = *$tmp19;
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp17, ((panda$core$Object*) $tmp20));
panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s23);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
return $tmp22;

}
void org$pandalanguage$pandac$MethodDecl$Parameter$cleanup(org$pandalanguage$pandac$MethodDecl$Parameter* param0) {

panda$core$String** $tmp24 = &param0->name;
panda$core$String* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
org$pandalanguage$pandac$Type** $tmp26 = &param0->type;
org$pandalanguage$pandac$Type* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Weak** $tmp28 = &param0->owner;
panda$core$Weak* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
return;

}






