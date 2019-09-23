#include "frost/json/JSONParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON.h"
#include "org/frostlang/json/Lexer.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int.h"
#include "frost/unsafe/NewPointer.h"
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

frost$json$JSON* frost$json$JSONParser$parse$frost$core$String$R$frost$json$JSON$Q(void* rawSelf, frost$core$String* param1) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
org$frostlang$json$Lexer** _10;
org$frostlang$json$Lexer* _11;
org$frostlang$plex$runtime$DFA* _14;
frost$core$Int _15;
frost$unsafe$NewPointer* _16;
frost$unsafe$NewPointer _17;
frost$unsafe$NewPointer* _18;
frost$unsafe$NewPointer _19;
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
_14 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(sizeof(org$frostlang$plex$runtime$DFA), (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
_15 = (frost$core$Int) {31u};
_16 = &_11->transitions;
_17 = *_16;
_18 = &_11->accepts;
_19 = *_18;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(_14, param1, _15, _17, _19);
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
org$frostlang$json$Token frost$json$JSONParser$next$R$org$frostlang$json$Token(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
frost$core$Int _62;
frost$core$Int* _65;
org$frostlang$json$Token$Kind _67;
org$frostlang$json$Token$Kind _70;
frost$core$Equatable* _71;
$fn2 _72;
frost$core$Bit _73;
bool _74;
frost$core$Object* _75;
frost$core$Object* _77;
org$frostlang$json$Lexer** _81;
org$frostlang$json$Lexer* _82;
org$frostlang$plex$runtime$DFA** _85;
org$frostlang$plex$runtime$DFA* _86;
org$frostlang$plex$runtime$RawToken _87;
org$frostlang$plex$runtime$RawToken _90;
frost$core$Int _91;
frost$core$Int* _94;
org$frostlang$json$Token$Kind _96;
org$frostlang$json$Token$Kind _99;
org$frostlang$plex$runtime$RawToken _100;
frost$core$String$Index _101;
org$frostlang$plex$runtime$RawToken _102;
frost$core$String$Index _103;
org$frostlang$plex$runtime$RawToken _104;
frost$core$Int _105;
org$frostlang$plex$runtime$RawToken _106;
frost$core$Int _107;
org$frostlang$json$Position _108;
org$frostlang$json$Token _109;
org$frostlang$json$Token _114;
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
$tmp5 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp5->value = _60;
_61 = ((frost$core$Equatable*) $tmp5);
_62 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:41:39
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_65 = &(&local6)->$rawValue;
*_65 = _62;
_67 = *(&local6);
*(&local5) = _67;
_70 = *(&local5);
org$frostlang$json$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp6->value = _70;
_71 = ((frost$core$Equatable*) $tmp6);
ITable* $tmp7 = _61->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_72 = $tmp7->methods[0];
_73 = _72(_61, _71);
_74 = _73.value;
_75 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_77);
if (_74) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:42
_81 = &param0->lexer;
_82 = *_81;
// begin inline call to method org.frostlang.json.Lexer.next():org.frostlang.json.Token from JSONParser.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
_85 = &_82->dfa;
_86 = *_85;
_87 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(_86);
*(&local7) = _87;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
_90 = *(&local7);
_91 = _90.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_94 = &(&local9)->$rawValue;
*_94 = _91;
_96 = *(&local9);
*(&local8) = _96;
_99 = *(&local8);
_100 = *(&local7);
_101 = _100.start;
_102 = *(&local7);
_103 = _102.end;
_104 = *(&local7);
_105 = _104.line;
_106 = *(&local7);
_107 = _106.column;
_108 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int(_105, _107);
_109 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(_99, _101, _103, _108);
*(&local4) = _109;
goto block7;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:44
_114 = *(&local4);
return _114;

}
void frost$json$JSONParser$pushback$org$frostlang$json$Token(void* rawSelf, org$frostlang$json$Token param1) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
org$frostlang$json$Token frost$json$JSONParser$peek$R$org$frostlang$json$Token(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
org$frostlang$json$Token$nullable frost$json$JSONParser$checkNext$org$frostlang$json$Token$Kind$R$org$frostlang$json$Token$Q(void* rawSelf, org$frostlang$json$Token$Kind param1) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

org$frostlang$json$Token local0;
org$frostlang$json$Token _1;
org$frostlang$json$Token _4;
org$frostlang$json$Token$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
$fn10 _8;
frost$core$Bit _9;
bool _10;
frost$core$Object* _11;
frost$core$Object* _13;
org$frostlang$json$Token _17;
org$frostlang$json$Token$nullable _18;
org$frostlang$json$Token _21;
org$frostlang$json$Token$nullable* _24;
org$frostlang$json$Token$nullable _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$json$Token$nullable _34;
org$frostlang$json$Token$nullable* _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:62
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:63
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp11->value = _5;
_6 = ((frost$core$Equatable*) $tmp11);
org$frostlang$json$Token$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp12->value = param1;
_7 = ((frost$core$Equatable*) $tmp12);
ITable* $tmp13 = _6->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
_8 = $tmp13->methods[0];
_9 = _8(_6, _7);
_10 = _9.value;
_11 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_13);
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_17 = *(&local0);
_18 = ((org$frostlang$json$Token$nullable) { _17, true });
return _18;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_21 = *(&local0);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_24 = &param0->pushbackToken;
_25 = *_24;
_26 = !_25.nonnull;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block4; else goto block5;
block5:;
_30 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _30);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_34 = ((org$frostlang$json$Token$nullable) { _21, true });
_35 = &param0->pushbackToken;
*_35 = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
return ((org$frostlang$json$Token$nullable) { .nonnull = false });

}
frost$core$String* frost$json$JSONParser$text$org$frostlang$json$Token$R$frost$core$String(void* rawSelf, org$frostlang$json$Token param1) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
frost$json$JSON* frost$json$JSONParser$list$R$frost$json$JSON(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
$fn15 _19;
frost$core$Bit _20;
bool _21;
frost$core$Object* _22;
frost$core$Object* _24;
org$frostlang$json$Token _28;
org$frostlang$json$Token$nullable _29;
org$frostlang$json$Token _33;
org$frostlang$json$Token$nullable* _36;
org$frostlang$json$Token$nullable _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
org$frostlang$json$Token$nullable _46;
org$frostlang$json$Token$nullable* _47;
org$frostlang$json$Token$nullable _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$json$JSON* _59;
frost$core$Int _60;
frost$collections$Array* _61;
frost$core$Int _62;
frost$collections$ListView* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$collections$Array* _74;
frost$core$Object* _77;
frost$collections$Array* _79;
frost$core$Object* _80;
frost$core$Object* _83;
frost$collections$Array* _88;
frost$json$JSON* _89;
frost$core$Object* _90;
frost$core$Object* _92;
org$frostlang$json$Token _95;
org$frostlang$json$Token$Kind _96;
frost$core$Int _97;
frost$core$Int _98;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _106;
frost$json$JSON* _109;
frost$core$Int _110;
frost$collections$Array* _111;
frost$collections$ListView* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$collections$Array* _118;
frost$core$Object* _119;
frost$core$Int _123;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _131;
frost$core$Int _136;
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
$tmp16 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp16->value = _16;
_17 = ((frost$core$Equatable*) $tmp16);
org$frostlang$json$Token$Kind$wrapper* $tmp17;
$tmp17 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp17->value = _9;
_18 = ((frost$core$Equatable*) $tmp17);
ITable* $tmp18 = _17->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp18 = $tmp18->next;
}
_19 = $tmp18->methods[0];
_20 = _19(_17, _18);
_21 = _20.value;
_22 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_24);
if (_21) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_28 = *(&local3);
_29 = ((org$frostlang$json$Token$nullable) { _28, true });
*(&local2) = _29;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_33 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_36 = &param0->pushbackToken;
_37 = *_36;
_38 = !_37.nonnull;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block8; else goto block9;
block9:;
_42 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s19, _42);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_46 = ((org$frostlang$json$Token$nullable) { _33, true });
_47 = &param0->pushbackToken;
*_47 = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
_53 = *(&local2);
_54 = _53.nonnull;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:78
_59 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
_60 = (frost$core$Int) {5u};
_61 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_62 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_61, _62);
_64 = ((frost$collections$ListView*) _61);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(_59, _60, _64);
_66 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_70);
return _59;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:80
_74 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_74);
*(&local4) = ((frost$collections$Array*) NULL);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = *(&local4);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local4) = _74;
_83 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_83);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:81
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:82
_88 = *(&local4);
_89 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
_90 = ((frost$core$Object*) _89);
frost$collections$Array$add$frost$collections$Array$T(_88, _90);
_92 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_92);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:83
_95 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
_96 = _95.kind;
_97 = _96.$rawValue;
_98 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_101 = _97.value;
_102 = _98.value;
_103 = _101 == _102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:85
_109 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
_110 = (frost$core$Int) {5u};
_111 = *(&local4);
_112 = ((frost$collections$ListView*) _111);
frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(_109, _110, _112);
_114 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = *(&local4);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local4) = ((frost$collections$Array*) NULL);
return _109;
block14:;
_123 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_126 = _97.value;
_127 = _123.value;
_128 = _126 == _127;
_129 = (frost$core$Bit) {_128};
_131 = _129.value;
if (_131) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:88
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:91
_136 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _136, &$s21);
abort(); // unreachable
block12:;
goto block10;
block11:;
goto block19;
block19:;

}
frost$json$JSON* frost$json$JSONParser$map$R$frost$json$JSON(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
$fn22 _19;
frost$core$Bit _20;
bool _21;
frost$core$Object* _22;
frost$core$Object* _24;
org$frostlang$json$Token _28;
org$frostlang$json$Token$nullable _29;
org$frostlang$json$Token _33;
org$frostlang$json$Token$nullable* _36;
org$frostlang$json$Token$nullable _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
org$frostlang$json$Token$nullable _46;
org$frostlang$json$Token$nullable* _47;
org$frostlang$json$Token$nullable _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$json$JSON* _59;
frost$core$Int _60;
frost$collections$HashMap* _61;
frost$collections$MapView* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$collections$HashMap* _73;
frost$core$Object* _76;
frost$collections$HashMap* _78;
frost$core$Object* _79;
frost$core$Object* _82;
org$frostlang$json$Token _89;
org$frostlang$json$Token _92;
org$frostlang$json$Token$Kind _93;
frost$core$Equatable* _94;
frost$core$Int _95;
frost$core$Int* _98;
org$frostlang$json$Token$Kind _100;
org$frostlang$json$Token$Kind _103;
frost$core$Equatable* _104;
$fn23 _105;
frost$core$Bit _106;
bool _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Int _114;
org$frostlang$json$Token _115;
frost$core$String** _118;
frost$core$String* _119;
frost$core$String$Index _120;
frost$core$String$Index _121;
frost$core$Bit _122;
frost$core$Range$LTfrost$core$String$Index$GT _123;
frost$core$String* _124;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$String* _130;
frost$core$String* _131;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$Object* _137;
org$frostlang$json$Token _141;
frost$core$String** _144;
frost$core$String* _145;
frost$core$String$Index _146;
frost$core$String$Index _147;
frost$core$Bit _148;
frost$core$Range$LTfrost$core$String$Index$GT _149;
frost$core$String* _150;
frost$core$Object* _151;
frost$core$Object* _153;
frost$core$Object* _157;
frost$core$String* _159;
frost$core$Object* _160;
frost$core$Object* _163;
frost$core$String* _166;
frost$core$String* _167;
frost$core$String* _168;
frost$core$Int _171;
frost$core$String$Index _172;
frost$core$String$Index _174;
frost$core$String* _175;
frost$core$String* _176;
frost$core$Int* _179;
frost$core$Int _180;
frost$core$String$Index _181;
frost$core$String$Index _183;
frost$core$Bit _184;
frost$core$Range$LTfrost$core$String$Index$GT _185;
frost$core$String* _186;
frost$core$Object* _187;
frost$core$Object* _189;
frost$core$String* _191;
frost$core$Object* _192;
frost$core$Object* _197;
frost$core$String* _199;
frost$core$Object* _200;
frost$core$Object* _203;
org$frostlang$json$Token _206;
org$frostlang$json$Token _209;
org$frostlang$json$Token$Kind _210;
frost$core$Equatable* _211;
frost$core$Int _212;
frost$core$Int* _215;
org$frostlang$json$Token$Kind _217;
org$frostlang$json$Token$Kind _220;
frost$core$Equatable* _221;
$fn24 _222;
frost$core$Bit _223;
bool _224;
frost$core$Object* _225;
frost$core$Object* _227;
frost$core$Int _231;
frost$collections$HashMap* _235;
frost$core$String* _236;
frost$collections$HashKey* _237;
frost$json$JSON* _238;
frost$core$Object* _239;
frost$core$Object* _241;
org$frostlang$json$Token _244;
org$frostlang$json$Token$Kind _245;
frost$core$Int _246;
frost$core$Int _247;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _255;
frost$json$JSON* _258;
frost$core$Int _259;
frost$collections$HashMap* _260;
frost$collections$MapView* _261;
frost$core$Object* _263;
frost$core$Object* _265;
frost$core$String* _267;
frost$core$Object* _268;
frost$collections$HashMap* _271;
frost$core$Object* _272;
frost$core$Int _276;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _284;
frost$core$String* _287;
frost$core$Object* _288;
frost$core$Int _293;
frost$core$String* _296;
frost$core$Object* _297;
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
$tmp25 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp25->value = _16;
_17 = ((frost$core$Equatable*) $tmp25);
org$frostlang$json$Token$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp26->value = _9;
_18 = ((frost$core$Equatable*) $tmp26);
ITable* $tmp27 = _17->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
_19 = $tmp27->methods[0];
_20 = _19(_17, _18);
_21 = _20.value;
_22 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_24);
if (_21) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:64
_28 = *(&local3);
_29 = ((org$frostlang$json$Token$nullable) { _28, true });
*(&local2) = _29;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:66
_33 = *(&local3);
// begin inline call to method frost.json.JSONParser.pushback(token:org.frostlang.json.Token) from JSONParser.frost:66:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:49
_36 = &param0->pushbackToken;
_37 = *_36;
_38 = !_37.nonnull;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block8; else goto block9;
block9:;
_42 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s28, _42);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:50
_46 = ((org$frostlang$json$Token$nullable) { _33, true });
_47 = &param0->pushbackToken;
*_47 = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:67
*(&local2) = ((org$frostlang$json$Token$nullable) { .nonnull = false });
goto block4;
block4:;
_53 = *(&local2);
_54 = _53.nonnull;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:100
_59 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
_60 = (frost$core$Int) {4u};
_61 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_61);
_63 = ((frost$collections$MapView*) _61);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(_59, _60, _63);
_65 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_69);
return _59;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:102
_73 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_73);
*(&local4) = ((frost$collections$HashMap*) NULL);
_76 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = *(&local4);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local4) = _73;
_82 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_82);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:103
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:104
// begin inline call to method frost.json.JSONParser.string():frost.core.String from JSONParser.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
_89 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local5) = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
_92 = *(&local5);
_93 = _92.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp29->value = _93;
_94 = ((frost$core$Equatable*) $tmp29);
_95 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_98 = &(&local7)->$rawValue;
*_98 = _95;
_100 = *(&local7);
*(&local6) = _100;
_103 = *(&local6);
org$frostlang$json$Token$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp30->value = _103;
_104 = ((frost$core$Equatable*) $tmp30);
ITable* $tmp31 = _94->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
_105 = $tmp31->methods[1];
_106 = _105(_94, _104);
_107 = _106.value;
_108 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_110);
if (_107) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
_114 = (frost$core$Int) {128u};
_115 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_118 = &param0->source;
_119 = *_118;
_120 = _115.start;
_121 = _115.end;
_122 = (frost$core$Bit) {false};
_123 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_120, _121, _122);
_124 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_119, _123);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$ref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s32, _124);
_131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_130, &$s33);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _114, _131);
_133 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_137);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
_141 = *(&local5);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_144 = &param0->source;
_145 = *_144;
_146 = _141.start;
_147 = _141.end;
_148 = (frost$core$Bit) {false};
_149 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_146, _147, _148);
_150 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_145, _149);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local8) = ((frost$core$String*) NULL);
_157 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_157);
_159 = *(&local8);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local8) = _150;
_163 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_163);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
_166 = *(&local8);
_167 = *(&local8);
_168 = *(&local8);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_171 = (frost$core$Int) {0u};
_172 = frost$core$String$Index$init$frost$core$Int(_171);
_174 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_167, _172);
_175 = *(&local8);
_176 = *(&local8);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_179 = &_176->_length;
_180 = *_179;
_181 = frost$core$String$Index$init$frost$core$Int(_180);
_183 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_175, _181);
_184 = (frost$core$Bit) {false};
_185 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_174, _183, _184);
_186 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_166, _185);
_187 = ((frost$core$Object*) _186);
frost$core$Frost$ref$frost$core$Object$Q(_187);
_189 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = *(&local8);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
*(&local8) = ((frost$core$String*) NULL);
*(&local9) = ((frost$core$String*) NULL);
_197 = ((frost$core$Object*) _186);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = *(&local9);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local9) = _186;
_203 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_203);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:105
_206 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local10) = _206;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:106
_209 = *(&local10);
_210 = _209.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp35->value = _210;
_211 = ((frost$core$Equatable*) $tmp35);
_212 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_215 = &(&local12)->$rawValue;
*_215 = _212;
_217 = *(&local12);
*(&local11) = _217;
_220 = *(&local11);
org$frostlang$json$Token$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp36->value = _220;
_221 = ((frost$core$Equatable*) $tmp36);
ITable* $tmp37 = _211->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
_222 = $tmp37->methods[1];
_223 = _222(_211, _221);
_224 = _223.value;
_225 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_225);
_227 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_227);
if (_224) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:107
_231 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _231, &$s39);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:109
_235 = *(&local4);
_236 = *(&local9);
_237 = ((frost$collections$HashKey*) _236);
_238 = frost$json$JSONParser$node$R$frost$json$JSON(param0);
_239 = ((frost$core$Object*) _238);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_235, _237, _239);
_241 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_241);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:110
_244 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
_245 = _244.kind;
_246 = _245.$rawValue;
_247 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:111:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_250 = _246.value;
_251 = _247.value;
_252 = _250 == _251;
_253 = (frost$core$Bit) {_252};
_255 = _253.value;
if (_255) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:112
_258 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
_259 = (frost$core$Int) {4u};
_260 = *(&local4);
_261 = ((frost$collections$MapView*) _260);
frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(_258, _259, _261);
_263 = ((frost$core$Object*) _258);
frost$core$Frost$ref$frost$core$Object$Q(_263);
_265 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_265);
_267 = *(&local9);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local9) = ((frost$core$String*) NULL);
_271 = *(&local4);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local4) = ((frost$collections$HashMap*) NULL);
return _258;
block25:;
_276 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSONParser.frost:114:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_279 = _246.value;
_280 = _276.value;
_281 = _279 == _280;
_282 = (frost$core$Bit) {_281};
_284 = _282.value;
if (_284) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:115
_287 = *(&local9);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:118
_293 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _293, &$s41);
abort(); // unreachable
block23:;
_296 = *(&local9);
_297 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_297);
*(&local9) = ((frost$core$String*) NULL);
goto block10;
block11:;
goto block30;
block30:;

}
frost$core$String* frost$json$JSONParser$string$R$frost$core$String(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
frost$core$Int _7;
frost$core$Int* _10;
org$frostlang$json$Token$Kind _12;
org$frostlang$json$Token$Kind _15;
frost$core$Equatable* _16;
$fn42 _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Int _26;
org$frostlang$json$Token _27;
frost$core$String** _30;
frost$core$String* _31;
frost$core$String$Index _32;
frost$core$String$Index _33;
frost$core$Bit _34;
frost$core$Range$LTfrost$core$String$Index$GT _35;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$String* _42;
frost$core$String* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
org$frostlang$json$Token _53;
frost$core$String** _56;
frost$core$String* _57;
frost$core$String$Index _58;
frost$core$String$Index _59;
frost$core$Bit _60;
frost$core$Range$LTfrost$core$String$Index$GT _61;
frost$core$String* _62;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _69;
frost$core$String* _71;
frost$core$Object* _72;
frost$core$Object* _75;
frost$core$String* _78;
frost$core$String* _79;
frost$core$String* _80;
frost$core$Int _83;
frost$core$Int* _86;
frost$core$String$Index _88;
frost$core$String$Index _91;
frost$core$String$Index _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$Int* _98;
frost$core$Int _99;
frost$core$Int* _102;
frost$core$String$Index _104;
frost$core$String$Index _107;
frost$core$String$Index _109;
frost$core$Bit _110;
frost$core$Range$LTfrost$core$String$Index$GT _111;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$String* _117;
frost$core$Object* _118;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:126
_1 = frost$json$JSONParser$next$R$org$frostlang$json$Token(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:127
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$json$Token$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp43->value = _5;
_6 = ((frost$core$Equatable*) $tmp43);
_7 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from JSONParser.frost:127:36
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
_10 = &(&local2)->$rawValue;
*_10 = _7;
_12 = *(&local2);
*(&local1) = _12;
_15 = *(&local1);
org$frostlang$json$Token$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$json$Token$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$json$Token$Kind$wrapper), (frost$core$Class*) &org$frostlang$json$Token$Kind$wrapperclass);
$tmp44->value = _15;
_16 = ((frost$core$Equatable*) $tmp44);
ITable* $tmp45 = _6->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
_17 = $tmp45->methods[1];
_18 = _17(_6, _16);
_19 = _18.value;
_20 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_22);
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:128
_26 = (frost$core$Int) {128u};
_27 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:128:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_30 = &param0->source;
_31 = *_30;
_32 = _27.start;
_33 = _27.end;
_34 = (frost$core$Bit) {false};
_35 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_32, _33, _34);
_36 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_31, _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, _36);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_42, &$s47);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _26, _43);
_45 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_49);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:130
_53 = *(&local0);
// begin inline call to function frost.json.JSONParser.text(token:org.frostlang.json.Token):frost.core.String from JSONParser.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:72
_56 = &param0->source;
_57 = *_56;
_58 = _53.start;
_59 = _53.end;
_60 = (frost$core$Bit) {false};
_61 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_58, _59, _60);
_62 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_57, _61);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local3) = ((frost$core$String*) NULL);
_69 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local3);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local3) = _62;
_75 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSONParser.frost:131
_78 = *(&local3);
_79 = *(&local3);
_80 = *(&local3);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSONParser.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_83 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_86 = &(&local5)->value;
*_86 = _83;
_88 = *(&local5);
*(&local4) = _88;
_91 = *(&local4);
_93 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_79, _91);
_94 = *(&local3);
_95 = *(&local3);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSONParser.frost:131:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_98 = &_95->_length;
_99 = *_98;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_102 = &(&local7)->value;
*_102 = _99;
_104 = *(&local7);
*(&local6) = _104;
_107 = *(&local6);
_109 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_94, _107);
_110 = (frost$core$Bit) {false};
_111 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_93, _109, _110);
_112 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_78, _111);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = *(&local3);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local3) = ((frost$core$String*) NULL);
return _112;

}
frost$json$JSON* frost$json$JSONParser$node$R$frost$json$JSON(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
_77 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
_137 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
_214 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
_263 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
_283 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
_303 = (frost$json$JSON*) frostObjectAlloc(sizeof(frost$json$JSON), (frost$core$Class*) &frost$json$JSON$class);
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
void frost$json$JSONParser$init(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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
_10 = (org$frostlang$json$Lexer*) frostObjectAlloc(sizeof(org$frostlang$json$Lexer), (frost$core$Class*) &org$frostlang$json$Lexer$class);
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
void frost$json$JSONParser$cleanup(void* rawSelf) {
frost$json$JSONParser* param0 = (frost$json$JSONParser*) rawSelf;

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

