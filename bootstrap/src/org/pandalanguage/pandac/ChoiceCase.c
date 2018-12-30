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
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceCase* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, panda$core$Int64 param5, panda$collections$ListView* param6) {

// line 15
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Weak** $tmp3 = &param0->initMethod;
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
panda$core$Weak** $tmp7 = &param0->initMethod;
*$tmp7 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 17
panda$core$Int64 $tmp8 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp9 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp8);
org$pandalanguage$pandac$Compiler$Resolution* $tmp10 = &param0->resolved;
*$tmp10 = $tmp9;
// line 21
panda$core$Weak* $tmp11 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp11, ((panda$core$Object*) param1));
panda$core$Weak** $tmp12 = &param0->owner;
panda$core$Weak* $tmp13 = *$tmp12;
bool $tmp14 = $tmp13 != ((panda$core$Weak*) NULL);
if ($tmp14) goto block3; else goto block4;
block3:;
panda$core$Object* $tmp15 = panda$core$Weak$get$R$panda$core$Weak$T($tmp13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp15)));
panda$core$Panda$unref$panda$core$Object$Q($tmp15);
goto block4;
block4:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Weak** $tmp16 = &param0->owner;
*$tmp16 = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// line 22
panda$core$String** $tmp17 = &param0->doccomment;
panda$core$String* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp19 = &param0->doccomment;
*$tmp19 = param4;
// line 23
panda$core$Int64* $tmp20 = &param0->rawValue;
*$tmp20 = param5;
// line 24
panda$collections$Array* $tmp21 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp21, ((panda$collections$CollectionView*) param6));
panda$collections$Array** $tmp22 = &param0->fields;
panda$collections$Array* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$collections$Array** $tmp24 = &param0->fields;
*$tmp24 = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// line 25
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Symbol$Kind $tmp26 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp25);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp26, param2, param3);
return;

}
panda$core$String* org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceCase* param0) {

// line 30
panda$core$Weak** $tmp27 = &param0->owner;
panda$core$Weak* $tmp28 = *$tmp27;
panda$core$Object* $tmp29 = panda$core$Weak$get$R$panda$core$Weak$T($tmp28);
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
panda$core$String** $tmp30 = &((org$pandalanguage$pandac$ClassDecl*) $tmp29)->name;
panda$core$String* $tmp31 = *$tmp30;
panda$core$String* $tmp32 = panda$core$String$convert$R$panda$core$String($tmp31);
panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s34);
panda$core$String** $tmp35 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp36 = *$tmp35;
panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, $tmp36);
panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s39);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
return $tmp38;

}
void org$pandalanguage$pandac$ChoiceCase$cleanup(org$pandalanguage$pandac$ChoiceCase* param0) {

panda$core$Weak** $tmp40 = &param0->owner;
panda$core$Weak* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$String** $tmp42 = &param0->doccomment;
panda$core$String* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$collections$Array** $tmp44 = &param0->fields;
panda$collections$Array* $tmp45 = *$tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$core$Weak** $tmp46 = &param0->initMethod;
panda$core$Weak* $tmp47 = *$tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
return;

}






