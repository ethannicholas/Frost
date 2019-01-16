#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "frost/core/Frost.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/json/Token.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Equatable.h"
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

typedef frost$core$Bit (*$fn32)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn171)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -1690570746874506664, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 87, 4502093186952947057, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x61\x72\x72\x61\x79\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -8802579551542968200, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6f\x62\x6a\x65\x63\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, -7366941453243670680, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 73, 369177666292334637, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x6e\x6f\x64\x65\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -413495660300611285, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15.nonnull);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {36};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block3:;
return ((org$frostlang$json$Token) $tmp15.value);
block2:;
// line 38
org$frostlang$json$Lexer** $tmp21 = &param0->lexer;
org$frostlang$json$Lexer* $tmp22 = *$tmp21;
org$frostlang$json$Token $tmp23 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp22);
*(&local1) = $tmp23;
// line 39
goto block5;
block5:;
org$frostlang$json$Token $tmp24 = *(&local1);
org$frostlang$json$Token$Kind $tmp25 = $tmp24.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp26->value = $tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {6};
org$frostlang$json$Token$Kind $tmp28 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp27);
org$frostlang$json$Token$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp29->value = $tmp28;
ITable* $tmp30 = ((frost$core$Equatable*) $tmp26)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Bit $tmp33 = $tmp31(((frost$core$Equatable*) $tmp26), ((frost$core$Equatable*) $tmp29));
bool $tmp34 = $tmp33.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp29)));
// unreffing REF($38:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
// unreffing REF($34:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp34) goto block6; else goto block7;
block6:;
// line 40
org$frostlang$json$Lexer** $tmp35 = &param0->lexer;
org$frostlang$json$Lexer* $tmp36 = *$tmp35;
org$frostlang$json$Token $tmp37 = org$frostlang$json$Lexer$next$R$org$frostlang$json$Token($tmp36);
*(&local1) = $tmp37;
goto block5;
block7:;
// line 42
org$frostlang$json$Token $tmp38 = *(&local1);
return $tmp38;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 47
org$frostlang$json$Token$nullable* $tmp39 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp40 = *$tmp39;
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(!$tmp40.nonnull);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block1:;
// line 48
org$frostlang$json$Token$nullable* $tmp45 = &param0->pushbackToken;
*$tmp45 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// line 53
org$frostlang$json$Token $tmp46 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp46;
// line 54
org$frostlang$json$Token $tmp47 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp47);
// line 55
org$frostlang$json$Token $tmp48 = *(&local0);
return $tmp48;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// line 60
org$frostlang$json$Token $tmp49 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp49;
// line 61
org$frostlang$json$Token $tmp50 = *(&local0);
org$frostlang$json$Token$Kind $tmp51 = $tmp50.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp52->value = $tmp51;
org$frostlang$json$Token$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp53->value = param1;
ITable* $tmp54 = ((frost$core$Equatable*) $tmp52)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Bit $tmp57 = $tmp55(((frost$core$Equatable*) $tmp52), ((frost$core$Equatable*) $tmp53));
bool $tmp58 = $tmp57.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp53)));
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp58) goto block1; else goto block2;
block1:;
// line 62
org$frostlang$json$Token $tmp59 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp59, true });
block2:;
// line 64
org$frostlang$json$Token $tmp60 = *(&local0);
frost$json$JSONParser$pushback$org$frostlang$json$Token(param0, $tmp60);
// line 65
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// line 70
frost$core$String** $tmp61 = &param0->source;
frost$core$String* $tmp62 = *$tmp61;
frost$core$String$Index $tmp63 = param1.start;
frost$core$String$Index $tmp64 = param1.end;
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp66 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp63, $tmp64, $tmp65);
frost$core$String* $tmp67 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp62, $tmp66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($7:frost.core.String)
return $tmp67;

}
frost$json$JSON* frost$json$JSONParser$array$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$Array* local0 = NULL;
// line 75
frost$core$Int64 $tmp68 = (frost$core$Int64) {13};
org$frostlang$json$Token$Kind $tmp69 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp68);
org$frostlang$json$Token$nullable $tmp70 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp69);
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit($tmp70.nonnull);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 76
frost$json$JSON* $tmp73 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp74 = (frost$core$Int64) {5};
frost$collections$Array* $tmp75 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp76 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp75, $tmp76);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp73, $tmp74, ((frost$collections$ListView*) $tmp75));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($11:frost.collections.Array<frost.json.JSON>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($9:frost.json.JSON)
return $tmp73;
block2:;
// line 78
frost$collections$Array* $tmp77 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp77);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$Array* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($27:frost.collections.Array<frost.json.JSON>)
// line 79
goto block3;
block3:;
// line 80
frost$collections$Array* $tmp79 = *(&local0);
frost$json$JSON* $tmp80 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp79, ((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($45:frost.json.JSON)
// line 81
org$frostlang$json$Token $tmp81 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp82 = $tmp81.kind;
frost$core$Int64 $tmp83 = $tmp82.$rawValue;
frost$core$Int64 $tmp84 = (frost$core$Int64) {13};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp83, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block7;
block6:;
// line 83
frost$json$JSON* $tmp87 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp88 = (frost$core$Int64) {5};
frost$collections$Array* $tmp89 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp87, $tmp88, ((frost$collections$ListView*) $tmp89));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($60:frost.json.JSON)
frost$collections$Array* $tmp90 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp87;
block7:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {14};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp83, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block8; else goto block9;
block8:;
// line 86
goto block3;
block9:;
// line 89
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit(false);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s97, $tmp96, &$s98);
abort(); // unreachable
block10:;
goto block5;
block5:;
goto block3;
block4:;
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit(false);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block12:;
abort(); // unreachable

}
frost$json$JSON* frost$json$JSONParser$object$R$frost$json$JSON(frost$json$JSONParser* param0) {

frost$collections$HashMap* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$json$Token local2;
// line 97
frost$core$Int64 $tmp104 = (frost$core$Int64) {11};
org$frostlang$json$Token$Kind $tmp105 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp104);
org$frostlang$json$Token$nullable $tmp106 = frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(param0, $tmp105);
frost$core$Bit $tmp107 = frost$core$Bit$init$builtin_bit($tmp106.nonnull);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 98
frost$json$JSON* $tmp109 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp111 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp111);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp109, $tmp110, ((frost$collections$MapView*) $tmp111));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($11:frost.collections.HashMap<frost.core.String, frost.json.JSON>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($9:frost.json.JSON)
return $tmp109;
block2:;
// line 100
frost$collections$HashMap* $tmp112 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp112);
*(&local0) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$collections$HashMap* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local0) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($26:frost.collections.HashMap<frost.core.String, frost.json.JSON>)
// line 101
goto block3;
block3:;
// line 102
frost$core$String* $tmp114 = frost$json$JSONParser$string$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$String* $tmp115 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local1) = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($42:frost.core.String)
// line 103
org$frostlang$json$Token $tmp116 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local2) = $tmp116;
// line 104
org$frostlang$json$Token $tmp117 = *(&local2);
org$frostlang$json$Token$Kind $tmp118 = $tmp117.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp119;
$tmp119 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp119->value = $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {15};
org$frostlang$json$Token$Kind $tmp121 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp120);
org$frostlang$json$Token$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp122->value = $tmp121;
ITable* $tmp123 = ((frost$core$Equatable*) $tmp119)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[1];
frost$core$Bit $tmp126 = $tmp124(((frost$core$Equatable*) $tmp119), ((frost$core$Equatable*) $tmp122));
bool $tmp127 = $tmp126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp119)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp127) goto block5; else goto block6;
block5:;
// line 105
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit(false);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s131, $tmp130, &$s132);
abort(); // unreachable
block7:;
goto block6;
block6:;
// line 107
frost$collections$HashMap* $tmp133 = *(&local0);
frost$core$String* $tmp134 = *(&local1);
frost$json$JSON* $tmp135 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp133, ((frost$collections$Key*) $tmp134), ((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($87:frost.json.JSON)
// line 108
org$frostlang$json$Token $tmp136 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp137 = $tmp136.kind;
frost$core$Int64 $tmp138 = $tmp137.$rawValue;
frost$core$Int64 $tmp139 = (frost$core$Int64) {11};
frost$core$Bit $tmp140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block10; else goto block11;
block10:;
// line 110
frost$json$JSON* $tmp142 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp143 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp144 = *(&local0);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp142, $tmp143, ((frost$collections$MapView*) $tmp144));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($102:frost.json.JSON)
frost$core$String* $tmp145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing result
*(&local0) = ((frost$collections$HashMap*) NULL);
return $tmp142;
block11:;
frost$core$Int64 $tmp147 = (frost$core$Int64) {14};
frost$core$Bit $tmp148 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block12; else goto block13;
block12:;
// line 113
frost$core$String* $tmp150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block13:;
// line 116
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(false);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block14:;
goto block9;
block9:;
frost$core$String* $tmp156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing key
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block4:;
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block16:;
abort(); // unreachable

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 124
org$frostlang$json$Token $tmp162 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp162;
// line 125
org$frostlang$json$Token $tmp163 = *(&local0);
org$frostlang$json$Token$Kind $tmp164 = $tmp163.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp165;
$tmp165 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp165->value = $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {3};
org$frostlang$json$Token$Kind $tmp167 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp166);
org$frostlang$json$Token$Kind$wrapper* $tmp168;
$tmp168 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp168->value = $tmp167;
ITable* $tmp169 = ((frost$core$Equatable*) $tmp165)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[1];
frost$core$Bit $tmp172 = $tmp170(((frost$core$Equatable*) $tmp165), ((frost$core$Equatable*) $tmp168));
bool $tmp173 = $tmp172.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp168)));
// unreffing REF($10:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp165)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.json.Token.Kind>)
if ($tmp173) goto block1; else goto block2;
block1:;
// line 126
frost$core$Bit $tmp174 = frost$core$Bit$init$builtin_bit(false);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {126};
org$frostlang$json$Token $tmp177 = *(&local0);
frost$core$String* $tmp178 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp177);
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s180, $tmp178);
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, &$s182);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s183, $tmp176, $tmp181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($27:frost.core.String)
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 128
org$frostlang$json$Token $tmp184 = *(&local0);
frost$core$String* $tmp185 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp184);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local1) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($44:frost.core.String)
// line 129
frost$core$String* $tmp187 = *(&local1);
frost$core$String* $tmp188 = *(&local1);
frost$core$String* $tmp189 = *(&local1);
frost$core$String$Index $tmp190 = frost$core$String$get_start$R$frost$core$String$Index($tmp189);
frost$core$String$Index $tmp191 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp188, $tmp190);
frost$core$String* $tmp192 = *(&local1);
frost$core$String* $tmp193 = *(&local1);
frost$core$String$Index $tmp194 = frost$core$String$get_end$R$frost$core$String$Index($tmp193);
frost$core$String$Index $tmp195 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp192, $tmp194);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp197 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp191, $tmp195, $tmp196);
frost$core$String* $tmp198 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp187, $tmp197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($67:frost.core.String)
frost$core$String* $tmp199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing s
*(&local1) = ((frost$core$String*) NULL);
return $tmp198;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
// line 134
org$frostlang$json$Token $tmp200 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp200;
// line 135
org$frostlang$json$Token $tmp201 = *(&local0);
org$frostlang$json$Token$Kind $tmp202 = $tmp201.kind;
frost$core$Int64 $tmp203 = $tmp202.$rawValue;
frost$core$Int64 $tmp204 = (frost$core$Int64) {10};
frost$core$Bit $tmp205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block2; else goto block3;
block2:;
// line 137
frost$json$JSON* $tmp207 = frost$json$JSONParser$object$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($12:frost.json.JSON)
return $tmp207;
block3:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {12};
frost$core$Bit $tmp209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block4; else goto block5;
block4:;
// line 140
frost$json$JSON* $tmp211 = frost$json$JSONParser$array$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($24:frost.json.JSON)
return $tmp211;
block5:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {3};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block6; else goto block7;
block6:;
// line 143
org$frostlang$json$Token $tmp215 = *(&local0);
frost$core$String* $tmp216 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp215);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$String* $tmp217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local1) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($37:frost.core.String)
// line 144
frost$json$JSON* $tmp218 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp219 = (frost$core$Int64) {2};
frost$core$String* $tmp220 = *(&local1);
frost$core$String* $tmp221 = *(&local1);
frost$core$String* $tmp222 = *(&local1);
frost$core$String$Index $tmp223 = frost$core$String$get_start$R$frost$core$String$Index($tmp222);
frost$core$String$Index $tmp224 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp221, $tmp223);
frost$core$String* $tmp225 = *(&local1);
frost$core$String* $tmp226 = *(&local1);
frost$core$String$Index $tmp227 = frost$core$String$get_end$R$frost$core$String$Index($tmp226);
frost$core$String$Index $tmp228 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp225, $tmp227);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp230 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp224, $tmp228, $tmp229);
frost$core$String* $tmp231 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp220, $tmp230);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp218, $tmp219, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($49:frost.json.JSON)
frost$core$String* $tmp232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing s
*(&local1) = ((frost$core$String*) NULL);
return $tmp218;
block7:;
frost$core$Int64 $tmp233 = (frost$core$Int64) {4};
frost$core$Bit $tmp234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block8; else goto block9;
block8:;
// line 147
frost$json$JSON* $tmp236 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp237 = (frost$core$Int64) {0};
org$frostlang$json$Token $tmp238 = *(&local0);
frost$core$String* $tmp239 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp238);
frost$core$Int64$nullable $tmp240 = frost$core$String$convert$R$frost$core$Int64$Q($tmp239);
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit($tmp240.nonnull);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {147};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block10:;
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp236, $tmp237, ((frost$core$Int64) $tmp240.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($86:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($83:frost.json.JSON)
return $tmp236;
block9:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {5};
frost$core$Bit $tmp247 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block12; else goto block13;
block12:;
// line 150
frost$json$JSON* $tmp249 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp250 = (frost$core$Int64) {1};
org$frostlang$json$Token $tmp251 = *(&local0);
frost$core$String* $tmp252 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp251);
frost$core$Real64$nullable $tmp253 = frost$core$String$convert$R$frost$core$Real64$Q($tmp252);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253.nonnull);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp256 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s257, $tmp256, &$s258);
abort(); // unreachable
block14:;
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp249, $tmp250, ((frost$core$Real64) $tmp253.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($111:frost.json.JSON)
return $tmp249;
block13:;
frost$core$Int64 $tmp259 = (frost$core$Int64) {7};
frost$core$Bit $tmp260 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block16; else goto block17;
block16:;
// line 153
frost$json$JSON* $tmp262 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp263 = (frost$core$Int64) {3};
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit(true);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp262, $tmp263, $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($139:frost.json.JSON)
return $tmp262;
block17:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {8};
frost$core$Bit $tmp266 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block18; else goto block19;
block18:;
// line 156
frost$json$JSON* $tmp268 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp269 = (frost$core$Int64) {3};
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit(false);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp268, $tmp269, $tmp270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($154:frost.json.JSON)
return $tmp268;
block19:;
frost$core$Int64 $tmp271 = (frost$core$Int64) {9};
frost$core$Bit $tmp272 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp203, $tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block20; else goto block21;
block20:;
// line 159
frost$json$JSON* $tmp274 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp275 = (frost$core$Int64) {6};
frost$json$JSON$init$frost$core$Int64($tmp274, $tmp275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($169:frost.json.JSON)
return $tmp274;
block21:;
// line 162
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(false);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {162};
org$frostlang$json$Token $tmp279 = *(&local0);
frost$core$String* $tmp280 = frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(param0, $tmp279);
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s282, $tmp280);
frost$core$String* $tmp283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp281, &$s284);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s285, $tmp278, $tmp283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($186:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($184:frost.core.String)
abort(); // unreachable
block22:;
goto block1;
block1:;
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit(false);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp288 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s289, $tmp288, &$s290);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// line 12
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s291));
frost$core$String** $tmp292 = &param0->source;
frost$core$String* $tmp293 = *$tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$String** $tmp294 = &param0->source;
*$tmp294 = &$s295;
// line 15
org$frostlang$json$Lexer* $tmp296 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$json$Lexer** $tmp297 = &param0->lexer;
org$frostlang$json$Lexer* $tmp298 = *$tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
org$frostlang$json$Lexer** $tmp299 = &param0->lexer;
*$tmp299 = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($10:org.frostlang.json.Lexer)
// line 18
org$frostlang$json$Token$nullable* $tmp300 = &param0->pushbackToken;
*$tmp300 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp301 = &param0->source;
frost$core$String* $tmp302 = *$tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$json$Lexer** $tmp303 = &param0->lexer;
org$frostlang$json$Lexer* $tmp304 = *$tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
return;

}

