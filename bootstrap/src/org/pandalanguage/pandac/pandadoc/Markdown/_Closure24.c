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
typedef panda$core$String* (*$fn68)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn81)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn105)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn117)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn130)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 53, -5660865079504722639, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 898
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local1) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($6:panda.collections.ListView.T)
// line 901
panda$core$Int64 $tmp13 = (panda$core$Int64) {2};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
panda$core$String* $tmp18 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local2) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($22:panda.collections.ListView.T)
// line 902
panda$core$Int64 $tmp19 = (panda$core$Int64) {3};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp23)));
panda$core$String* $tmp24 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local3) = ((panda$core$String*) $tmp23);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($38:panda.collections.ListView.T)
// line 903
panda$core$String* $tmp25 = *(&local3);
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {903};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block3:;
panda$core$Bit $tmp31 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp25, &$s32);
bool $tmp33 = $tmp31.value;
if ($tmp33) goto block1; else goto block2;
block1:;
// line 904
panda$core$String* $tmp34 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$String* $tmp35 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
*(&local3) = $tmp34;
goto block2;
block2:;
// line 908
org$pandalanguage$pandac$pandadoc$Markdown** $tmp36 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp37 = *$tmp36;
panda$collections$HashMap** $tmp38 = &$tmp37->linkDefinitions;
panda$collections$HashMap* $tmp39 = *$tmp38;
panda$core$String* $tmp40 = *(&local3);
panda$core$Bit $tmp41 = panda$core$Bit$init$builtin_bit($tmp40 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {908};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block5:;
panda$core$Object* $tmp46 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp39, ((panda$collections$Key*) $tmp40));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp46)));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp47 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp46);
panda$core$Panda$unref$panda$core$Object$Q($tmp46);
// unreffing REF($88:panda.collections.HashMap.V?)
// line 909
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp48 = *(&local4);
panda$core$Bit $tmp49 = panda$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block7; else goto block9;
block7:;
// line 910
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp51 = *(&local4);
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {910};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block10:;
panda$core$String** $tmp57 = &$tmp51->url;
panda$core$String* $tmp58 = *$tmp57;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
panda$core$String* $tmp59 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
*(&local5) = $tmp58;
// line 911
panda$core$String* $tmp60 = *(&local5);
panda$core$RegularExpression* $tmp61 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp61, &$s62);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp63 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp64 = *$tmp63;
org$pandalanguage$pandac$pandadoc$Protector** $tmp65 = &$tmp64->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp66 = *$tmp65;
$fn68 $tmp67 = ($fn68) $tmp66->$class->vtable[2];
panda$core$String* $tmp69 = $tmp67($tmp66, &$s70);
panda$core$String* $tmp71 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp60, $tmp61, $tmp69);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$String* $tmp72 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local5) = $tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($134:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing REF($127:panda.core.RegularExpression)
// line 912
panda$core$String* $tmp73 = *(&local5);
panda$core$RegularExpression* $tmp74 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp74, &$s75);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp76 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp77 = *$tmp76;
org$pandalanguage$pandac$pandadoc$Protector** $tmp78 = &$tmp77->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp79 = *$tmp78;
$fn81 $tmp80 = ($fn81) $tmp79->$class->vtable[2];
panda$core$String* $tmp82 = $tmp80($tmp79, &$s83);
panda$core$String* $tmp84 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp73, $tmp74, $tmp82);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$String* $tmp85 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local5) = $tmp84;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($160:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($153:panda.core.RegularExpression)
// line 913
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp86 = *(&local4);
panda$core$Bit $tmp87 = panda$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp89 = (panda$core$Int64) {913};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block12:;
panda$core$String** $tmp92 = &$tmp86->title;
panda$core$String* $tmp93 = *$tmp92;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$String* $tmp94 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local6) = $tmp93;
// line 914
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s95));
panda$core$String* $tmp96 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
*(&local7) = &$s97;
// line 915
panda$core$String* $tmp98 = *(&local6);
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit(true);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block16; else goto block17;
block16:;
panda$core$String* $tmp101 = *(&local6);
ITable* $tmp103 = ((panda$core$Equatable*) $tmp101)->$class->itable;
while ($tmp103->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[1];
panda$core$Bit $tmp106 = $tmp104(((panda$core$Equatable*) $tmp101), ((panda$core$Equatable*) &$s102));
*(&local8) = $tmp106;
goto block18;
block17:;
*(&local8) = $tmp99;
goto block18;
block18:;
panda$core$Bit $tmp107 = *(&local8);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block14; else goto block15;
block14:;
// line 916
panda$core$String* $tmp109 = *(&local6);
panda$core$RegularExpression* $tmp110 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp110, &$s111);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp112 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp113 = *$tmp112;
org$pandalanguage$pandac$pandadoc$Protector** $tmp114 = &$tmp113->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp115 = *$tmp114;
$fn117 $tmp116 = ($fn117) $tmp115->$class->vtable[2];
panda$core$String* $tmp118 = $tmp116($tmp115, &$s119);
panda$core$String* $tmp120 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp109, $tmp110, $tmp118);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$String* $tmp121 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
*(&local6) = $tmp120;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($232:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($231:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($224:panda.core.RegularExpression)
// line 917
panda$core$String* $tmp122 = *(&local6);
panda$core$RegularExpression* $tmp123 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp123, &$s124);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp125 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp126 = *$tmp125;
org$pandalanguage$pandac$pandadoc$Protector** $tmp127 = &$tmp126->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp128 = *$tmp127;
$fn130 $tmp129 = ($fn130) $tmp128->$class->vtable[2];
panda$core$String* $tmp131 = $tmp129($tmp128, &$s132);
panda$core$String* $tmp133 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp122, $tmp123, $tmp131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
panda$core$String* $tmp134 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
*(&local6) = $tmp133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($258:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($257:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($250:panda.core.RegularExpression)
// line 918
panda$core$String* $tmp135 = *(&local2);
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp138 = (panda$core$Int64) {918};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block19:;
panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s142, $tmp135);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s144);
panda$core$String* $tmp145 = *(&local6);
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, $tmp145);
panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s148);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
panda$core$String* $tmp149 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
*(&local7) = $tmp147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($288:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($287:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($285:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($284:panda.core.String)
goto block15;
block15:;
// line 920
panda$core$String* $tmp150 = *(&local5);
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s152, $tmp150);
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s154);
panda$core$String* $tmp155 = *(&local7);
panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, $tmp155);
panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s158);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
panda$core$String* $tmp159 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
*(&local0) = $tmp157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($314:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($313:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($311:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($310:panda.core.String)
panda$core$String* $tmp160 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp161 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp162 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block8;
block9:;
// line 1
// line 923
panda$core$String* $tmp163 = *(&local1);
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit($tmp163 != NULL);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp166 = (panda$core$Int64) {923};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block21:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$String* $tmp169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
*(&local0) = $tmp163;
goto block8;
block8:;
// line 925
panda$core$String* $tmp170 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp171 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$String* $tmp172 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp173 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing altText
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp174 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp175 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return $tmp170;

}

