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
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, -7735230488289505423, NULL };

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
// line 291
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = panda$core$Int64$init$builtin_int64(0);
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 293
org$pandalanguage$pandac$Type* $tmp7 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
return $tmp7;
block3:;
panda$core$Int64 $tmp8 = panda$core$Int64$init$builtin_int64(1);
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
// line 295
org$pandalanguage$pandac$Type* $tmp16 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
org$pandalanguage$pandac$Type* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing type
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp16;
block5:;
panda$core$Int64 $tmp18 = panda$core$Int64$init$builtin_int64(2);
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
// line 297
org$pandalanguage$pandac$Type* $tmp26 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Type* $tmp27 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp26;
block7:;
panda$core$Int64 $tmp28 = panda$core$Int64$init$builtin_int64(3);
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
// line 299
org$pandalanguage$pandac$Type* $tmp36 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
org$pandalanguage$pandac$Type* $tmp37 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing type
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp36;
block9:;
panda$core$Int64 $tmp38 = panda$core$Int64$init$builtin_int64(4);
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
// line 301
org$pandalanguage$pandac$Type* $tmp44 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
org$pandalanguage$pandac$Type* $tmp45 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp44;
block11:;
panda$core$Int64 $tmp46 = panda$core$Int64$init$builtin_int64(5);
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
// line 303
org$pandalanguage$pandac$Type* $tmp54 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$Type* $tmp55 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp54;
block13:;
panda$core$Int64 $tmp56 = panda$core$Int64$init$builtin_int64(6);
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
// line 305
org$pandalanguage$pandac$Type* $tmp64 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$Type* $tmp65 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing type
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp64;
block15:;
panda$core$Int64 $tmp66 = panda$core$Int64$init$builtin_int64(7);
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
// line 307
org$pandalanguage$pandac$Type* $tmp74 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
org$pandalanguage$pandac$Type* $tmp75 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing type
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp74;
block17:;
panda$core$Int64 $tmp76 = panda$core$Int64$init$builtin_int64(8);
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
// line 309
org$pandalanguage$pandac$Type* $tmp79 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
return $tmp79;
block19:;
panda$core$Int64 $tmp80 = panda$core$Int64$init$builtin_int64(9);
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
// line 312
org$pandalanguage$pandac$MethodDecl* $tmp88 = *(&local7);
org$pandalanguage$pandac$Type* $tmp89 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type($tmp88);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
org$pandalanguage$pandac$MethodDecl* $tmp90 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing m
*(&local7) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp89;
block21:;
panda$core$Int64 $tmp91 = panda$core$Int64$init$builtin_int64(10);
panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block22; else goto block23;
block22:;
// line 314
org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
return $tmp94;
block23:;
panda$core$Int64 $tmp95 = panda$core$Int64$init$builtin_int64(11);
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
// line 316
org$pandalanguage$pandac$Type* $tmp101 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$Type* $tmp102 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp101;
block25:;
panda$core$Int64 $tmp103 = panda$core$Int64$init$builtin_int64(12);
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
// line 318
org$pandalanguage$pandac$Type* $tmp109 = *(&local9);
org$pandalanguage$pandac$Type* $tmp110 = org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
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
panda$core$Int64 $tmp114 = panda$core$Int64$init$builtin_int64(290);
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
// line 324
panda$core$Int64* $tmp117 = &param0->$rawValue;
panda$core$Int64 $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = panda$core$Int64$init$builtin_int64(0);
panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp122 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp123 = *$tmp122;
*(&local0) = $tmp123;
// line 326
panda$core$Bit $tmp124 = *(&local0);
panda$core$String* $tmp125 = panda$core$Bit$convert$R$panda$core$String($tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
return $tmp125;
block3:;
panda$core$Int64 $tmp126 = panda$core$Int64$init$builtin_int64(1);
panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp129 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp130 = *$tmp129;
*(&local1) = $tmp130;
org$pandalanguage$pandac$Type** $tmp131 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp132 = *$tmp131;
// line 328
panda$core$UInt64 $tmp133 = *(&local1);
panda$core$String* $tmp134 = panda$core$UInt64$convert$R$panda$core$String($tmp133);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
return $tmp134;
block5:;
panda$core$Int64 $tmp135 = panda$core$Int64$init$builtin_int64(2);
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
// line 330
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
org$pandalanguage$pandac$Type* $tmp153 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp151;
block7:;
panda$core$Int64 $tmp154 = panda$core$Int64$init$builtin_int64(4);
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
// line 332
org$pandalanguage$pandac$Type* $tmp160 = *(&local4);
panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s162, ((panda$core$Object*) $tmp160));
panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s164);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
org$pandalanguage$pandac$Type* $tmp165 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing type
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp163;
block9:;
panda$core$Int64 $tmp166 = panda$core$Int64$init$builtin_int64(3);
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
// line 334
org$pandalanguage$pandac$MethodDecl* $tmp174 = *(&local5);
panda$core$String* $tmp175 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String($tmp174);
panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, $tmp175);
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
org$pandalanguage$pandac$MethodDecl* $tmp180 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing m
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return $tmp178;
block11:;
panda$core$Int64 $tmp181 = panda$core$Int64$init$builtin_int64(5);
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
// line 336
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
org$pandalanguage$pandac$Type* $tmp199 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing type
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp197;
block13:;
panda$core$Int64 $tmp200 = panda$core$Int64$init$builtin_int64(6);
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp203 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp204 = *$tmp203;
*(&local8) = $tmp204;
org$pandalanguage$pandac$Type** $tmp205 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp206 = *$tmp205;
// line 338
panda$core$Real64 $tmp207 = *(&local8);
panda$core$String* $tmp208 = panda$core$Real64$convert$R$panda$core$String($tmp207);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
return $tmp208;
block15:;
panda$core$Int64 $tmp209 = panda$core$Int64$init$builtin_int64(7);
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
// line 340
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
org$pandalanguage$pandac$Type* $tmp227 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp225;
block17:;
panda$core$Int64 $tmp228 = panda$core$Int64$init$builtin_int64(8);
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
// line 342
panda$core$String* $tmp234 = *(&local11);
panda$core$String* $tmp235 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp234, &$s236);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$String* $tmp237 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing s
*(&local11) = ((panda$core$String*) NULL);
return $tmp235;
block19:;
panda$core$Int64 $tmp238 = panda$core$Int64$init$builtin_int64(9);
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
// line 345
org$pandalanguage$pandac$IR$Value* $tmp247 = *(&local12);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block22; else goto block23;
block22:;
// line 346
org$pandalanguage$pandac$IR$Value* $tmp250 = *(&local12);
panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s252, ((panda$core$Object*) $tmp250));
panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s254);
org$pandalanguage$pandac$MethodDecl* $tmp255 = *(&local13);
panda$core$String* $tmp256 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String($tmp255);
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, $tmp256);
panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s259);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
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
// line 348
org$pandalanguage$pandac$MethodDecl* $tmp262 = *(&local13);
panda$core$String* $tmp263 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String($tmp262);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
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
panda$core$Int64 $tmp266 = panda$core$Int64$init$builtin_int64(10);
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
// line 350
org$pandalanguage$pandac$IR$Value* $tmp275 = *(&local14);
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block26; else goto block27;
block26:;
// line 351
org$pandalanguage$pandac$IR$Value* $tmp278 = *(&local14);
panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s280, ((panda$core$Object*) $tmp278));
panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s282);
panda$collections$ImmutableArray* $tmp283 = *(&local15);
panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp281, ((panda$core$Object*) $tmp283));
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s286);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
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
// line 353
panda$collections$ImmutableArray* $tmp289 = *(&local15);
panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s291, ((panda$core$Object*) $tmp289));
panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s293);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
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
panda$core$Int64 $tmp296 = panda$core$Int64$init$builtin_int64(11);
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
// line 355
org$pandalanguage$pandac$Type* $tmp302 = *(&local16);
panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s304, ((panda$core$Object*) $tmp302));
panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s306);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
org$pandalanguage$pandac$Type* $tmp307 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing type
*(&local16) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp305;
block29:;
panda$core$Int64 $tmp308 = panda$core$Int64$init$builtin_int64(12);
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
// line 357
org$pandalanguage$pandac$Type* $tmp314 = *(&local17);
panda$core$String* $tmp315 = org$pandalanguage$pandac$Type$convert$R$panda$core$String($tmp314);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
org$pandalanguage$pandac$Type* $tmp316 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp315;
block1:;
panda$core$Bit $tmp317 = panda$core$Bit$init$builtin_bit(false);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp319 = panda$core$Int64$init$builtin_int64(323);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block31:;
abort(); // unreachable

}
void org$pandalanguage$pandac$IR$Value$cleanup(org$pandalanguage$pandac$IR$Value* param0) {

return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 272
panda$core$Int64* $tmp322 = &param0->$rawValue;
*$tmp322 = param1;
// line 272
panda$core$Bit* $tmp323 = (panda$core$Bit*) (param0->$data + 0);
*$tmp323 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$UInt64 param2, org$pandalanguage$pandac$Type* param3) {

// line 272
panda$core$Int64* $tmp324 = &param0->$rawValue;
*$tmp324 = param1;
// line 272
panda$core$UInt64* $tmp325 = (panda$core$UInt64*) (param0->$data + 0);
*$tmp325 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp326 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp326 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Int64 param2, org$pandalanguage$pandac$Type* param3) {

// line 272
panda$core$Int64* $tmp327 = &param0->$rawValue;
*$tmp327 = param1;
// line 272
panda$core$Int64* $tmp328 = (panda$core$Int64*) (param0->$data + 0);
*$tmp328 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp329 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp329 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$MethodDecl* param2, org$pandalanguage$pandac$Type* param3) {

// line 272
panda$core$Int64* $tmp330 = &param0->$rawValue;
*$tmp330 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$MethodDecl** $tmp331 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
*$tmp331 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp332 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp332 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Type* param2) {

// line 272
panda$core$Int64* $tmp333 = &param0->$rawValue;
*$tmp333 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp334 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
*$tmp334 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Real64 param2, org$pandalanguage$pandac$Type* param3) {

// line 272
panda$core$Int64* $tmp335 = &param0->$rawValue;
*$tmp335 = param1;
// line 272
panda$core$Real64* $tmp336 = (panda$core$Real64*) (param0->$data + 0);
*$tmp336 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp337 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp337 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Statement$ID param2, org$pandalanguage$pandac$Type* param3) {

// line 272
panda$core$Int64* $tmp338 = &param0->$rawValue;
*$tmp338 = param1;
// line 272
org$pandalanguage$pandac$IR$Statement$ID* $tmp339 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
*$tmp339 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp340 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp340 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 272
panda$core$Int64* $tmp341 = &param0->$rawValue;
*$tmp341 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp342 = (panda$core$String**) (param0->$data + 0);
*$tmp342 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 272
panda$core$Int64* $tmp343 = &param0->$rawValue;
*$tmp343 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp344 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp344 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp345 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp345 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ImmutableArray* param3) {

// line 272
panda$core$Int64* $tmp346 = &param0->$rawValue;
*$tmp346 = param1;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp347 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp347 = param2;
// line 272
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp348 = (panda$collections$ImmutableArray**) (param0->$data + 8);
*$tmp348 = param3;
return;

}






