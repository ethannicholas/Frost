#include "frost/collections/List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/Collection.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/MutableMethod.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$List$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$List$_frost$collections$CollectionWriter, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$List$_frost$collections$Collection, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$List$_frost$collections$List, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$List$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$List$_frost$collections$Iterable, { NULL, NULL, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$List$_frost$collections$ListWriter, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
frost$collections$List$class_type frost$collections$List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$List$_frost$collections$ListView, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

typedef frost$core$Object* (*$fn64)(frost$collections$ListWriter*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn104)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn108)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn113)(frost$collections$Iterator*);
typedef void (*$fn120)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Int64 (*$fn139)(frost$collections$CollectionView*);
typedef void (*$fn147)(frost$collections$List*, frost$core$Range$LTfrost$core$Int64$GT, frost$collections$ListView*);
typedef frost$core$Int64 (*$fn150)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn198)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn205)(frost$core$Object*);
typedef frost$core$Bit (*$fn207)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn215)(frost$collections$ListWriter*, frost$core$Int64);
typedef frost$core$Int64 (*$fn255)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 7845644305258950470, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, -4565610902050766334, NULL };

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = param1.max;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 <= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {11};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
// line 13
frost$core$Int64 $tmp12 = param1.max;
*(&local0) = $tmp12;
// line 14
frost$core$Bit $tmp13 = param1.inclusive;
frost$core$Bit $tmp14 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block3; else goto block4;
block3:;
// line 15
frost$core$Int64 $tmp16 = *(&local0);
frost$core$Int64 $tmp17 = (frost$core$Int64) {1};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18 - $tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {$tmp20};
*(&local0) = $tmp21;
goto block4;
block4:;
// line 17
frost$core$Int64 $tmp22 = *(&local0);
frost$core$Int64 $tmp23 = param1.min;
frost$core$Int64 $tmp24 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp26 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp22, $tmp23, $tmp24, $tmp25);
frost$core$Int64 $tmp27 = $tmp26.start;
*(&local1) = $tmp27;
frost$core$Int64 $tmp28 = $tmp26.end;
frost$core$Int64 $tmp29 = $tmp26.step;
frost$core$UInt64 $tmp30 = frost$core$Int64$convert$R$frost$core$UInt64($tmp29);
frost$core$Int64 $tmp31 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp29);
frost$core$UInt64 $tmp32 = frost$core$Int64$convert$R$frost$core$UInt64($tmp31);
frost$core$Bit $tmp33 = $tmp26.inclusive;
bool $tmp34 = $tmp33.value;
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
int64_t $tmp36 = $tmp29.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 >= $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block8:;
if ($tmp34) goto block10; else goto block11;
block10:;
int64_t $tmp41 = $tmp27.value;
int64_t $tmp42 = $tmp28.value;
bool $tmp43 = $tmp41 <= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block6;
block11:;
int64_t $tmp46 = $tmp27.value;
int64_t $tmp47 = $tmp28.value;
bool $tmp48 = $tmp46 < $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block5; else goto block6;
block9:;
if ($tmp34) goto block12; else goto block13;
block12:;
int64_t $tmp51 = $tmp27.value;
int64_t $tmp52 = $tmp28.value;
bool $tmp53 = $tmp51 >= $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block5; else goto block6;
block13:;
int64_t $tmp56 = $tmp27.value;
int64_t $tmp57 = $tmp28.value;
bool $tmp58 = $tmp56 > $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block5; else goto block6;
block5:;
// line 18
frost$core$Int64 $tmp61 = *(&local1);
ITable* $tmp62 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[2];
frost$core$Object* $tmp65 = $tmp63(((frost$collections$ListWriter*) param0), $tmp61);
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
// unreffing REF($80:frost.collections.ListWriter.T)
goto block7;
block7:;
frost$core$Int64 $tmp66 = *(&local1);
if ($tmp40) goto block15; else goto block16;
block15:;
int64_t $tmp67 = $tmp28.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 - $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
frost$core$UInt64 $tmp71 = frost$core$Int64$convert$R$frost$core$UInt64($tmp70);
if ($tmp34) goto block17; else goto block18;
block17:;
uint64_t $tmp72 = $tmp71.value;
uint64_t $tmp73 = $tmp30.value;
bool $tmp74 = $tmp72 >= $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block14; else goto block6;
block18:;
uint64_t $tmp77 = $tmp71.value;
uint64_t $tmp78 = $tmp30.value;
bool $tmp79 = $tmp77 > $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block14; else goto block6;
block16:;
int64_t $tmp82 = $tmp66.value;
int64_t $tmp83 = $tmp28.value;
int64_t $tmp84 = $tmp82 - $tmp83;
frost$core$Int64 $tmp85 = (frost$core$Int64) {$tmp84};
frost$core$UInt64 $tmp86 = frost$core$Int64$convert$R$frost$core$UInt64($tmp85);
if ($tmp34) goto block19; else goto block20;
block19:;
uint64_t $tmp87 = $tmp86.value;
uint64_t $tmp88 = $tmp32.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block14; else goto block6;
block20:;
uint64_t $tmp92 = $tmp86.value;
uint64_t $tmp93 = $tmp32.value;
bool $tmp94 = $tmp92 > $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block14; else goto block6;
block14:;
int64_t $tmp97 = $tmp66.value;
int64_t $tmp98 = $tmp29.value;
int64_t $tmp99 = $tmp97 + $tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
*(&local1) = $tmp100;
goto block5;
block6:;
// line 20
frost$core$Int64 $tmp101 = param1.min;
*(&local2) = $tmp101;
// line 21
ITable* $tmp102 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$collections$Iterator* $tmp105 = $tmp103(((frost$collections$Iterable*) param2));
goto block21;
block21:;
ITable* $tmp106 = $tmp105->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Bit $tmp109 = $tmp107($tmp105);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block23; else goto block22;
block22:;
*(&local3) = ((frost$core$Object*) NULL);
ITable* $tmp111 = $tmp105->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
frost$core$Object* $tmp114 = $tmp112($tmp105);
frost$core$Frost$ref$frost$core$Object$Q($tmp114);
frost$core$Object* $tmp115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
*(&local3) = $tmp114;
// line 22
frost$core$Int64 $tmp116 = *(&local2);
frost$core$Object* $tmp117 = *(&local3);
ITable* $tmp118 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
$tmp119(((frost$collections$ListWriter*) param0), $tmp116, $tmp117);
// line 23
frost$core$Int64 $tmp121 = *(&local2);
frost$core$Int64 $tmp122 = (frost$core$Int64) {1};
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 + $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {$tmp125};
*(&local2) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
// unreffing REF($148:frost.collections.Iterator.T)
frost$core$Object* $tmp127 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing v
*(&local3) = ((frost$core$Object*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($137:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$collections$ListView* param2) {

frost$core$Int64$nullable local0;
frost$core$Int64$nullable local1;
// line 29
frost$core$Int64$nullable $tmp128 = param1.min;
*(&local0) = $tmp128;
// line 30
frost$core$Int64$nullable $tmp129 = *(&local0);
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit(!$tmp129.nonnull);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block1; else goto block2;
block1:;
// line 31
frost$core$Int64 $tmp132 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp132, true });
goto block2;
block2:;
// line 34
frost$core$Int64$nullable $tmp133 = param1.max;
*(&local1) = $tmp133;
// line 35
frost$core$Int64$nullable $tmp134 = *(&local1);
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(!$tmp134.nonnull);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block3; else goto block4;
block3:;
// line 36
ITable* $tmp137 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
frost$core$Int64 $tmp140 = $tmp138(((frost$collections$CollectionView*) param0));
*(&local1) = ((frost$core$Int64$nullable) { $tmp140, true });
goto block4;
block4:;
// line 39
frost$core$Int64$nullable $tmp141 = *(&local0);
frost$core$Int64$nullable $tmp142 = *(&local1);
frost$core$Bit $tmp143 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp144 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(((frost$core$Int64) $tmp141.value), ((frost$core$Int64) $tmp142.value), $tmp143);
ITable* $tmp145 = param0->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
$tmp146(param0, $tmp144, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int64 local0;
frost$core$Bit local1;
// line 44
ITable* $tmp148 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$core$Int64 $tmp151 = $tmp149(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 - $tmp154;
frost$core$Int64 $tmp156 = (frost$core$Int64) {$tmp155};
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
frost$core$Int64 $tmp158 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp160 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp156, $tmp157, $tmp158, $tmp159);
frost$core$Int64 $tmp161 = $tmp160.start;
*(&local0) = $tmp161;
frost$core$Int64 $tmp162 = $tmp160.end;
frost$core$Int64 $tmp163 = $tmp160.step;
frost$core$UInt64 $tmp164 = frost$core$Int64$convert$R$frost$core$UInt64($tmp163);
frost$core$Int64 $tmp165 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp163);
frost$core$UInt64 $tmp166 = frost$core$Int64$convert$R$frost$core$UInt64($tmp165);
frost$core$Bit $tmp167 = $tmp160.inclusive;
bool $tmp168 = $tmp167.value;
frost$core$Int64 $tmp169 = (frost$core$Int64) {0};
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 >= $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block4; else goto block5;
block4:;
if ($tmp168) goto block6; else goto block7;
block6:;
int64_t $tmp175 = $tmp161.value;
int64_t $tmp176 = $tmp162.value;
bool $tmp177 = $tmp175 <= $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block1; else goto block2;
block7:;
int64_t $tmp180 = $tmp161.value;
int64_t $tmp181 = $tmp162.value;
bool $tmp182 = $tmp180 < $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block5:;
if ($tmp168) goto block8; else goto block9;
block8:;
int64_t $tmp185 = $tmp161.value;
int64_t $tmp186 = $tmp162.value;
bool $tmp187 = $tmp185 >= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block9:;
int64_t $tmp190 = $tmp161.value;
int64_t $tmp191 = $tmp162.value;
bool $tmp192 = $tmp190 > $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 45
frost$core$Int64 $tmp195 = *(&local0);
ITable* $tmp196 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
frost$core$Object* $tmp199 = $tmp197(((frost$collections$ListView*) param0), $tmp195);
frost$core$Int8** $tmp200 = &param1->pointer;
frost$core$Int8* $tmp201 = *$tmp200;
frost$core$Object** $tmp202 = &param1->target;
frost$core$Object* $tmp203 = *$tmp202;
bool $tmp204 = $tmp203 != ((frost$core$Object*) NULL);
if ($tmp204) goto block12; else goto block13;
block13:;
frost$core$Bit $tmp206 = (($fn205) $tmp201)($tmp199);
*(&local1) = $tmp206;
goto block14;
block12:;
frost$core$Bit $tmp208 = (($fn207) $tmp201)($tmp203, $tmp199);
*(&local1) = $tmp208;
goto block14;
block14:;
frost$core$Bit $tmp209 = *(&local1);
frost$core$Bit $tmp210 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp209);
bool $tmp211 = $tmp210.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
// unreffing REF($60:frost.collections.ListView.T)
if ($tmp211) goto block10; else goto block11;
block10:;
// line 46
frost$core$Int64 $tmp212 = *(&local0);
ITable* $tmp213 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[2];
frost$core$Object* $tmp216 = $tmp214(((frost$collections$ListWriter*) param0), $tmp212);
frost$core$Frost$unref$frost$core$Object$Q($tmp216);
// unreffing REF($88:frost.collections.ListWriter.T)
goto block11;
block11:;
goto block3;
block3:;
frost$core$Int64 $tmp217 = *(&local0);
if ($tmp174) goto block16; else goto block17;
block16:;
int64_t $tmp218 = $tmp162.value;
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218 - $tmp219;
frost$core$Int64 $tmp221 = (frost$core$Int64) {$tmp220};
frost$core$UInt64 $tmp222 = frost$core$Int64$convert$R$frost$core$UInt64($tmp221);
if ($tmp168) goto block18; else goto block19;
block18:;
uint64_t $tmp223 = $tmp222.value;
uint64_t $tmp224 = $tmp164.value;
bool $tmp225 = $tmp223 >= $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block15; else goto block2;
block19:;
uint64_t $tmp228 = $tmp222.value;
uint64_t $tmp229 = $tmp164.value;
bool $tmp230 = $tmp228 > $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block15; else goto block2;
block17:;
int64_t $tmp233 = $tmp217.value;
int64_t $tmp234 = $tmp162.value;
int64_t $tmp235 = $tmp233 - $tmp234;
frost$core$Int64 $tmp236 = (frost$core$Int64) {$tmp235};
frost$core$UInt64 $tmp237 = frost$core$Int64$convert$R$frost$core$UInt64($tmp236);
if ($tmp168) goto block20; else goto block21;
block20:;
uint64_t $tmp238 = $tmp237.value;
uint64_t $tmp239 = $tmp166.value;
bool $tmp240 = $tmp238 >= $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block15; else goto block2;
block21:;
uint64_t $tmp243 = $tmp237.value;
uint64_t $tmp244 = $tmp166.value;
bool $tmp245 = $tmp243 > $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block15; else goto block2;
block15:;
int64_t $tmp248 = $tmp217.value;
int64_t $tmp249 = $tmp163.value;
int64_t $tmp250 = $tmp248 + $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {$tmp250};
*(&local0) = $tmp251;
goto block1;
block2:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

// line 56
frost$core$Int64 $tmp252 = (frost$core$Int64) {0};
ITable* $tmp253 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Int64 $tmp256 = $tmp254(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp257 = (frost$core$Int64) {1};
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258 - $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {$tmp260};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(param0, $tmp252, $tmp261, param1);
return;

}

