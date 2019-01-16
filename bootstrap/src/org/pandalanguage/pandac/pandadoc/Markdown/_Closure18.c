#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure18.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn11)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn23)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x38", 53, -5660865079504722736, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, 751414109755816110, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 769
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0) {

// line 769
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
// line 770
panda$core$MutableString* $tmp7 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp8 = (panda$core$Int64) {1};
ITable* $tmp9 = param1->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
panda$core$Object* $tmp12 = $tmp10(param1, $tmp8);
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp12) != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {770};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
panda$core$MutableString$init$panda$core$String($tmp7, ((panda$core$String*) $tmp12));
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$MutableString* $tmp18 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local0) = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// unreffing REF($5:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($1:panda.core.MutableString)
// line 771
org$pandalanguage$pandac$pandadoc$Markdown** $tmp19 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp20 = *$tmp19;
panda$core$MutableString* $tmp21 = *(&local0);
$fn23 $tmp22 = ($fn23) $tmp20->$class->vtable[22];
$tmp22($tmp20, $tmp21);
// line 772
panda$core$Int64 $tmp24 = (panda$core$Int64) {1};
ITable* $tmp25 = param1->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Object* $tmp28 = $tmp26(param1, $tmp24);
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp28) != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp31 = (panda$core$Int64) {772};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block3:;
panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s35, ((panda$core$String*) $tmp28));
panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s37);
panda$core$MutableString* $tmp38 = *(&local0);
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp36, ((panda$core$Object*) $tmp38));
panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s41);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp28);
// unreffing REF($39:panda.collections.ListView.T)
panda$core$MutableString* $tmp42 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp40;

}

