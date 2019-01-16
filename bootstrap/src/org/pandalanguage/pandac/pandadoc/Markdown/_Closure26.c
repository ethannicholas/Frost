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
typedef panda$core$String* (*$fn66)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn78)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn103)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn113)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn125)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x36", 53, -5660865079504722637, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x27", 153, 1822096380931976951, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 936
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* param0) {

// line 936
panda$core$Object$cleanup(((panda$core$Object*) param0));
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
// line 937
*(&local0) = ((panda$core$String*) NULL);
// line 938
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
// line 939
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
// line 940
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
// line 941
panda$core$String* $tmp25 = *(&local3);
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {941};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block3:;
panda$core$Bit $tmp31 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp25, &$s32);
bool $tmp33 = $tmp31.value;
if ($tmp33) goto block1; else goto block2;
block1:;
// line 942
panda$core$String* $tmp34 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$String* $tmp35 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
*(&local3) = $tmp34;
goto block2;
block2:;
// line 945
org$pandalanguage$pandac$pandadoc$Markdown** $tmp36 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp37 = *$tmp36;
panda$collections$HashMap** $tmp38 = &$tmp37->linkDefinitions;
panda$collections$HashMap* $tmp39 = *$tmp38;
panda$core$String* $tmp40 = *(&local3);
panda$core$Bit $tmp41 = panda$core$Bit$init$builtin_bit($tmp40 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {945};
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
// line 946
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp48 = *(&local4);
panda$core$Bit $tmp49 = panda$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block7; else goto block9;
block7:;
// line 947
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp51 = *(&local4);
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {947};
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
// line 949
panda$core$String* $tmp60 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp61 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp62 = *$tmp61;
org$pandalanguage$pandac$pandadoc$Protector** $tmp63 = &$tmp62->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp64 = *$tmp63;
$fn66 $tmp65 = ($fn66) $tmp64->$class->vtable[2];
panda$core$String* $tmp67 = $tmp65($tmp64, &$s68);
panda$core$String* $tmp69 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp60, &$s70, $tmp67);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$String* $tmp71 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
*(&local5) = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($133:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($132:panda.core.String)
// line 950
panda$core$String* $tmp72 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp73 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp74 = *$tmp73;
org$pandalanguage$pandac$pandadoc$Protector** $tmp75 = &$tmp74->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp76 = *$tmp75;
$fn78 $tmp77 = ($fn78) $tmp76->$class->vtable[2];
panda$core$String* $tmp79 = $tmp77($tmp76, &$s80);
panda$core$String* $tmp81 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp72, &$s82, $tmp79);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$String* $tmp83 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
*(&local5) = $tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($153:panda.core.String)
// line 951
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp84 = *(&local4);
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit($tmp84 != NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp87 = (panda$core$Int64) {951};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s88, $tmp87, &$s89);
abort(); // unreachable
block12:;
panda$core$String** $tmp90 = &$tmp84->title;
panda$core$String* $tmp91 = *$tmp90;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$String* $tmp92 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local6) = $tmp91;
// line 952
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s93));
panda$core$String* $tmp94 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local7) = &$s95;
// line 953
panda$core$String* $tmp96 = *(&local6);
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit(true);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block16; else goto block17;
block16:;
panda$core$String* $tmp99 = *(&local6);
ITable* $tmp101 = ((panda$core$Equatable*) $tmp99)->$class->itable;
while ($tmp101->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[1];
panda$core$Bit $tmp104 = $tmp102(((panda$core$Equatable*) $tmp99), ((panda$core$Equatable*) &$s100));
*(&local8) = $tmp104;
goto block18;
block17:;
*(&local8) = $tmp97;
goto block18;
block18:;
panda$core$Bit $tmp105 = *(&local8);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block14; else goto block15;
block14:;
// line 955
panda$core$String* $tmp107 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp108 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp109 = *$tmp108;
org$pandalanguage$pandac$pandadoc$Protector** $tmp110 = &$tmp109->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp111 = *$tmp110;
$fn113 $tmp112 = ($fn113) $tmp111->$class->vtable[2];
panda$core$String* $tmp114 = $tmp112($tmp111, &$s115);
panda$core$String* $tmp116 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp107, &$s117, $tmp114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$String* $tmp118 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
*(&local6) = $tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($219:panda.core.String)
// line 956
panda$core$String* $tmp119 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp120 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp121 = *$tmp120;
org$pandalanguage$pandac$pandadoc$Protector** $tmp122 = &$tmp121->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp123 = *$tmp122;
$fn125 $tmp124 = ($fn125) $tmp123->$class->vtable[2];
panda$core$String* $tmp126 = $tmp124($tmp123, &$s127);
panda$core$String* $tmp128 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp119, &$s129, $tmp126);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$String* $tmp130 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
*(&local6) = $tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($241:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($240:panda.core.String)
// line 957
panda$core$String* $tmp131 = *(&local6);
panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s133, $tmp131);
panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s135);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$String* $tmp136 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
*(&local7) = $tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($257:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing REF($256:panda.core.String)
goto block15;
block15:;
// line 959
panda$core$String* $tmp137 = *(&local5);
panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, $tmp137);
panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s141);
panda$core$String* $tmp142 = *(&local7);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, $tmp142);
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s145);
panda$core$String* $tmp146 = *(&local2);
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp149 = (panda$core$Int64) {959};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s150, $tmp149, &$s151);
abort(); // unreachable
block19:;
panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, $tmp146);
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s154);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
panda$core$String* $tmp155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
*(&local0) = $tmp153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($288:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($287:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($277:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($276:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($274:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing REF($273:panda.core.String)
panda$core$String* $tmp156 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp157 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp158 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block8;
block9:;
// line 1
// line 962
panda$core$String* $tmp159 = *(&local1);
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit($tmp159 != NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp162 = (panda$core$Int64) {962};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s163, $tmp162, &$s164);
abort(); // unreachable
block21:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$String* $tmp165 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local0) = $tmp159;
goto block8;
block8:;
// line 964
panda$core$String* $tmp166 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp167 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$String* $tmp168 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp169 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
// unreffing linkText
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp170 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp171 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp166);

}

