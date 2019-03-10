#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$SyntaxHighlighter$class_type org$frostlang$frostc$parser$SyntaxHighlighter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$SyntaxHighlighter$cleanup, org$frostlang$frostc$parser$SyntaxHighlighter$reset, org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind, org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$rewind} };

typedef frost$core$Int64 (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn172)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn209)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn230)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn244)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn259)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn278)(frost$collections$CollectionView*);
typedef void (*$fn293)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn307)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn361)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn379)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn391)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn403)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn415)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn505)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn601)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn619)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn919)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn925)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$Token, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef frost$core$Int64 (*$fn932)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 45, -2825424854296992849, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

void org$frostlang$frostc$parser$SyntaxHighlighter$reset(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:75
frost$collections$Array** $tmp2 = &param0->tokens;
frost$collections$Array* $tmp3 = *$tmp2;
// begin inline call to method frost.collections.Array.clear() from SyntaxHighlighter.frost:75:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp5 = &$tmp3->_count;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp6 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp7 = &$tmp3->capacity;
frost$core$Int64 $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp10 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp6, $tmp8, $tmp9);
frost$core$Int64 $tmp11 = $tmp10.min;
*(&local0) = $tmp11;
frost$core$Int64 $tmp12 = $tmp10.max;
frost$core$Bit $tmp13 = $tmp10.inclusive;
bool $tmp14 = $tmp13.value;
frost$core$Int64 $tmp15 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp16 = $tmp15.value;
frost$core$UInt64 $tmp17 = (frost$core$UInt64) {((uint64_t) $tmp16)};
if ($tmp14) goto block6; else goto block7;
block6:;
int64_t $tmp18 = $tmp11.value;
int64_t $tmp19 = $tmp12.value;
bool $tmp20 = $tmp18 <= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block3; else goto block4;
block7:;
int64_t $tmp23 = $tmp11.value;
int64_t $tmp24 = $tmp12.value;
bool $tmp25 = $tmp23 < $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp28 = &$tmp3->data;
frost$core$Object** $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = *(&local0);
int64_t $tmp31 = $tmp30.value;
frost$core$Object* $tmp32 = $tmp29[$tmp31];
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
$tmp29[$tmp31] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp33 = *(&local0);
int64_t $tmp34 = $tmp12.value;
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34 - $tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {$tmp36};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp38 = $tmp37.value;
frost$core$UInt64 $tmp39 = (frost$core$UInt64) {((uint64_t) $tmp38)};
if ($tmp14) goto block10; else goto block11;
block10:;
uint64_t $tmp40 = $tmp39.value;
uint64_t $tmp41 = $tmp17.value;
bool $tmp42 = $tmp40 >= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block8; else goto block4;
block11:;
uint64_t $tmp45 = $tmp39.value;
uint64_t $tmp46 = $tmp17.value;
bool $tmp47 = $tmp45 > $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block8; else goto block4;
block8:;
int64_t $tmp50 = $tmp33.value;
int64_t $tmp51 = $tmp15.value;
int64_t $tmp52 = $tmp50 + $tmp51;
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
*(&local0) = $tmp53;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:76
frost$collections$Stack** $tmp54 = &param0->stack;
frost$collections$Stack* $tmp55 = *$tmp54;
// begin inline call to method frost.collections.Stack.clear() from SyntaxHighlighter.frost:76:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:80
frost$collections$Array** $tmp56 = &$tmp55->contents;
frost$collections$Array* $tmp57 = *$tmp56;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp58 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp59 = &$tmp57->_count;
*$tmp59 = $tmp58;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp60 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp61 = &$tmp57->capacity;
frost$core$Int64 $tmp62 = *$tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp64 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp60, $tmp62, $tmp63);
frost$core$Int64 $tmp65 = $tmp64.min;
*(&local1) = $tmp65;
frost$core$Int64 $tmp66 = $tmp64.max;
frost$core$Bit $tmp67 = $tmp64.inclusive;
bool $tmp68 = $tmp67.value;
frost$core$Int64 $tmp69 = (frost$core$Int64) {1u};
frost$core$UInt64 $tmp70 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp69);
if ($tmp68) goto block17; else goto block18;
block17:;
int64_t $tmp71 = $tmp65.value;
int64_t $tmp72 = $tmp66.value;
bool $tmp73 = $tmp71 <= $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block14; else goto block15;
block18:;
int64_t $tmp76 = $tmp65.value;
int64_t $tmp77 = $tmp66.value;
bool $tmp78 = $tmp76 < $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp81 = &$tmp57->data;
frost$core$Object** $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = *(&local1);
int64_t $tmp84 = $tmp83.value;
frost$core$Object* $tmp85 = $tmp82[$tmp84];
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
$tmp82[$tmp84] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp86 = *(&local1);
int64_t $tmp87 = $tmp66.value;
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87 - $tmp88;
frost$core$Int64 $tmp90 = (frost$core$Int64) {$tmp89};
frost$core$UInt64 $tmp91 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp90);
if ($tmp68) goto block20; else goto block21;
block20:;
uint64_t $tmp92 = $tmp91.value;
uint64_t $tmp93 = $tmp70.value;
bool $tmp94 = $tmp92 >= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block19; else goto block15;
block21:;
uint64_t $tmp97 = $tmp91.value;
uint64_t $tmp98 = $tmp70.value;
bool $tmp99 = $tmp97 > $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block19; else goto block15;
block19:;
int64_t $tmp102 = $tmp86.value;
int64_t $tmp103 = $tmp69.value;
int64_t $tmp104 = $tmp102 + $tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {$tmp104};
*(&local1) = $tmp105;
goto block14;
block15:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$open$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:80
frost$collections$Stack** $tmp106 = &param0->stack;
frost$collections$Stack* $tmp107 = *$tmp106;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp108->value = param1;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from SyntaxHighlighter.frost:80:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp109 = &$tmp107->contents;
frost$collections$Array* $tmp110 = *$tmp109;
frost$collections$Array$add$frost$collections$Array$T($tmp110, ((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$close$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:84
frost$collections$Stack** $tmp111 = &param0->stack;
frost$collections$Stack* $tmp112 = *$tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from SyntaxHighlighter.frost:84:21
frost$core$Int64 $tmp114 = (frost$core$Int64) {0u};
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114.value;
bool $tmp117 = $tmp115 >= $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp120 = &$tmp112->contents;
frost$collections$Array* $tmp121 = *$tmp120;
ITable* $tmp122 = ((frost$collections$CollectionView*) $tmp121)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Int64 $tmp125 = $tmp123(((frost$collections$CollectionView*) $tmp121));
int64_t $tmp126 = $tmp113.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 < $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp134 = &$tmp112->contents;
frost$collections$Array* $tmp135 = *$tmp134;
ITable* $tmp136 = ((frost$collections$CollectionView*) $tmp135)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int64 $tmp139 = $tmp137(((frost$collections$CollectionView*) $tmp135));
int64_t $tmp140 = $tmp139.value;
int64_t $tmp141 = $tmp113.value;
bool $tmp142 = $tmp140 > $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s146, $tmp145);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp147 = &$tmp112->contents;
frost$collections$Array* $tmp148 = *$tmp147;
frost$collections$Array** $tmp149 = &$tmp112->contents;
frost$collections$Array* $tmp150 = *$tmp149;
ITable* $tmp151 = ((frost$collections$CollectionView*) $tmp150)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int64 $tmp154 = $tmp152(((frost$collections$CollectionView*) $tmp150));
frost$core$Int64 $tmp155 = (frost$core$Int64) {1u};
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156 - $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
int64_t $tmp160 = $tmp159.value;
int64_t $tmp161 = $tmp113.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int64 $tmp164 = (frost$core$Int64) {0u};
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 >= $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block11; else goto block10;
block11:;
ITable* $tmp170 = ((frost$collections$CollectionView*) $tmp148)->$class->itable;
while ($tmp170->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp170 = $tmp170->next;
}
$fn172 $tmp171 = $tmp170->methods[0];
frost$core$Int64 $tmp173 = $tmp171(((frost$collections$CollectionView*) $tmp148));
int64_t $tmp174 = $tmp163.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 < $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s180, $tmp179, &$s181);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp182 = &$tmp148->data;
frost$core$Object** $tmp183 = *$tmp182;
int64_t $tmp184 = $tmp163.value;
frost$core$Object* $tmp185 = $tmp183[$tmp184];
frost$core$Frost$ref$frost$core$Object$Q($tmp185);
frost$core$Frost$ref$frost$core$Object$Q($tmp185);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
frost$core$Int64 $tmp186 = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp185)->value.$rawValue;
frost$core$Int64 $tmp187 = param1.$rawValue;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:84:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 == $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s194, $tmp193);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:85
frost$collections$Stack** $tmp195 = &param0->stack;
frost$collections$Stack* $tmp196 = *$tmp195;
frost$core$Object* $tmp197 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp196);
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$add$org$frostlang$frostc$parser$Token$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$SyntaxHighlighter* param0, org$frostlang$frostc$parser$Token param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:89
frost$collections$Array** $tmp198 = &param0->tokens;
frost$collections$Array* $tmp199 = *$tmp198;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp200 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$parser$Token$wrapper* $tmp201;
$tmp201 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp201->value = param1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp202;
$tmp202 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp202->value = param2;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp200, ((frost$core$Object*) $tmp201), ((frost$core$Object*) $tmp202));
frost$collections$Array$add$frost$collections$Array$T($tmp199, ((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:93
frost$collections$Stack** $tmp203 = &param0->stack;
frost$collections$Stack* $tmp204 = *$tmp203;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from SyntaxHighlighter.frost:93:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp205 = &$tmp204->contents;
frost$collections$Array* $tmp206 = *$tmp205;
ITable* $tmp207 = ((frost$collections$CollectionView*) $tmp206)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$core$Int64 $tmp210 = $tmp208(((frost$collections$CollectionView*) $tmp206));
frost$core$Int64 $tmp211 = (frost$core$Int64) {0u};
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211.value;
bool $tmp214 = $tmp212 > $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:94
frost$collections$Stack** $tmp217 = &param0->stack;
frost$collections$Stack* $tmp218 = *$tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from SyntaxHighlighter.frost:94:29
frost$core$Int64 $tmp220 = (frost$core$Int64) {0u};
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 >= $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp226 = &$tmp218->contents;
frost$collections$Array* $tmp227 = *$tmp226;
ITable* $tmp228 = ((frost$collections$CollectionView*) $tmp227)->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[0];
frost$core$Int64 $tmp231 = $tmp229(((frost$collections$CollectionView*) $tmp227));
int64_t $tmp232 = $tmp219.value;
int64_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 < $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s238, $tmp237, &$s239);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp240 = &$tmp218->contents;
frost$collections$Array* $tmp241 = *$tmp240;
ITable* $tmp242 = ((frost$collections$CollectionView*) $tmp241)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Int64 $tmp245 = $tmp243(((frost$collections$CollectionView*) $tmp241));
int64_t $tmp246 = $tmp245.value;
int64_t $tmp247 = $tmp219.value;
bool $tmp248 = $tmp246 > $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s252, $tmp251);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp253 = &$tmp218->contents;
frost$collections$Array* $tmp254 = *$tmp253;
frost$collections$Array** $tmp255 = &$tmp218->contents;
frost$collections$Array* $tmp256 = *$tmp255;
ITable* $tmp257 = ((frost$collections$CollectionView*) $tmp256)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Int64 $tmp260 = $tmp258(((frost$collections$CollectionView*) $tmp256));
frost$core$Int64 $tmp261 = (frost$core$Int64) {1u};
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262 - $tmp263;
frost$core$Int64 $tmp265 = (frost$core$Int64) {$tmp264};
int64_t $tmp266 = $tmp265.value;
int64_t $tmp267 = $tmp219.value;
int64_t $tmp268 = $tmp266 - $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {$tmp268};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int64 $tmp270 = (frost$core$Int64) {0u};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 >= $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block14; else goto block13;
block14:;
ITable* $tmp276 = ((frost$collections$CollectionView*) $tmp254)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Int64 $tmp279 = $tmp277(((frost$collections$CollectionView*) $tmp254));
int64_t $tmp280 = $tmp269.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 < $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp285 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s286, $tmp285, &$s287);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp288 = &$tmp254->data;
frost$core$Object** $tmp289 = *$tmp288;
int64_t $tmp290 = $tmp269.value;
frost$core$Object* $tmp291 = $tmp289[$tmp290];
frost$core$Frost$ref$frost$core$Object$Q($tmp291);
frost$core$Frost$ref$frost$core$Object$Q($tmp291);
frost$core$Frost$unref$frost$core$Object$Q($tmp291);
$fn293 $tmp292 = ($fn293) param0->$class->vtable[5];
$tmp292(param0, param1, ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp291)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp291);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:95
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:98
org$frostlang$frostc$parser$Token$Kind $tmp294 = param1.kind;
frost$core$Int64 $tmp295 = $tmp294.$rawValue;
frost$core$Int64 $tmp296 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:99:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp297 = $tmp295.value;
int64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 == $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:100
frost$core$Int64 $tmp302 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:100:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp303 = &(&local1)->$rawValue;
*$tmp303 = $tmp302;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp304 = *(&local1);
*(&local0) = $tmp304;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp305 = *(&local0);
$fn307 $tmp306 = ($fn307) param0->$class->vtable[5];
$tmp306(param0, param1, $tmp305);
goto block15;
block17:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:102:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp309 = $tmp295.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:102:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp315 = $tmp295.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 == $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block20; else goto block23;
block23:;
frost$core$Int64 $tmp320 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:102:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp321 = $tmp295.value;
int64_t $tmp322 = $tmp320.value;
bool $tmp323 = $tmp321 == $tmp322;
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block20; else goto block25;
block25:;
frost$core$Int64 $tmp326 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:102:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp327 = $tmp295.value;
int64_t $tmp328 = $tmp326.value;
bool $tmp329 = $tmp327 == $tmp328;
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp329};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block20; else goto block27;
block27:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {42u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:103:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp333 = $tmp295.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 == $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block20; else goto block29;
block29:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {43u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:103:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp339 = $tmp295.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 == $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block20; else goto block31;
block31:;
frost$core$Int64 $tmp344 = (frost$core$Int64) {44u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:103:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp345 = $tmp295.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 == $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block20; else goto block33;
block33:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:103:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp351 = $tmp295.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block20; else goto block35;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:104
frost$core$Int64 $tmp356 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:104:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp357 = &(&local3)->$rawValue;
*$tmp357 = $tmp356;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp358 = *(&local3);
*(&local2) = $tmp358;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp359 = *(&local2);
$fn361 $tmp360 = ($fn361) param0->$class->vtable[5];
$tmp360(param0, param1, $tmp359);
goto block15;
block35:;
frost$core$Int64 $tmp362 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:106:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp363 = $tmp295.value;
int64_t $tmp364 = $tmp362.value;
bool $tmp365 = $tmp363 == $tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp368 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:106:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp369 = $tmp295.value;
int64_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 == $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block38; else goto block41;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:107
frost$core$Int64 $tmp374 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:107:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp375 = &(&local5)->$rawValue;
*$tmp375 = $tmp374;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp376 = *(&local5);
*(&local4) = $tmp376;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp377 = *(&local4);
$fn379 $tmp378 = ($fn379) param0->$class->vtable[5];
$tmp378(param0, param1, $tmp377);
goto block15;
block41:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:109:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp381 = $tmp295.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 == $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:110
frost$core$Int64 $tmp386 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:110:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp387 = &(&local7)->$rawValue;
*$tmp387 = $tmp386;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp388 = *(&local7);
*(&local6) = $tmp388;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp389 = *(&local6);
$fn391 $tmp390 = ($fn391) param0->$class->vtable[5];
$tmp390(param0, param1, $tmp389);
goto block15;
block45:;
frost$core$Int64 $tmp392 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:112:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp393 = $tmp295.value;
int64_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 == $tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:113
frost$core$Int64 $tmp398 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:113:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp399 = &(&local9)->$rawValue;
*$tmp399 = $tmp398;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp400 = *(&local9);
*(&local8) = $tmp400;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp401 = *(&local8);
$fn403 $tmp402 = ($fn403) param0->$class->vtable[5];
$tmp402(param0, param1, $tmp401);
goto block15;
block49:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:115:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp405 = $tmp295.value;
int64_t $tmp406 = $tmp404.value;
bool $tmp407 = $tmp405 == $tmp406;
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:116
frost$core$Int64 $tmp410 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:116:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp411 = &(&local11)->$rawValue;
*$tmp411 = $tmp410;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp412 = *(&local11);
*(&local10) = $tmp412;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp413 = *(&local10);
$fn415 $tmp414 = ($fn415) param0->$class->vtable[5];
$tmp414(param0, param1, $tmp413);
goto block15;
block53:;
frost$core$Int64 $tmp416 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:118:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp417 = $tmp295.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 == $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp422 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:118:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp423 = $tmp295.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 == $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block56; else goto block59;
block59:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:118:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp429 = $tmp295.value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 == $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block56; else goto block61;
block61:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:118:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp435 = $tmp295.value;
int64_t $tmp436 = $tmp434.value;
bool $tmp437 = $tmp435 == $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block56; else goto block63;
block63:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:119:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp441 = $tmp295.value;
int64_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 == $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block56; else goto block65;
block65:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {20u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:119:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp447 = $tmp295.value;
int64_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 == $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block56; else goto block67;
block67:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {21u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:119:72
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp453 = $tmp295.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 == $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block56; else goto block69;
block69:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:120:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp459 = $tmp295.value;
int64_t $tmp460 = $tmp458.value;
bool $tmp461 = $tmp459 == $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block56; else goto block71;
block71:;
frost$core$Int64 $tmp464 = (frost$core$Int64) {24u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:120:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp465 = $tmp295.value;
int64_t $tmp466 = $tmp464.value;
bool $tmp467 = $tmp465 == $tmp466;
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block56; else goto block73;
block73:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {25u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:120:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp471 = $tmp295.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block56; else goto block75;
block75:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:120:82
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp477 = $tmp295.value;
int64_t $tmp478 = $tmp476.value;
bool $tmp479 = $tmp477 == $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block56; else goto block77;
block77:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {27u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:121:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp483 = $tmp295.value;
int64_t $tmp484 = $tmp482.value;
bool $tmp485 = $tmp483 == $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block56; else goto block79;
block79:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:121:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp489 = $tmp295.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 == $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block56; else goto block81;
block81:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {35u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:121:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp495 = $tmp295.value;
int64_t $tmp496 = $tmp494.value;
bool $tmp497 = $tmp495 == $tmp496;
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp497};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block56; else goto block83;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:122
frost$core$Int64 $tmp500 = (frost$core$Int64) {7u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:122:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp501 = &(&local13)->$rawValue;
*$tmp501 = $tmp500;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp502 = *(&local13);
*(&local12) = $tmp502;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp503 = *(&local12);
$fn505 $tmp504 = ($fn505) param0->$class->vtable[5];
$tmp504(param0, param1, $tmp503);
goto block15;
block83:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {28u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:124:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp507 = $tmp295.value;
int64_t $tmp508 = $tmp506.value;
bool $tmp509 = $tmp507 == $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block86; else goto block87;
block87:;
frost$core$Int64 $tmp512 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:124:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp513 = $tmp295.value;
int64_t $tmp514 = $tmp512.value;
bool $tmp515 = $tmp513 == $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block86; else goto block89;
block89:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {30u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:124:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp519 = $tmp295.value;
int64_t $tmp520 = $tmp518.value;
bool $tmp521 = $tmp519 == $tmp520;
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521};
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block86; else goto block91;
block91:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {31u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:124:86
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp525 = $tmp295.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 == $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block86; else goto block93;
block93:;
frost$core$Int64 $tmp530 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:125:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp531 = $tmp295.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block86; else goto block95;
block95:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {33u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:125:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp537 = $tmp295.value;
int64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 == $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block86; else goto block97;
block97:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {36u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:125:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp543 = $tmp295.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 == $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block86; else goto block99;
block99:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {37u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:125:82
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp549 = $tmp295.value;
int64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 == $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block86; else goto block101;
block101:;
frost$core$Int64 $tmp554 = (frost$core$Int64) {38u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:126:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp555 = $tmp295.value;
int64_t $tmp556 = $tmp554.value;
bool $tmp557 = $tmp555 == $tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block86; else goto block103;
block103:;
frost$core$Int64 $tmp560 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:126:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp561 = $tmp295.value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 == $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block86; else goto block105;
block105:;
frost$core$Int64 $tmp566 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:126:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp567 = $tmp295.value;
int64_t $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 == $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block86; else goto block107;
block107:;
frost$core$Int64 $tmp572 = (frost$core$Int64) {41u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:126:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp573 = $tmp295.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block86; else goto block109;
block109:;
frost$core$Int64 $tmp578 = (frost$core$Int64) {23u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:127:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp579 = $tmp295.value;
int64_t $tmp580 = $tmp578.value;
bool $tmp581 = $tmp579 == $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block86; else goto block111;
block111:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {45u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:127:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp585 = $tmp295.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 == $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block86; else goto block113;
block113:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {46u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:127:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp591 = $tmp295.value;
int64_t $tmp592 = $tmp590.value;
bool $tmp593 = $tmp591 == $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block86; else goto block115;
block86:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:128
frost$core$Int64 $tmp596 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:128:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp597 = &(&local15)->$rawValue;
*$tmp597 = $tmp596;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp598 = *(&local15);
*(&local14) = $tmp598;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp599 = *(&local14);
$fn601 $tmp600 = ($fn601) param0->$class->vtable[5];
$tmp600(param0, param1, $tmp599);
goto block15;
block115:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {49u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:130:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp603 = $tmp295.value;
int64_t $tmp604 = $tmp602.value;
bool $tmp605 = $tmp603 == $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp608 = (frost$core$Int64) {50u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:130:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp609 = $tmp295.value;
int64_t $tmp610 = $tmp608.value;
bool $tmp611 = $tmp609 == $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block118; else goto block121;
block118:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:131
frost$core$Int64 $tmp614 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:131:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp615 = &(&local17)->$rawValue;
*$tmp615 = $tmp614;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp616 = *(&local17);
*(&local16) = $tmp616;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp617 = *(&local16);
$fn619 $tmp618 = ($fn619) param0->$class->vtable[5];
$tmp618(param0, param1, $tmp617);
goto block15;
block121:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {54u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:133:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp621 = $tmp295.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block124; else goto block125;
block125:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {55u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:133:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp627 = $tmp295.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 == $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block124; else goto block127;
block127:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {56u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:133:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp633 = $tmp295.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block124; else goto block129;
block129:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {57u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:133:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp639 = $tmp295.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block124; else goto block131;
block131:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {58u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:134:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp645 = $tmp295.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block124; else goto block133;
block133:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {59u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:134:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp651 = $tmp295.value;
int64_t $tmp652 = $tmp650.value;
bool $tmp653 = $tmp651 == $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block124; else goto block135;
block135:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {60u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:134:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp657 = $tmp295.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 == $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block124; else goto block137;
block137:;
frost$core$Int64 $tmp662 = (frost$core$Int64) {61u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:134:82
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp663 = $tmp295.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block124; else goto block139;
block139:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {62u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:135:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp669 = $tmp295.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block124; else goto block141;
block141:;
frost$core$Int64 $tmp674 = (frost$core$Int64) {63u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:135:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp675 = $tmp295.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 == $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block124; else goto block143;
block143:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {64u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:135:62
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp681 = $tmp295.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 == $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block124; else goto block145;
block145:;
frost$core$Int64 $tmp686 = (frost$core$Int64) {65u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:135:78
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp687 = $tmp295.value;
int64_t $tmp688 = $tmp686.value;
bool $tmp689 = $tmp687 == $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block124; else goto block147;
block147:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {66u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:136:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp693 = $tmp295.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 == $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block124; else goto block149;
block149:;
frost$core$Int64 $tmp698 = (frost$core$Int64) {67u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:136:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp699 = $tmp295.value;
int64_t $tmp700 = $tmp698.value;
bool $tmp701 = $tmp699 == $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block124; else goto block151;
block151:;
frost$core$Int64 $tmp704 = (frost$core$Int64) {68u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:136:68
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp705 = $tmp295.value;
int64_t $tmp706 = $tmp704.value;
bool $tmp707 = $tmp705 == $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block124; else goto block153;
block153:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {69u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:136:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp711 = $tmp295.value;
int64_t $tmp712 = $tmp710.value;
bool $tmp713 = $tmp711 == $tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block124; else goto block155;
block155:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {70u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:137:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp717 = $tmp295.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 == $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block124; else goto block157;
block157:;
frost$core$Int64 $tmp722 = (frost$core$Int64) {71u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:137:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp723 = $tmp295.value;
int64_t $tmp724 = $tmp722.value;
bool $tmp725 = $tmp723 == $tmp724;
frost$core$Bit $tmp726 = (frost$core$Bit) {$tmp725};
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block124; else goto block159;
block159:;
frost$core$Int64 $tmp728 = (frost$core$Int64) {72u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:137:64
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp729 = $tmp295.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block124; else goto block161;
block161:;
frost$core$Int64 $tmp734 = (frost$core$Int64) {73u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:137:87
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp735 = $tmp295.value;
int64_t $tmp736 = $tmp734.value;
bool $tmp737 = $tmp735 == $tmp736;
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737};
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block124; else goto block163;
block163:;
frost$core$Int64 $tmp740 = (frost$core$Int64) {74u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:138:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp741 = $tmp295.value;
int64_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 == $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block124; else goto block165;
block165:;
frost$core$Int64 $tmp746 = (frost$core$Int64) {75u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:138:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp747 = $tmp295.value;
int64_t $tmp748 = $tmp746.value;
bool $tmp749 = $tmp747 == $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block124; else goto block167;
block167:;
frost$core$Int64 $tmp752 = (frost$core$Int64) {76u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:138:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp753 = $tmp295.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 == $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block124; else goto block169;
block169:;
frost$core$Int64 $tmp758 = (frost$core$Int64) {77u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:139:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp759 = $tmp295.value;
int64_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 == $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block124; else goto block171;
block171:;
frost$core$Int64 $tmp764 = (frost$core$Int64) {78u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:139:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp765 = $tmp295.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 == $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block124; else goto block173;
block173:;
frost$core$Int64 $tmp770 = (frost$core$Int64) {79u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:139:76
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp771 = $tmp295.value;
int64_t $tmp772 = $tmp770.value;
bool $tmp773 = $tmp771 == $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block124; else goto block175;
block175:;
frost$core$Int64 $tmp776 = (frost$core$Int64) {80u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:139:94
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp777 = $tmp295.value;
int64_t $tmp778 = $tmp776.value;
bool $tmp779 = $tmp777 == $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block124; else goto block177;
block177:;
frost$core$Int64 $tmp782 = (frost$core$Int64) {81u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:140:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp783 = $tmp295.value;
int64_t $tmp784 = $tmp782.value;
bool $tmp785 = $tmp783 == $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block124; else goto block179;
block179:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {82u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:140:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp789 = $tmp295.value;
int64_t $tmp790 = $tmp788.value;
bool $tmp791 = $tmp789 == $tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block124; else goto block181;
block181:;
frost$core$Int64 $tmp794 = (frost$core$Int64) {83u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:140:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp795 = $tmp295.value;
int64_t $tmp796 = $tmp794.value;
bool $tmp797 = $tmp795 == $tmp796;
frost$core$Bit $tmp798 = (frost$core$Bit) {$tmp797};
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block124; else goto block183;
block183:;
frost$core$Int64 $tmp800 = (frost$core$Int64) {84u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:140:85
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp801 = $tmp295.value;
int64_t $tmp802 = $tmp800.value;
bool $tmp803 = $tmp801 == $tmp802;
frost$core$Bit $tmp804 = (frost$core$Bit) {$tmp803};
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block124; else goto block185;
block185:;
frost$core$Int64 $tmp806 = (frost$core$Int64) {85u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:141:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp807 = $tmp295.value;
int64_t $tmp808 = $tmp806.value;
bool $tmp809 = $tmp807 == $tmp808;
frost$core$Bit $tmp810 = (frost$core$Bit) {$tmp809};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block124; else goto block187;
block187:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {86u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:141:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp813 = $tmp295.value;
int64_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 == $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block124; else goto block189;
block189:;
frost$core$Int64 $tmp818 = (frost$core$Int64) {87u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:141:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp819 = $tmp295.value;
int64_t $tmp820 = $tmp818.value;
bool $tmp821 = $tmp819 == $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block124; else goto block191;
block191:;
frost$core$Int64 $tmp824 = (frost$core$Int64) {88u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:141:90
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp825 = $tmp295.value;
int64_t $tmp826 = $tmp824.value;
bool $tmp827 = $tmp825 == $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block124; else goto block193;
block193:;
frost$core$Int64 $tmp830 = (frost$core$Int64) {89u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:142:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp831 = $tmp295.value;
int64_t $tmp832 = $tmp830.value;
bool $tmp833 = $tmp831 == $tmp832;
frost$core$Bit $tmp834 = (frost$core$Bit) {$tmp833};
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block124; else goto block195;
block195:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {90u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:142:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp837 = $tmp295.value;
int64_t $tmp838 = $tmp836.value;
bool $tmp839 = $tmp837 == $tmp838;
frost$core$Bit $tmp840 = (frost$core$Bit) {$tmp839};
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block124; else goto block197;
block197:;
frost$core$Int64 $tmp842 = (frost$core$Int64) {91u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:142:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp843 = $tmp295.value;
int64_t $tmp844 = $tmp842.value;
bool $tmp845 = $tmp843 == $tmp844;
frost$core$Bit $tmp846 = (frost$core$Bit) {$tmp845};
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block124; else goto block199;
block199:;
frost$core$Int64 $tmp848 = (frost$core$Int64) {92u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:143:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp849 = $tmp295.value;
int64_t $tmp850 = $tmp848.value;
bool $tmp851 = $tmp849 == $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block124; else goto block201;
block201:;
frost$core$Int64 $tmp854 = (frost$core$Int64) {93u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:143:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp855 = $tmp295.value;
int64_t $tmp856 = $tmp854.value;
bool $tmp857 = $tmp855 == $tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block124; else goto block203;
block203:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {94u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:143:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp861 = $tmp295.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block124; else goto block205;
block205:;
frost$core$Int64 $tmp866 = (frost$core$Int64) {95u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:144:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp867 = $tmp295.value;
int64_t $tmp868 = $tmp866.value;
bool $tmp869 = $tmp867 == $tmp868;
frost$core$Bit $tmp870 = (frost$core$Bit) {$tmp869};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block124; else goto block207;
block207:;
frost$core$Int64 $tmp872 = (frost$core$Int64) {96u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:144:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp873 = $tmp295.value;
int64_t $tmp874 = $tmp872.value;
bool $tmp875 = $tmp873 == $tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block124; else goto block209;
block209:;
frost$core$Int64 $tmp878 = (frost$core$Int64) {97u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:144:76
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp879 = $tmp295.value;
int64_t $tmp880 = $tmp878.value;
bool $tmp881 = $tmp879 == $tmp880;
frost$core$Bit $tmp882 = (frost$core$Bit) {$tmp881};
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block124; else goto block211;
block211:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {98u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:145:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp885 = $tmp295.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 == $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block124; else goto block213;
block213:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {99u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:145:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp891 = $tmp295.value;
int64_t $tmp892 = $tmp890.value;
bool $tmp893 = $tmp891 == $tmp892;
frost$core$Bit $tmp894 = (frost$core$Bit) {$tmp893};
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block124; else goto block215;
block215:;
frost$core$Int64 $tmp896 = (frost$core$Int64) {100u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:145:88
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp897 = $tmp295.value;
int64_t $tmp898 = $tmp896.value;
bool $tmp899 = $tmp897 == $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block124; else goto block217;
block217:;
frost$core$Int64 $tmp902 = (frost$core$Int64) {101u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:146:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp903 = $tmp295.value;
int64_t $tmp904 = $tmp902.value;
bool $tmp905 = $tmp903 == $tmp904;
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block124; else goto block219;
block219:;
frost$core$Int64 $tmp908 = (frost$core$Int64) {102u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from SyntaxHighlighter.frost:146:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp909 = $tmp295.value;
int64_t $tmp910 = $tmp908.value;
bool $tmp911 = $tmp909 == $tmp910;
frost$core$Bit $tmp912 = (frost$core$Bit) {$tmp911};
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block124; else goto block221;
block124:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:147
frost$core$Int64 $tmp914 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:147:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp915 = &(&local19)->$rawValue;
*$tmp915 = $tmp914;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp916 = *(&local19);
*(&local18) = $tmp916;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp917 = *(&local18);
$fn919 $tmp918 = ($fn919) param0->$class->vtable[5];
$tmp918(param0, param1, $tmp917);
goto block15;
block221:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:150
frost$core$Int64 $tmp920 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from SyntaxHighlighter.frost:150:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp921 = &(&local21)->$rawValue;
*$tmp921 = $tmp920;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp922 = *(&local21);
*(&local20) = $tmp922;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp923 = *(&local20);
$fn925 $tmp924 = ($fn925) param0->$class->vtable[5];
$tmp924(param0, param1, $tmp923);
goto block15;
block15:;
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$rewind(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:156
frost$collections$Array** $tmp926 = &param0->tokens;
frost$collections$Array* $tmp927 = *$tmp926;
frost$collections$Array** $tmp928 = &param0->tokens;
frost$collections$Array* $tmp929 = *$tmp928;
ITable* $tmp930 = ((frost$collections$CollectionView*) $tmp929)->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
frost$core$Int64 $tmp933 = $tmp931(((frost$collections$CollectionView*) $tmp929));
frost$core$Int64 $tmp934 = (frost$core$Int64) {1u};
int64_t $tmp935 = $tmp933.value;
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935 - $tmp936;
frost$core$Int64 $tmp938 = (frost$core$Int64) {$tmp937};
frost$core$Object* $tmp939 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp927, $tmp938);
frost$core$Frost$unref$frost$core$Object$Q($tmp939);
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$init(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:69
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
frost$collections$Stack* $tmp940 = (frost$collections$Stack*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init($tmp940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$collections$Stack** $tmp941 = &param0->stack;
frost$collections$Stack* $tmp942 = *$tmp941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$collections$Stack** $tmp943 = &param0->stack;
*$tmp943 = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp944 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp944);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$collections$Array** $tmp945 = &param0->tokens;
frost$collections$Array* $tmp946 = *$tmp945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$collections$Array** $tmp947 = &param0->tokens;
*$tmp947 = $tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
return;

}
void org$frostlang$frostc$parser$SyntaxHighlighter$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Stack** $tmp948 = &param0->stack;
frost$collections$Stack* $tmp949 = *$tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$collections$Array** $tmp950 = &param0->tokens;
frost$collections$Array* $tmp951 = *$tmp950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
return;

}

