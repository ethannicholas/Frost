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
org$frostlang$frostc$IR$Value$class_type org$frostlang$frostc$IR$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Value$cleanup, org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type} };

typedef frost$core$String* (*$fn122)(frost$core$Object*);
typedef frost$core$String* (*$fn134)(frost$core$Object*);
typedef frost$core$String* (*$fn211)(frost$core$Object*);
typedef frost$core$String* (*$fn412)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -7272186204340651082, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
// line 446
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 448
org$frostlang$frostc$Type* $tmp7 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
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
// line 451
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Type* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
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
// line 454
org$frostlang$frostc$Type* $tmp26 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Type* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
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
// line 457
org$frostlang$frostc$Type* $tmp36 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp37 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
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
// line 460
org$frostlang$frostc$Type* $tmp44 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$Type* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
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
// line 463
org$frostlang$frostc$Type* $tmp54 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Type* $tmp55 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
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
// line 466
org$frostlang$frostc$Type* $tmp64 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Type* $tmp65 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
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
// line 469
org$frostlang$frostc$Type* $tmp74 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$Type* $tmp75 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp74;
block17:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {8};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
// line 472
org$frostlang$frostc$Type* $tmp79 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
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
// line 475
org$frostlang$frostc$MethodDecl* $tmp88 = *(&local7);
org$frostlang$frostc$Type* $tmp89 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
org$frostlang$frostc$MethodDecl* $tmp90 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp89;
block21:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {10};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block22; else goto block23;
block22:;
// line 478
org$frostlang$frostc$Type* $tmp94 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
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
// line 481
org$frostlang$frostc$Type* $tmp101 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Type* $tmp102 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
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
// line 484
org$frostlang$frostc$Type* $tmp109 = *(&local9);
org$frostlang$frostc$Type* $tmp110 = org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$Type* $tmp111 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
return $tmp110;
block1:;
// line 487
goto block27;
block27:;
goto block27;
block28:;
goto block29;
block29:;

}
frost$core$String* org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Value* param0) {

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
// line 492
frost$core$Int64* $tmp112 = &param0->$rawValue;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {0};
frost$core$Bit $tmp115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp114);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp117 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp118 = *$tmp117;
*(&local0) = $tmp118;
// line 494
frost$core$Bit $tmp119 = *(&local0);
frost$core$Bit$wrapper* $tmp120;
$tmp120 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp120->value = $tmp119;
$fn122 $tmp121 = ($fn122) ((frost$core$Object*) $tmp120)->$class->vtable[0];
frost$core$String* $tmp123 = $tmp121(((frost$core$Object*) $tmp120));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
return $tmp123;
block3:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {1};
frost$core$Bit $tmp125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp127 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp128 = *$tmp127;
*(&local1) = $tmp128;
org$frostlang$frostc$Type** $tmp129 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp130 = *$tmp129;
// line 497
frost$core$UInt64 $tmp131 = *(&local1);
frost$core$UInt64$wrapper* $tmp132;
$tmp132 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp132->value = $tmp131;
$fn134 $tmp133 = ($fn134) ((frost$core$Object*) $tmp132)->$class->vtable[0];
frost$core$String* $tmp135 = $tmp133(((frost$core$Object*) $tmp132));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
return $tmp135;
block5:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {2};
frost$core$Bit $tmp137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp139 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp140 = *$tmp139;
*(&local2) = $tmp140;
org$frostlang$frostc$Type** $tmp141 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp142 = *$tmp141;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Type* $tmp143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local3) = $tmp142;
// line 500
frost$core$Int64 $tmp144 = *(&local2);
frost$core$Int64$wrapper* $tmp145;
$tmp145 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp145->value = $tmp144;
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s147, ((frost$core$Object*) $tmp145));
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s149);
org$frostlang$frostc$Type* $tmp150 = *(&local3);
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp148, ((frost$core$Object*) $tmp150));
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp151, &$s153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
org$frostlang$frostc$Type* $tmp154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp152;
block7:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {4};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type** $tmp158 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp159 = *$tmp158;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
org$frostlang$frostc$Type* $tmp160 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local4) = $tmp159;
// line 503
org$frostlang$frostc$Type* $tmp161 = *(&local4);
frost$core$String* $tmp162 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s163, ((frost$core$Object*) $tmp161));
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp162, &$s165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$Type* $tmp166 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp164;
block9:;
frost$core$Int64 $tmp167 = (frost$core$Int64) {3};
frost$core$Bit $tmp168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp167);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block10; else goto block11;
block10:;
org$frostlang$frostc$MethodDecl** $tmp170 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp171 = *$tmp170;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$MethodDecl* $tmp172 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local5) = $tmp171;
org$frostlang$frostc$Type** $tmp173 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp174 = *$tmp173;
// line 506
org$frostlang$frostc$MethodDecl* $tmp175 = *(&local5);
frost$core$String* $tmp176 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp175);
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s178, $tmp176);
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$MethodDecl* $tmp181 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp179;
block11:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {5};
frost$core$Bit $tmp183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp185 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp186 = *$tmp185;
*(&local6) = $tmp186;
org$frostlang$frostc$Type** $tmp187 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Type* $tmp189 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local7) = $tmp188;
// line 509
frost$core$Int64 $tmp190 = *(&local6);
frost$core$Int64$wrapper* $tmp191;
$tmp191 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp191->value = $tmp190;
frost$core$String* $tmp192 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s193, ((frost$core$Object*) $tmp191));
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp192, &$s195);
org$frostlang$frostc$Type* $tmp196 = *(&local7);
frost$core$String* $tmp197 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp194, ((frost$core$Object*) $tmp196));
frost$core$String* $tmp198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp197, &$s199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
org$frostlang$frostc$Type* $tmp200 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp198;
block13:;
frost$core$Int64 $tmp201 = (frost$core$Int64) {6};
frost$core$Bit $tmp202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp204 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp205 = *$tmp204;
*(&local8) = $tmp205;
org$frostlang$frostc$Type** $tmp206 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp207 = *$tmp206;
// line 512
frost$core$Real64 $tmp208 = *(&local8);
frost$core$Real64$wrapper* $tmp209;
$tmp209 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp209->value = $tmp208;
$fn211 $tmp210 = ($fn211) ((frost$core$Object*) $tmp209)->$class->vtable[0];
frost$core$String* $tmp212 = $tmp210(((frost$core$Object*) $tmp209));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
return $tmp212;
block15:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {7};
frost$core$Bit $tmp214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp216 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp217 = *$tmp216;
*(&local9) = $tmp217;
org$frostlang$frostc$Type** $tmp218 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp219 = *$tmp218;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$Type* $tmp220 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local10) = $tmp219;
// line 515
org$frostlang$frostc$IR$Statement$ID $tmp221 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp222->value = $tmp221;
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s224, ((frost$core$Object*) $tmp222));
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp223, &$s226);
org$frostlang$frostc$Type* $tmp227 = *(&local10);
frost$core$String* $tmp228 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp225, ((frost$core$Object*) $tmp227));
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp228, &$s230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$Type* $tmp231 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp229;
block17:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {8};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block18; else goto block19;
block18:;
frost$core$String** $tmp235 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp236 = *$tmp235;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$String* $tmp237 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local11) = $tmp236;
// line 518
frost$core$String* $tmp238 = *(&local11);
frost$core$String* $tmp239 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp238, &$s240);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$String* $tmp241 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local11) = ((frost$core$String*) NULL);
return $tmp239;
block19:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {9};
frost$core$Bit $tmp243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp245 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp246 = *$tmp245;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
org$frostlang$frostc$IR$Value* $tmp247 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local12) = $tmp246;
org$frostlang$frostc$MethodDecl** $tmp248 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp249 = *$tmp248;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
org$frostlang$frostc$MethodDecl* $tmp250 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local13) = $tmp249;
// line 521
org$frostlang$frostc$IR$Value* $tmp251 = *(&local12);
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 != NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block22; else goto block23;
block22:;
// line 522
org$frostlang$frostc$IR$Value* $tmp254 = *(&local12);
frost$core$String* $tmp255 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s256, ((frost$core$Object*) $tmp254));
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp255, &$s258);
org$frostlang$frostc$MethodDecl* $tmp259 = *(&local13);
frost$core$String* $tmp260 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp259);
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, $tmp260);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp261, &$s263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$MethodDecl* $tmp264 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp265 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp262;
block23:;
// line 524
org$frostlang$frostc$MethodDecl* $tmp266 = *(&local13);
frost$core$String* $tmp267 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp266);
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s269, $tmp267);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$MethodDecl* $tmp272 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp273 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp270;
block21:;
frost$core$Int64 $tmp274 = (frost$core$Int64) {10};
frost$core$Bit $tmp275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp274);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp277 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp278 = *$tmp277;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$IR$Value* $tmp279 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local14) = $tmp278;
org$frostlang$frostc$FixedArray** $tmp280 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp281 = *$tmp280;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$frostc$FixedArray* $tmp282 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local15) = $tmp281;
// line 527
org$frostlang$frostc$IR$Value* $tmp283 = *(&local14);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block26; else goto block27;
block26:;
// line 528
org$frostlang$frostc$IR$Value* $tmp286 = *(&local14);
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s288, ((frost$core$Object*) $tmp286));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp287, &$s290);
org$frostlang$frostc$FixedArray* $tmp291 = *(&local15);
frost$core$String* $tmp292 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp289, ((frost$core$Object*) $tmp291));
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp292, &$s294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
org$frostlang$frostc$FixedArray* $tmp295 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp296 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp293;
block27:;
// line 530
org$frostlang$frostc$FixedArray* $tmp297 = *(&local15);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s299, ((frost$core$Object*) $tmp297));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
org$frostlang$frostc$FixedArray* $tmp302 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp303 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp300;
block25:;
frost$core$Int64 $tmp304 = (frost$core$Int64) {11};
frost$core$Bit $tmp305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Value** $tmp307 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp308 = *$tmp307;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
org$frostlang$frostc$IR$Value* $tmp309 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local16) = $tmp308;
org$frostlang$frostc$MethodDecl** $tmp310 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp311 = *$tmp310;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
org$frostlang$frostc$MethodDecl* $tmp312 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local17) = $tmp311;
org$frostlang$frostc$FixedArray** $tmp313 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp314 = *$tmp313;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
org$frostlang$frostc$FixedArray* $tmp315 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local18) = $tmp314;
// line 533
org$frostlang$frostc$IR$Value* $tmp316 = *(&local16);
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit($tmp316 != NULL);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block30; else goto block31;
block30:;
// line 534
org$frostlang$frostc$IR$Value* $tmp319 = *(&local16);
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s321, ((frost$core$Object*) $tmp319));
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp320, &$s323);
org$frostlang$frostc$MethodDecl* $tmp324 = *(&local17);
frost$core$String* $tmp325 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp324);
frost$core$String* $tmp326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp322, $tmp325);
frost$core$String* $tmp327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp326, &$s328);
org$frostlang$frostc$FixedArray* $tmp329 = *(&local18);
frost$core$String* $tmp330 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp327, ((frost$core$Object*) $tmp329));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp330, &$s332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlang$frostc$FixedArray* $tmp333 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp334 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp335 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp331;
block31:;
// line 536
org$frostlang$frostc$MethodDecl* $tmp336 = *(&local17);
frost$core$String* $tmp337 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp336);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, $tmp337);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
org$frostlang$frostc$FixedArray* $tmp342 = *(&local18);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp340, ((frost$core$Object*) $tmp342));
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$FixedArray* $tmp346 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp347 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp348 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp344;
block29:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {12};
frost$core$Bit $tmp350 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp352 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp353 = *$tmp352;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$IR$Value* $tmp354 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local19) = $tmp353;
org$frostlang$frostc$FixedArray** $tmp355 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp356 = *$tmp355;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$FixedArray* $tmp357 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local20) = $tmp356;
org$frostlang$frostc$FixedArray** $tmp358 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp359 = *$tmp358;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$FixedArray* $tmp360 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local21) = $tmp359;
// line 539
org$frostlang$frostc$IR$Value* $tmp361 = *(&local19);
frost$core$Bit $tmp362 = frost$core$Bit$init$builtin_bit($tmp361 != NULL);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block34; else goto block35;
block34:;
// line 540
org$frostlang$frostc$IR$Value* $tmp364 = *(&local19);
frost$core$String* $tmp365 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s366, ((frost$core$Object*) $tmp364));
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp365, &$s368);
org$frostlang$frostc$FixedArray* $tmp369 = *(&local20);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp367, ((frost$core$Object*) $tmp369));
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s372);
org$frostlang$frostc$FixedArray* $tmp373 = *(&local21);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp371, ((frost$core$Object*) $tmp373));
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$FixedArray* $tmp377 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp378 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp379 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp375;
block35:;
// line 542
org$frostlang$frostc$FixedArray* $tmp380 = *(&local20);
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s382, ((frost$core$Object*) $tmp380));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s384);
org$frostlang$frostc$FixedArray* $tmp385 = *(&local21);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp383, ((frost$core$Object*) $tmp385));
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$FixedArray* $tmp389 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp390 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp391 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp387;
block33:;
frost$core$Int64 $tmp392 = (frost$core$Int64) {13};
frost$core$Bit $tmp393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp392);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Type** $tmp395 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp396 = *$tmp395;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$Type* $tmp397 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local22) = $tmp396;
// line 545
org$frostlang$frostc$Type* $tmp398 = *(&local22);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s400, ((frost$core$Object*) $tmp398));
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp399, &$s402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
org$frostlang$frostc$Type* $tmp403 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp401;
block37:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {14};
frost$core$Bit $tmp405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp113, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block38; else goto block1;
block38:;
org$frostlang$frostc$Type** $tmp407 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp408 = *$tmp407;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$Type* $tmp409 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local23) = $tmp408;
// line 548
org$frostlang$frostc$Type* $tmp410 = *(&local23);
$fn412 $tmp411 = ($fn412) ((frost$core$Object*) $tmp410)->$class->vtable[0];
frost$core$String* $tmp413 = $tmp411(((frost$core$Object*) $tmp410));
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s415, $tmp413);
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp414, &$s417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
org$frostlang$frostc$Type* $tmp418 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp416;
block1:;
// line 551
goto block39;
block39:;
goto block39;
block40:;
goto block41;
block41:;

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
// line 425
frost$core$Int64* $tmp419 = &param0->$rawValue;
frost$core$Int64 $tmp420 = *$tmp419;
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
frost$core$Bit $tmp422 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp424 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp425 = *$tmp424;
*(&local0) = $tmp425;
goto block1;
block3:;
frost$core$Int64 $tmp426 = (frost$core$Int64) {1};
frost$core$Bit $tmp427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp429 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp430 = *$tmp429;
*(&local1) = $tmp430;
org$frostlang$frostc$Type** $tmp431 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp432 = *$tmp431;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
org$frostlang$frostc$Type* $tmp433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local2) = $tmp432;
// line 1
org$frostlang$frostc$Type* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
org$frostlang$frostc$Type* $tmp435 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {2};
frost$core$Bit $tmp437 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp439 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp440 = *$tmp439;
*(&local3) = $tmp440;
org$frostlang$frostc$Type** $tmp441 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp442 = *$tmp441;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
org$frostlang$frostc$Type* $tmp443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local4) = $tmp442;
// line 1
org$frostlang$frostc$Type* $tmp444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
org$frostlang$frostc$Type* $tmp445 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {3};
frost$core$Bit $tmp447 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp449 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp450 = *$tmp449;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
org$frostlang$frostc$MethodDecl* $tmp451 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local5) = $tmp450;
org$frostlang$frostc$Type** $tmp452 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp453 = *$tmp452;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlang$frostc$Type* $tmp454 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local6) = $tmp453;
// line 1
org$frostlang$frostc$MethodDecl* $tmp455 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// line 1
org$frostlang$frostc$Type* $tmp456 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
org$frostlang$frostc$Type* $tmp457 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp458 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp459 = (frost$core$Int64) {4};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp462 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp463 = *$tmp462;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$Type* $tmp464 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local7) = $tmp463;
// line 1
org$frostlang$frostc$Type* $tmp465 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$Type* $tmp466 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp467 = (frost$core$Int64) {5};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp470 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp471 = *$tmp470;
*(&local8) = $tmp471;
org$frostlang$frostc$Type** $tmp472 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp473 = *$tmp472;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Type* $tmp474 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local9) = $tmp473;
// line 1
org$frostlang$frostc$Type* $tmp475 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
org$frostlang$frostc$Type* $tmp476 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp477 = (frost$core$Int64) {6};
frost$core$Bit $tmp478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp477);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp480 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp481 = *$tmp480;
*(&local10) = $tmp481;
org$frostlang$frostc$Type** $tmp482 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp483 = *$tmp482;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$Type* $tmp484 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local11) = $tmp483;
// line 1
org$frostlang$frostc$Type* $tmp485 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$Type* $tmp486 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp487 = (frost$core$Int64) {7};
frost$core$Bit $tmp488 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp490 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp491 = *$tmp490;
*(&local12) = $tmp491;
org$frostlang$frostc$Type** $tmp492 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp493 = *$tmp492;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
org$frostlang$frostc$Type* $tmp494 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local13) = $tmp493;
// line 1
org$frostlang$frostc$Type* $tmp495 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
org$frostlang$frostc$Type* $tmp496 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp497 = (frost$core$Int64) {8};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block18; else goto block19;
block18:;
frost$core$String** $tmp500 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp501 = *$tmp500;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$String* $tmp502 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local14) = $tmp501;
// line 1
frost$core$String* $tmp503 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$String* $tmp504 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp505 = (frost$core$Int64) {9};
frost$core$Bit $tmp506 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp505);
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp508 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp509 = *$tmp508;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
org$frostlang$frostc$IR$Value* $tmp510 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local15) = $tmp509;
org$frostlang$frostc$MethodDecl** $tmp511 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp512 = *$tmp511;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
org$frostlang$frostc$MethodDecl* $tmp513 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local16) = $tmp512;
// line 1
org$frostlang$frostc$IR$Value* $tmp514 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// line 1
org$frostlang$frostc$MethodDecl* $tmp515 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
org$frostlang$frostc$MethodDecl* $tmp516 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp517 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {10};
frost$core$Bit $tmp519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp518);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block22; else goto block23;
block22:;
org$frostlang$frostc$IR$Value** $tmp521 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp522 = *$tmp521;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$IR$Value* $tmp523 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local17) = $tmp522;
org$frostlang$frostc$FixedArray** $tmp524 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp525 = *$tmp524;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
org$frostlang$frostc$FixedArray* $tmp526 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local18) = $tmp525;
// line 1
org$frostlang$frostc$IR$Value* $tmp527 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// line 1
org$frostlang$frostc$FixedArray* $tmp528 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$FixedArray* $tmp529 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp530 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {11};
frost$core$Bit $tmp532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp534 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp535 = *$tmp534;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
org$frostlang$frostc$IR$Value* $tmp536 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local19) = $tmp535;
org$frostlang$frostc$MethodDecl** $tmp537 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp538 = *$tmp537;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
org$frostlang$frostc$MethodDecl* $tmp539 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local20) = $tmp538;
org$frostlang$frostc$FixedArray** $tmp540 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp541 = *$tmp540;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
org$frostlang$frostc$FixedArray* $tmp542 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local21) = $tmp541;
// line 1
org$frostlang$frostc$IR$Value* $tmp543 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// line 1
org$frostlang$frostc$MethodDecl* $tmp544 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// line 1
org$frostlang$frostc$FixedArray* $tmp545 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
org$frostlang$frostc$FixedArray* $tmp546 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp547 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp548 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp549 = (frost$core$Int64) {12};
frost$core$Bit $tmp550 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp552 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp553 = *$tmp552;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
org$frostlang$frostc$IR$Value* $tmp554 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local22) = $tmp553;
org$frostlang$frostc$FixedArray** $tmp555 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp556 = *$tmp555;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
org$frostlang$frostc$FixedArray* $tmp557 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local23) = $tmp556;
org$frostlang$frostc$FixedArray** $tmp558 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp559 = *$tmp558;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
org$frostlang$frostc$FixedArray* $tmp560 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local24) = $tmp559;
// line 1
org$frostlang$frostc$IR$Value* $tmp561 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// line 1
org$frostlang$frostc$FixedArray* $tmp562 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// line 1
org$frostlang$frostc$FixedArray* $tmp563 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$FixedArray* $tmp564 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp565 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp566 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {13};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type** $tmp570 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp571 = *$tmp570;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$Type* $tmp572 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local25) = $tmp571;
// line 1
org$frostlang$frostc$Type* $tmp573 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
org$frostlang$frostc$Type* $tmp574 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {14};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block30; else goto block1;
block30:;
org$frostlang$frostc$Type** $tmp578 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp579 = *$tmp578;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
org$frostlang$frostc$Type* $tmp580 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local26) = $tmp579;
// line 1
org$frostlang$frostc$Type* $tmp581 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
org$frostlang$frostc$Type* $tmp582 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 425
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 425
frost$core$Int64* $tmp583 = &param0->$rawValue;
*$tmp583 = param1;
// line 425
frost$core$Bit* $tmp584 = (frost$core$Bit*) (param0->$data + 0);
*$tmp584 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp585 = &param0->$rawValue;
*$tmp585 = param1;
// line 425
frost$core$UInt64* $tmp586 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp586 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp587 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp587 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp588 = &param0->$rawValue;
*$tmp588 = param1;
// line 425
frost$core$Int64* $tmp589 = (frost$core$Int64*) (param0->$data + 0);
*$tmp589 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp590 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp590 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp591 = &param0->$rawValue;
*$tmp591 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp592 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp592 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp593 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp593 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 425
frost$core$Int64* $tmp594 = &param0->$rawValue;
*$tmp594 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp595 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp595 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp596 = &param0->$rawValue;
*$tmp596 = param1;
// line 425
frost$core$Real64* $tmp597 = (frost$core$Real64*) (param0->$data + 0);
*$tmp597 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp598 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp598 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp599 = &param0->$rawValue;
*$tmp599 = param1;
// line 425
org$frostlang$frostc$IR$Statement$ID* $tmp600 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp600 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp601 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp601 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 425
frost$core$Int64* $tmp602 = &param0->$rawValue;
*$tmp602 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp603 = (frost$core$String**) (param0->$data + 0);
*$tmp603 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 425
frost$core$Int64* $tmp604 = &param0->$rawValue;
*$tmp604 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp605 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp605 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp606 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp606 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// line 425
frost$core$Int64* $tmp607 = &param0->$rawValue;
*$tmp607 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp608 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp608 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp609 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp609 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 425
frost$core$Int64* $tmp610 = &param0->$rawValue;
*$tmp610 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp611 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp611 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp612 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp612 = param3;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp613 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp613 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 425
frost$core$Int64* $tmp614 = &param0->$rawValue;
*$tmp614 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp615 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp615 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp616 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp616 = param3;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp617 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp617 = param4;
return;

}






