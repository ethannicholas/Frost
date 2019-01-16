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
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 19216957979, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, 8267104880898240044, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 6021674251887115223, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 112, 1665585413087735603, NULL };

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
panda$core$Bit $tmp18 = panda$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {150};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s24, $tmp17);
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s26);
org$pandalanguage$pandac$IR$Block$ID $tmp27 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp28;
$tmp28 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp28->value = $tmp27;
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp25, ((panda$core$Object*) $tmp28));
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, &$s31);
org$pandalanguage$pandac$IR$Block$ID $tmp32 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp33;
$tmp33 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp33->value = $tmp32;
panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp30, ((panda$core$Object*) $tmp33));
panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s36);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($45:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($41:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($38:panda.core.String)
panda$core$String* $tmp37 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing label
*(&local0) = ((panda$core$String*) NULL);
return $tmp35;
block5:;
// line 152
org$pandalanguage$pandac$IR$Block$ID $tmp38 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp39;
$tmp39 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp39->value = $tmp38;
panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s41, ((panda$core$Object*) $tmp39));
panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s43);
org$pandalanguage$pandac$IR$Block$ID $tmp44 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp45;
$tmp45 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp45->value = $tmp44;
panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp42, ((panda$core$Object*) $tmp45));
panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s48);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($88:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($86:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($82:panda.core.Object)
panda$core$String* $tmp49 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing label
*(&local0) = ((panda$core$String*) NULL);
return $tmp47;
block3:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {1};
panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block8; else goto block9;
block8:;
// line 155
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s53));
return &$s54;
block9:;
panda$core$Int64 $tmp55 = (panda$core$Int64) {2};
panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Variable** $tmp58 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp59 = *$tmp58;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$Variable* $tmp60 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local3) = $tmp59;
// line 158
org$pandalanguage$pandac$Variable* $tmp61 = *(&local3);
panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s63, ((panda$core$Object*) $tmp61));
panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s65);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($140:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($139:panda.core.String)
org$pandalanguage$pandac$Variable* $tmp66 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing v
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
return $tmp64;
block11:;
panda$core$Int64 $tmp67 = (panda$core$Int64) {3};
panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block1;
block12:;
org$pandalanguage$pandac$IR$Value** $tmp70 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp71 = *$tmp70;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
org$pandalanguage$pandac$IR$Value* $tmp72 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local4) = $tmp71;
// line 161
org$pandalanguage$pandac$IR$Value* $tmp73 = *(&local4);
panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s75, ((panda$core$Object*) $tmp73));
panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s77);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($171:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp78 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing v
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp76;
block1:;
panda$core$Bit $tmp79 = panda$core$Bit$init$builtin_bit(false);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {146};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block13:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$cleanup(org$pandalanguage$pandac$Compiler$EnclosingContext* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$Variable* local3 = NULL;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
// line 139
panda$core$Int64* $tmp84 = &param0->$rawValue;
panda$core$Int64 $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {0};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block2; else goto block3;
block2:;
panda$core$String** $tmp89 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp90 = *$tmp89;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$String* $tmp91 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local0) = $tmp90;
org$pandalanguage$pandac$IR$Block$ID* $tmp92 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp93 = *$tmp92;
*(&local1) = $tmp93;
org$pandalanguage$pandac$IR$Block$ID* $tmp94 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp95 = *$tmp94;
*(&local2) = $tmp95;
// line 1
panda$core$String* $tmp96 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$core$String* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp98 = (panda$core$Int64) {1};
panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, $tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block4; else goto block5;
block4:;
goto block1;
block5:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {2};
panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Variable** $tmp104 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp105 = *$tmp104;
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
org$pandalanguage$pandac$Variable* $tmp106 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
*(&local3) = $tmp105;
// line 1
org$pandalanguage$pandac$Variable* $tmp107 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
org$pandalanguage$pandac$Variable* $tmp108 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing _f0
*(&local3) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp109 = (panda$core$Int64) {3};
panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, $tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block8; else goto block1;
block8:;
org$pandalanguage$pandac$IR$Value** $tmp112 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp113 = *$tmp112;
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
org$pandalanguage$pandac$IR$Value* $tmp114 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
*(&local4) = $tmp113;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp115 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
org$pandalanguage$pandac$IR$Value* $tmp116 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
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
panda$core$Int64* $tmp117 = &param0->$rawValue;
*$tmp117 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp118 = (panda$core$String**) (param0->$data + 0);
*$tmp118 = param2;
// line 139
org$pandalanguage$pandac$IR$Block$ID* $tmp119 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 8);
*$tmp119 = param3;
// line 139
org$pandalanguage$pandac$IR$Block$ID* $tmp120 = (org$pandalanguage$pandac$IR$Block$ID*) (param0->$data + 16);
*$tmp120 = param4;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1) {

// line 139
panda$core$Int64* $tmp121 = &param0->$rawValue;
*$tmp121 = param1;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Variable* param2) {

// line 139
panda$core$Int64* $tmp122 = &param0->$rawValue;
*$tmp122 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Variable** $tmp123 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
*$tmp123 = param2;
return;

}
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$EnclosingContext* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2) {

// line 139
panda$core$Int64* $tmp124 = &param0->$rawValue;
*$tmp124 = param1;
// line 139
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp125 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp125 = param2;
return;

}

