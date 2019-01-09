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
#include "org/pandalanguage/pandac/FixedArray.h"


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
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, -7735230488289505423, NULL };

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
// line 329
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 331
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
org$pandalanguage$pandac$Type* $tmp15 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local0) = $tmp14;
// line 334
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
org$pandalanguage$pandac$Type* $tmp25 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local1) = $tmp24;
// line 337
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
org$pandalanguage$pandac$Type* $tmp35 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
*(&local2) = $tmp34;
// line 340
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$Type* $tmp43 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local3) = $tmp42;
// line 343
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
org$pandalanguage$pandac$Type* $tmp53 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
*(&local4) = $tmp52;
// line 346
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
org$pandalanguage$pandac$Type* $tmp63 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
*(&local5) = $tmp62;
// line 349
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
org$pandalanguage$pandac$Type* $tmp73 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local6) = $tmp72;
// line 352
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
// line 355
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
org$pandalanguage$pandac$MethodDecl* $tmp87 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local7) = $tmp86;
// line 358
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
// line 361
org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($234:org.pandalanguage.pandac.Type)
return $tmp94;
block23:;
panda$core$Int64 $tmp95 = (panda$core$Int64) {13};
panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type** $tmp98 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp99 = *$tmp98;
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
org$pandalanguage$pandac$Type* $tmp100 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
*(&local8) = $tmp99;
// line 364
org$pandalanguage$pandac$Type* $tmp101 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$Type* $tmp102 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp101;
block25:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {14};
panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block26; else goto block1;
block26:;
org$pandalanguage$pandac$Type** $tmp106 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp107 = *$tmp106;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
org$pandalanguage$pandac$Type* $tmp108 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
*(&local9) = $tmp107;
// line 367
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
panda$core$Int64 $tmp114 = (panda$core$Int64) {328};
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
org$pandalanguage$pandac$FixedArray* local15 = NULL;
org$pandalanguage$pandac$IR$Value* local16 = NULL;
org$pandalanguage$pandac$MethodDecl* local17 = NULL;
org$pandalanguage$pandac$FixedArray* local18 = NULL;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$FixedArray* local20 = NULL;
org$pandalanguage$pandac$FixedArray* local21 = NULL;
org$pandalanguage$pandac$Type* local22 = NULL;
org$pandalanguage$pandac$Type* local23 = NULL;
// line 374
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
// line 376
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
// line 379
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
org$pandalanguage$pandac$Type* $tmp142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
*(&local3) = $tmp141;
// line 382
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
org$pandalanguage$pandac$Type* $tmp159 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
*(&local4) = $tmp158;
// line 385
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
org$pandalanguage$pandac$MethodDecl* $tmp171 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
*(&local5) = $tmp170;
org$pandalanguage$pandac$Type** $tmp172 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp173 = *$tmp172;
// line 388
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
org$pandalanguage$pandac$Type* $tmp188 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
*(&local7) = $tmp187;
// line 391
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
// line 394
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
org$pandalanguage$pandac$Type* $tmp216 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
*(&local10) = $tmp215;
// line 397
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$String* $tmp233 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
*(&local11) = $tmp232;
// line 400
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
org$pandalanguage$pandac$IR$Value* $tmp243 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local12) = $tmp242;
org$pandalanguage$pandac$MethodDecl** $tmp244 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp245 = *$tmp244;
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
org$pandalanguage$pandac$MethodDecl* $tmp246 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
*(&local13) = $tmp245;
// line 403
org$pandalanguage$pandac$IR$Value* $tmp247 = *(&local12);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block22; else goto block23;
block22:;
// line 404
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
// line 406
org$pandalanguage$pandac$MethodDecl* $tmp262 = *(&local13);
panda$core$String* $tmp263 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp262);
panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp263);
panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s267);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($364:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($363:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($362:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp268 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp269 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing target
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp266;
block21:;
panda$core$Int64 $tmp270 = (panda$core$Int64) {10};
panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$IR$Value** $tmp273 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp274 = *$tmp273;
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
org$pandalanguage$pandac$IR$Value* $tmp275 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
*(&local14) = $tmp274;
org$pandalanguage$pandac$FixedArray** $tmp276 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp277 = *$tmp276;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
org$pandalanguage$pandac$FixedArray* $tmp278 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
*(&local15) = $tmp277;
// line 409
org$pandalanguage$pandac$IR$Value* $tmp279 = *(&local14);
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit($tmp279 != NULL);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block26; else goto block27;
block26:;
// line 410
org$pandalanguage$pandac$IR$Value* $tmp282 = *(&local14);
panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s284, ((panda$core$Object*) $tmp282));
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s286);
org$pandalanguage$pandac$FixedArray* $tmp287 = *(&local15);
panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp285, ((panda$core$Object*) $tmp287));
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s290);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($423:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($422:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($419:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($418:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp291 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp292 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp289;
block27:;
// line 412
org$pandalanguage$pandac$FixedArray* $tmp293 = *(&local15);
panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s295, ((panda$core$Object*) $tmp293));
panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s297);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($453:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($452:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp298 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp299 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp296;
block25:;
panda$core$Int64 $tmp300 = (panda$core$Int64) {11};
panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$IR$Value** $tmp303 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp304 = *$tmp303;
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
org$pandalanguage$pandac$IR$Value* $tmp305 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
*(&local16) = $tmp304;
org$pandalanguage$pandac$MethodDecl** $tmp306 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp307 = *$tmp306;
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
org$pandalanguage$pandac$MethodDecl* $tmp308 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
*(&local17) = $tmp307;
org$pandalanguage$pandac$FixedArray** $tmp309 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp310 = *$tmp309;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
org$pandalanguage$pandac$FixedArray* $tmp311 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
*(&local18) = $tmp310;
// line 415
org$pandalanguage$pandac$IR$Value* $tmp312 = *(&local16);
panda$core$Bit $tmp313 = panda$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block30; else goto block31;
block30:;
// line 416
org$pandalanguage$pandac$IR$Value* $tmp315 = *(&local16);
panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s317, ((panda$core$Object*) $tmp315));
panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s319);
org$pandalanguage$pandac$MethodDecl* $tmp320 = *(&local17);
panda$core$String* $tmp321 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp320);
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, $tmp321);
panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s324);
org$pandalanguage$pandac$FixedArray* $tmp325 = *(&local18);
panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp323, ((panda$core$Object*) $tmp325));
panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s328);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing REF($522:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($521:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing REF($518:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($517:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($516:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
// unreffing REF($513:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp329 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing types
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp330 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp331 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing target
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp327;
block31:;
// line 418
org$pandalanguage$pandac$MethodDecl* $tmp332 = *(&local17);
panda$core$String* $tmp333 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp332);
panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s335, $tmp333);
panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s337);
org$pandalanguage$pandac$FixedArray* $tmp338 = *(&local18);
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp336, ((panda$core$Object*) $tmp338));
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s341);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($570:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($569:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing REF($566:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($565:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($564:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp342 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing types
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp343 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp344 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing target
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp340;
block29:;
panda$core$Int64 $tmp345 = (panda$core$Int64) {12};
panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$IR$Value** $tmp348 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp349 = *$tmp348;
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
org$pandalanguage$pandac$IR$Value* $tmp350 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
*(&local19) = $tmp349;
org$pandalanguage$pandac$FixedArray** $tmp351 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp352 = *$tmp351;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
org$pandalanguage$pandac$FixedArray* $tmp353 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local20) = $tmp352;
org$pandalanguage$pandac$FixedArray** $tmp354 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp355 = *$tmp354;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
org$pandalanguage$pandac$FixedArray* $tmp356 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
*(&local21) = $tmp355;
// line 421
org$pandalanguage$pandac$IR$Value* $tmp357 = *(&local19);
panda$core$Bit $tmp358 = panda$core$Bit$init$builtin_bit($tmp357 != NULL);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block34; else goto block35;
block34:;
// line 422
org$pandalanguage$pandac$IR$Value* $tmp360 = *(&local19);
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s362, ((panda$core$Object*) $tmp360));
panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
org$pandalanguage$pandac$FixedArray* $tmp365 = *(&local20);
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp363, ((panda$core$Object*) $tmp365));
panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s368);
org$pandalanguage$pandac$FixedArray* $tmp369 = *(&local21);
panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp367, ((panda$core$Object*) $tmp369));
panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s372);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($653:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing REF($652:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing REF($649:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing REF($645:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing REF($644:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp373 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing types
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp374 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing m
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp375 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing target
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp371;
block35:;
// line 424
org$pandalanguage$pandac$FixedArray* $tmp376 = *(&local20);
panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s378, ((panda$core$Object*) $tmp376));
panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s380);
org$pandalanguage$pandac$FixedArray* $tmp381 = *(&local21);
panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp379, ((panda$core$Object*) $tmp381));
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s384);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($698:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($697:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing REF($694:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($693:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp385 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing types
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp386 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing m
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp387 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing target
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp383;
block33:;
panda$core$Int64 $tmp388 = (panda$core$Int64) {13};
panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Type** $tmp391 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp392 = *$tmp391;
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
org$pandalanguage$pandac$Type* $tmp393 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
*(&local22) = $tmp392;
// line 427
org$pandalanguage$pandac$Type* $tmp394 = *(&local22);
panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s396, ((panda$core$Object*) $tmp394));
panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s398);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing REF($746:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing REF($745:panda.core.String)
org$pandalanguage$pandac$Type* $tmp399 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing type
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp397;
block37:;
panda$core$Int64 $tmp400 = (panda$core$Int64) {14};
panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block38; else goto block1;
block38:;
org$pandalanguage$pandac$Type** $tmp403 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp404 = *$tmp403;
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
org$pandalanguage$pandac$Type* $tmp405 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
*(&local23) = $tmp404;
// line 430
org$pandalanguage$pandac$Type* $tmp406 = *(&local23);
panda$core$String* $tmp407 = org$pandalanguage$pandac$Type$convert$R$panda$core$String($tmp406);
panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s409, $tmp407);
panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s411);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing REF($778:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing REF($777:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing REF($776:panda.core.String)
org$pandalanguage$pandac$Type* $tmp412 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing type
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp410;
block1:;
panda$core$Bit $tmp413 = panda$core$Bit$init$builtin_bit(false);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp415 = (panda$core$Int64) {373};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s416, $tmp415, &$s417);
abort(); // unreachable
block39:;
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
org$pandalanguage$pandac$FixedArray* local18 = NULL;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$MethodDecl* local20 = NULL;
org$pandalanguage$pandac$FixedArray* local21 = NULL;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$FixedArray* local23 = NULL;
org$pandalanguage$pandac$FixedArray* local24 = NULL;
org$pandalanguage$pandac$Type* local25 = NULL;
org$pandalanguage$pandac$Type* local26 = NULL;
// line 308
panda$core$Int64* $tmp418 = &param0->$rawValue;
panda$core$Int64 $tmp419 = *$tmp418;
panda$core$Int64 $tmp420 = (panda$core$Int64) {0};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp423 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp424 = *$tmp423;
*(&local0) = $tmp424;
goto block1;
block3:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {1};
panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp428 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp429 = *$tmp428;
*(&local1) = $tmp429;
org$pandalanguage$pandac$Type** $tmp430 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp431 = *$tmp430;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
org$pandalanguage$pandac$Type* $tmp432 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
*(&local2) = $tmp431;
// line 1
org$pandalanguage$pandac$Type* $tmp433 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
org$pandalanguage$pandac$Type* $tmp434 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing _f1
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {2};
panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp438 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp439 = *$tmp438;
*(&local3) = $tmp439;
org$pandalanguage$pandac$Type** $tmp440 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp441 = *$tmp440;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
org$pandalanguage$pandac$Type* $tmp442 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
*(&local4) = $tmp441;
// line 1
org$pandalanguage$pandac$Type* $tmp443 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
org$pandalanguage$pandac$Type* $tmp444 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
// unreffing _f1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp445 = (panda$core$Int64) {3};
panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp448 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp449 = *$tmp448;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
org$pandalanguage$pandac$MethodDecl* $tmp450 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
*(&local5) = $tmp449;
org$pandalanguage$pandac$Type** $tmp451 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp452 = *$tmp451;
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
org$pandalanguage$pandac$Type* $tmp453 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
*(&local6) = $tmp452;
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp454 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// line 1
org$pandalanguage$pandac$Type* $tmp455 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
org$pandalanguage$pandac$Type* $tmp456 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing _f1
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp457 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing _f0
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {4};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type** $tmp461 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp462 = *$tmp461;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
org$pandalanguage$pandac$Type* $tmp463 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
*(&local7) = $tmp462;
// line 1
org$pandalanguage$pandac$Type* $tmp464 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
org$pandalanguage$pandac$Type* $tmp465 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing _f0
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp466 = (panda$core$Int64) {5};
panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp469 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp470 = *$tmp469;
*(&local8) = $tmp470;
org$pandalanguage$pandac$Type** $tmp471 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp472 = *$tmp471;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
org$pandalanguage$pandac$Type* $tmp473 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
*(&local9) = $tmp472;
// line 1
org$pandalanguage$pandac$Type* $tmp474 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
org$pandalanguage$pandac$Type* $tmp475 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing _f1
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp476 = (panda$core$Int64) {6};
panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp479 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp480 = *$tmp479;
*(&local10) = $tmp480;
org$pandalanguage$pandac$Type** $tmp481 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp482 = *$tmp481;
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
org$pandalanguage$pandac$Type* $tmp483 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
*(&local11) = $tmp482;
// line 1
org$pandalanguage$pandac$Type* $tmp484 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
org$pandalanguage$pandac$Type* $tmp485 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing _f1
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp486 = (panda$core$Int64) {7};
panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp489 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp490 = *$tmp489;
*(&local12) = $tmp490;
org$pandalanguage$pandac$Type** $tmp491 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp492 = *$tmp491;
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
org$pandalanguage$pandac$Type* $tmp493 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
*(&local13) = $tmp492;
// line 1
org$pandalanguage$pandac$Type* $tmp494 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
org$pandalanguage$pandac$Type* $tmp495 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {8};
panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block18; else goto block19;
block18:;
panda$core$String** $tmp499 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp500 = *$tmp499;
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
panda$core$String* $tmp501 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
*(&local14) = $tmp500;
// line 1
panda$core$String* $tmp502 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
panda$core$String* $tmp503 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
// unreffing _f0
*(&local14) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp504 = (panda$core$Int64) {9};
panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$IR$Value** $tmp507 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp508 = *$tmp507;
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
org$pandalanguage$pandac$IR$Value* $tmp509 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
*(&local15) = $tmp508;
org$pandalanguage$pandac$MethodDecl** $tmp510 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp511 = *$tmp510;
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
org$pandalanguage$pandac$MethodDecl* $tmp512 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
*(&local16) = $tmp511;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp513 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp514 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
org$pandalanguage$pandac$MethodDecl* $tmp515 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing _f1
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp516 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing _f0
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp517 = (panda$core$Int64) {10};
panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$IR$Value** $tmp520 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp521 = *$tmp520;
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
org$pandalanguage$pandac$IR$Value* $tmp522 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
*(&local17) = $tmp521;
org$pandalanguage$pandac$FixedArray** $tmp523 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp524 = *$tmp523;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
org$pandalanguage$pandac$FixedArray* $tmp525 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
*(&local18) = $tmp524;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp526 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp527 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
org$pandalanguage$pandac$FixedArray* $tmp528 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing _f1
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp529 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing _f0
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp530 = (panda$core$Int64) {11};
panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$IR$Value** $tmp533 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp534 = *$tmp533;
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
org$pandalanguage$pandac$IR$Value* $tmp535 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
*(&local19) = $tmp534;
org$pandalanguage$pandac$MethodDecl** $tmp536 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp537 = *$tmp536;
*(&local20) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
org$pandalanguage$pandac$MethodDecl* $tmp538 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
*(&local20) = $tmp537;
org$pandalanguage$pandac$FixedArray** $tmp539 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp540 = *$tmp539;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
org$pandalanguage$pandac$FixedArray* $tmp541 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
*(&local21) = $tmp540;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp542 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp543 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp544 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
org$pandalanguage$pandac$FixedArray* $tmp545 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing _f2
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp546 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing _f1
*(&local20) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp547 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing _f0
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp548 = (panda$core$Int64) {12};
panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$IR$Value** $tmp551 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp552 = *$tmp551;
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
org$pandalanguage$pandac$IR$Value* $tmp553 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
*(&local22) = $tmp552;
org$pandalanguage$pandac$FixedArray** $tmp554 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp555 = *$tmp554;
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
org$pandalanguage$pandac$FixedArray* $tmp556 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
*(&local23) = $tmp555;
org$pandalanguage$pandac$FixedArray** $tmp557 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp558 = *$tmp557;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
org$pandalanguage$pandac$FixedArray* $tmp559 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
*(&local24) = $tmp558;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp560 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp561 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp562 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
org$pandalanguage$pandac$FixedArray* $tmp563 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing _f2
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp564 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp565 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing _f0
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp566 = (panda$core$Int64) {13};
panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Type** $tmp569 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp570 = *$tmp569;
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
org$pandalanguage$pandac$Type* $tmp571 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
*(&local25) = $tmp570;
// line 1
org$pandalanguage$pandac$Type* $tmp572 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
org$pandalanguage$pandac$Type* $tmp573 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing _f0
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp574 = (panda$core$Int64) {14};
panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp419, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block30; else goto block1;
block30:;
org$pandalanguage$pandac$Type** $tmp577 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp578 = *$tmp577;
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
org$pandalanguage$pandac$Type* $tmp579 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
*(&local26) = $tmp578;
// line 1
org$pandalanguage$pandac$Type* $tmp580 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
org$pandalanguage$pandac$Type* $tmp581 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing _f0
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 308
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Bit param2) {

// line 308
panda$core$Int64* $tmp582 = &param0->$rawValue;
*$tmp582 = param1;
// line 308
panda$core$Bit* $tmp583 = (panda$core$Bit*) (param0->$data + 0);
*$tmp583 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$UInt64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp584 = &param0->$rawValue;
*$tmp584 = param1;
// line 308
panda$core$UInt64* $tmp585 = (panda$core$UInt64*) (param0->$data + 0);
*$tmp585 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp586 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp586 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Int64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp587 = &param0->$rawValue;
*$tmp587 = param1;
// line 308
panda$core$Int64* $tmp588 = (panda$core$Int64*) (param0->$data + 0);
*$tmp588 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp589 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp589 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$MethodDecl* param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp590 = &param0->$rawValue;
*$tmp590 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$MethodDecl** $tmp591 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
*$tmp591 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp592 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp592 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Type* param2) {

// line 308
panda$core$Int64* $tmp593 = &param0->$rawValue;
*$tmp593 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp594 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
*$tmp594 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Real64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp595 = &param0->$rawValue;
*$tmp595 = param1;
// line 308
panda$core$Real64* $tmp596 = (panda$core$Real64*) (param0->$data + 0);
*$tmp596 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp597 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp597 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Statement$ID param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp598 = &param0->$rawValue;
*$tmp598 = param1;
// line 308
org$pandalanguage$pandac$IR$Statement$ID* $tmp599 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
*$tmp599 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp600 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp600 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 308
panda$core$Int64* $tmp601 = &param0->$rawValue;
*$tmp601 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp602 = (panda$core$String**) (param0->$data + 0);
*$tmp602 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 308
panda$core$Int64* $tmp603 = &param0->$rawValue;
*$tmp603 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp604 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp604 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp605 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp605 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FixedArray* param3) {

// line 308
panda$core$Int64* $tmp606 = &param0->$rawValue;
*$tmp606 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp607 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp607 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp608 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
*$tmp608 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 308
panda$core$Int64* $tmp609 = &param0->$rawValue;
*$tmp609 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp610 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp610 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp611 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp611 = param3;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp612 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp612 = param4;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 308
panda$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp614 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp614 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp615 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
*$tmp615 = param3;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp616 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp616 = param4;
return;

}






