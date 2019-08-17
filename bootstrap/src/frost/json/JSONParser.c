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
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$list$R$frost$json$JSON, frost$json$JSONParser$map$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn55)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn103)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn133)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn189)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn220)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn319)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, 6711150264062823990, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6c\x69\x73\x74", 20, -1806137182227931949, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, 8276871105769291383, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6d\x61\x70", 19, -1945586642327999461, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(frost$json$JSONParser* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->source;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->source;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:29
org$frostlang$json$Lexer** $tmp5 = &param0->lexer;
org$frostlang$json$Lexer* $tmp6 = *$tmp5;
// begin inline call to method org.frostlang.json.Lexer.start(source:frost.core.String) from JSONParser.frost:29:20
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:20
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:30
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:35
org$frostlang$json$Token$nullable* $tmp17 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18.nonnull};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:36
org$frostlang$json$Token$nullable* $tmp21 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp22 = *$tmp21;
*(&local0) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:37
org$frostlang$json$Token$nullable* $tmp23 = &param0->pushbackToken;
*$tmp23 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:38
org$frostlang$json$Token$nullable $tmp24 = *(&local0);
return ((org$frostlang$json$Token) $tmp24.value);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:40
org$frostlang$json$Lexer** $tmp25 = &param0->lexer;
org$frostlang$json$Lexer* $tmp26 = *$tmp25;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:40:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp27 = &$tmp26->dfa;
org$frostlang$plex$runtime$DFA* $tmp28 = *$tmp27;
org$frostlang$plex$runtime$RawToken $tmp29 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp28);
*(&local1) = $tmp29;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp30 = *(&local1);
frost$core$Int $tmp31 = $tmp30.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp32 = &(&local3)->$rawValue;
*$tmp32 = $tmp31;
org$frostlang$json$Token$Kind $tmp33 = *(&local3);
*(&local2) = $tmp33;
org$frostlang$json$Token$Kind $tmp34 = *(&local2);
org$frostlang$plex$runtime$RawToken $tmp35 = *(&local1);
frost$core$String$Index $tmp36 = $tmp35.start;
org$frostlang$plex$runtime$RawToken $tmp37 = *(&local1);
frost$core$String$Index $tmp38 = $tmp37.end;
org$frostlang$plex$runtime$RawToken $tmp39 = *(&local1);
frost$core$Int $tmp40 = $tmp39.line;
org$frostlang$plex$runtime$RawToken $tmp41 = *(&local1);
frost$core$Int $tmp42 = $tmp41.column;
org$frostlang$json$Position $tmp43 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp40, $tmp42);
org$frostlang$json$Token $tmp44 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp34, $tmp36, $tmp38, $tmp43);
*(&local4) = $tmp44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:41
goto block5;
block5:;
org$frostlang$json$Token $tmp45 = *(&local4);
org$frostlang$json$Token$Kind $tmp46 = $tmp45.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp47->value = $tmp46;
frost$core$Int $tmp48 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp49 = &(&local6)->$rawValue;
*$tmp49 = $tmp48;
org$frostlang$json$Token$Kind $tmp50 = *(&local6);
*(&local5) = $tmp50;
org$frostlang$json$Token$Kind $tmp51 = *(&local5);
org$frostlang$json$Token$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp52->value = $tmp51;
ITable* $tmp53 = ((frost$core$Equatable*) $tmp47)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Bit $tmp56 = $tmp54(((frost$core$Equatable*) $tmp47), ((frost$core$Equatable*) $tmp52));
bool $tmp57 = $tmp56.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
if ($tmp57) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:42
org$frostlang$json$Lexer** $tmp58 = &param0->lexer;
org$frostlang$json$Lexer* $tmp59 = *$tmp58;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp60 = &$tmp59->dfa;
org$frostlang$plex$runtime$DFA* $tmp61 = *$tmp60;
org$frostlang$plex$runtime$RawToken $tmp62 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp61);
*(&local7) = $tmp62;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp63 = *(&local7);
frost$core$Int $tmp64 = $tmp63.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp65 = &(&local9)->$rawValue;
*$tmp65 = $tmp64;
org$frostlang$json$Token$Kind $tmp66 = *(&local9);
*(&local8) = $tmp66;
org$frostlang$json$Token$Kind $tmp67 = *(&local8);
org$frostlang$plex$runtime$RawToken $tmp68 = *(&local7);
frost$core$String$Index $tmp69 = $tmp68.start;
org$frostlang$plex$runtime$RawToken $tmp70 = *(&local7);
frost$core$String$Index $tmp71 = $tmp70.end;
org$frostlang$plex$runtime$RawToken $tmp72 = *(&local7);
frost$core$Int $tmp73 = $tmp72.line;
org$frostlang$plex$runtime$RawToken $tmp74 = *(&local7);
frost$core$Int $tmp75 = $tmp74.column;
org$frostlang$json$Position $tmp76 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp73, $tmp75);
org$frostlang$json$Token $tmp77 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp67, $tmp69, $tmp71, $tmp76);
*(&local4) = $tmp77;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:44
org$frostlang$json$Token $tmp78 = *(&local4);
return $tmp78;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp79 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp80 = *$tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {!$tmp80.nonnull};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block1; else goto block2;
block2:;
frost$core$Int $tmp83 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s84, $tmp83);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp85 = &param0->pushbackToken;
*$tmp85 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:55
org$frostlang$json$Token $tmp86 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:56
org$frostlang$json$Token $tmp87 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:56:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp88 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {!$tmp89.nonnull};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block2; else goto block3;
block3:;
frost$core$Int $tmp92 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s93, $tmp92);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp94 = &param0->pushbackToken;
*$tmp94 = ((org$frostlang$json$Token$nullable) { $tmp87, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:57
org$frostlang$json$Token $tmp95 = *(&local0);
return $tmp95;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp96 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp97 = *(&local0);
org$frostlang$json$Token$Kind $tmp98 = $tmp97.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp99->value = $tmp98;
org$frostlang$json$Token$Kind$wrapper* $tmp100;
$tmp100 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp100->value = param1;
ITable* $tmp101 = ((frost$core$Equatable*) $tmp99)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Bit $tmp104 = $tmp102(((frost$core$Equatable*) $tmp99), ((frost$core$Equatable*) $tmp100));
bool $tmp105 = $tmp104.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp100)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
if ($tmp105) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp106 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp106, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp107 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp108 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {!$tmp109.nonnull};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block4; else goto block5;
block5:;
frost$core$Int $tmp112 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s113, $tmp112);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp114 = &param0->pushbackToken;
*$tmp114 = ((org$frostlang$json$Token$nullable) { $tmp107, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp115 = &param0->source;
frost$core$String* $tmp116 = *$tmp115;
frost$core$String$Index $tmp117 = param1.start;
frost$core$String$Index $tmp118 = param1.end;
frost$core$Bit $tmp119 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp120 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp117, $tmp118, $tmp119);
frost$core$String* $tmp121 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp116, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return $tmp121;

}
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$Array* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:77
frost$core$Int $tmp122 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp123 = &(&local1)->$rawValue;
*$tmp123 = $tmp122;
org$frostlang$json$Token$Kind $tmp124 = *(&local1);
*(&local0) = $tmp124;
org$frostlang$json$Token$Kind $tmp125 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:77:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp126 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp126;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp127 = *(&local3);
org$frostlang$json$Token$Kind $tmp128 = $tmp127.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp129;
$tmp129 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp129->value = $tmp128;
org$frostlang$json$Token$Kind$wrapper* $tmp130;
$tmp130 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp130->value = $tmp125;
ITable* $tmp131 = ((frost$core$Equatable*) $tmp129)->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
frost$core$Bit $tmp134 = $tmp132(((frost$core$Equatable*) $tmp129), ((frost$core$Equatable*) $tmp130));
bool $tmp135 = $tmp134.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp130)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp129)));
if ($tmp135) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp136 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp136, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp137 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp138 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp139 = *$tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {!$tmp139.nonnull};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block8; else goto block9;
block9:;
frost$core$Int $tmp142 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s143, $tmp142);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp144 = &param0->pushbackToken;
*$tmp144 = ((org$frostlang$json$Token$nullable) { $tmp137, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp145 = *(&local2);
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145.nonnull};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:78
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp148 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp149 = (frost$core$Int) {5u};
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp150 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp151 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp150, $tmp151);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT($tmp148, $tmp149, ((frost$collections$ListView*) $tmp150));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
return $tmp148;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:80
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp152);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$collections$Array* $tmp153 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local4) = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:81
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:82
frost$collections$Array* $tmp154 = *(&local4);
frost$json$JSON* $tmp155 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp154, ((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:83
org$frostlang$json$Token $tmp156 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp157 = $tmp156.kind;
frost$core$Int $tmp158 = $tmp157.$rawValue;
frost$core$Int $tmp159 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:85
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp165 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp166 = (frost$core$Int) {5u};
frost$collections$Array* $tmp167 = *(&local4);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT($tmp165, $tmp166, ((frost$collections$ListView*) $tmp167));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$collections$Array* $tmp168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp165;
block14:;
frost$core$Int $tmp169 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp170 = $tmp158.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:91
frost$core$Int $tmp175 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, $tmp175, &$s177);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:99
frost$core$Int $tmp178 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp179 = &(&local1)->$rawValue;
*$tmp179 = $tmp178;
org$frostlang$json$Token$Kind $tmp180 = *(&local1);
*(&local0) = $tmp180;
org$frostlang$json$Token$Kind $tmp181 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:99:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp182 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp182;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp183 = *(&local3);
org$frostlang$json$Token$Kind $tmp184 = $tmp183.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp185;
$tmp185 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp185->value = $tmp184;
org$frostlang$json$Token$Kind$wrapper* $tmp186;
$tmp186 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp186->value = $tmp181;
ITable* $tmp187 = ((frost$core$Equatable*) $tmp185)->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[0];
frost$core$Bit $tmp190 = $tmp188(((frost$core$Equatable*) $tmp185), ((frost$core$Equatable*) $tmp186));
bool $tmp191 = $tmp190.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp186)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp185)));
if ($tmp191) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp192 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp192, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp193 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp194 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp195 = *$tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {!$tmp195.nonnull};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block8; else goto block9;
block9:;
frost$core$Int $tmp198 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s199, $tmp198);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp200 = &param0->pushbackToken;
*$tmp200 = ((org$frostlang$json$Token$nullable) { $tmp193, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp201 = *(&local2);
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201.nonnull};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:100
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp204 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp205 = (frost$core$Int) {4u};
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp206 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp206);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp204, $tmp205, ((frost$collections$MapView*) $tmp206));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
return $tmp204;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:102
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp207 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp207);
*(&local4) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$collections$HashMap* $tmp208 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local4) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:103
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:104
// begin inline call to method frost.json.JSONParser.string():frost.core.String from JSONParser.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
org$frostlang$json$Token $tmp209 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local5) = $tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp210 = *(&local5);
org$frostlang$json$Token$Kind $tmp211 = $tmp210.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp212->value = $tmp211;
frost$core$Int $tmp213 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp214 = &(&local7)->$rawValue;
*$tmp214 = $tmp213;
org$frostlang$json$Token$Kind $tmp215 = *(&local7);
*(&local6) = $tmp215;
org$frostlang$json$Token$Kind $tmp216 = *(&local6);
org$frostlang$json$Token$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp217->value = $tmp216;
ITable* $tmp218 = ((frost$core$Equatable*) $tmp212)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[1];
frost$core$Bit $tmp221 = $tmp219(((frost$core$Equatable*) $tmp212), ((frost$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
if ($tmp222) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp223 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp224 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp225 = &param0->source;
frost$core$String* $tmp226 = *$tmp225;
frost$core$String$Index $tmp227 = $tmp224.start;
frost$core$String$Index $tmp228 = $tmp224.end;
frost$core$Bit $tmp229 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp230 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp227, $tmp228, $tmp229);
frost$core$String* $tmp231 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp226, $tmp230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, $tmp231);
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s236, $tmp223, $tmp234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp237 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp238 = &param0->source;
frost$core$String* $tmp239 = *$tmp238;
frost$core$String$Index $tmp240 = $tmp237.start;
frost$core$String$Index $tmp241 = $tmp237.end;
frost$core$Bit $tmp242 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp243 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp240, $tmp241, $tmp242);
frost$core$String* $tmp244 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp239, $tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$String* $tmp245 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local8) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp246 = *(&local8);
frost$core$String* $tmp247 = *(&local8);
frost$core$String* $tmp248 = *(&local8);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp249 = (frost$core$Int) {0u};
frost$core$String$Index $tmp250 = frost$core$String$Index$init$frost$core$Int($tmp249);
frost$core$String$Index $tmp251 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp247, $tmp250);
frost$core$String* $tmp252 = *(&local8);
frost$core$String* $tmp253 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp254 = &$tmp253->_length;
frost$core$Int $tmp255 = *$tmp254;
frost$core$String$Index $tmp256 = frost$core$String$Index$init$frost$core$Int($tmp255);
frost$core$String$Index $tmp257 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp252, $tmp256);
frost$core$Bit $tmp258 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp259 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp251, $tmp257, $tmp258);
frost$core$String* $tmp260 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp246, $tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$String* $tmp261 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local8) = ((frost$core$String*) NULL);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$String* $tmp262 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local9) = $tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:105
org$frostlang$json$Token $tmp263 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local10) = $tmp263;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:106
org$frostlang$json$Token $tmp264 = *(&local10);
org$frostlang$json$Token$Kind $tmp265 = $tmp264.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp266;
$tmp266 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp266->value = $tmp265;
frost$core$Int $tmp267 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp268 = &(&local12)->$rawValue;
*$tmp268 = $tmp267;
org$frostlang$json$Token$Kind $tmp269 = *(&local12);
*(&local11) = $tmp269;
org$frostlang$json$Token$Kind $tmp270 = *(&local11);
org$frostlang$json$Token$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp271->value = $tmp270;
ITable* $tmp272 = ((frost$core$Equatable*) $tmp266)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[1];
frost$core$Bit $tmp275 = $tmp273(((frost$core$Equatable*) $tmp266), ((frost$core$Equatable*) $tmp271));
bool $tmp276 = $tmp275.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp271)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp266)));
if ($tmp276) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:107
frost$core$Int $tmp277 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s278, $tmp277, &$s279);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:109
frost$collections$HashMap* $tmp280 = *(&local4);
frost$core$String* $tmp281 = *(&local9);
frost$json$JSON* $tmp282 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp280, ((frost$collections$Key*) $tmp281), ((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:110
org$frostlang$json$Token $tmp283 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp284 = $tmp283.kind;
frost$core$Int $tmp285 = $tmp284.$rawValue;
frost$core$Int $tmp286 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 == $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:112
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp292 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp293 = (frost$core$Int) {4u};
frost$collections$HashMap* $tmp294 = *(&local4);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp292, $tmp293, ((frost$collections$MapView*) $tmp294));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$String* $tmp295 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local4) = ((frost$collections$HashMap*) NULL);
return $tmp292;
block25:;
frost$core$Int $tmp297 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp298 = $tmp285.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 == $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:115
frost$core$String* $tmp303 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:118
frost$core$Int $tmp304 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s305, $tmp304, &$s306);
abort(); // unreachable
block23:;
frost$core$String* $tmp307 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
org$frostlang$json$Token $tmp308 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp308;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp309 = *(&local0);
org$frostlang$json$Token$Kind $tmp310 = $tmp309.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp311;
$tmp311 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp311->value = $tmp310;
frost$core$Int $tmp312 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp313 = &(&local2)->$rawValue;
*$tmp313 = $tmp312;
org$frostlang$json$Token$Kind $tmp314 = *(&local2);
*(&local1) = $tmp314;
org$frostlang$json$Token$Kind $tmp315 = *(&local1);
org$frostlang$json$Token$Kind$wrapper* $tmp316;
$tmp316 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp316->value = $tmp315;
ITable* $tmp317 = ((frost$core$Equatable*) $tmp311)->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[1];
frost$core$Bit $tmp320 = $tmp318(((frost$core$Equatable*) $tmp311), ((frost$core$Equatable*) $tmp316));
bool $tmp321 = $tmp320.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp316)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp311)));
if ($tmp321) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp322 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp323 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp324 = &param0->source;
frost$core$String* $tmp325 = *$tmp324;
frost$core$String$Index $tmp326 = $tmp323.start;
frost$core$String$Index $tmp327 = $tmp323.end;
frost$core$Bit $tmp328 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp329 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp326, $tmp327, $tmp328);
frost$core$String* $tmp330 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp325, $tmp329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s332, $tmp330);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s335, $tmp322, $tmp333);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp336 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp337 = &param0->source;
frost$core$String* $tmp338 = *$tmp337;
frost$core$String$Index $tmp339 = $tmp336.start;
frost$core$String$Index $tmp340 = $tmp336.end;
frost$core$Bit $tmp341 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp342 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp339, $tmp340, $tmp341);
frost$core$String* $tmp343 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp338, $tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$String* $tmp344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local3) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp345 = *(&local3);
frost$core$String* $tmp346 = *(&local3);
frost$core$String* $tmp347 = *(&local3);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp348 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp349 = &(&local5)->value;
*$tmp349 = $tmp348;
frost$core$String$Index $tmp350 = *(&local5);
*(&local4) = $tmp350;
frost$core$String$Index $tmp351 = *(&local4);
frost$core$String$Index $tmp352 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp346, $tmp351);
frost$core$String* $tmp353 = *(&local3);
frost$core$String* $tmp354 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp355 = &$tmp354->_length;
frost$core$Int $tmp356 = *$tmp355;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp357 = &(&local7)->value;
*$tmp357 = $tmp356;
frost$core$String$Index $tmp358 = *(&local7);
*(&local6) = $tmp358;
frost$core$String$Index $tmp359 = *(&local6);
frost$core$String$Index $tmp360 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp353, $tmp359);
frost$core$Bit $tmp361 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp362 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp352, $tmp360, $tmp361);
frost$core$String* $tmp363 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp345, $tmp362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$String* $tmp364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local3) = ((frost$core$String*) NULL);
return $tmp363;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
frost$core$String* local1 = NULL;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int$nullable local6;
frost$core$Int64$nullable local7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:136
org$frostlang$json$Token $tmp365 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:137
org$frostlang$json$Token $tmp366 = *(&local0);
org$frostlang$json$Token$Kind $tmp367 = $tmp366.kind;
frost$core$Int $tmp368 = $tmp367.$rawValue;
frost$core$Int $tmp369 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:138:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp370 = $tmp368.value;
int64_t $tmp371 = $tmp369.value;
bool $tmp372 = $tmp370 == $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:139
frost$json$JSON* $tmp375 = frost$json$JSONParser$map$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
return $tmp375;
block3:;
frost$core$Int $tmp376 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:141:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp377 = $tmp368.value;
int64_t $tmp378 = $tmp376.value;
bool $tmp379 = $tmp377 == $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:142
frost$json$JSON* $tmp382 = frost$json$JSONParser$list$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
return $tmp382;
block6:;
frost$core$Int $tmp383 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:144:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp384 = $tmp368.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:145
org$frostlang$json$Token $tmp389 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:145:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp390 = &param0->source;
frost$core$String* $tmp391 = *$tmp390;
frost$core$String$Index $tmp392 = $tmp389.start;
frost$core$String$Index $tmp393 = $tmp389.end;
frost$core$Bit $tmp394 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp395 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp392, $tmp393, $tmp394);
frost$core$String* $tmp396 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp391, $tmp395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$String* $tmp397 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local1) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:146
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp398 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp399 = (frost$core$Int) {2u};
frost$core$String* $tmp400 = *(&local1);
frost$core$String* $tmp401 = *(&local1);
frost$core$String* $tmp402 = *(&local1);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:146:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp403 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp404 = &(&local3)->value;
*$tmp404 = $tmp403;
frost$core$String$Index $tmp405 = *(&local3);
*(&local2) = $tmp405;
frost$core$String$Index $tmp406 = *(&local2);
frost$core$String$Index $tmp407 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp401, $tmp406);
frost$core$String* $tmp408 = *(&local1);
frost$core$String* $tmp409 = *(&local1);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:146:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp410 = &$tmp409->_length;
frost$core$Int $tmp411 = *$tmp410;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp412 = &(&local5)->value;
*$tmp412 = $tmp411;
frost$core$String$Index $tmp413 = *(&local5);
*(&local4) = $tmp413;
frost$core$String$Index $tmp414 = *(&local4);
frost$core$String$Index $tmp415 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp408, $tmp414);
frost$core$Bit $tmp416 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp417 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp407, $tmp415, $tmp416);
frost$core$String* $tmp418 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp400, $tmp417);
frost$json$JSON$init$frost$core$Int$frost$core$String($tmp398, $tmp399, $tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$String* $tmp419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local1) = ((frost$core$String*) NULL);
return $tmp398;
block9:;
frost$core$Int $tmp420 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:148:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp421 = $tmp368.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:149
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp426 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp427 = (frost$core$Int) {0u};
org$frostlang$json$Token $tmp428 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:149:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp429 = &param0->source;
frost$core$String* $tmp430 = *$tmp429;
frost$core$String$Index $tmp431 = $tmp428.start;
frost$core$String$Index $tmp432 = $tmp428.end;
frost$core$Bit $tmp433 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp434 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp431, $tmp432, $tmp433);
frost$core$String* $tmp435 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp430, $tmp434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSONParser.frost:149:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp436 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp435);
*(&local7) = $tmp436;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp437 = *(&local7);
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437.nonnull};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp440 = *(&local7);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp441 = ((frost$core$Int64) $tmp440.value).value;
frost$core$Int $tmp442 = (frost$core$Int) {((int64_t) $tmp441)};
*(&local6) = ((frost$core$Int$nullable) { $tmp442, true });
goto block20;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local6) = ((frost$core$Int$nullable) { .nonnull = false });
goto block20;
block20:;
frost$core$Int$nullable $tmp443 = *(&local6);
frost$json$JSON$init$frost$core$Int$frost$core$Int($tmp426, $tmp427, ((frost$core$Int) $tmp443.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
return $tmp426;
block17:;
frost$core$Int $tmp444 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:151:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp445 = $tmp368.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 == $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:152
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp450 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp451 = (frost$core$Int) {1u};
org$frostlang$json$Token $tmp452 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:152:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp453 = &param0->source;
frost$core$String* $tmp454 = *$tmp453;
frost$core$String$Index $tmp455 = $tmp452.start;
frost$core$String$Index $tmp456 = $tmp452.end;
frost$core$Bit $tmp457 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp458 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp455, $tmp456, $tmp457);
frost$core$String* $tmp459 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp454, $tmp458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// begin inline call to function frost.core.String.get_asReal64():frost.core.Real64? from JSONParser.frost:152:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Real64 $tmp460;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp460, $tmp459);
frost$json$JSON$init$frost$core$Int$frost$core$Real64($tmp450, $tmp451, ((frost$core$Real64) ((frost$core$Real64$nullable) { $tmp460, true }).value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
return $tmp450;
block25:;
frost$core$Int $tmp461 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:154:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp462 = $tmp368.value;
int64_t $tmp463 = $tmp461.value;
bool $tmp464 = $tmp462 == $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:155
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp467 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp468 = (frost$core$Int) {3u};
frost$core$Bit $tmp469 = (frost$core$Bit) {true};
frost$json$JSON$init$frost$core$Int$frost$core$Bit($tmp467, $tmp468, $tmp469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
return $tmp467;
block30:;
frost$core$Int $tmp470 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:157:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp471 = $tmp368.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:158
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp476 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp477 = (frost$core$Int) {3u};
frost$core$Bit $tmp478 = (frost$core$Bit) {false};
frost$json$JSON$init$frost$core$Int$frost$core$Bit($tmp476, $tmp477, $tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
return $tmp476;
block33:;
frost$core$Int $tmp479 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:160:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp480 = $tmp368.value;
int64_t $tmp481 = $tmp479.value;
bool $tmp482 = $tmp480 == $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:161
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp485 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp486 = (frost$core$Int) {6u};
frost$json$JSON$init$frost$core$Int($tmp485, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
return $tmp485;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:164
frost$core$Int $tmp487 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s488, $tmp487);
abort(); // unreachable
block1:;
goto block38;
block38:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s489));
frost$core$String** $tmp490 = &param0->source;
frost$core$String* $tmp491 = *$tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$String** $tmp492 = &param0->source;
*$tmp492 = &$s493;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:17
FROST_ASSERT(40 == sizeof(org$frostlang$json$Lexer));
org$frostlang$json$Lexer* $tmp494 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
org$frostlang$json$Lexer** $tmp495 = &param0->lexer;
org$frostlang$json$Lexer* $tmp496 = *$tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
org$frostlang$json$Lexer** $tmp497 = &param0->lexer;
*$tmp497 = $tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:20
org$frostlang$json$Token$nullable* $tmp498 = &param0->pushbackToken;
*$tmp498 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp499 = &param0->source;
frost$core$String* $tmp500 = *$tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
org$frostlang$json$Lexer** $tmp501 = &param0->lexer;
org$frostlang$json$Lexer* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
return;

}

