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
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
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
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 89, -8644796311734783828, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 89, -8644796311734783828, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 89, -8644796311734783828, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 89, -8644796311734783828, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, -7735230488289505423, NULL };

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
$tmp144 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
$tmp190 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
$tmp218 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
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
panda$core$Bit $tmp251 = panda$core$Bit$init$builtin_bit($tmp250 != NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp253 = (panda$core$Int64) {404};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block24:;
panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s257, ((panda$core$Object*) $tmp250));
panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s259);
org$pandalanguage$pandac$MethodDecl* $tmp260 = *(&local13);
panda$core$String* $tmp261 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp260);
panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, $tmp261);
panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s264);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($338:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($337:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($336:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($334:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($333:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp265 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp266 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing target
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp263;
block23:;
// line 406
org$pandalanguage$pandac$MethodDecl* $tmp267 = *(&local13);
panda$core$String* $tmp268 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp267);
panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s270, $tmp268);
panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s272);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// unreffing REF($371:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($370:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($369:panda.core.String)
org$pandalanguage$pandac$MethodDecl* $tmp273 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp274 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing target
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp271;
block21:;
panda$core$Int64 $tmp275 = (panda$core$Int64) {10};
panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp275);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$IR$Value** $tmp278 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp279 = *$tmp278;
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
org$pandalanguage$pandac$IR$Value* $tmp280 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
*(&local14) = $tmp279;
org$pandalanguage$pandac$FixedArray** $tmp281 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp282 = *$tmp281;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
org$pandalanguage$pandac$FixedArray* $tmp283 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local15) = $tmp282;
// line 409
org$pandalanguage$pandac$IR$Value* $tmp284 = *(&local14);
panda$core$Bit $tmp285 = panda$core$Bit$init$builtin_bit($tmp284 != NULL);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block28; else goto block29;
block28:;
// line 410
org$pandalanguage$pandac$IR$Value* $tmp287 = *(&local14);
panda$core$Bit $tmp288 = panda$core$Bit$init$builtin_bit($tmp287 != NULL);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp290 = (panda$core$Int64) {410};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s291, $tmp290, &$s292);
abort(); // unreachable
block30:;
panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s294, ((panda$core$Object*) $tmp287));
panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, &$s296);
org$pandalanguage$pandac$FixedArray* $tmp297 = *(&local15);
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp295, ((panda$core$Object*) $tmp297));
panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s300);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing REF($437:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($436:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($433:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing REF($432:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp301 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp302 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp299;
block29:;
// line 412
org$pandalanguage$pandac$FixedArray* $tmp303 = *(&local15);
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s305, ((panda$core$Object*) $tmp303));
panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s307);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($467:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($466:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp308 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing m
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp309 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp306;
block27:;
panda$core$Int64 $tmp310 = (panda$core$Int64) {11};
panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp310);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$IR$Value** $tmp313 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp314 = *$tmp313;
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
org$pandalanguage$pandac$IR$Value* $tmp315 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
*(&local16) = $tmp314;
org$pandalanguage$pandac$MethodDecl** $tmp316 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp317 = *$tmp316;
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
org$pandalanguage$pandac$MethodDecl* $tmp318 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
*(&local17) = $tmp317;
org$pandalanguage$pandac$FixedArray** $tmp319 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp320 = *$tmp319;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
org$pandalanguage$pandac$FixedArray* $tmp321 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
*(&local18) = $tmp320;
// line 415
org$pandalanguage$pandac$IR$Value* $tmp322 = *(&local16);
panda$core$Bit $tmp323 = panda$core$Bit$init$builtin_bit($tmp322 != NULL);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block34; else goto block35;
block34:;
// line 416
org$pandalanguage$pandac$IR$Value* $tmp325 = *(&local16);
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit($tmp325 != NULL);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp328 = (panda$core$Int64) {416};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s329, $tmp328, &$s330);
abort(); // unreachable
block36:;
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s332, ((panda$core$Object*) $tmp325));
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s334);
org$pandalanguage$pandac$MethodDecl* $tmp335 = *(&local17);
panda$core$String* $tmp336 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp335);
panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, $tmp336);
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s339);
org$pandalanguage$pandac$FixedArray* $tmp340 = *(&local18);
panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp338, ((panda$core$Object*) $tmp340));
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s343);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($543:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
// unreffing REF($542:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($539:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($538:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing REF($537:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($535:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($534:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp344 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing types
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp345 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp346 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing target
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp342;
block35:;
// line 418
org$pandalanguage$pandac$MethodDecl* $tmp347 = *(&local17);
panda$core$String* $tmp348 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp347);
panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s350, $tmp348);
panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, &$s352);
org$pandalanguage$pandac$FixedArray* $tmp353 = *(&local18);
panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp351, ((panda$core$Object*) $tmp353));
panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s356);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing REF($591:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($590:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing REF($587:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
// unreffing REF($586:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($585:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp357 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing types
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp358 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp359 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing target
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp355;
block33:;
panda$core$Int64 $tmp360 = (panda$core$Int64) {12};
panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$IR$Value** $tmp363 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp364 = *$tmp363;
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
org$pandalanguage$pandac$IR$Value* $tmp365 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
*(&local19) = $tmp364;
org$pandalanguage$pandac$FixedArray** $tmp366 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp367 = *$tmp366;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
org$pandalanguage$pandac$FixedArray* $tmp368 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
*(&local20) = $tmp367;
org$pandalanguage$pandac$FixedArray** $tmp369 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp370 = *$tmp369;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
org$pandalanguage$pandac$FixedArray* $tmp371 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
*(&local21) = $tmp370;
// line 421
org$pandalanguage$pandac$IR$Value* $tmp372 = *(&local19);
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block40; else goto block41;
block40:;
// line 422
org$pandalanguage$pandac$IR$Value* $tmp375 = *(&local19);
panda$core$Bit $tmp376 = panda$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp378 = (panda$core$Int64) {422};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block42:;
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s382, ((panda$core$Object*) $tmp375));
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s384);
org$pandalanguage$pandac$FixedArray* $tmp385 = *(&local20);
panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp383, ((panda$core$Object*) $tmp385));
panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s388);
org$pandalanguage$pandac$FixedArray* $tmp389 = *(&local21);
panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp387, ((panda$core$Object*) $tmp389));
panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s392);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing REF($681:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($680:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($677:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing REF($676:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($673:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($672:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp393 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing types
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp394 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing m
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp395 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing target
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp391;
block41:;
// line 424
org$pandalanguage$pandac$FixedArray* $tmp396 = *(&local20);
panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s398, ((panda$core$Object*) $tmp396));
panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s400);
org$pandalanguage$pandac$FixedArray* $tmp401 = *(&local21);
panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp399, ((panda$core$Object*) $tmp401));
panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s404);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($726:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($725:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing REF($722:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing REF($721:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp405 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing types
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp406 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing m
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp407 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing target
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp403;
block39:;
panda$core$Int64 $tmp408 = (panda$core$Int64) {13};
panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Type** $tmp411 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp412 = *$tmp411;
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
org$pandalanguage$pandac$Type* $tmp413 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
*(&local22) = $tmp412;
// line 427
org$pandalanguage$pandac$Type* $tmp414 = *(&local22);
panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s416, ((panda$core$Object*) $tmp414));
panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s418);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
// unreffing REF($774:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($773:panda.core.String)
org$pandalanguage$pandac$Type* $tmp419 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// unreffing type
*(&local22) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp417;
block45:;
panda$core$Int64 $tmp420 = (panda$core$Int64) {14};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp118, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block46; else goto block1;
block46:;
org$pandalanguage$pandac$Type** $tmp423 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp424 = *$tmp423;
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
org$pandalanguage$pandac$Type* $tmp425 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
*(&local23) = $tmp424;
// line 430
org$pandalanguage$pandac$Type* $tmp426 = *(&local23);
panda$core$String* $tmp427 = org$pandalanguage$pandac$Type$convert$R$panda$core$String($tmp426);
panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s429, $tmp427);
panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
// unreffing REF($806:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($805:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// unreffing REF($804:panda.core.String)
org$pandalanguage$pandac$Type* $tmp432 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing type
*(&local23) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp430;
block1:;
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {373};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s436, $tmp435, &$s437);
abort(); // unreachable
block47:;
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
panda$core$Int64* $tmp438 = &param0->$rawValue;
panda$core$Int64 $tmp439 = *$tmp438;
panda$core$Int64 $tmp440 = (panda$core$Int64) {0};
panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block2; else goto block3;
block2:;
panda$core$Bit* $tmp443 = (panda$core$Bit*) (param0->$data + 0);
panda$core$Bit $tmp444 = *$tmp443;
*(&local0) = $tmp444;
goto block1;
block3:;
panda$core$Int64 $tmp445 = (panda$core$Int64) {1};
panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block4; else goto block5;
block4:;
panda$core$UInt64* $tmp448 = (panda$core$UInt64*) (param0->$data + 0);
panda$core$UInt64 $tmp449 = *$tmp448;
*(&local1) = $tmp449;
org$pandalanguage$pandac$Type** $tmp450 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp451 = *$tmp450;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
org$pandalanguage$pandac$Type* $tmp452 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
*(&local2) = $tmp451;
// line 1
org$pandalanguage$pandac$Type* $tmp453 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
org$pandalanguage$pandac$Type* $tmp454 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing _f1
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp455 = (panda$core$Int64) {2};
panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block6; else goto block7;
block6:;
panda$core$Int64* $tmp458 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp459 = *$tmp458;
*(&local3) = $tmp459;
org$pandalanguage$pandac$Type** $tmp460 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp461 = *$tmp460;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
org$pandalanguage$pandac$Type* $tmp462 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
*(&local4) = $tmp461;
// line 1
org$pandalanguage$pandac$Type* $tmp463 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
org$pandalanguage$pandac$Type* $tmp464 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing _f1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp465 = (panda$core$Int64) {3};
panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$MethodDecl** $tmp468 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
org$pandalanguage$pandac$MethodDecl* $tmp469 = *$tmp468;
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
org$pandalanguage$pandac$MethodDecl* $tmp470 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
*(&local5) = $tmp469;
org$pandalanguage$pandac$Type** $tmp471 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp472 = *$tmp471;
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
org$pandalanguage$pandac$Type* $tmp473 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
*(&local6) = $tmp472;
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp474 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// line 1
org$pandalanguage$pandac$Type* $tmp475 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
org$pandalanguage$pandac$Type* $tmp476 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing _f1
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp477 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing _f0
*(&local5) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp478 = (panda$core$Int64) {4};
panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type** $tmp481 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp482 = *$tmp481;
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
org$pandalanguage$pandac$Type* $tmp483 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
*(&local7) = $tmp482;
// line 1
org$pandalanguage$pandac$Type* $tmp484 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
org$pandalanguage$pandac$Type* $tmp485 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing _f0
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp486 = (panda$core$Int64) {5};
panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp489 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp490 = *$tmp489;
*(&local8) = $tmp490;
org$pandalanguage$pandac$Type** $tmp491 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp492 = *$tmp491;
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
org$pandalanguage$pandac$Type* $tmp493 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
*(&local9) = $tmp492;
// line 1
org$pandalanguage$pandac$Type* $tmp494 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
org$pandalanguage$pandac$Type* $tmp495 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing _f1
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {6};
panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block14; else goto block15;
block14:;
panda$core$Real64* $tmp499 = (panda$core$Real64*) (param0->$data + 0);
panda$core$Real64 $tmp500 = *$tmp499;
*(&local10) = $tmp500;
org$pandalanguage$pandac$Type** $tmp501 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp502 = *$tmp501;
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
org$pandalanguage$pandac$Type* $tmp503 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
*(&local11) = $tmp502;
// line 1
org$pandalanguage$pandac$Type* $tmp504 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
org$pandalanguage$pandac$Type* $tmp505 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// unreffing _f1
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp506 = (panda$core$Int64) {7};
panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp509 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp510 = *$tmp509;
*(&local12) = $tmp510;
org$pandalanguage$pandac$Type** $tmp511 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
org$pandalanguage$pandac$Type* $tmp512 = *$tmp511;
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
org$pandalanguage$pandac$Type* $tmp513 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
*(&local13) = $tmp512;
// line 1
org$pandalanguage$pandac$Type* $tmp514 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
org$pandalanguage$pandac$Type* $tmp515 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {8};
panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block18; else goto block19;
block18:;
panda$core$String** $tmp519 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp520 = *$tmp519;
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$String* $tmp521 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
*(&local14) = $tmp520;
// line 1
panda$core$String* $tmp522 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$core$String* $tmp523 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing _f0
*(&local14) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp524 = (panda$core$Int64) {9};
panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$IR$Value** $tmp527 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp528 = *$tmp527;
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
org$pandalanguage$pandac$IR$Value* $tmp529 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
*(&local15) = $tmp528;
org$pandalanguage$pandac$MethodDecl** $tmp530 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp531 = *$tmp530;
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
org$pandalanguage$pandac$MethodDecl* $tmp532 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
*(&local16) = $tmp531;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp533 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp534 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
org$pandalanguage$pandac$MethodDecl* $tmp535 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing _f1
*(&local16) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp536 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing _f0
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp537 = (panda$core$Int64) {10};
panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp537);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$IR$Value** $tmp540 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp541 = *$tmp540;
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
org$pandalanguage$pandac$IR$Value* $tmp542 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
*(&local17) = $tmp541;
org$pandalanguage$pandac$FixedArray** $tmp543 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp544 = *$tmp543;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
org$pandalanguage$pandac$FixedArray* $tmp545 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
*(&local18) = $tmp544;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp546 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp547 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
org$pandalanguage$pandac$FixedArray* $tmp548 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing _f1
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp549 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing _f0
*(&local17) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp550 = (panda$core$Int64) {11};
panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$IR$Value** $tmp553 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp554 = *$tmp553;
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
org$pandalanguage$pandac$IR$Value* $tmp555 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
*(&local19) = $tmp554;
org$pandalanguage$pandac$MethodDecl** $tmp556 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp557 = *$tmp556;
*(&local20) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
org$pandalanguage$pandac$MethodDecl* $tmp558 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
*(&local20) = $tmp557;
org$pandalanguage$pandac$FixedArray** $tmp559 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp560 = *$tmp559;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
org$pandalanguage$pandac$FixedArray* $tmp561 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
*(&local21) = $tmp560;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp562 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// line 1
org$pandalanguage$pandac$MethodDecl* $tmp563 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp564 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
org$pandalanguage$pandac$FixedArray* $tmp565 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing _f2
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp566 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing _f1
*(&local20) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp567 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing _f0
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp568 = (panda$core$Int64) {12};
panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$IR$Value** $tmp571 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp572 = *$tmp571;
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
*(&local22) = $tmp572;
org$pandalanguage$pandac$FixedArray** $tmp574 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp575 = *$tmp574;
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
org$pandalanguage$pandac$FixedArray* $tmp576 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
*(&local23) = $tmp575;
org$pandalanguage$pandac$FixedArray** $tmp577 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp578 = *$tmp577;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
org$pandalanguage$pandac$FixedArray* $tmp579 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
*(&local24) = $tmp578;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp580 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp581 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp582 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
org$pandalanguage$pandac$FixedArray* $tmp583 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing _f2
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp584 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp585 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing _f0
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp586 = (panda$core$Int64) {13};
panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Type** $tmp589 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp590 = *$tmp589;
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
org$pandalanguage$pandac$Type* $tmp591 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
*(&local25) = $tmp590;
// line 1
org$pandalanguage$pandac$Type* $tmp592 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
org$pandalanguage$pandac$Type* $tmp593 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
// unreffing _f0
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {14};
panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp439, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block30; else goto block1;
block30:;
org$pandalanguage$pandac$Type** $tmp597 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
org$pandalanguage$pandac$Type* $tmp598 = *$tmp597;
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
org$pandalanguage$pandac$Type* $tmp599 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
*(&local26) = $tmp598;
// line 1
org$pandalanguage$pandac$Type* $tmp600 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
org$pandalanguage$pandac$Type* $tmp601 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
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
panda$core$Int64* $tmp602 = &param0->$rawValue;
*$tmp602 = param1;
// line 308
panda$core$Bit* $tmp603 = (panda$core$Bit*) (param0->$data + 0);
*$tmp603 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$UInt64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp604 = &param0->$rawValue;
*$tmp604 = param1;
// line 308
panda$core$UInt64* $tmp605 = (panda$core$UInt64*) (param0->$data + 0);
*$tmp605 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp606 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp606 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Int64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp607 = &param0->$rawValue;
*$tmp607 = param1;
// line 308
panda$core$Int64* $tmp608 = (panda$core$Int64*) (param0->$data + 0);
*$tmp608 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp609 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp609 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$MethodDecl* param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp610 = &param0->$rawValue;
*$tmp610 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$MethodDecl** $tmp611 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 0);
*$tmp611 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp612 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp612 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Type* param2) {

// line 308
panda$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp614 = (org$pandalanguage$pandac$Type**) (param0->$data + 0);
*$tmp614 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$Real64 param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp615 = &param0->$rawValue;
*$tmp615 = param1;
// line 308
panda$core$Real64* $tmp616 = (panda$core$Real64*) (param0->$data + 0);
*$tmp616 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp617 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp617 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Statement$ID param2, org$pandalanguage$pandac$Type* param3) {

// line 308
panda$core$Int64* $tmp618 = &param0->$rawValue;
*$tmp618 = param1;
// line 308
org$pandalanguage$pandac$IR$Statement$ID* $tmp619 = (org$pandalanguage$pandac$IR$Statement$ID*) (param0->$data + 0);
*$tmp619 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$Type** $tmp620 = (org$pandalanguage$pandac$Type**) (param0->$data + 8);
*$tmp620 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 308
panda$core$Int64* $tmp621 = &param0->$rawValue;
*$tmp621 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp622 = (panda$core$String**) (param0->$data + 0);
*$tmp622 = param2;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 308
panda$core$Int64* $tmp623 = &param0->$rawValue;
*$tmp623 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp624 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp624 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp625 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp625 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FixedArray* param3) {

// line 308
panda$core$Int64* $tmp626 = &param0->$rawValue;
*$tmp626 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp627 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp627 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp628 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
*$tmp628 = param3;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodDecl* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 308
panda$core$Int64* $tmp629 = &param0->$rawValue;
*$tmp629 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp630 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp630 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp631 = (org$pandalanguage$pandac$MethodDecl**) (param0->$data + 8);
*$tmp631 = param3;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp632 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp632 = param4;
return;

}
void org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$MethodDecl$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$IR$Value* param0, panda$core$Int64 param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 308
panda$core$Int64* $tmp633 = &param0->$rawValue;
*$tmp633 = param1;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$IR$Value** $tmp634 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 0);
*$tmp634 = param2;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp635 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 8);
*$tmp635 = param3;
// line 308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp636 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp636 = param4;
return;

}






