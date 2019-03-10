#include "frost/math/Random.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/XorShift128Plus.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Int.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt64.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$Random$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$Random$class_type frost$math$Random$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$Random$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

typedef frost$core$Int64 (*$fn7)(frost$math$Random*);
typedef frost$core$Int64 (*$fn22)(frost$math$Random*);
typedef frost$core$Int64 (*$fn51)(frost$math$Random*);
typedef frost$core$Int32 (*$fn67)(frost$math$Random*);
typedef frost$core$Int64 (*$fn83)(frost$math$Random*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, 246873264650368936, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -5035407552213212906, NULL };

frost$math$Random* frost$math$Random$default$R$frost$math$Random() {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:17
FROST_ASSERT(32 == sizeof(frost$math$XorShift128Plus));
frost$math$XorShift128Plus* $tmp2 = (frost$math$XorShift128Plus*) frostObjectAlloc(32, (frost$core$Class*) &frost$math$XorShift128Plus$class);
int64_t $tmp3 = frost$core$Frost$currentTime$R$builtin_int64();
frost$core$Int64 $tmp4 = (frost$core$Int64) {$tmp3};
frost$math$XorShift128Plus$init$frost$core$Int64($tmp2, $tmp4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$math$Random*) $tmp2)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return ((frost$math$Random*) $tmp2);

}
frost$core$Bit frost$math$Random$bit$R$frost$core$Bit(frost$math$Random* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:27
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[2];
frost$core$Int64 $tmp8 = $tmp6(param0);
*(&local0) = $tmp8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:28
frost$core$Int64 $tmp9 = *(&local0);
frost$core$Int64 $tmp10 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Random.frost:28:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:178
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10.value;
int64_t $tmp13 = $tmp11 & $tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {$tmp13};
frost$core$Int64 $tmp15 = (frost$core$Int64) {0u};
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 != $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
return $tmp19;

}
frost$core$Int32 frost$math$Random$int32$R$frost$core$Int32(frost$math$Random* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:36
ITable* $tmp20 = param0->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[2];
frost$core$Int64 $tmp23 = $tmp21(param0);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Random.frost:36:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:598
int64_t $tmp24 = $tmp23.value;
frost$core$Int32 $tmp25 = (frost$core$Int32) {((int32_t) $tmp24)};
return $tmp25;

}
frost$core$Int64 frost$math$Random$int$frost$core$Int64$R$frost$core$Int64(frost$math$Random* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 $tmp26 = (frost$core$Int64) {1u};
int64_t $tmp27 = param1.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 >= $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block2:;
frost$core$Int $tmp32 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:55
frost$core$Int64 $tmp35 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Random.frost:55:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp36 = param1.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 == $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:56
frost$core$Int64 $tmp41 = (frost$core$Int64) {0u};
return $tmp41;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:59
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Random.frost:59:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:89
int64_t $tmp42 = param1.value;
int64_t $tmp43 = -$tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {$tmp43};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Random.frost:59:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp45 = $tmp44.value;
int64_t $tmp46 = param1.value;
int64_t $tmp47 = $tmp45 % $tmp46;
frost$core$Int64 $tmp48 = (frost$core$Int64) {$tmp47};
*(&local0) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:60
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:61
ITable* $tmp49 = param0->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[2];
frost$core$Int64 $tmp52 = $tmp50(param0);
*(&local1) = $tmp52;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:62
frost$core$Int64 $tmp53 = *(&local1);
frost$core$Int64 $tmp54 = *(&local0);
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:63
frost$core$Int64 $tmp60 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Random.frost:63:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp61 = $tmp60.value;
int64_t $tmp62 = param1.value;
int64_t $tmp63 = $tmp61 % $tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {$tmp63};
return $tmp64;
block11:;
goto block8;
block9:;
goto block13;
block13:;

}
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(frost$math$Random* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:76
ITable* $tmp65 = param0->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[1];
frost$core$Int32 $tmp68 = $tmp66(param0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from Random.frost:76:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:1002
int32_t $tmp69 = $tmp68.value;
frost$core$UInt32 $tmp70 = (frost$core$UInt32) {((uint32_t) $tmp69)};
frost$core$UInt32 $tmp71 = (frost$core$UInt32) {8u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from Random.frost:76:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:382
uint32_t $tmp72 = $tmp70.value;
uint32_t $tmp73 = $tmp71.value;
uint32_t $tmp74 = $tmp72 >> $tmp73;
frost$core$UInt32 $tmp75 = (frost$core$UInt32) {$tmp74};
frost$core$UInt32 $tmp76 = (frost$core$UInt32) {16777216u};
// begin inline call to function frost.core.UInt32./(other:frost.core.UInt32):frost.core.Real32 from Random.frost:76:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:239
uint32_t $tmp77 = $tmp75.value;
uint32_t $tmp78 = $tmp76.value;
float $tmp79 = ((float) $tmp77) / ((float) $tmp78);
frost$core$Real32 $tmp80 = (frost$core$Real32) {$tmp79};
return $tmp80;

}
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(frost$math$Random* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:87
ITable* $tmp81 = param0->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[2];
frost$core$Int64 $tmp84 = $tmp82(param0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Random.frost:87:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:628
int64_t $tmp85 = $tmp84.value;
frost$core$UInt64 $tmp86 = (frost$core$UInt64) {((uint64_t) $tmp85)};
frost$core$UInt64 $tmp87 = (frost$core$UInt64) {11u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Random.frost:87:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:202
uint64_t $tmp88 = $tmp86.value;
uint64_t $tmp89 = $tmp87.value;
uint64_t $tmp90 = $tmp88 >> $tmp89;
frost$core$UInt64 $tmp91 = (frost$core$UInt64) {$tmp90};
frost$core$UInt64 $tmp92 = (frost$core$UInt64) {9007199254740992u};
// begin inline call to function frost.core.UInt64./(other:frost.core.UInt64):frost.core.Real64 from Random.frost:87:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:137
uint64_t $tmp93 = $tmp91.value;
uint64_t $tmp94 = $tmp92.value;
double $tmp95 = ((double) $tmp93) / ((double) $tmp94);
frost$core$Real64 $tmp96 = (frost$core$Real64) {$tmp95};
return $tmp96;

}






