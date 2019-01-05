#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure24.h"
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
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Equatable.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn53)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn66)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn85)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn97)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn110)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 53, -5660865079504722639, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 898
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* param0) {

// line 898
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
// line 899
*(&local0) = ((panda$core$String*) NULL);
// line 900
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
// line 901
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
// line 902
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
// line 903
panda$core$String* $tmp25 = *(&local3);
panda$core$Bit $tmp26 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp25, &$s27);
bool $tmp28 = $tmp26.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 904
panda$core$String* $tmp29 = *(&local2);
panda$core$String* $tmp30 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp29;
goto block2;
block2:;
// line 908
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
// line 909
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp38 = *(&local4);
panda$core$Bit $tmp39 = panda$core$Bit$init$builtin_bit($tmp38 != NULL);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block5;
block3:;
// line 910
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp41 = *(&local4);
panda$core$String** $tmp42 = &$tmp41->url;
panda$core$String* $tmp43 = *$tmp42;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp44 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local5) = $tmp43;
// line 911
panda$core$String* $tmp45 = *(&local5);
panda$core$RegularExpression* $tmp46 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp46, &$s47);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp48 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp49 = *$tmp48;
org$pandalanguage$pandac$pandadoc$Protector** $tmp50 = &$tmp49->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp51 = *$tmp50;
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[2];
panda$core$String* $tmp54 = $tmp52($tmp51, &$s55);
panda$core$String* $tmp56 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp45, $tmp46, $tmp54);
panda$core$String* $tmp57 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local5) = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($102:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($94:panda.core.RegularExpression)
// line 912
panda$core$String* $tmp58 = *(&local5);
panda$core$RegularExpression* $tmp59 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp59, &$s60);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp61 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp62 = *$tmp61;
org$pandalanguage$pandac$pandadoc$Protector** $tmp63 = &$tmp62->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp64 = *$tmp63;
$fn66 $tmp65 = ($fn66) $tmp64->$class->vtable[2];
panda$core$String* $tmp67 = $tmp65($tmp64, &$s68);
panda$core$String* $tmp69 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp58, $tmp59, $tmp67);
panda$core$String* $tmp70 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local5) = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($128:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($127:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($120:panda.core.RegularExpression)
// line 913
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp71 = *(&local4);
panda$core$String** $tmp72 = &$tmp71->title;
panda$core$String* $tmp73 = *$tmp72;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp74 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local6) = $tmp73;
// line 914
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp75 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s76));
*(&local7) = &$s77;
// line 915
panda$core$String* $tmp78 = *(&local6);
panda$core$Bit $tmp79 = panda$core$Bit$init$builtin_bit(true);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block8; else goto block9;
block8:;
panda$core$String* $tmp81 = *(&local6);
ITable* $tmp83 = ((panda$core$Equatable*) $tmp81)->$class->itable;
while ($tmp83->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
panda$core$Bit $tmp86 = $tmp84(((panda$core$Equatable*) $tmp81), ((panda$core$Equatable*) &$s82));
*(&local8) = $tmp86;
goto block10;
block9:;
*(&local8) = $tmp79;
goto block10;
block10:;
panda$core$Bit $tmp87 = *(&local8);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block6; else goto block7;
block6:;
// line 916
panda$core$String* $tmp89 = *(&local6);
panda$core$RegularExpression* $tmp90 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp90, &$s91);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp92 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp93 = *$tmp92;
org$pandalanguage$pandac$pandadoc$Protector** $tmp94 = &$tmp93->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp95 = *$tmp94;
$fn97 $tmp96 = ($fn97) $tmp95->$class->vtable[2];
panda$core$String* $tmp98 = $tmp96($tmp95, &$s99);
panda$core$String* $tmp100 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp89, $tmp90, $tmp98);
panda$core$String* $tmp101 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
*(&local6) = $tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($192:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($184:panda.core.RegularExpression)
// line 917
panda$core$String* $tmp102 = *(&local6);
panda$core$RegularExpression* $tmp103 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp103, &$s104);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp105 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp106 = *$tmp105;
org$pandalanguage$pandac$pandadoc$Protector** $tmp107 = &$tmp106->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp108 = *$tmp107;
$fn110 $tmp109 = ($fn110) $tmp108->$class->vtable[2];
panda$core$String* $tmp111 = $tmp109($tmp108, &$s112);
panda$core$String* $tmp113 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp102, $tmp103, $tmp111);
panda$core$String* $tmp114 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
*(&local6) = $tmp113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($218:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($217:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($210:panda.core.RegularExpression)
// line 918
panda$core$String* $tmp115 = *(&local2);
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s117, $tmp115);
panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s119);
panda$core$String* $tmp120 = *(&local6);
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, $tmp120);
panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s123);
panda$core$String* $tmp124 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
*(&local7) = $tmp122;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($241:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($238:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($237:panda.core.String)
goto block7;
block7:;
// line 920
panda$core$String* $tmp125 = *(&local5);
panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s127, $tmp125);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp126, &$s129);
panda$core$String* $tmp130 = *(&local7);
panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, $tmp130);
panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s133);
panda$core$String* $tmp134 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
*(&local0) = $tmp132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing REF($267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($264:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($263:panda.core.String)
panda$core$String* $tmp135 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp136 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp137 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block5:;
// line 1
// line 923
panda$core$String* $tmp138 = *(&local1);
panda$core$String* $tmp139 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
*(&local0) = $tmp138;
goto block4;
block4:;
// line 925
panda$core$String* $tmp140 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp141 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp36);
// unreffing REF($65:panda.collections.HashMap.V?)
panda$core$String* $tmp142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($32:panda.collections.ListView.T)
panda$core$String* $tmp143 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing altText
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($19:panda.collections.ListView.T)
panda$core$String* $tmp144 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($6:panda.collections.ListView.T)
panda$core$String* $tmp145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return $tmp140;

}

