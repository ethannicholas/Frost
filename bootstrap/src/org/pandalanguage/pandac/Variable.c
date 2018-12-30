#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Variable$convert$R$panda$core$String, org$pandalanguage$pandac$Variable$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn11)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 33, -8053884103077052220, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 14, -3338407112971726327, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 263, 3162362164514313779, NULL };

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Variable$Kind param2, panda$core$String* param3, org$pandalanguage$pandac$Type* param4, org$pandalanguage$pandac$Variable$Storage* param5) {

// line 28
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
org$pandalanguage$pandac$Type* $tmp8 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp9 = ((panda$core$Equatable*) param4)->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
panda$core$Bit $tmp12 = $tmp10(((panda$core$Equatable*) param4), ((panda$core$Equatable*) $tmp8));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {31};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block3:;
// line 32
org$pandalanguage$pandac$Variable$Kind* $tmp17 = &param0->varKind;
*$tmp17 = param2;
// line 33
org$pandalanguage$pandac$Type** $tmp18 = &param0->type;
org$pandalanguage$pandac$Type* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp20 = &param0->type;
*$tmp20 = param4;
// line 34
org$pandalanguage$pandac$Variable$Storage** $tmp21 = &param0->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Variable$Storage** $tmp23 = &param0->storage;
*$tmp23 = param5;
// line 35
panda$core$Int64 $tmp24 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp25 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp24);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp25, param1, param3);
return;

}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* param0) {

// line 40
panda$core$String** $tmp26 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp27 = *$tmp26;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
return $tmp27;

}
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* param0) {

org$pandalanguage$pandac$Type** $tmp28 = &param0->type;
org$pandalanguage$pandac$Type* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
org$pandalanguage$pandac$Variable$Storage** $tmp30 = &param0->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp31 = *$tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Weak** $tmp32 = &param0->owner;
panda$core$Weak* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
return;

}

