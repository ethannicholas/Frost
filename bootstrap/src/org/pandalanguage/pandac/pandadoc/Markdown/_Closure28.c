#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure28.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Bit.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/RegularExpression.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn22)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn41)(panda$core$String*);
typedef panda$core$String* (*$fn43)(panda$core$Object*, panda$core$String*);
typedef void (*$fn57)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn73)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn86)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn108)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn120)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 53, -5660865079504722635, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 982
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0) {

// line 982
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$MutableString* local5 = NULL;
// line 983
panda$core$Int64 $tmp7 = (panda$core$Int64) {2};
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
// line 984
panda$core$Int64 $tmp13 = (panda$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
panda$core$String* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local1) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($20:panda.collections.ListView.T)
// line 985
panda$core$Int64 $tmp19 = (panda$core$Int64) {6};
ITable* $tmp20 = param1->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Object* $tmp23 = $tmp21(param1, $tmp19);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp23)));
panda$core$String* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local2) = ((panda$core$String*) $tmp23);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($36:panda.collections.ListView.T)
// line 987
org$pandalanguage$pandac$pandadoc$Markdown** $tmp25 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp26 = *$tmp25;
panda$core$MutableMethod** $tmp27 = &$tmp26->linkResolver;
panda$core$MutableMethod* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block3;
block1:;
// line 988
org$pandalanguage$pandac$pandadoc$Markdown** $tmp31 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp32 = *$tmp31;
panda$core$MutableMethod** $tmp33 = &$tmp32->linkResolver;
panda$core$MutableMethod* $tmp34 = *$tmp33;
panda$core$String* $tmp35 = *(&local1);
panda$core$Int8** $tmp36 = &$tmp34->pointer;
panda$core$Int8* $tmp37 = *$tmp36;
panda$core$Object** $tmp38 = &$tmp34->target;
panda$core$Object* $tmp39 = *$tmp38;
bool $tmp40 = $tmp39 != ((panda$core$Object*) NULL);
if ($tmp40) goto block4; else goto block5;
block5:;
panda$core$String* $tmp42 = (($fn41) $tmp37)($tmp35);
*(&local3) = $tmp42;
goto block6;
block4:;
panda$core$String* $tmp44 = (($fn43) $tmp37)($tmp39, $tmp35);
*(&local3) = $tmp44;
goto block6;
block6:;
panda$core$String* $tmp45 = *(&local3);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$core$String* $tmp46 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local4) = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($79:panda.core.String?)
// line 989
panda$core$String* $tmp47 = *(&local4);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// line 990
panda$io$OutputStream* $tmp50 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp51 = *(&local1);
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s53, $tmp51);
panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s55);
$fn57 $tmp56 = ($fn57) $tmp50->$class->vtable[19];
$tmp56($tmp50, $tmp54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($97:panda.io.OutputStream)
// line 991
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s58));
panda$core$String* $tmp59 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
*(&local4) = &$s58;
goto block8;
block8:;
// line 993
panda$core$String* $tmp60 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$String* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local1) = $tmp60;
panda$core$String* $tmp62 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing newURL
*(&local4) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 996
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s63));
panda$core$String* $tmp64 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
*(&local1) = &$s63;
goto block2;
block2:;
// line 998
panda$core$String* $tmp65 = *(&local1);
panda$core$RegularExpression* $tmp66 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp66, &$s67);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp68 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp69 = *$tmp68;
org$pandalanguage$pandac$pandadoc$Protector** $tmp70 = &$tmp69->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp71 = *$tmp70;
$fn73 $tmp72 = ($fn73) $tmp71->$class->vtable[2];
panda$core$String* $tmp74 = $tmp72($tmp71, &$s75);
panda$core$String* $tmp76 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp65, $tmp66, $tmp74);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
panda$core$String* $tmp77 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
*(&local1) = $tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($157:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($149:panda.core.RegularExpression)
// line 999
panda$core$String* $tmp78 = *(&local1);
panda$core$RegularExpression* $tmp79 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp79, &$s80);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp81 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp82 = *$tmp81;
org$pandalanguage$pandac$pandadoc$Protector** $tmp83 = &$tmp82->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp84 = *$tmp83;
$fn86 $tmp85 = ($fn86) $tmp84->$class->vtable[2];
panda$core$String* $tmp87 = $tmp85($tmp84, &$s88);
panda$core$String* $tmp89 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp78, $tmp79, $tmp87);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$String* $tmp90 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local1) = $tmp89;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($185:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($177:panda.core.RegularExpression)
// line 1000
panda$core$MutableString* $tmp91 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp91);
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$MutableString* $tmp92 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local5) = $tmp91;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($203:panda.core.MutableString)
// line 1001
panda$core$MutableString* $tmp93 = *(&local5);
panda$core$String* $tmp94 = *(&local1);
panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s96, $tmp94);
panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s98);
panda$core$MutableString$append$panda$core$String($tmp93, $tmp97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($219:panda.core.String)
// line 1002
panda$core$String* $tmp99 = *(&local2);
panda$core$Bit $tmp100 = panda$core$Bit$init$builtin_bit($tmp99 != NULL);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block9; else goto block10;
block9:;
// line 1004
panda$core$String* $tmp102 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp103 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp104 = *$tmp103;
org$pandalanguage$pandac$pandadoc$Protector** $tmp105 = &$tmp104->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp106 = *$tmp105;
$fn108 $tmp107 = ($fn108) $tmp106->$class->vtable[2];
panda$core$String* $tmp109 = $tmp107($tmp106, &$s110);
panda$core$String* $tmp111 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp102, &$s112, $tmp109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$String* $tmp113 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
*(&local2) = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($243:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($242:panda.core.String)
// line 1005
panda$core$String* $tmp114 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown** $tmp115 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp116 = *$tmp115;
org$pandalanguage$pandac$pandadoc$Protector** $tmp117 = &$tmp116->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp118 = *$tmp117;
$fn120 $tmp119 = ($fn120) $tmp118->$class->vtable[2];
panda$core$String* $tmp121 = $tmp119($tmp118, &$s122);
panda$core$String* $tmp123 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp114, &$s124, $tmp121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$String* $tmp125 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local2) = $tmp123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($265:panda.core.String)
// line 1006
panda$core$String* $tmp126 = *(&local2);
panda$core$String* $tmp127 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp126, &$s128, &$s129);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$core$String* $tmp130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
*(&local2) = $tmp127;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing REF($283:panda.core.String)
// line 1007
panda$core$MutableString* $tmp131 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp131, &$s132);
// line 1008
panda$core$MutableString* $tmp133 = *(&local5);
panda$core$String* $tmp134 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp133, $tmp134);
// line 1009
panda$core$MutableString* $tmp135 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp135, &$s136);
goto block10;
block10:;
// line 1011
panda$core$MutableString* $tmp137 = *(&local5);
panda$core$String* $tmp138 = *(&local0);
panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s140, $tmp138);
panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, &$s142);
panda$core$MutableString$append$panda$core$String($tmp137, $tmp141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($311:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($310:panda.core.String)
// line 1012
panda$core$MutableString* $tmp143 = *(&local5);
panda$core$MutableString$append$panda$core$String($tmp143, &$s144);
// line 1013
panda$core$MutableString* $tmp145 = *(&local5);
panda$core$String* $tmp146 = panda$core$MutableString$convert$R$panda$core$String($tmp145);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($324:panda.core.String)
panda$core$MutableString* $tmp147 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing result
*(&local5) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp148 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing title
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp149 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing url
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp150 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing linkText
*(&local0) = ((panda$core$String*) NULL);
return $tmp146;

}

