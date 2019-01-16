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
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$array$R$frost$json$JSON, frost$json$JSONParser$object$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn27)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn51)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn166)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -1690570746874506664, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x61\x72\x72\x61\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -8802579551542968200, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6f\x62\x6a\x65\x63\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, -7366941453243670680, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6e\x6f\x64\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -413495660300611285, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
// unreffing REF($14:frost.json.JSON)
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
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
// unreffing REF($27:frost.core.Equatable<org.frostlang.json.Token.Kind>)
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
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.json.Token.Kind>)
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
// unreffing REF($7:frost.core.String)
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
// unreffing REF($11:frost.collections.Array<frost.json.JSON>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($9:frost.json.JSON)
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
// unreffing REF($27:frost.collections.Array<frost.json.JSON>)
// line 79
goto block3;
block3:;
// line 80
frost$collections$Array* $tmp74 = *(&local0);
frost$json$JSON* $tmp75 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($45:frost.json.JSON)
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
// unreffing REF($60:frost.json.JSON)
frost$collections$Array* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing result
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
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit(false);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block12:;
abort(); // unreachable

}
frost$json$JSON* frost$json$JSONParser$object$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$HashMap* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$json$Token local2;
// line 97
frost$core$Int64 $tmp99 = (frost$core$Int64) {11};
org$frostlang$json$Token$Kind $tmp100 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp99);
org$frostlang$json$Token$nullable $tmp101 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp100);
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101.nonnull);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block1:;
// line 98
frost$json$JSON* $tmp104 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp105 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp106 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp106);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp104, $tmp105, ((frost$collections$MapView*) $tmp106));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($11:frost.collections.HashMap<frost.core.String, frost.json.JSON>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($9:frost.json.JSON)
return $tmp104;
block2:;
// line 100
frost$collections$HashMap* $tmp107 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp107);
*(&local0) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$collections$HashMap* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing REF($26:frost.collections.HashMap<frost.core.String, frost.json.JSON>)
// line 101
goto block3;
block3:;
// line 102
frost$core$String* $tmp109 = frost$json$JSONParser$string$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$String* $tmp110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local1) = $tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($42:frost.core.String)
// line 103
org$frostlang$json$Token $tmp111 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local2) = $tmp111;
// line 104
org$frostlang$json$Token $tmp112 = *(&local2);
org$frostlang$json$Token$Kind $tmp113 = $tmp112.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp114->value = $tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {15};
org$frostlang$json$Token$Kind $tmp116 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp115);
org$frostlang$json$Token$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((frost$core$Equatable*) $tmp114)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Bit $tmp121 = $tmp119(((frost$core$Equatable*) $tmp114), ((frost$core$Equatable*) $tmp117));
bool $tmp122 = $tmp121.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp122) goto block5; else goto block6;
block5:;
// line 105
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit(false);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 107
frost$collections$HashMap* $tmp128 = *(&local0);
frost$core$String* $tmp129 = *(&local1);
frost$json$JSON* $tmp130 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp128, ((frost$collections$Key*) $tmp129), ((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($87:frost.json.JSON)
// line 108
org$frostlang$json$Token $tmp131 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp132 = $tmp131.kind;
frost$core$Int64 $tmp133 = $tmp132.$rawValue;
frost$core$Int64 $tmp134 = (frost$core$Int64) {11};
frost$core$Bit $tmp135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block10; else goto block11;
block10:;
// line 110
frost$json$JSON* $tmp137 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp139 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp137, $tmp138, ((frost$collections$MapView*) $tmp139));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($102:frost.json.JSON)
frost$core$String* $tmp140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing result
*(&local0) = ((frost$collections$HashMap*) NULL);
return $tmp137;
block11:;
frost$core$Int64 $tmp142 = (frost$core$Int64) {14};
frost$core$Bit $tmp143 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp133, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block12; else goto block13;
block12:;
// line 113
frost$core$String* $tmp145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block13:;
// line 116
frost$core$Bit $tmp146 = frost$core$Bit$init$builtin_bit(false);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block14:;
goto block9;
block9:;
frost$core$String* $tmp151 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block4:;
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp154 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s155, $tmp154, &$s156);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 124
org$frostlang$json$Token $tmp157 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp157;
// line 125
org$frostlang$json$Token $tmp158 = *(&local0);
org$frostlang$json$Token$Kind $tmp159 = $tmp158.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp160;
$tmp160 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp160->value = $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {3};
org$frostlang$json$Token$Kind $tmp162 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp161);
org$frostlang$json$Token$Kind$wrapper* $tmp163;
$tmp163 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp163->value = $tmp162;
ITable* $tmp164 = ((frost$core$Equatable*) $tmp160)->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[1];
frost$core$Bit $tmp167 = $tmp165(((frost$core$Equatable*) $tmp160), ((frost$core$Equatable*) $tmp163));
bool $tmp168 = $tmp167.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp163)));
// unreffing REF($10:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp160)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp168) goto block1; else goto block2;
block1:;
// line 126
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(false);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {126};
org$frostlang$json$Token $tmp172 = *(&local0);
frost$core$String* $tmp173 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp172);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s175, $tmp173);
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp174, &$s177);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s178, $tmp171, $tmp176);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($27:frost.core.String)
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 128
org$frostlang$json$Token $tmp179 = *(&local0);
frost$core$String* $tmp180 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp179);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$String* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local1) = $tmp180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($44:frost.core.String)
// line 129
frost$core$String* $tmp182 = *(&local1);
frost$core$String* $tmp183 = *(&local1);
frost$core$String* $tmp184 = *(&local1);
frost$core$String$Index $tmp185 = frost$core$String$get_start$R$frost$core$String$Index($tmp184);
frost$core$String$Index $tmp186 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp183, $tmp185);
frost$core$String* $tmp187 = *(&local1);
frost$core$String* $tmp188 = *(&local1);
frost$core$String$Index $tmp189 = frost$core$String$get_end$R$frost$core$String$Index($tmp188);
frost$core$String$Index $tmp190 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp187, $tmp189);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp192 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp186, $tmp190, $tmp191);
frost$core$String* $tmp193 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp182, $tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($67:frost.core.String)
frost$core$String* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing s
*(&local1) = ((frost$core$String*) NULL);
return $tmp193;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 134
org$frostlang$json$Token $tmp195 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp195;
// line 135
org$frostlang$json$Token $tmp196 = *(&local0);
org$frostlang$json$Token$Kind $tmp197 = $tmp196.kind;
frost$core$Int64 $tmp198 = $tmp197.$rawValue;
frost$core$Int64 $tmp199 = (frost$core$Int64) {10};
frost$core$Bit $tmp200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block2; else goto block3;
block2:;
// line 137
frost$json$JSON* $tmp202 = frost$json$JSONParser$object$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($12:frost.json.JSON)
return $tmp202;
block3:;
frost$core$Int64 $tmp203 = (frost$core$Int64) {12};
frost$core$Bit $tmp204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block4; else goto block5;
block4:;
// line 140
frost$json$JSON* $tmp206 = frost$json$JSONParser$array$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($24:frost.json.JSON)
return $tmp206;
block5:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {3};
frost$core$Bit $tmp208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block6; else goto block7;
block6:;
// line 143
org$frostlang$json$Token $tmp210 = *(&local0);
frost$core$String* $tmp211 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp210);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$String* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($37:frost.core.String)
// line 144
frost$json$JSON* $tmp213 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp214 = (frost$core$Int64) {2};
frost$core$String* $tmp215 = *(&local1);
frost$core$String* $tmp216 = *(&local1);
frost$core$String* $tmp217 = *(&local1);
frost$core$String$Index $tmp218 = frost$core$String$get_start$R$frost$core$String$Index($tmp217);
frost$core$String$Index $tmp219 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp216, $tmp218);
frost$core$String* $tmp220 = *(&local1);
frost$core$String* $tmp221 = *(&local1);
frost$core$String$Index $tmp222 = frost$core$String$get_end$R$frost$core$String$Index($tmp221);
frost$core$String$Index $tmp223 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp220, $tmp222);
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp225 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp219, $tmp223, $tmp224);
frost$core$String* $tmp226 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp215, $tmp225);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp213, $tmp214, $tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($49:frost.json.JSON)
frost$core$String* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing s
*(&local1) = ((frost$core$String*) NULL);
return $tmp213;
block7:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {4};
frost$core$Bit $tmp229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block8; else goto block9;
block8:;
// line 147
frost$json$JSON* $tmp231 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp232 = (frost$core$Int64) {0};
org$frostlang$json$Token $tmp233 = *(&local0);
frost$core$String* $tmp234 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp233);
frost$core$Int64$nullable $tmp235 = frost$core$String$convert$R$frost$core$Int64$Q($tmp234);
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp231, $tmp232, ((frost$core$Int64) $tmp235.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($83:frost.json.JSON)
return $tmp231;
block9:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {5};
frost$core$Bit $tmp237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block10; else goto block11;
block10:;
// line 150
frost$json$JSON* $tmp239 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp240 = (frost$core$Int64) {1};
org$frostlang$json$Token $tmp241 = *(&local0);
frost$core$String* $tmp242 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp241);
frost$core$Real64$nullable $tmp243 = frost$core$String$convert$R$frost$core$Real64$Q($tmp242);
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp239, $tmp240, ((frost$core$Real64) $tmp243.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($107:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($104:frost.json.JSON)
return $tmp239;
block11:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {7};
frost$core$Bit $tmp245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block12; else goto block13;
block12:;
// line 153
frost$json$JSON* $tmp247 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {3};
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit(true);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp247, $tmp248, $tmp249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($125:frost.json.JSON)
return $tmp247;
block13:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {8};
frost$core$Bit $tmp251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block14; else goto block15;
block14:;
// line 156
frost$json$JSON* $tmp253 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp254 = (frost$core$Int64) {3};
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit(false);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp253, $tmp254, $tmp255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($140:frost.json.JSON)
return $tmp253;
block15:;
frost$core$Int64 $tmp256 = (frost$core$Int64) {9};
frost$core$Bit $tmp257 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block16; else goto block17;
block16:;
// line 159
frost$json$JSON* $tmp259 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp260 = (frost$core$Int64) {6};
frost$json$JSON$init$frost$core$Int64($tmp259, $tmp260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($155:frost.json.JSON)
return $tmp259;
block17:;
// line 162
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit(false);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp263 = (frost$core$Int64) {162};
org$frostlang$json$Token $tmp264 = *(&local0);
frost$core$String* $tmp265 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp264);
frost$core$String* $tmp266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s267, $tmp265);
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp266, &$s269);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s270, $tmp263, $tmp268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($171:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($170:frost.core.String)
abort(); // unreachable
block18:;
goto block1;
block1:;
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit(false);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block20:;
abort(); // unreachable

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s276));
frost$core$String** $tmp277 = &param0->source;
frost$core$String* $tmp278 = *$tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$String** $tmp279 = &param0->source;
*$tmp279 = &$s280;
// line 15
org$frostlang$json$Lexer* $tmp281 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$json$Lexer** $tmp282 = &param0->lexer;
org$frostlang$json$Lexer* $tmp283 = *$tmp282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$json$Lexer** $tmp284 = &param0->lexer;
*$tmp284 = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($10:org.frostlang.json.Lexer)
// line 18
org$frostlang$json$Token$nullable* $tmp285 = &param0->pushbackToken;
*$tmp285 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp286 = &param0->source;
frost$core$String* $tmp287 = *$tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
org$frostlang$json$Lexer** $tmp288 = &param0->lexer;
org$frostlang$json$Lexer* $tmp289 = *$tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
return;

}

