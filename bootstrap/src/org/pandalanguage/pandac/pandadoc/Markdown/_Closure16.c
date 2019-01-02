#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure16.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn19)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn35)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn41)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn46)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x36", 53, -5660865079504722738, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 736
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$Bit local3;
// line 737
panda$core$Int64 $tmp7 = (panda$core$Int64) {4};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// line 738
panda$core$MutableString* $tmp13 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp14 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp13, $tmp14);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
*(&local1) = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// line 739
panda$core$Int64 $tmp16 = (panda$core$Int64) {1};
ITable* $tmp17 = param1->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Object* $tmp20 = $tmp18(param1, $tmp16);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp21 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp20)));
*(&local2) = ((panda$core$String*) $tmp20);
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// line 740
panda$core$String* $tmp22 = *(&local2);
panda$core$Bit $tmp23 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit($tmp22);
panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
*(&local3) = $tmp24;
goto block3;
block2:;
panda$core$MutableString* $tmp26 = *(&local1);
panda$core$Bit $tmp27 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit($tmp26);
*(&local3) = $tmp27;
goto block3;
block3:;
panda$core$Bit $tmp28 = *(&local3);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block4; else goto block6;
block4:;
// line 741
panda$core$MutableString* $tmp30 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp30);
// line 742
org$pandalanguage$pandac$pandadoc$Markdown** $tmp31 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp32 = *$tmp31;
panda$core$MutableString* $tmp33 = *(&local1);
$fn35 $tmp34 = ($fn35) $tmp32->$class->vtable[6];
$tmp34($tmp32, $tmp33);
goto block5;
block6:;
// line 1
// line 746
panda$core$MutableString* $tmp36 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp36);
// line 747
org$pandalanguage$pandac$pandadoc$Markdown** $tmp37 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp38 = *$tmp37;
panda$core$MutableString* $tmp39 = *(&local1);
$fn41 $tmp40 = ($fn41) $tmp38->$class->vtable[19];
$tmp40($tmp38, $tmp39);
// line 748
org$pandalanguage$pandac$pandadoc$Markdown** $tmp42 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp43 = *$tmp42;
panda$core$MutableString* $tmp44 = *(&local1);
$fn46 $tmp45 = ($fn46) $tmp43->$class->vtable[22];
$tmp45($tmp43, $tmp44);
goto block5;
block5:;
// line 750
panda$core$MutableString* $tmp47 = *(&local1);
panda$core$MutableString$trim($tmp47);
// line 751
panda$core$MutableString* $tmp48 = *(&local1);
panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s50, ((panda$core$Object*) $tmp48));
panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s52);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$String* $tmp53 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing leadingLine
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp54 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing item
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp55 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp51;

}

