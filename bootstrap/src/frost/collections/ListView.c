#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListView/ListIterator.h"
#include "frost/collections/List.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ListView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ListView$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ListView$_frost$collections$CollectionView, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ListView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ListView$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ListView$class_type frost$collections$ListView$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$_frost$collections$Iterable, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn126)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn164)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn180)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn249)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn271)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn291)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn314)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn342)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn364)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn376)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn384)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn388)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn393)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn402)(frost$core$Object*);
typedef frost$core$Bit (*$fn404)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn420)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 4907195926384919541, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -4663425639358462293, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, -1046591025602014473, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };

frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$core$Bit local7;
frost$core$Bit local8;
frost$core$Int64 local9;
frost$core$Int64 local10;
frost$core$Object** local11;
frost$core$Int64 local12;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 >= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp9 = param1.inclusive;
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
frost$core$Int64 $tmp11 = param1.min;
ITable* $tmp12 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) param0));
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
*(&local4) = $tmp19;
goto block6;
block5:;
*(&local4) = $tmp9;
goto block6;
block6:;
frost$core$Bit $tmp20 = *(&local4);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
*(&local3) = $tmp20;
goto block9;
block8:;
frost$core$Bit $tmp22 = param1.inclusive;
frost$core$Bit $tmp23 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp25 = param1.min;
ITable* $tmp26 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$core$Int64 $tmp29 = $tmp27(((frost$collections$CollectionView*) param0));
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 <= $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
*(&local5) = $tmp33;
goto block12;
block11:;
*(&local5) = $tmp23;
goto block12;
block12:;
frost$core$Bit $tmp34 = *(&local5);
*(&local3) = $tmp34;
goto block9;
block9:;
frost$core$Bit $tmp35 = *(&local3);
*(&local2) = $tmp35;
goto block3;
block2:;
*(&local2) = $tmp7;
goto block3;
block3:;
frost$core$Bit $tmp36 = *(&local2);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block13; else goto block14;
block13:;
frost$core$Int64 $tmp38 = param1.max;
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
*(&local1) = $tmp43;
goto block15;
block14:;
*(&local1) = $tmp36;
goto block15;
block15:;
frost$core$Bit $tmp44 = *(&local1);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block16; else goto block17;
block16:;
frost$core$Bit $tmp46 = param1.inclusive;
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block19; else goto block20;
block19:;
frost$core$Int64 $tmp48 = param1.max;
ITable* $tmp49 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Int64 $tmp52 = $tmp50(((frost$collections$CollectionView*) param0));
int64_t $tmp53 = $tmp48.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 < $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
*(&local7) = $tmp56;
goto block21;
block20:;
*(&local7) = $tmp46;
goto block21;
block21:;
frost$core$Bit $tmp57 = *(&local7);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block22; else goto block23;
block22:;
*(&local6) = $tmp57;
goto block24;
block23:;
frost$core$Bit $tmp59 = param1.inclusive;
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block25; else goto block26;
block25:;
frost$core$Int64 $tmp62 = param1.max;
ITable* $tmp63 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$core$Int64 $tmp66 = $tmp64(((frost$collections$CollectionView*) param0));
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 <= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
*(&local8) = $tmp70;
goto block27;
block26:;
*(&local8) = $tmp60;
goto block27;
block27:;
frost$core$Bit $tmp71 = *(&local8);
*(&local6) = $tmp71;
goto block24;
block24:;
frost$core$Bit $tmp72 = *(&local6);
*(&local0) = $tmp72;
goto block18;
block17:;
*(&local0) = $tmp44;
goto block18;
block18:;
frost$core$Bit $tmp73 = *(&local0);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {52};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block28:;
// line 53
frost$core$Int64 $tmp78 = param1.max;
*(&local9) = $tmp78;
// line 54
frost$core$Bit $tmp79 = param1.inclusive;
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block30; else goto block31;
block30:;
// line 55
frost$core$Int64 $tmp81 = *(&local9);
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local9) = $tmp86;
goto block31;
block31:;
// line 57
frost$core$Int64 $tmp87 = *(&local9);
frost$core$Int64 $tmp88 = param1.min;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
*(&local10) = $tmp92;
// line 58
frost$core$Int64 $tmp93 = *(&local10);
int64_t $tmp94 = $tmp93.value;
frost$core$Object** $tmp95 = ((frost$core$Object**) frostZAlloc($tmp94 * 8));
*(&local11) = $tmp95;
// line 59
frost$core$Int64 $tmp96 = (frost$core$Int64) {0};
frost$core$Int64 $tmp97 = *(&local10);
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp99 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp96, $tmp97, $tmp98);
frost$core$Int64 $tmp100 = $tmp99.min;
*(&local12) = $tmp100;
frost$core$Int64 $tmp101 = $tmp99.max;
frost$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp105 = frost$core$Int64$convert$R$frost$core$UInt64($tmp104);
if ($tmp103) goto block35; else goto block36;
block35:;
int64_t $tmp106 = $tmp100.value;
int64_t $tmp107 = $tmp101.value;
bool $tmp108 = $tmp106 <= $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block32; else goto block33;
block36:;
int64_t $tmp111 = $tmp100.value;
int64_t $tmp112 = $tmp101.value;
bool $tmp113 = $tmp111 < $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block32; else goto block33;
block32:;
// line 60
frost$core$Object** $tmp116 = *(&local11);
frost$core$Int64 $tmp117 = *(&local12);
frost$core$Int64 $tmp118 = param1.min;
frost$core$Int64 $tmp119 = *(&local12);
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 + $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Object* $tmp127 = $tmp125(param0, $tmp123);
int64_t $tmp128 = $tmp117.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp127);
frost$core$Object* $tmp129 = $tmp116[$tmp128];
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
$tmp116[$tmp128] = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($183:frost.collections.ListView.T)
goto block34;
block34:;
frost$core$Int64 $tmp130 = *(&local12);
int64_t $tmp131 = $tmp101.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
frost$core$UInt64 $tmp135 = frost$core$Int64$convert$R$frost$core$UInt64($tmp134);
if ($tmp103) goto block38; else goto block39;
block38:;
uint64_t $tmp136 = $tmp135.value;
uint64_t $tmp137 = $tmp105.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block37; else goto block33;
block39:;
uint64_t $tmp141 = $tmp135.value;
uint64_t $tmp142 = $tmp105.value;
bool $tmp143 = $tmp141 > $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block37; else goto block33;
block37:;
int64_t $tmp146 = $tmp130.value;
int64_t $tmp147 = $tmp104.value;
int64_t $tmp148 = $tmp146 + $tmp147;
frost$core$Int64 $tmp149 = (frost$core$Int64) {$tmp148};
*(&local12) = $tmp149;
goto block32;
block33:;
// line 62
frost$collections$Array* $tmp150 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Object** $tmp151 = *(&local11);
frost$core$Int64 $tmp152 = *(&local10);
frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64($tmp150, $tmp151, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp150)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($221:frost.collections.Array<frost.collections.ListView.T>)
return ((frost$collections$ListView*) $tmp150);

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 76
// line 77
frost$core$Int64$nullable $tmp153 = param1.min;
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// line 78
frost$core$Int64$nullable $tmp156 = param1.min;
*(&local0) = ((frost$core$Int64) $tmp156.value);
goto block2;
block3:;
// line 1
// line 81
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
*(&local0) = $tmp157;
goto block2;
block2:;
// line 84
// line 85
frost$core$Int64$nullable $tmp158 = param1.max;
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit($tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block4; else goto block6;
block4:;
// line 86
frost$core$Int64$nullable $tmp161 = param1.max;
*(&local1) = ((frost$core$Int64) $tmp161.value);
goto block5;
block6:;
// line 1
// line 89
ITable* $tmp162 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
frost$core$Int64 $tmp165 = $tmp163(((frost$collections$CollectionView*) param0));
*(&local1) = $tmp165;
// line 90
frost$core$Bit $tmp166 = param1.inclusive;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block7; else goto block8;
block7:;
// line 91
frost$core$Int64 $tmp168 = *(&local1);
frost$core$Int64 $tmp169 = (frost$core$Int64) {1};
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 - $tmp171;
frost$core$Int64 $tmp173 = (frost$core$Int64) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block8:;
goto block5;
block5:;
// line 94
frost$core$Int64 $tmp174 = *(&local0);
frost$core$Int64 $tmp175 = *(&local1);
frost$core$Bit $tmp176 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp177 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp174, $tmp175, $tmp176);
ITable* $tmp178 = param0->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$collections$ListView* $tmp181 = $tmp179(param0, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($56:frost.collections.ListView<frost.collections.ListView.T>)
return $tmp181;

}
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 100
frost$core$Int64$nullable $tmp182 = param0.start;
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit($tmp182.nonnull);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// line 101
frost$core$Int64$nullable $tmp185 = param0.start;
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
int64_t $tmp187 = ((frost$core$Int64) $tmp185.value).value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 < $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block3:;
// line 102
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit(false);
return $tmp192;
block4:;
// line 104
frost$core$Bit $tmp193 = param0.inclusive;
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block7; else goto block8;
block7:;
frost$core$Int64$nullable $tmp195 = param0.start;
int64_t $tmp196 = ((frost$core$Int64) $tmp195.value).value;
int64_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
*(&local0) = $tmp199;
goto block9;
block8:;
*(&local0) = $tmp193;
goto block9;
block9:;
frost$core$Bit $tmp200 = *(&local0);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block5; else goto block6;
block5:;
// line 105
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit(false);
return $tmp202;
block6:;
// line 107
frost$core$Bit $tmp203 = param0.inclusive;
frost$core$Bit $tmp204 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block12; else goto block13;
block12:;
frost$core$Int64$nullable $tmp206 = param0.start;
int64_t $tmp207 = ((frost$core$Int64) $tmp206.value).value;
int64_t $tmp208 = param1.value;
bool $tmp209 = $tmp207 > $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
*(&local1) = $tmp210;
goto block14;
block13:;
*(&local1) = $tmp204;
goto block14;
block14:;
frost$core$Bit $tmp211 = *(&local1);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block10; else goto block11;
block10:;
// line 108
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit(false);
return $tmp213;
block11:;
goto block2;
block2:;
// line 111
frost$core$Int64$nullable $tmp214 = param0.end;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214.nonnull);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block15; else goto block16;
block15:;
// line 112
frost$core$Int64$nullable $tmp217 = param0.end;
frost$core$Int64 $tmp218 = (frost$core$Int64) {0};
int64_t $tmp219 = ((frost$core$Int64) $tmp217.value).value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block17; else goto block18;
block17:;
// line 113
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit(false);
return $tmp224;
block18:;
// line 115
frost$core$Bit $tmp225 = param0.inclusive;
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block21; else goto block22;
block21:;
frost$core$Int64$nullable $tmp227 = param0.end;
int64_t $tmp228 = ((frost$core$Int64) $tmp227.value).value;
int64_t $tmp229 = param1.value;
bool $tmp230 = $tmp228 >= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
*(&local2) = $tmp231;
goto block23;
block22:;
*(&local2) = $tmp225;
goto block23;
block23:;
frost$core$Bit $tmp232 = *(&local2);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block19; else goto block20;
block19:;
// line 116
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit(false);
return $tmp234;
block20:;
// line 118
frost$core$Bit $tmp235 = param0.inclusive;
frost$core$Bit $tmp236 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block26; else goto block27;
block26:;
frost$core$Int64$nullable $tmp238 = param0.end;
int64_t $tmp239 = ((frost$core$Int64) $tmp238.value).value;
int64_t $tmp240 = param1.value;
bool $tmp241 = $tmp239 > $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
*(&local3) = $tmp242;
goto block28;
block27:;
*(&local3) = $tmp236;
goto block28;
block28:;
frost$core$Bit $tmp243 = *(&local3);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block24; else goto block25;
block24:;
// line 119
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit(false);
return $tmp245;
block25:;
goto block16;
block16:;
// line 122
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(true);
return $tmp246;

}
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
ITable* $tmp247 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Int64 $tmp250 = $tmp248(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp251 = frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(param1, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block1:;
// line 134
frost$core$Int64 $tmp256 = param1.step;
*(&local0) = $tmp256;
// line 136
// line 137
frost$core$Int64$nullable $tmp257 = param1.start;
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit($tmp257.nonnull);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block3; else goto block5;
block3:;
// line 138
frost$core$Int64$nullable $tmp260 = param1.start;
*(&local1) = ((frost$core$Int64) $tmp260.value);
goto block4;
block5:;
// line 140
frost$core$Int64 $tmp261 = *(&local0);
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 > $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block6; else goto block8;
block6:;
// line 141
frost$core$Int64 $tmp268 = (frost$core$Int64) {0};
*(&local1) = $tmp268;
goto block7;
block8:;
// line 1
// line 144
ITable* $tmp269 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Int64 $tmp272 = $tmp270(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp273 = (frost$core$Int64) {1};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 - $tmp275;
frost$core$Int64 $tmp277 = (frost$core$Int64) {$tmp276};
*(&local1) = $tmp277;
goto block7;
block7:;
goto block4;
block4:;
// line 147
// line 148
frost$core$Int64$nullable $tmp278 = param1.end;
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278.nonnull);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block9; else goto block11;
block9:;
// line 149
frost$core$Int64$nullable $tmp281 = param1.end;
*(&local2) = ((frost$core$Int64) $tmp281.value);
goto block10;
block11:;
// line 151
frost$core$Int64 $tmp282 = *(&local0);
frost$core$Int64 $tmp283 = (frost$core$Int64) {0};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block12; else goto block14;
block12:;
// line 152
ITable* $tmp289 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Int64 $tmp292 = $tmp290(((frost$collections$CollectionView*) param0));
*(&local2) = $tmp292;
goto block13;
block14:;
// line 1
// line 155
frost$core$Int64 $tmp293 = (frost$core$Int64) {0};
*(&local2) = $tmp293;
goto block13;
block13:;
goto block10;
block10:;
// line 158
frost$collections$Array* $tmp294 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp294);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$Array* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local3) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($84:frost.collections.Array<frost.collections.ListView.T>)
// line 159
frost$core$Int64 $tmp296 = param1.step;
frost$core$Int64 $tmp297 = (frost$core$Int64) {0};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 > $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block17;
block15:;
// line 160
goto block18;
block18:;
frost$core$Int64 $tmp303 = *(&local1);
frost$core$Int64 $tmp304 = *(&local2);
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 < $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block19; else goto block20;
block19:;
// line 161
frost$collections$Array* $tmp310 = *(&local3);
frost$core$Int64 $tmp311 = *(&local1);
ITable* $tmp312 = param0->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$core$Object* $tmp315 = $tmp313(param0, $tmp311);
frost$collections$Array$add$frost$collections$Array$T($tmp310, $tmp315);
frost$core$Frost$unref$frost$core$Object$Q($tmp315);
// unreffing REF($122:frost.collections.ListView.T)
// line 162
frost$core$Int64 $tmp316 = *(&local1);
frost$core$Int64 $tmp317 = *(&local0);
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 + $tmp319;
frost$core$Int64 $tmp321 = (frost$core$Int64) {$tmp320};
*(&local1) = $tmp321;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 166
frost$core$Int64 $tmp322 = param1.step;
frost$core$Int64 $tmp323 = (frost$core$Int64) {0};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 < $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp329 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s330, $tmp329);
abort(); // unreachable
block21:;
// line 167
goto block23;
block23:;
frost$core$Int64 $tmp331 = *(&local1);
frost$core$Int64 $tmp332 = *(&local2);
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 > $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block24; else goto block25;
block24:;
// line 168
frost$collections$Array* $tmp338 = *(&local3);
frost$core$Int64 $tmp339 = *(&local1);
ITable* $tmp340 = param0->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$core$Object* $tmp343 = $tmp341(param0, $tmp339);
frost$collections$Array$add$frost$collections$Array$T($tmp338, $tmp343);
frost$core$Frost$unref$frost$core$Object$Q($tmp343);
// unreffing REF($167:frost.collections.ListView.T)
// line 169
frost$core$Int64 $tmp344 = *(&local1);
frost$core$Int64 $tmp345 = *(&local0);
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346 + $tmp347;
frost$core$Int64 $tmp349 = (frost$core$Int64) {$tmp348};
*(&local1) = $tmp349;
goto block23;
block25:;
goto block16;
block16:;
// line 172
frost$core$Bit $tmp350 = param1.inclusive;
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block28; else goto block29;
block28:;
*(&local6) = $tmp350;
goto block30;
block29:;
frost$core$Int64$nullable $tmp352 = param1.end;
frost$core$Bit $tmp353 = frost$core$Bit$init$builtin_bit(!$tmp352.nonnull);
*(&local6) = $tmp353;
goto block30;
block30:;
frost$core$Bit $tmp354 = *(&local6);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block31; else goto block32;
block31:;
frost$core$Int64 $tmp356 = *(&local1);
frost$core$Int64 $tmp357 = *(&local2);
frost$core$Bit $tmp358 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp356, $tmp357);
*(&local5) = $tmp358;
goto block33;
block32:;
*(&local5) = $tmp354;
goto block33;
block33:;
frost$core$Bit $tmp359 = *(&local5);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block34; else goto block35;
block34:;
frost$core$Int64 $tmp361 = *(&local2);
ITable* $tmp362 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Int64 $tmp365 = $tmp363(((frost$collections$CollectionView*) param0));
int64_t $tmp366 = $tmp361.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 < $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
*(&local4) = $tmp369;
goto block36;
block35:;
*(&local4) = $tmp359;
goto block36;
block36:;
frost$core$Bit $tmp370 = *(&local4);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block26; else goto block27;
block26:;
// line 173
frost$collections$Array* $tmp372 = *(&local3);
frost$core$Int64 $tmp373 = *(&local1);
ITable* $tmp374 = param0->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Object* $tmp377 = $tmp375(param0, $tmp373);
frost$collections$Array$add$frost$collections$Array$T($tmp372, $tmp377);
frost$core$Frost$unref$frost$core$Object$Q($tmp377);
// unreffing REF($228:frost.collections.ListView.T)
goto block27;
block27:;
// line 175
frost$collections$Array* $tmp378 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp378)));
frost$collections$Array* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing result
*(&local3) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp378);

}
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Bit local2;
// line 184
frost$collections$Array* $tmp380 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp380);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$collections$Array* $tmp381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local0) = $tmp380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($1:frost.collections.Array<frost.collections.ListView.T>)
// line 185
ITable* $tmp382 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
frost$collections$Iterator* $tmp385 = $tmp383(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp386 = $tmp385->$class->itable;
while ($tmp386->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp386 = $tmp386->next;
}
$fn388 $tmp387 = $tmp386->methods[0];
frost$core$Bit $tmp389 = $tmp387($tmp385);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp391 = $tmp385->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp391 = $tmp391->next;
}
$fn393 $tmp392 = $tmp391->methods[1];
frost$core$Object* $tmp394 = $tmp392($tmp385);
frost$core$Frost$ref$frost$core$Object$Q($tmp394);
frost$core$Object* $tmp395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp395);
*(&local1) = $tmp394;
// line 186
frost$core$Object* $tmp396 = *(&local1);
frost$core$Int8** $tmp397 = &param1->pointer;
frost$core$Int8* $tmp398 = *$tmp397;
frost$core$Object** $tmp399 = &param1->target;
frost$core$Object* $tmp400 = *$tmp399;
bool $tmp401 = $tmp400 != ((frost$core$Object*) NULL);
if ($tmp401) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp403 = (($fn402) $tmp398)($tmp396);
*(&local2) = $tmp403;
goto block8;
block6:;
frost$core$Bit $tmp405 = (($fn404) $tmp398)($tmp400, $tmp396);
*(&local2) = $tmp405;
goto block8;
block8:;
frost$core$Bit $tmp406 = *(&local2);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block4; else goto block5;
block4:;
// line 187
frost$collections$Array* $tmp408 = *(&local0);
frost$core$Object* $tmp409 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp408, $tmp409);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
// unreffing REF($29:frost.collections.Iterator.T)
frost$core$Object* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($18:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 190
frost$collections$Array* $tmp411 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp411)));
frost$collections$Array* $tmp412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp411);

}
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0) {

// line 196
frost$collections$ListView$ListIterator* $tmp413 = (frost$collections$ListView$ListIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ListView$ListIterator$class);
frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT($tmp413, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp413)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($1:frost.collections.ListView.ListIterator<frost.collections.ListView.T>)
return ((frost$collections$Iterator*) $tmp413);

}
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
// line 209
frost$collections$Array* $tmp414 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp414, ((frost$collections$CollectionView*) param0));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$collections$Array* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing REF($1:frost.collections.Array<frost.collections.ListView.T>)
// line 210
frost$collections$Array* $tmp416 = *(&local0);
frost$core$Int64 $tmp417 = (frost$core$Int64) {0};
ITable* $tmp418 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
frost$core$Int64 $tmp421 = $tmp419(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp422 = (frost$core$Int64) {1};
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423 - $tmp424;
frost$core$Int64 $tmp426 = (frost$core$Int64) {$tmp425};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(((frost$collections$List*) $tmp416), $tmp417, $tmp426, param1);
// line 211
frost$collections$Array* $tmp427 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp427)));
frost$collections$Array* $tmp428 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp427);

}

