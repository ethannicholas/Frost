#include "org/frostlang/frostc/Analyzer/State.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/ListView.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/CollectionView.h"
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
typedef frost$core$Bit (*$fn81)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn114)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn118)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn123)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn155)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x53\x74\x61\x74\x65", 35, -2482357628948330879, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x61\x74\x65\x28", 6, 1946030631454, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$Analyzer$State$init(org$frostlang$frostc$Analyzer$State* param0) {

// line 18
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->locals;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 19
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

// line 23
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp11 = &param1->locals;
frost$collections$Array* $tmp12 = *$tmp11;
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp10, ((frost$collections$ListView*) $tmp12));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp13 = &param0->locals;
frost$collections$Array* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Array** $tmp15 = &param0->locals;
*$tmp15 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// line 24
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
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
// line 28
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp22;
// line 29
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
frost$core$Int64 $tmp37 = (frost$core$Int64) {29};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block1:;
// line 30
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
// line 31
frost$collections$Array** $tmp64 = &param0->locals;
frost$collections$Array* $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = *(&local1);
frost$core$Object* $tmp67 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp65, $tmp66);
frost$collections$Array** $tmp68 = &param2->locals;
frost$collections$Array* $tmp69 = *$tmp68;
frost$core$Int64 $tmp70 = *(&local1);
frost$core$Object* $tmp71 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp69, $tmp70);
org$frostlang$frostc$Type* $tmp72 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp67), param1, ((org$frostlang$frostc$Type*) $tmp71));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp73 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local2) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// line 32
org$frostlang$frostc$Type* $tmp74 = *(&local2);
frost$collections$Array** $tmp75 = &param0->locals;
frost$collections$Array* $tmp76 = *$tmp75;
frost$core$Int64 $tmp77 = *(&local1);
frost$core$Object* $tmp78 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp76, $tmp77);
ITable* $tmp79 = ((frost$core$Equatable*) $tmp74)->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[1];
frost$core$Bit $tmp82 = $tmp80(((frost$core$Equatable*) $tmp74), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp78)));
bool $tmp83 = $tmp82.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
if ($tmp83) goto block8; else goto block9;
block8:;
// line 33
frost$core$Bit $tmp84 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp84;
// line 34
frost$collections$Array** $tmp85 = &param0->locals;
frost$collections$Array* $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = *(&local1);
org$frostlang$frostc$Type* $tmp88 = *(&local2);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp86, $tmp87, ((frost$core$Object*) $tmp88));
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp89 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp90 = *(&local1);
int64_t $tmp91 = $tmp49.value;
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91 - $tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {$tmp93};
frost$core$UInt64 $tmp95 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp94);
if ($tmp51) goto block11; else goto block12;
block11:;
uint64_t $tmp96 = $tmp95.value;
uint64_t $tmp97 = $tmp53.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block10; else goto block4;
block12:;
uint64_t $tmp101 = $tmp95.value;
uint64_t $tmp102 = $tmp53.value;
bool $tmp103 = $tmp101 > $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block10; else goto block4;
block10:;
int64_t $tmp106 = $tmp90.value;
int64_t $tmp107 = $tmp52.value;
int64_t $tmp108 = $tmp106 + $tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {$tmp108};
*(&local1) = $tmp109;
goto block3;
block4:;
// line 37
frost$collections$HashMap** $tmp110 = &param2->statements;
frost$collections$HashMap* $tmp111 = *$tmp110;
ITable* $tmp112 = ((frost$collections$MapView*) $tmp111)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[3];
frost$collections$Iterator* $tmp115 = $tmp113(((frost$collections$MapView*) $tmp111));
goto block13;
block13:;
ITable* $tmp116 = $tmp115->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[0];
frost$core$Bit $tmp119 = $tmp117($tmp115);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block15; else goto block14;
block14:;
ITable* $tmp121 = $tmp115->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[1];
frost$core$Object* $tmp124 = $tmp122($tmp115);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp124)->value;
// line 38
frost$collections$HashMap** $tmp125 = &param0->statements;
frost$collections$HashMap* $tmp126 = *$tmp125;
org$frostlang$frostc$IR$Statement$ID $tmp127 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp128;
$tmp128 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp128->value = $tmp127;
frost$core$Object* $tmp129 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp126, ((frost$collections$Key*) $tmp128));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp129)));
org$frostlang$frostc$Type* $tmp130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp129);
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp128)));
// line 39
org$frostlang$frostc$Type* $tmp131 = *(&local4);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit($tmp131 == NULL);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block16; else goto block17;
block16:;
// line 40
org$frostlang$frostc$Type* $tmp134 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Type* $tmp135 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local4) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
goto block17;
block17:;
// line 42
frost$collections$HashMap** $tmp136 = &param2->statements;
frost$collections$HashMap* $tmp137 = *$tmp136;
org$frostlang$frostc$IR$Statement$ID $tmp138 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp139;
$tmp139 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp139->value = $tmp138;
frost$core$Object* $tmp140 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp137, ((frost$collections$Key*) $tmp139));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp140)));
org$frostlang$frostc$Type* $tmp141 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp140);
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp139)));
// line 43
org$frostlang$frostc$Type* $tmp142 = *(&local5);
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit($tmp142 == NULL);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block18; else goto block19;
block18:;
// line 44
org$frostlang$frostc$Type* $tmp145 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
org$frostlang$frostc$Type* $tmp146 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local5) = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
goto block19;
block19:;
// line 46
org$frostlang$frostc$Type* $tmp147 = *(&local4);
org$frostlang$frostc$Type* $tmp148 = *(&local5);
org$frostlang$frostc$Type* $tmp149 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp147, param1, $tmp148);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$Type* $tmp150 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local6) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// line 47
org$frostlang$frostc$Type* $tmp151 = *(&local6);
org$frostlang$frostc$Type* $tmp152 = *(&local4);
ITable* $tmp153 = ((frost$core$Equatable*) $tmp151)->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[1];
frost$core$Bit $tmp156 = $tmp154(((frost$core$Equatable*) $tmp151), ((frost$core$Equatable*) $tmp152));
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block20; else goto block21;
block20:;
// line 48
frost$core$Bit $tmp158 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp158;
// line 49
frost$collections$HashMap** $tmp159 = &param0->statements;
frost$collections$HashMap* $tmp160 = *$tmp159;
org$frostlang$frostc$IR$Statement$ID $tmp161 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp162;
$tmp162 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp162->value = $tmp161;
org$frostlang$frostc$Type* $tmp163 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp160, ((frost$collections$Key*) $tmp162), ((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp162)));
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp164 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp165 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp166 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp124);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// line 52
frost$core$Bit $tmp167 = *(&local0);
return $tmp167;

}
frost$core$String* org$frostlang$frostc$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$Analyzer$State* param0) {

// line 57
frost$collections$Array** $tmp168 = &param0->locals;
frost$collections$Array* $tmp169 = *$tmp168;
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s171, ((frost$core$Object*) $tmp169));
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp170, &$s173);
frost$collections$HashMap** $tmp174 = &param0->statements;
frost$collections$HashMap* $tmp175 = *$tmp174;
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp172, ((frost$core$Object*) $tmp175));
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp176, &$s178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
return $tmp177;

}
void org$frostlang$frostc$Analyzer$State$cleanup(org$frostlang$frostc$Analyzer$State* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp179 = &param0->locals;
frost$collections$Array* $tmp180 = *$tmp179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$collections$HashMap** $tmp181 = &param0->statements;
frost$collections$HashMap* $tmp182 = *$tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
return;

}






