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
typedef void (*$fn157)(frost$collections$List*, frost$core$Range$LTfrost$core$Int64$GT, frost$collections$ListView*);
typedef frost$core$Int64 (*$fn160)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn208)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn215)(frost$core$Object*);
typedef frost$core$Bit (*$fn217)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn225)(frost$collections$ListWriter*, frost$core$Int64);
typedef frost$core$Int64 (*$fn265)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 7845644305258950470, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, -4565610902050766334, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };

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
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit($tmp141.nonnull);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {39};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block5:;
frost$core$Int64$nullable $tmp147 = *(&local1);
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147.nonnull);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp150 = (frost$core$Int64) {39};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block7:;
frost$core$Bit $tmp153 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp154 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(((frost$core$Int64) $tmp141.value), ((frost$core$Int64) $tmp147.value), $tmp153);
ITable* $tmp155 = param0->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
$tmp156(param0, $tmp154, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int64 local0;
frost$core$Bit local1;
// line 44
ITable* $tmp158 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Int64 $tmp161 = $tmp159(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp162 = (frost$core$Int64) {1};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
frost$core$Int64 $tmp167 = (frost$core$Int64) {0};
frost$core$Int64 $tmp168 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp170 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp166, $tmp167, $tmp168, $tmp169);
frost$core$Int64 $tmp171 = $tmp170.start;
*(&local0) = $tmp171;
frost$core$Int64 $tmp172 = $tmp170.end;
frost$core$Int64 $tmp173 = $tmp170.step;
frost$core$UInt64 $tmp174 = frost$core$Int64$convert$R$frost$core$UInt64($tmp173);
frost$core$Int64 $tmp175 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp173);
frost$core$UInt64 $tmp176 = frost$core$Int64$convert$R$frost$core$UInt64($tmp175);
frost$core$Bit $tmp177 = $tmp170.inclusive;
bool $tmp178 = $tmp177.value;
frost$core$Int64 $tmp179 = (frost$core$Int64) {0};
int64_t $tmp180 = $tmp173.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 >= $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block4; else goto block5;
block4:;
if ($tmp178) goto block6; else goto block7;
block6:;
int64_t $tmp185 = $tmp171.value;
int64_t $tmp186 = $tmp172.value;
bool $tmp187 = $tmp185 <= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block7:;
int64_t $tmp190 = $tmp171.value;
int64_t $tmp191 = $tmp172.value;
bool $tmp192 = $tmp190 < $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block5:;
if ($tmp178) goto block8; else goto block9;
block8:;
int64_t $tmp195 = $tmp171.value;
int64_t $tmp196 = $tmp172.value;
bool $tmp197 = $tmp195 >= $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block1; else goto block2;
block9:;
int64_t $tmp200 = $tmp171.value;
int64_t $tmp201 = $tmp172.value;
bool $tmp202 = $tmp200 > $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block1; else goto block2;
block1:;
// line 45
frost$core$Int64 $tmp205 = *(&local0);
ITable* $tmp206 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$core$Object* $tmp209 = $tmp207(((frost$collections$ListView*) param0), $tmp205);
frost$core$Int8** $tmp210 = &param1->pointer;
frost$core$Int8* $tmp211 = *$tmp210;
frost$core$Object** $tmp212 = &param1->target;
frost$core$Object* $tmp213 = *$tmp212;
bool $tmp214 = $tmp213 != ((frost$core$Object*) NULL);
if ($tmp214) goto block12; else goto block13;
block13:;
frost$core$Bit $tmp216 = (($fn215) $tmp211)($tmp209);
*(&local1) = $tmp216;
goto block14;
block12:;
frost$core$Bit $tmp218 = (($fn217) $tmp211)($tmp213, $tmp209);
*(&local1) = $tmp218;
goto block14;
block14:;
frost$core$Bit $tmp219 = *(&local1);
frost$core$Bit $tmp220 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp219);
bool $tmp221 = $tmp220.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
// unreffing REF($60:frost.collections.ListView.T)
if ($tmp221) goto block10; else goto block11;
block10:;
// line 46
frost$core$Int64 $tmp222 = *(&local0);
ITable* $tmp223 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[2];
frost$core$Object* $tmp226 = $tmp224(((frost$collections$ListWriter*) param0), $tmp222);
frost$core$Frost$unref$frost$core$Object$Q($tmp226);
// unreffing REF($88:frost.collections.ListWriter.T)
goto block11;
block11:;
goto block3;
block3:;
frost$core$Int64 $tmp227 = *(&local0);
if ($tmp184) goto block16; else goto block17;
block16:;
int64_t $tmp228 = $tmp172.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 - $tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {$tmp230};
frost$core$UInt64 $tmp232 = frost$core$Int64$convert$R$frost$core$UInt64($tmp231);
if ($tmp178) goto block18; else goto block19;
block18:;
uint64_t $tmp233 = $tmp232.value;
uint64_t $tmp234 = $tmp174.value;
bool $tmp235 = $tmp233 >= $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block15; else goto block2;
block19:;
uint64_t $tmp238 = $tmp232.value;
uint64_t $tmp239 = $tmp174.value;
bool $tmp240 = $tmp238 > $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block15; else goto block2;
block17:;
int64_t $tmp243 = $tmp227.value;
int64_t $tmp244 = $tmp172.value;
int64_t $tmp245 = $tmp243 - $tmp244;
frost$core$Int64 $tmp246 = (frost$core$Int64) {$tmp245};
frost$core$UInt64 $tmp247 = frost$core$Int64$convert$R$frost$core$UInt64($tmp246);
if ($tmp178) goto block20; else goto block21;
block20:;
uint64_t $tmp248 = $tmp247.value;
uint64_t $tmp249 = $tmp176.value;
bool $tmp250 = $tmp248 >= $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block15; else goto block2;
block21:;
uint64_t $tmp253 = $tmp247.value;
uint64_t $tmp254 = $tmp176.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block15; else goto block2;
block15:;
int64_t $tmp258 = $tmp227.value;
int64_t $tmp259 = $tmp173.value;
int64_t $tmp260 = $tmp258 + $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {$tmp260};
*(&local0) = $tmp261;
goto block1;
block2:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

// line 56
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
ITable* $tmp263 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
frost$core$Int64 $tmp266 = $tmp264(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp267 = (frost$core$Int64) {1};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268 - $tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {$tmp270};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(param0, $tmp262, $tmp271, param1);
return;

}

