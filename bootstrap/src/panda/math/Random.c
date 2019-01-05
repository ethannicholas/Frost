#include "panda/math/Random.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/XorShift128Plus.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Real32.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$Random$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$Random$class_type panda$math$Random$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$Random$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, NULL, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

typedef panda$core$Int64 (*$fn7)(panda$math$Random*);
typedef panda$core$Int64 (*$fn19)(panda$math$Random*);
typedef panda$core$Int64 (*$fn39)(panda$math$Random*);
typedef panda$core$Int32 (*$fn57)(panda$math$Random*);
typedef panda$core$Int64 (*$fn66)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -3905521994403164614, NULL };

panda$math$Random* panda$math$Random$default$R$panda$math$Random() {

// line 17
panda$math$XorShift128Plus* $tmp2 = (panda$math$XorShift128Plus*) pandaObjectAlloc(32, (panda$core$Class*) &panda$math$XorShift128Plus$class);
int64_t $tmp3 = panda$core$Panda$currentTime$R$builtin_int64();
panda$core$Int64 $tmp4 = panda$core$Int64$init$builtin_int64($tmp3);
panda$math$XorShift128Plus$init$panda$core$Int64($tmp2, $tmp4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$math$Random*) $tmp2)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.math.XorShift128Plus)
return ((panda$math$Random*) $tmp2);

}
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* param0) {

panda$core$Int64 local0;
// line 27
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[2];
panda$core$Int64 $tmp8 = $tmp6(param0);
*(&local0) = $tmp8;
// line 28
panda$core$Int64 $tmp9 = *(&local0);
panda$core$Int64 $tmp10 = (panda$core$Int64) {1};
panda$core$Int64 $tmp11 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp10);
panda$core$Int64 $tmp12 = (panda$core$Int64) {0};
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 != $tmp14;
panda$core$Bit $tmp16 = (panda$core$Bit) {$tmp15};
return $tmp16;

}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* param0) {

// line 36
ITable* $tmp17 = param0->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[2];
panda$core$Int64 $tmp20 = $tmp18(param0);
panda$core$Int32 $tmp21 = panda$core$Int64$convert$R$panda$core$Int32($tmp20);
return $tmp21;

}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
int64_t $tmp23 = param1.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 >= $tmp24;
panda$core$Bit $tmp26 = (panda$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block1:;
// line 55
panda$core$Int64 $tmp31 = (panda$core$Int64) {1};
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param1, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block3; else goto block4;
block3:;
// line 56
panda$core$Int64 $tmp34 = (panda$core$Int64) {0};
return $tmp34;
block4:;
// line 59
panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$R$panda$core$Int64(param1);
panda$core$Int64 $tmp36 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp35, param1);
*(&local0) = $tmp36;
// line 60
goto block5;
block5:;
// line 61
ITable* $tmp37 = param0->$class->itable;
while ($tmp37->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[2];
panda$core$Int64 $tmp40 = $tmp38(param0);
*(&local1) = $tmp40;
// line 62
panda$core$Int64 $tmp41 = *(&local1);
panda$core$Int64 $tmp42 = *(&local0);
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 >= $tmp44;
panda$core$Bit $tmp46 = (panda$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block7; else goto block8;
block7:;
// line 63
panda$core$Int64 $tmp48 = *(&local1);
panda$core$Int64 $tmp49 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp48, param1);
return $tmp49;
block8:;
goto block5;
block6:;
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* param0) {

// line 76
ITable* $tmp55 = param0->$class->itable;
while ($tmp55->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
panda$core$Int32 $tmp58 = $tmp56(param0);
panda$core$UInt32 $tmp59 = panda$core$Int32$convert$R$panda$core$UInt32($tmp58);
panda$core$UInt32 $tmp60 = (panda$core$UInt32) {8};
panda$core$UInt32 $tmp61 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp59, $tmp60);
panda$core$UInt32 $tmp62 = (panda$core$UInt32) {16777216};
panda$core$Real32 $tmp63 = panda$core$UInt32$$DIV$panda$core$UInt32$R$panda$core$Real32($tmp61, $tmp62);
return $tmp63;

}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* param0) {

// line 87
ITable* $tmp64 = param0->$class->itable;
while ($tmp64->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[2];
panda$core$Int64 $tmp67 = $tmp65(param0);
panda$core$UInt64 $tmp68 = panda$core$Int64$convert$R$panda$core$UInt64($tmp67);
panda$core$UInt64 $tmp69 = (panda$core$UInt64) {11};
panda$core$UInt64 $tmp70 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp68, $tmp69);
panda$core$UInt64 $tmp71 = (panda$core$UInt64) {9007199254740992};
panda$core$Real64 $tmp72 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp70, $tmp71);
return $tmp72;

}






