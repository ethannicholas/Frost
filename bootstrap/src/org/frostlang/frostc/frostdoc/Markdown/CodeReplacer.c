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
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String} };

typedef frost$core$Object* (*$fn8)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn24)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn29)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn43)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn48)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn54)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn59)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn87)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 51, 7387824905544214784, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, 20202590065, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, 21849695577, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, -3164146103587924515, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e\x0a", 3, 1383407, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, 1208454835905724927, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 2890959742469165275, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, -6452859839276816629, NULL };

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
frost$core$String* $tmp39 = frost$core$MutableString$convert$R$frost$core$String($tmp38);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local2) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($71:frost.core.String)
// line 458
*(&local3) = ((frost$core$String*) NULL);
// line 459
frost$core$String* $tmp41 = *(&local2);
$fn43 $tmp42 = ($fn43) param0->$class->vtable[3];
frost$core$String* $tmp44 = $tmp42(param0, $tmp41);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$String* $tmp45 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local4) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($87:frost.core.String)
// line 460
frost$core$String* $tmp46 = *(&local4);
$fn48 $tmp47 = ($fn48) param0->$class->vtable[4];
frost$core$Bit $tmp49 = $tmp47(param0, $tmp46);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block3; else goto block5;
block3:;
// line 461
frost$core$String* $tmp51 = *(&local4);
frost$core$String* $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) param0->$class->vtable[5];
frost$core$String* $tmp55 = $tmp53(param0, $tmp51, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$String* $tmp56 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local3) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($108:frost.core.String)
goto block4;
block5:;
// line 1
// line 464
frost$core$String* $tmp57 = *(&local2);
$fn59 $tmp58 = ($fn59) param0->$class->vtable[6];
frost$core$String* $tmp60 = $tmp58(param0, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local3) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($123:frost.core.String)
goto block4;
block4:;
// line 466
frost$core$String* $tmp62 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing firstLine
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp64 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing out
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp65 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing ed
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing codeBlock
*(&local0) = ((frost$core$String*) NULL);
return $tmp62;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 470
frost$collections$Array* $tmp68 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s69);
frost$core$Int64 $tmp70 = (frost$core$Int64) {0};
frost$core$Object* $tmp71 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp68, $tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp71)));
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
// unreffing REF($4:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
return ((frost$core$String*) $tmp71);

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// line 474
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s72));
frost$core$String* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = &$s74;
// line 475
frost$core$Bit $tmp75 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s76);
bool $tmp77 = $tmp75.value;
if ($tmp77) goto block1; else goto block2;
block1:;
// line 476
frost$core$String* $tmp78 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s79, &$s80);
frost$core$String* $tmp81 = frost$core$String$get_trimmed$R$frost$core$String($tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($13:frost.core.String)
goto block2;
block2:;
// line 478
frost$core$String* $tmp83 = *(&local0);
ITable* $tmp85 = ((frost$core$Equatable*) $tmp83)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[1];
frost$core$Bit $tmp88 = $tmp86(((frost$core$Equatable*) $tmp83), ((frost$core$Equatable*) &$s84));
frost$core$String* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp88;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 482
frost$core$String* $tmp90 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s91, &$s92);
frost$core$String* $tmp93 = frost$core$String$get_trimmed$R$frost$core$String($tmp90);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:frost.core.String)
// line 483
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s96);
frost$core$String* $tmp97 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param2, $tmp95, &$s98);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$String* $tmp99 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local1) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($17:frost.core.String)
// line 484
frost$core$String* $tmp100 = *(&local0);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, $tmp100);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$String* $tmp105 = *(&local1);
frost$core$String* $tmp106 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, $tmp105);
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp106, &$s108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($34:frost.core.String)
frost$core$String* $tmp109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing block
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing lang
*(&local0) = ((frost$core$String*) NULL);
return $tmp107;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0, frost$core$String* param1) {

// line 488
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s112, param1);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp111, &$s114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($1:frost.core.String)
return $tmp113;

}
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0) {

// line 440
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$frostdoc$Markdown** $tmp115 = &param0->markdown;
org$frostlang$frostc$frostdoc$Markdown* $tmp116 = *$tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
return;

}

