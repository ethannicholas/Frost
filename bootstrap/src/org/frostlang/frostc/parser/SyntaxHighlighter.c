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

void org$frostlang$frostc$parser$SyntaxHighlighter$reset(void* rawSelf) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Bit _29;
frost$core$Range$LTfrost$core$Int$GT _30;
frost$core$Int _31;
frost$core$Int _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Object*** _51;
frost$core$Object** _52;
frost$core$Int _53;
frost$core$Int64 _54;
int64_t _55;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Int _61;
int64_t _62;
int64_t _63;
int64_t _64;
frost$core$Int _65;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
frost$collections$CollectionView* _4;
$fn2 _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _18;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
int64_t _128;
int64_t _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Object*** _135;
frost$core$Object** _136;
frost$core$Int _137;
frost$core$Int64 _138;
int64_t _139;
frost$core$Object* _140;
frost$core$Object* _141;
frost$core$Int _145;
int64_t _146;
int64_t _147;
int64_t _148;
frost$core$Int _149;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
frost$collections$CollectionView* _94;
$fn3 _95;
frost$core$Int _96;
frost$core$Int _97;
frost$core$Bit _98;
bool _102;
frost$core$Int _99;
frost$collections$Stack** _87;
frost$collections$Stack* _88;
frost$collections$Array** _91;
frost$collections$Array* _92;
frost$core$Int _106;
frost$core$Int* _107;
frost$core$Int _110;
frost$core$Int* _111;
frost$core$Int _112;
frost$core$Bit _113;
frost$core$Range$LTfrost$core$Int$GT _114;
frost$core$Int _115;
frost$core$Int _117;
frost$core$Bit _118;
bool _119;
frost$core$Int _120;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:29
_1 = &param0->tokens;
_2 = *_1;
// begin inline call to method frost.collections.Array.clear() from SyntaxHighlighter.frost:29:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_22 = (frost$core$Int) {0u};
_23 = &_2->_count;
*_23 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_26 = (frost$core$Int) {0u};
_27 = &_2->capacity;
_28 = *_27;
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_26, _28, _29);
_31 = _30.min;
*(&local0) = _31;
_33 = _30.max;
_34 = _30.inclusive;
_35 = _34.value;
_36 = (frost$core$Int) {1u};
if (_35) goto block9; else goto block10;
block9:;
_38 = _31.value;
_39 = _33.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block10:;
_44 = _31.value;
_45 = _33.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_51 = &_2->data;
_52 = *_51;
_53 = *(&local0);
_54 = frost$core$Int64$init$frost$core$Int(_53);
_55 = _54.value;
_56 = _52[_55];
_57 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_52[_55] = ((frost$core$Object*) NULL);
_61 = *(&local0);
_62 = _33.value;
_63 = _61.value;
_64 = _62 - _63;
_65 = (frost$core$Int) {_64};
if (_35) goto block12; else goto block13;
block12:;
_67 = _65.value;
_68 = _36.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block11; else goto block7;
block13:;
_73 = _65.value;
_74 = _36.value;
_75 = _73 > _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block11; else goto block7;
block11:;
_79 = _61.value;
_80 = _36.value;
_81 = _79 + _80;
_82 = (frost$core$Int) {_81};
*(&local0) = _82;
goto block6;
block7:;
_4 = ((frost$collections$CollectionView*) _2);
ITable* $tmp4 = _4->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_5 = $tmp4->methods[0];
_6 = _5(_4);
_7 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_18 = _13.value;
if (_18) goto block4; else goto block5;
block22:;
_122 = _115.value;
_123 = _117.value;
_124 = _122 <= _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block19; else goto block20;
block23:;
_128 = _115.value;
_129 = _117.value;
_130 = _128 < _129;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_135 = &_92->data;
_136 = *_135;
_137 = *(&local1);
_138 = frost$core$Int64$init$frost$core$Int(_137);
_139 = _138.value;
_140 = _136[_139];
_141 = _140;
frost$core$Frost$unref$frost$core$Object$Q(_141);
_136[_139] = ((frost$core$Object*) NULL);
_145 = *(&local1);
_146 = _117.value;
_147 = _145.value;
_148 = _146 - _147;
_149 = (frost$core$Int) {_148};
if (_119) goto block25; else goto block26;
block25:;
_151 = _149.value;
_152 = _120.value;
_153 = _151 >= _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block24; else goto block20;
block26:;
_157 = _149.value;
_158 = _120.value;
_159 = _157 > _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block24; else goto block20;
block24:;
_163 = _145.value;
_164 = _120.value;
_165 = _163 + _164;
_166 = (frost$core$Int) {_165};
*(&local1) = _166;
goto block19;
block20:;
_94 = ((frost$collections$CollectionView*) _92);
ITable* $tmp5 = _94->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_95 = $tmp5->methods[0];
_96 = _95(_94);
_97 = (frost$core$Int) {0u};
_98 = frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(_96, _97);
_102 = _98.value;
if (_102) goto block17; else goto block18;
block17:;
return;
block18:;
_99 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _99, &$s7);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:30
_87 = &param0->stack;
_88 = *_87;
// begin inline call to method frost.collections.Stack.clear() from SyntaxHighlighter.frost:30:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
_91 = &_88->contents;
_92 = *_91;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_106 = (frost$core$Int) {0u};
_107 = &_92->_count;
*_107 = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_110 = (frost$core$Int) {0u};
_111 = &_92->capacity;
_112 = *_111;
_113 = (frost$core$Bit) {false};
_114 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_110, _112, _113);
_115 = _114.min;
*(&local1) = _115;
_117 = _114.max;
_118 = _114.inclusive;
_119 = _118.value;
_120 = (frost$core$Int) {1u};
if (_119) goto block22; else goto block23;
block5:;
_15 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _15, &$s9);
abort(); // unreachable

}
void org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$collections$Stack** _1;
frost$collections$Stack* _2;
frost$core$Object* _3;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:34
_1 = &param0->stack;
_2 = *_1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp10->value = param1;
_3 = ((frost$core$Object*) $tmp10);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from SyntaxHighlighter.frost:34:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_6 = &_2->contents;
_7 = *_6;
_8 = _3;
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_11 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$collections$Stack** _1;
frost$collections$Stack* _2;
frost$core$Int _3;
frost$core$Int _5;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _10;
frost$collections$Array** _14;
frost$collections$Array* _15;
frost$collections$CollectionView* _16;
$fn11 _17;
frost$core$Int _18;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
frost$collections$Array** _30;
frost$collections$Array* _31;
frost$collections$CollectionView* _32;
$fn12 _33;
frost$core$Int _34;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$collections$Array** _45;
frost$collections$Array* _46;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$collections$CollectionView* _49;
$fn13 _50;
frost$core$Int _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$collections$CollectionView* _69;
$fn14 _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$Object*** _82;
frost$core$Object** _83;
frost$core$Int64 _84;
int64_t _85;
frost$core$Object* _86;
frost$core$Object* _87;
frost$core$Object* _90;
frost$core$Object* _91;
frost$core$Object* _93;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _96;
frost$core$Int _97;
frost$core$Int _98;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _106;
frost$core$Int _108;
frost$core$Object* _111;
frost$collections$Stack** _114;
frost$collections$Stack* _115;
frost$core$Object* _116;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _117;
frost$core$Object* _118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:38
_1 = &param0->stack;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:38:21
_5 = (frost$core$Int) {0u};
_6 = _3.value;
_7 = _5.value;
_8 = _6 >= _7;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_14 = &_2->contents;
_15 = *_14;
_16 = ((frost$collections$CollectionView*) _15);
ITable* $tmp15 = _16->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_17 = $tmp15->methods[0];
_18 = _17(_16);
_20 = _3.value;
_21 = _18.value;
_22 = _20 < _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block2; else goto block3;
block3:;
_26 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _26, &$s17);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_30 = &_2->contents;
_31 = *_30;
_32 = ((frost$collections$CollectionView*) _31);
ITable* $tmp18 = _32->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_33 = $tmp18->methods[0];
_34 = _33(_32);
_35 = _34.value;
_36 = _3.value;
_37 = _35 > _36;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block6; else goto block7;
block7:;
_41 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s19, _41);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_45 = &_2->contents;
_46 = *_45;
_47 = &_2->contents;
_48 = *_47;
_49 = ((frost$collections$CollectionView*) _48);
ITable* $tmp20 = _49->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_50 = $tmp20->methods[0];
_51 = _50(_49);
_52 = (frost$core$Int) {1u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 - _54;
_56 = (frost$core$Int) {_55};
_57 = _56.value;
_58 = _3.value;
_59 = _57 - _58;
_60 = (frost$core$Int) {_59};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_62 = (frost$core$Int) {0u};
_63 = _60.value;
_64 = _62.value;
_65 = _63 >= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block11; else goto block10;
block11:;
_69 = ((frost$collections$CollectionView*) _46);
ITable* $tmp21 = _69->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_70 = $tmp21->methods[0];
_71 = _70(_69);
_72 = _60.value;
_73 = _71.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block9; else goto block10;
block10:;
_78 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _78, &$s23);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_82 = &_46->data;
_83 = *_82;
_84 = frost$core$Int64$init$frost$core$Int(_60);
_85 = _84.value;
_86 = _83[_85];
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_90 = _86;
_91 = _90;
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = _86;
frost$core$Frost$unref$frost$core$Object$Q(_93);
_96 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _90)->value;
_97 = _96.$rawValue;
_98 = param1.$rawValue;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_101 = _97.value;
_102 = _98.value;
_103 = _101 == _102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block13; else goto block14;
block14:;
_108 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s24, _108);
abort(); // unreachable
block13:;
_111 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:39
_114 = &param0->stack;
_115 = *_114;
_116 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_115);
_117 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _116)->value;
_118 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_118);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$Token param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
org$frostlang$frostc$Pair* _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:43
_1 = &param0->tokens;
_2 = *_1;
_3 = (org$frostlang$frostc$Pair*) frostObjectAlloc(sizeof(org$frostlang$frostc$Pair), (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$parser$Token$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$Token$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp25->value = param1;
_4 = ((frost$core$Object*) $tmp25);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp26->value = param2;
_5 = ((frost$core$Object*) $tmp26);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(_3, _4, _5);
_7 = ((frost$core$Object*) _3);
frost$collections$Array$add$frost$collections$Array$T(_2, _7);
_9 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token(void* rawSelf, org$frostlang$frostc$parser$Token param1) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

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
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$collections$CollectionView* _7;
$fn27 _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$collections$Stack** _19;
frost$collections$Stack* _20;
frost$core$Int _21;
frost$core$Int _23;
int64_t _24;
int64_t _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$collections$Array** _32;
frost$collections$Array* _33;
frost$collections$CollectionView* _34;
$fn28 _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$collections$CollectionView* _50;
$fn29 _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _59;
frost$collections$Array** _63;
frost$collections$Array* _64;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$collections$CollectionView* _67;
$fn30 _68;
frost$core$Int _69;
frost$core$Int _70;
int64_t _71;
int64_t _72;
int64_t _73;
frost$core$Int _74;
int64_t _75;
int64_t _76;
int64_t _77;
frost$core$Int _78;
frost$core$Int _80;
int64_t _81;
int64_t _82;
bool _83;
frost$core$Bit _84;
bool _85;
frost$collections$CollectionView* _87;
$fn31 _88;
frost$core$Int _89;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
frost$core$Object*** _100;
frost$core$Object** _101;
frost$core$Int64 _102;
int64_t _103;
frost$core$Object* _104;
frost$core$Object* _105;
frost$core$Object* _108;
frost$core$Object* _109;
frost$core$Object* _111;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _114;
$fn32 _115;
frost$core$Object* _117;
org$frostlang$frostc$parser$Token$Kind _122;
frost$core$Int _123;
frost$core$Int _124;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _132;
frost$core$Int _135;
frost$core$Int* _138;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _140;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _143;
$fn33 _144;
frost$core$Int _147;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _155;
frost$core$Int _157;
int64_t _160;
int64_t _161;
bool _162;
frost$core$Bit _163;
bool _165;
frost$core$Int _167;
int64_t _170;
int64_t _171;
bool _172;
frost$core$Bit _173;
bool _175;
frost$core$Int _177;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _185;
frost$core$Int _187;
int64_t _190;
int64_t _191;
bool _192;
frost$core$Bit _193;
bool _195;
frost$core$Int _197;
int64_t _200;
int64_t _201;
bool _202;
frost$core$Bit _203;
bool _205;
frost$core$Int _207;
int64_t _210;
int64_t _211;
bool _212;
frost$core$Bit _213;
bool _215;
frost$core$Int _217;
int64_t _220;
int64_t _221;
bool _222;
frost$core$Bit _223;
bool _225;
frost$core$Int _228;
frost$core$Int* _231;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _233;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _236;
$fn34 _237;
frost$core$Int _240;
int64_t _243;
int64_t _244;
bool _245;
frost$core$Bit _246;
bool _248;
frost$core$Int _250;
int64_t _253;
int64_t _254;
bool _255;
frost$core$Bit _256;
bool _258;
frost$core$Int _261;
frost$core$Int* _264;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _266;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _269;
$fn35 _270;
frost$core$Int _273;
int64_t _276;
int64_t _277;
bool _278;
frost$core$Bit _279;
bool _281;
frost$core$Int _284;
frost$core$Int* _287;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _289;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _292;
$fn36 _293;
frost$core$Int _296;
int64_t _299;
int64_t _300;
bool _301;
frost$core$Bit _302;
bool _304;
frost$core$Int _307;
frost$core$Int* _310;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _312;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _315;
$fn37 _316;
frost$core$Int _319;
int64_t _322;
int64_t _323;
bool _324;
frost$core$Bit _325;
bool _327;
frost$core$Int _330;
frost$core$Int* _333;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _335;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _338;
$fn38 _339;
frost$core$Int _342;
int64_t _345;
int64_t _346;
bool _347;
frost$core$Bit _348;
bool _350;
frost$core$Int _352;
int64_t _355;
int64_t _356;
bool _357;
frost$core$Bit _358;
bool _360;
frost$core$Int _362;
int64_t _365;
int64_t _366;
bool _367;
frost$core$Bit _368;
bool _370;
frost$core$Int _372;
int64_t _375;
int64_t _376;
bool _377;
frost$core$Bit _378;
bool _380;
frost$core$Int _382;
int64_t _385;
int64_t _386;
bool _387;
frost$core$Bit _388;
bool _390;
frost$core$Int _392;
int64_t _395;
int64_t _396;
bool _397;
frost$core$Bit _398;
bool _400;
frost$core$Int _402;
int64_t _405;
int64_t _406;
bool _407;
frost$core$Bit _408;
bool _410;
frost$core$Int _412;
int64_t _415;
int64_t _416;
bool _417;
frost$core$Bit _418;
bool _420;
frost$core$Int _422;
int64_t _425;
int64_t _426;
bool _427;
frost$core$Bit _428;
bool _430;
frost$core$Int _432;
int64_t _435;
int64_t _436;
bool _437;
frost$core$Bit _438;
bool _440;
frost$core$Int _442;
int64_t _445;
int64_t _446;
bool _447;
frost$core$Bit _448;
bool _450;
frost$core$Int _452;
int64_t _455;
int64_t _456;
bool _457;
frost$core$Bit _458;
bool _460;
frost$core$Int _462;
int64_t _465;
int64_t _466;
bool _467;
frost$core$Bit _468;
bool _470;
frost$core$Int _472;
int64_t _475;
int64_t _476;
bool _477;
frost$core$Bit _478;
bool _480;
frost$core$Int _483;
frost$core$Int* _486;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _488;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _491;
$fn39 _492;
frost$core$Int _495;
int64_t _498;
int64_t _499;
bool _500;
frost$core$Bit _501;
bool _503;
frost$core$Int _505;
int64_t _508;
int64_t _509;
bool _510;
frost$core$Bit _511;
bool _513;
frost$core$Int _515;
int64_t _518;
int64_t _519;
bool _520;
frost$core$Bit _521;
bool _523;
frost$core$Int _525;
int64_t _528;
int64_t _529;
bool _530;
frost$core$Bit _531;
bool _533;
frost$core$Int _535;
int64_t _538;
int64_t _539;
bool _540;
frost$core$Bit _541;
bool _543;
frost$core$Int _545;
int64_t _548;
int64_t _549;
bool _550;
frost$core$Bit _551;
bool _553;
frost$core$Int _555;
int64_t _558;
int64_t _559;
bool _560;
frost$core$Bit _561;
bool _563;
frost$core$Int _565;
int64_t _568;
int64_t _569;
bool _570;
frost$core$Bit _571;
bool _573;
frost$core$Int _575;
int64_t _578;
int64_t _579;
bool _580;
frost$core$Bit _581;
bool _583;
frost$core$Int _585;
int64_t _588;
int64_t _589;
bool _590;
frost$core$Bit _591;
bool _593;
frost$core$Int _595;
int64_t _598;
int64_t _599;
bool _600;
frost$core$Bit _601;
bool _603;
frost$core$Int _605;
int64_t _608;
int64_t _609;
bool _610;
frost$core$Bit _611;
bool _613;
frost$core$Int _615;
int64_t _618;
int64_t _619;
bool _620;
frost$core$Bit _621;
bool _623;
frost$core$Int _625;
int64_t _628;
int64_t _629;
bool _630;
frost$core$Bit _631;
bool _633;
frost$core$Int _635;
int64_t _638;
int64_t _639;
bool _640;
frost$core$Bit _641;
bool _643;
frost$core$Int _646;
frost$core$Int* _649;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _651;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _654;
$fn40 _655;
frost$core$Int _658;
int64_t _661;
int64_t _662;
bool _663;
frost$core$Bit _664;
bool _666;
frost$core$Int _668;
int64_t _671;
int64_t _672;
bool _673;
frost$core$Bit _674;
bool _676;
frost$core$Int _679;
frost$core$Int* _682;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _684;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _687;
$fn41 _688;
frost$core$Int _691;
int64_t _694;
int64_t _695;
bool _696;
frost$core$Bit _697;
bool _699;
frost$core$Int _701;
int64_t _704;
int64_t _705;
bool _706;
frost$core$Bit _707;
bool _709;
frost$core$Int _711;
int64_t _714;
int64_t _715;
bool _716;
frost$core$Bit _717;
bool _719;
frost$core$Int _721;
int64_t _724;
int64_t _725;
bool _726;
frost$core$Bit _727;
bool _729;
frost$core$Int _731;
int64_t _734;
int64_t _735;
bool _736;
frost$core$Bit _737;
bool _739;
frost$core$Int _741;
int64_t _744;
int64_t _745;
bool _746;
frost$core$Bit _747;
bool _749;
frost$core$Int _751;
int64_t _754;
int64_t _755;
bool _756;
frost$core$Bit _757;
bool _759;
frost$core$Int _761;
int64_t _764;
int64_t _765;
bool _766;
frost$core$Bit _767;
bool _769;
frost$core$Int _771;
int64_t _774;
int64_t _775;
bool _776;
frost$core$Bit _777;
bool _779;
frost$core$Int _781;
int64_t _784;
int64_t _785;
bool _786;
frost$core$Bit _787;
bool _789;
frost$core$Int _791;
int64_t _794;
int64_t _795;
bool _796;
frost$core$Bit _797;
bool _799;
frost$core$Int _801;
int64_t _804;
int64_t _805;
bool _806;
frost$core$Bit _807;
bool _809;
frost$core$Int _811;
int64_t _814;
int64_t _815;
bool _816;
frost$core$Bit _817;
bool _819;
frost$core$Int _821;
int64_t _824;
int64_t _825;
bool _826;
frost$core$Bit _827;
bool _829;
frost$core$Int _831;
int64_t _834;
int64_t _835;
bool _836;
frost$core$Bit _837;
bool _839;
frost$core$Int _841;
int64_t _844;
int64_t _845;
bool _846;
frost$core$Bit _847;
bool _849;
frost$core$Int _851;
int64_t _854;
int64_t _855;
bool _856;
frost$core$Bit _857;
bool _859;
frost$core$Int _861;
int64_t _864;
int64_t _865;
bool _866;
frost$core$Bit _867;
bool _869;
frost$core$Int _871;
int64_t _874;
int64_t _875;
bool _876;
frost$core$Bit _877;
bool _879;
frost$core$Int _881;
int64_t _884;
int64_t _885;
bool _886;
frost$core$Bit _887;
bool _889;
frost$core$Int _891;
int64_t _894;
int64_t _895;
bool _896;
frost$core$Bit _897;
bool _899;
frost$core$Int _901;
int64_t _904;
int64_t _905;
bool _906;
frost$core$Bit _907;
bool _909;
frost$core$Int _911;
int64_t _914;
int64_t _915;
bool _916;
frost$core$Bit _917;
bool _919;
frost$core$Int _921;
int64_t _924;
int64_t _925;
bool _926;
frost$core$Bit _927;
bool _929;
frost$core$Int _931;
int64_t _934;
int64_t _935;
bool _936;
frost$core$Bit _937;
bool _939;
frost$core$Int _941;
int64_t _944;
int64_t _945;
bool _946;
frost$core$Bit _947;
bool _949;
frost$core$Int _951;
int64_t _954;
int64_t _955;
bool _956;
frost$core$Bit _957;
bool _959;
frost$core$Int _961;
int64_t _964;
int64_t _965;
bool _966;
frost$core$Bit _967;
bool _969;
frost$core$Int _971;
int64_t _974;
int64_t _975;
bool _976;
frost$core$Bit _977;
bool _979;
frost$core$Int _981;
int64_t _984;
int64_t _985;
bool _986;
frost$core$Bit _987;
bool _989;
frost$core$Int _991;
int64_t _994;
int64_t _995;
bool _996;
frost$core$Bit _997;
bool _999;
frost$core$Int _1001;
int64_t _1004;
int64_t _1005;
bool _1006;
frost$core$Bit _1007;
bool _1009;
frost$core$Int _1011;
int64_t _1014;
int64_t _1015;
bool _1016;
frost$core$Bit _1017;
bool _1019;
frost$core$Int _1021;
int64_t _1024;
int64_t _1025;
bool _1026;
frost$core$Bit _1027;
bool _1029;
frost$core$Int _1031;
int64_t _1034;
int64_t _1035;
bool _1036;
frost$core$Bit _1037;
bool _1039;
frost$core$Int _1041;
int64_t _1044;
int64_t _1045;
bool _1046;
frost$core$Bit _1047;
bool _1049;
frost$core$Int _1051;
int64_t _1054;
int64_t _1055;
bool _1056;
frost$core$Bit _1057;
bool _1059;
frost$core$Int _1061;
int64_t _1064;
int64_t _1065;
bool _1066;
frost$core$Bit _1067;
bool _1069;
frost$core$Int _1071;
int64_t _1074;
int64_t _1075;
bool _1076;
frost$core$Bit _1077;
bool _1079;
frost$core$Int _1081;
int64_t _1084;
int64_t _1085;
bool _1086;
frost$core$Bit _1087;
bool _1089;
frost$core$Int _1091;
int64_t _1094;
int64_t _1095;
bool _1096;
frost$core$Bit _1097;
bool _1099;
frost$core$Int _1101;
int64_t _1104;
int64_t _1105;
bool _1106;
frost$core$Bit _1107;
bool _1109;
frost$core$Int _1111;
int64_t _1114;
int64_t _1115;
bool _1116;
frost$core$Bit _1117;
bool _1119;
frost$core$Int _1121;
int64_t _1124;
int64_t _1125;
bool _1126;
frost$core$Bit _1127;
bool _1129;
frost$core$Int _1131;
int64_t _1134;
int64_t _1135;
bool _1136;
frost$core$Bit _1137;
bool _1139;
frost$core$Int _1141;
int64_t _1144;
int64_t _1145;
bool _1146;
frost$core$Bit _1147;
bool _1149;
frost$core$Int _1151;
int64_t _1154;
int64_t _1155;
bool _1156;
frost$core$Bit _1157;
bool _1159;
frost$core$Int _1161;
int64_t _1164;
int64_t _1165;
bool _1166;
frost$core$Bit _1167;
bool _1169;
frost$core$Int _1172;
frost$core$Int* _1175;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1177;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1180;
$fn42 _1181;
frost$core$Int _1185;
frost$core$Int* _1188;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1190;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1193;
$fn43 _1194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:47
_1 = &param0->stack;
_2 = *_1;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from SyntaxHighlighter.frost:47:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_5 = &_2->contents;
_6 = *_5;
_7 = ((frost$collections$CollectionView*) _6);
ITable* $tmp44 = _7->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_8 = $tmp44->methods[0];
_9 = _8(_7);
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 > _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:48
_19 = &param0->stack;
_20 = *_19;
_21 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:48:29
_23 = (frost$core$Int) {0u};
_24 = _21.value;
_25 = _23.value;
_26 = _24 >= _25;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_32 = &_20->contents;
_33 = *_32;
_34 = ((frost$collections$CollectionView*) _33);
ITable* $tmp45 = _34->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_35 = $tmp45->methods[0];
_36 = _35(_34);
_38 = _21.value;
_39 = _36.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block5; else goto block6;
block6:;
_44 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _44, &$s47);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_48 = &_20->contents;
_49 = *_48;
_50 = ((frost$collections$CollectionView*) _49);
ITable* $tmp48 = _50->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
_51 = $tmp48->methods[0];
_52 = _51(_50);
_53 = _52.value;
_54 = _21.value;
_55 = _53 > _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block9; else goto block10;
block10:;
_59 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, _59);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_63 = &_20->contents;
_64 = *_63;
_65 = &_20->contents;
_66 = *_65;
_67 = ((frost$collections$CollectionView*) _66);
ITable* $tmp50 = _67->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_68 = $tmp50->methods[0];
_69 = _68(_67);
_70 = (frost$core$Int) {1u};
_71 = _69.value;
_72 = _70.value;
_73 = _71 - _72;
_74 = (frost$core$Int) {_73};
_75 = _74.value;
_76 = _21.value;
_77 = _75 - _76;
_78 = (frost$core$Int) {_77};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_80 = (frost$core$Int) {0u};
_81 = _78.value;
_82 = _80.value;
_83 = _81 >= _82;
_84 = (frost$core$Bit) {_83};
_85 = _84.value;
if (_85) goto block14; else goto block13;
block14:;
_87 = ((frost$collections$CollectionView*) _64);
ITable* $tmp51 = _87->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_88 = $tmp51->methods[0];
_89 = _88(_87);
_90 = _78.value;
_91 = _89.value;
_92 = _90 < _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block12; else goto block13;
block13:;
_96 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _96, &$s53);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_100 = &_64->data;
_101 = *_100;
_102 = frost$core$Int64$init$frost$core$Int(_78);
_103 = _102.value;
_104 = _101[_103];
_105 = _104;
frost$core$Frost$ref$frost$core$Object$Q(_105);
_108 = _104;
_109 = _108;
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = _104;
frost$core$Frost$unref$frost$core$Object$Q(_111);
_114 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _108)->value;
_115 = ($fn54) param0->$class->vtable[5];
_115(param0, param1, _114);
_117 = _108;
frost$core$Frost$unref$frost$core$Object$Q(_117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:49
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:52
_122 = param1.kind;
_123 = _122.$rawValue;
_124 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:53:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_127 = _123.value;
_128 = _124.value;
_129 = _127 == _128;
_130 = (frost$core$Bit) {_129};
_132 = _130.value;
if (_132) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:54
_135 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_138 = &(&local1)->$rawValue;
*_138 = _135;
_140 = *(&local1);
*(&local0) = _140;
_143 = *(&local0);
_144 = ($fn55) param0->$class->vtable[5];
_144(param0, param1, _143);
goto block15;
block17:;
_147 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_150 = _123.value;
_151 = _147.value;
_152 = _150 == _151;
_153 = (frost$core$Bit) {_152};
_155 = _153.value;
if (_155) goto block20; else goto block21;
block21:;
_157 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_160 = _123.value;
_161 = _157.value;
_162 = _160 == _161;
_163 = (frost$core$Bit) {_162};
_165 = _163.value;
if (_165) goto block20; else goto block23;
block23:;
_167 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_170 = _123.value;
_171 = _167.value;
_172 = _170 == _171;
_173 = (frost$core$Bit) {_172};
_175 = _173.value;
if (_175) goto block20; else goto block25;
block25:;
_177 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_180 = _123.value;
_181 = _177.value;
_182 = _180 == _181;
_183 = (frost$core$Bit) {_182};
_185 = _183.value;
if (_185) goto block20; else goto block27;
block27:;
_187 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_190 = _123.value;
_191 = _187.value;
_192 = _190 == _191;
_193 = (frost$core$Bit) {_192};
_195 = _193.value;
if (_195) goto block20; else goto block29;
block29:;
_197 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _123.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block20; else goto block31;
block31:;
_207 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_210 = _123.value;
_211 = _207.value;
_212 = _210 == _211;
_213 = (frost$core$Bit) {_212};
_215 = _213.value;
if (_215) goto block20; else goto block33;
block33:;
_217 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_220 = _123.value;
_221 = _217.value;
_222 = _220 == _221;
_223 = (frost$core$Bit) {_222};
_225 = _223.value;
if (_225) goto block20; else goto block35;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:58
_228 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:58:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_231 = &(&local3)->$rawValue;
*_231 = _228;
_233 = *(&local3);
*(&local2) = _233;
_236 = *(&local2);
_237 = ($fn56) param0->$class->vtable[5];
_237(param0, param1, _236);
goto block15;
block35:;
_240 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _123.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block38; else goto block39;
block39:;
_250 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_253 = _123.value;
_254 = _250.value;
_255 = _253 == _254;
_256 = (frost$core$Bit) {_255};
_258 = _256.value;
if (_258) goto block38; else goto block41;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:61
_261 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:61:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_264 = &(&local5)->$rawValue;
*_264 = _261;
_266 = *(&local5);
*(&local4) = _266;
_269 = *(&local4);
_270 = ($fn57) param0->$class->vtable[5];
_270(param0, param1, _269);
goto block15;
block41:;
_273 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_276 = _123.value;
_277 = _273.value;
_278 = _276 == _277;
_279 = (frost$core$Bit) {_278};
_281 = _279.value;
if (_281) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:64
_284 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_287 = &(&local7)->$rawValue;
*_287 = _284;
_289 = *(&local7);
*(&local6) = _289;
_292 = *(&local6);
_293 = ($fn58) param0->$class->vtable[5];
_293(param0, param1, _292);
goto block15;
block45:;
_296 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:66:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_299 = _123.value;
_300 = _296.value;
_301 = _299 == _300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:67
_307 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_310 = &(&local9)->$rawValue;
*_310 = _307;
_312 = *(&local9);
*(&local8) = _312;
_315 = *(&local8);
_316 = ($fn59) param0->$class->vtable[5];
_316(param0, param1, _315);
goto block15;
block49:;
_319 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:69:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_322 = _123.value;
_323 = _319.value;
_324 = _322 == _323;
_325 = (frost$core$Bit) {_324};
_327 = _325.value;
if (_327) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:70
_330 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_333 = &(&local11)->$rawValue;
*_333 = _330;
_335 = *(&local11);
*(&local10) = _335;
_338 = *(&local10);
_339 = ($fn60) param0->$class->vtable[5];
_339(param0, param1, _338);
goto block15;
block53:;
_342 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_345 = _123.value;
_346 = _342.value;
_347 = _345 == _346;
_348 = (frost$core$Bit) {_347};
_350 = _348.value;
if (_350) goto block56; else goto block57;
block57:;
_352 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_355 = _123.value;
_356 = _352.value;
_357 = _355 == _356;
_358 = (frost$core$Bit) {_357};
_360 = _358.value;
if (_360) goto block56; else goto block59;
block59:;
_362 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_365 = _123.value;
_366 = _362.value;
_367 = _365 == _366;
_368 = (frost$core$Bit) {_367};
_370 = _368.value;
if (_370) goto block56; else goto block61;
block61:;
_372 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_375 = _123.value;
_376 = _372.value;
_377 = _375 == _376;
_378 = (frost$core$Bit) {_377};
_380 = _378.value;
if (_380) goto block56; else goto block63;
block63:;
_382 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_385 = _123.value;
_386 = _382.value;
_387 = _385 == _386;
_388 = (frost$core$Bit) {_387};
_390 = _388.value;
if (_390) goto block56; else goto block65;
block65:;
_392 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_395 = _123.value;
_396 = _392.value;
_397 = _395 == _396;
_398 = (frost$core$Bit) {_397};
_400 = _398.value;
if (_400) goto block56; else goto block67;
block67:;
_402 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_405 = _123.value;
_406 = _402.value;
_407 = _405 == _406;
_408 = (frost$core$Bit) {_407};
_410 = _408.value;
if (_410) goto block56; else goto block69;
block69:;
_412 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_415 = _123.value;
_416 = _412.value;
_417 = _415 == _416;
_418 = (frost$core$Bit) {_417};
_420 = _418.value;
if (_420) goto block56; else goto block71;
block71:;
_422 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_425 = _123.value;
_426 = _422.value;
_427 = _425 == _426;
_428 = (frost$core$Bit) {_427};
_430 = _428.value;
if (_430) goto block56; else goto block73;
block73:;
_432 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_435 = _123.value;
_436 = _432.value;
_437 = _435 == _436;
_438 = (frost$core$Bit) {_437};
_440 = _438.value;
if (_440) goto block56; else goto block75;
block75:;
_442 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_445 = _123.value;
_446 = _442.value;
_447 = _445 == _446;
_448 = (frost$core$Bit) {_447};
_450 = _448.value;
if (_450) goto block56; else goto block77;
block77:;
_452 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_455 = _123.value;
_456 = _452.value;
_457 = _455 == _456;
_458 = (frost$core$Bit) {_457};
_460 = _458.value;
if (_460) goto block56; else goto block79;
block79:;
_462 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_465 = _123.value;
_466 = _462.value;
_467 = _465 == _466;
_468 = (frost$core$Bit) {_467};
_470 = _468.value;
if (_470) goto block56; else goto block81;
block81:;
_472 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_475 = _123.value;
_476 = _472.value;
_477 = _475 == _476;
_478 = (frost$core$Bit) {_477};
_480 = _478.value;
if (_480) goto block56; else goto block83;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:76
_483 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_486 = &(&local13)->$rawValue;
*_486 = _483;
_488 = *(&local13);
*(&local12) = _488;
_491 = *(&local12);
_492 = ($fn61) param0->$class->vtable[5];
_492(param0, param1, _491);
goto block15;
block83:;
_495 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_498 = _123.value;
_499 = _495.value;
_500 = _498 == _499;
_501 = (frost$core$Bit) {_500};
_503 = _501.value;
if (_503) goto block86; else goto block87;
block87:;
_505 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_508 = _123.value;
_509 = _505.value;
_510 = _508 == _509;
_511 = (frost$core$Bit) {_510};
_513 = _511.value;
if (_513) goto block86; else goto block89;
block89:;
_515 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_518 = _123.value;
_519 = _515.value;
_520 = _518 == _519;
_521 = (frost$core$Bit) {_520};
_523 = _521.value;
if (_523) goto block86; else goto block91;
block91:;
_525 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_528 = _123.value;
_529 = _525.value;
_530 = _528 == _529;
_531 = (frost$core$Bit) {_530};
_533 = _531.value;
if (_533) goto block86; else goto block93;
block93:;
_535 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_538 = _123.value;
_539 = _535.value;
_540 = _538 == _539;
_541 = (frost$core$Bit) {_540};
_543 = _541.value;
if (_543) goto block86; else goto block95;
block95:;
_545 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_548 = _123.value;
_549 = _545.value;
_550 = _548 == _549;
_551 = (frost$core$Bit) {_550};
_553 = _551.value;
if (_553) goto block86; else goto block97;
block97:;
_555 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_558 = _123.value;
_559 = _555.value;
_560 = _558 == _559;
_561 = (frost$core$Bit) {_560};
_563 = _561.value;
if (_563) goto block86; else goto block99;
block99:;
_565 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_568 = _123.value;
_569 = _565.value;
_570 = _568 == _569;
_571 = (frost$core$Bit) {_570};
_573 = _571.value;
if (_573) goto block86; else goto block101;
block101:;
_575 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_578 = _123.value;
_579 = _575.value;
_580 = _578 == _579;
_581 = (frost$core$Bit) {_580};
_583 = _581.value;
if (_583) goto block86; else goto block103;
block103:;
_585 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_588 = _123.value;
_589 = _585.value;
_590 = _588 == _589;
_591 = (frost$core$Bit) {_590};
_593 = _591.value;
if (_593) goto block86; else goto block105;
block105:;
_595 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_598 = _123.value;
_599 = _595.value;
_600 = _598 == _599;
_601 = (frost$core$Bit) {_600};
_603 = _601.value;
if (_603) goto block86; else goto block107;
block107:;
_605 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_608 = _123.value;
_609 = _605.value;
_610 = _608 == _609;
_611 = (frost$core$Bit) {_610};
_613 = _611.value;
if (_613) goto block86; else goto block109;
block109:;
_615 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_618 = _123.value;
_619 = _615.value;
_620 = _618 == _619;
_621 = (frost$core$Bit) {_620};
_623 = _621.value;
if (_623) goto block86; else goto block111;
block111:;
_625 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_628 = _123.value;
_629 = _625.value;
_630 = _628 == _629;
_631 = (frost$core$Bit) {_630};
_633 = _631.value;
if (_633) goto block86; else goto block113;
block113:;
_635 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_638 = _123.value;
_639 = _635.value;
_640 = _638 == _639;
_641 = (frost$core$Bit) {_640};
_643 = _641.value;
if (_643) goto block86; else goto block115;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:82
_646 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_649 = &(&local15)->$rawValue;
*_649 = _646;
_651 = *(&local15);
*(&local14) = _651;
_654 = *(&local14);
_655 = ($fn62) param0->$class->vtable[5];
_655(param0, param1, _654);
goto block15;
block115:;
_658 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_661 = _123.value;
_662 = _658.value;
_663 = _661 == _662;
_664 = (frost$core$Bit) {_663};
_666 = _664.value;
if (_666) goto block118; else goto block119;
block119:;
_668 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_671 = _123.value;
_672 = _668.value;
_673 = _671 == _672;
_674 = (frost$core$Bit) {_673};
_676 = _674.value;
if (_676) goto block118; else goto block121;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:85
_679 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_682 = &(&local17)->$rawValue;
*_682 = _679;
_684 = *(&local17);
*(&local16) = _684;
_687 = *(&local16);
_688 = ($fn63) param0->$class->vtable[5];
_688(param0, param1, _687);
goto block15;
block121:;
_691 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_694 = _123.value;
_695 = _691.value;
_696 = _694 == _695;
_697 = (frost$core$Bit) {_696};
_699 = _697.value;
if (_699) goto block124; else goto block125;
block125:;
_701 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_704 = _123.value;
_705 = _701.value;
_706 = _704 == _705;
_707 = (frost$core$Bit) {_706};
_709 = _707.value;
if (_709) goto block124; else goto block127;
block127:;
_711 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_714 = _123.value;
_715 = _711.value;
_716 = _714 == _715;
_717 = (frost$core$Bit) {_716};
_719 = _717.value;
if (_719) goto block124; else goto block129;
block129:;
_721 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_724 = _123.value;
_725 = _721.value;
_726 = _724 == _725;
_727 = (frost$core$Bit) {_726};
_729 = _727.value;
if (_729) goto block124; else goto block131;
block131:;
_731 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_734 = _123.value;
_735 = _731.value;
_736 = _734 == _735;
_737 = (frost$core$Bit) {_736};
_739 = _737.value;
if (_739) goto block124; else goto block133;
block133:;
_741 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_744 = _123.value;
_745 = _741.value;
_746 = _744 == _745;
_747 = (frost$core$Bit) {_746};
_749 = _747.value;
if (_749) goto block124; else goto block135;
block135:;
_751 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_754 = _123.value;
_755 = _751.value;
_756 = _754 == _755;
_757 = (frost$core$Bit) {_756};
_759 = _757.value;
if (_759) goto block124; else goto block137;
block137:;
_761 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_764 = _123.value;
_765 = _761.value;
_766 = _764 == _765;
_767 = (frost$core$Bit) {_766};
_769 = _767.value;
if (_769) goto block124; else goto block139;
block139:;
_771 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_774 = _123.value;
_775 = _771.value;
_776 = _774 == _775;
_777 = (frost$core$Bit) {_776};
_779 = _777.value;
if (_779) goto block124; else goto block141;
block141:;
_781 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_784 = _123.value;
_785 = _781.value;
_786 = _784 == _785;
_787 = (frost$core$Bit) {_786};
_789 = _787.value;
if (_789) goto block124; else goto block143;
block143:;
_791 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_794 = _123.value;
_795 = _791.value;
_796 = _794 == _795;
_797 = (frost$core$Bit) {_796};
_799 = _797.value;
if (_799) goto block124; else goto block145;
block145:;
_801 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_804 = _123.value;
_805 = _801.value;
_806 = _804 == _805;
_807 = (frost$core$Bit) {_806};
_809 = _807.value;
if (_809) goto block124; else goto block147;
block147:;
_811 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_814 = _123.value;
_815 = _811.value;
_816 = _814 == _815;
_817 = (frost$core$Bit) {_816};
_819 = _817.value;
if (_819) goto block124; else goto block149;
block149:;
_821 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_824 = _123.value;
_825 = _821.value;
_826 = _824 == _825;
_827 = (frost$core$Bit) {_826};
_829 = _827.value;
if (_829) goto block124; else goto block151;
block151:;
_831 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_834 = _123.value;
_835 = _831.value;
_836 = _834 == _835;
_837 = (frost$core$Bit) {_836};
_839 = _837.value;
if (_839) goto block124; else goto block153;
block153:;
_841 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_844 = _123.value;
_845 = _841.value;
_846 = _844 == _845;
_847 = (frost$core$Bit) {_846};
_849 = _847.value;
if (_849) goto block124; else goto block155;
block155:;
_851 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_854 = _123.value;
_855 = _851.value;
_856 = _854 == _855;
_857 = (frost$core$Bit) {_856};
_859 = _857.value;
if (_859) goto block124; else goto block157;
block157:;
_861 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_864 = _123.value;
_865 = _861.value;
_866 = _864 == _865;
_867 = (frost$core$Bit) {_866};
_869 = _867.value;
if (_869) goto block124; else goto block159;
block159:;
_871 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_874 = _123.value;
_875 = _871.value;
_876 = _874 == _875;
_877 = (frost$core$Bit) {_876};
_879 = _877.value;
if (_879) goto block124; else goto block161;
block161:;
_881 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_884 = _123.value;
_885 = _881.value;
_886 = _884 == _885;
_887 = (frost$core$Bit) {_886};
_889 = _887.value;
if (_889) goto block124; else goto block163;
block163:;
_891 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_894 = _123.value;
_895 = _891.value;
_896 = _894 == _895;
_897 = (frost$core$Bit) {_896};
_899 = _897.value;
if (_899) goto block124; else goto block165;
block165:;
_901 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_904 = _123.value;
_905 = _901.value;
_906 = _904 == _905;
_907 = (frost$core$Bit) {_906};
_909 = _907.value;
if (_909) goto block124; else goto block167;
block167:;
_911 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_914 = _123.value;
_915 = _911.value;
_916 = _914 == _915;
_917 = (frost$core$Bit) {_916};
_919 = _917.value;
if (_919) goto block124; else goto block169;
block169:;
_921 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_924 = _123.value;
_925 = _921.value;
_926 = _924 == _925;
_927 = (frost$core$Bit) {_926};
_929 = _927.value;
if (_929) goto block124; else goto block171;
block171:;
_931 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_934 = _123.value;
_935 = _931.value;
_936 = _934 == _935;
_937 = (frost$core$Bit) {_936};
_939 = _937.value;
if (_939) goto block124; else goto block173;
block173:;
_941 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_944 = _123.value;
_945 = _941.value;
_946 = _944 == _945;
_947 = (frost$core$Bit) {_946};
_949 = _947.value;
if (_949) goto block124; else goto block175;
block175:;
_951 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_954 = _123.value;
_955 = _951.value;
_956 = _954 == _955;
_957 = (frost$core$Bit) {_956};
_959 = _957.value;
if (_959) goto block124; else goto block177;
block177:;
_961 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_964 = _123.value;
_965 = _961.value;
_966 = _964 == _965;
_967 = (frost$core$Bit) {_966};
_969 = _967.value;
if (_969) goto block124; else goto block179;
block179:;
_971 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_974 = _123.value;
_975 = _971.value;
_976 = _974 == _975;
_977 = (frost$core$Bit) {_976};
_979 = _977.value;
if (_979) goto block124; else goto block181;
block181:;
_981 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_984 = _123.value;
_985 = _981.value;
_986 = _984 == _985;
_987 = (frost$core$Bit) {_986};
_989 = _987.value;
if (_989) goto block124; else goto block183;
block183:;
_991 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_994 = _123.value;
_995 = _991.value;
_996 = _994 == _995;
_997 = (frost$core$Bit) {_996};
_999 = _997.value;
if (_999) goto block124; else goto block185;
block185:;
_1001 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1004 = _123.value;
_1005 = _1001.value;
_1006 = _1004 == _1005;
_1007 = (frost$core$Bit) {_1006};
_1009 = _1007.value;
if (_1009) goto block124; else goto block187;
block187:;
_1011 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1014 = _123.value;
_1015 = _1011.value;
_1016 = _1014 == _1015;
_1017 = (frost$core$Bit) {_1016};
_1019 = _1017.value;
if (_1019) goto block124; else goto block189;
block189:;
_1021 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1024 = _123.value;
_1025 = _1021.value;
_1026 = _1024 == _1025;
_1027 = (frost$core$Bit) {_1026};
_1029 = _1027.value;
if (_1029) goto block124; else goto block191;
block191:;
_1031 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1034 = _123.value;
_1035 = _1031.value;
_1036 = _1034 == _1035;
_1037 = (frost$core$Bit) {_1036};
_1039 = _1037.value;
if (_1039) goto block124; else goto block193;
block193:;
_1041 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1044 = _123.value;
_1045 = _1041.value;
_1046 = _1044 == _1045;
_1047 = (frost$core$Bit) {_1046};
_1049 = _1047.value;
if (_1049) goto block124; else goto block195;
block195:;
_1051 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1054 = _123.value;
_1055 = _1051.value;
_1056 = _1054 == _1055;
_1057 = (frost$core$Bit) {_1056};
_1059 = _1057.value;
if (_1059) goto block124; else goto block197;
block197:;
_1061 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1064 = _123.value;
_1065 = _1061.value;
_1066 = _1064 == _1065;
_1067 = (frost$core$Bit) {_1066};
_1069 = _1067.value;
if (_1069) goto block124; else goto block199;
block199:;
_1071 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1074 = _123.value;
_1075 = _1071.value;
_1076 = _1074 == _1075;
_1077 = (frost$core$Bit) {_1076};
_1079 = _1077.value;
if (_1079) goto block124; else goto block201;
block201:;
_1081 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1084 = _123.value;
_1085 = _1081.value;
_1086 = _1084 == _1085;
_1087 = (frost$core$Bit) {_1086};
_1089 = _1087.value;
if (_1089) goto block124; else goto block203;
block203:;
_1091 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1094 = _123.value;
_1095 = _1091.value;
_1096 = _1094 == _1095;
_1097 = (frost$core$Bit) {_1096};
_1099 = _1097.value;
if (_1099) goto block124; else goto block205;
block205:;
_1101 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1104 = _123.value;
_1105 = _1101.value;
_1106 = _1104 == _1105;
_1107 = (frost$core$Bit) {_1106};
_1109 = _1107.value;
if (_1109) goto block124; else goto block207;
block207:;
_1111 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1114 = _123.value;
_1115 = _1111.value;
_1116 = _1114 == _1115;
_1117 = (frost$core$Bit) {_1116};
_1119 = _1117.value;
if (_1119) goto block124; else goto block209;
block209:;
_1121 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1124 = _123.value;
_1125 = _1121.value;
_1126 = _1124 == _1125;
_1127 = (frost$core$Bit) {_1126};
_1129 = _1127.value;
if (_1129) goto block124; else goto block211;
block211:;
_1131 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1134 = _123.value;
_1135 = _1131.value;
_1136 = _1134 == _1135;
_1137 = (frost$core$Bit) {_1136};
_1139 = _1137.value;
if (_1139) goto block124; else goto block213;
block213:;
_1141 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1144 = _123.value;
_1145 = _1141.value;
_1146 = _1144 == _1145;
_1147 = (frost$core$Bit) {_1146};
_1149 = _1147.value;
if (_1149) goto block124; else goto block215;
block215:;
_1151 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1154 = _123.value;
_1155 = _1151.value;
_1156 = _1154 == _1155;
_1157 = (frost$core$Bit) {_1156};
_1159 = _1157.value;
if (_1159) goto block124; else goto block217;
block217:;
_1161 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1164 = _123.value;
_1165 = _1161.value;
_1166 = _1164 == _1165;
_1167 = (frost$core$Bit) {_1166};
_1169 = _1167.value;
if (_1169) goto block124; else goto block219;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:101
_1172 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:101:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1175 = &(&local19)->$rawValue;
*_1175 = _1172;
_1177 = *(&local19);
*(&local18) = _1177;
_1180 = *(&local18);
_1181 = ($fn64) param0->$class->vtable[5];
_1181(param0, param1, _1180);
goto block15;
block219:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:104
_1185 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:104:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1188 = &(&local21)->$rawValue;
*_1188 = _1185;
_1190 = *(&local21);
*(&local20) = _1190;
_1193 = *(&local20);
_1194 = ($fn65) param0->$class->vtable[5];
_1194(param0, param1, _1193);
goto block15;
block15:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$rewind(void* rawSelf) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$CollectionView* _5;
$fn66 _6;
frost$core$Int _7;
frost$core$Int _8;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int _12;
frost$core$Object* _13;
org$frostlang$frostc$Pair* _14;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:110
_1 = &param0->tokens;
_2 = *_1;
_3 = &param0->tokens;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp67 = _5->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
_6 = $tmp67->methods[0];
_7 = _6(_5);
_8 = (frost$core$Int) {1u};
_9 = _7.value;
_10 = _8.value;
_11 = _9 - _10;
_12 = (frost$core$Int) {_11};
_13 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2, _12);
_14 = ((org$frostlang$frostc$Pair*) _13);
_15 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_15);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$init(void* rawSelf) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

frost$collections$Stack* _1;
frost$core$Object* _3;
frost$collections$Stack** _5;
frost$collections$Stack* _6;
frost$core$Object* _7;
frost$collections$Stack** _9;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$core$Object* _16;
frost$collections$Array** _18;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$collections$Array** _22;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:23
_1 = (frost$collections$Stack*) frostObjectAlloc(sizeof(frost$collections$Stack), (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->stack;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->stack;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:26
_14 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->tokens;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->tokens;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$cleanup(void* rawSelf) {
org$frostlang$frostc$parser$SyntaxHighlighter* param0 = (org$frostlang$frostc$parser$SyntaxHighlighter*) rawSelf;

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

