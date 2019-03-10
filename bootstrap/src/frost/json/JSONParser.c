#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "frost/core/Frost.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int.h"
#include "org/frostlang/json/Token.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Key.h"
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$list$R$frost$json$JSON, frost$json$JSONParser$map$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn105)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn191)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn222)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn276)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn321)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, 6711150264062823990, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6c\x69\x73\x74", 20, -1806137182227931949, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, 8276871105769291383, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6d\x61\x70", 19, -1945586642327999461, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(frost$json$JSONParser* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->source;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:29
org$frostlang$json$Lexer** $tmp5 = &param0->lexer;
org$frostlang$json$Lexer* $tmp6 = *$tmp5;
// begin inline call to method org.frostlang.json.Lexer.start(source:frost.core.String) from JSONParser.frost:29:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:20
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp7 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int $tmp8 = (frost$core$Int) {31u};
frost$core$Int*** $tmp9 = &$tmp6->transitions;
frost$core$Int** $tmp10 = *$tmp9;
frost$core$Int** $tmp11 = &$tmp6->accepts;
frost$core$Int* $tmp12 = *$tmp11;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT($tmp7, param1, $tmp8, $tmp10, $tmp12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$plex$runtime$DFA** $tmp13 = &$tmp6->dfa;
org$frostlang$plex$runtime$DFA* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$plex$runtime$DFA** $tmp15 = &$tmp6->dfa;
*$tmp15 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:30
frost$json$JSON* $tmp16 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
return $tmp16;

}
org$frostlang$json$Token frost$json$JSONParser$next$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token$nullable local0;
org$frostlang$plex$runtime$RawToken local1;
org$frostlang$json$Token$Kind local2;
org$frostlang$json$Token$Kind local3;
org$frostlang$json$Token local4;
org$frostlang$json$Token$Kind local5;
org$frostlang$json$Token$Kind local6;
org$frostlang$plex$runtime$RawToken local7;
org$frostlang$json$Token$Kind local8;
org$frostlang$json$Token$Kind local9;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:35
org$frostlang$json$Token$nullable* $tmp17 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18.nonnull};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:36
org$frostlang$json$Token$nullable* $tmp21 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp22 = *$tmp21;
*(&local0) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:37
org$frostlang$json$Token$nullable* $tmp23 = &param0->pushbackToken;
*$tmp23 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:38
org$frostlang$json$Token$nullable $tmp24 = *(&local0);
return ((org$frostlang$json$Token) $tmp24.value);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:40
org$frostlang$json$Lexer** $tmp25 = &param0->lexer;
org$frostlang$json$Lexer* $tmp26 = *$tmp25;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:40:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp27 = &$tmp26->dfa;
org$frostlang$plex$runtime$DFA* $tmp28 = *$tmp27;
org$frostlang$plex$runtime$RawToken $tmp29 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp28);
*(&local1) = $tmp29;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp30 = *(&local1);
frost$core$Int $tmp31 = $tmp30.kind;
frost$core$Int64 $tmp32 = frost$core$Int64$init$frost$core$Int($tmp31);
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp33 = &(&local3)->$rawValue;
*$tmp33 = $tmp32;
org$frostlang$json$Token$Kind $tmp34 = *(&local3);
*(&local2) = $tmp34;
org$frostlang$json$Token$Kind $tmp35 = *(&local2);
org$frostlang$plex$runtime$RawToken $tmp36 = *(&local1);
frost$core$String$Index $tmp37 = $tmp36.start;
org$frostlang$plex$runtime$RawToken $tmp38 = *(&local1);
frost$core$String$Index $tmp39 = $tmp38.end;
org$frostlang$plex$runtime$RawToken $tmp40 = *(&local1);
frost$core$Int $tmp41 = $tmp40.line;
org$frostlang$plex$runtime$RawToken $tmp42 = *(&local1);
frost$core$Int $tmp43 = $tmp42.column;
org$frostlang$json$Position $tmp44 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp41, $tmp43);
org$frostlang$json$Token $tmp45 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp35, $tmp37, $tmp39, $tmp44);
*(&local4) = $tmp45;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:41
goto block5;
block5:;
org$frostlang$json$Token $tmp46 = *(&local4);
org$frostlang$json$Token$Kind $tmp47 = $tmp46.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp48;
$tmp48 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp48->value = $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {6u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp50 = &(&local6)->$rawValue;
*$tmp50 = $tmp49;
org$frostlang$json$Token$Kind $tmp51 = *(&local6);
*(&local5) = $tmp51;
org$frostlang$json$Token$Kind $tmp52 = *(&local5);
org$frostlang$json$Token$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp53->value = $tmp52;
ITable* $tmp54 = ((frost$core$Equatable*) $tmp48)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Bit $tmp57 = $tmp55(((frost$core$Equatable*) $tmp48), ((frost$core$Equatable*) $tmp53));
bool $tmp58 = $tmp57.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
if ($tmp58) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:42
org$frostlang$json$Lexer** $tmp59 = &param0->lexer;
org$frostlang$json$Lexer* $tmp60 = *$tmp59;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:42:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp61 = &$tmp60->dfa;
org$frostlang$plex$runtime$DFA* $tmp62 = *$tmp61;
org$frostlang$plex$runtime$RawToken $tmp63 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp62);
*(&local7) = $tmp63;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp64 = *(&local7);
frost$core$Int $tmp65 = $tmp64.kind;
frost$core$Int64 $tmp66 = frost$core$Int64$init$frost$core$Int($tmp65);
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp67 = &(&local9)->$rawValue;
*$tmp67 = $tmp66;
org$frostlang$json$Token$Kind $tmp68 = *(&local9);
*(&local8) = $tmp68;
org$frostlang$json$Token$Kind $tmp69 = *(&local8);
org$frostlang$plex$runtime$RawToken $tmp70 = *(&local7);
frost$core$String$Index $tmp71 = $tmp70.start;
org$frostlang$plex$runtime$RawToken $tmp72 = *(&local7);
frost$core$String$Index $tmp73 = $tmp72.end;
org$frostlang$plex$runtime$RawToken $tmp74 = *(&local7);
frost$core$Int $tmp75 = $tmp74.line;
org$frostlang$plex$runtime$RawToken $tmp76 = *(&local7);
frost$core$Int $tmp77 = $tmp76.column;
org$frostlang$json$Position $tmp78 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp75, $tmp77);
org$frostlang$json$Token $tmp79 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp69, $tmp71, $tmp73, $tmp78);
*(&local4) = $tmp79;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:44
org$frostlang$json$Token $tmp80 = *(&local4);
return $tmp80;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp81 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {!$tmp82.nonnull};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block1; else goto block2;
block2:;
frost$core$Int $tmp85 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s86, $tmp85);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp87 = &param0->pushbackToken;
*$tmp87 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:55
org$frostlang$json$Token $tmp88 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:56
org$frostlang$json$Token $tmp89 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:56:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp90 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp91 = *$tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {!$tmp91.nonnull};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block2; else goto block3;
block3:;
frost$core$Int $tmp94 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s95, $tmp94);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp96 = &param0->pushbackToken;
*$tmp96 = ((org$frostlang$json$Token$nullable) { $tmp89, true });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:57
org$frostlang$json$Token $tmp97 = *(&local0);
return $tmp97;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp98 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp98;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp99 = *(&local0);
org$frostlang$json$Token$Kind $tmp100 = $tmp99.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp101->value = $tmp100;
org$frostlang$json$Token$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp102->value = param1;
ITable* $tmp103 = ((frost$core$Equatable*) $tmp101)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Bit $tmp106 = $tmp104(((frost$core$Equatable*) $tmp101), ((frost$core$Equatable*) $tmp102));
bool $tmp107 = $tmp106.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp102)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp101)));
if ($tmp107) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp108 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp108, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp109 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp110 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {!$tmp111.nonnull};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block5;
block5:;
frost$core$Int $tmp114 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s115, $tmp114);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp116 = &param0->pushbackToken;
*$tmp116 = ((org$frostlang$json$Token$nullable) { $tmp109, true });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp117 = &param0->source;
frost$core$String* $tmp118 = *$tmp117;
frost$core$String$Index $tmp119 = param1.start;
frost$core$String$Index $tmp120 = param1.end;
frost$core$Bit $tmp121 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp122 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp119, $tmp120, $tmp121);
frost$core$String* $tmp123 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp118, $tmp122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
return $tmp123;

}
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$Array* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:77
frost$core$Int64 $tmp124 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:77:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp125 = &(&local1)->$rawValue;
*$tmp125 = $tmp124;
org$frostlang$json$Token$Kind $tmp126 = *(&local1);
*(&local0) = $tmp126;
org$frostlang$json$Token$Kind $tmp127 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:77:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp128 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp128;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp129 = *(&local3);
org$frostlang$json$Token$Kind $tmp130 = $tmp129.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp131;
$tmp131 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp131->value = $tmp130;
org$frostlang$json$Token$Kind$wrapper* $tmp132;
$tmp132 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp132->value = $tmp127;
ITable* $tmp133 = ((frost$core$Equatable*) $tmp131)->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Bit $tmp136 = $tmp134(((frost$core$Equatable*) $tmp131), ((frost$core$Equatable*) $tmp132));
bool $tmp137 = $tmp136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
if ($tmp137) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp138 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp138, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp139 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp140 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp141 = *$tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {!$tmp141.nonnull};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block8; else goto block9;
block9:;
frost$core$Int $tmp144 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s145, $tmp144);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp146 = &param0->pushbackToken;
*$tmp146 = ((org$frostlang$json$Token$nullable) { $tmp139, true });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp147 = *(&local2);
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147.nonnull};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:78
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp150 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp151 = (frost$core$Int64) {5u};
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp153 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp152, $tmp153);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp150, $tmp151, ((frost$collections$ListView*) $tmp152));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
return $tmp150;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:80
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp154);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$Array* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:81
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:82
frost$collections$Array* $tmp156 = *(&local4);
frost$json$JSON* $tmp157 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:83
org$frostlang$json$Token $tmp158 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp159 = $tmp158.kind;
frost$core$Int64 $tmp160 = $tmp159.$rawValue;
frost$core$Int64 $tmp161 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 == $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:85
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp167 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {5u};
frost$collections$Array* $tmp169 = *(&local4);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp167, $tmp168, ((frost$collections$ListView*) $tmp169));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$collections$Array* $tmp170 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp167;
block14:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp172 = $tmp160.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:91
frost$core$Int $tmp177 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s178, $tmp177, &$s179);
abort(); // unreachable
block12:;
goto block10;
block11:;
goto block19;
block19:;

}
frost$json$JSON* frost$json$JSONParser$map$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$HashMap* local4 = NULL;
org$frostlang$json$Token local5;
org$frostlang$json$Token$Kind local6;
org$frostlang$json$Token$Kind local7;
frost$core$String* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$json$Token local10;
org$frostlang$json$Token$Kind local11;
org$frostlang$json$Token$Kind local12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:99
frost$core$Int64 $tmp180 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:99:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp181 = &(&local1)->$rawValue;
*$tmp181 = $tmp180;
org$frostlang$json$Token$Kind $tmp182 = *(&local1);
*(&local0) = $tmp182;
org$frostlang$json$Token$Kind $tmp183 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:99:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp184 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp184;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp185 = *(&local3);
org$frostlang$json$Token$Kind $tmp186 = $tmp185.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp187;
$tmp187 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp187->value = $tmp186;
org$frostlang$json$Token$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp188->value = $tmp183;
ITable* $tmp189 = ((frost$core$Equatable*) $tmp187)->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[0];
frost$core$Bit $tmp192 = $tmp190(((frost$core$Equatable*) $tmp187), ((frost$core$Equatable*) $tmp188));
bool $tmp193 = $tmp192.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp188)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
if ($tmp193) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp194 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp194, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp195 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp196 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp197 = *$tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {!$tmp197.nonnull};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block8; else goto block9;
block9:;
frost$core$Int $tmp200 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s201, $tmp200);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp202 = &param0->pushbackToken;
*$tmp202 = ((org$frostlang$json$Token$nullable) { $tmp195, true });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp203 = *(&local2);
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203.nonnull};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:100
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp206 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp207 = (frost$core$Int64) {4u};
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp208 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp208);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp206, $tmp207, ((frost$collections$MapView*) $tmp208));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
return $tmp206;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:102
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp209 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp209);
*(&local4) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$collections$HashMap* $tmp210 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local4) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:103
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:104
// begin inline call to method frost.json.JSONParser.string():frost.core.String from JSONParser.frost:104:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:126
org$frostlang$json$Token $tmp211 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local5) = $tmp211;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp212 = *(&local5);
org$frostlang$json$Token$Kind $tmp213 = $tmp212.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp214->value = $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp216 = &(&local7)->$rawValue;
*$tmp216 = $tmp215;
org$frostlang$json$Token$Kind $tmp217 = *(&local7);
*(&local6) = $tmp217;
org$frostlang$json$Token$Kind $tmp218 = *(&local6);
org$frostlang$json$Token$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp219->value = $tmp218;
ITable* $tmp220 = ((frost$core$Equatable*) $tmp214)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[1];
frost$core$Bit $tmp223 = $tmp221(((frost$core$Equatable*) $tmp214), ((frost$core$Equatable*) $tmp219));
bool $tmp224 = $tmp223.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp214)));
if ($tmp224) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp225 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp226 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp227 = &param0->source;
frost$core$String* $tmp228 = *$tmp227;
frost$core$String$Index $tmp229 = $tmp226.start;
frost$core$String$Index $tmp230 = $tmp226.end;
frost$core$Bit $tmp231 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp232 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp229, $tmp230, $tmp231);
frost$core$String* $tmp233 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp228, $tmp232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s235, $tmp233);
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp234, &$s237);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s238, $tmp225, $tmp236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp239 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp240 = &param0->source;
frost$core$String* $tmp241 = *$tmp240;
frost$core$String$Index $tmp242 = $tmp239.start;
frost$core$String$Index $tmp243 = $tmp239.end;
frost$core$Bit $tmp244 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp245 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp242, $tmp243, $tmp244);
frost$core$String* $tmp246 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp241, $tmp245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$String* $tmp247 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local8) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp248 = *(&local8);
frost$core$String* $tmp249 = *(&local8);
frost$core$String* $tmp250 = *(&local8);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp251 = (frost$core$Int) {0u};
frost$core$String$Index $tmp252 = frost$core$String$Index$init$frost$core$Int($tmp251);
frost$core$String$Index $tmp253 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp249, $tmp252);
frost$core$String* $tmp254 = *(&local8);
frost$core$String* $tmp255 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp256 = &$tmp255->_length;
frost$core$Int $tmp257 = *$tmp256;
frost$core$String$Index $tmp258 = frost$core$String$Index$init$frost$core$Int($tmp257);
frost$core$String$Index $tmp259 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp254, $tmp258);
frost$core$Bit $tmp260 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp261 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp253, $tmp259, $tmp260);
frost$core$String* $tmp262 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp248, $tmp261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$String* $tmp263 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local8) = ((frost$core$String*) NULL);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$String* $tmp264 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local9) = $tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:105
org$frostlang$json$Token $tmp265 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local10) = $tmp265;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:106
org$frostlang$json$Token $tmp266 = *(&local10);
org$frostlang$json$Token$Kind $tmp267 = $tmp266.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp268->value = $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp270 = &(&local12)->$rawValue;
*$tmp270 = $tmp269;
org$frostlang$json$Token$Kind $tmp271 = *(&local12);
*(&local11) = $tmp271;
org$frostlang$json$Token$Kind $tmp272 = *(&local11);
org$frostlang$json$Token$Kind$wrapper* $tmp273;
$tmp273 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp273->value = $tmp272;
ITable* $tmp274 = ((frost$core$Equatable*) $tmp268)->$class->itable;
while ($tmp274->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp274 = $tmp274->next;
}
$fn276 $tmp275 = $tmp274->methods[1];
frost$core$Bit $tmp277 = $tmp275(((frost$core$Equatable*) $tmp268), ((frost$core$Equatable*) $tmp273));
bool $tmp278 = $tmp277.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
if ($tmp278) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:107
frost$core$Int $tmp279 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:109
frost$collections$HashMap* $tmp282 = *(&local4);
frost$core$String* $tmp283 = *(&local9);
frost$json$JSON* $tmp284 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp282, ((frost$collections$Key*) $tmp283), ((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:110
org$frostlang$json$Token $tmp285 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp286 = $tmp285.kind;
frost$core$Int64 $tmp287 = $tmp286.$rawValue;
frost$core$Int64 $tmp288 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 == $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:112
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp294 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp295 = (frost$core$Int64) {4u};
frost$collections$HashMap* $tmp296 = *(&local4);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp294, $tmp295, ((frost$collections$MapView*) $tmp296));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$String* $tmp297 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local4) = ((frost$collections$HashMap*) NULL);
return $tmp294;
block25:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp300 = $tmp287.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 == $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:115
frost$core$String* $tmp305 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:118
frost$core$Int $tmp306 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block23:;
frost$core$String* $tmp309 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block11:;
goto block30;
block30:;

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$Kind local2;
frost$core$String* local3 = NULL;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:126
org$frostlang$json$Token $tmp310 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp310;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp311 = *(&local0);
org$frostlang$json$Token$Kind $tmp312 = $tmp311.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp313->value = $tmp312;
frost$core$Int64 $tmp314 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp315 = &(&local2)->$rawValue;
*$tmp315 = $tmp314;
org$frostlang$json$Token$Kind $tmp316 = *(&local2);
*(&local1) = $tmp316;
org$frostlang$json$Token$Kind $tmp317 = *(&local1);
org$frostlang$json$Token$Kind$wrapper* $tmp318;
$tmp318 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp318->value = $tmp317;
ITable* $tmp319 = ((frost$core$Equatable*) $tmp313)->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[1];
frost$core$Bit $tmp322 = $tmp320(((frost$core$Equatable*) $tmp313), ((frost$core$Equatable*) $tmp318));
bool $tmp323 = $tmp322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp313)));
if ($tmp323) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp324 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp325 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp326 = &param0->source;
frost$core$String* $tmp327 = *$tmp326;
frost$core$String$Index $tmp328 = $tmp325.start;
frost$core$String$Index $tmp329 = $tmp325.end;
frost$core$Bit $tmp330 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp331 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp328, $tmp329, $tmp330);
frost$core$String* $tmp332 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp327, $tmp331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s334, $tmp332);
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s336);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s337, $tmp324, $tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp338 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp339 = &param0->source;
frost$core$String* $tmp340 = *$tmp339;
frost$core$String$Index $tmp341 = $tmp338.start;
frost$core$String$Index $tmp342 = $tmp338.end;
frost$core$Bit $tmp343 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp344 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp341, $tmp342, $tmp343);
frost$core$String* $tmp345 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp340, $tmp344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local3) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp347 = *(&local3);
frost$core$String* $tmp348 = *(&local3);
frost$core$String* $tmp349 = *(&local3);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp350 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp351 = &(&local5)->value;
*$tmp351 = $tmp350;
frost$core$String$Index $tmp352 = *(&local5);
*(&local4) = $tmp352;
frost$core$String$Index $tmp353 = *(&local4);
frost$core$String$Index $tmp354 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp348, $tmp353);
frost$core$String* $tmp355 = *(&local3);
frost$core$String* $tmp356 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp357 = &$tmp356->_length;
frost$core$Int $tmp358 = *$tmp357;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp359 = &(&local7)->value;
*$tmp359 = $tmp358;
frost$core$String$Index $tmp360 = *(&local7);
*(&local6) = $tmp360;
frost$core$String$Index $tmp361 = *(&local6);
frost$core$String$Index $tmp362 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp355, $tmp361);
frost$core$Bit $tmp363 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp364 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp354, $tmp362, $tmp363);
frost$core$String* $tmp365 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp347, $tmp364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$String* $tmp366 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local3) = ((frost$core$String*) NULL);
return $tmp365;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:136
org$frostlang$json$Token $tmp367 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp367;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:137
org$frostlang$json$Token $tmp368 = *(&local0);
org$frostlang$json$Token$Kind $tmp369 = $tmp368.kind;
frost$core$Int64 $tmp370 = $tmp369.$rawValue;
frost$core$Int64 $tmp371 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:138:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 == $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:139
frost$json$JSON* $tmp377 = frost$json$JSONParser$map$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
return $tmp377;
block3:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:141:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp379 = $tmp370.value;
int64_t $tmp380 = $tmp378.value;
bool $tmp381 = $tmp379 == $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:142
frost$json$JSON* $tmp384 = frost$json$JSONParser$list$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
return $tmp384;
block6:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:144:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp386 = $tmp370.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:145
org$frostlang$json$Token $tmp391 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:145:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp392 = &param0->source;
frost$core$String* $tmp393 = *$tmp392;
frost$core$String$Index $tmp394 = $tmp391.start;
frost$core$String$Index $tmp395 = $tmp391.end;
frost$core$Bit $tmp396 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp397 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp394, $tmp395, $tmp396);
frost$core$String* $tmp398 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp393, $tmp397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$String* $tmp399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local1) = $tmp398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:146
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp400 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp401 = (frost$core$Int64) {2u};
frost$core$String* $tmp402 = *(&local1);
frost$core$String* $tmp403 = *(&local1);
frost$core$String* $tmp404 = *(&local1);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:146:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp405 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp406 = &(&local3)->value;
*$tmp406 = $tmp405;
frost$core$String$Index $tmp407 = *(&local3);
*(&local2) = $tmp407;
frost$core$String$Index $tmp408 = *(&local2);
frost$core$String$Index $tmp409 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp403, $tmp408);
frost$core$String* $tmp410 = *(&local1);
frost$core$String* $tmp411 = *(&local1);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:146:79
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp412 = &$tmp411->_length;
frost$core$Int $tmp413 = *$tmp412;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp414 = &(&local5)->value;
*$tmp414 = $tmp413;
frost$core$String$Index $tmp415 = *(&local5);
*(&local4) = $tmp415;
frost$core$String$Index $tmp416 = *(&local4);
frost$core$String$Index $tmp417 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp410, $tmp416);
frost$core$Bit $tmp418 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp419 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp409, $tmp417, $tmp418);
frost$core$String* $tmp420 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp402, $tmp419);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp400, $tmp401, $tmp420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$String* $tmp421 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local1) = ((frost$core$String*) NULL);
return $tmp400;
block9:;
frost$core$Int64 $tmp422 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:148:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp423 = $tmp370.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 == $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:149
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp428 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp429 = (frost$core$Int64) {0u};
org$frostlang$json$Token $tmp430 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:149:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp431 = &param0->source;
frost$core$String* $tmp432 = *$tmp431;
frost$core$String$Index $tmp433 = $tmp430.start;
frost$core$String$Index $tmp434 = $tmp430.end;
frost$core$Bit $tmp435 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp436 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp433, $tmp434, $tmp435);
frost$core$String* $tmp437 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp432, $tmp436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Int64$nullable $tmp438 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp437);
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp428, $tmp429, ((frost$core$Int64) $tmp438.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
return $tmp428;
block17:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:151:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp440 = $tmp370.value;
int64_t $tmp441 = $tmp439.value;
bool $tmp442 = $tmp440 == $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:152
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp445 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp446 = (frost$core$Int64) {1u};
org$frostlang$json$Token $tmp447 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:152:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp448 = &param0->source;
frost$core$String* $tmp449 = *$tmp448;
frost$core$String$Index $tmp450 = $tmp447.start;
frost$core$String$Index $tmp451 = $tmp447.end;
frost$core$Bit $tmp452 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp453 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp450, $tmp451, $tmp452);
frost$core$String* $tmp454 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp449, $tmp453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// begin inline call to function frost.core.String.get_asReal64():frost.core.Real64? from JSONParser.frost:152:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1524
frost$core$Real64 $tmp455;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp455, $tmp454);
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp445, $tmp446, ((frost$core$Real64) ((frost$core$Real64$nullable) { $tmp455, true }).value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
return $tmp445;
block21:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:154:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp457 = $tmp370.value;
int64_t $tmp458 = $tmp456.value;
bool $tmp459 = $tmp457 == $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:155
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp462 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp463 = (frost$core$Int64) {3u};
frost$core$Bit $tmp464 = (frost$core$Bit) {true};
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp462, $tmp463, $tmp464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
return $tmp462;
block26:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:157:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp466 = $tmp370.value;
int64_t $tmp467 = $tmp465.value;
bool $tmp468 = $tmp466 == $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:158
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp471 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp472 = (frost$core$Int64) {3u};
frost$core$Bit $tmp473 = (frost$core$Bit) {false};
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp471, $tmp472, $tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
return $tmp471;
block29:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:160:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp475 = $tmp370.value;
int64_t $tmp476 = $tmp474.value;
bool $tmp477 = $tmp475 == $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:161
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp480 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp481 = (frost$core$Int64) {6u};
frost$json$JSON$init$frost$core$Int64($tmp480, $tmp481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
return $tmp480;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:164
frost$core$Int $tmp482 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s483, $tmp482);
abort(); // unreachable
block1:;
goto block34;
block34:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s484));
frost$core$String** $tmp485 = &param0->source;
frost$core$String* $tmp486 = *$tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$String** $tmp487 = &param0->source;
*$tmp487 = &$s488;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:17
FROST_ASSERT(40 == sizeof(org$frostlang$json$Lexer));
org$frostlang$json$Lexer* $tmp489 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
org$frostlang$json$Lexer** $tmp490 = &param0->lexer;
org$frostlang$json$Lexer* $tmp491 = *$tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
org$frostlang$json$Lexer** $tmp492 = &param0->lexer;
*$tmp492 = $tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:20
org$frostlang$json$Token$nullable* $tmp493 = &param0->pushbackToken;
*$tmp493 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSONParser.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp494 = &param0->source;
frost$core$String* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
org$frostlang$json$Lexer** $tmp496 = &param0->lexer;
org$frostlang$json$Lexer* $tmp497 = *$tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
return;

}

