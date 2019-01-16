#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String} };

typedef frost$core$Object* (*$fn8)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn19)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn38)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn43)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn49)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn54)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn82)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 51, 7387824905544214784, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

// line 446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$frostdoc$Markdown** $tmp2 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$frostdoc$Markdown** $tmp4 = &param0->markdown;
*$tmp4 = param1;
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 450
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Object* $tmp9 = $tmp7(param1, $tmp5);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp9)));
frost$core$String* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = ((frost$core$String*) $tmp9);
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
// unreffing REF($4:frost.collections.ListView.T)
// line 451
frost$core$MutableString* $tmp11 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp12 = *(&local0);
frost$core$MutableString$init$frost$core$String($tmp11, $tmp12);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$MutableString* $tmp13 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local1) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($17:frost.core.MutableString)
// line 452
frost$core$MutableString* $tmp14 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp14);
// line 453
org$frostlang$frostc$frostdoc$Markdown** $tmp15 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp16 = *$tmp15;
frost$core$MutableString* $tmp17 = *(&local1);
$fn19 $tmp18 = ($fn19) $tmp16->$class->vtable[18];
$tmp18($tmp16, $tmp17);
// line 454
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[14];
$tmp23($tmp21, $tmp22);
// line 455
frost$core$MutableString* $tmp25 = *(&local1);
frost$core$RegularExpression* $tmp26 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp26, &$s27);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp25, $tmp26, &$s28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($48:frost.core.RegularExpression)
// line 456
frost$core$MutableString* $tmp29 = *(&local1);
frost$core$RegularExpression* $tmp30 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp30, &$s31);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp29, $tmp30, &$s32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($56:frost.core.RegularExpression)
// line 457
frost$core$MutableString* $tmp33 = *(&local1);
frost$core$String* $tmp34 = frost$core$MutableString$convert$R$frost$core$String($tmp33);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp35 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local2) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($64:frost.core.String)
// line 458
*(&local3) = ((frost$core$String*) NULL);
// line 459
frost$core$String* $tmp36 = *(&local2);
$fn38 $tmp37 = ($fn38) param0->$class->vtable[3];
frost$core$String* $tmp39 = $tmp37(param0, $tmp36);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp40 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local4) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($80:frost.core.String)
// line 460
frost$core$String* $tmp41 = *(&local4);
$fn43 $tmp42 = ($fn43) param0->$class->vtable[4];
frost$core$Bit $tmp44 = $tmp42(param0, $tmp41);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block1; else goto block3;
block1:;
// line 461
frost$core$String* $tmp46 = *(&local4);
frost$core$String* $tmp47 = *(&local2);
$fn49 $tmp48 = ($fn49) param0->$class->vtable[5];
frost$core$String* $tmp50 = $tmp48(param0, $tmp46, $tmp47);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$String* $tmp51 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local3) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($101:frost.core.String)
goto block2;
block3:;
// line 1
// line 464
frost$core$String* $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) param0->$class->vtable[6];
frost$core$String* $tmp55 = $tmp53(param0, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$String* $tmp56 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local3) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($116:frost.core.String)
goto block2;
block2:;
// line 466
frost$core$String* $tmp57 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp58 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing firstLine
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp59 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing out
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp60 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing ed
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing codeBlock
*(&local0) = ((frost$core$String*) NULL);
return $tmp57;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 470
frost$collections$Array* $tmp63 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s64);
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
frost$core$Object* $tmp66 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp63, $tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp66)));
frost$core$Frost$unref$frost$core$Object$Q($tmp66);
// unreffing REF($4:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
return ((frost$core$String*) $tmp66);

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// line 474
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s67));
frost$core$String* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = &$s69;
// line 475
frost$core$Bit $tmp70 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s71);
bool $tmp72 = $tmp70.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 476
frost$core$String* $tmp73 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s74, &$s75);
frost$core$String* $tmp76 = frost$core$String$get_trimmed$R$frost$core$String($tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$String* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($13:frost.core.String)
goto block2;
block2:;
// line 478
frost$core$String* $tmp78 = *(&local0);
ITable* $tmp80 = ((frost$core$Equatable*) $tmp78)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[1];
frost$core$Bit $tmp83 = $tmp81(((frost$core$Equatable*) $tmp78), ((frost$core$Equatable*) &$s79));
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp83;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 482
frost$core$String* $tmp85 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s86, &$s87);
frost$core$String* $tmp88 = frost$core$String$get_trimmed$R$frost$core$String($tmp85);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$String* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($1:frost.core.String)
// line 483
frost$core$String* $tmp90 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s91);
frost$core$String* $tmp92 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param2, $tmp90, &$s93);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp94 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local1) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($17:frost.core.String)
// line 484
frost$core$String* $tmp95 = *(&local0);
frost$core$String* $tmp96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s97, $tmp95);
frost$core$String* $tmp98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp96, &$s99);
frost$core$String* $tmp100 = *(&local1);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp98, $tmp100);
frost$core$String* $tmp102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($34:frost.core.String)
frost$core$String* $tmp104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing block
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp102;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 488
frost$core$String* $tmp106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s107, param1);
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp106, &$s109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($1:frost.core.String)
return $tmp108;

}
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0) {

// line 440
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp110 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp111 = *$tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
return;

}

