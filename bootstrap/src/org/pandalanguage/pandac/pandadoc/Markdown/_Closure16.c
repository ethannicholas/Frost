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
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn40)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn46)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn51)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x36", 53, -5660865079504722738, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 736
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* param0) {

// line 736
panda$core$Object$cleanup(((panda$core$Object*) param0));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
// line 738
panda$core$MutableString* $tmp13 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp14 = *(&local0);
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {738};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
panda$core$MutableString$init$panda$core$String($tmp13, $tmp14);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$MutableString* $tmp20 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
*(&local1) = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($17:panda.core.MutableString)
// line 739
panda$core$Int64 $tmp21 = (panda$core$Int64) {1};
ITable* $tmp22 = param1->$class->itable;
while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
panda$core$Object* $tmp25 = $tmp23(param1, $tmp21);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp25)));
panda$core$String* $tmp26 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
*(&local2) = ((panda$core$String*) $tmp25);
panda$core$Panda$unref$panda$core$Object$Q($tmp25);
// unreffing REF($42:panda.collections.ListView.T)
// line 740
panda$core$String* $tmp27 = *(&local2);
panda$core$Bit $tmp28 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit($tmp27);
panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block5; else goto block6;
block5:;
*(&local3) = $tmp29;
goto block7;
block6:;
panda$core$MutableString* $tmp31 = *(&local1);
panda$core$Bit $tmp32 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit($tmp31);
*(&local3) = $tmp32;
goto block7;
block7:;
panda$core$Bit $tmp33 = *(&local3);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block8;
block3:;
// line 741
panda$core$MutableString* $tmp35 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp35);
// line 742
org$pandalanguage$pandac$pandadoc$Markdown** $tmp36 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp37 = *$tmp36;
panda$core$MutableString* $tmp38 = *(&local1);
$fn40 $tmp39 = ($fn40) $tmp37->$class->vtable[6];
$tmp39($tmp37, $tmp38);
goto block4;
block8:;
// line 1
// line 746
panda$core$MutableString* $tmp41 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp41);
// line 747
org$pandalanguage$pandac$pandadoc$Markdown** $tmp42 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp43 = *$tmp42;
panda$core$MutableString* $tmp44 = *(&local1);
$fn46 $tmp45 = ($fn46) $tmp43->$class->vtable[19];
$tmp45($tmp43, $tmp44);
// line 748
org$pandalanguage$pandac$pandadoc$Markdown** $tmp47 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp48 = *$tmp47;
panda$core$MutableString* $tmp49 = *(&local1);
$fn51 $tmp50 = ($fn51) $tmp48->$class->vtable[22];
$tmp50($tmp48, $tmp49);
goto block4;
block4:;
// line 750
panda$core$MutableString* $tmp52 = *(&local1);
panda$core$MutableString$trim($tmp52);
// line 751
panda$core$MutableString* $tmp53 = *(&local1);
panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s55, ((panda$core$Object*) $tmp53));
panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s57);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($102:panda.core.String)
panda$core$String* $tmp58 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing leadingLine
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp59 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing item
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp60 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp56;

}

