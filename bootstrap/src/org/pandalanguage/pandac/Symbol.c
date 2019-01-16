#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn13)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 31, -8857975360587182364, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x6d\x61\x70\x2e\x55", 30, 3740680454976621878, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x63\x74\x75\x61\x6c\x20\x76\x61\x6c\x75\x65\x3a\x20", 14, 5527027498651460954, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, 3933075217504599195, NULL };

void org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Symbol* param0, org$pandalanguage$pandac$Symbol$Kind param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 24
panda$core$Bit $tmp2 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param3, &$s3);
bool $tmp4 = $tmp2.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 25
org$pandalanguage$pandac$Type$Kind* $tmp5 = &((org$pandalanguage$pandac$Type*) param0)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp6 = *$tmp5;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
panda$core$Int64 $tmp8 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp9 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp8);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp10->value = $tmp9;
ITable* $tmp11 = ((panda$core$Equatable*) $tmp7)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Bit $tmp14 = $tmp12(((panda$core$Equatable*) $tmp7), ((panda$core$Equatable*) $tmp10));
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {25};
org$pandalanguage$pandac$Type$Kind* $tmp17 = &((org$pandalanguage$pandac$Type*) param0)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp18 = *$tmp17;
panda$core$Int64 $tmp19 = $tmp18.$rawValue;
panda$core$Int64$wrapper* $tmp20;
$tmp20 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp20->value = $tmp19;
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s22, ((panda$core$Object*) $tmp20));
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s24);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s25, $tmp16, $tmp23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($22:panda.core.Object)
abort(); // unreachable
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp10)));
// unreffing REF($12:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($8:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
goto block2;
block2:;
// line 27
org$pandalanguage$pandac$Symbol$Kind* $tmp26 = &param0->kind;
*$tmp26 = param1;
// line 28
org$pandalanguage$pandac$Position* $tmp27 = &param0->position;
*$tmp27 = param2;
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp28 = &param0->name;
panda$core$String* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$String** $tmp30 = &param0->name;
*$tmp30 = param3;
return;

}
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* param0) {

// line 33
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(true);
return $tmp31;

}
void org$pandalanguage$pandac$Symbol$cleanup(org$pandalanguage$pandac$Symbol* param0) {

// line 3
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp32 = &param0->name;
panda$core$String* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
return;

}

