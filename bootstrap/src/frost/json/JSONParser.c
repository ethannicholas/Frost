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
#include "frost/collections/HashKey.h"
#include "frost/core/Int64.h"
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$json$JSONParser$class_type frost$json$JSONParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSONParser$cleanup, frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q, frost$json$JSONParser$next$R$org$frostlang$json$Token, frost$json$JSONParser$pushback$org$frostlang$json$Token, frost$json$JSONParser$peek$R$org$frostlang$json$Token, frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q, frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String, frost$json$JSONParser$list$R$frost$json$JSON, frost$json$JSONParser$map$R$frost$json$JSON, frost$json$JSONParser$string$R$frost$core$String, frost$json$JSONParser$node$R$frost$json$JSON} };

typedef frost$core$Bit (*$fn60)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn108)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn279)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn324)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, 6711150264062823990, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 87, -5041636826801306509, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6c\x69\x73\x74", 20, -1806137182227931949, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, 8276871105769291383, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6d\x61\x70", 19, -1945586642327999461, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 73, 6457620045082740501, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };

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
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24.nonnull};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block3; else goto block4;
block4:;
frost$core$Int $tmp27 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block3:;
return ((org$frostlang$json$Token) $tmp24.value);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:40
org$frostlang$json$Lexer** $tmp30 = &param0->lexer;
org$frostlang$json$Lexer* $tmp31 = *$tmp30;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:40:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp32 = &$tmp31->dfa;
org$frostlang$plex$runtime$DFA* $tmp33 = *$tmp32;
org$frostlang$plex$runtime$RawToken $tmp34 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp33);
*(&local1) = $tmp34;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp35 = *(&local1);
frost$core$Int $tmp36 = $tmp35.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp37 = &(&local3)->$rawValue;
*$tmp37 = $tmp36;
org$frostlang$json$Token$Kind $tmp38 = *(&local3);
*(&local2) = $tmp38;
org$frostlang$json$Token$Kind $tmp39 = *(&local2);
org$frostlang$plex$runtime$RawToken $tmp40 = *(&local1);
frost$core$String$Index $tmp41 = $tmp40.start;
org$frostlang$plex$runtime$RawToken $tmp42 = *(&local1);
frost$core$String$Index $tmp43 = $tmp42.end;
org$frostlang$plex$runtime$RawToken $tmp44 = *(&local1);
frost$core$Int $tmp45 = $tmp44.line;
org$frostlang$plex$runtime$RawToken $tmp46 = *(&local1);
frost$core$Int $tmp47 = $tmp46.column;
org$frostlang$json$Position $tmp48 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp45, $tmp47);
org$frostlang$json$Token $tmp49 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp39, $tmp41, $tmp43, $tmp48);
*(&local4) = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:41
goto block7;
block7:;
org$frostlang$json$Token $tmp50 = *(&local4);
org$frostlang$json$Token$Kind $tmp51 = $tmp50.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp52->value = $tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp54 = &(&local6)->$rawValue;
*$tmp54 = $tmp53;
org$frostlang$json$Token$Kind $tmp55 = *(&local6);
*(&local5) = $tmp55;
org$frostlang$json$Token$Kind $tmp56 = *(&local5);
org$frostlang$json$Token$Kind$wrapper* $tmp57;
$tmp57 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp57->value = $tmp56;
ITable* $tmp58 = ((frost$core$Equatable*) $tmp52)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Bit $tmp61 = $tmp59(((frost$core$Equatable*) $tmp52), ((frost$core$Equatable*) $tmp57));
bool $tmp62 = $tmp61.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
if ($tmp62) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:42
org$frostlang$json$Lexer** $tmp63 = &param0->lexer;
org$frostlang$json$Lexer* $tmp64 = *$tmp63;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp65 = &$tmp64->dfa;
org$frostlang$plex$runtime$DFA* $tmp66 = *$tmp65;
org$frostlang$plex$runtime$RawToken $tmp67 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp66);
*(&local7) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp68 = *(&local7);
frost$core$Int $tmp69 = $tmp68.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp70 = &(&local9)->$rawValue;
*$tmp70 = $tmp69;
org$frostlang$json$Token$Kind $tmp71 = *(&local9);
*(&local8) = $tmp71;
org$frostlang$json$Token$Kind $tmp72 = *(&local8);
org$frostlang$plex$runtime$RawToken $tmp73 = *(&local7);
frost$core$String$Index $tmp74 = $tmp73.start;
org$frostlang$plex$runtime$RawToken $tmp75 = *(&local7);
frost$core$String$Index $tmp76 = $tmp75.end;
org$frostlang$plex$runtime$RawToken $tmp77 = *(&local7);
frost$core$Int $tmp78 = $tmp77.line;
org$frostlang$plex$runtime$RawToken $tmp79 = *(&local7);
frost$core$Int $tmp80 = $tmp79.column;
org$frostlang$json$Position $tmp81 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp78, $tmp80);
org$frostlang$json$Token $tmp82 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp72, $tmp74, $tmp76, $tmp81);
*(&local4) = $tmp82;
goto block7;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:44
org$frostlang$json$Token $tmp83 = *(&local4);
return $tmp83;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp84 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp85 = *$tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {!$tmp85.nonnull};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block1; else goto block2;
block2:;
frost$core$Int $tmp88 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s89, $tmp88);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp90 = &param0->pushbackToken;
*$tmp90 = ((org$frostlang$json$Token$nullable) { param1, true });
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:55
org$frostlang$json$Token $tmp91 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp91;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:56
org$frostlang$json$Token $tmp92 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:56:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp93 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp94 = *$tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {!$tmp94.nonnull};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block2; else goto block3;
block3:;
frost$core$Int $tmp97 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s98, $tmp97);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp99 = &param0->pushbackToken;
*$tmp99 = ((org$frostlang$json$Token$nullable) { $tmp92, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:57
org$frostlang$json$Token $tmp100 = *(&local0);
return $tmp100;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp101 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp102 = *(&local0);
org$frostlang$json$Token$Kind $tmp103 = $tmp102.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp104->value = $tmp103;
org$frostlang$json$Token$Kind$wrapper* $tmp105;
$tmp105 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp105->value = param1;
ITable* $tmp106 = ((frost$core$Equatable*) $tmp104)->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Bit $tmp109 = $tmp107(((frost$core$Equatable*) $tmp104), ((frost$core$Equatable*) $tmp105));
bool $tmp110 = $tmp109.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp105)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp104)));
if ($tmp110) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp111 = *(&local0);
return ((org$frostlang$json$Token$nullable) { $tmp111, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp112 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp113 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp114 = *$tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {!$tmp114.nonnull};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block4; else goto block5;
block5:;
frost$core$Int $tmp117 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s118, $tmp117);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp119 = &param0->pushbackToken;
*$tmp119 = ((org$frostlang$json$Token$nullable) { $tmp112, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp120 = &param0->source;
frost$core$String* $tmp121 = *$tmp120;
frost$core$String$Index $tmp122 = param1.start;
frost$core$String$Index $tmp123 = param1.end;
frost$core$Bit $tmp124 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp125 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp122, $tmp123, $tmp124);
frost$core$String* $tmp126 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp121, $tmp125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
return $tmp126;

}
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$Array* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:77
frost$core$Int $tmp127 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp128 = &(&local1)->$rawValue;
*$tmp128 = $tmp127;
org$frostlang$json$Token$Kind $tmp129 = *(&local1);
*(&local0) = $tmp129;
org$frostlang$json$Token$Kind $tmp130 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:77:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp131 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp132 = *(&local3);
org$frostlang$json$Token$Kind $tmp133 = $tmp132.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp134;
$tmp134 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp134->value = $tmp133;
org$frostlang$json$Token$Kind$wrapper* $tmp135;
$tmp135 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp135->value = $tmp130;
ITable* $tmp136 = ((frost$core$Equatable*) $tmp134)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Bit $tmp139 = $tmp137(((frost$core$Equatable*) $tmp134), ((frost$core$Equatable*) $tmp135));
bool $tmp140 = $tmp139.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp135)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp134)));
if ($tmp140) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp141 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp141, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp142 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp143 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp144 = *$tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {!$tmp144.nonnull};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block8; else goto block9;
block9:;
frost$core$Int $tmp147 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s148, $tmp147);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp149 = &param0->pushbackToken;
*$tmp149 = ((org$frostlang$json$Token$nullable) { $tmp142, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp150 = *(&local2);
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150.nonnull};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:78
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp153 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp154 = (frost$core$Int) {5u};
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp155 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp156 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp155, $tmp156);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT($tmp153, $tmp154, ((frost$collections$ListView*) $tmp155));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return $tmp153;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:80
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp157 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp157);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$collections$Array* $tmp158 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local4) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:81
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:82
frost$collections$Array* $tmp159 = *(&local4);
frost$json$JSON* $tmp160 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp159, ((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:83
org$frostlang$json$Token $tmp161 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp162 = $tmp161.kind;
frost$core$Int $tmp163 = $tmp162.$rawValue;
frost$core$Int $tmp164 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:85
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp170 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp171 = (frost$core$Int) {5u};
frost$collections$Array* $tmp172 = *(&local4);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT($tmp170, $tmp171, ((frost$collections$ListView*) $tmp172));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$collections$Array* $tmp173 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp170;
block14:;
frost$core$Int $tmp174 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp175 = $tmp163.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 == $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:91
frost$core$Int $tmp180 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s181, $tmp180, &$s182);
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
frost$core$Int $tmp183 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp184 = &(&local1)->$rawValue;
*$tmp184 = $tmp183;
org$frostlang$json$Token$Kind $tmp185 = *(&local1);
*(&local0) = $tmp185;
org$frostlang$json$Token$Kind $tmp186 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:99:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
org$frostlang$json$Token $tmp187 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = $tmp187;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
org$frostlang$json$Token $tmp188 = *(&local3);
org$frostlang$json$Token$Kind $tmp189 = $tmp188.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp190;
$tmp190 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp190->value = $tmp189;
org$frostlang$json$Token$Kind$wrapper* $tmp191;
$tmp191 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp191->value = $tmp186;
ITable* $tmp192 = ((frost$core$Equatable*) $tmp190)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
frost$core$Bit $tmp195 = $tmp193(((frost$core$Equatable*) $tmp190), ((frost$core$Equatable*) $tmp191));
bool $tmp196 = $tmp195.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp191)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp190)));
if ($tmp196) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
org$frostlang$json$Token $tmp197 = *(&local3);
*(&local2) = ((org$frostlang$json$Token$nullable) { $tmp197, true });
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
org$frostlang$json$Token $tmp198 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
org$frostlang$json$Token$nullable* $tmp199 = &param0->pushbackToken;
org$frostlang$json$Token$nullable $tmp200 = *$tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {!$tmp200.nonnull};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block8; else goto block9;
block9:;
frost$core$Int $tmp203 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s204, $tmp203);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
org$frostlang$json$Token$nullable* $tmp205 = &param0->pushbackToken;
*$tmp205 = ((org$frostlang$json$Token$nullable) { $tmp198, true });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
org$frostlang$json$Token$nullable $tmp206 = *(&local2);
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206.nonnull};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:100
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp209 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp210 = (frost$core$Int) {4u};
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp211 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp211);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp209, $tmp210, ((frost$collections$MapView*) $tmp211));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
return $tmp209;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:102
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp212 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp212);
*(&local4) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$collections$HashMap* $tmp213 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local4) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:103
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:104
// begin inline call to method frost.json.JSONParser.string():frost.core.String from JSONParser.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
org$frostlang$json$Token $tmp214 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local5) = $tmp214;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp215 = *(&local5);
org$frostlang$json$Token$Kind $tmp216 = $tmp215.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp217->value = $tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp219 = &(&local7)->$rawValue;
*$tmp219 = $tmp218;
org$frostlang$json$Token$Kind $tmp220 = *(&local7);
*(&local6) = $tmp220;
org$frostlang$json$Token$Kind $tmp221 = *(&local6);
org$frostlang$json$Token$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp222->value = $tmp221;
ITable* $tmp223 = ((frost$core$Equatable*) $tmp217)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[1];
frost$core$Bit $tmp226 = $tmp224(((frost$core$Equatable*) $tmp217), ((frost$core$Equatable*) $tmp222));
bool $tmp227 = $tmp226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
if ($tmp227) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp228 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp229 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp230 = &param0->source;
frost$core$String* $tmp231 = *$tmp230;
frost$core$String$Index $tmp232 = $tmp229.start;
frost$core$String$Index $tmp233 = $tmp229.end;
frost$core$Bit $tmp234 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp235 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp232, $tmp233, $tmp234);
frost$core$String* $tmp236 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp231, $tmp235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s238, $tmp236);
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, &$s240);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s241, $tmp228, $tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp242 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp243 = &param0->source;
frost$core$String* $tmp244 = *$tmp243;
frost$core$String$Index $tmp245 = $tmp242.start;
frost$core$String$Index $tmp246 = $tmp242.end;
frost$core$Bit $tmp247 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp248 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp245, $tmp246, $tmp247);
frost$core$String* $tmp249 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp244, $tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$String* $tmp250 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local8) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp251 = *(&local8);
frost$core$String* $tmp252 = *(&local8);
frost$core$String* $tmp253 = *(&local8);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp254 = (frost$core$Int) {0u};
frost$core$String$Index $tmp255 = frost$core$String$Index$init$frost$core$Int($tmp254);
frost$core$String$Index $tmp256 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp252, $tmp255);
frost$core$String* $tmp257 = *(&local8);
frost$core$String* $tmp258 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp259 = &$tmp258->_length;
frost$core$Int $tmp260 = *$tmp259;
frost$core$String$Index $tmp261 = frost$core$String$Index$init$frost$core$Int($tmp260);
frost$core$String$Index $tmp262 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp257, $tmp261);
frost$core$Bit $tmp263 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp264 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp256, $tmp262, $tmp263);
frost$core$String* $tmp265 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp251, $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$String* $tmp266 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local8) = ((frost$core$String*) NULL);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$String* $tmp267 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local9) = $tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:105
org$frostlang$json$Token $tmp268 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local10) = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:106
org$frostlang$json$Token $tmp269 = *(&local10);
org$frostlang$json$Token$Kind $tmp270 = $tmp269.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp271->value = $tmp270;
frost$core$Int $tmp272 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp273 = &(&local12)->$rawValue;
*$tmp273 = $tmp272;
org$frostlang$json$Token$Kind $tmp274 = *(&local12);
*(&local11) = $tmp274;
org$frostlang$json$Token$Kind $tmp275 = *(&local11);
org$frostlang$json$Token$Kind$wrapper* $tmp276;
$tmp276 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp276->value = $tmp275;
ITable* $tmp277 = ((frost$core$Equatable*) $tmp271)->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[1];
frost$core$Bit $tmp280 = $tmp278(((frost$core$Equatable*) $tmp271), ((frost$core$Equatable*) $tmp276));
bool $tmp281 = $tmp280.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp276)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp271)));
if ($tmp281) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:107
frost$core$Int $tmp282 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:109
frost$collections$HashMap* $tmp285 = *(&local4);
frost$core$String* $tmp286 = *(&local9);
frost$json$JSON* $tmp287 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp285, ((frost$collections$HashKey*) $tmp286), ((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:110
org$frostlang$json$Token $tmp288 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
org$frostlang$json$Token$Kind $tmp289 = $tmp288.kind;
frost$core$Int $tmp290 = $tmp289.$rawValue;
frost$core$Int $tmp291 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
bool $tmp294 = $tmp292 == $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:112
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp297 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp298 = (frost$core$Int) {4u};
frost$collections$HashMap* $tmp299 = *(&local4);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT($tmp297, $tmp298, ((frost$collections$MapView*) $tmp299));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$String* $tmp300 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$HashMap* $tmp301 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local4) = ((frost$collections$HashMap*) NULL);
return $tmp297;
block25:;
frost$core$Int $tmp302 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp303 = $tmp290.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:115
frost$core$String* $tmp308 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:118
frost$core$Int $tmp309 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s310, $tmp309, &$s311);
abort(); // unreachable
block23:;
frost$core$String* $tmp312 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
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
org$frostlang$json$Token $tmp313 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp313;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
org$frostlang$json$Token $tmp314 = *(&local0);
org$frostlang$json$Token$Kind $tmp315 = $tmp314.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp316;
$tmp316 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp316->value = $tmp315;
frost$core$Int $tmp317 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp318 = &(&local2)->$rawValue;
*$tmp318 = $tmp317;
org$frostlang$json$Token$Kind $tmp319 = *(&local2);
*(&local1) = $tmp319;
org$frostlang$json$Token$Kind $tmp320 = *(&local1);
org$frostlang$json$Token$Kind$wrapper* $tmp321;
$tmp321 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp321->value = $tmp320;
ITable* $tmp322 = ((frost$core$Equatable*) $tmp316)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[1];
frost$core$Bit $tmp325 = $tmp323(((frost$core$Equatable*) $tmp316), ((frost$core$Equatable*) $tmp321));
bool $tmp326 = $tmp325.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp316)));
if ($tmp326) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
frost$core$Int $tmp327 = (frost$core$Int) {128u};
org$frostlang$json$Token $tmp328 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp329 = &param0->source;
frost$core$String* $tmp330 = *$tmp329;
frost$core$String$Index $tmp331 = $tmp328.start;
frost$core$String$Index $tmp332 = $tmp328.end;
frost$core$Bit $tmp333 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp334 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp331, $tmp332, $tmp333);
frost$core$String* $tmp335 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp330, $tmp334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s337, $tmp335);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp336, &$s339);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, $tmp327, $tmp338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
org$frostlang$json$Token $tmp341 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp342 = &param0->source;
frost$core$String* $tmp343 = *$tmp342;
frost$core$String$Index $tmp344 = $tmp341.start;
frost$core$String$Index $tmp345 = $tmp341.end;
frost$core$Bit $tmp346 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp347 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp344, $tmp345, $tmp346);
frost$core$String* $tmp348 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp343, $tmp347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$String* $tmp349 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local3) = $tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
frost$core$String* $tmp350 = *(&local3);
frost$core$String* $tmp351 = *(&local3);
frost$core$String* $tmp352 = *(&local3);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp353 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp354 = &(&local5)->value;
*$tmp354 = $tmp353;
frost$core$String$Index $tmp355 = *(&local5);
*(&local4) = $tmp355;
frost$core$String$Index $tmp356 = *(&local4);
frost$core$String$Index $tmp357 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp351, $tmp356);
frost$core$String* $tmp358 = *(&local3);
frost$core$String* $tmp359 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp360 = &$tmp359->_length;
frost$core$Int $tmp361 = *$tmp360;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp362 = &(&local7)->value;
*$tmp362 = $tmp361;
frost$core$String$Index $tmp363 = *(&local7);
*(&local6) = $tmp363;
frost$core$String$Index $tmp364 = *(&local6);
frost$core$String$Index $tmp365 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp358, $tmp364);
frost$core$Bit $tmp366 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp367 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp357, $tmp365, $tmp366);
frost$core$String* $tmp368 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp350, $tmp367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$String* $tmp369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local3) = ((frost$core$String*) NULL);
return $tmp368;

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
org$frostlang$json$Token $tmp370 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = $tmp370;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:137
org$frostlang$json$Token $tmp371 = *(&local0);
org$frostlang$json$Token$Kind $tmp372 = $tmp371.kind;
frost$core$Int $tmp373 = $tmp372.$rawValue;
frost$core$Int $tmp374 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:138:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374.value;
bool $tmp377 = $tmp375 == $tmp376;
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:139
frost$json$JSON* $tmp380 = frost$json$JSONParser$map$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
return $tmp380;
block3:;
frost$core$Int $tmp381 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:141:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp382 = $tmp373.value;
int64_t $tmp383 = $tmp381.value;
bool $tmp384 = $tmp382 == $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:142
frost$json$JSON* $tmp387 = frost$json$JSONParser$list$R$frost$json$JSON(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
return $tmp387;
block6:;
frost$core$Int $tmp388 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:144:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp389 = $tmp373.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 == $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:145
org$frostlang$json$Token $tmp394 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:145:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp395 = &param0->source;
frost$core$String* $tmp396 = *$tmp395;
frost$core$String$Index $tmp397 = $tmp394.start;
frost$core$String$Index $tmp398 = $tmp394.end;
frost$core$Bit $tmp399 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp400 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp397, $tmp398, $tmp399);
frost$core$String* $tmp401 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp396, $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$String* $tmp402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local1) = $tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:146
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp403 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp404 = (frost$core$Int) {2u};
frost$core$String* $tmp405 = *(&local1);
frost$core$String* $tmp406 = *(&local1);
frost$core$String* $tmp407 = *(&local1);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:146:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp408 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp409 = &(&local3)->value;
*$tmp409 = $tmp408;
frost$core$String$Index $tmp410 = *(&local3);
*(&local2) = $tmp410;
frost$core$String$Index $tmp411 = *(&local2);
frost$core$String$Index $tmp412 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp406, $tmp411);
frost$core$String* $tmp413 = *(&local1);
frost$core$String* $tmp414 = *(&local1);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:146:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp415 = &$tmp414->_length;
frost$core$Int $tmp416 = *$tmp415;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp417 = &(&local5)->value;
*$tmp417 = $tmp416;
frost$core$String$Index $tmp418 = *(&local5);
*(&local4) = $tmp418;
frost$core$String$Index $tmp419 = *(&local4);
frost$core$String$Index $tmp420 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index($tmp413, $tmp419);
frost$core$Bit $tmp421 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp422 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp412, $tmp420, $tmp421);
frost$core$String* $tmp423 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp405, $tmp422);
frost$json$JSON$init$frost$core$Int$frost$core$String($tmp403, $tmp404, $tmp423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$String* $tmp424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local1) = ((frost$core$String*) NULL);
return $tmp403;
block9:;
frost$core$Int $tmp425 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:148:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp426 = $tmp373.value;
int64_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 == $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:149
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp431 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp432 = (frost$core$Int) {0u};
org$frostlang$json$Token $tmp433 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:149:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp434 = &param0->source;
frost$core$String* $tmp435 = *$tmp434;
frost$core$String$Index $tmp436 = $tmp433.start;
frost$core$String$Index $tmp437 = $tmp433.end;
frost$core$Bit $tmp438 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp439 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp436, $tmp437, $tmp438);
frost$core$String* $tmp440 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp435, $tmp439);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSONParser.frost:149:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp441 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp440);
*(&local7) = $tmp441;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp442 = *(&local7);
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442.nonnull};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp445 = *(&local7);
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445.nonnull};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block23; else goto block24;
block24:;
frost$core$Int $tmp448 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s449, $tmp448, &$s450);
abort(); // unreachable
block23:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp451 = ((frost$core$Int64) $tmp445.value).value;
frost$core$Int $tmp452 = (frost$core$Int) {((int64_t) $tmp451)};
*(&local6) = ((frost$core$Int$nullable) { $tmp452, true });
goto block20;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local6) = ((frost$core$Int$nullable) { .nonnull = false });
goto block20;
block20:;
frost$core$Int$nullable $tmp453 = *(&local6);
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453.nonnull};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block26; else goto block27;
block27:;
frost$core$Int $tmp456 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s457, $tmp456, &$s458);
abort(); // unreachable
block26:;
frost$json$JSON$init$frost$core$Int$frost$core$Int($tmp431, $tmp432, ((frost$core$Int) $tmp453.value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
return $tmp431;
block17:;
frost$core$Int $tmp459 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:151:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp460 = $tmp373.value;
int64_t $tmp461 = $tmp459.value;
bool $tmp462 = $tmp460 == $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:152
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp465 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp466 = (frost$core$Int) {1u};
org$frostlang$json$Token $tmp467 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:152:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
frost$core$String** $tmp468 = &param0->source;
frost$core$String* $tmp469 = *$tmp468;
frost$core$String$Index $tmp470 = $tmp467.start;
frost$core$String$Index $tmp471 = $tmp467.end;
frost$core$Bit $tmp472 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp473 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp470, $tmp471, $tmp472);
frost$core$String* $tmp474 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp469, $tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// begin inline call to function frost.core.String.get_asReal64():frost.core.Real64? from JSONParser.frost:152:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Real64 $tmp475;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp475, $tmp474);
frost$core$Bit $tmp476 = (frost$core$Bit) {((frost$core$Real64$nullable) { $tmp475, true }).nonnull};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block33; else goto block34;
block34:;
frost$core$Int $tmp478 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s479, $tmp478, &$s480);
abort(); // unreachable
block33:;
frost$json$JSON$init$frost$core$Int$frost$core$Real64($tmp465, $tmp466, ((frost$core$Real64) ((frost$core$Real64$nullable) { $tmp475, true }).value));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
return $tmp465;
block29:;
frost$core$Int $tmp481 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:154:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp482 = $tmp373.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 == $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:155
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp487 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp488 = (frost$core$Int) {3u};
frost$core$Bit $tmp489 = (frost$core$Bit) {true};
frost$json$JSON$init$frost$core$Int$frost$core$Bit($tmp487, $tmp488, $tmp489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
return $tmp487;
block36:;
frost$core$Int $tmp490 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:157:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp491 = $tmp373.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 == $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:158
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp496 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp497 = (frost$core$Int) {3u};
frost$core$Bit $tmp498 = (frost$core$Bit) {false};
frost$json$JSON$init$frost$core$Int$frost$core$Bit($tmp496, $tmp497, $tmp498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
return $tmp496;
block39:;
frost$core$Int $tmp499 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:160:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp500 = $tmp373.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 == $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:161
FROST_ASSERT(32 == sizeof(frost$json$JSON));
frost$json$JSON* $tmp505 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
frost$core$Int $tmp506 = (frost$core$Int) {6u};
frost$json$JSON$init$frost$core$Int($tmp505, $tmp506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
return $tmp505;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:164
frost$core$Int $tmp507 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s508, $tmp507);
abort(); // unreachable
block1:;
goto block44;
block44:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s509));
frost$core$String** $tmp510 = &param0->source;
frost$core$String* $tmp511 = *$tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$String** $tmp512 = &param0->source;
*$tmp512 = &$s513;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:17
FROST_ASSERT(40 == sizeof(org$frostlang$json$Lexer));
org$frostlang$json$Lexer* $tmp514 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init($tmp514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
org$frostlang$json$Lexer** $tmp515 = &param0->lexer;
org$frostlang$json$Lexer* $tmp516 = *$tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$json$Lexer** $tmp517 = &param0->lexer;
*$tmp517 = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:20
org$frostlang$json$Token$nullable* $tmp518 = &param0->pushbackToken;
*$tmp518 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp519 = &param0->source;
frost$core$String* $tmp520 = *$tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
org$frostlang$json$Lexer** $tmp521 = &param0->lexer;
org$frostlang$json$Lexer* $tmp522 = *$tmp521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
return;

}

