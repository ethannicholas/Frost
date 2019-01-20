#include "frost/math/Random.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/XorShift128Plus.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt64.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$Random$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$Random$class_type frost$math$Random$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$Random$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

typedef frost$core$Int64 (*$fn7)(frost$math$Random*);
typedef frost$core$Int64 (*$fn19)(frost$math$Random*);
typedef frost$core$Int64 (*$fn39)(frost$math$Random*);
typedef frost$core$Int32 (*$fn75)(frost$math$Random*);
typedef frost$core$Int64 (*$fn103)(frost$math$Random*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, 2121431080884763350, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, 3556184057875090480, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -4642010394243254264, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 91, 1804707407405657027, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 9217984912841940249, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, 4608643632300218411, NULL };

frost$math$Random* frost$math$Random$default$R$frost$math$Random() {

// line 17
frost$math$XorShift128Plus* $tmp2 = (frost$math$XorShift128Plus*) frostObjectAlloc(32, (frost$core$Class*) &frost$math$XorShift128Plus$class);
int64_t $tmp3 = frost$core$Frost$currentTime$R$builtin_int64();
frost$core$Int64 $tmp4 = frost$core$Int64$init$builtin_int64($tmp3);
frost$math$XorShift128Plus$init$frost$core$Int64($tmp2, $tmp4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$math$Random*) $tmp2)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.math.XorShift128Plus)
return ((frost$math$Random*) $tmp2);

}
frost$core$Bit frost$math$Random$bit$R$frost$core$Bit(frost$math$Random* param0) {

frost$core$Int64 local0;
// line 27
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[2];
frost$core$Int64 $tmp8 = $tmp6(param0);
*(&local0) = $tmp8;
// line 28
frost$core$Int64 $tmp9 = *(&local0);
frost$core$Int64 $tmp10 = (frost$core$Int64) {1};
frost$core$Int64 $tmp11 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp9, $tmp10);
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 != $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
return $tmp16;

}
frost$core$Int32 frost$math$Random$int32$R$frost$core$Int32(frost$math$Random* param0) {

// line 36
ITable* $tmp17 = param0->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[2];
frost$core$Int64 $tmp20 = $tmp18(param0);
frost$core$Int32 $tmp21 = frost$core$Int64$get_asInt32$R$frost$core$Int32($tmp20);
return $tmp21;

}
frost$core$Int64 frost$math$Random$int$frost$core$Int64$R$frost$core$Int64(frost$math$Random* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
int64_t $tmp23 = param1.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 >= $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block1:;
// line 55
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block9; else goto block10;
block9:;
// line 56
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
*(&local0) = $tmp34;
goto block3;
block10:;
// line 59
frost$core$Int64 $tmp35 = frost$core$Int64$$SUB$R$frost$core$Int64(param1);
frost$core$Int64 $tmp36 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp35, param1);
*(&local2) = $tmp36;
// line 60
goto block11;
block11:;
// line 61
ITable* $tmp37 = param0->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[2];
frost$core$Int64 $tmp40 = $tmp38(param0);
*(&local3) = $tmp40;
// line 62
frost$core$Int64 $tmp41 = *(&local3);
frost$core$Int64 $tmp42 = *(&local2);
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 >= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block13; else goto block14;
block13:;
// line 63
frost$core$Int64 $tmp48 = *(&local3);
frost$core$Int64 $tmp49 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp48, param1);
*(&local0) = $tmp49;
goto block3;
block14:;
goto block11;
block12:;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block15:;
abort(); // unreachable
block3:;
frost$core$Int64 $tmp55 = *(&local0);
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block4; else goto block5;
block4:;
frost$core$Int64 $tmp62 = *(&local0);
int64_t $tmp63 = $tmp62.value;
int64_t $tmp64 = param1.value;
bool $tmp65 = $tmp63 < $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
*(&local1) = $tmp66;
goto block6;
block5:;
*(&local1) = $tmp60;
goto block6;
block6:;
frost$core$Bit $tmp67 = *(&local1);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block7; else goto block8;
block7:;
frost$core$Int64 $tmp69 = *(&local0);
return $tmp69;
block8:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable

}
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(frost$math$Random* param0) {

frost$core$Real32 local0;
frost$core$Bit local1;
// line 76
ITable* $tmp73 = param0->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
frost$core$Int32 $tmp76 = $tmp74(param0);
frost$core$UInt32 $tmp77 = frost$core$Int32$get_asUInt32$R$frost$core$UInt32($tmp76);
frost$core$UInt32 $tmp78 = (frost$core$UInt32) {8};
frost$core$UInt32 $tmp79 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32($tmp77, $tmp78);
frost$core$UInt32 $tmp80 = (frost$core$UInt32) {16777216};
frost$core$Real32 $tmp81 = frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32($tmp79, $tmp80);
*(&local0) = $tmp81;
goto block1;
block1:;
frost$core$Real32 $tmp82 = *(&local0);
frost$core$Real32 $tmp83 = (frost$core$Real32) {0.0};
float $tmp84 = $tmp82.value;
float $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block2; else goto block3;
block2:;
frost$core$Real32 $tmp89 = *(&local0);
frost$core$Real32 $tmp90 = (frost$core$Real32) {1.0};
float $tmp91 = $tmp89.value;
float $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 < $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
*(&local1) = $tmp94;
goto block4;
block3:;
*(&local1) = $tmp87;
goto block4;
block4:;
frost$core$Bit $tmp95 = *(&local1);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block5; else goto block6;
block5:;
frost$core$Real32 $tmp97 = *(&local0);
return $tmp97;
block6:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable

}
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(frost$math$Random* param0) {

frost$core$Real64 local0;
frost$core$Bit local1;
// line 87
ITable* $tmp101 = param0->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[2];
frost$core$Int64 $tmp104 = $tmp102(param0);
frost$core$UInt64 $tmp105 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp104);
frost$core$UInt64 $tmp106 = (frost$core$UInt64) {11};
frost$core$UInt64 $tmp107 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64($tmp105, $tmp106);
frost$core$UInt64 $tmp108 = (frost$core$UInt64) {9007199254740992};
frost$core$Real64 $tmp109 = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64($tmp107, $tmp108);
*(&local0) = $tmp109;
goto block1;
block1:;
frost$core$Real64 $tmp110 = *(&local0);
frost$core$Real64 $tmp111 = (frost$core$Real64) {0.0};
double $tmp112 = $tmp110.value;
double $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 >= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block2; else goto block3;
block2:;
frost$core$Real64 $tmp117 = *(&local0);
frost$core$Real64 $tmp118 = (frost$core$Real64) {1.0};
double $tmp119 = $tmp117.value;
double $tmp120 = $tmp118.value;
bool $tmp121 = $tmp119 < $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
*(&local1) = $tmp122;
goto block4;
block3:;
*(&local1) = $tmp115;
goto block4;
block4:;
frost$core$Bit $tmp123 = *(&local1);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block5; else goto block6;
block5:;
frost$core$Real64 $tmp125 = *(&local0);
return $tmp125;
block6:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable

}






