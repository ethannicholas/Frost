#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim(frost$collections$ListView$PowerSetIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PowerSetIterator$class_type frost$collections$ListView$PowerSetIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PowerSetIterator$cleanup, frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim} };

typedef frost$core$Int64 (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn29)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn45)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn78)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn109)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 2408700230285149002, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 156, 8717723379661372697, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -8879437518421684442, NULL };

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:168
frost$core$UInt64 $tmp2 = (frost$core$UInt64) {0};
frost$core$UInt64* $tmp3 = &param0->bits;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->list;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->list;
*$tmp6 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:174
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int64 $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from ListView.frost:174:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:153
int64_t $tmp12 = $tmp7.value;
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12 << $tmp13;
frost$core$Int64 $tmp15 = frost$core$Int64$init$builtin_int64($tmp14);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from ListView.frost:174:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp16 = $tmp15.value;
frost$core$UInt64 $tmp17 = (frost$core$UInt64) {((uint64_t) $tmp16)};
frost$core$UInt64* $tmp18 = &param0->stop;
*$tmp18 = $tmp17;
return;

}
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PowerSetIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:179
frost$core$UInt64* $tmp19 = &param0->bits;
frost$core$UInt64 $tmp20 = *$tmp19;
frost$core$UInt64* $tmp21 = &param0->stop;
frost$core$UInt64 $tmp22 = *$tmp21;
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from ListView.frost:179:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:221
uint64_t $tmp23 = $tmp20.value;
uint64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25);
return $tmp26;

}
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
ITable* $tmp27 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Bit $tmp30 = $tmp28(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp31 = $tmp30.value;
bool $tmp32 = !$tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp35 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s36, $tmp35, &$s37);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:184
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp38 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp38);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$collections$Array* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:185
frost$core$Int64 $tmp40 = (frost$core$Int64) {0};
frost$collections$ListView** $tmp41 = &param0->list;
frost$collections$ListView* $tmp42 = *$tmp41;
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int64 $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp42));
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp48 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp40, $tmp46, $tmp47);
frost$core$Int64 $tmp49 = $tmp48.min;
*(&local1) = $tmp49;
frost$core$Int64 $tmp50 = $tmp48.max;
frost$core$Bit $tmp51 = $tmp48.inclusive;
bool $tmp52 = $tmp51.value;
frost$core$Int64 $tmp53 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp54 = $tmp53.value;
frost$core$UInt64 $tmp55 = (frost$core$UInt64) {((uint64_t) $tmp54)};
if ($tmp52) goto block8; else goto block9;
block8:;
int64_t $tmp56 = $tmp49.value;
int64_t $tmp57 = $tmp50.value;
bool $tmp58 = $tmp56 <= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block5; else goto block6;
block9:;
int64_t $tmp61 = $tmp49.value;
int64_t $tmp62 = $tmp50.value;
bool $tmp63 = $tmp61 < $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:186
frost$core$UInt64* $tmp66 = &param0->bits;
frost$core$UInt64 $tmp67 = *$tmp66;
frost$core$Int64 $tmp68 = *(&local1);
// begin inline call to function frost.core.UInt64.[](index:frost.core.Int64):frost.core.Bit from ListView.frost:186:24
frost$core$Int64 $tmp69 = (frost$core$Int64) {0};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 >= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block15; else goto block14;
block15:;
frost$core$UInt64$wrapper* $tmp75;
$tmp75 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp75->value = $tmp67;
ITable* $tmp76 = ((frost$collections$CollectionView*) $tmp75)->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
frost$core$Int64 $tmp79 = $tmp77(((frost$collections$CollectionView*) $tmp75));
int64_t $tmp80 = $tmp68.value;
int64_t $tmp81 = $tmp79.value;
bool $tmp82 = $tmp80 < $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp75)));
if ($tmp84) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:444
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:444:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:153
int64_t $tmp89 = $tmp88.value;
int64_t $tmp90 = $tmp68.value;
int64_t $tmp91 = $tmp89 << $tmp90;
frost$core$Int64 $tmp92 = frost$core$Int64$init$builtin_int64($tmp91);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:444:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:154
uint64_t $tmp93 = $tmp67.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = ((int64_t) $tmp93) & $tmp94;
frost$core$Int64 $tmp96 = frost$core$Int64$init$builtin_int64($tmp95);
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 != $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:187
frost$collections$Array* $tmp103 = *(&local0);
frost$collections$ListView** $tmp104 = &param0->list;
frost$collections$ListView* $tmp105 = *$tmp104;
frost$core$Int64 $tmp106 = *(&local1);
ITable* $tmp107 = $tmp105->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Object* $tmp110 = $tmp108($tmp105, $tmp106);
frost$collections$Array$add$frost$collections$Array$T($tmp103, $tmp110);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
goto block11;
block11:;
frost$core$Int64 $tmp111 = *(&local1);
int64_t $tmp112 = $tmp50.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 - $tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {$tmp114};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp116 = $tmp115.value;
frost$core$UInt64 $tmp117 = (frost$core$UInt64) {((uint64_t) $tmp116)};
if ($tmp52) goto block20; else goto block21;
block20:;
uint64_t $tmp118 = $tmp117.value;
uint64_t $tmp119 = $tmp55.value;
bool $tmp120 = $tmp118 >= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block18; else goto block6;
block21:;
uint64_t $tmp123 = $tmp117.value;
uint64_t $tmp124 = $tmp55.value;
bool $tmp125 = $tmp123 > $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block18; else goto block6;
block18:;
int64_t $tmp128 = $tmp111.value;
int64_t $tmp129 = $tmp53.value;
int64_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {$tmp130};
*(&local1) = $tmp131;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:190
frost$core$UInt64* $tmp132 = &param0->bits;
frost$core$UInt64 $tmp133 = *$tmp132;
frost$core$UInt64 $tmp134 = (frost$core$UInt64) {1};
uint64_t $tmp135 = $tmp133.value;
uint64_t $tmp136 = $tmp134.value;
uint64_t $tmp137 = $tmp135 + $tmp136;
frost$core$UInt64 $tmp138 = (frost$core$UInt64) {$tmp137};
frost$core$UInt64* $tmp139 = &param0->bits;
*$tmp139 = $tmp138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:191
frost$collections$Array* $tmp140 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp140)));
frost$collections$Array* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp140);

}
void frost$collections$ListView$PowerSetIterator$cleanup(frost$collections$ListView$PowerSetIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:165
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp142 = &param0->list;
frost$collections$ListView* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
return;

}






