#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IR$Value$class_type org$pandalanguage$pandac$IR$Value$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IR$Value$convert$R$panda$core$String, org$pandalanguage$pandac$IR$Value$cleanup, org$pandalanguage$pandac$IR$Value$type$R$org$pandalanguage$pandac$Type} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 33, -8055294518500929116, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x74\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 104, -6642863043510927755, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, -7735230488289505423, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IR$Value$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$Type* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$MethodDecl* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
org$pandalanguage$pandac$Type* local9 = NULL;
// line 327
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 329
org$pandalanguage$pandac$Type* $tmp7 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($8:org.pandalanguage.pandac.Type)
return $tmp7;
block3:;
panda$core$Int64 $tmp8 = (panda$core$Int64) {1};
panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp11 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp12 = *$tmp11;
org$pandalanguage$pandac$Type** $tmp13 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp14 = *$tmp13;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp15 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
*(&local0) = $tmp14;
// line 332
org$pandalanguage$pandac$Type* $tmp16 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
org$pandalanguage$pandac$Type* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp16;
block5:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {2};
panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp21 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp22 = *$tmp21;
org$pandalanguage$pandac$Type** $tmp23 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp24 = *$tmp23;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp25 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local1) = $tmp24;
// line 335
org$pandalanguage$pandac$Type* $tmp26 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Type* $tmp27 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp26;
block7:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {3};
panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp31 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp32 = *$tmp31;
org$pandalanguage$pandac$Type** $tmp33 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp34 = *$tmp33;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp35 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local2) = $tmp34;
// line 338
org$pandalanguage$pandac$Type* $tmp36 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
org$pandalanguage$pandac$Type* $tmp37 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing type
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp36;
block9:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {4};
panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type** $tmp41 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp42 = *$tmp41;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp43 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
*(&local3) = $tmp42;
// line 341
org$pandalanguage$pandac$Type* $tmp44 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
org$pandalanguage$pandac$Type* $tmp45 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp44;
block11:;
panda$core$Int64 $tmp46 = (panda$core$Int64) {5};
panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp49 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp50 = *$tmp49;
org$pandalanguage$pandac$Type** $tmp51 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp52 = *$tmp51;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp53 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
*(&local4) = $tmp52;
// line 344
org$pandalanguage$pandac$Type* $tmp54 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$Type* $tmp55 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp54;
block13:;
panda$core$Int64 $tmp56 = (panda$core$Int64) {6};
panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp59 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp60 = *$tmp59;
org$pandalanguage$pandac$Type** $tmp61 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp62 = *$tmp61;
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp63 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
*(&local5) = $tmp62;
// line 347
org$pandalanguage$pandac$Type* $tmp64 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$Type* $tmp65 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing type
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp64;
block15:;
panda$core$Int64 $tmp66 = (panda$core$Int64) {7};
panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp69 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp70 = *$tmp69;
org$pandalanguage$pandac$Type** $tmp71 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp72 = *$tmp71;
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp73 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local6) = $tmp72;
// line 350
org$pandalanguage$pandac$Type* $tmp74 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
org$pandalanguage$pandac$Type* $tmp75 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing type
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp74;
block17:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {8};
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
// line 353
org$pandalanguage$pandac$Type* $tmp79 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($193:org.pandalanguage.pandac.Type)
return $tmp79;
block19:;
panda$core$Int64 $tmp80 = (panda$core$Int64) {9};
panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$IR$Value** $tmp83 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp84 = *$tmp83;
org$pandalanguage$pandac$MethodDecl** $tmp85 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp86 = *$tmp85;
*(&local7) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp87 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local7) = $tmp86;
// line 356
org$pandalanguage$pandac$MethodDecl* $tmp88 = *(&local7);
org$pandalanguage$pandac$Type* $tmp89 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type($tmp88);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($217:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$MethodDecl* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing m
*(&local7) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp89;
block21:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {10};
panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block22; else goto block23;
block22:;
// line 359
org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($234:org.pandalanguage.pandac.Type)
return $tmp94;
block23:;
panda$core$Int64 $tmp95 = (panda$core$Int64) {11};
panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type** $tmp98 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp99 = *$tmp98;
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp100 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
*(&local8) = $tmp99;
// line 362
org$pandalanguage$pandac$Type* $tmp101 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$Type* $tmp102 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp101;
block25:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {12};
panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block26; else goto block1;
block26:;
org$pandalanguage$pandac$Type** $tmp106 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp107 = *$tmp106;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp108 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
*(&local9) = $tmp107;
// line 365
org$pandalanguage$pandac$Type* $tmp109 = *(&local9);
org$pandalanguage$pandac$Type* $tmp110 = org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($279:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp111 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing type
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp110;
block1:;
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit(false);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp114 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block27:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$IR$Value$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Value* param0) {

panda$core$Bit local0;
panda$core$UInt64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
panda$core$Int64 local6;
org$pandalanguage$pandac$Type* local7 = NULL;
panda$core$Real64 local8;
org$pandalanguage$pandac$IR$Statement$ID local9;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$String* local11 = NULL;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$MethodDecl* local13 = NULL;
org$pandalanguage$pandac$IR$Value* local14 = NULL;
panda$collections$ImmutableArray* local15 = NULL;
org$pandalanguage$pandac$Type* local16 = NULL;
org$pandalanguage$pandac$Type* local17 = NULL;
// line 372
panda$core$Int64* $tmp117 = &param0->$rawValue;
panda$core$Int64 $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = (panda$core$Int64) {0};
panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp122 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp123 = *$tmp122;
*(&local0) = $tmp123;
// line 374
panda$core$Bit $tmp124 = *(&local0);
panda$core$String* $tmp125 = panda$core$Bit$convert$R$panda$core$String($tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($12:panda.core.String)
return $tmp125;
block3:;
panda$core$Int64 $tmp126 = (panda$core$Int64) {1};
panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp129 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp130 = *$tmp129;
*(&local1) = $tmp130;
org$pandalanguage$pandac$Type** $tmp131 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp132 = *$tmp131;
// line 377
panda$core$UInt64 $tmp133 = *(&local1);
panda$core$String* $tmp134 = panda$core$UInt64$convert$R$panda$core$String($tmp133);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($30:panda.core.String)
return $tmp134;
block5:;
panda$core$Int64 $tmp135 = (panda$core$Int64) {2};
panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp138 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp139 = *$tmp138;
*(&local2) = $tmp139;
org$pandalanguage$pandac$Type** $tmp140 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp141 = *$tmp140;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local3) = $tmp141;
// line 380
panda$core$Int64 $tmp143 = *(&local2);
panda$core$Int64$wrapper* $tmp144;
$tmp144 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp144->value = $tmp143;
panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s146, ((panda$core$Object*) $tmp144));
panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s148);
org$pandalanguage$pandac$Type* $tmp149 = *(&local3);
panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp147, ((panda$core$Object*) $tmp149));
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($55:panda.core.Object)
org$pandalanguage$pandac$Type* $tmp153 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp151;
block7:;
panda$core$Int64 $tmp154 = (panda$core$Int64) {4};
panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Type** $tmp157 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp158 = *$tmp157;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp159 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
*(&local4) = $tmp158;
// line 383
org$pandalanguage$pandac$Type* $tmp160 = *(&local4);
panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s162, ((panda$core$Object*) $tmp160));
panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s164);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($102:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($101:panda.core.String)
org$pandalanguage$pandac$Type* $tmp165 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp163;
block9:;
panda$core$Int64 $tmp166 = (panda$core$Int64) {3};
panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$MethodDecl** $tmp169 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp170 = *$tmp169;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp171 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
*(&local5) = $tmp170;
org$pandalanguage$pandac$Type** $tmp172 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp173 = *$tmp172;
// line 386
org$pandalanguage$pandac$MethodDecl* $tmp174 = *(&local5);
panda$core$String* $tmp175 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp174);
panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, $tmp175);
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($136:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($134:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp180 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp178;
block11:;
panda$core$Int64 $tmp181 = (panda$core$Int64) {5};
panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp184 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp185 = *$tmp184;
*(&local6) = $tmp185;
org$pandalanguage$pandac$Type** $tmp186 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp187 = *$tmp186;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp188 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
*(&local7) = $tmp187;
// line 389
panda$core$Int64 $tmp189 = *(&local6);
panda$core$Int64$wrapper* $tmp190;
$tmp190 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp190->value = $tmp189;
panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s192, ((panda$core$Object*) $tmp190));
panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s194);
org$pandalanguage$pandac$Type* $tmp195 = *(&local7);
panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp193, ((panda$core$Object*) $tmp195));
panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s198);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($173:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($172:panda.core.Object)
org$pandalanguage$pandac$Type* $tmp199 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp197;
block13:;
panda$core$Int64 $tmp200 = (panda$core$Int64) {6};
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp203 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp204 = *$tmp203;
*(&local8) = $tmp204;
org$pandalanguage$pandac$Type** $tmp205 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp206 = *$tmp205;
// line 392
panda$core$Real64 $tmp207 = *(&local8);
panda$core$String* $tmp208 = panda$core$Real64$convert$R$panda$core$String($tmp207);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing REF($213:panda.core.String)
return $tmp208;
block15:;
panda$core$Int64 $tmp209 = (panda$core$Int64) {7};
panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp212 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp213 = *$tmp212;
*(&local9) = $tmp213;
org$pandalanguage$pandac$Type** $tmp214 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp215 = *$tmp214;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp216 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
*(&local10) = $tmp215;
// line 395
org$pandalanguage$pandac$IR$Statement$ID $tmp217 = *(&local9);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp218;
$tmp218 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp218->value = $tmp217;
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s220, ((panda$core$Object*) $tmp218));
panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s222);
org$pandalanguage$pandac$Type* $tmp223 = *(&local10);
panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp221, ((panda$core$Object*) $tmp223));
panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s226);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($244:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($243:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing REF($239:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($238:panda.core.Object)
org$pandalanguage$pandac$Type* $tmp227 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp225;
block17:;
panda$core$Int64 $tmp228 = (panda$core$Int64) {8};
panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block18; else goto block19;
block18:;
panda$core$String** $tmp231 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp232 = *$tmp231;
*(&local11) = ((panda$core$String*) NULL);
panda$core$String* $tmp233 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
*(&local11) = $tmp232;
// line 398
panda$core$String* $tmp234 = *(&local11);
panda$core$String* $tmp235 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp234, &$s236);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($283:panda.core.String)
panda$core$String* $tmp237 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing s
*(&local11) = ((panda$core$String*) NULL);
return $tmp235;
block19:;
panda$core$Int64 $tmp238 = (panda$core$Int64) {9};
panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$IR$Value** $tmp241 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp242 = *$tmp241;
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp243 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local12) = $tmp242;
org$pandalanguage$pandac$MethodDecl** $tmp244 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp245 = *$tmp244;
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp246 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
*(&local13) = $tmp245;
// line 401
org$pandalanguage$pandac$IR$Value* $tmp247 = *(&local12);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block22; else goto block23;
block22:;
// line 402
org$pandalanguage$pandac$IR$Value* $tmp250 = *(&local12);
panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s252, ((panda$core$Object*) $tmp250));
panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s254);
org$pandalanguage$pandac$MethodDecl* $tmp255 = *(&local13);
panda$core$String* $tmp256 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp255);
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, $tmp256);
panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s259);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($331:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($330:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing REF($327:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing REF($326:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp260 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp261 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing target
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp258;
block23:;
// line 404
org$pandalanguage$pandac$MethodDecl* $tmp262 = *(&local13);
panda$core$String* $tmp263 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp262);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($362:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp264 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp265 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing target
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp263;
block21:;
panda$core$Int64 $tmp266 = (panda$core$Int64) {10};
panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$IR$Value** $tmp269 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp270 = *$tmp269;
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp271 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local14) = $tmp270;
panda$collections$ImmutableArray** $tmp272 = (panda$collections$ImmutableArray**) (param0->$data + 8);
panda$collections$ImmutableArray* $tmp273 = *$tmp272;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp274 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
*(&local15) = $tmp273;
// line 407
org$pandalanguage$pandac$IR$Value* $tmp275 = *(&local14);
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block26; else goto block27;
block26:;
// line 408
org$pandalanguage$pandac$IR$Value* $tmp278 = *(&local14);
panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s280, ((panda$core$Object*) $tmp278));
panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s282);
panda$collections$ImmutableArray* $tmp283 = *(&local15);
panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp281, ((panda$core$Object*) $tmp283));
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s286);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($415:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($414:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($411:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($410:panda.core.String)
panda$collections$ImmutableArray* $tmp287 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing m
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp288 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp285;
block27:;
// line 410
panda$collections$ImmutableArray* $tmp289 = *(&local15);
panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s291, ((panda$core$Object*) $tmp289));
panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s293);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing REF($445:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($444:panda.core.String)
panda$collections$ImmutableArray* $tmp294 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing m
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp295 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp292;
block25:;
panda$core$Int64 $tmp296 = (panda$core$Int64) {11};
panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Type** $tmp299 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp300 = *$tmp299;
*(&local16) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp301 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
*(&local16) = $tmp300;
// line 413
org$pandalanguage$pandac$Type* $tmp302 = *(&local16);
panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s304, ((panda$core$Object*) $tmp302));
panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s306);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($482:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($481:panda.core.String)
org$pandalanguage$pandac$Type* $tmp307 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing type
*(&local16) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp305;
block29:;
panda$core$Int64 $tmp308 = (panda$core$Int64) {12};
panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block30; else goto block1;
block30:;
org$pandalanguage$pandac$Type** $tmp311 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp312 = *$tmp311;
*(&local17) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp313 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local17) = $tmp312;
// line 416
org$pandalanguage$pandac$Type* $tmp314 = *(&local17);
panda$core$String* $tmp315 = org$pandalanguage$pandac$Type$convert$R$panda$core$String($tmp314);
panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s317, $tmp315);
panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s319);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing REF($513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($512:panda.core.String)
org$pandalanguage$pandac$Type* $tmp320 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp318;
block1:;
panda$core$Bit $tmp321 = panda$core$Bit$init$builtin_bit(false);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp323 = (panda$core$Int64) {371};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s324, $tmp323, &$s325);
abort(); // unreachable
block31:;
abort(); // unreachable

}
void org$pandalanguage$pandac$IR$Value$cleanup(org$pandalanguage$pandac$IR$Value* param0) {

panda$core$Bit local0;
panda$core$UInt64 local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Int64 local3;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$MethodDecl* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$Type* local7 = NULL;
panda$core$Int64 local8;
org$pandalanguage$pandac$Type* local9 = NULL;
panda$core$Real64 local10;
org$pandalanguage$pandac$Type* local11 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local12;
org$pandalanguage$pandac$Type* local13 = NULL;
panda$core$String* local14 = NULL;
org$pandalanguage$pandac$IR$Value* local15 = NULL;
org$pandalanguage$pandac$MethodDecl* local16 = NULL;
org$pandalanguage$pandac$IR$Value* local17 = NULL;
panda$collections$ImmutableArray* local18 = NULL;
org$pandalanguage$pandac$Type* local19 = NULL;
org$pandalanguage$pandac$Type* local20 = NULL;
// line 308
panda$core$Int64* $tmp326 = &param0->$rawValue;
panda$core$Int64 $tmp327 = *$tmp326;
panda$core$Int64 $tmp328 = (panda$core$Int64) {0};
panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp331 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp332 = *$tmp331;
*(&local0) = $tmp332;
goto block1;
block3:;
panda$core$Int64 $tmp333 = (panda$core$Int64) {1};
panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp333);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp336 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp337 = *$tmp336;
*(&local1) = $tmp337;
org$pandalanguage$pandac$Type** $tmp338 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp339 = *$tmp338;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp340 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
*(&local2) = $tmp339;
// line 1
org$pandalanguage$pandac$Type* $tmp341 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
org$pandalanguage$pandac$Type* $tmp342 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing _f1
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp343 = (panda$core$Int64) {2};
panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp346 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp347 = *$tmp346;
*(&local3) = $tmp347;
org$pandalanguage$pandac$Type** $tmp348 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp349 = *$tmp348;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp350 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
*(&local4) = $tmp349;
// line 1
org$pandalanguage$pandac$Type* $tmp351 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
org$pandalanguage$pandac$Type* $tmp352 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing _f1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp353 = (panda$core$Int64) {3};
panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp356 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp357 = *$tmp356;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp358 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
*(&local5) = $tmp357;
org$pandalanguage$pandac$Type** $tmp359 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp360 = *$tmp359;
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp361 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
*(&local6) = $tmp360;
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp362 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// line 1
org$pandalanguage$pandac$Type* $tmp363 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
org$pandalanguage$pandac$Type* $tmp364 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing _f1
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp365 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing _f0
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp366 = (panda$core$Int64) {4};
panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type** $tmp369 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp370 = *$tmp369;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp371 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
*(&local7) = $tmp370;
// line 1
org$pandalanguage$pandac$Type* $tmp372 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
org$pandalanguage$pandac$Type* $tmp373 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing _f0
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp374 = (panda$core$Int64) {5};
panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp374);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp377 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp378 = *$tmp377;
*(&local8) = $tmp378;
org$pandalanguage$pandac$Type** $tmp379 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp380 = *$tmp379;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp381 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
*(&local9) = $tmp380;
// line 1
org$pandalanguage$pandac$Type* $tmp382 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
org$pandalanguage$pandac$Type* $tmp383 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing _f1
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp384 = (panda$core$Int64) {6};
panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp387 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp388 = *$tmp387;
*(&local10) = $tmp388;
org$pandalanguage$pandac$Type** $tmp389 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp390 = *$tmp389;
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp391 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
*(&local11) = $tmp390;
// line 1
org$pandalanguage$pandac$Type* $tmp392 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
org$pandalanguage$pandac$Type* $tmp393 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing _f1
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp394 = (panda$core$Int64) {7};
panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp394);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp397 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp398 = *$tmp397;
*(&local12) = $tmp398;
org$pandalanguage$pandac$Type** $tmp399 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp400 = *$tmp399;
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp401 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
*(&local13) = $tmp400;
// line 1
org$pandalanguage$pandac$Type* $tmp402 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
org$pandalanguage$pandac$Type* $tmp403 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {8};
panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block18; else goto block19;
block18:;
panda$core$String** $tmp407 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp408 = *$tmp407;
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp409 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local14) = $tmp408;
// line 1
panda$core$String* $tmp410 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$String* $tmp411 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing _f0
*(&local14) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp412 = (panda$core$Int64) {9};
panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp412);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$IR$Value** $tmp415 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp416 = *$tmp415;
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp417 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
*(&local15) = $tmp416;
org$pandalanguage$pandac$MethodDecl** $tmp418 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp419 = *$tmp418;
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp420 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
*(&local16) = $tmp419;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp421 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp422 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
org$pandalanguage$pandac$MethodDecl* $tmp423 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing _f1
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp424 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing _f0
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {10};
panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$IR$Value** $tmp428 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp429 = *$tmp428;
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp430 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
*(&local17) = $tmp429;
panda$collections$ImmutableArray** $tmp431 = (panda$collections$ImmutableArray**) (param0->$data + 8);
panda$collections$ImmutableArray* $tmp432 = *$tmp431;
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp433 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
*(&local18) = $tmp432;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp434 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// line 1
panda$collections$ImmutableArray* $tmp435 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
panda$collections$ImmutableArray* $tmp436 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
// unreffing _f1
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp437 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing _f0
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp438 = (panda$core$Int64) {11};
panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type** $tmp441 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp442 = *$tmp441;
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp443 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
*(&local19) = $tmp442;
// line 1
org$pandalanguage$pandac$Type* $tmp444 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
org$pandalanguage$pandac$Type* $tmp445 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing _f0
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp446 = (panda$core$Int64) {12};
panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp327, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block26; else goto block1;
block26:;
org$pandalanguage$pandac$Type** $tmp449 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp450 = *$tmp449;
*(&local20) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp451 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
*(&local20) = $tmp450;
// line 1
org$pandalanguage$pandac$Type* $tmp452 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
org$pandalanguage$pandac$Type* $tmp453 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// unreffing _f0
*(&local20) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 308
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 308
panda$core$Int64* $tmp454 = &param0->$rawValue;
*$tmp454 = param1;
// line 308
panda$core$Bit* $tmp455 = (panda$core$Bit*) (param0->$data + 0);
*$tmp455 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$UInt64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp456 = &param0->$rawValue;
*$tmp456 = param1;
// line 308
panda$core$UInt64* $tmp457 = (panda$core$UInt64*) (param0->$data + 0);
*$tmp457 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp458 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp458 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Int64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp459 = &param0->$rawValue;
*$tmp459 = param1;
// line 308
panda$core$Int64* $tmp460 = (panda$core$Int64*) (param0->$data + 0);
*$tmp460 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp461 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp461 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$MethodDecl* param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp462 = &param0->$rawValue;
*$tmp462 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$MethodDecl** $tmp463 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
*$tmp463 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp464 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp464 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Type* param2) {

// line 308
panda$core$Int64* $tmp465 = &param0->$rawValue;
*$tmp465 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp466 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
*$tmp466 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Real64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp467 = &param0->$rawValue;
*$tmp467 = param1;
// line 308
panda$core$Real64* $tmp468 = (panda$core$Real64*) (param0->$data + 0);
*$tmp468 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp469 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp469 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Statement$ID param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp470 = &param0->$rawValue;
*$tmp470 = param1;
// line 308
org$pandalanguage$pandac$IR$Statement$ID* $tmp471 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
*$tmp471 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp472 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp472 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 308
panda$core$Int64* $tmp473 = &param0->$rawValue;
*$tmp473 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp474 = (panda$core$String**) (param0->$data + 0);
*$tmp474 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 308
panda$core$Int64* $tmp475 = &param0->$rawValue;
*$tmp475 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp476 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp476 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp477 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp477 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ImmutableArray* param3) {

// line 308
panda$core$Int64* $tmp478 = &param0->$rawValue;
*$tmp478 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp479 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp479 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp480 = (panda$collections$ImmutableArray**) (param0->$data + 8);
*$tmp480 = param3;
return;

}






