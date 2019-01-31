#include "org/frostlang/frostc/Analyzer/State.h"
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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Analyzer/DataFlowValue.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$Analyzer$State$class_type org$frostlang$frostc$Analyzer$State$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Analyzer$State$get_asString$R$frost$core$String, org$frostlang$frostc$Analyzer$State$cleanup, org$frostlang$frostc$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$State$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn33)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn44)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Analyzer$DataFlowValue* (*$fn73)(org$frostlang$frostc$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$Analyzer$DataFlowValue*);
typedef frost$core$Bit (*$fn83)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn116)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn125)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Analyzer$DataFlowValue* (*$fn152)(org$frostlang$frostc$Analyzer$DataFlowValue*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$Analyzer$DataFlowValue*);
typedef frost$core$Bit (*$fn159)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 35, -2482357628948330879, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x74\x65\x28", 6, 1946030631454, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$Analyzer$State$init(org$frostlang$frostc$Analyzer$State* param0) {

// line 100
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
// line 101
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
void org$frostlang$frostc$Analyzer$State$init$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer$State* param0, org$frostlang$frostc$Analyzer$State* param1) {

// line 105
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
// line 106
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
frost$core$Bit org$frostlang$frostc$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$Analyzer$State* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Analyzer$State* param2) {

frost$core$Bit local0;
frost$core$Int64 local1;
org$frostlang$frostc$Analyzer$DataFlowValue* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Analyzer$DataFlowValue* local4 = NULL;
org$frostlang$frostc$Analyzer$DataFlowValue* local5 = NULL;
org$frostlang$frostc$Analyzer$DataFlowValue* local6 = NULL;
// line 110
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp22;
// line 111
frost$collections$Array** $tmp23 = &param0->locals;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$collections$Array** $tmp29 = &param2->locals;
frost$collections$Array* $tmp30 = *$tmp29;
ITable* $tmp31 = ((frost$collections$CollectionView*) $tmp30)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Int64 $tmp34 = $tmp32(((frost$collections$CollectionView*) $tmp30));
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp28, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block1:;
// line 112
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
frost$collections$Array** $tmp40 = &param0->locals;
frost$collections$Array* $tmp41 = *$tmp40;
ITable* $tmp42 = ((frost$collections$CollectionView*) $tmp41)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Int64 $tmp45 = $tmp43(((frost$collections$CollectionView*) $tmp41));
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp47 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp39, $tmp45, $tmp46);
frost$core$Int64 $tmp48 = $tmp47.min;
*(&local1) = $tmp48;
frost$core$Int64 $tmp49 = $tmp47.max;
frost$core$Bit $tmp50 = $tmp47.inclusive;
bool $tmp51 = $tmp50.value;
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp53 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp52);
if ($tmp51) goto block6; else goto block7;
block6:;
int64_t $tmp54 = $tmp48.value;
int64_t $tmp55 = $tmp49.value;
bool $tmp56 = $tmp54 <= $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block3; else goto block4;
block7:;
int64_t $tmp59 = $tmp48.value;
int64_t $tmp60 = $tmp49.value;
bool $tmp61 = $tmp59 < $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block3; else goto block4;
block3:;
// line 113
frost$collections$Array** $tmp64 = &param0->locals;
frost$collections$Array* $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = *(&local1);
frost$core$Object* $tmp67 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp65, $tmp66);
frost$collections$Array** $tmp68 = &param2->locals;
frost$collections$Array* $tmp69 = *$tmp68;
frost$core$Int64 $tmp70 = *(&local1);
frost$core$Object* $tmp71 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp69, $tmp70);
$fn73 $tmp72 = ($fn73) ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp67)->$class->vtable[3];
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp74 = $tmp72(((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp67), param1, ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp71));
*(&local2) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local2) = $tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// line 114
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp76 = *(&local2);
frost$collections$Array** $tmp77 = &param0->locals;
frost$collections$Array* $tmp78 = *$tmp77;
frost$core$Int64 $tmp79 = *(&local1);
frost$core$Object* $tmp80 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp78, $tmp79);
ITable* $tmp81 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Bit $tmp84 = $tmp82(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp80)));
bool $tmp85 = $tmp84.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
if ($tmp85) goto block8; else goto block9;
block8:;
// line 115
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp86;
// line 116
frost$collections$Array** $tmp87 = &param0->locals;
frost$collections$Array* $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = *(&local1);
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp90 = *(&local2);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp88, $tmp89, ((frost$core$Object*) $tmp90));
goto block9;
block9:;
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp92 = *(&local1);
int64_t $tmp93 = $tmp49.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 - $tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
frost$core$UInt64 $tmp97 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp96);
if ($tmp51) goto block11; else goto block12;
block11:;
uint64_t $tmp98 = $tmp97.value;
uint64_t $tmp99 = $tmp53.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block10; else goto block4;
block12:;
uint64_t $tmp103 = $tmp97.value;
uint64_t $tmp104 = $tmp53.value;
bool $tmp105 = $tmp103 > $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block10; else goto block4;
block10:;
int64_t $tmp108 = $tmp92.value;
int64_t $tmp109 = $tmp52.value;
int64_t $tmp110 = $tmp108 + $tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {$tmp110};
*(&local1) = $tmp111;
goto block3;
block4:;
// line 119
frost$collections$HashMap** $tmp112 = &param2->statements;
frost$collections$HashMap* $tmp113 = *$tmp112;
ITable* $tmp114 = ((frost$collections$MapView*) $tmp113)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[3];
frost$collections$Iterator* $tmp117 = $tmp115(((frost$collections$MapView*) $tmp113));
goto block13;
block13:;
ITable* $tmp118 = $tmp117->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$core$Bit $tmp121 = $tmp119($tmp117);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block15; else goto block14;
block14:;
ITable* $tmp123 = $tmp117->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[1];
frost$core$Object* $tmp126 = $tmp124($tmp117);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp126)->value;
// line 120
frost$collections$HashMap** $tmp127 = &param0->statements;
frost$collections$HashMap* $tmp128 = *$tmp127;
org$frostlang$frostc$IR$Statement$ID $tmp129 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp130;
$tmp130 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp130->value = $tmp129;
frost$core$Object* $tmp131 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp128, ((frost$collections$Key*) $tmp130));
*(&local4) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp131)));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp132 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local4) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp131);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp130)));
// line 121
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp133 = *(&local4);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 == NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block16; else goto block17;
block16:;
// line 122
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp136 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Analyzer$DataFlowValue$init($tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp137 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local4) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
goto block17;
block17:;
// line 124
frost$collections$HashMap** $tmp138 = &param2->statements;
frost$collections$HashMap* $tmp139 = *$tmp138;
org$frostlang$frostc$IR$Statement$ID $tmp140 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp141;
$tmp141 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp141->value = $tmp140;
frost$core$Object* $tmp142 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp139, ((frost$collections$Key*) $tmp141));
*(&local5) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp142)));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local5) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) $tmp142);
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp141)));
// line 125
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp144 = *(&local5);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144 == NULL);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block18; else goto block19;
block18:;
// line 126
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Analyzer$DataFlowValue));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp147 = (org$frostlang$frostc$Analyzer$DataFlowValue*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$DataFlowValue$class);
org$frostlang$frostc$Analyzer$DataFlowValue$init($tmp147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local5) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
goto block19;
block19:;
// line 128
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp149 = *(&local4);
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp150 = *(&local5);
$fn152 $tmp151 = ($fn152) $tmp149->$class->vtable[3];
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp153 = $tmp151($tmp149, param1, $tmp150);
*(&local6) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp154 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local6) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// line 129
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp155 = *(&local6);
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp156 = *(&local4);
ITable* $tmp157 = ((frost$core$Equatable*) $tmp155)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[1];
frost$core$Bit $tmp160 = $tmp158(((frost$core$Equatable*) $tmp155), ((frost$core$Equatable*) $tmp156));
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block20; else goto block21;
block20:;
// line 130
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp162;
// line 131
frost$collections$HashMap** $tmp163 = &param0->statements;
frost$collections$HashMap* $tmp164 = *$tmp163;
org$frostlang$frostc$IR$Statement$ID $tmp165 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp166;
$tmp166 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp166->value = $tmp165;
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp167 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp164, ((frost$collections$Key*) $tmp166), ((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp166)));
goto block21;
block21:;
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp168 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local6) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp169 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local5) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
org$frostlang$frostc$Analyzer$DataFlowValue* $tmp170 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local4) = ((org$frostlang$frostc$Analyzer$DataFlowValue*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// line 134
frost$core$Bit $tmp171 = *(&local0);
return $tmp171;

}
frost$core$String* org$frostlang$frostc$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$Analyzer$State* param0) {

// line 139
frost$collections$Array** $tmp172 = &param0->locals;
frost$collections$Array* $tmp173 = *$tmp172;
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s175, ((frost$core$Object*) $tmp173));
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp174, &$s177);
frost$collections$HashMap** $tmp178 = &param0->statements;
frost$collections$HashMap* $tmp179 = *$tmp178;
frost$core$String* $tmp180 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp176, ((frost$core$Object*) $tmp179));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp180, &$s182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
return $tmp181;

}
void org$frostlang$frostc$Analyzer$State$cleanup(org$frostlang$frostc$Analyzer$State* param0) {

// line 94
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp183 = &param0->locals;
frost$collections$Array* $tmp184 = *$tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$collections$HashMap** $tmp185 = &param0->statements;
frost$collections$HashMap* $tmp186 = *$tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
return;

}






