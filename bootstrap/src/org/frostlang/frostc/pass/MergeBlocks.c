#include "org/frostlang/frostc/pass/MergeBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$MergeBlocks$class_type org$frostlang$frostc$pass$MergeBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$MergeBlocks$cleanup, org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn98)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn116)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn140)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn176)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn186)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn199)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn212)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn220)(org$frostlang$frostc$LinkedList*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73", 37, -1664802375534301975, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 142, 7030418619898892193, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 136, 4083565817121878510, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$MergeBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$IR$Block$ID local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:7
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
*(&local0) = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:8
frost$collections$Array** $tmp3 = &param1->blocks;
frost$collections$Array* $tmp4 = *$tmp3;
ITable* $tmp5 = ((frost$collections$CollectionView*) $tmp4)->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[0];
frost$core$Int $tmp8 = $tmp6(((frost$collections$CollectionView*) $tmp4));
frost$core$Int $tmp9 = (frost$core$Int) {1u};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10 - $tmp11;
frost$core$Int $tmp13 = (frost$core$Int) {$tmp12};
frost$core$Int $tmp14 = (frost$core$Int) {0u};
frost$core$Int $tmp15 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp16 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp17 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp13, $tmp14, $tmp15, $tmp16);
frost$core$Int $tmp18 = $tmp17.start;
*(&local1) = $tmp18;
frost$core$Int $tmp19 = $tmp17.end;
frost$core$Int $tmp20 = $tmp17.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MergeBlocks.frost:8:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp21 = $tmp20.value;
int64_t $tmp22 = -$tmp21;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
frost$core$Bit $tmp24 = $tmp17.inclusive;
bool $tmp25 = $tmp24.value;
frost$core$Int $tmp26 = (frost$core$Int) {0u};
int64_t $tmp27 = $tmp20.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 >= $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
if ($tmp25) goto block7; else goto block8;
block7:;
int64_t $tmp32 = $tmp18.value;
int64_t $tmp33 = $tmp19.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block8:;
int64_t $tmp37 = $tmp18.value;
int64_t $tmp38 = $tmp19.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block3;
block6:;
if ($tmp25) goto block9; else goto block10;
block9:;
int64_t $tmp42 = $tmp18.value;
int64_t $tmp43 = $tmp19.value;
bool $tmp44 = $tmp42 >= $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block2; else goto block3;
block10:;
int64_t $tmp47 = $tmp18.value;
int64_t $tmp48 = $tmp19.value;
bool $tmp49 = $tmp47 > $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:9
frost$collections$Array** $tmp52 = &param1->blocks;
frost$collections$Array* $tmp53 = *$tmp52;
frost$core$Int $tmp54 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MergeBlocks.frost:9:31
frost$core$Int $tmp55 = (frost$core$Int) {0u};
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 >= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block14; else goto block13;
block14:;
ITable* $tmp61 = ((frost$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp53));
int64_t $tmp65 = $tmp54.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 < $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block13;
block13:;
frost$core$Int $tmp70 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp73 = &$tmp53->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = frost$core$Int64$init$frost$core$Int($tmp54);
int64_t $tmp76 = $tmp75.value;
frost$core$Object* $tmp77 = $tmp74[$tmp76];
frost$core$Frost$ref$frost$core$Object$Q($tmp77);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp77)));
org$frostlang$frostc$IR$Block* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp77);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
frost$collections$HashMap** $tmp79 = &param2->predecessors;
frost$collections$HashMap* $tmp80 = *$tmp79;
org$frostlang$frostc$IR$Block* $tmp81 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp82 = &$tmp81->id;
org$frostlang$frostc$IR$Block$ID $tmp83 = *$tmp82;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp84->value = $tmp83;
frost$core$Object* $tmp85 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp80, ((frost$collections$HashKey*) $tmp84));
*(&local3) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp85)));
frost$collections$HashSet* $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local3) = ((frost$collections$HashSet*) $tmp85);
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp84)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
frost$collections$HashSet* $tmp87 = *(&local3);
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87 != NULL};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block17; else goto block16;
block17:;
frost$collections$HashSet* $tmp90 = *(&local3);
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90 != NULL};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block18; else goto block19;
block19:;
frost$core$Int $tmp93 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block18:;
ITable* $tmp96 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Int $tmp99 = $tmp97(((frost$collections$CollectionView*) $tmp90));
frost$core$Int $tmp100 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
frost$collections$HashMap** $tmp106 = &param2->blocks;
frost$collections$HashMap* $tmp107 = *$tmp106;
frost$collections$HashSet* $tmp108 = *(&local3);
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108 != NULL};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block21; else goto block22;
block22:;
frost$core$Int $tmp111 = (frost$core$Int) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s112, $tmp111, &$s113);
abort(); // unreachable
block21:;
ITable* $tmp114 = ((frost$collections$Iterable*) $tmp108)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
frost$collections$Iterator* $tmp117 = $tmp115(((frost$collections$Iterable*) $tmp108));
ITable* $tmp118 = $tmp117->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119($tmp117);
org$frostlang$frostc$IR$Block$ID $tmp122 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp121)->value.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp123;
$tmp123 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp123->value = $tmp122;
frost$core$Object* $tmp124 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp107, ((frost$collections$HashKey*) $tmp123));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp124)));
org$frostlang$frostc$IR$Block* $tmp125 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp124);
frost$core$Frost$unref$frost$core$Object$Q($tmp124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp123)));
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
org$frostlang$frostc$IR$Block* $tmp126 = *(&local4);
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126 != NULL};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block23; else goto block24;
block24:;
frost$core$Int $tmp129 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s130, $tmp129);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
org$frostlang$frostc$IR$Block* $tmp131 = *(&local4);
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131 != NULL};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block25; else goto block26;
block26:;
frost$core$Int $tmp134 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s135, $tmp134, &$s136);
abort(); // unreachable
block25:;
org$frostlang$frostc$LinkedList** $tmp137 = &$tmp131->statements;
org$frostlang$frostc$LinkedList* $tmp138 = *$tmp137;
$fn140 $tmp139 = ($fn140) $tmp138->$class->vtable[6];
frost$core$Object* $tmp141 = $tmp139($tmp138);
frost$core$Int* $tmp142 = &((org$frostlang$frostc$IR$Statement*) $tmp141)->$rawValue;
frost$core$Int $tmp143 = *$tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:15:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block28; else goto block27;
block28:;
org$frostlang$frostc$Position* $tmp150 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp141)->$data + 0);
org$frostlang$frostc$Position $tmp151 = *$tmp150;
*(&local5) = $tmp151;
org$frostlang$frostc$IR$Block$ID* $tmp152 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp141)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp153 = *$tmp152;
*(&local6) = $tmp153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:16
org$frostlang$frostc$IR$Block$ID $tmp154 = *(&local6);
org$frostlang$frostc$IR$Block* $tmp155 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp156 = &$tmp155->id;
org$frostlang$frostc$IR$Block$ID $tmp157 = *$tmp156;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:16:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp158 = $tmp154.value;
frost$core$Int $tmp159 = $tmp157.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block32; else goto block33;
block33:;
frost$core$Int $tmp165 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s166, $tmp165);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
org$frostlang$frostc$IR$Block* $tmp167 = *(&local4);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167 != NULL};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block34; else goto block35;
block35:;
frost$core$Int $tmp170 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable
block34:;
org$frostlang$frostc$LinkedList** $tmp173 = &$tmp167->statements;
org$frostlang$frostc$LinkedList* $tmp174 = *$tmp173;
$fn176 $tmp175 = ($fn176) $tmp174->$class->vtable[7];
$tmp175($tmp174);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
org$frostlang$frostc$IR$Block* $tmp177 = *(&local4);
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177 != NULL};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block36; else goto block37;
block37:;
frost$core$Int $tmp180 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s181, $tmp180, &$s182);
abort(); // unreachable
block36:;
org$frostlang$frostc$LinkedList** $tmp183 = &$tmp177->ids;
org$frostlang$frostc$LinkedList* $tmp184 = *$tmp183;
$fn186 $tmp185 = ($fn186) $tmp184->$class->vtable[7];
$tmp185($tmp184);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
org$frostlang$frostc$IR$Block* $tmp187 = *(&local4);
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187 != NULL};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block38; else goto block39;
block39:;
frost$core$Int $tmp190 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable
block38:;
org$frostlang$frostc$LinkedList** $tmp193 = &$tmp187->statements;
org$frostlang$frostc$LinkedList* $tmp194 = *$tmp193;
org$frostlang$frostc$IR$Block* $tmp195 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp196 = &$tmp195->statements;
org$frostlang$frostc$LinkedList* $tmp197 = *$tmp196;
$fn199 $tmp198 = ($fn199) $tmp194->$class->vtable[5];
$tmp198($tmp194, $tmp197);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
org$frostlang$frostc$IR$Block* $tmp200 = *(&local4);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200 != NULL};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block40; else goto block41;
block41:;
frost$core$Int $tmp203 = (frost$core$Int) {20u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block40:;
org$frostlang$frostc$LinkedList** $tmp206 = &$tmp200->ids;
org$frostlang$frostc$LinkedList* $tmp207 = *$tmp206;
org$frostlang$frostc$IR$Block* $tmp208 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp209 = &$tmp208->ids;
org$frostlang$frostc$LinkedList* $tmp210 = *$tmp209;
$fn212 $tmp211 = ($fn212) $tmp207->$class->vtable[5];
$tmp211($tmp207, $tmp210);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp213 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp214 = &$tmp213->statements;
org$frostlang$frostc$LinkedList* $tmp215 = *$tmp214;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp216 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp217 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp218 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp216, $tmp217, $tmp218);
$fn220 $tmp219 = ($fn220) $tmp215->$class->vtable[4];
$tmp219($tmp215, ((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
frost$core$Bit $tmp221 = (frost$core$Bit) {true};
*(&local0) = $tmp221;
goto block27;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
org$frostlang$frostc$IR$Block* $tmp222 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
frost$collections$HashSet* $tmp223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local3) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$IR$Block* $tmp224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp225 = *(&local1);
if ($tmp31) goto block43; else goto block44;
block43:;
int64_t $tmp226 = $tmp19.value;
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226 - $tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {$tmp228};
if ($tmp25) goto block45; else goto block46;
block45:;
int64_t $tmp230 = $tmp229.value;
int64_t $tmp231 = $tmp20.value;
bool $tmp232 = $tmp230 >= $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block42; else goto block3;
block46:;
int64_t $tmp235 = $tmp229.value;
int64_t $tmp236 = $tmp20.value;
bool $tmp237 = $tmp235 > $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block42; else goto block3;
block44:;
int64_t $tmp240 = $tmp225.value;
int64_t $tmp241 = $tmp19.value;
int64_t $tmp242 = $tmp240 - $tmp241;
frost$core$Int $tmp243 = (frost$core$Int) {$tmp242};
if ($tmp25) goto block47; else goto block48;
block47:;
int64_t $tmp244 = $tmp243.value;
int64_t $tmp245 = $tmp23.value;
bool $tmp246 = $tmp244 >= $tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block42; else goto block3;
block48:;
int64_t $tmp249 = $tmp243.value;
int64_t $tmp250 = $tmp23.value;
bool $tmp251 = $tmp249 > $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block42; else goto block3;
block42:;
int64_t $tmp254 = $tmp225.value;
int64_t $tmp255 = $tmp20.value;
int64_t $tmp256 = $tmp254 + $tmp255;
frost$core$Int $tmp257 = (frost$core$Int) {$tmp256};
*(&local1) = $tmp257;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:27
frost$core$Bit $tmp258 = *(&local0);
return $tmp258;

}
void org$frostlang$frostc$pass$MergeBlocks$init(org$frostlang$frostc$pass$MergeBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(org$frostlang$frostc$pass$MergeBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

