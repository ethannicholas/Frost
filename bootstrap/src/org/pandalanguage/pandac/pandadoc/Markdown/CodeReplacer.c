#include "org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/RegularExpression.h"
#include "panda/collections/Array.h"
#include "panda/core/Equatable.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class_type org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String} };

typedef panda$core$Object* (*$fn8)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn24)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn29)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn43)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn48)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$String* (*$fn54)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn59)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$core$String*);
typedef panda$core$Bit (*$fn87)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 55, 280434186264950556, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 446
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp9)));
panda$core$String* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
*(&local0) = ((panda$core$String*) $tmp9);
panda$core$Panda$unref$panda$core$Object$Q($tmp9);
// unreffing REF($4:panda.collections.ListView.T)
// line 451
panda$core$MutableString* $tmp11 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp12 = *(&local0);
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit($tmp12 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {451};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
panda$core$MutableString$init$panda$core$String($tmp11, $tmp12);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$MutableString* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local1) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($17:panda.core.MutableString)
// line 452
panda$core$MutableString* $tmp19 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString($tmp19);
// line 453
org$pandalanguage$pandac$pandadoc$Markdown** $tmp20 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp21 = *$tmp20;
panda$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[18];
$tmp23($tmp21, $tmp22);
// line 454
org$pandalanguage$pandac$pandadoc$Markdown** $tmp25 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp26 = *$tmp25;
panda$core$MutableString* $tmp27 = *(&local1);
$fn29 $tmp28 = ($fn29) $tmp26->$class->vtable[14];
$tmp28($tmp26, $tmp27);
// line 455
panda$core$MutableString* $tmp30 = *(&local1);
panda$core$RegularExpression* $tmp31 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp31, &$s32);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp30, $tmp31, &$s33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($55:panda.core.RegularExpression)
// line 456
panda$core$MutableString* $tmp34 = *(&local1);
panda$core$RegularExpression* $tmp35 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp35, &$s36);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp34, $tmp35, &$s37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($63:panda.core.RegularExpression)
// line 457
panda$core$MutableString* $tmp38 = *(&local1);
panda$core$String* $tmp39 = panda$core$MutableString$convert$R$panda$core$String($tmp38);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$String* $tmp40 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
*(&local2) = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($71:panda.core.String)
// line 458
*(&local3) = ((panda$core$String*) NULL);
// line 459
panda$core$String* $tmp41 = *(&local2);
$fn43 $tmp42 = ($fn43) param0->$class->vtable[3];
panda$core$String* $tmp44 = $tmp42(param0, $tmp41);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$String* $tmp45 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local4) = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($87:panda.core.String)
// line 460
panda$core$String* $tmp46 = *(&local4);
$fn48 $tmp47 = ($fn48) param0->$class->vtable[4];
panda$core$Bit $tmp49 = $tmp47(param0, $tmp46);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block3; else goto block5;
block3:;
// line 461
panda$core$String* $tmp51 = *(&local4);
panda$core$String* $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) param0->$class->vtable[5];
panda$core$String* $tmp55 = $tmp53(param0, $tmp51, $tmp52);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$String* $tmp56 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local3) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($108:panda.core.String)
goto block4;
block5:;
// line 1
// line 464
panda$core$String* $tmp57 = *(&local2);
$fn59 $tmp58 = ($fn59) param0->$class->vtable[6];
panda$core$String* $tmp60 = $tmp58(param0, $tmp57);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$String* $tmp61 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local3) = $tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($123:panda.core.String)
goto block4;
block4:;
// line 466
panda$core$String* $tmp62 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$String* $tmp63 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing firstLine
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp64 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing out
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp65 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp66 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing ed
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp67 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing codeBlock
*(&local0) = ((panda$core$String*) NULL);
return $tmp62;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$firstLine$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

// line 470
panda$collections$Array* $tmp68 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(param1, &$s69);
panda$core$Int64 $tmp70 = (panda$core$Int64) {0};
panda$core$Object* $tmp71 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp68, $tmp70);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp71)));
panda$core$Panda$unref$panda$core$Object$Q($tmp71);
// unreffing REF($4:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
return ((panda$core$String*) $tmp71);

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$isLanguageIdentifier$panda$core$String$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
// line 474
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s72));
panda$core$String* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local0) = &$s74;
// line 475
panda$core$Bit $tmp75 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param1, &$s76);
bool $tmp77 = $tmp75.value;
if ($tmp77) goto block1; else goto block2;
block1:;
// line 476
panda$core$String* $tmp78 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param1, &$s79, &$s80);
panda$core$String* $tmp81 = panda$core$String$get_trimmed$R$panda$core$String($tmp78);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$String* $tmp82 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
*(&local0) = $tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($13:panda.core.String)
goto block2;
block2:;
// line 478
panda$core$String* $tmp83 = *(&local0);
ITable* $tmp85 = ((panda$core$Equatable*) $tmp83)->$class->itable;
while ($tmp85->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[1];
panda$core$Bit $tmp88 = $tmp86(((panda$core$Equatable*) $tmp83), ((panda$core$Equatable*) &$s84));
panda$core$String* $tmp89 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing lang
*(&local0) = ((panda$core$String*) NULL);
return $tmp88;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$languageBlock$panda$core$String$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 482
panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param1, &$s91, &$s92);
panda$core$String* $tmp93 = panda$core$String$get_trimmed$R$panda$core$String($tmp90);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$String* $tmp94 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local0) = $tmp93;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:panda.core.String)
// line 483
panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param1, &$s96);
panda$core$String* $tmp97 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(param2, $tmp95, &$s98);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$core$String* $tmp99 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
*(&local1) = $tmp97;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($17:panda.core.String)
// line 484
panda$core$String* $tmp100 = *(&local0);
panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s102, $tmp100);
panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s104);
panda$core$String* $tmp105 = *(&local1);
panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, $tmp105);
panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s108);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($34:panda.core.String)
panda$core$String* $tmp109 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing block
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp110 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing lang
*(&local0) = ((panda$core$String*) NULL);
return $tmp107;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$genericCodeBlock$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0, panda$core$String* param1) {

// line 488
panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s112, param1);
panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($1:panda.core.String)
return $tmp113;

}
void org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* param0) {

// line 440
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp115 = &param0->markdown;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp116 = *$tmp115;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
return;

}

