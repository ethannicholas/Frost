#include "org/pandalanguage/pandac/Compiler/_Closure7.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$_Closure7$class_type org$pandalanguage$pandac$Compiler$_Closure7$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$_Closure7$cleanup, org$pandalanguage$pandac$Compiler$_Closure7$$anonymous6$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x37", 43, -943905825475553498, NULL };

void org$pandalanguage$pandac$Compiler$_Closure7$init$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$_Closure7* param0, org$pandalanguage$pandac$Type* param1) {

// line 4788
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Type** $tmp2 = &param0->left;
org$pandalanguage$pandac$Type* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Type** $tmp4 = &param0->left;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$Compiler$_Closure7$cleanup(org$pandalanguage$pandac$Compiler$_Closure7* param0) {

// line 4788
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type** $tmp5 = &param0->left;
org$pandalanguage$pandac$Type* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Bit org$pandalanguage$pandac$Compiler$_Closure7$$anonymous6$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$_Closure7* param0, org$pandalanguage$pandac$MethodDecl* param1) {

// line 4788
org$pandalanguage$pandac$Annotations** $tmp7 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp8 = *$tmp7;
panda$core$Bit $tmp9 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp8);
org$pandalanguage$pandac$Type** $tmp10 = &param0->left;
org$pandalanguage$pandac$Type* $tmp11 = *$tmp10;
panda$core$Bit $tmp12 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp11);
panda$core$Bit $tmp13 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp9, $tmp12);
return $tmp13;

}
