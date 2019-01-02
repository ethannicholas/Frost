#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure30.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/RegularExpression.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Equatable.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn47)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn59)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn79)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn89)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn101)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn146)(panda$core$String*);
typedef panda$core$String* (*$fn148)(panda$core$Object*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x30", 53, -5660865079504722542, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 1028
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
panda$core$String* local9 = NULL;
panda$core$String* local10 = NULL;
// line 1029
*(&local0) = ((panda$core$String*) NULL);
// line 1030
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
// line 1031
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
// line 1032
panda$core$String* $tmp19 = *(&local2);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp20 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local3) = $tmp19;
// line 1033
panda$core$String* $tmp21 = *(&local3);
panda$core$RegularExpression* $tmp22 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp22, &$s23);
panda$core$String* $tmp24 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp21, $tmp22, &$s25);
panda$core$String* $tmp26 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local3) = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// line 1034
org$pandalanguage$pandac$pandadoc$Markdown** $tmp27 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp28 = *$tmp27;
panda$collections$HashMap** $tmp29 = &$tmp28->linkDefinitions;
panda$collections$HashMap* $tmp30 = *$tmp29;
panda$core$String* $tmp31 = *(&local3);
panda$core$Object* $tmp32 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp30, ((panda$collections$Key*) $tmp31));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp33 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp32)));
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp32);
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
// line 1035
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp34 = *(&local4);
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block3;
block1:;
// line 1036
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp37 = *(&local4);
panda$core$String** $tmp38 = &$tmp37->url;
panda$core$String* $tmp39 = *$tmp38;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp40 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local5) = $tmp39;
// line 1038
panda$core$String* $tmp41 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp42 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp43 = *$tmp42;
org$pandalanguage$pandac$pandadoc$Protector** $tmp44 = &$tmp43->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp45 = *$tmp44;
$fn47 $tmp46 = ($fn47) $tmp45->$class->vtable[2];
panda$core$String* $tmp48 = $tmp46($tmp45, &$s49);
panda$core$String* $tmp50 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp41, &$s51, $tmp48);
panda$core$String* $tmp52 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
*(&local5) = $tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// line 1039
panda$core$String* $tmp53 = *(&local5);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp54 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp55 = *$tmp54;
org$pandalanguage$pandac$pandadoc$Protector** $tmp56 = &$tmp55->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp57 = *$tmp56;
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[2];
panda$core$String* $tmp60 = $tmp58($tmp57, &$s61);
panda$core$String* $tmp62 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp53, &$s63, $tmp60);
panda$core$String* $tmp64 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
*(&local5) = $tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// line 1040
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp65 = *(&local4);
panda$core$String** $tmp66 = &$tmp65->title;
panda$core$String* $tmp67 = *$tmp66;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp68 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local6) = $tmp67;
// line 1041
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp69 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s70));
*(&local7) = &$s71;
// line 1042
panda$core$String* $tmp72 = *(&local6);
panda$core$Bit $tmp73 = panda$core$Bit$init$builtin_bit(true);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block4; else goto block5;
block4:;
panda$core$String* $tmp75 = *(&local6);
ITable* $tmp77 = ((panda$core$Equatable*) $tmp75)->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
panda$core$Bit $tmp80 = $tmp78(((panda$core$Equatable*) $tmp75), ((panda$core$Equatable*) &$s76));
*(&local8) = $tmp80;
goto block6;
block5:;
*(&local8) = $tmp73;
goto block6;
block6:;
panda$core$Bit $tmp81 = *(&local8);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block7; else goto block8;
block7:;
// line 1044
panda$core$String* $tmp83 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp84 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp85 = *$tmp84;
org$pandalanguage$pandac$pandadoc$Protector** $tmp86 = &$tmp85->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp87 = *$tmp86;
$fn89 $tmp88 = ($fn89) $tmp87->$class->vtable[2];
panda$core$String* $tmp90 = $tmp88($tmp87, &$s91);
panda$core$String* $tmp92 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp83, &$s93, $tmp90);
panda$core$String* $tmp94 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local6) = $tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// line 1045
panda$core$String* $tmp95 = *(&local6);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp96 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp97 = *$tmp96;
org$pandalanguage$pandac$pandadoc$Protector** $tmp98 = &$tmp97->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp99 = *$tmp98;
$fn101 $tmp100 = ($fn101) $tmp99->$class->vtable[2];
panda$core$String* $tmp102 = $tmp100($tmp99, &$s103);
panda$core$String* $tmp104 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp95, &$s105, $tmp102);
panda$core$String* $tmp106 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
*(&local6) = $tmp104;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// line 1046
panda$core$String* $tmp107 = *(&local6);
panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s109, $tmp107);
panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s111);
panda$core$String* $tmp112 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local7) = $tmp110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
goto block8;
block8:;
// line 1048
panda$core$String* $tmp113 = *(&local5);
panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s115, $tmp113);
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s117);
panda$core$String* $tmp118 = *(&local7);
panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, $tmp118);
panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s121);
panda$core$String* $tmp122 = *(&local2);
panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, $tmp122);
panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s125);
panda$core$String* $tmp126 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
*(&local0) = $tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$String* $tmp127 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing titleTag
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp128 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing title
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp129 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing url
*(&local5) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 1051
org$pandalanguage$pandac$pandadoc$Markdown** $tmp130 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp131 = *$tmp130;
panda$core$MutableMethod** $tmp132 = &$tmp131->linkResolver;
panda$core$MutableMethod* $tmp133 = *$tmp132;
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block9; else goto block11;
block9:;
// line 1052
org$pandalanguage$pandac$pandadoc$Markdown** $tmp136 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp137 = *$tmp136;
panda$core$MutableMethod** $tmp138 = &$tmp137->linkResolver;
panda$core$MutableMethod* $tmp139 = *$tmp138;
panda$core$String* $tmp140 = *(&local2);
panda$core$Int8** $tmp141 = &$tmp139->pointer;
panda$core$Int8* $tmp142 = *$tmp141;
panda$core$Object** $tmp143 = &$tmp139->target;
panda$core$Object* $tmp144 = *$tmp143;
bool $tmp145 = $tmp144 != ((panda$core$Object*) NULL);
if ($tmp145) goto block12; else goto block13;
block13:;
panda$core$String* $tmp147 = (($fn146) $tmp142)($tmp140);
*(&local9) = $tmp147;
goto block14;
block12:;
panda$core$String* $tmp149 = (($fn148) $tmp142)($tmp144, $tmp140);
*(&local9) = $tmp149;
goto block14;
block14:;
panda$core$String* $tmp150 = *(&local9);
panda$core$String* $tmp151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local0) = $tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// line 1053
panda$core$String* $tmp152 = *(&local0);
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit($tmp152 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block15; else goto block17;
block15:;
// line 1054
panda$core$String* $tmp155 = *(&local2);
panda$core$String* $tmp156 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp155, &$s157, &$s158);
panda$core$String* $tmp159 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp156, &$s160, &$s161);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp162 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
*(&local10) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// line 1055
panda$core$String* $tmp163 = *(&local0);
panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s165, $tmp163);
panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s167);
panda$core$String* $tmp168 = *(&local10);
panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, $tmp168);
panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s171);
panda$core$String* $tmp172 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
*(&local0) = $tmp170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
panda$core$String* $tmp173 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing escaped
*(&local10) = ((panda$core$String*) NULL);
goto block16;
block17:;
// line 1
// line 1058
panda$core$String* $tmp174 = *(&local2);
panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, $tmp174);
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s178);
panda$core$String* $tmp179 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
*(&local0) = $tmp177;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
goto block16;
block16:;
goto block10;
block11:;
// line 1
// line 1062
panda$core$String* $tmp181 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s180));
*(&local0) = &$s180;
goto block10;
block10:;
goto block2;
block2:;
// line 1065
panda$core$String* $tmp182 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp183 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing defn
*(&local4) = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) NULL);
panda$core$String* $tmp184 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing id
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp185 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing linkText
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp186 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing wholeMatch
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing replacementText
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp182);

}

