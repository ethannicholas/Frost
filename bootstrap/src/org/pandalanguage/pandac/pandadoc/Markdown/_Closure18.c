#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure18.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn11)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn18)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x38", 53, -5660865079504722736, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, 751414109755816110, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 769
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
// line 770
panda$core$MutableString* $tmp7 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp8 = (panda$core$Int64) {1};
ITable* $tmp9 = param1->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
panda$core$Object* $tmp12 = $tmp10(param1, $tmp8);
panda$core$MutableString$init$panda$core$String($tmp7, ((panda$core$String*) $tmp12));
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp13 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
*(&local0) = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// line 771
org$pandalanguage$pandac$pandadoc$Markdown** $tmp14 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp15 = *$tmp14;
panda$core$MutableString* $tmp16 = *(&local0);
$fn18 $tmp17 = ($fn18) $tmp15->$class->vtable[22];
$tmp17($tmp15, $tmp16);
// line 772
panda$core$Int64 $tmp19 = (panda$core$Int64) {1};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Object* $tmp23 = $tmp21(param1, $tmp19);
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s25, ((panda$core$String*) $tmp23));
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s27);
panda$core$MutableString* $tmp28 = *(&local0);
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp26, ((panda$core$Object*) $tmp28));
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, &$s31);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$MutableString* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp30;

}

