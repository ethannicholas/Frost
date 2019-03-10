#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim(frost$collections$ListView$PowerSetIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PowerSetIterator$class_type frost$collections$ListView$PowerSetIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PowerSetIterator$cleanup, frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim} };

typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn29)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn45)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn76)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn108)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 3587913374569870576, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 156, 1704081094291221051, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, -4057673255977011726, NULL };

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:168
frost$core$UInt64 $tmp2 = (frost$core$UInt64) {0u};
frost$core$UInt64* $tmp3 = &param0->bits;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->list;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->list;
*$tmp6 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:174
frost$core$Int $tmp7 = (frost$core$Int) {1u};
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from ListView.frost:174:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:389
int64_t $tmp12 = $tmp7.value;
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12 << $tmp13;
frost$core$Int $tmp15 = (frost$core$Int) {$tmp14};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ListView.frost:174:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:1009
int64_t $tmp16 = $tmp15.value;
frost$core$UInt64 $tmp17 = (frost$core$UInt64) {((uint64_t) $tmp16)};
frost$core$UInt64* $tmp18 = &param0->stop;
*$tmp18 = $tmp17;
return;

}
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PowerSetIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:179
frost$core$UInt64* $tmp19 = &param0->bits;
frost$core$UInt64 $tmp20 = *$tmp19;
frost$core$UInt64* $tmp21 = &param0->stop;
frost$core$UInt64 $tmp22 = *$tmp21;
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from ListView.frost:179:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:227
uint64_t $tmp23 = $tmp20.value;
uint64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
return $tmp26;

}
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
ITable* $tmp27 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Bit $tmp30 = $tmp28(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp31 = $tmp30.value;
bool $tmp32 = !$tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block2:;
frost$core$Int $tmp35 = (frost$core$Int) {183u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, $tmp35, &$s37);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:184
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp38 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp38);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$collections$Array* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:185
frost$core$Int $tmp40 = (frost$core$Int) {0u};
frost$collections$ListView** $tmp41 = &param0->list;
frost$collections$ListView* $tmp42 = *$tmp41;
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp42));
frost$core$Bit $tmp47 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp48 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp40, $tmp46, $tmp47);
frost$core$Int $tmp49 = $tmp48.min;
*(&local1) = $tmp49;
frost$core$Int $tmp50 = $tmp48.max;
frost$core$Bit $tmp51 = $tmp48.inclusive;
bool $tmp52 = $tmp51.value;
frost$core$Int $tmp53 = (frost$core$Int) {1u};
if ($tmp52) goto block7; else goto block8;
block7:;
int64_t $tmp54 = $tmp49.value;
int64_t $tmp55 = $tmp50.value;
bool $tmp56 = $tmp54 <= $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block4; else goto block5;
block8:;
int64_t $tmp59 = $tmp49.value;
int64_t $tmp60 = $tmp50.value;
bool $tmp61 = $tmp59 < $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:186
frost$core$UInt64* $tmp64 = &param0->bits;
frost$core$UInt64 $tmp65 = *$tmp64;
frost$core$Int $tmp66 = *(&local1);
// begin inline call to function frost.core.UInt64.[](index:frost.core.Int):frost.core.Bit from ListView.frost:186:24
frost$core$Int $tmp67 = (frost$core$Int) {0u};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 >= $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block14; else goto block13;
block14:;
frost$core$UInt64$wrapper* $tmp73;
$tmp73 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp73->value = $tmp65;
ITable* $tmp74 = ((frost$collections$CollectionView*) $tmp73)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$core$Int $tmp77 = $tmp75(((frost$collections$CollectionView*) $tmp73));
int64_t $tmp78 = $tmp66.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 < $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp73)));
if ($tmp82) goto block12; else goto block13;
block13:;
frost$core$Int $tmp83 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:506
frost$core$Int $tmp86 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt64.frost:506:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:389
int64_t $tmp87 = $tmp86.value;
int64_t $tmp88 = $tmp66.value;
int64_t $tmp89 = $tmp87 << $tmp88;
frost$core$Int $tmp90 = (frost$core$Int) {$tmp89};
frost$core$Int64 $tmp91 = frost$core$Int64$init$frost$core$Int($tmp90);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:506:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:160
uint64_t $tmp92 = $tmp65.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = ((int64_t) $tmp92) & $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
frost$core$Int64 $tmp96 = (frost$core$Int64) {0u};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 != $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:187
frost$collections$Array* $tmp102 = *(&local0);
frost$collections$ListView** $tmp103 = &param0->list;
frost$collections$ListView* $tmp104 = *$tmp103;
frost$core$Int $tmp105 = *(&local1);
ITable* $tmp106 = $tmp104->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Object* $tmp109 = $tmp107($tmp104, $tmp105);
frost$collections$Array$add$frost$collections$Array$T($tmp102, $tmp109);
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
goto block10;
block10:;
frost$core$Int $tmp110 = *(&local1);
int64_t $tmp111 = $tmp50.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 - $tmp112;
frost$core$Int $tmp114 = (frost$core$Int) {$tmp113};
if ($tmp52) goto block18; else goto block19;
block18:;
int64_t $tmp115 = $tmp114.value;
int64_t $tmp116 = $tmp53.value;
bool $tmp117 = $tmp115 >= $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block17; else goto block5;
block19:;
int64_t $tmp120 = $tmp114.value;
int64_t $tmp121 = $tmp53.value;
bool $tmp122 = $tmp120 > $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block17; else goto block5;
block17:;
int64_t $tmp125 = $tmp110.value;
int64_t $tmp126 = $tmp53.value;
int64_t $tmp127 = $tmp125 + $tmp126;
frost$core$Int $tmp128 = (frost$core$Int) {$tmp127};
*(&local1) = $tmp128;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:190
frost$core$UInt64* $tmp129 = &param0->bits;
frost$core$UInt64 $tmp130 = *$tmp129;
frost$core$UInt64 $tmp131 = (frost$core$UInt64) {1u};
uint64_t $tmp132 = $tmp130.value;
uint64_t $tmp133 = $tmp131.value;
uint64_t $tmp134 = $tmp132 + $tmp133;
frost$core$UInt64 $tmp135 = (frost$core$UInt64) {$tmp134};
frost$core$UInt64* $tmp136 = &param0->bits;
*$tmp136 = $tmp135;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:191
frost$collections$Array* $tmp137 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp137)));
frost$collections$Array* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp137);

}
void frost$collections$ListView$PowerSetIterator$cleanup(frost$collections$ListView$PowerSetIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/ListView.frost:165
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp139 = &param0->list;
frost$collections$ListView* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
return;

}






