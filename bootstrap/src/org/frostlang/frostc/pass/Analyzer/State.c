#include "org/frostlang/frostc/pass/Analyzer/State.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$State$class_type org$frostlang$frostc$pass$Analyzer$State$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$State$cleanup, org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit} };

typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn33)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn77)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn103)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn119)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef frost$core$Int (*$fn134)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn151)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn167)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn206)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn210)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn215)(frost$collections$Iterator*);
typedef org$frostlang$frostc$pass$Analyzer$DataFlowValue* (*$fn246)(org$frostlang$frostc$pass$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$pass$Analyzer$DataFlowValue*);
typedef frost$core$Bit (*$fn253)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn269)(frost$core$Object*);
typedef frost$core$String* (*$fn278)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 40, -2255277803817197792, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x74\x65\x28", 6, -5947964825372280646, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$State$init(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:101
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:102
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->statements;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->statements;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
void org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$pass$Analyzer$State* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:106
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp11 = &param1->locals;
frost$collections$Array* $tmp12 = *$tmp11;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp10, ((frost$collections$CollectionView*) $tmp12));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp13 = &param0->locals;
frost$collections$Array* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Array** $tmp15 = &param0->locals;
*$tmp15 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:107
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp16 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap** $tmp17 = &param1->statements;
frost$collections$HashMap* $tmp18 = *$tmp17;
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp16, ((frost$collections$MapView*) $tmp18));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$collections$HashMap** $tmp19 = &param0->statements;
frost$collections$HashMap* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$collections$HashMap** $tmp21 = &param0->statements;
*$tmp21 = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$State* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$State* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local5 = NULL;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:111
frost$core$Bit $tmp22 = (frost$core$Bit) {false};
*(&local0) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:112
frost$collections$Array** $tmp23 = &param0->locals;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$collections$Array** $tmp29 = &param2->locals;
frost$collections$Array* $tmp30 = *$tmp29;
ITable* $tmp31 = ((frost$collections$CollectionView*) $tmp30)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Int $tmp34 = $tmp32(((frost$collections$CollectionView*) $tmp30));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:112:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp35 = $tmp28.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block2; else goto block3;
block3:;
frost$core$Int $tmp40 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s41, $tmp40);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:113
frost$core$Int $tmp42 = (frost$core$Int) {0u};
frost$collections$Array** $tmp43 = &param0->locals;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
frost$core$Bit $tmp49 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp50 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp42, $tmp48, $tmp49);
frost$core$Int $tmp51 = $tmp50.min;
*(&local1) = $tmp51;
frost$core$Int $tmp52 = $tmp50.max;
frost$core$Bit $tmp53 = $tmp50.inclusive;
bool $tmp54 = $tmp53.value;
frost$core$Int $tmp55 = (frost$core$Int) {1u};
if ($tmp54) goto block7; else goto block8;
block7:;
int64_t $tmp56 = $tmp51.value;
int64_t $tmp57 = $tmp52.value;
bool $tmp58 = $tmp56 <= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block4; else goto block5;
block8:;
int64_t $tmp61 = $tmp51.value;
int64_t $tmp62 = $tmp52.value;
bool $tmp63 = $tmp61 < $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:114
frost$collections$Array** $tmp66 = &param0->locals;
frost$collections$Array* $tmp67 = *$tmp66;
frost$core$Int $tmp68 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:114:36
frost$core$Int $tmp69 = (frost$core$Int) {0u};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 >= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block12; else goto block11;
block12:;
ITable* $tmp75 = ((frost$collections$CollectionView*) $tmp67)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int $tmp78 = $tmp76(((frost$collections$CollectionView*) $tmp67));
int64_t $tmp79 = $tmp68.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 < $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block10; else goto block11;
block11:;
frost$core$Int $tmp84 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp87 = &$tmp67->data;
frost$core$Object** $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = frost$core$Int64$init$frost$core$Int($tmp68);
int64_t $tmp90 = $tmp89.value;
frost$core$Object* $tmp91 = $tmp88[$tmp90];
frost$core$Frost$ref$frost$core$Object$Q($tmp91);
frost$collections$Array** $tmp92 = &param2->locals;
frost$collections$Array* $tmp93 = *$tmp92;
frost$core$Int $tmp94 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:114:64
frost$core$Int $tmp95 = (frost$core$Int) {0u};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block16; else goto block15;
block16:;
ITable* $tmp101 = ((frost$collections$CollectionView*) $tmp93)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$CollectionView*) $tmp93));
int64_t $tmp105 = $tmp94.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 < $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block14; else goto block15;
block15:;
frost$core$Int $tmp110 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp113 = &$tmp93->data;
frost$core$Object** $tmp114 = *$tmp113;
frost$core$Int64 $tmp115 = frost$core$Int64$init$frost$core$Int($tmp94);
int64_t $tmp116 = $tmp115.value;
frost$core$Object* $tmp117 = $tmp114[$tmp116];
frost$core$Frost$ref$frost$core$Object$Q($tmp117);
$fn119 $tmp118 = ($fn119) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp91)->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp120 = $tmp118(((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp91), param1, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp117));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp121 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local2) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp91);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:115
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp122 = *(&local2);
frost$collections$Array** $tmp123 = &param0->locals;
frost$collections$Array* $tmp124 = *$tmp123;
frost$core$Int $tmp125 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Analyzer.frost:115:35
frost$core$Int $tmp126 = (frost$core$Int) {0u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 >= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block22; else goto block21;
block22:;
ITable* $tmp132 = ((frost$collections$CollectionView*) $tmp124)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
frost$core$Int $tmp135 = $tmp133(((frost$collections$CollectionView*) $tmp124));
int64_t $tmp136 = $tmp125.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 < $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block20; else goto block21;
block21:;
frost$core$Int $tmp141 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, $tmp141, &$s143);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp144 = &$tmp124->data;
frost$core$Object** $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = frost$core$Int64$init$frost$core$Int($tmp125);
int64_t $tmp147 = $tmp146.value;
frost$core$Object* $tmp148 = $tmp145[$tmp147];
frost$core$Frost$ref$frost$core$Object$Q($tmp148);
ITable* $tmp149 = ((frost$core$Equatable*) $tmp122)->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[1];
frost$core$Bit $tmp152 = $tmp150(((frost$core$Equatable*) $tmp122), ((frost$core$Equatable*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp148)));
bool $tmp153 = $tmp152.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
if ($tmp153) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:116
frost$core$Bit $tmp154 = (frost$core$Bit) {true};
*(&local0) = $tmp154;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:117
frost$collections$Array** $tmp155 = &param0->locals;
frost$collections$Array* $tmp156 = *$tmp155;
frost$core$Int $tmp157 = *(&local1);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp158 = *(&local2);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Analyzer.frost:117:27
frost$core$Int $tmp159 = (frost$core$Int) {0u};
int64_t $tmp160 = $tmp157.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 >= $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block26; else goto block25;
block26:;
ITable* $tmp165 = ((frost$collections$CollectionView*) $tmp156)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[0];
frost$core$Int $tmp168 = $tmp166(((frost$collections$CollectionView*) $tmp156));
int64_t $tmp169 = $tmp157.value;
int64_t $tmp170 = $tmp168.value;
bool $tmp171 = $tmp169 < $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block24; else goto block25;
block25:;
frost$core$Int $tmp174 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s175, $tmp174, &$s176);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:80
frost$core$Object*** $tmp177 = &$tmp156->data;
frost$core$Object** $tmp178 = *$tmp177;
frost$core$Int64 $tmp179 = frost$core$Int64$init$frost$core$Int($tmp157);
int64_t $tmp180 = $tmp179.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Object* $tmp181 = $tmp178[$tmp180];
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
$tmp178[$tmp180] = ((frost$core$Object*) $tmp158);
goto block18;
block18:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp182 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Int $tmp183 = *(&local1);
int64_t $tmp184 = $tmp52.value;
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184 - $tmp185;
frost$core$Int $tmp187 = (frost$core$Int) {$tmp186};
if ($tmp54) goto block28; else goto block29;
block28:;
int64_t $tmp188 = $tmp187.value;
int64_t $tmp189 = $tmp55.value;
bool $tmp190 = $tmp188 >= $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block27; else goto block5;
block29:;
int64_t $tmp193 = $tmp187.value;
int64_t $tmp194 = $tmp55.value;
bool $tmp195 = $tmp193 > $tmp194;
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block27; else goto block5;
block27:;
int64_t $tmp198 = $tmp183.value;
int64_t $tmp199 = $tmp55.value;
int64_t $tmp200 = $tmp198 + $tmp199;
frost$core$Int $tmp201 = (frost$core$Int) {$tmp200};
*(&local1) = $tmp201;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:120
frost$collections$HashMap** $tmp202 = &param2->statements;
frost$collections$HashMap* $tmp203 = *$tmp202;
ITable* $tmp204 = ((frost$collections$MapView*) $tmp203)->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[4];
frost$collections$Iterator* $tmp207 = $tmp205(((frost$collections$MapView*) $tmp203));
goto block30;
block30:;
ITable* $tmp208 = $tmp207->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[0];
frost$core$Bit $tmp211 = $tmp209($tmp207);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block32; else goto block31;
block31:;
ITable* $tmp213 = $tmp207->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
frost$core$Object* $tmp216 = $tmp214($tmp207);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp216)->value;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:121
frost$collections$HashMap** $tmp217 = &param0->statements;
frost$collections$HashMap* $tmp218 = *$tmp217;
org$frostlang$frostc$IR$Statement$ID $tmp219 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp220;
$tmp220 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp220->value = $tmp219;
frost$core$Object* $tmp221 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp218, ((frost$collections$Key*) $tmp220));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp221)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp222 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp221);
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp220)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:122
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp223 = *(&local4);
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223 == NULL};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp226 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type** $tmp227 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp228 = *$tmp227;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp226, $tmp228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp229 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local4) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:125
frost$collections$HashMap** $tmp230 = &param2->statements;
frost$collections$HashMap* $tmp231 = *$tmp230;
org$frostlang$frostc$IR$Statement$ID $tmp232 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp233;
$tmp233 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp233->value = $tmp232;
frost$core$Object* $tmp234 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp231, ((frost$collections$Key*) $tmp233));
*(&local5) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp234)));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local5) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) $tmp234);
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp233)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:126
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp236 = *(&local5);
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236 == NULL};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:127
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp239 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Type** $tmp240 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp241 = *$tmp240;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type($tmp239, $tmp241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp242 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local5) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:129
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp243 = *(&local4);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp244 = *(&local5);
$fn246 $tmp245 = ($fn246) $tmp243->$class->vtable[3];
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp247 = $tmp245($tmp243, param1, $tmp244);
*(&local6) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp248 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local6) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:130
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp249 = *(&local6);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp250 = *(&local4);
ITable* $tmp251 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[1];
frost$core$Bit $tmp254 = $tmp252(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp250));
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:131
frost$core$Bit $tmp256 = (frost$core$Bit) {true};
*(&local0) = $tmp256;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:132
frost$collections$HashMap** $tmp257 = &param0->statements;
frost$collections$HashMap* $tmp258 = *$tmp257;
org$frostlang$frostc$IR$Statement$ID $tmp259 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp260;
$tmp260 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp260->value = $tmp259;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp261 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp258, ((frost$collections$Key*) $tmp260), ((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp260)));
goto block38;
block38:;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp262 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local6) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local5) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* $tmp264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp216);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:135
frost$core$Bit $tmp265 = *(&local0);
return $tmp265;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:140
frost$collections$Array** $tmp266 = &param0->locals;
frost$collections$Array* $tmp267 = *$tmp266;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:140:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn269 $tmp268 = ($fn269) ((frost$core$Object*) $tmp267)->$class->vtable[0];
frost$core$String* $tmp270 = $tmp268(((frost$core$Object*) $tmp267));
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s272, $tmp270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, &$s274);
frost$collections$HashMap** $tmp275 = &param0->statements;
frost$collections$HashMap* $tmp276 = *$tmp275;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:140:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn278 $tmp277 = ($fn278) ((frost$core$Object*) $tmp276)->$class->vtable[0];
frost$core$String* $tmp279 = $tmp277(((frost$core$Object*) $tmp276));
frost$core$String* $tmp280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp273, $tmp279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp280, &$s282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
return $tmp281;

}
void org$frostlang$frostc$pass$Analyzer$State$cleanup(org$frostlang$frostc$pass$Analyzer$State* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:95
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp283 = &param0->locals;
frost$collections$Array* $tmp284 = *$tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$collections$HashMap** $tmp285 = &param0->statements;
frost$collections$HashMap* $tmp286 = *$tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
return;

}






