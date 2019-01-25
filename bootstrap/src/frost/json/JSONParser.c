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
typedef frost$core$Bit (*$fn113)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn150)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -1690570746874506664, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(frost$json$JSONParser* param0, frost$core$String* param1) {

// line 28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->source;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// line 29
org$frostlang$json$Lexer** $tmp5 = &param0->lexer;
org$frostlang$json$Lexer* $tmp6 = *$tmp5;
org$frostlang$json$Lexer$start$frost$core$String($tmp6, param1);
// line 30
frost$json$JSON* $tmp7 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return $tmp7;

}
org$frostlang$json$Token frost$json$JSONParser$next$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token$nullable local0;
org$frostlang$json$Token local1;
// line 35
org$frostlang$json$Token$nullable* $tmp8 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp9 = *$tmp8;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 36
org$frostlang$json$Token$nullable* $tmp12 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 37
org$frostlang$json$Token$nullable* $tmp14 = &param0->pushbackToken;
*$tmp14 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
// line 38
org$frostlang$json$Token$nullable $tmp15 = *(&local0);
return ((org$frostlang$json$Token) $tmp15.value);
block2:;
// line 40
org$frostlang$json$Lexer** $tmp16 = &param0->lexer;
org$frostlang$json$Lexer* $tmp17 = *$tmp16;
org$frostlang$json$Token $tmp18 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp17);
*(&local1) = $tmp18;
// line 41
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
// line 42
org$frostlang$json$Lexer** $tmp30 = &param0->lexer;
org$frostlang$json$Lexer* $tmp31 = *$tmp30;
org$frostlang$json$Token $tmp32 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp31);
*(&local1) = $tmp32;
goto block3;
block5:;
// line 44
org$frostlang$json$Token $tmp33 = *(&local1);
return $tmp33;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 49
org$frostlang$json$Token$nullable* $tmp34 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp35 = *$tmp34;
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(!$tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block1:;
// line 50
org$frostlang$json$Token$nullable* $tmp40 = &param0->pushbackToken;
*$tmp40 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// line 55
org$frostlang$json$Token $tmp41 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp41;
// line 56
org$frostlang$json$Token $tmp42 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp42);
// line 57
org$frostlang$json$Token $tmp43 = *(&local0);
return $tmp43;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// line 62
org$frostlang$json$Token $tmp44 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp44;
// line 63
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
// line 64
org$frostlang$json$Token $tmp54 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp54, true });
block2:;
// line 66
org$frostlang$json$Token $tmp55 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp55);
// line 67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 72
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
// line 77
frost$core$Int64 $tmp63 = (frost$core$Int64) {13};
org$frostlang$json$Token$Kind $tmp64 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp63);
org$frostlang$json$Token$nullable $tmp65 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp64);
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block1; else goto block2;
block1:;
// line 78
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
// line 80
frost$collections$Array* $tmp72 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp72);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// line 81
goto block3;
block3:;
// line 82
frost$collections$Array* $tmp74 = *(&local0);
frost$json$JSON* $tmp75 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// line 83
org$frostlang$json$Token $tmp76 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp77 = $tmp76.kind;
frost$core$Int64 $tmp78 = $tmp77.$rawValue;
frost$core$Int64 $tmp79 = (frost$core$Int64) {13};
frost$core$Bit $tmp80 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp78, $tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block6; else goto block7;
block6:;
// line 85
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
// line 88
goto block3;
block9:;
// line 91
frost$core$Int64 $tmp89 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block5:;
goto block3;
block4:;
goto block10;
block10:;

}
frost$json$JSON* frost$json$JSONParser$object$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$HashMap* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$json$Token local2;
// line 99
frost$core$Int64 $tmp92 = (frost$core$Int64) {11};
org$frostlang$json$Token$Kind $tmp93 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp92);
org$frostlang$json$Token$nullable $tmp94 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp93);
frost$core$Bit $tmp95 = frost$core$Bit$init$builtin_bit($tmp94.nonnull);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block1:;
// line 100
frost$json$JSON* $tmp97 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp98 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp99 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp99);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp97, $tmp98, ((frost$collections$MapView*) $tmp99));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
return $tmp97;
block2:;
// line 102
frost$collections$HashMap* $tmp100 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp100);
*(&local0) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$HashMap* $tmp101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local0) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// line 103
goto block3;
block3:;
// line 104
frost$core$String* $tmp102 = frost$json$JSONParser$string$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$String* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local1) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// line 105
org$frostlang$json$Token $tmp104 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local2) = $tmp104;
// line 106
org$frostlang$json$Token $tmp105 = *(&local2);
org$frostlang$json$Token$Kind $tmp106 = $tmp105.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {15};
org$frostlang$json$Token$Kind $tmp109 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp108);
org$frostlang$json$Token$Kind$wrapper* $tmp110;
$tmp110 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp110->value = $tmp109;
ITable* $tmp111 = ((frost$core$Equatable*) $tmp107)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
frost$core$Bit $tmp114 = $tmp112(((frost$core$Equatable*) $tmp107), ((frost$core$Equatable*) $tmp110));
bool $tmp115 = $tmp114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
if ($tmp115) goto block5; else goto block6;
block5:;
// line 107
frost$core$Int64 $tmp116 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block6:;
// line 109
frost$collections$HashMap* $tmp119 = *(&local0);
frost$core$String* $tmp120 = *(&local1);
frost$json$JSON* $tmp121 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp119, ((frost$collections$Key*) $tmp120), ((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// line 110
org$frostlang$json$Token $tmp122 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp123 = $tmp122.kind;
frost$core$Int64 $tmp124 = $tmp123.$rawValue;
frost$core$Int64 $tmp125 = (frost$core$Int64) {11};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp124, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block8; else goto block9;
block8:;
// line 112
frost$json$JSON* $tmp128 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp129 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp130 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp128, $tmp129, ((frost$collections$MapView*) $tmp130));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$String* $tmp131 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$collections$HashMap*) NULL);
return $tmp128;
block9:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {14};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp124, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block10; else goto block11;
block10:;
// line 115
frost$core$String* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block11:;
// line 118
frost$core$Int64 $tmp137 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s138, $tmp137, &$s139);
abort(); // unreachable
block7:;
frost$core$String* $tmp140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block4:;
goto block12;
block12:;

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 126
org$frostlang$json$Token $tmp141 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp141;
// line 127
org$frostlang$json$Token $tmp142 = *(&local0);
org$frostlang$json$Token$Kind $tmp143 = $tmp142.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp144;
$tmp144 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp144->value = $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {3};
org$frostlang$json$Token$Kind $tmp146 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp145);
org$frostlang$json$Token$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp147->value = $tmp146;
ITable* $tmp148 = ((frost$core$Equatable*) $tmp144)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[1];
frost$core$Bit $tmp151 = $tmp149(((frost$core$Equatable*) $tmp144), ((frost$core$Equatable*) $tmp147));
bool $tmp152 = $tmp151.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp147)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp144)));
if ($tmp152) goto block1; else goto block2;
block1:;
// line 128
frost$core$Int64 $tmp153 = (frost$core$Int64) {128};
org$frostlang$json$Token $tmp154 = *(&local0);
frost$core$String* $tmp155 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp154);
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s157, $tmp155);
frost$core$String* $tmp158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp156, &$s159);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s160, $tmp153, $tmp158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
abort(); // unreachable
block2:;
// line 130
org$frostlang$json$Token $tmp161 = *(&local0);
frost$core$String* $tmp162 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp161);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$String* $tmp163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local1) = $tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// line 131
frost$core$String* $tmp164 = *(&local1);
frost$core$String* $tmp165 = *(&local1);
frost$core$String* $tmp166 = *(&local1);
frost$core$String$Index $tmp167 = frost$core$String$get_start$R$frost$core$String$Index($tmp166);
frost$core$String$Index $tmp168 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp165, $tmp167);
frost$core$String* $tmp169 = *(&local1);
frost$core$String* $tmp170 = *(&local1);
frost$core$String$Index $tmp171 = frost$core$String$get_end$R$frost$core$String$Index($tmp170);
frost$core$String$Index $tmp172 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp169, $tmp171);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp174 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp168, $tmp172, $tmp173);
frost$core$String* $tmp175 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp164, $tmp174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local1) = ((frost$core$String*) NULL);
return $tmp175;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 136
org$frostlang$json$Token $tmp177 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp177;
// line 137
org$frostlang$json$Token $tmp178 = *(&local0);
org$frostlang$json$Token$Kind $tmp179 = $tmp178.kind;
frost$core$Int64 $tmp180 = $tmp179.$rawValue;
frost$core$Int64 $tmp181 = (frost$core$Int64) {10};
frost$core$Bit $tmp182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block2; else goto block3;
block2:;
// line 139
frost$json$JSON* $tmp184 = frost$json$JSONParser$object$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
return $tmp184;
block3:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {12};
frost$core$Bit $tmp186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block4; else goto block5;
block4:;
// line 142
frost$json$JSON* $tmp188 = frost$json$JSONParser$array$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
return $tmp188;
block5:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {3};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block6; else goto block7;
block6:;
// line 145
org$frostlang$json$Token $tmp192 = *(&local0);
frost$core$String* $tmp193 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp192);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$String* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local1) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// line 146
frost$json$JSON* $tmp195 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp196 = (frost$core$Int64) {2};
frost$core$String* $tmp197 = *(&local1);
frost$core$String* $tmp198 = *(&local1);
frost$core$String* $tmp199 = *(&local1);
frost$core$String$Index $tmp200 = frost$core$String$get_start$R$frost$core$String$Index($tmp199);
frost$core$String$Index $tmp201 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp198, $tmp200);
frost$core$String* $tmp202 = *(&local1);
frost$core$String* $tmp203 = *(&local1);
frost$core$String$Index $tmp204 = frost$core$String$get_end$R$frost$core$String$Index($tmp203);
frost$core$String$Index $tmp205 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp202, $tmp204);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp207 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp201, $tmp205, $tmp206);
frost$core$String* $tmp208 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp197, $tmp207);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp195, $tmp196, $tmp208);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$String* $tmp209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local1) = ((frost$core$String*) NULL);
return $tmp195;
block7:;
frost$core$Int64 $tmp210 = (frost$core$Int64) {4};
frost$core$Bit $tmp211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block8; else goto block9;
block8:;
// line 149
frost$json$JSON* $tmp213 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp214 = (frost$core$Int64) {0};
org$frostlang$json$Token $tmp215 = *(&local0);
frost$core$String* $tmp216 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp215);
frost$core$Int64$nullable $tmp217 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp216);
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp213, $tmp214, ((frost$core$Int64) $tmp217.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
return $tmp213;
block9:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {5};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block10; else goto block11;
block10:;
// line 152
frost$json$JSON* $tmp221 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
org$frostlang$json$Token $tmp223 = *(&local0);
frost$core$String* $tmp224 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp223);
frost$core$Real64$nullable $tmp225 = frost$core$String$get_asReal64$R$frost$core$Real64$Q($tmp224);
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp221, $tmp222, ((frost$core$Real64) $tmp225.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
return $tmp221;
block11:;
frost$core$Int64 $tmp226 = (frost$core$Int64) {7};
frost$core$Bit $tmp227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block12; else goto block13;
block12:;
// line 155
frost$json$JSON* $tmp229 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp230 = (frost$core$Int64) {3};
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit(true);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp229, $tmp230, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
return $tmp229;
block13:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {8};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block14; else goto block15;
block14:;
// line 158
frost$json$JSON* $tmp235 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp236 = (frost$core$Int64) {3};
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit(false);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp235, $tmp236, $tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
return $tmp235;
block15:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {9};
frost$core$Bit $tmp239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block16; else goto block17;
block16:;
// line 161
frost$json$JSON* $tmp241 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp242 = (frost$core$Int64) {6};
frost$json$JSON$init$frost$core$Int64($tmp241, $tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
return $tmp241;
block17:;
// line 164
frost$core$Int64 $tmp243 = (frost$core$Int64) {164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s244, $tmp243);
abort(); // unreachable
block1:;
goto block18;
block18:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// line 14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s245));
frost$core$String** $tmp246 = &param0->source;
frost$core$String* $tmp247 = *$tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$String** $tmp248 = &param0->source;
*$tmp248 = &$s249;
// line 17
org$frostlang$json$Lexer* $tmp250 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$json$Lexer** $tmp251 = &param0->lexer;
org$frostlang$json$Lexer* $tmp252 = *$tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
org$frostlang$json$Lexer** $tmp253 = &param0->lexer;
*$tmp253 = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// line 20
org$frostlang$json$Token$nullable* $tmp254 = &param0->pushbackToken;
*$tmp254 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp255 = &param0->source;
frost$core$String* $tmp256 = *$tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlang$json$Lexer** $tmp257 = &param0->lexer;
org$frostlang$json$Lexer* $tmp258 = *$tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
return;

}

