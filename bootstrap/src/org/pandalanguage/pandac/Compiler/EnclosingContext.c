#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$EnclosingContext$class_type org$pandalanguage$pandac$Compiler$EnclosingContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Compiler$EnclosingContext$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$EnclosingContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 50, 7717691438090595462, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, 8267104880898240044, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 112, 1665585413087735603, NULL };

panda$core$String* org$pandalanguage$pandac$Compiler$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Variable* local3 = NULL;
// line 117
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
panda$core$String** $tmp7 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp8 = *$tmp7;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
*(&local0) = $tmp8;
org$pandalanguage$pandac$IR$Block$ID* $tmp10 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp11 = *$tmp10;
*(&local1) = $tmp11;
org$pandalanguage$pandac$IR$Block$ID* $tmp12 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp13 = *$tmp12;
*(&local2) = $tmp13;
// line 119
panda$core$String* $tmp14 = *(&local0);
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 120
panda$core$String* $tmp17 = *(&local0);
panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s19, $tmp17);
panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s21);
org$pandalanguage$pandac$IR$Block$ID $tmp22 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp23;
$tmp23 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp23->value = $tmp22;
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp20, ((panda$core$Object*) $tmp23));
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s26);
org$pandalanguage$pandac$IR$Block$ID $tmp27 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp28;
$tmp28 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp28->value = $tmp27;
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp25, ((panda$core$Object*) $tmp28));
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, &$s31);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$String* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing label
*(&local0) = ((panda$core$String*) NULL);
return $tmp30;
block5:;
// line 122
org$pandalanguage$pandac$IR$Block$ID $tmp33 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp34;
$tmp34 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp34->value = $tmp33;
panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s36, ((panda$core$Object*) $tmp34));
panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, &$s38);
org$pandalanguage$pandac$IR$Block$ID $tmp39 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp40;
$tmp40 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp40->value = $tmp39;
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp37, ((panda$core$Object*) $tmp40));
panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s43);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing label
*(&local0) = ((panda$core$String*) NULL);
return $tmp42;
block3:;
panda$core$Int64 $tmp45 = (panda$core$Int64) {1};
panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block6:;
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s48));
return &$s49;
block7:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {2};
panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$Variable** $tmp53 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp54 = *$tmp53;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
org$pandalanguage$pandac$Variable* $tmp55 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
*(&local3) = $tmp54;
// line 128
org$pandalanguage$pandac$Variable* $tmp56 = *(&local3);
panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s58, ((panda$core$Object*) $tmp56));
panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s60);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$Variable* $tmp61 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
return $tmp59;
block1:;
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit(false);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp64 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block9:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$cleanup(org$pandalanguage$pandac$Compiler$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Variable* local3 = NULL;
// line 110
panda$core$Int64* $tmp67 = &param0->$rawValue;
panda$core$Int64 $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp68, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block2; else goto block3;
block2:;
panda$core$String** $tmp72 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp73 = *$tmp72;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp74 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local0) = $tmp73;
org$pandalanguage$pandac$IR$Block$ID* $tmp75 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp76 = *$tmp75;
*(&local1) = $tmp76;
org$pandalanguage$pandac$IR$Block$ID* $tmp77 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp78 = *$tmp77;
*(&local2) = $tmp78;
// line 1
panda$core$String* $tmp79 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$String* $tmp80 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {1};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp68, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp84 = (panda$core$Int64) {2};
panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp68, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block1;
block6:;
org$pandalanguage$pandac$Variable** $tmp87 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp88 = *$tmp87;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
org$pandalanguage$pandac$Variable* $tmp89 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local3) = $tmp88;
// line 1
org$pandalanguage$pandac$Variable* $tmp90 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
org$pandalanguage$pandac$Variable* $tmp91 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing _f0
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, panda$core$String* param2, org$pandalanguage$pandac$IR$Block$ID param3, org$pandalanguage$pandac$IR$Block$ID param4) {

// line 110
panda$core$Int64* $tmp92 = &param0->$rawValue;
*$tmp92 = param1;
// line 110
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp93 = (panda$core$String**) (param0->$data + 0);
*$tmp93 = param2;
// line 110
org$pandalanguage$pandac$IR$Block$ID* $tmp94 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
*$tmp94 = param3;
// line 110
org$pandalanguage$pandac$IR$Block$ID* $tmp95 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp95 = param4;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1) {

// line 110
panda$core$Int64* $tmp96 = &param0->$rawValue;
*$tmp96 = param1;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Variable* param2) {

// line 110
panda$core$Int64* $tmp97 = &param0->$rawValue;
*$tmp97 = param1;
// line 110
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Variable** $tmp98 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
*$tmp98 = param2;
return;

}

