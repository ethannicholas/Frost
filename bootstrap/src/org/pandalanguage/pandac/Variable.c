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

typedef panda$core$Bit (*$fn9)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 33, -8053884103077052220, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 14, -3338407112971726327, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 263, 3162362164514313779, NULL };

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Variable$Kind param2, panda$core$String* param3, org$pandalanguage$pandac$Type* param4, org$pandalanguage$pandac$Variable$Storage* param5) {

// line 28
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Weak** $tmp3 = &param0->owner;
panda$core$Weak* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp5 = &param0->owner;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
org$pandalanguage$pandac$Type* $tmp6 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp7 = ((panda$core$Equatable*) param4)->$class->itable;
while ($tmp7->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
$fn9 $tmp8 = $tmp7->methods[1];
panda$core$Bit $tmp10 = $tmp8(((panda$core$Equatable*) param4), ((panda$core$Equatable*) $tmp6));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($18:org.pandalanguage.pandac.Type)
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp12 = (panda$core$Int64) {31};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block1:;
// line 32
org$pandalanguage$pandac$Variable$Kind* $tmp15 = &param0->varKind;
*$tmp15 = param2;
// line 33
org$pandalanguage$pandac$Type** $tmp16 = &param0->type;
org$pandalanguage$pandac$Type* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Type** $tmp18 = &param0->type;
*$tmp18 = param4;
// line 34
org$pandalanguage$pandac$Variable$Storage** $tmp19 = &param0->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$Variable$Storage** $tmp21 = &param0->storage;
*$tmp21 = param5;
// line 35
panda$core$Int64 $tmp22 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp23 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp22);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp23, param1, param3);
return;

}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* param0) {

// line 40
panda$core$String** $tmp24 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp25 = *$tmp24;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
return $tmp25;

}
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* param0) {

// line 7
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
org$pandalanguage$pandac$Type** $tmp26 = &param0->type;
org$pandalanguage$pandac$Type* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
org$pandalanguage$pandac$Variable$Storage** $tmp28 = &param0->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Weak** $tmp30 = &param0->owner;
panda$core$Weak* $tmp31 = *$tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
return;

}

