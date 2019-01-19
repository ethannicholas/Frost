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
typedef frost$core$Int32 (*$fn57)(frost$math$Random*);
typedef frost$core$Int64 (*$fn66)(frost$math$Random*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, 2121431080884763350, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, 3556184057875090480, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, -4563581819490094058, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -4642010394243254264, NULL };

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
frost$core$Int32 $tmp21 = frost$core$Int64$convert$R$frost$core$Int32($tmp20);
return $tmp21;

}
frost$core$Int64 frost$math$Random$int$frost$core$Int64$R$frost$core$Int64(frost$math$Random* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
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
if ($tmp33) goto block3; else goto block4;
block3:;
// line 56
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
return $tmp34;
block4:;
// line 59
frost$core$Int64 $tmp35 = frost$core$Int64$$SUB$R$frost$core$Int64(param1);
frost$core$Int64 $tmp36 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp35, param1);
*(&local0) = $tmp36;
// line 60
goto block5;
block5:;
// line 61
ITable* $tmp37 = param0->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[2];
frost$core$Int64 $tmp40 = $tmp38(param0);
*(&local1) = $tmp40;
// line 62
frost$core$Int64 $tmp41 = *(&local1);
frost$core$Int64 $tmp42 = *(&local0);
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 >= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block7; else goto block8;
block7:;
// line 63
frost$core$Int64 $tmp48 = *(&local1);
frost$core$Int64 $tmp49 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp48, param1);
return $tmp49;
block8:;
goto block5;
block6:;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block9:;
abort(); // unreachable

}
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(frost$math$Random* param0) {

// line 76
ITable* $tmp55 = param0->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
frost$core$Int32 $tmp58 = $tmp56(param0);
frost$core$UInt32 $tmp59 = frost$core$Int32$convert$R$frost$core$UInt32($tmp58);
frost$core$UInt32 $tmp60 = (frost$core$UInt32) {8};
frost$core$UInt32 $tmp61 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32($tmp59, $tmp60);
frost$core$UInt32 $tmp62 = (frost$core$UInt32) {16777216};
frost$core$Real32 $tmp63 = frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32($tmp61, $tmp62);
return $tmp63;

}
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(frost$math$Random* param0) {

// line 87
ITable* $tmp64 = param0->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[2];
frost$core$Int64 $tmp67 = $tmp65(param0);
frost$core$UInt64 $tmp68 = frost$core$Int64$convert$R$frost$core$UInt64($tmp67);
frost$core$UInt64 $tmp69 = (frost$core$UInt64) {11};
frost$core$UInt64 $tmp70 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64($tmp68, $tmp69);
frost$core$UInt64 $tmp71 = (frost$core$UInt64) {9007199254740992};
frost$core$Real64 $tmp72 = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64($tmp70, $tmp71);
return $tmp72;

}






