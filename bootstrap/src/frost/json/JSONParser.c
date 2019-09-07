#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
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

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn15)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn22)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn23)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn42)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, 6711150264062823990, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 87, -5041636826801306509, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6c\x69\x73\x74", 20, -1806137182227931949, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, 8276871105769291383, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6d\x61\x70", 19, -1945586642327999461, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, -1323176863814470760, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 73, 6457620045082740501, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -5044497825930849948, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 9069627162064264103, NULL };

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(frost$json$JSONParser* param0, frost$core$String* param1) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
org$frostlang$json$Lexer** _10;
org$frostlang$json$Lexer* _11;
org$frostlang$plex$runtime$DFA* _14;
frost$core$Int _15;
frost$core$Int*** _16;
frost$core$Int** _17;
frost$core$Int** _18;
frost$core$Int* _19;
frost$core$Object* _21;
org$frostlang$plex$runtime$DFA** _23;
org$frostlang$plex$runtime$DFA* _24;
frost$core$Object* _25;
org$frostlang$plex$runtime$DFA** _27;
frost$core$Object* _29;
frost$json$JSON* _33;
frost$json$JSON* _34;
frost$core$Object* _35;
frost$core$Object* _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:28
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->source;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:29
_10 = &param0->lexer;
_11 = *_10;
// begin inline call to method org.frostlang.json.Lexer.start(source:frost.core.String) from JSONParser.frost:29:20
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:20
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
_14 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
_15 = (frost$core$Int) {31u};
_16 = &_11->transitions;
_17 = *_16;
_18 = &_11->accepts;
_19 = *_18;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(_14, param1, _15, _17, _19);
_21 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &_11->dfa;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &_11->dfa;
*_27 = _14;
_29 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:30
_33 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
_34 = _33;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_37);
return _34;

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
org$frostlang$json$Token$nullable* _1;
org$frostlang$json$Token$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$json$Token$nullable* _8;
org$frostlang$json$Token$nullable _9;
org$frostlang$json$Token$nullable* _12;
org$frostlang$json$Token$nullable _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
org$frostlang$json$Token _23;
org$frostlang$json$Lexer** _26;
org$frostlang$json$Lexer* _27;
org$frostlang$plex$runtime$DFA** _30;
org$frostlang$plex$runtime$DFA* _31;
org$frostlang$plex$runtime$RawToken _32;
org$frostlang$plex$runtime$RawToken _35;
frost$core$Int _36;
frost$core$Int* _39;
org$frostlang$json$Token$Kind _41;
org$frostlang$json$Token$Kind _44;
org$frostlang$plex$runtime$RawToken _45;
frost$core$String$Index _46;
org$frostlang$plex$runtime$RawToken _47;
frost$core$String$Index _48;
org$frostlang$plex$runtime$RawToken _49;
frost$core$Int _50;
org$frostlang$plex$runtime$RawToken _51;
frost$core$Int _52;
org$frostlang$json$Position _53;
org$frostlang$json$Token _54;
org$frostlang$json$Token _59;
org$frostlang$json$Token$Kind _60;
frost$core$Equatable* _61;
frost$core$Equatable* _62;
frost$core$Int _63;
frost$core$Int* _66;
org$frostlang$json$Token$Kind _68;
org$frostlang$json$Token$Kind _71;
frost$core$Equatable* _72;
$fn2 _73;
frost$core$Bit _74;
bool _75;
frost$core$Object* _76;
frost$core$Object* _78;
org$frostlang$json$Lexer** _82;
org$frostlang$json$Lexer* _83;
org$frostlang$plex$runtime$DFA** _86;
org$frostlang$plex$runtime$DFA* _87;
org$frostlang$plex$runtime$RawToken _88;
org$frostlang$plex$runtime$RawToken _91;
frost$core$Int _92;
frost$core$Int* _95;
org$frostlang$json$Token$Kind _97;
org$frostlang$json$Token$Kind _100;
org$frostlang$plex$runtime$RawToken _101;
frost$core$String$Index _102;
org$frostlang$plex$runtime$RawToken _103;
frost$core$String$Index _104;
org$frostlang$plex$runtime$RawToken _105;
frost$core$Int _106;
org$frostlang$plex$runtime$RawToken _107;
frost$core$Int _108;
org$frostlang$json$Position _109;
org$frostlang$json$Token _110;
org$frostlang$json$Token _115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:35
_1 = &param0->pushbackToken;
_2 = *_1;
_3 = _2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:36
_8 = &param0->pushbackToken;
_9 = *_8;
*(&local0) = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:37
_12 = &param0->pushbackToken;
*_12 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:38
_15 = *(&local0);
_16 = _15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block4;
block4:;
_20 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _20, &$s4);
abort(); // unreachable
block3:;
_23 = ((org$frostlang$json$Token) _15.value);
return _23;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:40
_26 = &param0->lexer;
_27 = *_26;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:40:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
_30 = &_27->dfa;
_31 = *_30;
_32 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(_31);
*(&local1) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
_35 = *(&local1);
_36 = _35.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_39 = &(&local3)->$rawValue;
*_39 = _36;
_41 = *(&local3);
*(&local2) = _41;
_44 = *(&local2);
_45 = *(&local1);
_46 = _45.start;
_47 = *(&local1);
_48 = _47.end;
_49 = *(&local1);
_50 = _49.line;
_51 = *(&local1);
_52 = _51.column;
_53 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int(_50, _52);
_54 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(_44, _46, _48, _53);
*(&local4) = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:41
goto block7;
block7:;
_59 = *(&local4);
_60 = _59.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp5;
$tmp5 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp5->value = _60;
_61 = ((frost$core$Equatable*) $tmp5);
_62 = _61;
_63 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_66 = &(&local6)->$rawValue;
*_66 = _63;
_68 = *(&local6);
*(&local5) = _68;
_71 = *(&local5);
org$frostlang$json$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp6->value = _71;
_72 = ((frost$core$Equatable*) $tmp6);
ITable* $tmp7 = _62->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_73 = $tmp7->methods[0];
_74 = _73(_62, _72);
_75 = _74.value;
_76 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_78);
if (_75) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:42
_82 = &param0->lexer;
_83 = *_82;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
_86 = &_83->dfa;
_87 = *_86;
_88 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(_87);
*(&local7) = _88;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
_91 = *(&local7);
_92 = _91.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_95 = &(&local9)->$rawValue;
*_95 = _92;
_97 = *(&local9);
*(&local8) = _97;
_100 = *(&local8);
_101 = *(&local7);
_102 = _101.start;
_103 = *(&local7);
_104 = _103.end;
_105 = *(&local7);
_106 = _105.line;
_107 = *(&local7);
_108 = _107.column;
_109 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int(_106, _108);
_110 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(_100, _102, _104, _109);
*(&local4) = _110;
goto block7;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:44
_115 = *(&local4);
return _115;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

