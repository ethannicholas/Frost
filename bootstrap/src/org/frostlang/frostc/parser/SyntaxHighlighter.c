#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/unsafe/NewPointer.h"
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
frost$unsafe$NewPointer* _51;
frost$unsafe$NewPointer _52;
int64_t _53;
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
frost$collections$CollectionView* _4;
$fn2 _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _18;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
int64_t _129;
int64_t _130;
bool _131;
frost$core$Bit _132;
bool _133;
frost$unsafe$NewPointer* _136;
frost$unsafe$NewPointer _137;
int64_t _138;
frost$core$Int _139;
frost$core$Int64 _140;
int64_t _141;
frost$core$Object* _142;
frost$core$Object* _143;
frost$core$Int _147;
int64_t _148;
int64_t _149;
int64_t _150;
frost$core$Int _151;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _157;
int64_t _159;
int64_t _160;
bool _161;
frost$core$Bit _162;
bool _163;
int64_t _165;
int64_t _166;
int64_t _167;
frost$core$Int _168;
frost$collections$CollectionView* _95;
$fn3 _96;
frost$core$Int _97;
frost$core$Int _98;
frost$core$Bit _99;
bool _103;
frost$core$Int _100;
frost$collections$Stack** _88;
frost$collections$Stack* _89;
frost$collections$Array** _92;
frost$collections$Array* _93;
frost$core$Int _107;
frost$core$Int* _108;
frost$core$Int _111;
frost$core$Int* _112;
frost$core$Int _113;
frost$core$Bit _114;
frost$core$Range$LTfrost$core$Int$GT _115;
frost$core$Int _116;
frost$core$Int _118;
frost$core$Bit _119;
bool _120;
frost$core$Int _121;
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
_53 = _52.value;
_54 = *(&local0);
_55 = frost$core$Int64$init$frost$core$Int(_54);
_56 = _55.value;
_57 = ((frost$core$Object**)_53)[_56];
_58 = _57;
frost$core$Frost$unref$frost$core$Object$Q(_58);
((frost$core$Object**)_53)[_56] = ((frost$core$Object*) NULL);
_62 = *(&local0);
_63 = _33.value;
_64 = _62.value;
_65 = _63 - _64;
_66 = (frost$core$Int) {_65};
if (_35) goto block12; else goto block13;
block12:;
_68 = _66.value;
_69 = _36.value;
_70 = _68 >= _69;
_71 = (frost$core$Bit) {_70};
_72 = _71.value;
if (_72) goto block11; else goto block7;
block13:;
_74 = _66.value;
_75 = _36.value;
_76 = _74 > _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block11; else goto block7;
block11:;
_80 = _62.value;
_81 = _36.value;
_82 = _80 + _81;
_83 = (frost$core$Int) {_82};
*(&local0) = _83;
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
_123 = _116.value;
_124 = _118.value;
_125 = _123 <= _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block19; else goto block20;
block23:;
_129 = _116.value;
_130 = _118.value;
_131 = _129 < _130;
_132 = (frost$core$Bit) {_131};
_133 = _132.value;
if (_133) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_136 = &_93->data;
_137 = *_136;
_138 = _137.value;
_139 = *(&local1);
_140 = frost$core$Int64$init$frost$core$Int(_139);
_141 = _140.value;
_142 = ((frost$core$Object**)_138)[_141];
_143 = _142;
frost$core$Frost$unref$frost$core$Object$Q(_143);
((frost$core$Object**)_138)[_141] = ((frost$core$Object*) NULL);
_147 = *(&local1);
_148 = _118.value;
_149 = _147.value;
_150 = _148 - _149;
_151 = (frost$core$Int) {_150};
if (_120) goto block25; else goto block26;
block25:;
_153 = _151.value;
_154 = _121.value;
_155 = _153 >= _154;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block24; else goto block20;
block26:;
_159 = _151.value;
_160 = _121.value;
_161 = _159 > _160;
_162 = (frost$core$Bit) {_161};
_163 = _162.value;
if (_163) goto block24; else goto block20;
block24:;
_165 = _147.value;
_166 = _121.value;
_167 = _165 + _166;
_168 = (frost$core$Int) {_167};
*(&local1) = _168;
goto block19;
block20:;
_95 = ((frost$collections$CollectionView*) _93);
ITable* $tmp5 = _95->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_96 = $tmp5->methods[0];
_97 = _96(_95);
_98 = (frost$core$Int) {0u};
_99 = frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(_97, _98);
_103 = _99.value;
if (_103) goto block17; else goto block18;
block17:;
return;
block18:;
_100 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _100, &$s7);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:30
_88 = &param0->stack;
_89 = *_88;
// begin inline call to method frost.collections.Stack.clear() from SyntaxHighlighter.frost:30:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
_92 = &_89->contents;
_93 = *_92;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_107 = (frost$core$Int) {0u};
_108 = &_93->_count;
*_108 = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_111 = (frost$core$Int) {0u};
_112 = &_93->capacity;
_113 = *_112;
_114 = (frost$core$Bit) {false};
_115 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_111, _113, _114);
_116 = _115.min;
*(&local1) = _116;
_118 = _115.max;
_119 = _115.inclusive;
_120 = _119.value;
_121 = (frost$core$Int) {1u};
if (_120) goto block22; else goto block23;
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
frost$unsafe$NewPointer* _82;
frost$unsafe$NewPointer _83;
int64_t _84;
frost$core$Int64 _85;
int64_t _86;
frost$core$Object* _87;
frost$core$Object* _88;
frost$core$Object* _91;
frost$core$Object* _92;
frost$core$Object* _94;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _97;
frost$core$Int _98;
frost$core$Int _99;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
frost$core$Int _109;
frost$core$Object* _112;
frost$collections$Stack** _115;
frost$collections$Stack* _116;
frost$core$Object* _117;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _118;
frost$core$Object* _119;
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
_84 = _83.value;
_85 = frost$core$Int64$init$frost$core$Int(_60);
_86 = _85.value;
_87 = ((frost$core$Object**)_84)[_86];
_88 = _87;
frost$core$Frost$ref$frost$core$Object$Q(_88);
_91 = _87;
_92 = _91;
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_94);
_97 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _91)->value;
_98 = _97.$rawValue;
_99 = param1.$rawValue;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_102 = _98.value;
_103 = _99.value;
_104 = _102 == _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block13; else goto block14;
block14:;
_109 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s24, _109);
abort(); // unreachable
block13:;
_112 = _91;
frost$core$Frost$unref$frost$core$Object$Q(_112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:39
_115 = &param0->stack;
_116 = *_115;
_117 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_116);
_118 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _117)->value;
_119 = _117;
frost$core$Frost$unref$frost$core$Object$Q(_119);
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
frost$unsafe$NewPointer* _100;
frost$unsafe$NewPointer _101;
int64_t _102;
frost$core$Int64 _103;
int64_t _104;
frost$core$Object* _105;
frost$core$Object* _106;
frost$core$Object* _109;
frost$core$Object* _110;
frost$core$Object* _112;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _115;
$fn32 _116;
frost$core$Object* _118;
org$frostlang$frostc$parser$Token$Kind _123;
frost$core$Int _124;
frost$core$Int _125;
int64_t _128;
int64_t _129;
bool _130;
frost$core$Bit _131;
bool _133;
frost$core$Int _136;
frost$core$Int* _139;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _141;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _144;
$fn33 _145;
frost$core$Int _148;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _156;
frost$core$Int _158;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _166;
frost$core$Int _168;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _176;
frost$core$Int _178;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _186;
frost$core$Int _188;
int64_t _191;
int64_t _192;
bool _193;
frost$core$Bit _194;
bool _196;
frost$core$Int _198;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _206;
frost$core$Int _208;
int64_t _211;
int64_t _212;
bool _213;
frost$core$Bit _214;
bool _216;
frost$core$Int _218;
int64_t _221;
int64_t _222;
bool _223;
frost$core$Bit _224;
bool _226;
frost$core$Int _229;
frost$core$Int* _232;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _234;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _237;
$fn34 _238;
frost$core$Int _241;
int64_t _244;
int64_t _245;
bool _246;
frost$core$Bit _247;
bool _249;
frost$core$Int _251;
int64_t _254;
int64_t _255;
bool _256;
frost$core$Bit _257;
bool _259;
frost$core$Int _262;
frost$core$Int* _265;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _267;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _270;
$fn35 _271;
frost$core$Int _274;
int64_t _277;
int64_t _278;
bool _279;
frost$core$Bit _280;
bool _282;
frost$core$Int _285;
frost$core$Int* _288;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _290;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _293;
$fn36 _294;
frost$core$Int _297;
int64_t _300;
int64_t _301;
bool _302;
frost$core$Bit _303;
bool _305;
frost$core$Int _308;
frost$core$Int* _311;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _313;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _316;
$fn37 _317;
frost$core$Int _320;
int64_t _323;
int64_t _324;
bool _325;
frost$core$Bit _326;
bool _328;
frost$core$Int _331;
frost$core$Int* _334;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _336;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _339;
$fn38 _340;
frost$core$Int _343;
int64_t _346;
int64_t _347;
bool _348;
frost$core$Bit _349;
bool _351;
frost$core$Int _353;
int64_t _356;
int64_t _357;
bool _358;
frost$core$Bit _359;
bool _361;
frost$core$Int _363;
int64_t _366;
int64_t _367;
bool _368;
frost$core$Bit _369;
bool _371;
frost$core$Int _373;
int64_t _376;
int64_t _377;
bool _378;
frost$core$Bit _379;
bool _381;
frost$core$Int _383;
int64_t _386;
int64_t _387;
bool _388;
frost$core$Bit _389;
bool _391;
frost$core$Int _393;
int64_t _396;
int64_t _397;
bool _398;
frost$core$Bit _399;
bool _401;
frost$core$Int _403;
int64_t _406;
int64_t _407;
bool _408;
frost$core$Bit _409;
bool _411;
frost$core$Int _413;
int64_t _416;
int64_t _417;
bool _418;
frost$core$Bit _419;
bool _421;
frost$core$Int _423;
int64_t _426;
int64_t _427;
bool _428;
frost$core$Bit _429;
bool _431;
frost$core$Int _433;
int64_t _436;
int64_t _437;
bool _438;
frost$core$Bit _439;
bool _441;
frost$core$Int _443;
int64_t _446;
int64_t _447;
bool _448;
frost$core$Bit _449;
bool _451;
frost$core$Int _453;
int64_t _456;
int64_t _457;
bool _458;
frost$core$Bit _459;
bool _461;
frost$core$Int _463;
int64_t _466;
int64_t _467;
bool _468;
frost$core$Bit _469;
bool _471;
frost$core$Int _473;
int64_t _476;
int64_t _477;
bool _478;
frost$core$Bit _479;
bool _481;
frost$core$Int _484;
frost$core$Int* _487;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _489;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _492;
$fn39 _493;
frost$core$Int _496;
int64_t _499;
int64_t _500;
bool _501;
frost$core$Bit _502;
bool _504;
frost$core$Int _506;
int64_t _509;
int64_t _510;
bool _511;
frost$core$Bit _512;
bool _514;
frost$core$Int _516;
int64_t _519;
int64_t _520;
bool _521;
frost$core$Bit _522;
bool _524;
frost$core$Int _526;
int64_t _529;
int64_t _530;
bool _531;
frost$core$Bit _532;
bool _534;
frost$core$Int _536;
int64_t _539;
int64_t _540;
bool _541;
frost$core$Bit _542;
bool _544;
frost$core$Int _546;
int64_t _549;
int64_t _550;
bool _551;
frost$core$Bit _552;
bool _554;
frost$core$Int _556;
int64_t _559;
int64_t _560;
bool _561;
frost$core$Bit _562;
bool _564;
frost$core$Int _566;
int64_t _569;
int64_t _570;
bool _571;
frost$core$Bit _572;
bool _574;
frost$core$Int _576;
int64_t _579;
int64_t _580;
bool _581;
frost$core$Bit _582;
bool _584;
frost$core$Int _586;
int64_t _589;
int64_t _590;
bool _591;
frost$core$Bit _592;
bool _594;
frost$core$Int _596;
int64_t _599;
int64_t _600;
bool _601;
frost$core$Bit _602;
bool _604;
frost$core$Int _606;
int64_t _609;
int64_t _610;
bool _611;
frost$core$Bit _612;
bool _614;
frost$core$Int _616;
int64_t _619;
int64_t _620;
bool _621;
frost$core$Bit _622;
bool _624;
frost$core$Int _626;
int64_t _629;
int64_t _630;
bool _631;
frost$core$Bit _632;
bool _634;
frost$core$Int _636;
int64_t _639;
int64_t _640;
bool _641;
frost$core$Bit _642;
bool _644;
frost$core$Int _647;
frost$core$Int* _650;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _652;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _655;
$fn40 _656;
frost$core$Int _659;
int64_t _662;
int64_t _663;
bool _664;
frost$core$Bit _665;
bool _667;
frost$core$Int _669;
int64_t _672;
int64_t _673;
bool _674;
frost$core$Bit _675;
bool _677;
frost$core$Int _680;
frost$core$Int* _683;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _685;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _688;
$fn41 _689;
frost$core$Int _692;
int64_t _695;
int64_t _696;
bool _697;
frost$core$Bit _698;
bool _700;
frost$core$Int _702;
int64_t _705;
int64_t _706;
bool _707;
frost$core$Bit _708;
bool _710;
frost$core$Int _712;
int64_t _715;
int64_t _716;
bool _717;
frost$core$Bit _718;
bool _720;
frost$core$Int _722;
int64_t _725;
int64_t _726;
bool _727;
frost$core$Bit _728;
bool _730;
frost$core$Int _732;
int64_t _735;
int64_t _736;
bool _737;
frost$core$Bit _738;
bool _740;
frost$core$Int _742;
int64_t _745;
int64_t _746;
bool _747;
frost$core$Bit _748;
bool _750;
frost$core$Int _752;
int64_t _755;
int64_t _756;
bool _757;
frost$core$Bit _758;
bool _760;
frost$core$Int _762;
int64_t _765;
int64_t _766;
bool _767;
frost$core$Bit _768;
bool _770;
frost$core$Int _772;
int64_t _775;
int64_t _776;
bool _777;
frost$core$Bit _778;
bool _780;
frost$core$Int _782;
int64_t _785;
int64_t _786;
bool _787;
frost$core$Bit _788;
bool _790;
frost$core$Int _792;
int64_t _795;
int64_t _796;
bool _797;
frost$core$Bit _798;
bool _800;
frost$core$Int _802;
int64_t _805;
int64_t _806;
bool _807;
frost$core$Bit _808;
bool _810;
frost$core$Int _812;
int64_t _815;
int64_t _816;
bool _817;
frost$core$Bit _818;
bool _820;
frost$core$Int _822;
int64_t _825;
int64_t _826;
bool _827;
frost$core$Bit _828;
bool _830;
frost$core$Int _832;
int64_t _835;
int64_t _836;
bool _837;
frost$core$Bit _838;
bool _840;
frost$core$Int _842;
int64_t _845;
int64_t _846;
bool _847;
frost$core$Bit _848;
bool _850;
frost$core$Int _852;
int64_t _855;
int64_t _856;
bool _857;
frost$core$Bit _858;
bool _860;
frost$core$Int _862;
int64_t _865;
int64_t _866;
bool _867;
frost$core$Bit _868;
bool _870;
frost$core$Int _872;
int64_t _875;
int64_t _876;
bool _877;
frost$core$Bit _878;
bool _880;
frost$core$Int _882;
int64_t _885;
int64_t _886;
bool _887;
frost$core$Bit _888;
bool _890;
frost$core$Int _892;
int64_t _895;
int64_t _896;
bool _897;
frost$core$Bit _898;
bool _900;
frost$core$Int _902;
int64_t _905;
int64_t _906;
bool _907;
frost$core$Bit _908;
bool _910;
frost$core$Int _912;
int64_t _915;
int64_t _916;
bool _917;
frost$core$Bit _918;
bool _920;
frost$core$Int _922;
int64_t _925;
int64_t _926;
bool _927;
frost$core$Bit _928;
bool _930;
frost$core$Int _932;
int64_t _935;
int64_t _936;
bool _937;
frost$core$Bit _938;
bool _940;
frost$core$Int _942;
int64_t _945;
int64_t _946;
bool _947;
frost$core$Bit _948;
bool _950;
frost$core$Int _952;
int64_t _955;
int64_t _956;
bool _957;
frost$core$Bit _958;
bool _960;
frost$core$Int _962;
int64_t _965;
int64_t _966;
bool _967;
frost$core$Bit _968;
bool _970;
frost$core$Int _972;
int64_t _975;
int64_t _976;
bool _977;
frost$core$Bit _978;
bool _980;
frost$core$Int _982;
int64_t _985;
int64_t _986;
bool _987;
frost$core$Bit _988;
bool _990;
frost$core$Int _992;
int64_t _995;
int64_t _996;
bool _997;
frost$core$Bit _998;
bool _1000;
frost$core$Int _1002;
int64_t _1005;
int64_t _1006;
bool _1007;
frost$core$Bit _1008;
bool _1010;
frost$core$Int _1012;
int64_t _1015;
int64_t _1016;
bool _1017;
frost$core$Bit _1018;
bool _1020;
frost$core$Int _1022;
int64_t _1025;
int64_t _1026;
bool _1027;
frost$core$Bit _1028;
bool _1030;
frost$core$Int _1032;
int64_t _1035;
int64_t _1036;
bool _1037;
frost$core$Bit _1038;
bool _1040;
frost$core$Int _1042;
int64_t _1045;
int64_t _1046;
bool _1047;
frost$core$Bit _1048;
bool _1050;
frost$core$Int _1052;
int64_t _1055;
int64_t _1056;
bool _1057;
frost$core$Bit _1058;
bool _1060;
frost$core$Int _1062;
int64_t _1065;
int64_t _1066;
bool _1067;
frost$core$Bit _1068;
bool _1070;
frost$core$Int _1072;
int64_t _1075;
int64_t _1076;
bool _1077;
frost$core$Bit _1078;
bool _1080;
frost$core$Int _1082;
int64_t _1085;
int64_t _1086;
bool _1087;
frost$core$Bit _1088;
bool _1090;
frost$core$Int _1092;
int64_t _1095;
int64_t _1096;
bool _1097;
frost$core$Bit _1098;
bool _1100;
frost$core$Int _1102;
int64_t _1105;
int64_t _1106;
bool _1107;
frost$core$Bit _1108;
bool _1110;
frost$core$Int _1112;
int64_t _1115;
int64_t _1116;
bool _1117;
frost$core$Bit _1118;
bool _1120;
frost$core$Int _1122;
int64_t _1125;
int64_t _1126;
bool _1127;
frost$core$Bit _1128;
bool _1130;
frost$core$Int _1132;
int64_t _1135;
int64_t _1136;
bool _1137;
frost$core$Bit _1138;
bool _1140;
frost$core$Int _1142;
int64_t _1145;
int64_t _1146;
bool _1147;
frost$core$Bit _1148;
bool _1150;
frost$core$Int _1152;
int64_t _1155;
int64_t _1156;
bool _1157;
frost$core$Bit _1158;
bool _1160;
frost$core$Int _1162;
int64_t _1165;
int64_t _1166;
bool _1167;
frost$core$Bit _1168;
bool _1170;
frost$core$Int _1173;
frost$core$Int* _1176;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1178;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1181;
$fn42 _1182;
frost$core$Int _1186;
frost$core$Int* _1189;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1191;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _1194;
$fn43 _1195;
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
_102 = _101.value;
_103 = frost$core$Int64$init$frost$core$Int(_78);
_104 = _103.value;
_105 = ((frost$core$Object**)_102)[_104];
_106 = _105;
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = _105;
_110 = _109;
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_112);
_115 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) _109)->value;
_116 = ($fn54) param0->$class->vtable[5];
_116(param0, param1, _115);
_118 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:49
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:52
_123 = param1.kind;
_124 = _123.$rawValue;
_125 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:53:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_128 = _124.value;
_129 = _125.value;
_130 = _128 == _129;
_131 = (frost$core$Bit) {_130};
_133 = _131.value;
if (_133) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:54
_136 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_139 = &(&local1)->$rawValue;
*_139 = _136;
_141 = *(&local1);
*(&local0) = _141;
_144 = *(&local0);
_145 = ($fn55) param0->$class->vtable[5];
_145(param0, param1, _144);
goto block15;
block17:;
_148 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_151 = _124.value;
_152 = _148.value;
_153 = _151 == _152;
_154 = (frost$core$Bit) {_153};
_156 = _154.value;
if (_156) goto block20; else goto block21;
block21:;
_158 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _124.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block20; else goto block23;
block23:;
_168 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_171 = _124.value;
_172 = _168.value;
_173 = _171 == _172;
_174 = (frost$core$Bit) {_173};
_176 = _174.value;
if (_176) goto block20; else goto block25;
block25:;
_178 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_181 = _124.value;
_182 = _178.value;
_183 = _181 == _182;
_184 = (frost$core$Bit) {_183};
_186 = _184.value;
if (_186) goto block20; else goto block27;
block27:;
_188 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_191 = _124.value;
_192 = _188.value;
_193 = _191 == _192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block20; else goto block29;
block29:;
_198 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _124.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block20; else goto block31;
block31:;
_208 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_211 = _124.value;
_212 = _208.value;
_213 = _211 == _212;
_214 = (frost$core$Bit) {_213};
_216 = _214.value;
if (_216) goto block20; else goto block33;
block33:;
_218 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_221 = _124.value;
_222 = _218.value;
_223 = _221 == _222;
_224 = (frost$core$Bit) {_223};
_226 = _224.value;
if (_226) goto block20; else goto block35;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:58
_229 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:58:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_232 = &(&local3)->$rawValue;
*_232 = _229;
_234 = *(&local3);
*(&local2) = _234;
_237 = *(&local2);
_238 = ($fn56) param0->$class->vtable[5];
_238(param0, param1, _237);
goto block15;
block35:;
_241 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_244 = _124.value;
_245 = _241.value;
_246 = _244 == _245;
_247 = (frost$core$Bit) {_246};
_249 = _247.value;
if (_249) goto block38; else goto block39;
block39:;
_251 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_254 = _124.value;
_255 = _251.value;
_256 = _254 == _255;
_257 = (frost$core$Bit) {_256};
_259 = _257.value;
if (_259) goto block38; else goto block41;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:61
_262 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:61:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_265 = &(&local5)->$rawValue;
*_265 = _262;
_267 = *(&local5);
*(&local4) = _267;
_270 = *(&local4);
_271 = ($fn57) param0->$class->vtable[5];
_271(param0, param1, _270);
goto block15;
block41:;
_274 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_277 = _124.value;
_278 = _274.value;
_279 = _277 == _278;
_280 = (frost$core$Bit) {_279};
_282 = _280.value;
if (_282) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:64
_285 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_288 = &(&local7)->$rawValue;
*_288 = _285;
_290 = *(&local7);
*(&local6) = _290;
_293 = *(&local6);
_294 = ($fn58) param0->$class->vtable[5];
_294(param0, param1, _293);
goto block15;
block45:;
_297 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:66:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_300 = _124.value;
_301 = _297.value;
_302 = _300 == _301;
_303 = (frost$core$Bit) {_302};
_305 = _303.value;
if (_305) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:67
_308 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_311 = &(&local9)->$rawValue;
*_311 = _308;
_313 = *(&local9);
*(&local8) = _313;
_316 = *(&local8);
_317 = ($fn59) param0->$class->vtable[5];
_317(param0, param1, _316);
goto block15;
block49:;
_320 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:69:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_323 = _124.value;
_324 = _320.value;
_325 = _323 == _324;
_326 = (frost$core$Bit) {_325};
_328 = _326.value;
if (_328) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:70
_331 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_334 = &(&local11)->$rawValue;
*_334 = _331;
_336 = *(&local11);
*(&local10) = _336;
_339 = *(&local10);
_340 = ($fn60) param0->$class->vtable[5];
_340(param0, param1, _339);
goto block15;
block53:;
_343 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_346 = _124.value;
_347 = _343.value;
_348 = _346 == _347;
_349 = (frost$core$Bit) {_348};
_351 = _349.value;
if (_351) goto block56; else goto block57;
block57:;
_353 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_356 = _124.value;
_357 = _353.value;
_358 = _356 == _357;
_359 = (frost$core$Bit) {_358};
_361 = _359.value;
if (_361) goto block56; else goto block59;
block59:;
_363 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_366 = _124.value;
_367 = _363.value;
_368 = _366 == _367;
_369 = (frost$core$Bit) {_368};
_371 = _369.value;
if (_371) goto block56; else goto block61;
block61:;
_373 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_376 = _124.value;
_377 = _373.value;
_378 = _376 == _377;
_379 = (frost$core$Bit) {_378};
_381 = _379.value;
if (_381) goto block56; else goto block63;
block63:;
_383 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_386 = _124.value;
_387 = _383.value;
_388 = _386 == _387;
_389 = (frost$core$Bit) {_388};
_391 = _389.value;
if (_391) goto block56; else goto block65;
block65:;
_393 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_396 = _124.value;
_397 = _393.value;
_398 = _396 == _397;
_399 = (frost$core$Bit) {_398};
_401 = _399.value;
if (_401) goto block56; else goto block67;
block67:;
_403 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_406 = _124.value;
_407 = _403.value;
_408 = _406 == _407;
_409 = (frost$core$Bit) {_408};
_411 = _409.value;
if (_411) goto block56; else goto block69;
block69:;
_413 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_416 = _124.value;
_417 = _413.value;
_418 = _416 == _417;
_419 = (frost$core$Bit) {_418};
_421 = _419.value;
if (_421) goto block56; else goto block71;
block71:;
_423 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_426 = _124.value;
_427 = _423.value;
_428 = _426 == _427;
_429 = (frost$core$Bit) {_428};
_431 = _429.value;
if (_431) goto block56; else goto block73;
block73:;
_433 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_436 = _124.value;
_437 = _433.value;
_438 = _436 == _437;
_439 = (frost$core$Bit) {_438};
_441 = _439.value;
if (_441) goto block56; else goto block75;
block75:;
_443 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_446 = _124.value;
_447 = _443.value;
_448 = _446 == _447;
_449 = (frost$core$Bit) {_448};
_451 = _449.value;
if (_451) goto block56; else goto block77;
block77:;
_453 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_456 = _124.value;
_457 = _453.value;
_458 = _456 == _457;
_459 = (frost$core$Bit) {_458};
_461 = _459.value;
if (_461) goto block56; else goto block79;
block79:;
_463 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_466 = _124.value;
_467 = _463.value;
_468 = _466 == _467;
_469 = (frost$core$Bit) {_468};
_471 = _469.value;
if (_471) goto block56; else goto block81;
block81:;
_473 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_476 = _124.value;
_477 = _473.value;
_478 = _476 == _477;
_479 = (frost$core$Bit) {_478};
_481 = _479.value;
if (_481) goto block56; else goto block83;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:76
_484 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_487 = &(&local13)->$rawValue;
*_487 = _484;
_489 = *(&local13);
*(&local12) = _489;
_492 = *(&local12);
_493 = ($fn61) param0->$class->vtable[5];
_493(param0, param1, _492);
goto block15;
block83:;
_496 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_499 = _124.value;
_500 = _496.value;
_501 = _499 == _500;
_502 = (frost$core$Bit) {_501};
_504 = _502.value;
if (_504) goto block86; else goto block87;
block87:;
_506 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_509 = _124.value;
_510 = _506.value;
_511 = _509 == _510;
_512 = (frost$core$Bit) {_511};
_514 = _512.value;
if (_514) goto block86; else goto block89;
block89:;
_516 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_519 = _124.value;
_520 = _516.value;
_521 = _519 == _520;
_522 = (frost$core$Bit) {_521};
_524 = _522.value;
if (_524) goto block86; else goto block91;
block91:;
_526 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_529 = _124.value;
_530 = _526.value;
_531 = _529 == _530;
_532 = (frost$core$Bit) {_531};
_534 = _532.value;
if (_534) goto block86; else goto block93;
block93:;
_536 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_539 = _124.value;
_540 = _536.value;
_541 = _539 == _540;
_542 = (frost$core$Bit) {_541};
_544 = _542.value;
if (_544) goto block86; else goto block95;
block95:;
_546 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_549 = _124.value;
_550 = _546.value;
_551 = _549 == _550;
_552 = (frost$core$Bit) {_551};
_554 = _552.value;
if (_554) goto block86; else goto block97;
block97:;
_556 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_559 = _124.value;
_560 = _556.value;
_561 = _559 == _560;
_562 = (frost$core$Bit) {_561};
_564 = _562.value;
if (_564) goto block86; else goto block99;
block99:;
_566 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_569 = _124.value;
_570 = _566.value;
_571 = _569 == _570;
_572 = (frost$core$Bit) {_571};
_574 = _572.value;
if (_574) goto block86; else goto block101;
block101:;
_576 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_579 = _124.value;
_580 = _576.value;
_581 = _579 == _580;
_582 = (frost$core$Bit) {_581};
_584 = _582.value;
if (_584) goto block86; else goto block103;
block103:;
_586 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_589 = _124.value;
_590 = _586.value;
_591 = _589 == _590;
_592 = (frost$core$Bit) {_591};
_594 = _592.value;
if (_594) goto block86; else goto block105;
block105:;
_596 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_599 = _124.value;
_600 = _596.value;
_601 = _599 == _600;
_602 = (frost$core$Bit) {_601};
_604 = _602.value;
if (_604) goto block86; else goto block107;
block107:;
_606 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_609 = _124.value;
_610 = _606.value;
_611 = _609 == _610;
_612 = (frost$core$Bit) {_611};
_614 = _612.value;
if (_614) goto block86; else goto block109;
block109:;
_616 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_619 = _124.value;
_620 = _616.value;
_621 = _619 == _620;
_622 = (frost$core$Bit) {_621};
_624 = _622.value;
if (_624) goto block86; else goto block111;
block111:;
_626 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_629 = _124.value;
_630 = _626.value;
_631 = _629 == _630;
_632 = (frost$core$Bit) {_631};
_634 = _632.value;
if (_634) goto block86; else goto block113;
block113:;
_636 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_639 = _124.value;
_640 = _636.value;
_641 = _639 == _640;
_642 = (frost$core$Bit) {_641};
_644 = _642.value;
if (_644) goto block86; else goto block115;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:82
_647 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_650 = &(&local15)->$rawValue;
*_650 = _647;
_652 = *(&local15);
*(&local14) = _652;
_655 = *(&local14);
_656 = ($fn62) param0->$class->vtable[5];
_656(param0, param1, _655);
goto block15;
block115:;
_659 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_662 = _124.value;
_663 = _659.value;
_664 = _662 == _663;
_665 = (frost$core$Bit) {_664};
_667 = _665.value;
if (_667) goto block118; else goto block119;
block119:;
_669 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_672 = _124.value;
_673 = _669.value;
_674 = _672 == _673;
_675 = (frost$core$Bit) {_674};
_677 = _675.value;
if (_677) goto block118; else goto block121;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:85
_680 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_683 = &(&local17)->$rawValue;
*_683 = _680;
_685 = *(&local17);
*(&local16) = _685;
_688 = *(&local16);
_689 = ($fn63) param0->$class->vtable[5];
_689(param0, param1, _688);
goto block15;
block121:;
_692 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_695 = _124.value;
_696 = _692.value;
_697 = _695 == _696;
_698 = (frost$core$Bit) {_697};
_700 = _698.value;
if (_700) goto block124; else goto block125;
block125:;
_702 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_705 = _124.value;
_706 = _702.value;
_707 = _705 == _706;
_708 = (frost$core$Bit) {_707};
_710 = _708.value;
if (_710) goto block124; else goto block127;
block127:;
_712 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_715 = _124.value;
_716 = _712.value;
_717 = _715 == _716;
_718 = (frost$core$Bit) {_717};
_720 = _718.value;
if (_720) goto block124; else goto block129;
block129:;
_722 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_725 = _124.value;
_726 = _722.value;
_727 = _725 == _726;
_728 = (frost$core$Bit) {_727};
_730 = _728.value;
if (_730) goto block124; else goto block131;
block131:;
_732 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_735 = _124.value;
_736 = _732.value;
_737 = _735 == _736;
_738 = (frost$core$Bit) {_737};
_740 = _738.value;
if (_740) goto block124; else goto block133;
block133:;
_742 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_745 = _124.value;
_746 = _742.value;
_747 = _745 == _746;
_748 = (frost$core$Bit) {_747};
_750 = _748.value;
if (_750) goto block124; else goto block135;
block135:;
_752 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_755 = _124.value;
_756 = _752.value;
_757 = _755 == _756;
_758 = (frost$core$Bit) {_757};
_760 = _758.value;
if (_760) goto block124; else goto block137;
block137:;
_762 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_765 = _124.value;
_766 = _762.value;
_767 = _765 == _766;
_768 = (frost$core$Bit) {_767};
_770 = _768.value;
if (_770) goto block124; else goto block139;
block139:;
_772 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_775 = _124.value;
_776 = _772.value;
_777 = _775 == _776;
_778 = (frost$core$Bit) {_777};
_780 = _778.value;
if (_780) goto block124; else goto block141;
block141:;
_782 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_785 = _124.value;
_786 = _782.value;
_787 = _785 == _786;
_788 = (frost$core$Bit) {_787};
_790 = _788.value;
if (_790) goto block124; else goto block143;
block143:;
_792 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_795 = _124.value;
_796 = _792.value;
_797 = _795 == _796;
_798 = (frost$core$Bit) {_797};
_800 = _798.value;
if (_800) goto block124; else goto block145;
block145:;
_802 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_805 = _124.value;
_806 = _802.value;
_807 = _805 == _806;
_808 = (frost$core$Bit) {_807};
_810 = _808.value;
if (_810) goto block124; else goto block147;
block147:;
_812 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_815 = _124.value;
_816 = _812.value;
_817 = _815 == _816;
_818 = (frost$core$Bit) {_817};
_820 = _818.value;
if (_820) goto block124; else goto block149;
block149:;
_822 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_825 = _124.value;
_826 = _822.value;
_827 = _825 == _826;
_828 = (frost$core$Bit) {_827};
_830 = _828.value;
if (_830) goto block124; else goto block151;
block151:;
_832 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_835 = _124.value;
_836 = _832.value;
_837 = _835 == _836;
_838 = (frost$core$Bit) {_837};
_840 = _838.value;
if (_840) goto block124; else goto block153;
block153:;
_842 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_845 = _124.value;
_846 = _842.value;
_847 = _845 == _846;
_848 = (frost$core$Bit) {_847};
_850 = _848.value;
if (_850) goto block124; else goto block155;
block155:;
_852 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_855 = _124.value;
_856 = _852.value;
_857 = _855 == _856;
_858 = (frost$core$Bit) {_857};
_860 = _858.value;
if (_860) goto block124; else goto block157;
block157:;
_862 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_865 = _124.value;
_866 = _862.value;
_867 = _865 == _866;
_868 = (frost$core$Bit) {_867};
_870 = _868.value;
if (_870) goto block124; else goto block159;
block159:;
_872 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_875 = _124.value;
_876 = _872.value;
_877 = _875 == _876;
_878 = (frost$core$Bit) {_877};
_880 = _878.value;
if (_880) goto block124; else goto block161;
block161:;
_882 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_885 = _124.value;
_886 = _882.value;
_887 = _885 == _886;
_888 = (frost$core$Bit) {_887};
_890 = _888.value;
if (_890) goto block124; else goto block163;
block163:;
_892 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_895 = _124.value;
_896 = _892.value;
_897 = _895 == _896;
_898 = (frost$core$Bit) {_897};
_900 = _898.value;
if (_900) goto block124; else goto block165;
block165:;
_902 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_905 = _124.value;
_906 = _902.value;
_907 = _905 == _906;
_908 = (frost$core$Bit) {_907};
_910 = _908.value;
if (_910) goto block124; else goto block167;
block167:;
_912 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_915 = _124.value;
_916 = _912.value;
_917 = _915 == _916;
_918 = (frost$core$Bit) {_917};
_920 = _918.value;
if (_920) goto block124; else goto block169;
block169:;
_922 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_925 = _124.value;
_926 = _922.value;
_927 = _925 == _926;
_928 = (frost$core$Bit) {_927};
_930 = _928.value;
if (_930) goto block124; else goto block171;
block171:;
_932 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_935 = _124.value;
_936 = _932.value;
_937 = _935 == _936;
_938 = (frost$core$Bit) {_937};
_940 = _938.value;
if (_940) goto block124; else goto block173;
block173:;
_942 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_945 = _124.value;
_946 = _942.value;
_947 = _945 == _946;
_948 = (frost$core$Bit) {_947};
_950 = _948.value;
if (_950) goto block124; else goto block175;
block175:;
_952 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_955 = _124.value;
_956 = _952.value;
_957 = _955 == _956;
_958 = (frost$core$Bit) {_957};
_960 = _958.value;
if (_960) goto block124; else goto block177;
block177:;
_962 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_965 = _124.value;
_966 = _962.value;
_967 = _965 == _966;
_968 = (frost$core$Bit) {_967};
_970 = _968.value;
if (_970) goto block124; else goto block179;
block179:;
_972 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_975 = _124.value;
_976 = _972.value;
_977 = _975 == _976;
_978 = (frost$core$Bit) {_977};
_980 = _978.value;
if (_980) goto block124; else goto block181;
block181:;
_982 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_985 = _124.value;
_986 = _982.value;
_987 = _985 == _986;
_988 = (frost$core$Bit) {_987};
_990 = _988.value;
if (_990) goto block124; else goto block183;
block183:;
_992 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_995 = _124.value;
_996 = _992.value;
_997 = _995 == _996;
_998 = (frost$core$Bit) {_997};
_1000 = _998.value;
if (_1000) goto block124; else goto block185;
block185:;
_1002 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1005 = _124.value;
_1006 = _1002.value;
_1007 = _1005 == _1006;
_1008 = (frost$core$Bit) {_1007};
_1010 = _1008.value;
if (_1010) goto block124; else goto block187;
block187:;
_1012 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1015 = _124.value;
_1016 = _1012.value;
_1017 = _1015 == _1016;
_1018 = (frost$core$Bit) {_1017};
_1020 = _1018.value;
if (_1020) goto block124; else goto block189;
block189:;
_1022 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1025 = _124.value;
_1026 = _1022.value;
_1027 = _1025 == _1026;
_1028 = (frost$core$Bit) {_1027};
_1030 = _1028.value;
if (_1030) goto block124; else goto block191;
block191:;
_1032 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1035 = _124.value;
_1036 = _1032.value;
_1037 = _1035 == _1036;
_1038 = (frost$core$Bit) {_1037};
_1040 = _1038.value;
if (_1040) goto block124; else goto block193;
block193:;
_1042 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1045 = _124.value;
_1046 = _1042.value;
_1047 = _1045 == _1046;
_1048 = (frost$core$Bit) {_1047};
_1050 = _1048.value;
if (_1050) goto block124; else goto block195;
block195:;
_1052 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1055 = _124.value;
_1056 = _1052.value;
_1057 = _1055 == _1056;
_1058 = (frost$core$Bit) {_1057};
_1060 = _1058.value;
if (_1060) goto block124; else goto block197;
block197:;
_1062 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1065 = _124.value;
_1066 = _1062.value;
_1067 = _1065 == _1066;
_1068 = (frost$core$Bit) {_1067};
_1070 = _1068.value;
if (_1070) goto block124; else goto block199;
block199:;
_1072 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1075 = _124.value;
_1076 = _1072.value;
_1077 = _1075 == _1076;
_1078 = (frost$core$Bit) {_1077};
_1080 = _1078.value;
if (_1080) goto block124; else goto block201;
block201:;
_1082 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1085 = _124.value;
_1086 = _1082.value;
_1087 = _1085 == _1086;
_1088 = (frost$core$Bit) {_1087};
_1090 = _1088.value;
if (_1090) goto block124; else goto block203;
block203:;
_1092 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1095 = _124.value;
_1096 = _1092.value;
_1097 = _1095 == _1096;
_1098 = (frost$core$Bit) {_1097};
_1100 = _1098.value;
if (_1100) goto block124; else goto block205;
block205:;
_1102 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1105 = _124.value;
_1106 = _1102.value;
_1107 = _1105 == _1106;
_1108 = (frost$core$Bit) {_1107};
_1110 = _1108.value;
if (_1110) goto block124; else goto block207;
block207:;
_1112 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1115 = _124.value;
_1116 = _1112.value;
_1117 = _1115 == _1116;
_1118 = (frost$core$Bit) {_1117};
_1120 = _1118.value;
if (_1120) goto block124; else goto block209;
block209:;
_1122 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1125 = _124.value;
_1126 = _1122.value;
_1127 = _1125 == _1126;
_1128 = (frost$core$Bit) {_1127};
_1130 = _1128.value;
if (_1130) goto block124; else goto block211;
block211:;
_1132 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1135 = _124.value;
_1136 = _1132.value;
_1137 = _1135 == _1136;
_1138 = (frost$core$Bit) {_1137};
_1140 = _1138.value;
if (_1140) goto block124; else goto block213;
block213:;
_1142 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1145 = _124.value;
_1146 = _1142.value;
_1147 = _1145 == _1146;
_1148 = (frost$core$Bit) {_1147};
_1150 = _1148.value;
if (_1150) goto block124; else goto block215;
block215:;
_1152 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1155 = _124.value;
_1156 = _1152.value;
_1157 = _1155 == _1156;
_1158 = (frost$core$Bit) {_1157};
_1160 = _1158.value;
if (_1160) goto block124; else goto block217;
block217:;
_1162 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1165 = _124.value;
_1166 = _1162.value;
_1167 = _1165 == _1166;
_1168 = (frost$core$Bit) {_1167};
_1170 = _1168.value;
if (_1170) goto block124; else goto block219;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:101
_1173 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:101:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1176 = &(&local19)->$rawValue;
*_1176 = _1173;
_1178 = *(&local19);
*(&local18) = _1178;
_1181 = *(&local18);
_1182 = ($fn64) param0->$class->vtable[5];
_1182(param0, param1, _1181);
goto block15;
block219:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:104
_1186 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:104:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1189 = &(&local21)->$rawValue;
*_1189 = _1186;
_1191 = *(&local21);
*(&local20) = _1191;
_1194 = *(&local20);
_1195 = ($fn65) param0->$class->vtable[5];
_1195(param0, param1, _1194);
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

