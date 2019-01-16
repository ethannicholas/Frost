#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Value$class_type org$frostlang$frostc$IR$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Value$convert$R$frost$core$String, org$frostlang$frostc$IR$Value$cleanup, org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -7272186204340651082, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x74\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, -6683945138451859119, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 91, -2850612535739845075, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$MethodDecl* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
// line 329
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 331
org$frostlang$frostc$Type* $tmp7 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($8:org.frostlang.frostc.Type)
return $tmp7;
block3:;
frost$core$Int64 $tmp8 = (frost$core$Int64) {1};
frost$core$Bit $tmp9 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp11 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp12 = *$tmp11;
org$frostlang$frostc$Type** $tmp13 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp14 = *$tmp13;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$Type* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local0) = $tmp14;
// line 334
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Type* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing type
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp16;
block5:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {2};
frost$core$Bit $tmp19 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp21 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp22 = *$tmp21;
org$frostlang$frostc$Type** $tmp23 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp24 = *$tmp23;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = $tmp24;
// line 337
org$frostlang$frostc$Type* $tmp26 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Type* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing type
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp26;
block7:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {3};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp31 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp32 = *$tmp31;
org$frostlang$frostc$Type** $tmp33 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp34 = *$tmp33;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$Type* $tmp35 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local2) = $tmp34;
// line 340
org$frostlang$frostc$Type* $tmp36 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp37 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing type
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp36;
block9:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {4};
frost$core$Bit $tmp39 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp41 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp42 = *$tmp41;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local3) = $tmp42;
// line 343
org$frostlang$frostc$Type* $tmp44 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$Type* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing type
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp44;
block11:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {5};
frost$core$Bit $tmp47 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp49 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp50 = *$tmp49;
org$frostlang$frostc$Type** $tmp51 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp52 = *$tmp51;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Type* $tmp53 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local4) = $tmp52;
// line 346
org$frostlang$frostc$Type* $tmp54 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Type* $tmp55 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing type
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp54;
block13:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {6};
frost$core$Bit $tmp57 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp59 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp60 = *$tmp59;
org$frostlang$frostc$Type** $tmp61 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp62 = *$tmp61;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$Type* $tmp63 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local5) = $tmp62;
// line 349
org$frostlang$frostc$Type* $tmp64 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Type* $tmp65 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing type
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp64;
block15:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {7};
frost$core$Bit $tmp67 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp69 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp70 = *$tmp69;
org$frostlang$frostc$Type** $tmp71 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp72 = *$tmp71;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp73 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local6) = $tmp72;
// line 352
org$frostlang$frostc$Type* $tmp74 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$Type* $tmp75 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing type
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp74;
block17:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {8};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
// line 355
org$frostlang$frostc$Type* $tmp79 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($193:org.frostlang.frostc.Type)
return $tmp79;
block19:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {9};
frost$core$Bit $tmp81 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp83 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp84 = *$tmp83;
org$frostlang$frostc$MethodDecl** $tmp85 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp86 = *$tmp85;
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$MethodDecl* $tmp87 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local7) = $tmp86;
// line 358
org$frostlang$frostc$MethodDecl* $tmp88 = *(&local7);
org$frostlang$frostc$Type* $tmp89 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($217:org.frostlang.frostc.Type)
org$frostlang$frostc$MethodDecl* $tmp90 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing m
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp89;
block21:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {10};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block22; else goto block23;
block22:;
// line 361
org$frostlang$frostc$Type* $tmp94 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($234:org.frostlang.frostc.Type)
return $tmp94;
block23:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {13};
frost$core$Bit $tmp96 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type** $tmp98 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp99 = *$tmp98;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$Type* $tmp100 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local8) = $tmp99;
// line 364
org$frostlang$frostc$Type* $tmp101 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Type* $tmp102 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing type
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp101;
block25:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {14};
frost$core$Bit $tmp104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block26; else goto block1;
block26:;
org$frostlang$frostc$Type** $tmp106 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp107 = *$tmp106;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$Type* $tmp108 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local9) = $tmp107;
// line 367
org$frostlang$frostc$Type* $tmp109 = *(&local9);
org$frostlang$frostc$Type* $tmp110 = org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($279:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp111 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing type
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
return $tmp110;
block1:;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit(false);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp114 = (frost$core$Int64) {328};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block27:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$IR$Value$convert$R$frost$core$String(org$frostlang$frostc$IR$Value* param0) {

frost$core$Bit local0;
frost$core$UInt64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
frost$core$Int64 local6;
org$frostlang$frostc$Type* local7 = NULL;
frost$core$Real64 local8;
org$frostlang$frostc$IR$Statement$ID local9;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$MethodDecl* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$MethodDecl* local17 = NULL;
org$frostlang$frostc$FixedArray* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$Type* local22 = NULL;
org$frostlang$frostc$Type* local23 = NULL;
// line 374
frost$core$Int64* $tmp117 = &param0->$rawValue;
frost$core$Int64 $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
frost$core$Bit $tmp120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp122 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp123 = *$tmp122;
*(&local0) = $tmp123;
// line 376
frost$core$Bit $tmp124 = *(&local0);
frost$core$String* $tmp125 = frost$core$Bit$convert$R$frost$core$String($tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($12:frost.core.String)
return $tmp125;
block3:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {1};
frost$core$Bit $tmp127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp129 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp130 = *$tmp129;
*(&local1) = $tmp130;
org$frostlang$frostc$Type** $tmp131 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
// line 379
frost$core$UInt64 $tmp133 = *(&local1);
frost$core$String* $tmp134 = frost$core$UInt64$convert$R$frost$core$String($tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($30:frost.core.String)
return $tmp134;
block5:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {2};
frost$core$Bit $tmp136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp138 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp139 = *$tmp138;
*(&local2) = $tmp139;
org$frostlang$frostc$Type** $tmp140 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp141 = *$tmp140;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$Type* $tmp142 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local3) = $tmp141;
// line 382
frost$core$Int64 $tmp143 = *(&local2);
frost$core$Int64$wrapper* $tmp144;
$tmp144 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp144->value = $tmp143;
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s146, ((frost$core$Object*) $tmp144));
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp145, &$s148);
org$frostlang$frostc$Type* $tmp149 = *(&local3);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp147, ((frost$core$Object*) $tmp149));
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp150, &$s152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($61:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($55:frost.core.Object)
org$frostlang$frostc$Type* $tmp153 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing type
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp151;
block7:;
frost$core$Int64 $tmp154 = (frost$core$Int64) {4};
frost$core$Bit $tmp155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type** $tmp157 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp158 = *$tmp157;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$Type* $tmp159 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local4) = $tmp158;
// line 385
org$frostlang$frostc$Type* $tmp160 = *(&local4);
frost$core$String* $tmp161 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s162, ((frost$core$Object*) $tmp160));
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp161, &$s164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($102:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($101:frost.core.String)
org$frostlang$frostc$Type* $tmp165 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing type
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp163;
block9:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {3};
frost$core$Bit $tmp167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block10; else goto block11;
block10:;
org$frostlang$frostc$MethodDecl** $tmp169 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp170 = *$tmp169;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
org$frostlang$frostc$MethodDecl* $tmp171 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local5) = $tmp170;
org$frostlang$frostc$Type** $tmp172 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
// line 388
org$frostlang$frostc$MethodDecl* $tmp174 = *(&local5);
frost$core$String* $tmp175 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp174);
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s177, $tmp175);
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp176, &$s179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($136:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($135:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($134:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp180 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing m
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp178;
block11:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {5};
frost$core$Bit $tmp182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp184 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp185 = *$tmp184;
*(&local6) = $tmp185;
org$frostlang$frostc$Type** $tmp186 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp187 = *$tmp186;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$Type* $tmp188 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local7) = $tmp187;
// line 391
frost$core$Int64 $tmp189 = *(&local6);
frost$core$Int64$wrapper* $tmp190;
$tmp190 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp190->value = $tmp189;
frost$core$String* $tmp191 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s192, ((frost$core$Object*) $tmp190));
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp191, &$s194);
org$frostlang$frostc$Type* $tmp195 = *(&local7);
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp193, ((frost$core$Object*) $tmp195));
frost$core$String* $tmp197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp196, &$s198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($178:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($177:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($173:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($172:frost.core.Object)
org$frostlang$frostc$Type* $tmp199 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp197;
block13:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {6};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp203 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp204 = *$tmp203;
*(&local8) = $tmp204;
org$frostlang$frostc$Type** $tmp205 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp206 = *$tmp205;
// line 394
frost$core$Real64 $tmp207 = *(&local8);
frost$core$String* $tmp208 = frost$core$Real64$convert$R$frost$core$String($tmp207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($213:frost.core.String)
return $tmp208;
block15:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {7};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp212 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp213 = *$tmp212;
*(&local9) = $tmp213;
org$frostlang$frostc$Type** $tmp214 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp215 = *$tmp214;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
org$frostlang$frostc$Type* $tmp216 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local10) = $tmp215;
// line 397
org$frostlang$frostc$IR$Statement$ID $tmp217 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp218;
$tmp218 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp218->value = $tmp217;
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s220, ((frost$core$Object*) $tmp218));
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, &$s222);
org$frostlang$frostc$Type* $tmp223 = *(&local10);
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp221, ((frost$core$Object*) $tmp223));
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp224, &$s226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($243:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($239:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($238:frost.core.Object)
org$frostlang$frostc$Type* $tmp227 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing type
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp225;
block17:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {8};
frost$core$Bit $tmp229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block18; else goto block19;
block18:;
frost$core$String** $tmp231 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp232 = *$tmp231;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$String* $tmp233 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local11) = $tmp232;
// line 400
frost$core$String* $tmp234 = *(&local11);
frost$core$String* $tmp235 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp234, &$s236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($283:frost.core.String)
frost$core$String* $tmp237 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing s
*(&local11) = ((frost$core$String*) NULL);
return $tmp235;
block19:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {9};
frost$core$Bit $tmp239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp241 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp242 = *$tmp241;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
org$frostlang$frostc$IR$Value* $tmp243 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local12) = $tmp242;
org$frostlang$frostc$MethodDecl** $tmp244 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp245 = *$tmp244;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$MethodDecl* $tmp246 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local13) = $tmp245;
// line 403
org$frostlang$frostc$IR$Value* $tmp247 = *(&local12);
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block22; else goto block23;
block22:;
// line 404
org$frostlang$frostc$IR$Value* $tmp250 = *(&local12);
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250 != NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {404};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block24:;
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s257, ((frost$core$Object*) $tmp250));
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s259);
org$frostlang$frostc$MethodDecl* $tmp260 = *(&local13);
frost$core$String* $tmp261 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp260);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp258, $tmp261);
frost$core$String* $tmp263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp262, &$s264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($338:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($337:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($334:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($333:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp265 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp266 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp263;
block23:;
// line 406
org$frostlang$frostc$MethodDecl* $tmp267 = *(&local13);
frost$core$String* $tmp268 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp267);
frost$core$String* $tmp269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s270, $tmp268);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp269, &$s272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($371:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($370:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($369:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp273 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp274 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp271;
block21:;
frost$core$Int64 $tmp275 = (frost$core$Int64) {10};
frost$core$Bit $tmp276 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp275);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp278 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp279 = *$tmp278;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
org$frostlang$frostc$IR$Value* $tmp280 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local14) = $tmp279;
org$frostlang$frostc$FixedArray** $tmp281 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp282 = *$tmp281;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
org$frostlang$frostc$FixedArray* $tmp283 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local15) = $tmp282;
// line 409
org$frostlang$frostc$IR$Value* $tmp284 = *(&local14);
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284 != NULL);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block28; else goto block29;
block28:;
// line 410
org$frostlang$frostc$IR$Value* $tmp287 = *(&local14);
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit($tmp287 != NULL);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {410};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s291, $tmp290, &$s292);
abort(); // unreachable
block30:;
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s294, ((frost$core$Object*) $tmp287));
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp293, &$s296);
org$frostlang$frostc$FixedArray* $tmp297 = *(&local15);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp295, ((frost$core$Object*) $tmp297));
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($437:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($436:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($433:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($432:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp301 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp302 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp299;
block29:;
// line 412
org$frostlang$frostc$FixedArray* $tmp303 = *(&local15);
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s305, ((frost$core$Object*) $tmp303));
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp304, &$s307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($467:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($466:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp308 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp309 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp306;
block27:;
frost$core$Int64 $tmp310 = (frost$core$Int64) {11};
frost$core$Bit $tmp311 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp310);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp313 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp314 = *$tmp313;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
org$frostlang$frostc$IR$Value* $tmp315 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local16) = $tmp314;
org$frostlang$frostc$MethodDecl** $tmp316 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp317 = *$tmp316;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
org$frostlang$frostc$MethodDecl* $tmp318 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local17) = $tmp317;
org$frostlang$frostc$FixedArray** $tmp319 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp320 = *$tmp319;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlang$frostc$FixedArray* $tmp321 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local18) = $tmp320;
// line 415
org$frostlang$frostc$IR$Value* $tmp322 = *(&local16);
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322 != NULL);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block34; else goto block35;
block34:;
// line 416
org$frostlang$frostc$IR$Value* $tmp325 = *(&local16);
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit($tmp325 != NULL);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp328 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s329, $tmp328, &$s330);
abort(); // unreachable
block36:;
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s332, ((frost$core$Object*) $tmp325));
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
org$frostlang$frostc$MethodDecl* $tmp335 = *(&local17);
frost$core$String* $tmp336 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp335);
frost$core$String* $tmp337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, $tmp336);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp337, &$s339);
org$frostlang$frostc$FixedArray* $tmp340 = *(&local18);
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp338, ((frost$core$Object*) $tmp340));
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp341, &$s343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($543:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing REF($542:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($539:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($538:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($537:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($534:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp344 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp345 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp346 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp342;
block35:;
// line 418
org$frostlang$frostc$MethodDecl* $tmp347 = *(&local17);
frost$core$String* $tmp348 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp347);
frost$core$String* $tmp349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s350, $tmp348);
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp349, &$s352);
org$frostlang$frostc$FixedArray* $tmp353 = *(&local18);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp351, ((frost$core$Object*) $tmp353));
frost$core$String* $tmp355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp354, &$s356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($591:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($590:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($587:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($586:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// unreffing REF($585:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp357 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp358 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp359 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp355;
block33:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {12};
frost$core$Bit $tmp361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block38; else goto block39;
block38:;
org$frostlang$frostc$IR$Value** $tmp363 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp364 = *$tmp363;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$IR$Value* $tmp365 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local19) = $tmp364;
org$frostlang$frostc$FixedArray** $tmp366 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp367 = *$tmp366;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$FixedArray* $tmp368 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local20) = $tmp367;
org$frostlang$frostc$FixedArray** $tmp369 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp370 = *$tmp369;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$FixedArray* $tmp371 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local21) = $tmp370;
// line 421
org$frostlang$frostc$IR$Value* $tmp372 = *(&local19);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block40; else goto block41;
block40:;
// line 422
org$frostlang$frostc$IR$Value* $tmp375 = *(&local19);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block42:;
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s382, ((frost$core$Object*) $tmp375));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s384);
org$frostlang$frostc$FixedArray* $tmp385 = *(&local20);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp383, ((frost$core$Object*) $tmp385));
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s388);
org$frostlang$frostc$FixedArray* $tmp389 = *(&local21);
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp387, ((frost$core$Object*) $tmp389));
frost$core$String* $tmp391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp390, &$s392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing REF($681:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($680:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($677:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($676:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// unreffing REF($673:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing REF($672:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp393 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp394 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp395 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp391;
block41:;
// line 424
org$frostlang$frostc$FixedArray* $tmp396 = *(&local20);
frost$core$String* $tmp397 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s398, ((frost$core$Object*) $tmp396));
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp397, &$s400);
org$frostlang$frostc$FixedArray* $tmp401 = *(&local21);
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp399, ((frost$core$Object*) $tmp401));
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($726:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing REF($725:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing REF($722:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing REF($721:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp405 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp406 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp407 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp403;
block39:;
frost$core$Int64 $tmp408 = (frost$core$Int64) {13};
frost$core$Bit $tmp409 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type** $tmp411 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp412 = *$tmp411;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
org$frostlang$frostc$Type* $tmp413 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local22) = $tmp412;
// line 427
org$frostlang$frostc$Type* $tmp414 = *(&local22);
frost$core$String* $tmp415 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s416, ((frost$core$Object*) $tmp414));
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp415, &$s418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// unreffing REF($774:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($773:frost.core.String)
org$frostlang$frostc$Type* $tmp419 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing type
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp417;
block45:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {14};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block46; else goto block1;
block46:;
org$frostlang$frostc$Type** $tmp423 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp424 = *$tmp423;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
org$frostlang$frostc$Type* $tmp425 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local23) = $tmp424;
// line 430
org$frostlang$frostc$Type* $tmp426 = *(&local23);
frost$core$String* $tmp427 = org$frostlang$frostc$Type$convert$R$frost$core$String($tmp426);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s429, $tmp427);
frost$core$String* $tmp430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($806:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($805:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing REF($804:frost.core.String)
org$frostlang$frostc$Type* $tmp432 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing type
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp430;
block1:;
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s436, $tmp435, &$s437);
abort(); // unreachable
block47:;
abort(); // unreachable

}
void org$frostlang$frostc$IR$Value$cleanup(org$frostlang$frostc$IR$Value* param0) {

frost$core$Bit local0;
frost$core$UInt64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
frost$core$Int64 local8;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$Real64 local10;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
org$frostlang$frostc$Type* local13 = NULL;
frost$core$String* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$MethodDecl* local16 = NULL;
org$frostlang$frostc$IR$Value* local17 = NULL;
org$frostlang$frostc$FixedArray* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$MethodDecl* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
// line 308
frost$core$Int64* $tmp438 = &param0->$rawValue;
frost$core$Int64 $tmp439 = *$tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {0};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp443 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp444 = *$tmp443;
*(&local0) = $tmp444;
goto block1;
block3:;
frost$core$Int64 $tmp445 = (frost$core$Int64) {1};
frost$core$Bit $tmp446 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp448 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp449 = *$tmp448;
*(&local1) = $tmp449;
org$frostlang$frostc$Type** $tmp450 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp451 = *$tmp450;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$Type* $tmp452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local2) = $tmp451;
// line 1
org$frostlang$frostc$Type* $tmp453 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlang$frostc$Type* $tmp454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing _f1
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp455 = (frost$core$Int64) {2};
frost$core$Bit $tmp456 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp458 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp459 = *$tmp458;
*(&local3) = $tmp459;
org$frostlang$frostc$Type** $tmp460 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp461 = *$tmp460;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
org$frostlang$frostc$Type* $tmp462 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local4) = $tmp461;
// line 1
org$frostlang$frostc$Type* $tmp463 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$Type* $tmp464 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing _f1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {3};
frost$core$Bit $tmp466 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp468 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp469 = *$tmp468;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
org$frostlang$frostc$MethodDecl* $tmp470 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local5) = $tmp469;
org$frostlang$frostc$Type** $tmp471 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp472 = *$tmp471;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Type* $tmp473 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local6) = $tmp472;
// line 1
org$frostlang$frostc$MethodDecl* $tmp474 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// line 1
org$frostlang$frostc$Type* $tmp475 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
org$frostlang$frostc$Type* $tmp476 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing _f1
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp477 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// unreffing _f0
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {4};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp481 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp482 = *$tmp481;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
org$frostlang$frostc$Type* $tmp483 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local7) = $tmp482;
// line 1
org$frostlang$frostc$Type* $tmp484 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
org$frostlang$frostc$Type* $tmp485 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing _f0
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {5};
frost$core$Bit $tmp487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp489 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp490 = *$tmp489;
*(&local8) = $tmp490;
org$frostlang$frostc$Type** $tmp491 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp492 = *$tmp491;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
org$frostlang$frostc$Type* $tmp493 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local9) = $tmp492;
// line 1
org$frostlang$frostc$Type* $tmp494 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
org$frostlang$frostc$Type* $tmp495 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing _f1
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {6};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp499 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp500 = *$tmp499;
*(&local10) = $tmp500;
org$frostlang$frostc$Type** $tmp501 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp502 = *$tmp501;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
org$frostlang$frostc$Type* $tmp503 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local11) = $tmp502;
// line 1
org$frostlang$frostc$Type* $tmp504 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
org$frostlang$frostc$Type* $tmp505 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing _f1
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {7};
frost$core$Bit $tmp507 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp509 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp510 = *$tmp509;
*(&local12) = $tmp510;
org$frostlang$frostc$Type** $tmp511 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp512 = *$tmp511;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
org$frostlang$frostc$Type* $tmp513 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local13) = $tmp512;
// line 1
org$frostlang$frostc$Type* $tmp514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
org$frostlang$frostc$Type* $tmp515 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {8};
frost$core$Bit $tmp517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block18; else goto block19;
block18:;
frost$core$String** $tmp519 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp520 = *$tmp519;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$String* $tmp521 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local14) = $tmp520;
// line 1
frost$core$String* $tmp522 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$String* $tmp523 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing _f0
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {9};
frost$core$Bit $tmp525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp527 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp528 = *$tmp527;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$IR$Value* $tmp529 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local15) = $tmp528;
org$frostlang$frostc$MethodDecl** $tmp530 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp531 = *$tmp530;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
org$frostlang$frostc$MethodDecl* $tmp532 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local16) = $tmp531;
// line 1
org$frostlang$frostc$IR$Value* $tmp533 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// line 1
org$frostlang$frostc$MethodDecl* $tmp534 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$MethodDecl* $tmp535 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing _f1
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp536 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
// unreffing _f0
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp537 = (frost$core$Int64) {10};
frost$core$Bit $tmp538 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp537);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block22; else goto block23;
block22:;
org$frostlang$frostc$IR$Value** $tmp540 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp541 = *$tmp540;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
org$frostlang$frostc$IR$Value* $tmp542 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local17) = $tmp541;
org$frostlang$frostc$FixedArray** $tmp543 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp544 = *$tmp543;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
org$frostlang$frostc$FixedArray* $tmp545 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local18) = $tmp544;
// line 1
org$frostlang$frostc$IR$Value* $tmp546 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// line 1
org$frostlang$frostc$FixedArray* $tmp547 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$FixedArray* $tmp548 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing _f1
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp549 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing _f0
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {11};
frost$core$Bit $tmp551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp553 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp554 = *$tmp553;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
org$frostlang$frostc$IR$Value* $tmp555 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local19) = $tmp554;
org$frostlang$frostc$MethodDecl** $tmp556 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp557 = *$tmp556;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$MethodDecl* $tmp558 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local20) = $tmp557;
org$frostlang$frostc$FixedArray** $tmp559 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp560 = *$tmp559;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
org$frostlang$frostc$FixedArray* $tmp561 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local21) = $tmp560;
// line 1
org$frostlang$frostc$IR$Value* $tmp562 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// line 1
org$frostlang$frostc$MethodDecl* $tmp563 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// line 1
org$frostlang$frostc$FixedArray* $tmp564 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
org$frostlang$frostc$FixedArray* $tmp565 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing _f2
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp566 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// unreffing _f1
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp567 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing _f0
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {12};
frost$core$Bit $tmp569 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp571 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp572 = *$tmp571;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
org$frostlang$frostc$IR$Value* $tmp573 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local22) = $tmp572;
org$frostlang$frostc$FixedArray** $tmp574 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp575 = *$tmp574;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
org$frostlang$frostc$FixedArray* $tmp576 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local23) = $tmp575;
org$frostlang$frostc$FixedArray** $tmp577 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp578 = *$tmp577;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
org$frostlang$frostc$FixedArray* $tmp579 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local24) = $tmp578;
// line 1
org$frostlang$frostc$IR$Value* $tmp580 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// line 1
org$frostlang$frostc$FixedArray* $tmp581 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// line 1
org$frostlang$frostc$FixedArray* $tmp582 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
org$frostlang$frostc$FixedArray* $tmp583 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp584 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp585 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// unreffing _f0
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp586 = (frost$core$Int64) {13};
frost$core$Bit $tmp587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type** $tmp589 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp590 = *$tmp589;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$Type* $tmp591 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local25) = $tmp590;
// line 1
org$frostlang$frostc$Type* $tmp592 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
org$frostlang$frostc$Type* $tmp593 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing _f0
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {14};
frost$core$Bit $tmp595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block30; else goto block1;
block30:;
org$frostlang$frostc$Type** $tmp597 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp598 = *$tmp597;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
org$frostlang$frostc$Type* $tmp599 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local26) = $tmp598;
// line 1
org$frostlang$frostc$Type* $tmp600 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$Type* $tmp601 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// unreffing _f0
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 308
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 308
frost$core$Int64* $tmp602 = &param0->$rawValue;
*$tmp602 = param1;
// line 308
frost$core$Bit* $tmp603 = (frost$core$Bit*) (param0->$data + 0);
*$tmp603 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp604 = &param0->$rawValue;
*$tmp604 = param1;
// line 308
frost$core$UInt64* $tmp605 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp605 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp606 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp606 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp607 = &param0->$rawValue;
*$tmp607 = param1;
// line 308
frost$core$Int64* $tmp608 = (frost$core$Int64*) (param0->$data + 0);
*$tmp608 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp609 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp609 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp610 = &param0->$rawValue;
*$tmp610 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp611 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp611 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp612 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp612 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 308
frost$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp614 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp614 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp615 = &param0->$rawValue;
*$tmp615 = param1;
// line 308
frost$core$Real64* $tmp616 = (frost$core$Real64*) (param0->$data + 0);
*$tmp616 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp617 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp617 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp618 = &param0->$rawValue;
*$tmp618 = param1;
// line 308
org$frostlang$frostc$IR$Statement$ID* $tmp619 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp619 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp620 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp620 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 308
frost$core$Int64* $tmp621 = &param0->$rawValue;
*$tmp621 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp622 = (frost$core$String**) (param0->$data + 0);
*$tmp622 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 308
frost$core$Int64* $tmp623 = &param0->$rawValue;
*$tmp623 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp624 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp624 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp625 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp625 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// line 308
frost$core$Int64* $tmp626 = &param0->$rawValue;
*$tmp626 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp627 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp627 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp628 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp628 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp629 = &param0->$rawValue;
*$tmp629 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp630 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp630 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp631 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp631 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp632 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp632 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp633 = &param0->$rawValue;
*$tmp633 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp634 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp634 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp635 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp635 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp636 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp636 = param4;
return;

}






