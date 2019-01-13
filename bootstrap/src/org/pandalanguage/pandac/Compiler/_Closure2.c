#include "org/pandalanguage/pandac/Compiler/_Closure2.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$_Closure2$class_type org$pandalanguage$pandac$Compiler$_Closure2$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$_Closure2$cleanup, org$pandalanguage$pandac$Compiler$_Closure2$$anonymous1$org$pandalanguage$pandac$MethodDecl$Parameter$R$org$pandalanguage$pandac$MethodDecl$Parameter} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 43, -943905825475553503, NULL };

void org$pandalanguage$pandac$Compiler$_Closure2$init$org$pandalanguage$pandac$Type$Q$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$_Closure2* param0, org$pandalanguage$pandac$Type* param1, org$pandalanguage$pandac$Compiler* param2) {

// line 1313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Type** $tmp2 = &param0->type;
org$pandalanguage$pandac$Type* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Type** $tmp4 = &param0->type;
*$tmp4 = param1;
// line 1313
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Compiler** $tmp5 = &param0->$self;
org$pandalanguage$pandac$Compiler* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$Compiler** $tmp7 = &param0->$self;
*$tmp7 = param2;
return;

}
void org$pandalanguage$pandac$Compiler$_Closure2$cleanup(org$pandalanguage$pandac$Compiler$_Closure2* param0) {

// line 1313
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type** $tmp8 = &param0->type;
org$pandalanguage$pandac$Type* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
org$pandalanguage$pandac$Compiler** $tmp10 = &param0->$self;
org$pandalanguage$pandac$Compiler* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
return;

}
org$pandalanguage$pandac$MethodDecl$Parameter* org$pandalanguage$pandac$Compiler$_Closure2$$anonymous1$org$pandalanguage$pandac$MethodDecl$Parameter$R$org$pandalanguage$pandac$MethodDecl$Parameter(org$pandalanguage$pandac$Compiler$_Closure2* param0, org$pandalanguage$pandac$MethodDecl$Parameter* param1) {

// line 1313
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp12 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String** $tmp13 = &param1->name;
panda$core$String* $tmp14 = *$tmp13;
org$pandalanguage$pandac$Compiler** $tmp15 = &param0->$self;
org$pandalanguage$pandac$Compiler* $tmp16 = *$tmp15;
org$pandalanguage$pandac$Type** $tmp17 = &param0->type;
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
org$pandalanguage$pandac$Type** $tmp19 = &param1->type;
org$pandalanguage$pandac$Type* $tmp20 = *$tmp19;
org$pandalanguage$pandac$Type* $tmp21 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp16, $tmp18, $tmp20);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp12, $tmp14, $tmp21);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($11:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($1:org.pandalanguage.pandac.MethodDecl.Parameter)
return $tmp12;

}






