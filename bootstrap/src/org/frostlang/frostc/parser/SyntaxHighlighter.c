#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$SyntaxHighlighter$class_type org$frostlang$frostc$parser$SyntaxHighlighter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$SyntaxHighlighter$cleanup, org$frostlang$frostc$parser$SyntaxHighlighter$reset, org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$rewind} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn31)(frost$collections$CollectionView*);
typedef void (*$fn32)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn33)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn34)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn35)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn36)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn37)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn38)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn39)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn40)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn41)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn42)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn43)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn54)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn55)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn56)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn57)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn58)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn59)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn60)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn61)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn62)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn63)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn64)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn65)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int (*$fn66)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 45, -2825424854296992849, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6c\x65\x61\x72\x28\x29", 64, -2314003985062190716, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6c\x65\x61\x72\x28\x29", 64, -2314003985062190716, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$parser$SyntaxHighlighter$reset(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$core$Int local0;
frost$core$Int local1;
frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
frost$core$Int _23;
frost$core$Int* _24;
frost$core$Int _27;
frost$core$Int* _28;
frost$core$Int _29;
frost$core$Bit _30;
frost$core$Range$LTfrost$core$Int$GT _31;
frost$core$Int _32;
frost$core$Int _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Object*** _52;
frost$core$Object** _53;
frost$core$Int _54;
frost$core$Int64 _55;
int64_t _56;
frost$core$Object* _57;
frost$core$Object* _58;
frost$core$Int _62;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _72;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
frost$core$Int _8;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _19;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Object*** _138;
frost$core$Object** _139;
frost$core$Int _140;
frost$core$Int64 _141;
int64_t _142;
frost$core$Object* _143;
frost$core$Object* _144;
frost$core$Int _148;
int64_t _149;
int64_t _150;
int64_t _151;
frost$core$Int _152;
int64_t _154;
int64_t _155;
bool _156;
frost$core$Bit _157;
bool _158;
int64_t _160;
int64_t _161;
bool _162;
frost$core$Bit _163;
bool _164;
int64_t _166;
int64_t _167;
int64_t _168;
frost$core$Int _169;
frost$collections$CollectionView* _97;
$fn3 _98;
frost$core$Int _99;
frost$core$Int _100;
frost$core$Bit _101;
bool _105;
frost$core$Int _102;
frost$collections$Stack** _88;
frost$collections$Stack* _89;
frost$collections$Stack* _90;
frost$collections$Array** _93;
frost$collections$Array* _94;
frost$collections$Array* _95;
frost$core$Int _109;
frost$core$Int* _110;
frost$core$Int _113;
frost$core$Int* _114;
frost$core$Int _115;
frost$core$Bit _116;
frost$core$Range$LTfrost$core$Int$GT _117;
frost$core$Int _118;
frost$core$Int _120;
frost$core$Bit _121;
bool _122;
frost$core$Int _123;
frost$core$Int _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:29
_1 = &param0->tokens;
_2 = *_1;
_3 = _2;
// begin inline call to method frost.collections.Array.clear() from SyntaxHighlighter.frost:29:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_23 = (frost$core$Int) {0u};
_24 = &_3->_count;
*_24 = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_27 = (frost$core$Int) {0u};
_28 = &_3->capacity;
_29 = *_28;
_30 = (frost$core$Bit) {false};
_31 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_27, _29, _30);
_32 = _31.min;
*(&local0) = _32;
_34 = _31.max;
_35 = _31.inclusive;
_36 = _35.value;
_37 = (frost$core$Int) {1u};
if (_36) goto block9; else goto block10;
block9:;
_39 = _32.value;
_40 = _34.value;
_41 = _39 <= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block6; else goto block7;
block10:;
_45 = _32.value;
_46 = _34.value;
_47 = _45 < _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_52 = &_3->data;
_53 = *_52;
_54 = *(&local0);
_55 = frost$core$Int64$init$frost$core$Int(_54);
_56 = _55.value;
_57 = _53[_56];
_58 = _57;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_53[_56] = ((frost$core$Object*) NULL);
_62 = *(&local0);
_63 = _34.value;
_64 = _62.value;
_65 = _63 - _64;
_66 = (frost$core$Int) {_65};
if (_36) goto block12; else goto block13;
block12:;
_68 = _66.value;
_69 = _37.value;
_70 = _68 >= _69;
_71 = (frost$core$Bit) {_70};
_72 = _71.value;
if (_72) goto block11; else goto block7;
block13:;
_74 = _66.value;
_75 = _37.value;
_76 = _74 > _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block11; else goto block7;
block11:;
_80 = _62.value;
_81 = _37.value;
_82 = _80 + _81;
_83 = (frost$core$Int) {_82};
*(&local0) = _83;
goto block6;
block7:;
_5 = ((frost$collections$CollectionView*) _3);
ITable* $tmp4 = _5->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_6 = $tmp4->methods[0];
_7 = _6(_5);
_8 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_11 = _7.value;
_12 = _8.value;
_13 = _11 == _12;
_14 = (frost$core$Bit) {_13};
_19 = _14.value;
if (_19) goto block4; else goto block5;
block22:;
_125 = _118.value;
_126 = _120.value;
_127 = _125 <= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block19; else goto block20;
block23:;
_131 = _118.value;
_132 = _120.value;
_133 = _131 < _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_138 = &_95->data;
_139 = *_138;
_140 = *(&local1);
_141 = frost$core$Int64$init$frost$core$Int(_140);
_142 = _141.value;
_143 = _139[_142];
_144 = _143;
frost$core$Frost$unref$frost$core$Object$Q(_144);
_139[_142] = ((frost$core$Object*) NULL);
_148 = *(&local1);
_149 = _120.value;
_150 = _148.value;
_151 = _149 - _150;
_152 = (frost$core$Int) {_151};
if (_122) goto block25; else goto block26;
block25:;
_154 = _152.value;
_155 = _123.value;
_156 = _154 >= _155;
_157 = (frost$core$Bit) {_156};
_158 = _157.value;
if (_158) goto block24; else goto block20;
block26:;
_160 = _152.value;
_161 = _123.value;
_162 = _160 > _161;
_163 = (frost$core$Bit) {_162};
_164 = _163.value;
if (_164) goto block24; else goto block20;
block24:;
_166 = _148.value;
_167 = _123.value;
_168 = _166 + _167;
_169 = (frost$core$Int) {_168};
*(&local1) = _169;
goto block19;
block20:;
_97 = ((frost$collections$CollectionView*) _95);
ITable* $tmp5 = _97->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_98 = $tmp5->methods[0];
_99 = _98(_97);
_100 = (frost$core$Int) {0u};
_101 = frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(_99, _100);
_105 = _101.value;
if (_105) goto block17; else goto block18;
block17:;
return;
block18:;
_102 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _102, &$s7);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:30
_88 = &param0->stack;
_89 = *_88;
_90 = _89;
// begin inline call to method frost.collections.Stack.clear() from SyntaxHighlighter.frost:30:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
_93 = &_90->contents;
_94 = *_93;
_95 = _94;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_109 = (frost$core$Int) {0u};
_110 = &_95->_count;
*_110 = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_113 = (frost$core$Int) {0u};
_114 = &_95->capacity;
_115 = *_114;
_116 = (frost$core$Bit) {false};
_117 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_113, _115, _116);
_118 = _117.min;
*(&local1) = _118;
_120 = _117.max;
_121 = _117.inclusive;
_122 = _121.value;
_123 = (frost$core$Int) {1u};
if (_122) goto block22; else goto block23;
block5:;
_16 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _16, &$s9);
abort(); // unreachable

}
void org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

