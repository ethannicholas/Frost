#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/RegularExpression.h"
#include "frost/collections/Array.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String} };

typedef frost$core$Object* (*$fn8)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn29)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn50)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn56)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn61)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn89)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 51, 7387824905544214784, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

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
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {451};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
frost$core$MutableString$init$frost$core$String($tmp11, $tmp12);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$MutableString* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($17:frost.core.MutableString)
// line 452
frost$core$MutableString* $tmp19 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString($tmp19);
// line 453
org$frostlang$frostc$frostdoc$Markdown** $tmp20 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp21 = *$tmp20;
frost$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[18];
$tmp23($tmp21, $tmp22);
// line 454
org$frostlang$frostc$frostdoc$Markdown** $tmp25 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp26 = *$tmp25;
frost$core$MutableString* $tmp27 = *(&local1);
$fn29 $tmp28 = ($fn29) $tmp26->$class->vtable[14];
$tmp28($tmp26, $tmp27);
// line 455
frost$core$MutableString* $tmp30 = *(&local1);
frost$core$RegularExpression* $tmp31 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp31, &$s32);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp30, $tmp31, &$s33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($55:frost.core.RegularExpression)
// line 456
frost$core$MutableString* $tmp34 = *(&local1);
frost$core$RegularExpression* $tmp35 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp35, &$s36);
frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String($tmp34, $tmp35, &$s37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($63:frost.core.RegularExpression)
// line 457
frost$core$MutableString* $tmp38 = *(&local1);
$fn40 $tmp39 = ($fn40) ((frost$core$Object*) $tmp38)->$class->vtable[0];
frost$core$String* $tmp41 = $tmp39(((frost$core$Object*) $tmp38));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp42 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local2) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($73:frost.core.String)
// line 458
*(&local3) = ((frost$core$String*) NULL);
// line 459
frost$core$String* $tmp43 = *(&local2);
$fn45 $tmp44 = ($fn45) param0->$class->vtable[3];
frost$core$String* $tmp46 = $tmp44(param0, $tmp43);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$String* $tmp47 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local4) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($89:frost.core.String)
// line 460
frost$core$String* $tmp48 = *(&local4);
$fn50 $tmp49 = ($fn50) param0->$class->vtable[4];
frost$core$Bit $tmp51 = $tmp49(param0, $tmp48);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block3; else goto block5;
block3:;
// line 461
frost$core$String* $tmp53 = *(&local4);
frost$core$String* $tmp54 = *(&local2);
$fn56 $tmp55 = ($fn56) param0->$class->vtable[5];
frost$core$String* $tmp57 = $tmp55(param0, $tmp53, $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp58 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local3) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($110:frost.core.String)
goto block4;
block5:;
// line 1
// line 464
frost$core$String* $tmp59 = *(&local2);
$fn61 $tmp60 = ($fn61) param0->$class->vtable[6];
frost$core$String* $tmp62 = $tmp60(param0, $tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local3) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($125:frost.core.String)
goto block4;
block4:;
// line 466
frost$core$String* $tmp64 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing firstLine
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp66 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing out
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp67 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing ed
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing codeBlock
*(&local0) = ((frost$core$String*) NULL);
return $tmp64;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 470
frost$collections$Array* $tmp70 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s71);
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
frost$core$Object* $tmp73 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp70, $tmp72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp73)));
frost$core$Frost$unref$frost$core$Object$Q($tmp73);
// unreffing REF($4:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
return ((frost$core$String*) $tmp73);

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// line 474
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
frost$core$String* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = &$s76;
// line 475
frost$core$Bit $tmp77 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s78);
bool $tmp79 = $tmp77.value;
if ($tmp79) goto block1; else goto block2;
block1:;
// line 476
frost$core$String* $tmp80 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s81, &$s82);
frost$core$String* $tmp83 = frost$core$String$get_trimmed$R$frost$core$String($tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($13:frost.core.String)
goto block2;
block2:;
// line 478
frost$core$String* $tmp85 = *(&local0);
ITable* $tmp87 = ((frost$core$Equatable*) $tmp85)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[1];
frost$core$Bit $tmp90 = $tmp88(((frost$core$Equatable*) $tmp85), ((frost$core$Equatable*) &$s86));
frost$core$String* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp90;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 482
frost$core$String* $tmp92 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s93, &$s94);
frost$core$String* $tmp95 = frost$core$String$get_trimmed$R$frost$core$String($tmp92);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($1:frost.core.String)
// line 483
frost$core$String* $tmp97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s98);
frost$core$String* $tmp99 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param2, $tmp97, &$s100);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local1) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($17:frost.core.String)
// line 484
frost$core$String* $tmp102 = *(&local0);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s104, $tmp102);
frost$core$String* $tmp105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, &$s106);
frost$core$String* $tmp107 = *(&local1);
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp105, $tmp107);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($34:frost.core.String)
frost$core$String* $tmp111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing block
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp109;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 488
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s114, param1);
frost$core$String* $tmp115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp113, &$s116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($1:frost.core.String)
return $tmp115;

}
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0) {

// line 440
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp117 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp118 = *$tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
return;

}

