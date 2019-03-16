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


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$Random$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int$R$frost$core$Int, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$Random$class_type frost$math$Random$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$Random$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int$R$frost$core$Int, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

typedef frost$core$Int64 (*$fn7)(frost$math$Random*);
typedef frost$core$Int64 (*$fn22)(frost$math$Random*);
typedef frost$core$Int64 (*$fn51)(frost$math$Random*);
typedef frost$core$Int32 (*$fn69)(frost$math$Random*);
typedef frost$core$Int64 (*$fn85)(frost$math$Random*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, 246873264650368936, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 86, 3246781277201696262, NULL };

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
frost$core$Int frost$math$Random$int$frost$core$Int$R$frost$core$Int(frost$math$Random* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int $tmp26 = (frost$core$Int) {1u};
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
frost$core$Int $tmp35 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Random.frost:55:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp36 = param1.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 == $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:56
frost$core$Int $tmp41 = (frost$core$Int) {0u};
return $tmp41;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:59
// begin inline call to function frost.core.Int.-():frost.core.Int from Random.frost:59:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp42 = param1.value;
int64_t $tmp43 = -$tmp42;
frost$core$Int $tmp44 = (frost$core$Int) {$tmp43};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Random.frost:59:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:198
int64_t $tmp45 = $tmp44.value;
int64_t $tmp46 = param1.value;
int64_t $tmp47 = $tmp45 % $tmp46;
frost$core$Int $tmp48 = (frost$core$Int) {$tmp47};
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
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Random.frost:61:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp53 = $tmp52.value;
frost$core$Int $tmp54 = (frost$core$Int) {((int64_t) $tmp53)};
*(&local1) = $tmp54;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:62
frost$core$Int $tmp55 = *(&local1);
frost$core$Int $tmp56 = *(&local0);
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:63
frost$core$Int $tmp62 = *(&local1);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Random.frost:63:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:198
int64_t $tmp63 = $tmp62.value;
int64_t $tmp64 = param1.value;
int64_t $tmp65 = $tmp63 % $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
return $tmp66;
block12:;
goto block8;
block9:;
goto block14;
block14:;

}
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(frost$math$Random* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:76
ITable* $tmp67 = param0->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[1];
frost$core$Int32 $tmp70 = $tmp68(param0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from Random.frost:76:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:1002
int32_t $tmp71 = $tmp70.value;
frost$core$UInt32 $tmp72 = (frost$core$UInt32) {((uint32_t) $tmp71)};
frost$core$UInt32 $tmp73 = (frost$core$UInt32) {8u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from Random.frost:76:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:382
uint32_t $tmp74 = $tmp72.value;
uint32_t $tmp75 = $tmp73.value;
uint32_t $tmp76 = $tmp74 >> $tmp75;
frost$core$UInt32 $tmp77 = (frost$core$UInt32) {$tmp76};
frost$core$UInt32 $tmp78 = (frost$core$UInt32) {16777216u};
// begin inline call to function frost.core.UInt32./(other:frost.core.UInt32):frost.core.Real32 from Random.frost:76:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:239
uint32_t $tmp79 = $tmp77.value;
uint32_t $tmp80 = $tmp78.value;
float $tmp81 = ((float) $tmp79) / ((float) $tmp80);
frost$core$Real32 $tmp82 = (frost$core$Real32) {$tmp81};
return $tmp82;

}
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(frost$math$Random* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/math/Random.frost:87
ITable* $tmp83 = param0->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[2];
frost$core$Int64 $tmp86 = $tmp84(param0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Random.frost:87:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:628
int64_t $tmp87 = $tmp86.value;
frost$core$UInt64 $tmp88 = (frost$core$UInt64) {((uint64_t) $tmp87)};
frost$core$UInt64 $tmp89 = (frost$core$UInt64) {11u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Random.frost:87:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:202
uint64_t $tmp90 = $tmp88.value;
uint64_t $tmp91 = $tmp89.value;
uint64_t $tmp92 = $tmp90 >> $tmp91;
frost$core$UInt64 $tmp93 = (frost$core$UInt64) {$tmp92};
frost$core$UInt64 $tmp94 = (frost$core$UInt64) {9007199254740992u};
// begin inline call to function frost.core.UInt64./(other:frost.core.UInt64):frost.core.Real64 from Random.frost:87:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:137
uint64_t $tmp95 = $tmp93.value;
uint64_t $tmp96 = $tmp94.value;
double $tmp97 = ((double) $tmp95) / ((double) $tmp96);
frost$core$Real64 $tmp98 = (frost$core$Real64) {$tmp97};
return $tmp98;

}






