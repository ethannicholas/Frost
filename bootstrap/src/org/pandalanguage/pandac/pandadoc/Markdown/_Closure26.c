#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure26.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Equatable.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn51)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn63)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn83)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn93)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn105)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x36", 53, -5660865079504722637, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 920
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
// line 921
*(&local0) = ((panda$core$String*) NULL);
// line 922
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp12 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
*(&local1) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// line 923
panda$core$Int64 $tmp13 = (panda$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp18 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
*(&local2) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// line 924
panda$core$Int64 $tmp19 = (panda$core$Int64) {3};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp24 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp23)));
*(&local3) = ((panda$core$String*) $tmp23);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// line 925
panda$core$String* $tmp25 = *(&local3);
panda$core$Bit $tmp26 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp25, &$s27);
bool $tmp28 = $tmp26.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 926
panda$core$String* $tmp29 = *(&local2);
panda$core$String* $tmp30 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp29;
goto block2;
block2:;
// line 929
org$pandalanguage$pandac$pandadoc$Markdown** $tmp31 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp32 = *$tmp31;
panda$collections$HashMap** $tmp33 = &$tmp32->linkDefinitions;
panda$collections$HashMap* $tmp34 = *$tmp33;
panda$core$String* $tmp35 = *(&local3);
panda$core$Object* $tmp36 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp34, ((panda$collections$Key*) $tmp35));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp36)));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp36);
panda$core$Panda$unref$panda$core$Object$Q($tmp36);
// line 930
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block5;
block3:;
// line 931
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp41 = *(&local4);
panda$core$String** $tmp42 = &$tmp41->url;
panda$core$String* $tmp43 = *$tmp42;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp44 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local5) = $tmp43;
// line 933
panda$core$String* $tmp45 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp46 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp47 = *$tmp46;
org$pandalanguage$pandac$pandadoc$Protector** $tmp48 = &$tmp47->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp49 = *$tmp48;
$fn51 $tmp50 = ($fn51) $tmp49->$class->vtable[2];
panda$core$String* $tmp52 = $tmp50($tmp49, &$s53);
panda$core$String* $tmp54 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp45, &$s55, $tmp52);
panda$core$String* $tmp56 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
*(&local5) = $tmp54;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// line 934
panda$core$String* $tmp57 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp58 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp59 = *$tmp58;
org$pandalanguage$pandac$pandadoc$Protector** $tmp60 = &$tmp59->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp61 = *$tmp60;
$fn63 $tmp62 = ($fn63) $tmp61->$class->vtable[2];
panda$core$String* $tmp64 = $tmp62($tmp61, &$s65);
panda$core$String* $tmp66 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp57, &$s67, $tmp64);
panda$core$String* $tmp68 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
*(&local5) = $tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// line 935
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp69 = *(&local4);
panda$core$String** $tmp70 = &$tmp69->title;
panda$core$String* $tmp71 = *$tmp70;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp72 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
*(&local6) = $tmp71;
// line 936
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp73 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s74));
*(&local7) = &$s75;
// line 937
panda$core$String* $tmp76 = *(&local6);
panda$core$Bit $tmp77 = panda$core$Bit$init$builtin_bit(true);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block6; else goto block7;
block6:;
panda$core$String* $tmp79 = *(&local6);
ITable* $tmp81 = ((panda$core$Equatable*) $tmp79)->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
panda$core$Bit $tmp84 = $tmp82(((panda$core$Equatable*) $tmp79), ((panda$core$Equatable*) &$s80));
*(&local8) = $tmp84;
goto block8;
block7:;
*(&local8) = $tmp77;
goto block8;
block8:;
panda$core$Bit $tmp85 = *(&local8);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block9; else goto block10;
block9:;
// line 939
panda$core$String* $tmp87 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp88 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp89 = *$tmp88;
org$pandalanguage$pandac$pandadoc$Protector** $tmp90 = &$tmp89->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
panda$core$String* $tmp94 = $tmp92($tmp91, &$s95);
panda$core$String* $tmp96 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp87, &$s97, $tmp94);
panda$core$String* $tmp98 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
*(&local6) = $tmp96;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// line 940
panda$core$String* $tmp99 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp100 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp101 = *$tmp100;
org$pandalanguage$pandac$pandadoc$Protector** $tmp102 = &$tmp101->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp103 = *$tmp102;
$fn105 $tmp104 = ($fn105) $tmp103->$class->vtable[2];
panda$core$String* $tmp106 = $tmp104($tmp103, &$s107);
panda$core$String* $tmp108 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp99, &$s109, $tmp106);
panda$core$String* $tmp110 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
*(&local6) = $tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// line 941
panda$core$String* $tmp111 = *(&local6);
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s113, $tmp111);
panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s115);
panda$core$String* $tmp116 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
*(&local7) = $tmp114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
goto block10;
block10:;
// line 943
panda$core$String* $tmp117 = *(&local5);
panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s119, $tmp117);
panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s121);
panda$core$String* $tmp122 = *(&local7);
panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, $tmp122);
panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s125);
panda$core$String* $tmp126 = *(&local2);
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, $tmp126);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s129);
panda$core$String* $tmp130 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
*(&local0) = $tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$String* $tmp131 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp132 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp133 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 946
panda$core$String* $tmp134 = *(&local1);
panda$core$String* $tmp135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
*(&local0) = $tmp134;
goto block4;
block4:;
// line 948
panda$core$String* $tmp136 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp137 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$String* $tmp138 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing linkText
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp136);

}

