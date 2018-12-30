#include "org/pandalanguage/pandac/CCodeGenerator/AutoContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator/EnclosingContext.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"


static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$AutoContext$class_type org$pandalanguage$pandac$CCodeGenerator$AutoContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$AutoContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 51, 5431855437369644459, NULL };

void org$pandalanguage$pandac$CCodeGenerator$AutoContext$init$org$pandalanguage$pandac$CCodeGenerator$org$pandalanguage$pandac$CCodeGenerator$EnclosingContext(org$pandalanguage$pandac$CCodeGenerator$AutoContext* param0, org$pandalanguage$pandac$CCodeGenerator* param1, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* param2) {

// line 25
org$pandalanguage$pandac$CCodeGenerator** $tmp2 = &param0->cg;
org$pandalanguage$pandac$CCodeGenerator* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$CCodeGenerator** $tmp4 = &param0->cg;
*$tmp4 = param1;
// line 26
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext** $tmp5 = &param0->context;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext** $tmp7 = &param0->context;
*$tmp7 = param2;
// line 27
panda$collections$Stack** $tmp8 = &param1->enclosingContexts;
panda$collections$Stack* $tmp9 = *$tmp8;
panda$collections$Stack$push$panda$collections$Stack$T($tmp9, ((panda$core$Object*) param2));
return;

}
void org$pandalanguage$pandac$CCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$AutoContext* param0) {

// line 32
org$pandalanguage$pandac$CCodeGenerator** $tmp10 = &param0->cg;
org$pandalanguage$pandac$CCodeGenerator* $tmp11 = *$tmp10;
panda$collections$Stack** $tmp12 = &$tmp11->enclosingContexts;
panda$collections$Stack* $tmp13 = *$tmp12;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext** $tmp14 = &param0->context;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* $tmp15 = *$tmp14;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp13, ((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$CCodeGenerator** $tmp16 = &param0->cg;
org$pandalanguage$pandac$CCodeGenerator* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext** $tmp18 = &param0->context;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
return;

}

