#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "frost/core/Frost.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/json/Token.h"
#include "frost/core/Bit.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Key.h"
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$array$R$frost$json$JSON, frost$json$JSONParser$object$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn27)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn51)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn156)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -1690570746874506664, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(frost$json$JSONParser* param0, frost$core$String* param1) {

// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->source;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// line 27
org$frostlang$json$Lexer** $tmp5 = &param0->lexer;
org$frostlang$json$Lexer* $tmp6 = *$tmp5;
org$frostlang$json$Lexer$start$frost$core$String($tmp6, param1);
// line 28
frost$json$JSON* $tmp7 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return $tmp7;

}
org$frostlang$json$Token frost$json$JSONParser$next$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token$nullable local0;
org$frostlang$json$Token local1;
// line 33
org$frostlang$json$Token$nullable* $tmp8 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp9 = *$tmp8;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 34
org$frostlang$json$Token$nullable* $tmp12 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 35
org$frostlang$json$Token$nullable* $tmp14 = &param0->pushbackToken;
*$tmp14 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
// line 36
org$frostlang$json$Token$nullable $tmp15 = *(&local0);
return ((org$frostlang$json$Token) $tmp15.value);
block2:;
// line 38
org$frostlang$json$Lexer** $tmp16 = &param0->lexer;
org$frostlang$json$Lexer* $tmp17 = *$tmp16;
org$frostlang$json$Token $tmp18 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp17);
*(&local1) = $tmp18;
// line 39
goto block3;
block3:;
org$frostlang$json$Token $tmp19 = *(&local1);
org$frostlang$json$Token$Kind $tmp20 = $tmp19.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp21->value = $tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {6};
org$frostlang$json$Token$Kind $tmp23 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp22);
org$frostlang$json$Token$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp24->value = $tmp23;
ITable* $tmp25 = ((frost$core$Equatable*) $tmp21)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Bit $tmp28 = $tmp26(((frost$core$Equatable*) $tmp21), ((frost$core$Equatable*) $tmp24));
bool $tmp29 = $tmp28.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp24)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
if ($tmp29) goto block4; else goto block5;
block4:;
// line 40
org$frostlang$json$Lexer** $tmp30 = &param0->lexer;
org$frostlang$json$Lexer* $tmp31 = *$tmp30;
org$frostlang$json$Token $tmp32 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp31);
*(&local1) = $tmp32;
goto block3;
block5:;
// line 42
org$frostlang$json$Token $tmp33 = *(&local1);
return $tmp33;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 47
org$frostlang$json$Token$nullable* $tmp34 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp35 = *$tmp34;
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(!$tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block1:;
// line 48
org$frostlang$json$Token$nullable* $tmp40 = &param0->pushbackToken;
*$tmp40 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// line 53
org$frostlang$json$Token $tmp41 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp41;
// line 54
org$frostlang$json$Token $tmp42 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp42);
// line 55
org$frostlang$json$Token $tmp43 = *(&local0);
return $tmp43;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// line 60
org$frostlang$json$Token $tmp44 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp44;
// line 61
org$frostlang$json$Token $tmp45 = *(&local0);
org$frostlang$json$Token$Kind $tmp46 = $tmp45.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp47->value = $tmp46;
org$frostlang$json$Token$Kind$wrapper* $tmp48;
$tmp48 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp48->value = param1;
ITable* $tmp49 = ((frost$core$Equatable*) $tmp47)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Bit $tmp52 = $tmp50(((frost$core$Equatable*) $tmp47), ((frost$core$Equatable*) $tmp48));
bool $tmp53 = $tmp52.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
if ($tmp53) goto block1; else goto block2;
block1:;
// line 62
org$frostlang$json$Token $tmp54 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp54, true });
block2:;
// line 64
org$frostlang$json$Token $tmp55 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp55);
// line 65
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 70
frost$core$String** $tmp56 = &param0->source;
frost$core$String* $tmp57 = *$tmp56;
frost$core$String$Index $tmp58 = param1.start;
frost$core$String$Index $tmp59 = param1.end;
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp61 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp58, $tmp59, $tmp60);
frost$core$String* $tmp62 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp57, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
return $tmp62;

}
frost$json$JSON* frost$json$JSONParser$array$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$Array* local0 = NULL;
// line 75
frost$core$Int64 $tmp63 = (frost$core$Int64) {13};
org$frostlang$json$Token$Kind $tmp64 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp63);
org$frostlang$json$Token$nullable $tmp65 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp64);
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block1; else goto block2;
block1:;
// line 76
frost$json$JSON* $tmp68 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp69 = (frost$core$Int64) {5};
frost$collections$Array* $tmp70 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp70, $tmp71);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp68, $tmp69, ((frost$collections$ListView*) $tmp70));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
return $tmp68;
block2:;
// line 78
frost$collections$Array* $tmp72 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp72);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// line 79
goto block3;
block3:;
// line 80
frost$collections$Array* $tmp74 = *(&local0);
frost$json$JSON* $tmp75 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// line 81
org$frostlang$json$Token $tmp76 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp77 = $tmp76.kind;
frost$core$Int64 $tmp78 = $tmp77.$rawValue;
frost$core$Int64 $tmp79 = (frost$core$Int64) {13};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp78, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block6; else goto block7;
block6:;
// line 83
frost$json$JSON* $tmp82 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp83 = (frost$core$Int64) {5};
frost$collections$Array* $tmp84 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp82, $tmp83, ((frost$collections$ListView*) $tmp84));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$collections$Array* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp82;
block7:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {14};
frost$core$Bit $tmp87 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp78, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block8; else goto block9;
block8:;
// line 86
goto block3;
block9:;
// line 89
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit(false);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s92, $tmp91, &$s93);
abort(); // unreachable
block10:;
goto block5;
block5:;
goto block3;
block4:;
goto block12;
block12:;

}
frost$json$JSON* frost$json$JSONParser$object$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$HashMap* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$json$Token local2;
// line 97
frost$core$Int64 $tmp94 = (frost$core$Int64) {11};
org$frostlang$json$Token$Kind $tmp95 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp94);
org$frostlang$json$Token$nullable $tmp96 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp95);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96.nonnull);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block1:;
// line 98
frost$json$JSON* $tmp99 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp100 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp101 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp101);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp99, $tmp100, ((frost$collections$MapView*) $tmp101));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return $tmp99;
block2:;
// line 100
frost$collections$HashMap* $tmp102 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp102);
*(&local0) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$HashMap* $tmp103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local0) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// line 101
goto block3;
block3:;
// line 102
frost$core$String* $tmp104 = frost$json$JSONParser$string$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$String* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local1) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// line 103
org$frostlang$json$Token $tmp106 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local2) = $tmp106;
// line 104
org$frostlang$json$Token $tmp107 = *(&local2);
org$frostlang$json$Token$Kind $tmp108 = $tmp107.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp109;
$tmp109 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp109->value = $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {15};
org$frostlang$json$Token$Kind $tmp111 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp110);
org$frostlang$json$Token$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp109)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp109), ((frost$core$Equatable*) $tmp112));
bool $tmp117 = $tmp116.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp109)));
if ($tmp117) goto block5; else goto block6;
block5:;
// line 105
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit(false);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 107
frost$collections$HashMap* $tmp123 = *(&local0);
frost$core$String* $tmp124 = *(&local1);
frost$json$JSON* $tmp125 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp123, ((frost$collections$Key*) $tmp124), ((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// line 108
org$frostlang$json$Token $tmp126 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp127 = $tmp126.kind;
frost$core$Int64 $tmp128 = $tmp127.$rawValue;
frost$core$Int64 $tmp129 = (frost$core$Int64) {11};
frost$core$Bit $tmp130 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp128, $tmp129);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block10; else goto block11;
block10:;
// line 110
frost$json$JSON* $tmp132 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp133 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp134 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp132, $tmp133, ((frost$collections$MapView*) $tmp134));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$String* $tmp135 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$collections$HashMap*) NULL);
return $tmp132;
block11:;
frost$core$Int64 $tmp137 = (frost$core$Int64) {14};
frost$core$Bit $tmp138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp128, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block12; else goto block13;
block12:;
// line 113
frost$core$String* $tmp140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block13:;
// line 116
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit(false);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable
block14:;
goto block9;
block9:;
frost$core$String* $tmp146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block4:;
goto block16;
block16:;

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 124
org$frostlang$json$Token $tmp147 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp147;
// line 125
org$frostlang$json$Token $tmp148 = *(&local0);
org$frostlang$json$Token$Kind $tmp149 = $tmp148.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp150;
$tmp150 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp150->value = $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {3};
org$frostlang$json$Token$Kind $tmp152 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp151);
org$frostlang$json$Token$Kind$wrapper* $tmp153;
$tmp153 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp153->value = $tmp152;
ITable* $tmp154 = ((frost$core$Equatable*) $tmp150)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[1];
frost$core$Bit $tmp157 = $tmp155(((frost$core$Equatable*) $tmp150), ((frost$core$Equatable*) $tmp153));
bool $tmp158 = $tmp157.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp153)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp150)));
if ($tmp158) goto block1; else goto block2;
block1:;
// line 126
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(false);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {126};
org$frostlang$json$Token $tmp162 = *(&local0);
frost$core$String* $tmp163 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp162);
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s165, $tmp163);
frost$core$String* $tmp166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp164, &$s167);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s168, $tmp161, $tmp166);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 128
org$frostlang$json$Token $tmp169 = *(&local0);
frost$core$String* $tmp170 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp169);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local1) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// line 129
frost$core$String* $tmp172 = *(&local1);
frost$core$String* $tmp173 = *(&local1);
frost$core$String* $tmp174 = *(&local1);
frost$core$String$Index $tmp175 = frost$core$String$get_start$R$frost$core$String$Index($tmp174);
frost$core$String$Index $tmp176 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp173, $tmp175);
frost$core$String* $tmp177 = *(&local1);
frost$core$String* $tmp178 = *(&local1);
frost$core$String$Index $tmp179 = frost$core$String$get_end$R$frost$core$String$Index($tmp178);
frost$core$String$Index $tmp180 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp177, $tmp179);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp182 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp176, $tmp180, $tmp181);
frost$core$String* $tmp183 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp172, $tmp182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$String* $tmp184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local1) = ((frost$core$String*) NULL);
return $tmp183;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 134
org$frostlang$json$Token $tmp185 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp185;
// line 135
org$frostlang$json$Token $tmp186 = *(&local0);
org$frostlang$json$Token$Kind $tmp187 = $tmp186.kind;
frost$core$Int64 $tmp188 = $tmp187.$rawValue;
frost$core$Int64 $tmp189 = (frost$core$Int64) {10};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block2; else goto block3;
block2:;
// line 137
frost$json$JSON* $tmp192 = frost$json$JSONParser$object$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
return $tmp192;
block3:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {12};
frost$core$Bit $tmp194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block4; else goto block5;
block4:;
// line 140
frost$json$JSON* $tmp196 = frost$json$JSONParser$array$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
return $tmp196;
block5:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {3};
frost$core$Bit $tmp198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block6; else goto block7;
block6:;
// line 143
org$frostlang$json$Token $tmp200 = *(&local0);
frost$core$String* $tmp201 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp200);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$String* $tmp202 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local1) = $tmp201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// line 144
frost$json$JSON* $tmp203 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp204 = (frost$core$Int64) {2};
frost$core$String* $tmp205 = *(&local1);
frost$core$String* $tmp206 = *(&local1);
frost$core$String* $tmp207 = *(&local1);
frost$core$String$Index $tmp208 = frost$core$String$get_start$R$frost$core$String$Index($tmp207);
frost$core$String$Index $tmp209 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp206, $tmp208);
frost$core$String* $tmp210 = *(&local1);
frost$core$String* $tmp211 = *(&local1);
frost$core$String$Index $tmp212 = frost$core$String$get_end$R$frost$core$String$Index($tmp211);
frost$core$String$Index $tmp213 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp210, $tmp212);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp215 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp209, $tmp213, $tmp214);
frost$core$String* $tmp216 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp205, $tmp215);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp203, $tmp204, $tmp216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$String* $tmp217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local1) = ((frost$core$String*) NULL);
return $tmp203;
block7:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {4};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block8; else goto block9;
block8:;
// line 147
frost$json$JSON* $tmp221 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp222 = (frost$core$Int64) {0};
org$frostlang$json$Token $tmp223 = *(&local0);
frost$core$String* $tmp224 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp223);
frost$core$Int64$nullable $tmp225 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp224);
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp221, $tmp222, ((frost$core$Int64) $tmp225.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
return $tmp221;
block9:;
frost$core$Int64 $tmp226 = (frost$core$Int64) {5};
frost$core$Bit $tmp227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block10; else goto block11;
block10:;
// line 150
frost$json$JSON* $tmp229 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp230 = (frost$core$Int64) {1};
org$frostlang$json$Token $tmp231 = *(&local0);
frost$core$String* $tmp232 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp231);
frost$core$Real64$nullable $tmp233 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp232);
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp229, $tmp230, ((frost$core$Real64) $tmp233.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
return $tmp229;
block11:;
frost$core$Int64 $tmp234 = (frost$core$Int64) {7};
frost$core$Bit $tmp235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block12; else goto block13;
block12:;
// line 153
frost$json$JSON* $tmp237 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp238 = (frost$core$Int64) {3};
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit(true);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp237, $tmp238, $tmp239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
return $tmp237;
block13:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {8};
frost$core$Bit $tmp241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block14; else goto block15;
block14:;
// line 156
frost$json$JSON* $tmp243 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp244 = (frost$core$Int64) {3};
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit(false);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp243, $tmp244, $tmp245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
return $tmp243;
block15:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {9};
frost$core$Bit $tmp247 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block16; else goto block17;
block16:;
// line 159
frost$json$JSON* $tmp249 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp250 = (frost$core$Int64) {6};
frost$json$JSON$init$frost$core$Int64($tmp249, $tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
return $tmp249;
block17:;
// line 162
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit(false);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {162};
org$frostlang$json$Token $tmp254 = *(&local0);
frost$core$String* $tmp255 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp254);
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s257, $tmp255);
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s259);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s260, $tmp253, $tmp258);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
abort(); // unreachable
block18:;
// line 163
goto block20;
block20:;
goto block20;
block21:;
goto block1;
block1:;
goto block22;
block22:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s261));
frost$core$String** $tmp262 = &param0->source;
frost$core$String* $tmp263 = *$tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$String** $tmp264 = &param0->source;
*$tmp264 = &$s265;
// line 15
org$frostlang$json$Lexer* $tmp266 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp266);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
org$frostlang$json$Lexer** $tmp267 = &param0->lexer;
org$frostlang$json$Lexer* $tmp268 = *$tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlang$json$Lexer** $tmp269 = &param0->lexer;
*$tmp269 = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// line 18
org$frostlang$json$Token$nullable* $tmp270 = &param0->pushbackToken;
*$tmp270 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp271 = &param0->source;
frost$core$String* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$json$Lexer** $tmp273 = &param0->lexer;
org$frostlang$json$Lexer* $tmp274 = *$tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return;

}

