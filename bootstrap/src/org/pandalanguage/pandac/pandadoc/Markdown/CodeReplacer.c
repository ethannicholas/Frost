#include "org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Equatable.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class_type org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String} };

typedef panda$core$Object* (*$fn8)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn19)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn24)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn38)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn43)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$String* (*$fn49)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn54)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn82)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 55, 280434186264950556, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 446
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->markdown;
*$tmp4 = param1;
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 450
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
panda$core$Object* $tmp9 = $tmp7(param1, $tmp5);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp9)));
*(&local0) = ((panda$core$String*) $tmp9);
panda$core$Panda$unref$panda$core$Object$Q($tmp9);
// line 451
panda$core$MutableString* $tmp11 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp12 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp11, $tmp12);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp13 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local1) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// line 452
panda$core$MutableString* $tmp14 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp14);
// line 453
org$pandalanguage$pandac$pandadoc$Markdown** $tmp15 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp16 = *$tmp15;
panda$core$MutableString* $tmp17 = *(&local1);
$fn19 $tmp18 = ($fn19) $tmp16->$class->vtable[18];
$tmp18($tmp16, $tmp17);
// line 454
org$pandalanguage$pandac$pandadoc$Markdown** $tmp20 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp21 = *$tmp20;
panda$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[14];
$tmp23($tmp21, $tmp22);
// line 455
panda$core$MutableString* $tmp25 = *(&local1);
panda$core$RegularExpression* $tmp26 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp26, &$s27);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp25, $tmp26, &$s28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// line 456
panda$core$MutableString* $tmp29 = *(&local1);
panda$core$RegularExpression* $tmp30 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp30, &$s31);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp29, $tmp30, &$s32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 457
panda$core$MutableString* $tmp33 = *(&local1);
panda$core$String* $tmp34 = panda$core$MutableString$convert$R$panda$core$String($tmp33);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp35 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local2) = $tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// line 458
*(&local3) = ((panda$core$String*) NULL);
// line 459
panda$core$String* $tmp36 = *(&local2);
$fn38 $tmp37 = ($fn38) param0->$class->vtable[3];
panda$core$String* $tmp39 = $tmp37(param0, $tmp36);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp40 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local4) = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// line 460
panda$core$String* $tmp41 = *(&local4);
$fn43 $tmp42 = ($fn43) param0->$class->vtable[4];
panda$core$Bit $tmp44 = $tmp42(param0, $tmp41);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block1; else goto block3;
block1:;
// line 461
panda$core$String* $tmp46 = *(&local4);
panda$core$String* $tmp47 = *(&local2);
$fn49 $tmp48 = ($fn49) param0->$class->vtable[5];
panda$core$String* $tmp50 = $tmp48(param0, $tmp46, $tmp47);
panda$core$String* $tmp51 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
*(&local3) = $tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
goto block2;
block3:;
// line 1
// line 464
panda$core$String* $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) param0->$class->vtable[6];
panda$core$String* $tmp55 = $tmp53(param0, $tmp52);
panda$core$String* $tmp56 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local3) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
goto block2;
block2:;
// line 466
panda$core$String* $tmp57 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$String* $tmp58 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing firstLine
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp59 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing out
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp60 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing ed
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp62 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing codeBlock
*(&local0) = ((panda$core$String*) NULL);
return $tmp57;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

// line 470
panda$collections$Array* $tmp63 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(param1, &$s64);
panda$core$Int64 $tmp65 = (panda$core$Int64) {0};
panda$core$Object* $tmp66 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp63, $tmp65);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp66)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$unref$panda$core$Object$Q($tmp66);
return ((panda$core$String*) $tmp66);

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
// line 474
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp67 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s68));
*(&local0) = &$s69;
// line 475
panda$core$Bit $tmp70 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param1, &$s71);
bool $tmp72 = $tmp70.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 476
panda$core$String* $tmp73 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param1, &$s74, &$s75);
panda$core$String* $tmp76 = panda$core$String$get_trimmed$R$panda$core$String($tmp73);
panda$core$String* $tmp77 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
*(&local0) = $tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
goto block2;
block2:;
// line 478
panda$core$String* $tmp78 = *(&local0);
ITable* $tmp80 = ((panda$core$Equatable*) $tmp78)->$class->itable;
while ($tmp80->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[1];
panda$core$Bit $tmp83 = $tmp81(((panda$core$Equatable*) $tmp78), ((panda$core$Equatable*) &$s79));
panda$core$String* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing lang
*(&local0) = ((panda$core$String*) NULL);
return $tmp83;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 482
panda$core$String* $tmp85 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param1, &$s86, &$s87);
panda$core$String* $tmp88 = panda$core$String$get_trimmed$R$panda$core$String($tmp85);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp89 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local0) = $tmp88;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// line 483
panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param1, &$s91);
panda$core$String* $tmp92 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param2, $tmp90, &$s93);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp94 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local1) = $tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// line 484
panda$core$String* $tmp95 = *(&local0);
panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s97, $tmp95);
panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s99);
panda$core$String* $tmp100 = *(&local1);
panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, $tmp100);
panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s103);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$String* $tmp104 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing block
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp105 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing lang
*(&local0) = ((panda$core$String*) NULL);
return $tmp102;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

// line 488
panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s107, param1);
panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
return $tmp108;

}
void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp110 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp111 = *$tmp110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
return;

}

