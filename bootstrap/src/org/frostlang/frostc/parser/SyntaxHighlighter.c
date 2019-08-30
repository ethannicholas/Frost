#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$SyntaxHighlighter$class_type org$frostlang$frostc$parser$SyntaxHighlighter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$SyntaxHighlighter$cleanup, org$frostlang$frostc$parser$SyntaxHighlighter$reset, org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$rewind} };

typedef frost$core$Int (*$fn120)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn134)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn149)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn206)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn227)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn241)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn256)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn275)(frost$collections$CollectionView*);
typedef void (*$fn291)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn305)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn359)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn377)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn389)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn401)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn413)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn503)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn599)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn617)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn917)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn923)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int (*$fn930)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 45, -2825424854296992849, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$parser$SyntaxHighlighter$reset(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:29
frost$collections$Array** $tmp2 = &param0->tokens;
frost$collections$Array* $tmp3 = *$tmp2;
// begin inline call to method frost.collections.Array.clear() from SyntaxHighlighter.frost:29:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp4 = (frost$core$Int) {0u};
frost$core$Int* $tmp5 = &$tmp3->_count;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp6 = (frost$core$Int) {0u};
frost$core$Int* $tmp7 = &$tmp3->capacity;
frost$core$Int $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp10 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp6, $tmp8, $tmp9);
frost$core$Int $tmp11 = $tmp10.min;
*(&local0) = $tmp11;
frost$core$Int $tmp12 = $tmp10.max;
frost$core$Bit $tmp13 = $tmp10.inclusive;
bool $tmp14 = $tmp13.value;
frost$core$Int $tmp15 = (frost$core$Int) {1u};
if ($tmp14) goto block5; else goto block6;
block5:;
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp12.value;
bool $tmp18 = $tmp16 <= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block6:;
int64_t $tmp21 = $tmp11.value;
int64_t $tmp22 = $tmp12.value;
bool $tmp23 = $tmp21 < $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp26 = &$tmp3->data;
frost$core$Object** $tmp27 = *$tmp26;
frost$core$Int $tmp28 = *(&local0);
frost$core$Int64 $tmp29 = frost$core$Int64$init$frost$core$Int($tmp28);
int64_t $tmp30 = $tmp29.value;
frost$core$Object* $tmp31 = $tmp27[$tmp30];
frost$core$Frost$unref$frost$core$Object$Q($tmp31);
$tmp27[$tmp30] = ((frost$core$Object*) NULL);
frost$core$Int $tmp32 = *(&local0);
int64_t $tmp33 = $tmp12.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 - $tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {$tmp35};
if ($tmp14) goto block8; else goto block9;
block8:;
int64_t $tmp37 = $tmp36.value;
int64_t $tmp38 = $tmp15.value;
bool $tmp39 = $tmp37 >= $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block3;
block9:;
int64_t $tmp42 = $tmp36.value;
int64_t $tmp43 = $tmp15.value;
bool $tmp44 = $tmp42 > $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block7; else goto block3;
block7:;
int64_t $tmp47 = $tmp32.value;
int64_t $tmp48 = $tmp15.value;
int64_t $tmp49 = $tmp47 + $tmp48;
frost$core$Int $tmp50 = (frost$core$Int) {$tmp49};
*(&local0) = $tmp50;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:30
frost$collections$Stack** $tmp51 = &param0->stack;
frost$collections$Stack* $tmp52 = *$tmp51;
// begin inline call to method frost.collections.Stack.clear() from SyntaxHighlighter.frost:30:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
frost$collections$Array** $tmp53 = &$tmp52->contents;
frost$collections$Array* $tmp54 = *$tmp53;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
frost$core$Int $tmp55 = (frost$core$Int) {0u};
frost$core$Int* $tmp56 = &$tmp54->_count;
*$tmp56 = $tmp55;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
frost$core$Int $tmp57 = (frost$core$Int) {0u};
frost$core$Int* $tmp58 = &$tmp54->capacity;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp61 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp57, $tmp59, $tmp60);
frost$core$Int $tmp62 = $tmp61.min;
*(&local1) = $tmp62;
frost$core$Int $tmp63 = $tmp61.max;
frost$core$Bit $tmp64 = $tmp61.inclusive;
bool $tmp65 = $tmp64.value;
frost$core$Int $tmp66 = (frost$core$Int) {1u};
if ($tmp65) goto block15; else goto block16;
block15:;
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp63.value;
bool $tmp69 = $tmp67 <= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block12; else goto block13;
block16:;
int64_t $tmp72 = $tmp62.value;
int64_t $tmp73 = $tmp63.value;
bool $tmp74 = $tmp72 < $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp77 = &$tmp54->data;
frost$core$Object** $tmp78 = *$tmp77;
frost$core$Int $tmp79 = *(&local1);
frost$core$Int64 $tmp80 = frost$core$Int64$init$frost$core$Int($tmp79);
int64_t $tmp81 = $tmp80.value;
frost$core$Object* $tmp82 = $tmp78[$tmp81];
frost$core$Frost$unref$frost$core$Object$Q($tmp82);
$tmp78[$tmp81] = ((frost$core$Object*) NULL);
frost$core$Int $tmp83 = *(&local1);
int64_t $tmp84 = $tmp63.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 - $tmp85;
frost$core$Int $tmp87 = (frost$core$Int) {$tmp86};
if ($tmp65) goto block18; else goto block19;
block18:;
int64_t $tmp88 = $tmp87.value;
int64_t $tmp89 = $tmp66.value;
bool $tmp90 = $tmp88 >= $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block17; else goto block13;
block19:;
int64_t $tmp93 = $tmp87.value;
int64_t $tmp94 = $tmp66.value;
bool $tmp95 = $tmp93 > $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block17; else goto block13;
block17:;
int64_t $tmp98 = $tmp83.value;
int64_t $tmp99 = $tmp66.value;
int64_t $tmp100 = $tmp98 + $tmp99;
frost$core$Int $tmp101 = (frost$core$Int) {$tmp100};
*(&local1) = $tmp101;
goto block12;
block13:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:34
frost$collections$Stack** $tmp102 = &param0->stack;
frost$collections$Stack* $tmp103 = *$tmp102;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp104->value = param1;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from SyntaxHighlighter.frost:34:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp105 = &$tmp103->contents;
frost$collections$Array* $tmp106 = *$tmp105;
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:38
frost$collections$Stack** $tmp107 = &param0->stack;
frost$collections$Stack* $tmp108 = *$tmp107;
frost$core$Int $tmp109 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:38:21
frost$core$Int $tmp110 = (frost$core$Int) {0u};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 >= $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp116 = &$tmp108->contents;
frost$collections$Array* $tmp117 = *$tmp116;
ITable* $tmp118 = ((frost$collections$CollectionView*) $tmp117)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$core$Int $tmp121 = $tmp119(((frost$collections$CollectionView*) $tmp117));
int64_t $tmp122 = $tmp109.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 < $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block2; else goto block3;
block3:;
frost$core$Int $tmp127 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp130 = &$tmp108->contents;
frost$collections$Array* $tmp131 = *$tmp130;
ITable* $tmp132 = ((frost$collections$CollectionView*) $tmp131)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
frost$core$Int $tmp135 = $tmp133(((frost$collections$CollectionView*) $tmp131));
int64_t $tmp136 = $tmp135.value;
int64_t $tmp137 = $tmp109.value;
bool $tmp138 = $tmp136 > $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block6; else goto block7;
block7:;
frost$core$Int $tmp141 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s142, $tmp141);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp143 = &$tmp108->contents;
frost$collections$Array* $tmp144 = *$tmp143;
frost$collections$Array** $tmp145 = &$tmp108->contents;
frost$collections$Array* $tmp146 = *$tmp145;
ITable* $tmp147 = ((frost$collections$CollectionView*) $tmp146)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Int $tmp150 = $tmp148(((frost$collections$CollectionView*) $tmp146));
frost$core$Int $tmp151 = (frost$core$Int) {1u};
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152 - $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {$tmp154};
int64_t $tmp156 = $tmp155.value;
int64_t $tmp157 = $tmp109.value;
int64_t $tmp158 = $tmp156 - $tmp157;
frost$core$Int $tmp159 = (frost$core$Int) {$tmp158};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp160 = (frost$core$Int) {0u};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 >= $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block11; else goto block10;
block11:;
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp144));
int64_t $tmp170 = $tmp159.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 < $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block9; else goto block10;
block10:;
frost$core$Int $tmp175 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp178 = &$tmp144->data;
frost$core$Object** $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = frost$core$Int64$init$frost$core$Int($tmp159);
int64_t $tmp181 = $tmp180.value;
frost$core$Object* $tmp182 = $tmp179[$tmp181];
frost$core$Frost$ref$frost$core$Object$Q($tmp182);
frost$core$Frost$ref$frost$core$Object$Q($tmp182);
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
frost$core$Int $tmp183 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp182)->value.$rawValue;
frost$core$Int $tmp184 = param1.$rawValue;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 == $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block13; else goto block14;
block14:;
frost$core$Int $tmp190 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s191, $tmp190);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:39
frost$collections$Stack** $tmp192 = &param0->stack;
frost$collections$Stack* $tmp193 = *$tmp192;
frost$core$Object* $tmp194 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp193);
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$Token param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:43
frost$collections$Array** $tmp195 = &param0->tokens;
frost$collections$Array* $tmp196 = *$tmp195;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp197 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$parser$Token$wrapper* $tmp198;
$tmp198 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp198->value = param1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp199;
$tmp199 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp199->value = param2;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp197, ((frost$core$Object*) $tmp198), ((frost$core$Object*) $tmp199));
frost$collections$Array$add$frost$collections$Array$T($tmp196, ((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:47
frost$collections$Stack** $tmp200 = &param0->stack;
frost$collections$Stack* $tmp201 = *$tmp200;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from SyntaxHighlighter.frost:47:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp202 = &$tmp201->contents;
frost$collections$Array* $tmp203 = *$tmp202;
ITable* $tmp204 = ((frost$collections$CollectionView*) $tmp203)->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[0];
frost$core$Int $tmp207 = $tmp205(((frost$collections$CollectionView*) $tmp203));
frost$core$Int $tmp208 = (frost$core$Int) {0u};
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208.value;
bool $tmp211 = $tmp209 > $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:48
frost$collections$Stack** $tmp214 = &param0->stack;
frost$collections$Stack* $tmp215 = *$tmp214;
frost$core$Int $tmp216 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from SyntaxHighlighter.frost:48:29
frost$core$Int $tmp217 = (frost$core$Int) {0u};
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 >= $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp223 = &$tmp215->contents;
frost$collections$Array* $tmp224 = *$tmp223;
ITable* $tmp225 = ((frost$collections$CollectionView*) $tmp224)->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[0];
frost$core$Int $tmp228 = $tmp226(((frost$collections$CollectionView*) $tmp224));
int64_t $tmp229 = $tmp216.value;
int64_t $tmp230 = $tmp228.value;
bool $tmp231 = $tmp229 < $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block5; else goto block6;
block6:;
frost$core$Int $tmp234 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s235, $tmp234, &$s236);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp237 = &$tmp215->contents;
frost$collections$Array* $tmp238 = *$tmp237;
ITable* $tmp239 = ((frost$collections$CollectionView*) $tmp238)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$core$Int $tmp242 = $tmp240(((frost$collections$CollectionView*) $tmp238));
int64_t $tmp243 = $tmp242.value;
int64_t $tmp244 = $tmp216.value;
bool $tmp245 = $tmp243 > $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block9; else goto block10;
block10:;
frost$core$Int $tmp248 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s249, $tmp248);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp250 = &$tmp215->contents;
frost$collections$Array* $tmp251 = *$tmp250;
frost$collections$Array** $tmp252 = &$tmp215->contents;
frost$collections$Array* $tmp253 = *$tmp252;
ITable* $tmp254 = ((frost$collections$CollectionView*) $tmp253)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Int $tmp257 = $tmp255(((frost$collections$CollectionView*) $tmp253));
frost$core$Int $tmp258 = (frost$core$Int) {1u};
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258.value;
int64_t $tmp261 = $tmp259 - $tmp260;
frost$core$Int $tmp262 = (frost$core$Int) {$tmp261};
int64_t $tmp263 = $tmp262.value;
int64_t $tmp264 = $tmp216.value;
int64_t $tmp265 = $tmp263 - $tmp264;
frost$core$Int $tmp266 = (frost$core$Int) {$tmp265};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp267 = (frost$core$Int) {0u};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
bool $tmp270 = $tmp268 >= $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block14; else goto block13;
block14:;
ITable* $tmp273 = ((frost$collections$CollectionView*) $tmp251)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$core$Int $tmp276 = $tmp274(((frost$collections$CollectionView*) $tmp251));
int64_t $tmp277 = $tmp266.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 < $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block12; else goto block13;
block13:;
frost$core$Int $tmp282 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp285 = &$tmp251->data;
frost$core$Object** $tmp286 = *$tmp285;
frost$core$Int64 $tmp287 = frost$core$Int64$init$frost$core$Int($tmp266);
int64_t $tmp288 = $tmp287.value;
frost$core$Object* $tmp289 = $tmp286[$tmp288];
frost$core$Frost$ref$frost$core$Object$Q($tmp289);
frost$core$Frost$ref$frost$core$Object$Q($tmp289);
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
$fn291 $tmp290 = ($fn291) param0->$class->vtable[5];
$tmp290(param0, param1, ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp289)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:49
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:52
org$frostlang$frostc$parser$Token$Kind $tmp292 = param1.kind;
frost$core$Int $tmp293 = $tmp292.$rawValue;
frost$core$Int $tmp294 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:53:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 == $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:54
frost$core$Int $tmp300 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp301 = &(&local1)->$rawValue;
*$tmp301 = $tmp300;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp302 = *(&local1);
*(&local0) = $tmp302;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp303 = *(&local0);
$fn305 $tmp304 = ($fn305) param0->$class->vtable[5];
$tmp304(param0, param1, $tmp303);
goto block15;
block17:;
frost$core$Int $tmp306 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp307 = $tmp293.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 == $tmp308;
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block20; else goto block21;
block21:;
frost$core$Int $tmp312 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp313 = $tmp293.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 == $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block20; else goto block23;
block23:;
frost$core$Int $tmp318 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp319 = $tmp293.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 == $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block20; else goto block25;
block25:;
frost$core$Int $tmp324 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:56:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp325 = $tmp293.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 == $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block20; else goto block27;
block27:;
frost$core$Int $tmp330 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp331 = $tmp293.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block20; else goto block29;
block29:;
frost$core$Int $tmp336 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp337 = $tmp293.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 == $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block20; else goto block31;
block31:;
frost$core$Int $tmp342 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp343 = $tmp293.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 == $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block20; else goto block33;
block33:;
frost$core$Int $tmp348 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:57:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp349 = $tmp293.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block20; else goto block35;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:58
frost$core$Int $tmp354 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:58:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp355 = &(&local3)->$rawValue;
*$tmp355 = $tmp354;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp356 = *(&local3);
*(&local2) = $tmp356;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp357 = *(&local2);
$fn359 $tmp358 = ($fn359) param0->$class->vtable[5];
$tmp358(param0, param1, $tmp357);
goto block15;
block35:;
frost$core$Int $tmp360 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp361 = $tmp293.value;
int64_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 == $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block38; else goto block39;
block39:;
frost$core$Int $tmp366 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:60:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp367 = $tmp293.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 == $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block38; else goto block41;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:61
frost$core$Int $tmp372 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:61:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp373 = &(&local5)->$rawValue;
*$tmp373 = $tmp372;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp374 = *(&local5);
*(&local4) = $tmp374;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp375 = *(&local4);
$fn377 $tmp376 = ($fn377) param0->$class->vtable[5];
$tmp376(param0, param1, $tmp375);
goto block15;
block41:;
frost$core$Int $tmp378 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:63:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp379 = $tmp293.value;
int64_t $tmp380 = $tmp378.value;
bool $tmp381 = $tmp379 == $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:64
frost$core$Int $tmp384 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp385 = &(&local7)->$rawValue;
*$tmp385 = $tmp384;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp386 = *(&local7);
*(&local6) = $tmp386;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp387 = *(&local6);
$fn389 $tmp388 = ($fn389) param0->$class->vtable[5];
$tmp388(param0, param1, $tmp387);
goto block15;
block45:;
frost$core$Int $tmp390 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:66:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp391 = $tmp293.value;
int64_t $tmp392 = $tmp390.value;
bool $tmp393 = $tmp391 == $tmp392;
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393};
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:67
frost$core$Int $tmp396 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp397 = &(&local9)->$rawValue;
*$tmp397 = $tmp396;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp398 = *(&local9);
*(&local8) = $tmp398;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp399 = *(&local8);
$fn401 $tmp400 = ($fn401) param0->$class->vtable[5];
$tmp400(param0, param1, $tmp399);
goto block15;
block49:;
frost$core$Int $tmp402 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:69:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp403 = $tmp293.value;
int64_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 == $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:70
frost$core$Int $tmp408 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp409 = &(&local11)->$rawValue;
*$tmp409 = $tmp408;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp410 = *(&local11);
*(&local10) = $tmp410;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp411 = *(&local10);
$fn413 $tmp412 = ($fn413) param0->$class->vtable[5];
$tmp412(param0, param1, $tmp411);
goto block15;
block53:;
frost$core$Int $tmp414 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp415 = $tmp293.value;
int64_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 == $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block56; else goto block57;
block57:;
frost$core$Int $tmp420 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp421 = $tmp293.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block56; else goto block59;
block59:;
frost$core$Int $tmp426 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp427 = $tmp293.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 == $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block56; else goto block61;
block61:;
frost$core$Int $tmp432 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:72:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp433 = $tmp293.value;
int64_t $tmp434 = $tmp432.value;
bool $tmp435 = $tmp433 == $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block56; else goto block63;
block63:;
frost$core$Int $tmp438 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp439 = $tmp293.value;
int64_t $tmp440 = $tmp438.value;
bool $tmp441 = $tmp439 == $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block56; else goto block65;
block65:;
frost$core$Int $tmp444 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp445 = $tmp293.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 == $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block56; else goto block67;
block67:;
frost$core$Int $tmp450 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:73:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp451 = $tmp293.value;
int64_t $tmp452 = $tmp450.value;
bool $tmp453 = $tmp451 == $tmp452;
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block56; else goto block69;
block69:;
frost$core$Int $tmp456 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp457 = $tmp293.value;
int64_t $tmp458 = $tmp456.value;
bool $tmp459 = $tmp457 == $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block56; else goto block71;
block71:;
frost$core$Int $tmp462 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp463 = $tmp293.value;
int64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 == $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block56; else goto block73;
block73:;
frost$core$Int $tmp468 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp469 = $tmp293.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 == $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block56; else goto block75;
block75:;
frost$core$Int $tmp474 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:74:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp475 = $tmp293.value;
int64_t $tmp476 = $tmp474.value;
bool $tmp477 = $tmp475 == $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block56; else goto block77;
block77:;
frost$core$Int $tmp480 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp481 = $tmp293.value;
int64_t $tmp482 = $tmp480.value;
bool $tmp483 = $tmp481 == $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block56; else goto block79;
block79:;
frost$core$Int $tmp486 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp487 = $tmp293.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 == $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block56; else goto block81;
block81:;
frost$core$Int $tmp492 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:75:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp493 = $tmp293.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 == $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block56; else goto block83;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:76
frost$core$Int $tmp498 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp499 = &(&local13)->$rawValue;
*$tmp499 = $tmp498;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp500 = *(&local13);
*(&local12) = $tmp500;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp501 = *(&local12);
$fn503 $tmp502 = ($fn503) param0->$class->vtable[5];
$tmp502(param0, param1, $tmp501);
goto block15;
block83:;
frost$core$Int $tmp504 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp505 = $tmp293.value;
int64_t $tmp506 = $tmp504.value;
bool $tmp507 = $tmp505 == $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block86; else goto block87;
block87:;
frost$core$Int $tmp510 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp511 = $tmp293.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 == $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block86; else goto block89;
block89:;
frost$core$Int $tmp516 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp517 = $tmp293.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 == $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block86; else goto block91;
block91:;
frost$core$Int $tmp522 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:78:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp523 = $tmp293.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 == $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block86; else goto block93;
block93:;
frost$core$Int $tmp528 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp529 = $tmp293.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 == $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block86; else goto block95;
block95:;
frost$core$Int $tmp534 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp535 = $tmp293.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 == $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block86; else goto block97;
block97:;
frost$core$Int $tmp540 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp541 = $tmp293.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block86; else goto block99;
block99:;
frost$core$Int $tmp546 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:79:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp547 = $tmp293.value;
int64_t $tmp548 = $tmp546.value;
bool $tmp549 = $tmp547 == $tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {$tmp549};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block86; else goto block101;
block101:;
frost$core$Int $tmp552 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp553 = $tmp293.value;
int64_t $tmp554 = $tmp552.value;
bool $tmp555 = $tmp553 == $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block86; else goto block103;
block103:;
frost$core$Int $tmp558 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp559 = $tmp293.value;
int64_t $tmp560 = $tmp558.value;
bool $tmp561 = $tmp559 == $tmp560;
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block86; else goto block105;
block105:;
frost$core$Int $tmp564 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp565 = $tmp293.value;
int64_t $tmp566 = $tmp564.value;
bool $tmp567 = $tmp565 == $tmp566;
frost$core$Bit $tmp568 = (frost$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block86; else goto block107;
block107:;
frost$core$Int $tmp570 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:80:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp571 = $tmp293.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 == $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block86; else goto block109;
block109:;
frost$core$Int $tmp576 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp577 = $tmp293.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 == $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block86; else goto block111;
block111:;
frost$core$Int $tmp582 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp583 = $tmp293.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block86; else goto block113;
block113:;
frost$core$Int $tmp588 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:81:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp589 = $tmp293.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block86; else goto block115;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:82
frost$core$Int $tmp594 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp595 = &(&local15)->$rawValue;
*$tmp595 = $tmp594;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp596 = *(&local15);
*(&local14) = $tmp596;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp597 = *(&local14);
$fn599 $tmp598 = ($fn599) param0->$class->vtable[5];
$tmp598(param0, param1, $tmp597);
goto block15;
block115:;
frost$core$Int $tmp600 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp601 = $tmp293.value;
int64_t $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 == $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block118; else goto block119;
block119:;
frost$core$Int $tmp606 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp607 = $tmp293.value;
int64_t $tmp608 = $tmp606.value;
bool $tmp609 = $tmp607 == $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block118; else goto block121;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:85
frost$core$Int $tmp612 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp613 = &(&local17)->$rawValue;
*$tmp613 = $tmp612;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp614 = *(&local17);
*(&local16) = $tmp614;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp615 = *(&local16);
$fn617 $tmp616 = ($fn617) param0->$class->vtable[5];
$tmp616(param0, param1, $tmp615);
goto block15;
block121:;
frost$core$Int $tmp618 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp619 = $tmp293.value;
int64_t $tmp620 = $tmp618.value;
bool $tmp621 = $tmp619 == $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block124; else goto block125;
block125:;
frost$core$Int $tmp624 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp625 = $tmp293.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 == $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block124; else goto block127;
block127:;
frost$core$Int $tmp630 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp631 = $tmp293.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 == $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block124; else goto block129;
block129:;
frost$core$Int $tmp636 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:87:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp637 = $tmp293.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 == $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block124; else goto block131;
block131:;
frost$core$Int $tmp642 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp643 = $tmp293.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 == $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block124; else goto block133;
block133:;
frost$core$Int $tmp648 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp649 = $tmp293.value;
int64_t $tmp650 = $tmp648.value;
bool $tmp651 = $tmp649 == $tmp650;
frost$core$Bit $tmp652 = (frost$core$Bit) {$tmp651};
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block124; else goto block135;
block135:;
frost$core$Int $tmp654 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp655 = $tmp293.value;
int64_t $tmp656 = $tmp654.value;
bool $tmp657 = $tmp655 == $tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block124; else goto block137;
block137:;
frost$core$Int $tmp660 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:88:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp661 = $tmp293.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 == $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block124; else goto block139;
block139:;
frost$core$Int $tmp666 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp667 = $tmp293.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 == $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block124; else goto block141;
block141:;
frost$core$Int $tmp672 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp673 = $tmp293.value;
int64_t $tmp674 = $tmp672.value;
bool $tmp675 = $tmp673 == $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block124; else goto block143;
block143:;
frost$core$Int $tmp678 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp679 = $tmp293.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 == $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block124; else goto block145;
block145:;
frost$core$Int $tmp684 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:89:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp685 = $tmp293.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 == $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block124; else goto block147;
block147:;
frost$core$Int $tmp690 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp691 = $tmp293.value;
int64_t $tmp692 = $tmp690.value;
bool $tmp693 = $tmp691 == $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block124; else goto block149;
block149:;
frost$core$Int $tmp696 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp697 = $tmp293.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 == $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block124; else goto block151;
block151:;
frost$core$Int $tmp702 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp703 = $tmp293.value;
int64_t $tmp704 = $tmp702.value;
bool $tmp705 = $tmp703 == $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block124; else goto block153;
block153:;
frost$core$Int $tmp708 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:90:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp709 = $tmp293.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block124; else goto block155;
block155:;
frost$core$Int $tmp714 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp715 = $tmp293.value;
int64_t $tmp716 = $tmp714.value;
bool $tmp717 = $tmp715 == $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block124; else goto block157;
block157:;
frost$core$Int $tmp720 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp721 = $tmp293.value;
int64_t $tmp722 = $tmp720.value;
bool $tmp723 = $tmp721 == $tmp722;
frost$core$Bit $tmp724 = (frost$core$Bit) {$tmp723};
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block124; else goto block159;
block159:;
frost$core$Int $tmp726 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp727 = $tmp293.value;
int64_t $tmp728 = $tmp726.value;
bool $tmp729 = $tmp727 == $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block124; else goto block161;
block161:;
frost$core$Int $tmp732 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:91:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp733 = $tmp293.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 == $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block124; else goto block163;
block163:;
frost$core$Int $tmp738 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp739 = $tmp293.value;
int64_t $tmp740 = $tmp738.value;
bool $tmp741 = $tmp739 == $tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block124; else goto block165;
block165:;
frost$core$Int $tmp744 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp745 = $tmp293.value;
int64_t $tmp746 = $tmp744.value;
bool $tmp747 = $tmp745 == $tmp746;
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block124; else goto block167;
block167:;
frost$core$Int $tmp750 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:92:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp751 = $tmp293.value;
int64_t $tmp752 = $tmp750.value;
bool $tmp753 = $tmp751 == $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block124; else goto block169;
block169:;
frost$core$Int $tmp756 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp757 = $tmp293.value;
int64_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 == $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block124; else goto block171;
block171:;
frost$core$Int $tmp762 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp763 = $tmp293.value;
int64_t $tmp764 = $tmp762.value;
bool $tmp765 = $tmp763 == $tmp764;
frost$core$Bit $tmp766 = (frost$core$Bit) {$tmp765};
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block124; else goto block173;
block173:;
frost$core$Int $tmp768 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp769 = $tmp293.value;
int64_t $tmp770 = $tmp768.value;
bool $tmp771 = $tmp769 == $tmp770;
frost$core$Bit $tmp772 = (frost$core$Bit) {$tmp771};
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block124; else goto block175;
block175:;
frost$core$Int $tmp774 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:93:94
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp775 = $tmp293.value;
int64_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 == $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block124; else goto block177;
block177:;
frost$core$Int $tmp780 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp781 = $tmp293.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block124; else goto block179;
block179:;
frost$core$Int $tmp786 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp787 = $tmp293.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block124; else goto block181;
block181:;
frost$core$Int $tmp792 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp793 = $tmp293.value;
int64_t $tmp794 = $tmp792.value;
bool $tmp795 = $tmp793 == $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block124; else goto block183;
block183:;
frost$core$Int $tmp798 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:94:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp799 = $tmp293.value;
int64_t $tmp800 = $tmp798.value;
bool $tmp801 = $tmp799 == $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block124; else goto block185;
block185:;
frost$core$Int $tmp804 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp805 = $tmp293.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 == $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block124; else goto block187;
block187:;
frost$core$Int $tmp810 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp811 = $tmp293.value;
int64_t $tmp812 = $tmp810.value;
bool $tmp813 = $tmp811 == $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block124; else goto block189;
block189:;
frost$core$Int $tmp816 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp817 = $tmp293.value;
int64_t $tmp818 = $tmp816.value;
bool $tmp819 = $tmp817 == $tmp818;
frost$core$Bit $tmp820 = (frost$core$Bit) {$tmp819};
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block124; else goto block191;
block191:;
frost$core$Int $tmp822 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:95:90
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp823 = $tmp293.value;
int64_t $tmp824 = $tmp822.value;
bool $tmp825 = $tmp823 == $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block124; else goto block193;
block193:;
frost$core$Int $tmp828 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp829 = $tmp293.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 == $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block124; else goto block195;
block195:;
frost$core$Int $tmp834 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp835 = $tmp293.value;
int64_t $tmp836 = $tmp834.value;
bool $tmp837 = $tmp835 == $tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block124; else goto block197;
block197:;
frost$core$Int $tmp840 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:96:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp841 = $tmp293.value;
int64_t $tmp842 = $tmp840.value;
bool $tmp843 = $tmp841 == $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block124; else goto block199;
block199:;
frost$core$Int $tmp846 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp847 = $tmp293.value;
int64_t $tmp848 = $tmp846.value;
bool $tmp849 = $tmp847 == $tmp848;
frost$core$Bit $tmp850 = (frost$core$Bit) {$tmp849};
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block124; else goto block201;
block201:;
frost$core$Int $tmp852 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp853 = $tmp293.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 == $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block124; else goto block203;
block203:;
frost$core$Int $tmp858 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:97:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp859 = $tmp293.value;
int64_t $tmp860 = $tmp858.value;
bool $tmp861 = $tmp859 == $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block124; else goto block205;
block205:;
frost$core$Int $tmp864 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp865 = $tmp293.value;
int64_t $tmp866 = $tmp864.value;
bool $tmp867 = $tmp865 == $tmp866;
frost$core$Bit $tmp868 = (frost$core$Bit) {$tmp867};
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block124; else goto block207;
block207:;
frost$core$Int $tmp870 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp871 = $tmp293.value;
int64_t $tmp872 = $tmp870.value;
bool $tmp873 = $tmp871 == $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block124; else goto block209;
block209:;
frost$core$Int $tmp876 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:98:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp877 = $tmp293.value;
int64_t $tmp878 = $tmp876.value;
bool $tmp879 = $tmp877 == $tmp878;
frost$core$Bit $tmp880 = (frost$core$Bit) {$tmp879};
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block124; else goto block211;
block211:;
frost$core$Int $tmp882 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp883 = $tmp293.value;
int64_t $tmp884 = $tmp882.value;
bool $tmp885 = $tmp883 == $tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {$tmp885};
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block124; else goto block213;
block213:;
frost$core$Int $tmp888 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp889 = $tmp293.value;
int64_t $tmp890 = $tmp888.value;
bool $tmp891 = $tmp889 == $tmp890;
frost$core$Bit $tmp892 = (frost$core$Bit) {$tmp891};
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block124; else goto block215;
block215:;
frost$core$Int $tmp894 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:99:88
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp895 = $tmp293.value;
int64_t $tmp896 = $tmp894.value;
bool $tmp897 = $tmp895 == $tmp896;
frost$core$Bit $tmp898 = (frost$core$Bit) {$tmp897};
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block124; else goto block217;
block217:;
frost$core$Int $tmp900 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp901 = $tmp293.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block124; else goto block219;
block219:;
frost$core$Int $tmp906 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:100:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp907 = $tmp293.value;
int64_t $tmp908 = $tmp906.value;
bool $tmp909 = $tmp907 == $tmp908;
frost$core$Bit $tmp910 = (frost$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block124; else goto block221;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:101
frost$core$Int $tmp912 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:101:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp913 = &(&local19)->$rawValue;
*$tmp913 = $tmp912;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp914 = *(&local19);
*(&local18) = $tmp914;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp915 = *(&local18);
$fn917 $tmp916 = ($fn917) param0->$class->vtable[5];
$tmp916(param0, param1, $tmp915);
goto block15;
block221:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:104
frost$core$Int $tmp918 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:104:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp919 = &(&local21)->$rawValue;
*$tmp919 = $tmp918;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp920 = *(&local21);
*(&local20) = $tmp920;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp921 = *(&local20);
$fn923 $tmp922 = ($fn923) param0->$class->vtable[5];
$tmp922(param0, param1, $tmp921);
goto block15;
block15:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$rewind(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:110
frost$collections$Array** $tmp924 = &param0->tokens;
frost$collections$Array* $tmp925 = *$tmp924;
frost$collections$Array** $tmp926 = &param0->tokens;
frost$collections$Array* $tmp927 = *$tmp926;
ITable* $tmp928 = ((frost$collections$CollectionView*) $tmp927)->$class->itable;
while ($tmp928->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp928 = $tmp928->next;
}
$fn930 $tmp929 = $tmp928->methods[0];
frost$core$Int $tmp931 = $tmp929(((frost$collections$CollectionView*) $tmp927));
frost$core$Int $tmp932 = (frost$core$Int) {1u};
int64_t $tmp933 = $tmp931.value;
int64_t $tmp934 = $tmp932.value;
int64_t $tmp935 = $tmp933 - $tmp934;
frost$core$Int $tmp936 = (frost$core$Int) {$tmp935};
frost$core$Object* $tmp937 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp925, $tmp936);
frost$core$Frost$unref$frost$core$Object$Q($tmp937);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$init(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:23
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp938 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp938);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$collections$Stack** $tmp939 = &param0->stack;
frost$collections$Stack* $tmp940 = *$tmp939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$collections$Stack** $tmp941 = &param0->stack;
*$tmp941 = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:26
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp942 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$collections$Array** $tmp943 = &param0->tokens;
frost$collections$Array* $tmp944 = *$tmp943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$collections$Array** $tmp945 = &param0->tokens;
*$tmp945 = $tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Stack** $tmp946 = &param0->stack;
frost$collections$Stack* $tmp947 = *$tmp946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$collections$Array** $tmp948 = &param0->tokens;
frost$collections$Array* $tmp949 = *$tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
return;

}

