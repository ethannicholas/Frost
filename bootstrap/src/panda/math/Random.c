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
typedef panda$core$Int64 (*$fn16)(panda$math$Random*);
typedef panda$core$Int64 (*$fn36)(panda$math$Random*);
typedef panda$core$Int32 (*$fn54)(panda$math$Random*);
typedef panda$core$Int64 (*$fn63)(panda$math$Random*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 90, -6489941155474524358, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x61\x6e\x64\x6f\x6d\x2e\x70\x61\x6e\x64\x61", 12, -4563581818467016900, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -3905521994403164614, NULL };

panda$math$Random* panda$math$Random$default$R$panda$math$Random() {

// line 17
panda$math$XorShift128Plus* $tmp2 = (panda$math$XorShift128Plus*) pandaObjectAlloc(32, (panda$core$Class*) &panda$math$XorShift128Plus$class);
int64_t $tmp3 = panda$core$Panda$currentTime$R$builtin_int64();
panda$core$Int64 $tmp4 = panda$core$Int64$init$builtin_int64($tmp3);
panda$math$XorShift128Plus$init$panda$core$Int64($tmp2, $tmp4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$math$Random*) $tmp2)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
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
panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, $tmp12);
return $tmp13;

}
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* param0) {

// line 36
ITable* $tmp14 = param0->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[2];
panda$core$Int64 $tmp17 = $tmp15(param0);
panda$core$Int32 $tmp18 = panda$core$Int64$convert$R$panda$core$Int32($tmp17);
return $tmp18;

}
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 $tmp19 = (panda$core$Int64) {1};
int64_t $tmp20 = param1.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 >= $tmp21;
panda$core$Bit $tmp23 = (panda$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 55
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param1, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block4;
block3:;
// line 56
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
return $tmp31;
block4:;
// line 59
panda$core$Int64 $tmp32 = panda$core$Int64$$SUB$R$panda$core$Int64(param1);
panda$core$Int64 $tmp33 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp32, param1);
*(&local0) = $tmp33;
// line 60
goto block5;
block5:;
// line 61
ITable* $tmp34 = param0->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[2];
panda$core$Int64 $tmp37 = $tmp35(param0);
*(&local1) = $tmp37;
// line 62
panda$core$Int64 $tmp38 = *(&local1);
panda$core$Int64 $tmp39 = *(&local0);
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block7; else goto block8;
block7:;
// line 63
panda$core$Int64 $tmp45 = *(&local1);
panda$core$Int64 $tmp46 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp45, param1);
return $tmp46;
block8:;
goto block5;
block6:;
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit(false);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp49 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* param0) {

// line 76
ITable* $tmp52 = param0->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[1];
panda$core$Int32 $tmp55 = $tmp53(param0);
panda$core$UInt32 $tmp56 = panda$core$Int32$convert$R$panda$core$UInt32($tmp55);
panda$core$UInt32 $tmp57 = (panda$core$UInt32) {8};
panda$core$UInt32 $tmp58 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp56, $tmp57);
panda$core$UInt32 $tmp59 = (panda$core$UInt32) {16777216};
panda$core$Real32 $tmp60 = panda$core$UInt32$$DIV$panda$core$UInt32$R$panda$core$Real32($tmp58, $tmp59);
return $tmp60;

}
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* param0) {

// line 87
ITable* $tmp61 = param0->$class->itable;
while ($tmp61->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[2];
panda$core$Int64 $tmp64 = $tmp62(param0);
panda$core$UInt64 $tmp65 = panda$core$Int64$convert$R$panda$core$UInt64($tmp64);
panda$core$UInt64 $tmp66 = (panda$core$UInt64) {11};
panda$core$UInt64 $tmp67 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64($tmp65, $tmp66);
panda$core$UInt64 $tmp68 = (panda$core$UInt64) {9007199254740992};
panda$core$Real64 $tmp69 = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64($tmp67, $tmp68);
return $tmp69;

}






