#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 31, -8857975360587182364, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x70\x61\x6e\x64\x61", 12, 3933075218527676353, NULL };

void org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Symbol* param0, org$pandalanguage$pandac$Symbol$Kind param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 23
org$pandalanguage$pandac$Symbol$Kind* $tmp2 = &param0->kind;
*$tmp2 = param1;
// line 24
org$pandalanguage$pandac$Position* $tmp3 = &param0->position;
*$tmp3 = param2;
// line 25
panda$core$String** $tmp4 = &param0->name;
panda$core$String* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp6 = &param0->name;
*$tmp6 = param3;
// line 26
ITable* $tmp8 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {26};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s14, $tmp13);
abort(); // unreachable
block1:;
return;

}
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* param0) {

// line 30
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit(true);
return $tmp15;

}
void org$pandalanguage$pandac$Symbol$cleanup(org$pandalanguage$pandac$Symbol* param0) {

panda$core$String** $tmp16 = &param0->name;
panda$core$String* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
return;

}