frost$collections$Stack** _1;
frost$collections$Stack* _2;
frost$collections$Stack* _3;
frost$core$Object* _4;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$collections$Array* _9;
frost$core$Object* _10;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:34
_1 = &param0->stack;
_2 = *_1;
_3 = _2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp10->value = param1;
_4 = ((frost$core$Object*) $tmp10);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from SyntaxHighlighter.frost:34:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_7 = &_3->contents;
_8 = *_7;
_9 = _8;
_10 = _4;
frost$collections$Array$add$frost$collections$Array$T(_9, _10);
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

frost$collections$Stack** _1;
frost$collections$Stack* _2;
frost$collections$Stack* _3;
frost$core$Int _4;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$collections$CollectionView* _17;
$fn11 _18;
frost$core$Int _19;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
frost$collections$Array** _31;
frost$collections$Array* _32;
frost$collections$CollectionView* _33;
$fn12 _34;
frost$core$Int _35;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$collections$Array** _46;
frost$collections$Array* _47;
frost$collections$Array* _48;
frost$collections$Array** _49;
frost$collections$Array* _50;
frost$collections$CollectionView* _51;
$fn13 _52;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
frost$core$Int _64;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$collections$CollectionView* _71;
$fn14 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$Object*** _84;
frost$core$Object** _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Object* _92;
frost$core$Object* _93;
frost$core$Object* _95;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _98;
frost$core$Int _99;
frost$core$Int _100;
int64_t _103;
int64_t _104;
bool _105;
frost$core$Bit _106;
bool _108;
frost$core$Int _110;
frost$core$Object* _113;
frost$collections$Stack** _116;
frost$collections$Stack* _117;
frost$collections$Stack* _118;
frost$core$Object* _119;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _120;
frost$core$Object* _121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:38
_1 = &param0->stack;
_2 = *_1;
_3 = _2;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:38:21
_6 = (frost$core$Int) {0u};
_7 = _4.value;
_8 = _6.value;
_9 = _7 >= _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_15 = &_3->contents;
_16 = *_15;
_17 = ((frost$collections$CollectionView*) _16);
ITable* $tmp15 = _17->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_18 = $tmp15->methods[0];
_19 = _18(_17);
_21 = _4.value;
_22 = _19.value;
_23 = _21 < _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block2; else goto block3;
block3:;
_27 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _27, &$s17);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_31 = &_3->contents;
_32 = *_31;
_33 = ((frost$collections$CollectionView*) _32);
ITable* $tmp18 = _33->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_34 = $tmp18->methods[0];
_35 = _34(_33);
_36 = _35.value;
_37 = _4.value;
_38 = _36 > _37;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block6; else goto block7;
block7:;
_42 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s19, _42);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_46 = &_3->contents;
_47 = *_46;
_48 = _47;
_49 = &_3->contents;
_50 = *_49;
_51 = ((frost$collections$CollectionView*) _50);
ITable* $tmp20 = _51->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_52 = $tmp20->methods[0];
_53 = _52(_51);
_54 = (frost$core$Int) {1u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 - _56;
_58 = (frost$core$Int) {_57};
_59 = _58.value;
_60 = _4.value;
_61 = _59 - _60;
_62 = (frost$core$Int) {_61};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_64 = (frost$core$Int) {0u};
_65 = _62.value;
_66 = _64.value;
_67 = _65 >= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block11; else goto block10;
block11:;
_71 = ((frost$collections$CollectionView*) _48);
ITable* $tmp21 = _71->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_72 = $tmp21->methods[0];
_73 = _72(_71);
_74 = _62.value;
_75 = _73.value;
_76 = _74 < _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block9; else goto block10;
block10:;
_80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _80, &$s23);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_84 = &_48->data;
_85 = *_84;
_86 = frost$core$Int64$init$frost$core$Int(_62);
_87 = _86.value;
_88 = _85[_87];
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = _88;
_93 = _92;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_95);
_98 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _92)->value;
_99 = _98.$rawValue;
_100 = param1.$rawValue;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _99.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block13; else goto block14;
block14:;
_110 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s24, _110);
abort(); // unreachable
block13:;
_113 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:39
_116 = &param0->stack;
_117 = *_116;
_118 = _117;
_119 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_118);
_120 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _119)->value;
_121 = _119;
frost$core$Frost$unref$frost$core$Object$Q(_121);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$Token param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
org$frostlang$frostc$Pair* _4;
org$frostlang$frostc$Pair* _5;
frost$core$Object* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:43
_1 = &param0->tokens;
_2 = *_1;
_3 = _2;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
_4 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
_5 = _4;
org$frostlang$frostc$parser$Token$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp25->value = param1;
_6 = ((frost$core$Object*) $tmp25);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp26->value = param2;
_7 = ((frost$core$Object*) $tmp26);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_5, _6, _7);
_9 = ((frost$core$Object*) _4);
frost$collections$Array$add$frost$collections$Array$T(_3, _9);
_11 = _7;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_15);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$Token param1) {

org$frostlang$frostc$parser$SyntaxHighlighter$Kind local0;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local3;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local4;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local5;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local6;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local7;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local9;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local11;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local12;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local13;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local14;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local15;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local17;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local18;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local19;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local20;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local21;
frost$collections$Stack** _1;
frost$collections$Stack* _2;
frost$collections$Stack* _3;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$collections$CollectionView* _8;
$fn27 _9;
frost$core$Int _10;
frost$core$Int _12;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$collections$Stack** _20;
frost$collections$Stack* _21;
frost$collections$Stack* _22;
frost$core$Int _23;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$collections$CollectionView* _36;
$fn28 _37;
frost$core$Int _38;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$collections$Array** _50;
frost$collections$Array* _51;
frost$collections$CollectionView* _52;
$fn29 _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$collections$Array* _67;
frost$collections$Array** _68;
frost$collections$Array* _69;
frost$collections$CollectionView* _70;
$fn30 _71;
frost$core$Int _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
int64_t _76;
frost$core$Int _77;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
frost$core$Int _83;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
frost$collections$CollectionView* _90;
$fn31 _91;
frost$core$Int _92;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Int _99;
frost$core$Object*** _103;
frost$core$Object** _104;
frost$core$Int64 _105;
int64_t _106;
frost$core$Object* _107;
frost$core$Object* _108;
frost$core$Object* _111;
frost$core$Object* _112;
frost$core$Object* _114;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _117;
$fn32 _118;
frost$core$Object* _120;
org$frostlang$frostc$parser$Token$Kind _125;
frost$core$Int _126;
frost$core$Int _127;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
frost$core$Int _138;
frost$core$Int* _141;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _143;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _146;
$fn33 _147;
frost$core$Int _150;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _158;
frost$core$Int _160;
int64_t _163;
int64_t _164;
bool _165;
frost$core$Bit _166;
bool _168;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _178;
frost$core$Int _180;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _188;
frost$core$Int _190;
int64_t _193;
int64_t _194;
bool _195;
frost$core$Bit _196;
bool _198;
frost$core$Int _200;
int64_t _203;
int64_t _204;
bool _205;
frost$core$Bit _206;
bool _208;
frost$core$Int _210;
int64_t _213;
int64_t _214;
bool _215;
frost$core$Bit _216;
bool _218;
frost$core$Int _220;
int64_t _223;
int64_t _224;
bool _225;
frost$core$Bit _226;
bool _228;
frost$core$Int _231;
frost$core$Int* _234;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _236;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _239;
$fn34 _240;
frost$core$Int _243;
int64_t _246;
int64_t _247;
bool _248;
frost$core$Bit _249;
bool _251;
frost$core$Int _253;
int64_t _256;
int64_t _257;
bool _258;
frost$core$Bit _259;
bool _261;
frost$core$Int _264;
frost$core$Int* _267;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _269;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _272;
$fn35 _273;
frost$core$Int _276;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _284;
frost$core$Int _287;
frost$core$Int* _290;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _292;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _295;
$fn36 _296;
frost$core$Int _299;
int64_t _302;
int64_t _303;
bool _304;
frost$core$Bit _305;
bool _307;
frost$core$Int _310;
frost$core$Int* _313;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _315;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _318;
$fn37 _319;
frost$core$Int _322;
int64_t _325;
int64_t _326;
bool _327;
frost$core$Bit _328;
bool _330;
frost$core$Int _333;
frost$core$Int* _336;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _338;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _341;
$fn38 _342;
frost$core$Int _345;
int64_t _348;
int64_t _349;
bool _350;
frost$core$Bit _351;
bool _353;
frost$core$Int _355;
int64_t _358;
int64_t _359;
bool _360;
frost$core$Bit _361;
bool _363;
frost$core$Int _365;
int64_t _368;
int64_t _369;
bool _370;
frost$core$Bit _371;
bool _373;
frost$core$Int _375;
int64_t _378;
int64_t _379;
bool _380;
frost$core$Bit _381;
bool _383;
frost$core$Int _385;
int64_t _388;
int64_t _389;
bool _390;
frost$core$Bit _391;
bool _393;
frost$core$Int _395;
int64_t _398;
int64_t _399;
bool _400;
frost$core$Bit _401;
bool _403;
frost$core$Int _405;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _413;
frost$core$Int _415;
int64_t _418;
int64_t _419;
bool _420;
frost$core$Bit _421;
bool _423;
frost$core$Int _425;
int64_t _428;
int64_t _429;
bool _430;
frost$core$Bit _431;
bool _433;
frost$core$Int _435;
int64_t _438;
int64_t _439;
bool _440;
frost$core$Bit _441;
bool _443;
frost$core$Int _445;
int64_t _448;
int64_t _449;
bool _450;
frost$core$Bit _451;
bool _453;
frost$core$Int _455;
int64_t _458;
int64_t _459;
bool _460;
frost$core$Bit _461;
bool _463;
frost$core$Int _465;
int64_t _468;
int64_t _469;
bool _470;
frost$core$Bit _471;
bool _473;
frost$core$Int _475;
int64_t _478;
int64_t _479;
bool _480;
frost$core$Bit _481;
bool _483;
frost$core$Int _486;
frost$core$Int* _489;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _491;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _494;
$fn39 _495;
frost$core$Int _498;
int64_t _501;
int64_t _502;
bool _503;
frost$core$Bit _504;
bool _506;
frost$core$Int _508;
int64_t _511;
int64_t _512;
bool _513;
frost$core$Bit _514;
bool _516;
frost$core$Int _518;
int64_t _521;
int64_t _522;
bool _523;
frost$core$Bit _524;
bool _526;
frost$core$Int _528;
int64_t _531;
int64_t _532;
bool _533;
frost$core$Bit _534;
bool _536;
frost$core$Int _538;
int64_t _541;
int64_t _542;
bool _543;
frost$core$Bit _544;
bool _546;
frost$core$Int _548;
int64_t _551;
int64_t _552;
bool _553;
frost$core$Bit _554;
bool _556;
frost$core$Int _558;
int64_t _561;
int64_t _562;
bool _563;
frost$core$Bit _564;
bool _566;
frost$core$Int _568;
int64_t _571;
int64_t _572;
bool _573;
frost$core$Bit _574;
bool _576;
frost$core$Int _578;
int64_t _581;
int64_t _582;
bool _583;
frost$core$Bit _584;
bool _586;
frost$core$Int _588;
int64_t _591;
int64_t _592;
bool _593;
frost$core$Bit _594;
bool _596;
frost$core$Int _598;
int64_t _601;
int64_t _602;
bool _603;
frost$core$Bit _604;
bool _606;
frost$core$Int _608;
int64_t _611;
int64_t _612;
bool _613;
frost$core$Bit _614;
bool _616;
frost$core$Int _618;
int64_t _621;
int64_t _622;
bool _623;
frost$core$Bit _624;
bool _626;
frost$core$Int _628;
int64_t _631;
int64_t _632;
bool _633;
frost$core$Bit _634;
bool _636;
frost$core$Int _638;
int64_t _641;
int64_t _642;
bool _643;
frost$core$Bit _644;
bool _646;
frost$core$Int _649;
frost$core$Int* _652;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _654;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _657;
$fn40 _658;
frost$core$Int _661;
int64_t _664;
int64_t _665;
bool _666;
frost$core$Bit _667;
bool _669;
frost$core$Int _671;
int64_t _674;
int64_t _675;
bool _676;
frost$core$Bit _677;
bool _679;
frost$core$Int _682;
frost$core$Int* _685;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _687;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _690;
$fn41 _691;
frost$core$Int _694;
int64_t _697;
int64_t _698;
bool _699;
frost$core$Bit _700;
bool _702;
frost$core$Int _704;
int64_t _707;
int64_t _708;
bool _709;
frost$core$Bit _710;
bool _712;
frost$core$Int _714;
int64_t _717;
int64_t _718;
bool _719;
frost$core$Bit _720;
bool _722;
frost$core$Int _724;
int64_t _727;
int64_t _728;
bool _729;
frost$core$Bit _730;
bool _732;
frost$core$Int _734;
int64_t _737;
int64_t _738;
bool _739;
frost$core$Bit _740;
bool _742;
frost$core$Int _744;
int64_t _747;
int64_t _748;
bool _749;
frost$core$Bit _750;
bool _752;
frost$core$Int _754;
int64_t _757;
int64_t _758;
bool _759;
frost$core$Bit _760;
bool _762;
frost$core$Int _764;
int64_t _767;
int64_t _768;
bool _769;
frost$core$Bit _770;
bool _772;
frost$core$Int _774;
int64_t _777;
int64_t _778;
bool _779;
frost$core$Bit _780;
bool _782;
frost$core$Int _784;
int64_t _787;
int64_t _788;
bool _789;
frost$core$Bit _790;
bool _792;
frost$core$Int _794;
int64_t _797;
int64_t _798;
bool _799;
frost$core$Bit _800;
bool _802;
frost$core$Int _804;
int64_t _807;
int64_t _808;
bool _809;
frost$core$Bit _810;
bool _812;
frost$core$Int _814;
int64_t _817;
int64_t _818;
bool _819;
frost$core$Bit _820;
bool _822;
frost$core$Int _824;
int64_t _827;
int64_t _828;
bool _829;
frost$core$Bit _830;
bool _832;
frost$core$Int _834;
int64_t _837;
int64_t _838;
bool _839;
frost$core$Bit _840;
bool _842;
frost$core$Int _844;
int64_t _847;
int64_t _848;
bool _849;
frost$core$Bit _850;
bool _852;
frost$core$Int _854;
int64_t _857;
int64_t _858;
bool _859;
frost$core$Bit _860;
bool _862;
frost$core$Int _864;
int64_t _867;
int64_t _868;
bool _869;
frost$core$Bit _870;
bool _872;
frost$core$Int _874;
int64_t _877;
int64_t _878;
bool _879;
frost$core$Bit _880;
bool _882;
frost$core$Int _884;
int64_t _887;
int64_t _888;
bool _889;
frost$core$Bit _890;
bool _892;
frost$core$Int _894;
int64_t _897;
int64_t _898;
bool _899;
frost$core$Bit _900;
bool _902;
frost$core$Int _904;
int64_t _907;
int64_t _908;
bool _909;
frost$core$Bit _910;
bool _912;
frost$core$Int _914;
int64_t _917;
int64_t _918;
bool _919;
frost$core$Bit _920;
bool _922;
frost$core$Int _924;
int64_t _927;
int64_t _928;
bool _929;
frost$core$Bit _930;
bool _932;
frost$core$Int _934;
int64_t _937;
int64_t _938;
bool _939;
frost$core$Bit _940;
bool _942;
frost$core$Int _944;
int64_t _947;
int64_t _948;
bool _949;
frost$core$Bit _950;
bool _952;
frost$core$Int _954;
int64_t _957;
int64_t _958;
bool _959;
frost$core$Bit _960;
bool _962;
frost$core$Int _964;
int64_t _967;
int64_t _968;
bool _969;
frost$core$Bit _970;
bool _972;
frost$core$Int _974;
int64_t _977;
int64_t _978;
bool _979;
frost$core$Bit _980;
bool _982;
frost$core$Int _984;
int64_t _987;
int64_t _988;
bool _989;
frost$core$Bit _990;
bool _992;
frost$core$Int _994;
int64_t _997;
int64_t _998;
bool _999;
frost$core$Bit _1000;
bool _1002;
frost$core$Int _1004;
int64_t _1007;
int64_t _1008;
bool _1009;
frost$core$Bit _1010;
bool _1012;
frost$core$Int _1014;
int64_t _1017;
int64_t _1018;
bool _1019;
frost$core$Bit _1020;
bool _1022;
frost$core$Int _1024;
int64_t _1027;
int64_t _1028;
bool _1029;
frost$core$Bit _1030;
bool _1032;
frost$core$Int _1034;
int64_t _1037;
int64_t _1038;
bool _1039;
frost$core$Bit _1040;
bool _1042;
frost$core$Int _1044;
int64_t _1047;
int64_t _1048;
bool _1049;
frost$core$Bit _1050;
bool _1052;
frost$core$Int _1054;
int64_t _1057;
int64_t _1058;
bool _1059;
frost$core$Bit _1060;
bool _1062;
frost$core$Int _1064;
int64_t _1067;
int64_t _1068;
bool _1069;
frost$core$Bit _1070;
bool _1072;
frost$core$Int _1074;
int64_t _1077;
int64_t _1078;
bool _1079;
frost$core$Bit _1080;
bool _1082;
frost$core$Int _1084;
int64_t _1087;
int64_t _1088;
bool _1089;
frost$core$Bit _1090;
bool _1092;
frost$core$Int _1094;
int64_t _1097;
int64_t _1098;
bool _1099;
frost$core$Bit _1100;
bool _1102;
frost$core$Int _1104;
int64_t _1107;
int64_t _1108;
bool _1109;
frost$core$Bit _1110;
bool _1112;
frost$core$Int _1114;
int64_t _1117;
int64_t _1118;
bool _1119;
frost$core$Bit _1120;
bool _1122;
frost$core$Int _1124;
int64_t _1127;
int64_t _1128;
bool _1129;
frost$core$Bit _1130;
bool _1132;
frost$core$Int _1134;
int64_t _1137;
int64_t _1138;
bool _1139;
frost$core$Bit _1140;
bool _1142;
frost$core$Int _1144;
int64_t _1147;
int64_t _1148;
bool _1149;
frost$core$Bit _1150;
bool _1152;
frost$core$Int _1154;
int64_t _1157;
int64_t _1158;
bool _1159;
frost$core$Bit _1160;
bool _1162;
frost$core$Int _1164;
int64_t _1167;
int64_t _1168;
bool _1169;
frost$core$Bit _1170;
bool _1172;
frost$core$Int _1175;
frost$core$Int* _1178;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1180;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1183;
$fn42 _1184;
frost$core$Int _1188;
frost$core$Int* _1191;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1193;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1196;
$fn43 _1197;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:47
_1 = &param0->stack;
_2 = *_1;
_3 = _2;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from SyntaxHighlighter.frost:47:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_6 = &_3->contents;
_7 = *_6;
_8 = ((frost$collections$CollectionView*) _7);
ITable* $tmp44 = _8->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_9 = $tmp44->methods[0];
_10 = _9(_8);
_12 = (frost$core$Int) {0u};
_13 = _10.value;
_14 = _12.value;
_15 = _13 > _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:48
_20 = &param0->stack;
_21 = *_20;
_22 = _21;
_23 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:48:29
_25 = (frost$core$Int) {0u};
_26 = _23.value;
_27 = _25.value;
_28 = _26 >= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_34 = &_22->contents;
_35 = *_34;
_36 = ((frost$collections$CollectionView*) _35);
ITable* $tmp45 = _36->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_37 = $tmp45->methods[0];
_38 = _37(_36);
_40 = _23.value;
_41 = _38.value;
_42 = _40 < _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block5; else goto block6;
block6:;
_46 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _46, &$s47);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_50 = &_22->contents;
_51 = *_50;
_52 = ((frost$collections$CollectionView*) _51);
ITable* $tmp48 = _52->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
_53 = $tmp48->methods[0];
_54 = _53(_52);
_55 = _54.value;
_56 = _23.value;
_57 = _55 > _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block9; else goto block10;
block10:;
_61 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, _61);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_65 = &_22->contents;
_66 = *_65;
_67 = _66;
_68 = &_22->contents;
_69 = *_68;
_70 = ((frost$collections$CollectionView*) _69);
ITable* $tmp50 = _70->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_71 = $tmp50->methods[0];
_72 = _71(_70);
_73 = (frost$core$Int) {1u};
_74 = _72.value;
_75 = _73.value;
_76 = _74 - _75;
_77 = (frost$core$Int) {_76};
_78 = _77.value;
_79 = _23.value;
_80 = _78 - _79;
_81 = (frost$core$Int) {_80};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_83 = (frost$core$Int) {0u};
_84 = _81.value;
_85 = _83.value;
_86 = _84 >= _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block14; else goto block13;
block14:;
_90 = ((frost$collections$CollectionView*) _67);
ITable* $tmp51 = _90->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_91 = $tmp51->methods[0];
_92 = _91(_90);
_93 = _81.value;
_94 = _92.value;
_95 = _93 < _94;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block12; else goto block13;
block13:;
_99 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _99, &$s53);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_103 = &_67->data;
_104 = *_103;
_105 = frost$core$Int64$init$frost$core$Int(_81);
_106 = _105.value;
_107 = _104[_106];
_108 = _107;
frost$core$Frost$ref$frost$core$Object$Q(_108);
_111 = _107;
_112 = _111;
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = _107;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_117 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _111)->value;
_118 = ($fn54) param0->$class->vtable[5];
_118(param0, param1, _117);
_120 = _111;
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:49
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:52
_125 = param1.kind;
_126 = _125.$rawValue;
_127 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:53:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_130 = _126.value;
_131 = _127.value;
_132 = _130 == _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:54
_138 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_141 = &(&local1)->$rawValue;
*_141 = _138;
_143 = *(&local1);
*(&local0) = _143;
_146 = *(&local0);
_147 = ($fn55) param0->$class->vtable[5];
_147(param0, param1, _146);
goto block15;
block17:;
_150 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_153 = _126.value;
_154 = _150.value;
_155 = _153 == _154;
_156 = (frost$core$Bit) {_155};
_158 = _156.value;
if (_158) goto block20; else goto block21;
block21:;
_160 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_163 = _126.value;
_164 = _160.value;
_165 = _163 == _164;
_166 = (frost$core$Bit) {_165};
_168 = _166.value;
if (_168) goto block20; else goto block23;
block23:;
_170 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _126.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block20; else goto block25;
block25:;
_180 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_183 = _126.value;
_184 = _180.value;
_185 = _183 == _184;
_186 = (frost$core$Bit) {_185};
_188 = _186.value;
if (_188) goto block20; else goto block27;
block27:;
_190 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_193 = _126.value;
_194 = _190.value;
_195 = _193 == _194;
_196 = (frost$core$Bit) {_195};
_198 = _196.value;
if (_198) goto block20; else goto block29;
block29:;
_200 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_203 = _126.value;
_204 = _200.value;
_205 = _203 == _204;
_206 = (frost$core$Bit) {_205};
_208 = _206.value;
if (_208) goto block20; else goto block31;
block31:;
_210 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _126.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block20; else goto block33;
block33:;
_220 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_223 = _126.value;
_224 = _220.value;
_225 = _223 == _224;
_226 = (frost$core$Bit) {_225};
_228 = _226.value;
if (_228) goto block20; else goto block35;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:58
_231 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:58:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_234 = &(&local3)->$rawValue;
*_234 = _231;
_236 = *(&local3);
*(&local2) = _236;
_239 = *(&local2);
_240 = ($fn56) param0->$class->vtable[5];
_240(param0, param1, _239);
goto block15;
block35:;
_243 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_246 = _126.value;
_247 = _243.value;
_248 = _246 == _247;
_249 = (frost$core$Bit) {_248};
_251 = _249.value;
if (_251) goto block38; else goto block39;
block39:;
_253 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_256 = _126.value;
_257 = _253.value;
_258 = _256 == _257;
_259 = (frost$core$Bit) {_258};
_261 = _259.value;
if (_261) goto block38; else goto block41;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:61
_264 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:61:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_267 = &(&local5)->$rawValue;
*_267 = _264;
_269 = *(&local5);
*(&local4) = _269;
_272 = *(&local4);
_273 = ($fn57) param0->$class->vtable[5];
_273(param0, param1, _272);
goto block15;
block41:;
_276 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_279 = _126.value;
_280 = _276.value;
_281 = _279 == _280;
_282 = (frost$core$Bit) {_281};
_284 = _282.value;
if (_284) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:64
_287 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_290 = &(&local7)->$rawValue;
*_290 = _287;
_292 = *(&local7);
*(&local6) = _292;
_295 = *(&local6);
_296 = ($fn58) param0->$class->vtable[5];
_296(param0, param1, _295);
goto block15;
block45:;
_299 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:66:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_302 = _126.value;
_303 = _299.value;
_304 = _302 == _303;
_305 = (frost$core$Bit) {_304};
_307 = _305.value;
if (_307) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:67
_310 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_313 = &(&local9)->$rawValue;
*_313 = _310;
_315 = *(&local9);
*(&local8) = _315;
_318 = *(&local8);
_319 = ($fn59) param0->$class->vtable[5];
_319(param0, param1, _318);
goto block15;
block49:;
_322 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:69:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_325 = _126.value;
_326 = _322.value;
_327 = _325 == _326;
_328 = (frost$core$Bit) {_327};
_330 = _328.value;
if (_330) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:70
_333 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_336 = &(&local11)->$rawValue;
*_336 = _333;
_338 = *(&local11);
*(&local10) = _338;
_341 = *(&local10);
_342 = ($fn60) param0->$class->vtable[5];
_342(param0, param1, _341);
goto block15;
block53:;
_345 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_348 = _126.value;
_349 = _345.value;
_350 = _348 == _349;
_351 = (frost$core$Bit) {_350};
_353 = _351.value;
if (_353) goto block56; else goto block57;
block57:;
_355 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_358 = _126.value;
_359 = _355.value;
_360 = _358 == _359;
_361 = (frost$core$Bit) {_360};
_363 = _361.value;
if (_363) goto block56; else goto block59;
block59:;
_365 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_368 = _126.value;
_369 = _365.value;
_370 = _368 == _369;
_371 = (frost$core$Bit) {_370};
_373 = _371.value;
if (_373) goto block56; else goto block61;
block61:;
_375 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_378 = _126.value;
_379 = _375.value;
_380 = _378 == _379;
_381 = (frost$core$Bit) {_380};
_383 = _381.value;
if (_383) goto block56; else goto block63;
block63:;
_385 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_388 = _126.value;
_389 = _385.value;
_390 = _388 == _389;
_391 = (frost$core$Bit) {_390};
_393 = _391.value;
if (_393) goto block56; else goto block65;
block65:;
_395 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_398 = _126.value;
_399 = _395.value;
_400 = _398 == _399;
_401 = (frost$core$Bit) {_400};
_403 = _401.value;
if (_403) goto block56; else goto block67;
block67:;
_405 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_408 = _126.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block56; else goto block69;
block69:;
_415 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_418 = _126.value;
_419 = _415.value;
_420 = _418 == _419;
_421 = (frost$core$Bit) {_420};
_423 = _421.value;
if (_423) goto block56; else goto block71;
block71:;
_425 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_428 = _126.value;
_429 = _425.value;
_430 = _428 == _429;
_431 = (frost$core$Bit) {_430};
_433 = _431.value;
if (_433) goto block56; else goto block73;
block73:;
_435 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_438 = _126.value;
_439 = _435.value;
_440 = _438 == _439;
_441 = (frost$core$Bit) {_440};
_443 = _441.value;
if (_443) goto block56; else goto block75;
block75:;
_445 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_448 = _126.value;
_449 = _445.value;
_450 = _448 == _449;
_451 = (frost$core$Bit) {_450};
_453 = _451.value;
if (_453) goto block56; else goto block77;
block77:;
_455 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_458 = _126.value;
_459 = _455.value;
_460 = _458 == _459;
_461 = (frost$core$Bit) {_460};
_463 = _461.value;
if (_463) goto block56; else goto block79;
block79:;
_465 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_468 = _126.value;
_469 = _465.value;
_470 = _468 == _469;
_471 = (frost$core$Bit) {_470};
_473 = _471.value;
if (_473) goto block56; else goto block81;
block81:;
_475 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_478 = _126.value;
_479 = _475.value;
_480 = _478 == _479;
_481 = (frost$core$Bit) {_480};
_483 = _481.value;
if (_483) goto block56; else goto block83;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:76
_486 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_489 = &(&local13)->$rawValue;
*_489 = _486;
_491 = *(&local13);
*(&local12) = _491;
_494 = *(&local12);
_495 = ($fn61) param0->$class->vtable[5];
_495(param0, param1, _494);
goto block15;
block83:;
_498 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_501 = _126.value;
_502 = _498.value;
_503 = _501 == _502;
_504 = (frost$core$Bit) {_503};
_506 = _504.value;
if (_506) goto block86; else goto block87;
block87:;
_508 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_511 = _126.value;
_512 = _508.value;
_513 = _511 == _512;
_514 = (frost$core$Bit) {_513};
_516 = _514.value;
if (_516) goto block86; else goto block89;
block89:;
_518 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_521 = _126.value;
_522 = _518.value;
_523 = _521 == _522;
_524 = (frost$core$Bit) {_523};
_526 = _524.value;
if (_526) goto block86; else goto block91;
block91:;
_528 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_531 = _126.value;
_532 = _528.value;
_533 = _531 == _532;
_534 = (frost$core$Bit) {_533};
_536 = _534.value;
if (_536) goto block86; else goto block93;
block93:;
_538 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_541 = _126.value;
_542 = _538.value;
_543 = _541 == _542;
_544 = (frost$core$Bit) {_543};
_546 = _544.value;
if (_546) goto block86; else goto block95;
block95:;
_548 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _126.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block86; else goto block97;
block97:;
_558 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_561 = _126.value;
_562 = _558.value;
_563 = _561 == _562;
_564 = (frost$core$Bit) {_563};
_566 = _564.value;
if (_566) goto block86; else goto block99;
block99:;
_568 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_571 = _126.value;
_572 = _568.value;
_573 = _571 == _572;
_574 = (frost$core$Bit) {_573};
_576 = _574.value;
if (_576) goto block86; else goto block101;
block101:;
_578 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_581 = _126.value;
_582 = _578.value;
_583 = _581 == _582;
_584 = (frost$core$Bit) {_583};
_586 = _584.value;
if (_586) goto block86; else goto block103;
block103:;
_588 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_591 = _126.value;
_592 = _588.value;
_593 = _591 == _592;
_594 = (frost$core$Bit) {_593};
_596 = _594.value;
if (_596) goto block86; else goto block105;
block105:;
_598 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_601 = _126.value;
_602 = _598.value;
_603 = _601 == _602;
_604 = (frost$core$Bit) {_603};
_606 = _604.value;
if (_606) goto block86; else goto block107;
block107:;
_608 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_611 = _126.value;
_612 = _608.value;
_613 = _611 == _612;
_614 = (frost$core$Bit) {_613};
_616 = _614.value;
if (_616) goto block86; else goto block109;
block109:;
_618 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_621 = _126.value;
_622 = _618.value;
_623 = _621 == _622;
_624 = (frost$core$Bit) {_623};
_626 = _624.value;
if (_626) goto block86; else goto block111;
block111:;
_628 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_631 = _126.value;
_632 = _628.value;
_633 = _631 == _632;
_634 = (frost$core$Bit) {_633};
_636 = _634.value;
if (_636) goto block86; else goto block113;
block113:;
_638 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_641 = _126.value;
_642 = _638.value;
_643 = _641 == _642;
_644 = (frost$core$Bit) {_643};
_646 = _644.value;
if (_646) goto block86; else goto block115;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:82
_649 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_652 = &(&local15)->$rawValue;
*_652 = _649;
_654 = *(&local15);
*(&local14) = _654;
_657 = *(&local14);
_658 = ($fn62) param0->$class->vtable[5];
_658(param0, param1, _657);
goto block15;
block115:;
_661 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_664 = _126.value;
_665 = _661.value;
_666 = _664 == _665;
_667 = (frost$core$Bit) {_666};
_669 = _667.value;
if (_669) goto block118; else goto block119;
block119:;
_671 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_674 = _126.value;
_675 = _671.value;
_676 = _674 == _675;
_677 = (frost$core$Bit) {_676};
_679 = _677.value;
if (_679) goto block118; else goto block121;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:85
_682 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_685 = &(&local17)->$rawValue;
*_685 = _682;
_687 = *(&local17);
*(&local16) = _687;
_690 = *(&local16);
_691 = ($fn63) param0->$class->vtable[5];
_691(param0, param1, _690);
goto block15;
block121:;
_694 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_697 = _126.value;
_698 = _694.value;
_699 = _697 == _698;
_700 = (frost$core$Bit) {_699};
_702 = _700.value;
if (_702) goto block124; else goto block125;
block125:;
_704 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_707 = _126.value;
_708 = _704.value;
_709 = _707 == _708;
_710 = (frost$core$Bit) {_709};
_712 = _710.value;
if (_712) goto block124; else goto block127;
block127:;
_714 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_717 = _126.value;
_718 = _714.value;
_719 = _717 == _718;
_720 = (frost$core$Bit) {_719};
_722 = _720.value;
if (_722) goto block124; else goto block129;
block129:;
_724 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_727 = _126.value;
_728 = _724.value;
_729 = _727 == _728;
_730 = (frost$core$Bit) {_729};
_732 = _730.value;
if (_732) goto block124; else goto block131;
block131:;
_734 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_737 = _126.value;
_738 = _734.value;
_739 = _737 == _738;
_740 = (frost$core$Bit) {_739};
_742 = _740.value;
if (_742) goto block124; else goto block133;
block133:;
_744 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_747 = _126.value;
_748 = _744.value;
_749 = _747 == _748;
_750 = (frost$core$Bit) {_749};
_752 = _750.value;
if (_752) goto block124; else goto block135;
block135:;
_754 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_757 = _126.value;
_758 = _754.value;
_759 = _757 == _758;
_760 = (frost$core$Bit) {_759};
_762 = _760.value;
if (_762) goto block124; else goto block137;
block137:;
_764 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_767 = _126.value;
_768 = _764.value;
_769 = _767 == _768;
_770 = (frost$core$Bit) {_769};
_772 = _770.value;
if (_772) goto block124; else goto block139;
block139:;
_774 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_777 = _126.value;
_778 = _774.value;
_779 = _777 == _778;
_780 = (frost$core$Bit) {_779};
_782 = _780.value;
if (_782) goto block124; else goto block141;
block141:;
_784 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_787 = _126.value;
_788 = _784.value;
_789 = _787 == _788;
_790 = (frost$core$Bit) {_789};
_792 = _790.value;
if (_792) goto block124; else goto block143;
block143:;
_794 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_797 = _126.value;
_798 = _794.value;
_799 = _797 == _798;
_800 = (frost$core$Bit) {_799};
_802 = _800.value;
if (_802) goto block124; else goto block145;
block145:;
_804 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_807 = _126.value;
_808 = _804.value;
_809 = _807 == _808;
_810 = (frost$core$Bit) {_809};
_812 = _810.value;
if (_812) goto block124; else goto block147;
block147:;
_814 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_817 = _126.value;
_818 = _814.value;
_819 = _817 == _818;
_820 = (frost$core$Bit) {_819};
_822 = _820.value;
if (_822) goto block124; else goto block149;
block149:;
_824 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_827 = _126.value;
_828 = _824.value;
_829 = _827 == _828;
_830 = (frost$core$Bit) {_829};
_832 = _830.value;
if (_832) goto block124; else goto block151;
block151:;
_834 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_837 = _126.value;
_838 = _834.value;
_839 = _837 == _838;
_840 = (frost$core$Bit) {_839};
_842 = _840.value;
if (_842) goto block124; else goto block153;
block153:;
_844 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_847 = _126.value;
_848 = _844.value;
_849 = _847 == _848;
_850 = (frost$core$Bit) {_849};
_852 = _850.value;
if (_852) goto block124; else goto block155;
block155:;
_854 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_857 = _126.value;
_858 = _854.value;
_859 = _857 == _858;
_860 = (frost$core$Bit) {_859};
_862 = _860.value;
if (_862) goto block124; else goto block157;
block157:;
_864 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_867 = _126.value;
_868 = _864.value;
_869 = _867 == _868;
_870 = (frost$core$Bit) {_869};
_872 = _870.value;
if (_872) goto block124; else goto block159;
block159:;
_874 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_877 = _126.value;
_878 = _874.value;
_879 = _877 == _878;
_880 = (frost$core$Bit) {_879};
_882 = _880.value;
if (_882) goto block124; else goto block161;
block161:;
_884 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_887 = _126.value;
_888 = _884.value;
_889 = _887 == _888;
_890 = (frost$core$Bit) {_889};
_892 = _890.value;
if (_892) goto block124; else goto block163;
block163:;
_894 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_897 = _126.value;
_898 = _894.value;
_899 = _897 == _898;
_900 = (frost$core$Bit) {_899};
_902 = _900.value;
if (_902) goto block124; else goto block165;
block165:;
_904 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_907 = _126.value;
_908 = _904.value;
_909 = _907 == _908;
_910 = (frost$core$Bit) {_909};
_912 = _910.value;
if (_912) goto block124; else goto block167;
block167:;
_914 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_917 = _126.value;
_918 = _914.value;
_919 = _917 == _918;
_920 = (frost$core$Bit) {_919};
_922 = _920.value;
if (_922) goto block124; else goto block169;
block169:;
_924 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_927 = _126.value;
_928 = _924.value;
_929 = _927 == _928;
_930 = (frost$core$Bit) {_929};
_932 = _930.value;
if (_932) goto block124; else goto block171;
block171:;
_934 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_937 = _126.value;
_938 = _934.value;
_939 = _937 == _938;
_940 = (frost$core$Bit) {_939};
_942 = _940.value;
if (_942) goto block124; else goto block173;
block173:;
_944 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_947 = _126.value;
_948 = _944.value;
_949 = _947 == _948;
_950 = (frost$core$Bit) {_949};
_952 = _950.value;
if (_952) goto block124; else goto block175;
block175:;
_954 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_957 = _126.value;
_958 = _954.value;
_959 = _957 == _958;
_960 = (frost$core$Bit) {_959};
_962 = _960.value;
if (_962) goto block124; else goto block177;
block177:;
_964 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_967 = _126.value;
_968 = _964.value;
_969 = _967 == _968;
_970 = (frost$core$Bit) {_969};
_972 = _970.value;
if (_972) goto block124; else goto block179;
block179:;
_974 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_977 = _126.value;
_978 = _974.value;
_979 = _977 == _978;
_980 = (frost$core$Bit) {_979};
_982 = _980.value;
if (_982) goto block124; else goto block181;
block181:;
_984 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_987 = _126.value;
_988 = _984.value;
_989 = _987 == _988;
_990 = (frost$core$Bit) {_989};
_992 = _990.value;
if (_992) goto block124; else goto block183;
block183:;
_994 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_997 = _126.value;
_998 = _994.value;
_999 = _997 == _998;
_1000 = (frost$core$Bit) {_999};
_1002 = _1000.value;
if (_1002) goto block124; else goto block185;
block185:;
_1004 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1007 = _126.value;
_1008 = _1004.value;
_1009 = _1007 == _1008;
_1010 = (frost$core$Bit) {_1009};
_1012 = _1010.value;
if (_1012) goto block124; else goto block187;
block187:;
_1014 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1017 = _126.value;
_1018 = _1014.value;
_1019 = _1017 == _1018;
_1020 = (frost$core$Bit) {_1019};
_1022 = _1020.value;
if (_1022) goto block124; else goto block189;
block189:;
_1024 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1027 = _126.value;
_1028 = _1024.value;
_1029 = _1027 == _1028;
_1030 = (frost$core$Bit) {_1029};
_1032 = _1030.value;
if (_1032) goto block124; else goto block191;
block191:;
_1034 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1037 = _126.value;
_1038 = _1034.value;
_1039 = _1037 == _1038;
_1040 = (frost$core$Bit) {_1039};
_1042 = _1040.value;
if (_1042) goto block124; else goto block193;
block193:;
_1044 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1047 = _126.value;
_1048 = _1044.value;
_1049 = _1047 == _1048;
_1050 = (frost$core$Bit) {_1049};
_1052 = _1050.value;
if (_1052) goto block124; else goto block195;
block195:;
_1054 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1057 = _126.value;
_1058 = _1054.value;
_1059 = _1057 == _1058;
_1060 = (frost$core$Bit) {_1059};
_1062 = _1060.value;
if (_1062) goto block124; else goto block197;
block197:;
_1064 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1067 = _126.value;
_1068 = _1064.value;
_1069 = _1067 == _1068;
_1070 = (frost$core$Bit) {_1069};
_1072 = _1070.value;
if (_1072) goto block124; else goto block199;
block199:;
_1074 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1077 = _126.value;
_1078 = _1074.value;
_1079 = _1077 == _1078;
_1080 = (frost$core$Bit) {_1079};
_1082 = _1080.value;
if (_1082) goto block124; else goto block201;
block201:;
_1084 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1087 = _126.value;
_1088 = _1084.value;
_1089 = _1087 == _1088;
_1090 = (frost$core$Bit) {_1089};
_1092 = _1090.value;
if (_1092) goto block124; else goto block203;
block203:;
_1094 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _126.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block124; else goto block205;
block205:;
_1104 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1107 = _126.value;
_1108 = _1104.value;
_1109 = _1107 == _1108;
_1110 = (frost$core$Bit) {_1109};
_1112 = _1110.value;
if (_1112) goto block124; else goto block207;
block207:;
_1114 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1117 = _126.value;
_1118 = _1114.value;
_1119 = _1117 == _1118;
_1120 = (frost$core$Bit) {_1119};
_1122 = _1120.value;
if (_1122) goto block124; else goto block209;
block209:;
_1124 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1127 = _126.value;
_1128 = _1124.value;
_1129 = _1127 == _1128;
_1130 = (frost$core$Bit) {_1129};
_1132 = _1130.value;
if (_1132) goto block124; else goto block211;
block211:;
_1134 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1137 = _126.value;
_1138 = _1134.value;
_1139 = _1137 == _1138;
_1140 = (frost$core$Bit) {_1139};
_1142 = _1140.value;
if (_1142) goto block124; else goto block213;
block213:;
_1144 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1147 = _126.value;
_1148 = _1144.value;
_1149 = _1147 == _1148;
_1150 = (frost$core$Bit) {_1149};
_1152 = _1150.value;
if (_1152) goto block124; else goto block215;
block215:;
_1154 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1157 = _126.value;
_1158 = _1154.value;
_1159 = _1157 == _1158;
_1160 = (frost$core$Bit) {_1159};
_1162 = _1160.value;
if (_1162) goto block124; else goto block217;
block217:;
_1164 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1167 = _126.value;
_1168 = _1164.value;
_1169 = _1167 == _1168;
_1170 = (frost$core$Bit) {_1169};
_1172 = _1170.value;
if (_1172) goto block124; else goto block219;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:101
_1175 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:101:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1178 = &(&local19)->$rawValue;
*_1178 = _1175;
_1180 = *(&local19);
*(&local18) = _1180;
_1183 = *(&local18);
_1184 = ($fn64) param0->$class->vtable[5];
_1184(param0, param1, _1183);
goto block15;
block219:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:104
_1188 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:104:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1191 = &(&local21)->$rawValue;
*_1191 = _1188;
_1193 = *(&local21);
*(&local20) = _1193;
_1196 = *(&local20);
_1197 = ($fn65) param0->$class->vtable[5];
_1197(param0, param1, _1196);
goto block15;
block15:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$rewind(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$collections$CollectionView* _6;
$fn66 _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Object* _14;
org$frostlang$frostc$Pair* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:110
_1 = &param0->tokens;
_2 = *_1;
_3 = _2;
_4 = &param0->tokens;
_5 = *_4;
_6 = ((frost$collections$CollectionView*) _5);
ITable* $tmp67 = _6->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
_7 = $tmp67->methods[0];
_8 = _7(_6);
_9 = (frost$core$Int) {1u};
_10 = _8.value;
_11 = _9.value;
_12 = _10 - _11;
_13 = (frost$core$Int) {_12};
_14 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_3, _13);
_15 = ((org$frostlang$frostc$Pair*) _14);
_16 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$init(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$collections$Stack* _1;
frost$collections$Stack* _2;
frost$core$Object* _4;
frost$collections$Stack** _6;
frost$collections$Stack* _7;
frost$core$Object* _8;
frost$collections$Stack** _10;
frost$core$Object* _12;
frost$collections$Array* _15;
frost$collections$Array* _16;
frost$core$Object* _18;
frost$collections$Array** _20;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$collections$Array** _24;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:23
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
_1 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
_2 = _1;
frost$collections$Stack$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->stack;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->stack;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:26
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_15 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_16 = _15;
frost$collections$Array$init(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->tokens;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->tokens;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$core$Object* _1;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->stack;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->tokens;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

