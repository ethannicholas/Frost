#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$State$class_type org$frostlang$frostc$pass$Analyzer$State$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$State$cleanup, org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit} };

typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn37)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn67)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn93)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn109)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef frost$core$Int (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn141)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn157)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn196)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 40, -2255277803817197792, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x74\x65\x28", 6, -5947964825372280646, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$State$init(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:100
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->locals;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
void org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$pass$Analyzer$State* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:104
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp7 = &param1->locals;
frost$collections$Array* $tmp8 = *$tmp7;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp6, ((frost$collections$CollectionView*) $tmp8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp9 = &param0->locals;
frost$collections$Array* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp11 = &param0->locals;
*$tmp11 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:108
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
*(&local0) = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:109
frost$collections$Array** $tmp13 = &param0->locals;
frost$collections$Array* $tmp14 = *$tmp13;
ITable* $tmp15 = ((frost$collections$CollectionView*) $tmp14)->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Int $tmp18 = $tmp16(((frost$collections$CollectionView*) $tmp14));
frost$collections$Array** $tmp19 = &param2->locals;
frost$collections$Array* $tmp20 = *$tmp19;
ITable* $tmp21 = ((frost$collections$CollectionView*) $tmp20)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Int $tmp24 = $tmp22(((frost$collections$CollectionView*) $tmp20));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:109:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp25 = $tmp18.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block2; else goto block3;
block3:;
frost$core$Int $tmp30 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s31, $tmp30);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:110
frost$core$Int $tmp32 = (frost$core$Int) {0u};
frost$collections$Array** $tmp33 = &param0->locals;
frost$collections$Array* $tmp34 = *$tmp33;
ITable* $tmp35 = ((frost$collections$CollectionView*) $tmp34)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Int $tmp38 = $tmp36(((frost$collections$CollectionView*) $tmp34));
frost$core$Bit $tmp39 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp40 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp32, $tmp38, $tmp39);
frost$core$Int $tmp41 = $tmp40.min;
*(&local1) = $tmp41;
frost$core$Int $tmp42 = $tmp40.max;
frost$core$Bit $tmp43 = $tmp40.inclusive;
bool $tmp44 = $tmp43.value;
frost$core$Int $tmp45 = (frost$core$Int) {1u};
if ($tmp44) goto block7; else goto block8;
block7:;
int64_t $tmp46 = $tmp41.value;
int64_t $tmp47 = $tmp42.value;
bool $tmp48 = $tmp46 <= $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block4; else goto block5;
block8:;
int64_t $tmp51 = $tmp41.value;
int64_t $tmp52 = $tmp42.value;
bool $tmp53 = $tmp51 < $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:111
frost$collections$Array** $tmp56 = &param0->locals;
frost$collections$Array* $tmp57 = *$tmp56;
frost$core$Int $tmp58 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:111:36
frost$core$Int $tmp59 = (frost$core$Int) {0u};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 >= $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block12; else goto block11;
block12:;
ITable* $tmp65 = ((frost$collections$CollectionView*) $tmp57)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Int $tmp68 = $tmp66(((frost$collections$CollectionView*) $tmp57));
int64_t $tmp69 = $tmp58.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 < $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block10; else goto block11;
block11:;
frost$core$Int $tmp74 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp77 = &$tmp57->data;
frost$core$Object** $tmp78 = *$tmp77;
frost$core$Int64 $tmp79 = frost$core$Int64$init$frost$core$Int($tmp58);
int64_t $tmp80 = $tmp79.value;
frost$core$Object* $tmp81 = $tmp78[$tmp80];
frost$core$Frost$ref$frost$core$Object$Q($tmp81);
frost$collections$Array** $tmp82 = &param2->locals;
frost$collections$Array* $tmp83 = *$tmp82;
frost$core$Int $tmp84 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:111:64
frost$core$Int $tmp85 = (frost$core$Int) {0u};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 >= $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block16; else goto block15;
block16:;
ITable* $tmp91 = ((frost$collections$CollectionView*) $tmp83)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int $tmp94 = $tmp92(((frost$collections$CollectionView*) $tmp83));
int64_t $tmp95 = $tmp84.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 < $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block14; else goto block15;
block15:;
frost$core$Int $tmp100 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp103 = &$tmp83->data;
frost$core$Object** $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = frost$core$Int64$init$frost$core$Int($tmp84);
int64_t $tmp106 = $tmp105.value;
frost$core$Object* $tmp107 = $tmp104[$tmp106];
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
$fn109 $tmp108 = ($fn109) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp81)->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp110 = $tmp108(((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp81), param1, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp107));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local2) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:112
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp112 = *(&local2);
frost$collections$Array** $tmp113 = &param0->locals;
frost$collections$Array* $tmp114 = *$tmp113;
frost$core$Int $tmp115 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:112:35
frost$core$Int $tmp116 = (frost$core$Int) {0u};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 >= $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block22; else goto block21;
block22:;
ITable* $tmp122 = ((frost$collections$CollectionView*) $tmp114)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Int $tmp125 = $tmp123(((frost$collections$CollectionView*) $tmp114));
int64_t $tmp126 = $tmp115.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 < $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block20; else goto block21;
block21:;
frost$core$Int $tmp131 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp134 = &$tmp114->data;
frost$core$Object** $tmp135 = *$tmp134;
frost$core$Int64 $tmp136 = frost$core$Int64$init$frost$core$Int($tmp115);
int64_t $tmp137 = $tmp136.value;
frost$core$Object* $tmp138 = $tmp135[$tmp137];
frost$core$Frost$ref$frost$core$Object$Q($tmp138);
ITable* $tmp139 = ((frost$core$Equatable*) $tmp112)->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
frost$core$Bit $tmp142 = $tmp140(((frost$core$Equatable*) $tmp112), ((frost$core$Equatable*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp138)));
bool $tmp143 = $tmp142.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
if ($tmp143) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:113
frost$core$Bit $tmp144 = (frost$core$Bit) {true};
*(&local0) = $tmp144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:114
frost$collections$Array** $tmp145 = &param0->locals;
frost$collections$Array* $tmp146 = *$tmp145;
frost$core$Int $tmp147 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp148 = *(&local2);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:114:27
frost$core$Int $tmp149 = (frost$core$Int) {0u};
int64_t $tmp150 = $tmp147.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 >= $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block26; else goto block25;
block26:;
ITable* $tmp155 = ((frost$collections$CollectionView*) $tmp146)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Int $tmp158 = $tmp156(((frost$collections$CollectionView*) $tmp146));
int64_t $tmp159 = $tmp147.value;
int64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 < $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block24; else goto block25;
block25:;
frost$core$Int $tmp164 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp167 = &$tmp146->data;
frost$core$Object** $tmp168 = *$tmp167;
frost$core$Int64 $tmp169 = frost$core$Int64$init$frost$core$Int($tmp147);
int64_t $tmp170 = $tmp169.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Object* $tmp171 = $tmp168[$tmp170];
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
$tmp168[$tmp170] = ((frost$core$Object*) $tmp148);
goto block18;
block18:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp172 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Int $tmp173 = *(&local1);
int64_t $tmp174 = $tmp42.value;
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174 - $tmp175;
frost$core$Int $tmp177 = (frost$core$Int) {$tmp176};
if ($tmp44) goto block28; else goto block29;
block28:;
int64_t $tmp178 = $tmp177.value;
int64_t $tmp179 = $tmp45.value;
bool $tmp180 = $tmp178 >= $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block27; else goto block5;
block29:;
int64_t $tmp183 = $tmp177.value;
int64_t $tmp184 = $tmp45.value;
bool $tmp185 = $tmp183 > $tmp184;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block27; else goto block5;
block27:;
int64_t $tmp188 = $tmp173.value;
int64_t $tmp189 = $tmp45.value;
int64_t $tmp190 = $tmp188 + $tmp189;
frost$core$Int $tmp191 = (frost$core$Int) {$tmp190};
*(&local1) = $tmp191;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:117
frost$core$Bit $tmp192 = *(&local0);
return $tmp192;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:122
frost$collections$Array** $tmp193 = &param0->locals;
frost$collections$Array* $tmp194 = *$tmp193;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:122:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn196 $tmp195 = ($fn196) ((frost$core$Object*) $tmp194)->$class->vtable[0];
frost$core$String* $tmp197 = $tmp195(((frost$core$Object*) $tmp194));
frost$core$String* $tmp198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s199, $tmp197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$String* $tmp200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp198, &$s201);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
return $tmp200;

}
void org$frostlang$frostc$pass$Analyzer$State$cleanup(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:96
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp202 = &param0->locals;
frost$collections$Array* $tmp203 = *$tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
return;

}






