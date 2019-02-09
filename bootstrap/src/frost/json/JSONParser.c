#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "frost/core/Frost.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$array$R$frost$json$JSON, frost$json$JSONParser$object$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn55)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn103)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn133)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn189)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn220)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn319)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -1690570746874506664, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 6076432501702193872, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
frost$core$Int64 $tmp8 = (frost$core$Int64) {31};
frost$core$Int64*** $tmp9 = &$tmp6->transitions;
frost$core$Int64** $tmp10 = *$tmp9;
frost$core$Int64** $tmp11 = &$tmp6->accepts;
frost$core$Int64* $tmp12 = *$tmp11;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp7, param1, $tmp8, $tmp10, $tmp12);
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
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18.nonnull);
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
frost$core$Int64 $tmp31 = $tmp30.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp32 = &(&local3)->$rawValue;
*$tmp32 = $tmp31;
org$frostlang$json$Token$Kind $tmp33 = *(&local3);
*(&local2) = $tmp33;
org$frostlang$json$Token$Kind $tmp34 = *(&local2);
org$frostlang$plex$runtime$RawToken $tmp35 = *(&local1);
frost$core$String$Index $tmp36 = $tmp35.start;
org$frostlang$plex$runtime$RawToken $tmp37 = *(&local1);
frost$core$String$Index $tmp38 = $tmp37.end;
org$frostlang$plex$runtime$RawToken $tmp39 = *(&local1);
frost$core$Int64 $tmp40 = $tmp39.line;
org$frostlang$plex$runtime$RawToken $tmp41 = *(&local1);
frost$core$Int64 $tmp42 = $tmp41.column;
org$frostlang$json$Position $tmp43 = org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64($tmp40, $tmp42);
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
frost$core$Int64 $tmp48 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp49 = &(&local6)->$rawValue;
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
frost$core$Int64 $tmp64 = $tmp63.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp65 = &(&local9)->$rawValue;
*$tmp65 = $tmp64;
org$frostlang$json$Token$Kind $tmp66 = *(&local9);
*(&local8) = $tmp66;
org$frostlang$json$Token$Kind $tmp67 = *(&local8);
org$frostlang$plex$runtime$RawToken $tmp68 = *(&local7);
frost$core$String$Index $tmp69 = $tmp68.start;
org$frostlang$plex$runtime$RawToken $tmp70 = *(&local7);
frost$core$String$Index $tmp71 = $tmp70.end;
org$frostlang$plex$runtime$RawToken $tmp72 = *(&local7);
frost$core$Int64 $tmp73 = $tmp72.line;
org$frostlang$plex$runtime$RawToken $tmp74 = *(&local7);
frost$core$Int64 $tmp75 = $tmp74.column;
org$frostlang$json$Position $tmp76 = org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64($tmp73, $tmp75);
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
frost$core$Bit $tmp81 = frost$core$Bit$init$builtin_bit(!$tmp80.nonnull);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s84, $tmp83);
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
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit(!$tmp89.nonnull);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s93, $tmp92);
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
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(!$tmp109.nonnull);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s113, $tmp112);
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
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp120 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp117, $tmp118, $tmp119);
frost$core$String* $tmp121 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp116, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return $tmp121;

}
frost$json$JSON* frost$json$JSONParser$array$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$Array* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:77
frost$core$Int64 $tmp122 = (frost$core$Int64) {13};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp123 = &(&local1)->$rawValue;
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
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit(!$tmp139.nonnull);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp142 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s143, $tmp142);
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
frost$core$Bit $tmp146 = frost$core$Bit$init$builtin_bit($tmp145.nonnull);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:78
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp148 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {5};
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp150 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp151 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp150, $tmp151);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp148, $tmp149, ((frost$collections$ListView*) $tmp150));
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
frost$core$Int64 $tmp158 = $tmp157.$rawValue;
frost$core$Int64 $tmp159 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:85
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp165 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp166 = (frost$core$Int64) {5};
frost$collections$Array* $tmp167 = *(&local4);
frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT($tmp165, $tmp166, ((frost$collections$ListView*) $tmp167));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$collections$Array* $tmp168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp165;
block14:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp170 = $tmp158.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:91
frost$core$Int64 $tmp175 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block12:;
goto block10;
block11:;
goto block19;
block19:;

}
frost$json$JSON* frost$json$JSONParser$object$R$frost$json$JSON(frost$json$JSONParser* param0) {

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
frost$core$Int64 $tmp178 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp179 = &(&local1)->$rawValue;
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
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit(!$tmp195.nonnull);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp198 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s199, $tmp198);
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
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit($tmp201.nonnull);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:100
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp204 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp205 = (frost$core$Int64) {4};
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp206 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp206);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp204, $tmp205, ((frost$collections$MapView*) $tmp206));
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
frost$core$Int64 $tmp213 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp214 = &(&local7)->$rawValue;
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
frost$core$Int64 $tmp223 = (frost$core$Int64) {128};
org$frostlang$json$Token $tmp224 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp225 = &param0->source;
frost$core$String* $tmp226 = *$tmp225;
frost$core$String$Index $tmp227 = $tmp224.start;
frost$core$String$Index $tmp228 = $tmp224.end;
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp230 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp227, $tmp228, $tmp229);
frost$core$String* $tmp231 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp226, $tmp230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, $tmp231);
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s236, $tmp223, $tmp234);
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
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(false);
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
frost$core$String$Index $tmp250 = frost$core$String$Index$init$frost$core$Int64($tmp249);
frost$core$String$Index $tmp251 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp247, $tmp250);
frost$core$String* $tmp252 = *(&local8);
frost$core$String* $tmp253 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp254 = &$tmp253->_length;
frost$core$Int64 $tmp255 = *$tmp254;
frost$core$String$Index $tmp256 = frost$core$String$Index$init$frost$core$Int64($tmp255);
frost$core$String$Index $tmp257 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp252, $tmp256);
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit(false);
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
frost$core$Int64 $tmp267 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp268 = &(&local12)->$rawValue;
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
frost$core$Int64 $tmp277 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s278, $tmp277, &$s279);
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
frost$core$Int64 $tmp285 = $tmp284.$rawValue;
frost$core$Int64 $tmp286 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 == $tmp288;
frost$core$Bit $tmp290 = frost$core$Bit$init$builtin_bit($tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:112
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp292 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp293 = (frost$core$Int64) {4};
frost$collections$HashMap* $tmp294 = *(&local4);
frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp292, $tmp293, ((frost$collections$MapView*) $tmp294));
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
frost$core$Int64 $tmp297 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp298 = $tmp285.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 == $tmp299;
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300);
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
frost$core$Int64 $tmp304 = (frost$core$Int64) {118};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s305, $tmp304, &$s306);
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
frost$core$Int64 $tmp312 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp313 = &(&local2)->$rawValue;
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
frost$core$Int64 $tmp322 = (frost$core$Int64) {128};
org$frostlang$json$Token $tmp323 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp324 = &param0->source;
frost$core$String* $tmp325 = *$tmp324;
frost$core$String$Index $tmp326 = $tmp323.start;
frost$core$String$Index $tmp327 = $tmp323.end;
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp329 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp326, $tmp327, $tmp328);
frost$core$String* $tmp330 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp325, $tmp329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s332, $tmp330);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s335, $tmp322, $tmp333);
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
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit(false);
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp348 = (frost$core$Int64) {0};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:283:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp349 = &(&local5)->value;
*$tmp349 = $tmp348;
frost$core$String$Index $tmp350 = *(&local5);
*(&local4) = $tmp350;
frost$core$String$Index $tmp351 = *(&local4);
frost$core$String$Index $tmp352 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp346, $tmp351);
frost$core$String* $tmp353 = *(&local3);
frost$core$String* $tmp354 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp355 = &$tmp354->_length;
frost$core$Int64 $tmp356 = *$tmp355;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:287:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp357 = &(&local7)->value;
*$tmp357 = $tmp356;
frost$core$String$Index $tmp358 = *(&local7);
*(&local6) = $tmp358;
frost$core$String$Index $tmp359 = *(&local6);
frost$core$String$Index $tmp360 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp353, $tmp359);
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit(false);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:136
org$frostlang$json$Token $tmp365 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:137
org$frostlang$json$Token $tmp366 = *(&local0);
org$frostlang$json$Token$Kind $tmp367 = $tmp366.kind;
frost$core$Int64 $tmp368 = $tmp367.$rawValue;
frost$core$Int64 $tmp369 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:138:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp370 = $tmp368.value;
int64_t $tmp371 = $tmp369.value;
bool $tmp372 = $tmp370 == $tmp371;
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:139
frost$json$JSON* $tmp375 = frost$json$JSONParser$object$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
return $tmp375;
block3:;
frost$core$Int64 $tmp376 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:141:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp377 = $tmp368.value;
int64_t $tmp378 = $tmp376.value;
bool $tmp379 = $tmp377 == $tmp378;
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit($tmp379);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:142
frost$json$JSON* $tmp382 = frost$json$JSONParser$array$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
return $tmp382;
block6:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:144:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp384 = $tmp368.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386);
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
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit(false);
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
frost$core$Int64 $tmp399 = (frost$core$Int64) {2};
frost$core$String* $tmp400 = *(&local1);
frost$core$String* $tmp401 = *(&local1);
frost$core$String* $tmp402 = *(&local1);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:146:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp403 = (frost$core$Int64) {0};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:283:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp404 = &(&local3)->value;
*$tmp404 = $tmp403;
frost$core$String$Index $tmp405 = *(&local3);
*(&local2) = $tmp405;
frost$core$String$Index $tmp406 = *(&local2);
frost$core$String$Index $tmp407 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp401, $tmp406);
frost$core$String* $tmp408 = *(&local1);
frost$core$String* $tmp409 = *(&local1);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:146:79
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp410 = &$tmp409->_length;
frost$core$Int64 $tmp411 = *$tmp410;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:287:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp412 = &(&local5)->value;
*$tmp412 = $tmp411;
frost$core$String$Index $tmp413 = *(&local5);
*(&local4) = $tmp413;
frost$core$String$Index $tmp414 = *(&local4);
frost$core$String$Index $tmp415 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp408, $tmp414);
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp417 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp407, $tmp415, $tmp416);
frost$core$String* $tmp418 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp400, $tmp417);
frost$json$JSON$init$frost$core$Int64$frost$core$String($tmp398, $tmp399, $tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$String* $tmp419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local1) = ((frost$core$String*) NULL);
return $tmp398;
block9:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:148:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp421 = $tmp368.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = frost$core$Bit$init$builtin_bit($tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:149
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp426 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp427 = (frost$core$Int64) {0};
org$frostlang$json$Token $tmp428 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:149:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp429 = &param0->source;
frost$core$String* $tmp430 = *$tmp429;
frost$core$String$Index $tmp431 = $tmp428.start;
frost$core$String$Index $tmp432 = $tmp428.end;
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp434 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp431, $tmp432, $tmp433);
frost$core$String* $tmp435 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp430, $tmp434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Int64$nullable $tmp436 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp435);
frost$json$JSON$init$frost$core$Int64$frost$core$Int64($tmp426, $tmp427, ((frost$core$Int64) $tmp436.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
return $tmp426;
block17:;
frost$core$Int64 $tmp437 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:151:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp438 = $tmp368.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 == $tmp439;
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:152
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp443 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {1};
org$frostlang$json$Token $tmp445 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:152:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp446 = &param0->source;
frost$core$String* $tmp447 = *$tmp446;
frost$core$String$Index $tmp448 = $tmp445.start;
frost$core$String$Index $tmp449 = $tmp445.end;
frost$core$Bit $tmp450 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp451 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp448, $tmp449, $tmp450);
frost$core$String* $tmp452 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp447, $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// begin inline call to function frost.core.String.get_asReal64():frost.core.Real64? from JSONParser.frost:152:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:332
frost$core$Real64 $tmp453;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp453, $tmp452);
frost$json$JSON$init$frost$core$Int64$frost$core$Real64($tmp443, $tmp444, ((frost$core$Real64) ((frost$core$Real64$nullable) { $tmp453, true }).value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
return $tmp443;
block21:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:154:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp455 = $tmp368.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 == $tmp456;
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:155
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp460 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp461 = (frost$core$Int64) {3};
frost$core$Bit $tmp462 = frost$core$Bit$init$builtin_bit(true);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp460, $tmp461, $tmp462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
return $tmp460;
block26:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:157:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp464 = $tmp368.value;
int64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 == $tmp465;
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:158
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp469 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp470 = (frost$core$Int64) {3};
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit(false);
frost$json$JSON$init$frost$core$Int64$frost$core$Bit($tmp469, $tmp470, $tmp471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
return $tmp469;
block29:;
frost$core$Int64 $tmp472 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSONParser.frost:160:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp473 = $tmp368.value;
int64_t $tmp474 = $tmp472.value;
bool $tmp475 = $tmp473 == $tmp474;
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit($tmp475);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:161
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp478 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int64 $tmp479 = (frost$core$Int64) {6};
frost$json$JSON$init$frost$core$Int64($tmp478, $tmp479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
return $tmp478;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:164
frost$core$Int64 $tmp480 = (frost$core$Int64) {164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s481, $tmp480);
abort(); // unreachable
block1:;
goto block34;
block34:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s482));
frost$core$String** $tmp483 = &param0->source;
frost$core$String* $tmp484 = *$tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$String** $tmp485 = &param0->source;
*$tmp485 = &$s486;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:17
FROST_ASSERT(40 == sizeof(org$frostlang$json$Lexer));
org$frostlang$json$Lexer* $tmp487 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
org$frostlang$json$Lexer** $tmp488 = &param0->lexer;
org$frostlang$json$Lexer* $tmp489 = *$tmp488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
org$frostlang$json$Lexer** $tmp490 = &param0->lexer;
*$tmp490 = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:20
org$frostlang$json$Token$nullable* $tmp491 = &param0->pushbackToken;
*$tmp491 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp492 = &param0->source;
frost$core$String* $tmp493 = *$tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
org$frostlang$json$Lexer** $tmp494 = &param0->lexer;
org$frostlang$json$Lexer* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
return;

}

