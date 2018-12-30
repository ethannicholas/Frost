#include "panda/core/Maybe.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Error.h"


static panda$core$String $s1;
panda$core$Maybe$class_type panda$core$Maybe$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Maybe$convert$R$panda$core$String, panda$core$Maybe$cleanup, panda$core$Maybe$get$R$panda$core$Maybe$T, panda$core$Maybe$error$R$panda$core$Error, panda$core$Maybe$succeeded$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn3)(panda$core$Maybe*);
typedef panda$core$Bit (*$fn29)(panda$core$Maybe*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -4218233432584287180, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 2597636039084618985, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 75, 4327144846064749345, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -3082657316354833219, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 75, 5927242880284751941, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x73\x75\x63\x63\x65\x65\x64\x65\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -4261482626132927571, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 19818230912296378, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 1795335336935, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 78, 873761964567482089, NULL };

panda$core$Object* panda$core$Maybe$get$R$panda$core$Maybe$T(panda$core$Maybe* param0) {

panda$core$Object* local0 = NULL;
$fn3 $tmp2 = ($fn3) param0->$class->vtable[4];
panda$core$Bit $tmp4 = $tmp2(param0);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp6 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 23
panda$core$Int64* $tmp9 = &param0->$rawValue;
panda$core$Int64 $tmp10 = *$tmp9;
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block3;
block4:;
panda$core$Object** $tmp14 = (panda$core$Object**) (param0->$data + 0);
panda$core$Object* $tmp15 = *$tmp14;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp16 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp16);
panda$core$Panda$ref$panda$core$Object$Q($tmp15);
*(&local0) = $tmp15;
// line 25
panda$core$Object* $tmp17 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp17);
panda$core$Object* $tmp18 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
// unreffing value
*(&local0) = ((panda$core$Object*) NULL);
return $tmp17;
block3:;
// line 27
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(false);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {27};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block5:;
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(false);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Error* panda$core$Maybe$error$R$panda$core$Error(panda$core$Maybe* param0) {

panda$core$Error* local0 = NULL;
$fn29 $tmp28 = ($fn29) param0->$class->vtable[4];
panda$core$Bit $tmp30 = $tmp28(param0);
panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block1:;
// line 35
panda$core$Int64* $tmp36 = &param0->$rawValue;
panda$core$Int64 $tmp37 = *$tmp36;
panda$core$Int64 $tmp38 = (panda$core$Int64) {1};
panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block4; else goto block3;
block4:;
panda$core$Error** $tmp41 = (panda$core$Error**) (param0->$data + 0);
panda$core$Error* $tmp42 = *$tmp41;
*(&local0) = ((panda$core$Error*) NULL);
panda$core$Error* $tmp43 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
*(&local0) = $tmp42;
// line 37
panda$core$Error* $tmp44 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Error* $tmp45 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing error
*(&local0) = ((panda$core$Error*) NULL);
return $tmp44;
block3:;
// line 39
panda$core$Bit $tmp46 = panda$core$Bit$init$builtin_bit(false);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp48 = (panda$core$Int64) {39};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block5:;
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit panda$core$Maybe$succeeded$R$panda$core$Bit(panda$core$Maybe* param0) {

// line 46
panda$core$Int64* $tmp55 = &param0->$rawValue;
panda$core$Int64 $tmp56 = *$tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {0};
panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp56, $tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block2; else goto block3;
block2:;
// line 48
panda$core$Bit $tmp60 = panda$core$Bit$init$builtin_bit(true);
return $tmp60;
block3:;
panda$core$Int64 $tmp61 = (panda$core$Int64) {1};
panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp56, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block4; else goto block1;
block4:;
// line 50
panda$core$Bit $tmp64 = panda$core$Bit$init$builtin_bit(false);
return $tmp64;
block1:;
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit(false);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp67 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block5:;
abort(); // unreachable

}
panda$core$String* panda$core$Maybe$convert$R$panda$core$String(panda$core$Maybe* param0) {

panda$core$Object* local0 = NULL;
panda$core$Error* local1 = NULL;
// line 56
panda$core$Int64* $tmp70 = &param0->$rawValue;
panda$core$Int64 $tmp71 = *$tmp70;
panda$core$Int64 $tmp72 = (panda$core$Int64) {0};
panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block2:;
panda$core$Object** $tmp75 = (panda$core$Object**) (param0->$data + 0);
panda$core$Object* $tmp76 = *$tmp75;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp77 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp77);
panda$core$Panda$ref$panda$core$Object$Q($tmp76);
*(&local0) = $tmp76;
// line 58
panda$core$Object* $tmp78 = *(&local0);
panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s80, $tmp78);
panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, &$s82);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Object* $tmp83 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp83);
// unreffing v
*(&local0) = ((panda$core$Object*) NULL);
return $tmp81;
block3:;
panda$core$Int64 $tmp84 = (panda$core$Int64) {1};
panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block4; else goto block1;
block4:;
panda$core$Error** $tmp87 = (panda$core$Error**) (param0->$data + 0);
panda$core$Error* $tmp88 = *$tmp87;
*(&local1) = ((panda$core$Error*) NULL);
panda$core$Error* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local1) = $tmp88;
// line 60
panda$core$Error* $tmp90 = *(&local1);
panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s92, ((panda$core$Object*) $tmp90));
panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s94);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
panda$core$Error* $tmp95 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing e
*(&local1) = ((panda$core$Error*) NULL);
return $tmp93;
block1:;
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp98 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block5:;
abort(); // unreachable

}
void panda$core$Maybe$cleanup(panda$core$Maybe* param0) {

panda$core$Object* local0 = NULL;
panda$core$Error* local1 = NULL;
// line 7
panda$core$Int64* $tmp101 = &param0->$rawValue;
panda$core$Int64 $tmp102 = *$tmp101;
panda$core$Int64 $tmp103 = (panda$core$Int64) {0};
panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp102, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block2; else goto block3;
block2:;
panda$core$Object** $tmp106 = (panda$core$Object**) (param0->$data + 0);
panda$core$Object* $tmp107 = *$tmp106;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp108);
panda$core$Panda$ref$panda$core$Object$Q($tmp107);
*(&local0) = $tmp107;
// line 1
panda$core$Object* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp109);
panda$core$Object* $tmp110 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp110);
// unreffing _f0
*(&local0) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp111 = (panda$core$Int64) {1};
panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp102, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block1;
block4:;
panda$core$Error** $tmp114 = (panda$core$Error**) (param0->$data + 0);
panda$core$Error* $tmp115 = *$tmp114;
*(&local1) = ((panda$core$Error*) NULL);
panda$core$Error* $tmp116 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
*(&local1) = $tmp115;
// line 1
panda$core$Error* $tmp117 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
panda$core$Error* $tmp118 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing _f0
*(&local1) = ((panda$core$Error*) NULL);
goto block1;
block1:;
return;

}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T(panda$core$Maybe* param0, panda$core$Int64 param1, panda$core$Object* param2) {

// line 7
panda$core$Int64* $tmp119 = &param0->$rawValue;
*$tmp119 = param1;
// line 7
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp120 = (panda$core$Object**) (param0->$data + 0);
*$tmp120 = param2;
return;

}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Error(panda$core$Maybe* param0, panda$core$Int64 param1, panda$core$Error* param2) {

// line 7
panda$core$Int64* $tmp121 = &param0->$rawValue;
*$tmp121 = param1;
// line 7
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$Error** $tmp122 = (panda$core$Error**) (param0->$data + 0);
*$tmp122 = param2;
return;

}