org$frostlang$json$Token$nullable* _1;
org$frostlang$json$Token$nullable _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
org$frostlang$json$Token$nullable _11;
org$frostlang$json$Token$nullable* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_1 = &param0->pushbackToken;
_2 = *_1;
_3 = !_2.nonnull;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s8, _7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_11 = ((org$frostlang$json$Token$nullable) { param1, true });
_12 = &param0->pushbackToken;
*_12 = _11;
return;

}
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(frost$json$JSONParser* param0) {

org$frostlang$json$Token local0;
org$frostlang$json$Token _1;
org$frostlang$json$Token _4;
org$frostlang$json$Token$nullable* _7;
org$frostlang$json$Token$nullable _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _13;
org$frostlang$json$Token$nullable _17;
org$frostlang$json$Token$nullable* _18;
org$frostlang$json$Token _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:55
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:56
_4 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:56:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_7 = &param0->pushbackToken;
_8 = *_7;
_9 = !_8.nonnull;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block3:;
_13 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s9, _13);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_17 = ((org$frostlang$json$Token$nullable) { _4, true });
_18 = &param0->pushbackToken;
*_18 = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:57
_22 = *(&local0);
return _22;

}
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(frost$json$JSONParser* param0, org$frostlang$json$Token$Kind param1) {

org$frostlang$json$Token local0;
org$frostlang$json$Token _1;
org$frostlang$json$Token _4;
org$frostlang$json$Token$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Equatable* _8;
$fn10 _9;
frost$core$Bit _10;
bool _11;
frost$core$Object* _12;
frost$core$Object* _14;
org$frostlang$json$Token _18;
org$frostlang$json$Token$nullable _19;
org$frostlang$json$Token _22;
org$frostlang$json$Token$nullable* _25;
org$frostlang$json$Token$nullable _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
org$frostlang$json$Token$nullable _35;
org$frostlang$json$Token$nullable* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp11->value = _5;
_6 = ((frost$core$Equatable*) $tmp11);
_7 = _6;
org$frostlang$json$Token$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp12->value = param1;
_8 = ((frost$core$Equatable*) $tmp12);
ITable* $tmp13 = _7->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
_9 = $tmp13->methods[0];
_10 = _9(_7, _8);
_11 = _10.value;
_12 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_18 = *(&local0);
_19 = ((org$frostlang$json$Token$nullable) { _18, true });
return _19;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_22 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_25 = &param0->pushbackToken;
_26 = *_25;
_27 = !_26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block5:;
_31 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _31);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_35 = ((org$frostlang$json$Token$nullable) { _22, true });
_36 = &param0->pushbackToken;
*_36 = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(frost$json$JSONParser* param0, org$frostlang$json$Token param1) {

frost$core$String** _1;
frost$core$String* _2;
frost$core$String$Index _3;
frost$core$String$Index _4;
frost$core$Bit _5;
frost$core$Range$LTfrost$core$String$Index$GT _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_1 = &param0->source;
_2 = *_1;
_3 = param1.start;
_4 = param1.end;
_5 = (frost$core$Bit) {false};
_6 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_3, _4, _5);
_7 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_2, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return _7;

}
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(frost$json$JSONParser* param0) {

org$frostlang$json$Token$Kind local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$nullable local2;
org$frostlang$json$Token local3;
frost$collections$Array* local4 = NULL;
frost$core$Int _1;
frost$core$Int* _4;
org$frostlang$json$Token$Kind _6;
org$frostlang$json$Token$Kind _9;
org$frostlang$json$Token _12;
org$frostlang$json$Token _15;
org$frostlang$json$Token$Kind _16;
frost$core$Equatable* _17;
frost$core$Equatable* _18;
frost$core$Equatable* _19;
$fn15 _20;
frost$core$Bit _21;
bool _22;
frost$core$Object* _23;
frost$core$Object* _25;
org$frostlang$json$Token _29;
org$frostlang$json$Token$nullable _30;
org$frostlang$json$Token _34;
org$frostlang$json$Token$nullable* _37;
org$frostlang$json$Token$nullable _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
org$frostlang$json$Token$nullable _47;
org$frostlang$json$Token$nullable* _48;
org$frostlang$json$Token$nullable _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$json$JSON* _60;
frost$core$Int _61;
frost$collections$Array* _62;
frost$collections$Array* _63;
frost$core$Int _64;
frost$collections$ListView* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$collections$Array* _76;
frost$collections$Array* _77;
frost$core$Object* _80;
frost$collections$Array* _82;
frost$core$Object* _83;
frost$core$Object* _86;
frost$collections$Array* _91;
frost$collections$Array* _92;
frost$json$JSON* _93;
frost$core$Object* _94;
frost$core$Object* _96;
org$frostlang$json$Token _99;
org$frostlang$json$Token$Kind _100;
frost$core$Int _101;
frost$core$Int _102;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _110;
frost$json$JSON* _113;
frost$core$Int _114;
frost$collections$Array* _115;
frost$collections$ListView* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$collections$Array* _122;
frost$core$Object* _123;
frost$core$Int _127;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
frost$core$Int _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:77
_1 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:77:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
_12 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
_15 = *(&local3);
_16 = _15.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp16;
$tmp16 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp16->value = _16;
_17 = ((frost$core$Equatable*) $tmp16);
_18 = _17;
org$frostlang$json$Token$Kind$wrapper* $tmp17;
$tmp17 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp17->value = _9;
_19 = ((frost$core$Equatable*) $tmp17);
ITable* $tmp18 = _18->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp18 = $tmp18->next;
}
_20 = $tmp18->methods[0];
_21 = _20(_18, _19);
_22 = _21.value;
_23 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_25);
if (_22) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_29 = *(&local3);
_30 = ((org$frostlang$json$Token$nullable) { _29, true });
*(&local2) = _30;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_34 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_37 = &param0->pushbackToken;
_38 = *_37;
_39 = !_38.nonnull;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block8; else goto block9;
block9:;
_43 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s19, _43);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_47 = ((org$frostlang$json$Token$nullable) { _34, true });
_48 = &param0->pushbackToken;
*_48 = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
_54 = *(&local2);
_55 = _54.nonnull;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:78
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_60 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_61 = (frost$core$Int) {5u};
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_62 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_63 = _62;
_64 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_63, _64);
_66 = ((frost$collections$ListView*) _62);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(_60, _61, _66);
_68 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_72);
return _60;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:80
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_76 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_77 = _76;
frost$collections$Array$init(_77);
*(&local4) = ((frost$collections$Array*) NULL);
_80 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = *(&local4);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local4) = _76;
_86 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_86);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:81
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:82
_91 = *(&local4);
_92 = _91;
_93 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
_94 = ((frost$core$Object*) _93);
frost$collections$Array$add$frost$collections$Array$T(_92, _94);
_96 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:83
_99 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
_100 = _99.kind;
_101 = _100.$rawValue;
_102 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_105 = _101.value;
_106 = _102.value;
_107 = _105 == _106;
_108 = (frost$core$Bit) {_107};
_110 = _108.value;
if (_110) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:85
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_113 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_114 = (frost$core$Int) {5u};
_115 = *(&local4);
_116 = ((frost$collections$ListView*) _115);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(_113, _114, _116);
_118 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = *(&local4);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local4) = ((frost$collections$Array*) NULL);
return _113;
block14:;
_127 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_130 = _101.value;
_131 = _127.value;
_132 = _130 == _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:91
_140 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _140, &$s21);
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
frost$core$Int _1;
frost$core$Int* _4;
org$frostlang$json$Token$Kind _6;
org$frostlang$json$Token$Kind _9;
org$frostlang$json$Token _12;
org$frostlang$json$Token _15;
org$frostlang$json$Token$Kind _16;
frost$core$Equatable* _17;
frost$core$Equatable* _18;
frost$core$Equatable* _19;
$fn22 _20;
frost$core$Bit _21;
bool _22;
frost$core$Object* _23;
frost$core$Object* _25;
org$frostlang$json$Token _29;
org$frostlang$json$Token$nullable _30;
org$frostlang$json$Token _34;
org$frostlang$json$Token$nullable* _37;
org$frostlang$json$Token$nullable _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
org$frostlang$json$Token$nullable _47;
org$frostlang$json$Token$nullable* _48;
org$frostlang$json$Token$nullable _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$json$JSON* _60;
frost$core$Int _61;
frost$collections$HashMap* _62;
frost$collections$HashMap* _63;
frost$collections$MapView* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$collections$HashMap* _75;
frost$collections$HashMap* _76;
frost$core$Object* _79;
frost$collections$HashMap* _81;
frost$core$Object* _82;
frost$core$Object* _85;
org$frostlang$json$Token _92;
org$frostlang$json$Token _95;
org$frostlang$json$Token$Kind _96;
frost$core$Equatable* _97;
frost$core$Equatable* _98;
frost$core$Int _99;
frost$core$Int* _102;
org$frostlang$json$Token$Kind _104;
org$frostlang$json$Token$Kind _107;
frost$core$Equatable* _108;
$fn23 _109;
frost$core$Bit _110;
bool _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Int _118;
org$frostlang$json$Token _119;
frost$core$String** _122;
frost$core$String* _123;
frost$core$String$Index _124;
frost$core$String$Index _125;
frost$core$Bit _126;
frost$core$Range$LTfrost$core$String$Index$GT _127;
frost$core$String* _128;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$String* _134;
frost$core$String* _135;
frost$core$Object* _137;
frost$core$Object* _139;
frost$core$Object* _141;
org$frostlang$json$Token _145;
frost$core$String** _148;
frost$core$String* _149;
frost$core$String$Index _150;
frost$core$String$Index _151;
frost$core$Bit _152;
frost$core$Range$LTfrost$core$String$Index$GT _153;
frost$core$String* _154;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _161;
frost$core$String* _163;
frost$core$Object* _164;
frost$core$Object* _167;
frost$core$String* _170;
frost$core$String* _171;
frost$core$String* _172;
frost$core$Int _175;
frost$core$String$Index _176;
frost$core$String$Index _178;
frost$core$String* _179;
frost$core$String* _180;
frost$core$Int* _183;
frost$core$Int _184;
frost$core$String$Index _185;
frost$core$String$Index _187;
frost$core$Bit _188;
frost$core$Range$LTfrost$core$String$Index$GT _189;
frost$core$String* _190;
frost$core$Object* _191;
frost$core$Object* _193;
frost$core$String* _195;
frost$core$Object* _196;
frost$core$Object* _201;
frost$core$String* _203;
frost$core$Object* _204;
frost$core$Object* _207;
org$frostlang$json$Token _210;
org$frostlang$json$Token _213;
org$frostlang$json$Token$Kind _214;
frost$core$Equatable* _215;
frost$core$Equatable* _216;
frost$core$Int _217;
frost$core$Int* _220;
org$frostlang$json$Token$Kind _222;
org$frostlang$json$Token$Kind _225;
frost$core$Equatable* _226;
$fn24 _227;
frost$core$Bit _228;
bool _229;
frost$core$Object* _230;
frost$core$Object* _232;
frost$core$Int _236;
frost$collections$HashMap* _240;
frost$collections$HashMap* _241;
frost$core$String* _242;
frost$collections$HashKey* _243;
frost$json$JSON* _244;
frost$core$Object* _245;
frost$core$Object* _247;
org$frostlang$json$Token _250;
org$frostlang$json$Token$Kind _251;
frost$core$Int _252;
frost$core$Int _253;
int64_t _256;
int64_t _257;
bool _258;
frost$core$Bit _259;
bool _261;
frost$json$JSON* _264;
frost$core$Int _265;
frost$collections$HashMap* _266;
frost$collections$MapView* _267;
frost$core$Object* _269;
frost$core$Object* _271;
frost$core$String* _273;
frost$core$Object* _274;
frost$collections$HashMap* _277;
frost$core$Object* _278;
frost$core$Int _282;
int64_t _285;
int64_t _286;
bool _287;
frost$core$Bit _288;
bool _290;
frost$core$String* _293;
frost$core$Object* _294;
frost$core$Int _299;
frost$core$String* _302;
frost$core$Object* _303;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:99
_1 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
// begin inline call to method frost.json.JSONParser.checkNext(kind:org.frostlang.json.Token.Kind):org.frostlang.json.Token? from JSONParser.frost:99:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
_12 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local3) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
_15 = *(&local3);
_16 = _15.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp25->value = _16;
_17 = ((frost$core$Equatable*) $tmp25);
_18 = _17;
org$frostlang$json$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp26->value = _9;
_19 = ((frost$core$Equatable*) $tmp26);
ITable* $tmp27 = _18->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
_20 = $tmp27->methods[0];
_21 = _20(_18, _19);
_22 = _21.value;
_23 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_25);
if (_22) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_29 = *(&local3);
_30 = ((org$frostlang$json$Token$nullable) { _29, true });
*(&local2) = _30;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_34 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_37 = &param0->pushbackToken;
_38 = *_37;
_39 = !_38.nonnull;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block8; else goto block9;
block9:;
_43 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s28, _43);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_47 = ((org$frostlang$json$Token$nullable) { _34, true });
_48 = &param0->pushbackToken;
*_48 = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
_54 = *(&local2);
_55 = _54.nonnull;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:100
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_60 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_61 = (frost$core$Int) {4u};
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_62 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_63 = _62;
frost$collections$HashMap$init(_63);
_65 = ((frost$collections$MapView*) _62);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(_60, _61, _65);
_67 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_71);
return _60;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:102
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_75 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_76 = _75;
frost$collections$HashMap$init(_76);
*(&local4) = ((frost$collections$HashMap*) NULL);
_79 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = *(&local4);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local4) = _75;
_85 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:103
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:104
// begin inline call to method frost.json.JSONParser.string():frost.core.String from JSONParser.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
_92 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local5) = _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
_95 = *(&local5);
_96 = _95.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp29->value = _96;
_97 = ((frost$core$Equatable*) $tmp29);
_98 = _97;
_99 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_102 = &(&local7)->$rawValue;
*_102 = _99;
_104 = *(&local7);
*(&local6) = _104;
_107 = *(&local6);
org$frostlang$json$Token$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp30->value = _107;
_108 = ((frost$core$Equatable*) $tmp30);
ITable* $tmp31 = _98->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
_109 = $tmp31->methods[1];
_110 = _109(_98, _108);
_111 = _110.value;
_112 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_114);
if (_111) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
_118 = (frost$core$Int) {128u};
_119 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_122 = &param0->source;
_123 = *_122;
_124 = _119.start;
_125 = _119.end;
_126 = (frost$core$Bit) {false};
_127 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_124, _125, _126);
_128 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_123, _127);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s32, _128);
_135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_134, &$s33);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _118, _135);
_137 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_141);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
_145 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_148 = &param0->source;
_149 = *_148;
_150 = _145.start;
_151 = _145.end;
_152 = (frost$core$Bit) {false};
_153 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_150, _151, _152);
_154 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_149, _153);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_157);
*(&local8) = ((frost$core$String*) NULL);
_161 = ((frost$core$Object*) _154);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local8);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local8) = _154;
_167 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_167);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
_170 = *(&local8);
_171 = *(&local8);
_172 = *(&local8);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_175 = (frost$core$Int) {0u};
_176 = frost$core$String$Index$init$frost$core$Int(_175);
_178 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_171, _176);
_179 = *(&local8);
_180 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_183 = &_180->_length;
_184 = *_183;
_185 = frost$core$String$Index$init$frost$core$Int(_184);
_187 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_179, _185);
_188 = (frost$core$Bit) {false};
_189 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_178, _187, _188);
_190 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_170, _189);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$ref$frost$core$Object$Q(_191);
_193 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_193);
_195 = *(&local8);
_196 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_196);
*(&local8) = ((frost$core$String*) NULL);
*(&local9) = ((frost$core$String*) NULL);
_201 = ((frost$core$Object*) _190);
frost$core$Frost$ref$frost$core$Object$Q(_201);
_203 = *(&local9);
_204 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_204);
*(&local9) = _190;
_207 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_207);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:105
_210 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local10) = _210;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:106
_213 = *(&local10);
_214 = _213.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp35->value = _214;
_215 = ((frost$core$Equatable*) $tmp35);
_216 = _215;
_217 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_220 = &(&local12)->$rawValue;
*_220 = _217;
_222 = *(&local12);
*(&local11) = _222;
_225 = *(&local11);
org$frostlang$json$Token$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp36->value = _225;
_226 = ((frost$core$Equatable*) $tmp36);
ITable* $tmp37 = _216->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
_227 = $tmp37->methods[1];
_228 = _227(_216, _226);
_229 = _228.value;
_230 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_230);
_232 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_232);
if (_229) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:107
_236 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _236, &$s39);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:109
_240 = *(&local4);
_241 = _240;
_242 = *(&local9);
_243 = ((frost$collections$HashKey*) _242);
_244 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
_245 = ((frost$core$Object*) _244);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_241, _243, _245);
_247 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_247);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:110
_250 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
_251 = _250.kind;
_252 = _251.$rawValue;
_253 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_256 = _252.value;
_257 = _253.value;
_258 = _256 == _257;
_259 = (frost$core$Bit) {_258};
_261 = _259.value;
if (_261) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:112
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_264 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_265 = (frost$core$Int) {4u};
_266 = *(&local4);
_267 = ((frost$collections$MapView*) _266);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(_264, _265, _267);
_269 = ((frost$core$Object*) _264);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_271);
_273 = *(&local9);
_274 = ((frost$core$Object*) _273);
frost$core$Frost$unref$frost$core$Object$Q(_274);
*(&local9) = ((frost$core$String*) NULL);
_277 = *(&local4);
_278 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_278);
*(&local4) = ((frost$collections$HashMap*) NULL);
return _264;
block25:;
_282 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_285 = _252.value;
_286 = _282.value;
_287 = _285 == _286;
_288 = (frost$core$Bit) {_287};
_290 = _288.value;
if (_290) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:115
_293 = *(&local9);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:118
_299 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _299, &$s41);
abort(); // unreachable
block23:;
_302 = *(&local9);
_303 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_303);
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
org$frostlang$json$Token _1;
org$frostlang$json$Token _4;
org$frostlang$json$Token$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Int _8;
frost$core$Int* _11;
org$frostlang$json$Token$Kind _13;
org$frostlang$json$Token$Kind _16;
frost$core$Equatable* _17;
$fn42 _18;
frost$core$Bit _19;
bool _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Int _27;
org$frostlang$json$Token _28;
frost$core$String** _31;
frost$core$String* _32;
frost$core$String$Index _33;
frost$core$String$Index _34;
frost$core$Bit _35;
frost$core$Range$LTfrost$core$String$Index$GT _36;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$String* _43;
frost$core$String* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
org$frostlang$json$Token _54;
frost$core$String** _57;
frost$core$String* _58;
frost$core$String$Index _59;
frost$core$String$Index _60;
frost$core$Bit _61;
frost$core$Range$LTfrost$core$String$Index$GT _62;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _70;
frost$core$String* _72;
frost$core$Object* _73;
frost$core$Object* _76;
frost$core$String* _79;
frost$core$String* _80;
frost$core$String* _81;
frost$core$Int _84;
frost$core$Int* _87;
frost$core$String$Index _89;
frost$core$String$Index _92;
frost$core$String$Index _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$Int* _99;
frost$core$Int _100;
frost$core$Int* _103;
frost$core$String$Index _105;
frost$core$String$Index _108;
frost$core$String$Index _110;
frost$core$Bit _111;
frost$core$Range$LTfrost$core$String$Index$GT _112;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$String* _118;
frost$core$Object* _119;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp43->value = _5;
_6 = ((frost$core$Equatable*) $tmp43);
_7 = _6;
_8 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_11 = &(&local2)->$rawValue;
*_11 = _8;
_13 = *(&local2);
*(&local1) = _13;
_16 = *(&local1);
org$frostlang$json$Token$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp44->value = _16;
_17 = ((frost$core$Equatable*) $tmp44);
ITable* $tmp45 = _7->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
_18 = $tmp45->methods[1];
_19 = _18(_7, _17);
_20 = _19.value;
_21 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
_27 = (frost$core$Int) {128u};
_28 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_31 = &param0->source;
_32 = *_31;
_33 = _28.start;
_34 = _28.end;
_35 = (frost$core$Bit) {false};
_36 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_33, _34, _35);
_37 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_32, _36);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, _37);
_44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_43, &$s47);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _27, _44);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_50);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
_54 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_57 = &param0->source;
_58 = *_57;
_59 = _54.start;
_60 = _54.end;
_61 = (frost$core$Bit) {false};
_62 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_59, _60, _61);
_63 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_58, _62);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local3) = ((frost$core$String*) NULL);
_70 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local3);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local3) = _63;
_76 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
_79 = *(&local3);
_80 = *(&local3);
_81 = *(&local3);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_84 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_87 = &(&local5)->value;
*_87 = _84;
_89 = *(&local5);
*(&local4) = _89;
_92 = *(&local4);
_94 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_80, _92);
_95 = *(&local3);
_96 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_99 = &_96->_length;
_100 = *_99;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_103 = &(&local7)->value;
*_103 = _100;
_105 = *(&local7);
*(&local6) = _105;
_108 = *(&local6);
_110 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_95, _108);
_111 = (frost$core$Bit) {false};
_112 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_94, _110, _111);
_113 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_79, _112);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = *(&local3);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local3) = ((frost$core$String*) NULL);
return _113;

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
org$frostlang$json$Token _1;
org$frostlang$json$Token _4;
org$frostlang$json$Token$Kind _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _15;
frost$json$JSON* _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Int _24;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$json$JSON* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
org$frostlang$json$Token _52;
frost$core$String** _55;
frost$core$String* _56;
frost$core$String$Index _57;
frost$core$String$Index _58;
frost$core$Bit _59;
frost$core$Range$LTfrost$core$String$Index$GT _60;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _68;
frost$core$String* _70;
frost$core$Object* _71;
frost$core$Object* _74;
frost$json$JSON* _77;
frost$core$Int _78;
frost$core$String* _79;
frost$core$String* _80;
frost$core$String* _81;
frost$core$Int _84;
frost$core$Int* _87;
frost$core$String$Index _89;
frost$core$String$Index _92;
frost$core$String$Index _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$Int* _99;
frost$core$Int _100;
frost$core$Int* _103;
frost$core$String$Index _105;
frost$core$String$Index _108;
frost$core$String$Index _110;
frost$core$Bit _111;
frost$core$Range$LTfrost$core$String$Index$GT _112;
frost$core$String* _113;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$String* _121;
frost$core$Object* _122;
frost$core$Int _126;
int64_t _129;
int64_t _130;
bool _131;
frost$core$Bit _132;
bool _134;
frost$json$JSON* _137;
frost$core$Int _138;
org$frostlang$json$Token _139;
frost$core$String** _142;
frost$core$String* _143;
frost$core$String$Index _144;
frost$core$String$Index _145;
frost$core$Bit _146;
frost$core$Range$LTfrost$core$String$Index$GT _147;
frost$core$String* _148;
frost$core$Object* _149;
frost$core$Object* _151;
frost$core$Int64$nullable _156;
frost$core$Int64$nullable _159;
bool _160;
frost$core$Bit _161;
bool _162;
frost$core$Int64$nullable _165;
bool _166;
frost$core$Bit _167;
bool _168;
frost$core$Int _170;
frost$core$Int64 _173;
int64_t _176;
int64_t _177;
frost$core$Int _178;
frost$core$Int$nullable _180;
frost$core$Int$nullable _186;
bool _187;
frost$core$Bit _188;
bool _189;
frost$core$Int _191;
frost$core$Int _194;
frost$core$Object* _196;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$Int _203;
int64_t _206;
int64_t _207;
bool _208;
frost$core$Bit _209;
bool _211;
frost$json$JSON* _214;
frost$core$Int _215;
org$frostlang$json$Token _216;
frost$core$String** _219;
frost$core$String* _220;
frost$core$String$Index _221;
frost$core$String$Index _222;
frost$core$Bit _223;
frost$core$Range$LTfrost$core$String$Index$GT _224;
frost$core$String* _225;
frost$core$Object* _226;
frost$core$Object* _228;
frost$core$Real64 _233;
frost$core$Real64$nullable _234;
bool _236;
frost$core$Bit _237;
bool _238;
frost$core$Int _240;
frost$core$Real64 _243;
frost$core$Object* _245;
frost$core$Object* _247;
frost$core$Object* _249;
frost$core$Int _252;
int64_t _255;
int64_t _256;
bool _257;
frost$core$Bit _258;
bool _260;
frost$json$JSON* _263;
frost$core$Int _264;
frost$core$Bit _265;
frost$core$Object* _267;
frost$core$Object* _269;
frost$core$Int _272;
int64_t _275;
int64_t _276;
bool _277;
frost$core$Bit _278;
bool _280;
frost$json$JSON* _283;
frost$core$Int _284;
frost$core$Bit _285;
frost$core$Object* _287;
frost$core$Object* _289;
frost$core$Int _292;
int64_t _295;
int64_t _296;
bool _297;
frost$core$Bit _298;
bool _300;
frost$json$JSON* _303;
frost$core$Int _304;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$Int _312;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:136
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:137
_4 = *(&local0);
_5 = _4.kind;
_6 = _5.$rawValue;
_7 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:138:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_15 = _13.value;
if (_15) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:139
_18 = frost$json$JSONParser$map$R$frost$json$JSON(param0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return _18;
block3:;
_24 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:141:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _6.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:142
_35 = frost$json$JSONParser$list$R$frost$json$JSON(param0);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
return _35;
block6:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:144:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _6.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:145
_52 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:145:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_55 = &param0->source;
_56 = *_55;
_57 = _52.start;
_58 = _52.end;
_59 = (frost$core$Bit) {false};
_60 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_57, _58, _59);
_61 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_56, _60);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local1) = ((frost$core$String*) NULL);
_68 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = *(&local1);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local1) = _61;
_74 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:146
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_77 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_78 = (frost$core$Int) {2u};
_79 = *(&local1);
_80 = *(&local1);
_81 = *(&local1);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:146:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_84 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_87 = &(&local3)->value;
*_87 = _84;
_89 = *(&local3);
*(&local2) = _89;
_92 = *(&local2);
_94 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_80, _92);
_95 = *(&local1);
_96 = *(&local1);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:146:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_99 = &_96->_length;
_100 = *_99;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_103 = &(&local5)->value;
*_103 = _100;
_105 = *(&local5);
*(&local4) = _105;
_108 = *(&local4);
_110 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_95, _108);
_111 = (frost$core$Bit) {false};
_112 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_94, _110, _111);
_113 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_79, _112);
frost$json$JSON$init$frost$core$Int$frost$core$String(_77, _78, _113);
_115 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = *(&local1);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local1) = ((frost$core$String*) NULL);
return _77;
block9:;
_126 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:148:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_129 = _6.value;
_130 = _126.value;
_131 = _129 == _130;
_132 = (frost$core$Bit) {_131};
_134 = _132.value;
if (_134) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:149
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_137 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_138 = (frost$core$Int) {0u};
_139 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:149:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_142 = &param0->source;
_143 = *_142;
_144 = _139.start;
_145 = _139.end;
_146 = (frost$core$Bit) {false};
_147 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_144, _145, _146);
_148 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_143, _147);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSONParser.frost:149:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_156 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_148);
*(&local7) = _156;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_159 = *(&local7);
_160 = _159.nonnull;
_161 = (frost$core$Bit) {_160};
_162 = _161.value;
if (_162) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_165 = *(&local7);
_166 = _165.nonnull;
_167 = (frost$core$Bit) {_166};
_168 = _167.value;
if (_168) goto block23; else goto block24;
block24:;
_170 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _170, &$s50);
abort(); // unreachable
block23:;
_173 = ((frost$core$Int64) _165.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_176 = _173.value;
_177 = ((int64_t) _176);
_178 = (frost$core$Int) {_177};
_180 = ((frost$core$Int$nullable) { _178, true });
*(&local6) = _180;
goto block20;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local6) = ((frost$core$Int$nullable) { .nonnull = false });
goto block20;
block20:;
_186 = *(&local6);
_187 = _186.nonnull;
_188 = (frost$core$Bit) {_187};
_189 = _188.value;
if (_189) goto block26; else goto block27;
block27:;
_191 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _191, &$s52);
abort(); // unreachable
block26:;
_194 = ((frost$core$Int) _186.value);
frost$json$JSON$init$frost$core$Int$frost$core$Int(_137, _138, _194);
_196 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_200);
return _137;
block17:;
_203 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:151:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_206 = _6.value;
_207 = _203.value;
_208 = _206 == _207;
_209 = (frost$core$Bit) {_208};
_211 = _209.value;
if (_211) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:152
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_214 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_215 = (frost$core$Int) {1u};
_216 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:152:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_219 = &param0->source;
_220 = *_219;
_221 = _216.start;
_222 = _216.end;
_223 = (frost$core$Bit) {false};
_224 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_221, _222, _223);
_225 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_220, _224);
_226 = ((frost$core$Object*) _225);
frost$core$Frost$ref$frost$core$Object$Q(_226);
_228 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_228);
// begin inline call to function frost.core.String.get_asReal64():frost.core.Real64? from JSONParser.frost:152:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1524
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&_233, _225);
_234 = ((frost$core$Real64$nullable) { _233, true });
_236 = _234.nonnull;
_237 = (frost$core$Bit) {_236};
_238 = _237.value;
if (_238) goto block33; else goto block34;
block34:;
_240 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _240, &$s54);
abort(); // unreachable
block33:;
_243 = ((frost$core$Real64) _234.value);
frost$json$JSON$init$frost$core$Int$frost$core$Real64(_214, _215, _243);
_245 = ((frost$core$Object*) _214);
frost$core$Frost$ref$frost$core$Object$Q(_245);
_247 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_247);
_249 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_249);
return _214;
block29:;
_252 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:154:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_255 = _6.value;
_256 = _252.value;
_257 = _255 == _256;
_258 = (frost$core$Bit) {_257};
_260 = _258.value;
if (_260) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:155
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_263 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_264 = (frost$core$Int) {3u};
_265 = (frost$core$Bit) {true};
frost$json$JSON$init$frost$core$Int$frost$core$Bit(_263, _264, _265);
_267 = ((frost$core$Object*) _263);
frost$core$Frost$ref$frost$core$Object$Q(_267);
_269 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_269);
return _263;
block36:;
_272 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:157:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_275 = _6.value;
_276 = _272.value;
_277 = _275 == _276;
_278 = (frost$core$Bit) {_277};
_280 = _278.value;
if (_280) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:158
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_283 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_284 = (frost$core$Int) {3u};
_285 = (frost$core$Bit) {false};
frost$json$JSON$init$frost$core$Int$frost$core$Bit(_283, _284, _285);
_287 = ((frost$core$Object*) _283);
frost$core$Frost$ref$frost$core$Object$Q(_287);
_289 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_289);
return _283;
block39:;
_292 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:160:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_295 = _6.value;
_296 = _292.value;
_297 = _295 == _296;
_298 = (frost$core$Bit) {_297};
_300 = _298.value;
if (_300) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:161
FROST_ASSERT(32 == sizeof(frost$json$JSON));
_303 = (frost$json$JSON*) frostObjectAlloc(32, (frost$core$Class*) &frost$json$JSON$class);
_304 = (frost$core$Int) {6u};
frost$json$JSON$init$frost$core$Int(_303, _304);
_306 = ((frost$core$Object*) _303);
frost$core$Frost$ref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_308);
return _303;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:164
_312 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _312);
abort(); // unreachable
block1:;
goto block44;
block44:;

}
void frost$json$JSONParser$init(frost$json$JSONParser* param0) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
org$frostlang$json$Lexer* _10;
frost$core$Object* _12;
org$frostlang$json$Lexer** _14;
org$frostlang$json$Lexer* _15;
frost$core$Object* _16;
org$frostlang$json$Lexer** _18;
frost$core$Object* _20;
org$frostlang$json$Token$nullable* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:14
_1 = ((frost$core$Object*) &$s56);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->source;
*_7 = &$s57;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:17
FROST_ASSERT(40 == sizeof(org$frostlang$json$Lexer));
_10 = (org$frostlang$json$Lexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$json$Lexer$class);
org$frostlang$json$Lexer$init(_10);
_12 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &param0->lexer;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &param0->lexer;
*_18 = _10;
_20 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:20
_23 = &param0->pushbackToken;
*_23 = ((org$frostlang$json$Token$nullable) { .nonnull = false });
return;

}
void frost$json$JSONParser$cleanup(frost$json$JSONParser* param0) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
org$frostlang$json$Lexer** _7;
org$frostlang$json$Lexer* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->lexer;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

