#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/IR/Value.h"
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
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 6021674251887115223, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 112, 1665585413087735603, NULL };

panda$core$String* org$pandalanguage$pandac$Compiler$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Variable* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
// line 147
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$String* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp8;
org$pandalanguage$pandac$IR$Block$ID* $tmp10 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp11 = *$tmp10;
*(&local1) = $tmp11;
org$pandalanguage$pandac$IR$Block$ID* $tmp12 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp13 = *$tmp12;
*(&local2) = $tmp13;
// line 149
panda$core$String* $tmp14 = *(&local0);
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// line 150
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($38:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($34:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($31:panda.core.String)
panda$core$String* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing label
*(&local0) = ((panda$core$String*) NULL);
return $tmp30;
block5:;
// line 152
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($79:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($75:panda.core.Object)
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
// line 155
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s48));
return &$s49;
block7:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {2};
panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Variable** $tmp53 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp54 = *$tmp53;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$Variable* $tmp55 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local3) = $tmp54;
// line 158
org$pandalanguage$pandac$Variable* $tmp56 = *(&local3);
panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s58, ((panda$core$Object*) $tmp56));
panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s60);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($133:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($132:panda.core.String)
org$pandalanguage$pandac$Variable* $tmp61 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
return $tmp59;
block9:;
panda$core$Int64 $tmp62 = (panda$core$Int64) {3};
panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp62);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block10; else goto block1;
block10:;
org$pandalanguage$pandac$IR$Value** $tmp65 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp66 = *$tmp65;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$IR$Value* $tmp67 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 161
org$pandalanguage$pandac$IR$Value* $tmp68 = *(&local4);
panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s70, ((panda$core$Object*) $tmp68));
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, &$s72);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($164:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp73 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing v
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp71;
block1:;
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(false);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {146};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block11:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$cleanup(org$pandalanguage$pandac$Compiler$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Variable* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
// line 139
panda$core$Int64* $tmp79 = &param0->$rawValue;
panda$core$Int64 $tmp80 = *$tmp79;
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block2; else goto block3;
block2:;
panda$core$String** $tmp84 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp85 = *$tmp84;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$String* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local0) = $tmp85;
org$pandalanguage$pandac$IR$Block$ID* $tmp87 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp88 = *$tmp87;
*(&local1) = $tmp88;
org$pandalanguage$pandac$IR$Block$ID* $tmp89 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp90 = *$tmp89;
*(&local2) = $tmp90;
// line 1
panda$core$String* $tmp91 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$String* $tmp92 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {1};
panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp93);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {2};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Variable** $tmp99 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp100 = *$tmp99;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
org$pandalanguage$pandac$Variable* $tmp101 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
*(&local3) = $tmp100;
// line 1
org$pandalanguage$pandac$Variable* $tmp102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
org$pandalanguage$pandac$Variable* $tmp103 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing _f0
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp104 = (panda$core$Int64) {3};
panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp80, $tmp104);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$IR$Value** $tmp107 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp108 = *$tmp107;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
org$pandalanguage$pandac$IR$Value* $tmp109 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
*(&local4) = $tmp108;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp110 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
org$pandalanguage$pandac$IR$Value* $tmp111 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing _f0
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block1:;
// line 139
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, panda$core$String* param2, org$pandalanguage$pandac$IR$Block$ID param3, org$pandalanguage$pandac$IR$Block$ID param4) {

// line 139
panda$core$Int64* $tmp112 = &param0->$rawValue;
*$tmp112 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp113 = (panda$core$String**) (param0->$data + 0);
*$tmp113 = param2;
// line 139
org$pandalanguage$pandac$IR$Block$ID* $tmp114 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
*$tmp114 = param3;
// line 139
org$pandalanguage$pandac$IR$Block$ID* $tmp115 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp115 = param4;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1) {

// line 139
panda$core$Int64* $tmp116 = &param0->$rawValue;
*$tmp116 = param1;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Variable* param2) {

// line 139
panda$core$Int64* $tmp117 = &param0->$rawValue;
*$tmp117 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Variable** $tmp118 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
*$tmp118 = param2;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 139
panda$core$Int64* $tmp119 = &param0->$rawValue;
*$tmp119 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp120 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp120 = param2;
return;

}

