#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ChoiceCase$class_type org$pandalanguage$pandac$ChoiceCase$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String, org$pandalanguage$pandac$ChoiceCase$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 35, 1868571056118340221, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceCase* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, panda$core$Int64 param5, panda$collections$ListView* param6) {

// line 15
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Weak** $tmp3 = &param0->initMethod;
panda$core$Weak* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp5 = &param0->initMethod;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 17
panda$core$Int64 $tmp6 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp7 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp6);
org$pandalanguage$pandac$Compiler$Resolution* $tmp8 = &param0->resolved;
*$tmp8 = $tmp7;
// line 21
panda$core$Weak* $tmp9 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp9, ((panda$core$Object*) param1));
panda$core$Weak** $tmp10 = &param0->owner;
panda$core$Weak* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Weak** $tmp12 = &param0->owner;
*$tmp12 = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// line 22
panda$core$String** $tmp13 = &param0->doccomment;
panda$core$String* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp15 = &param0->doccomment;
*$tmp15 = param4;
// line 23
panda$core$Int64* $tmp16 = &param0->rawValue;
*$tmp16 = param5;
// line 24
panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp17, ((panda$collections$CollectionView*) param6));
panda$collections$Array** $tmp18 = &param0->fields;
panda$collections$Array* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$collections$Array** $tmp20 = &param0->fields;
*$tmp20 = $tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// line 25
panda$core$Int64 $tmp21 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Symbol$Kind $tmp22 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp21);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp22, param2, param3);
return;

}
panda$core$String* org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceCase* param0) {

// line 30
panda$core$Weak** $tmp23 = &param0->owner;
panda$core$Weak* $tmp24 = *$tmp23;
panda$core$Object* $tmp25 = panda$core$Weak$get$R$panda$core$Weak$T($tmp24);
panda$core$Panda$unref$panda$core$Object$Q($tmp25);
panda$core$String** $tmp26 = &((org$pandalanguage$pandac$ClassDecl*) $tmp25)->name;
panda$core$String* $tmp27 = *$tmp26;
panda$core$String* $tmp28 = panda$core$String$convert$R$panda$core$String($tmp27);
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s30);
panda$core$String** $tmp31 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp32 = *$tmp31;
panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, $tmp32);
panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
return $tmp34;

}
void org$pandalanguage$pandac$ChoiceCase$cleanup(org$pandalanguage$pandac$ChoiceCase* param0) {

panda$core$Weak** $tmp36 = &param0->owner;
panda$core$Weak* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$String** $tmp38 = &param0->doccomment;
panda$core$String* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$collections$Array** $tmp40 = &param0->fields;
panda$collections$Array* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Weak** $tmp42 = &param0->initMethod;
panda$core$Weak* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
return;

}






