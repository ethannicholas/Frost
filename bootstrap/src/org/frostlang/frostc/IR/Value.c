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

typedef frost$core$String* (*$fn124)(frost$core$Object*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);
typedef frost$core$String* (*$fn213)(frost$core$Object*);
typedef frost$core$String* (*$fn414)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -7272186204340651082, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };

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
frost$core$Int64 $tmp112 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s113, $tmp112);
abort(); // unreachable

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
frost$core$Int64* $tmp114 = &param0->$rawValue;
frost$core$Int64 $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp119 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp120 = *$tmp119;
*(&local0) = $tmp120;
// line 494
frost$core$Bit $tmp121 = *(&local0);
frost$core$Bit$wrapper* $tmp122;
$tmp122 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp122->value = $tmp121;
$fn124 $tmp123 = ($fn124) ((frost$core$Object*) $tmp122)->$class->vtable[0];
frost$core$String* $tmp125 = $tmp123(((frost$core$Object*) $tmp122));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
return $tmp125;
block3:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {1};
frost$core$Bit $tmp127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp129 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp130 = *$tmp129;
*(&local1) = $tmp130;
org$frostlang$frostc$Type** $tmp131 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
// line 497
frost$core$UInt64 $tmp133 = *(&local1);
frost$core$UInt64$wrapper* $tmp134;
$tmp134 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp134->value = $tmp133;
$fn136 $tmp135 = ($fn136) ((frost$core$Object*) $tmp134)->$class->vtable[0];
frost$core$String* $tmp137 = $tmp135(((frost$core$Object*) $tmp134));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
return $tmp137;
block5:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {2};
frost$core$Bit $tmp139 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp141 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp142 = *$tmp141;
*(&local2) = $tmp142;
org$frostlang$frostc$Type** $tmp143 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp144 = *$tmp143;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type* $tmp145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local3) = $tmp144;
// line 500
frost$core$Int64 $tmp146 = *(&local2);
frost$core$Int64$wrapper* $tmp147;
$tmp147 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp147->value = $tmp146;
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s149, ((frost$core$Object*) $tmp147));
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
org$frostlang$frostc$Type* $tmp152 = *(&local3);
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp150, ((frost$core$Object*) $tmp152));
frost$core$String* $tmp154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, &$s155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Type* $tmp156 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp154;
block7:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {4};
frost$core$Bit $tmp158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp157);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type** $tmp160 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp161 = *$tmp160;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
org$frostlang$frostc$Type* $tmp162 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local4) = $tmp161;
// line 503
org$frostlang$frostc$Type* $tmp163 = *(&local4);
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s165, ((frost$core$Object*) $tmp163));
frost$core$String* $tmp166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp164, &$s167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
org$frostlang$frostc$Type* $tmp168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp166;
block9:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {3};
frost$core$Bit $tmp170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block10; else goto block11;
block10:;
org$frostlang$frostc$MethodDecl** $tmp172 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp173 = *$tmp172;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlang$frostc$MethodDecl* $tmp174 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local5) = $tmp173;
org$frostlang$frostc$Type** $tmp175 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp176 = *$tmp175;
// line 506
org$frostlang$frostc$MethodDecl* $tmp177 = *(&local5);
frost$core$String* $tmp178 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp177);
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s180, $tmp178);
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, &$s182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$MethodDecl* $tmp183 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp181;
block11:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {5};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp187 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp188 = *$tmp187;
*(&local6) = $tmp188;
org$frostlang$frostc$Type** $tmp189 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp190 = *$tmp189;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
org$frostlang$frostc$Type* $tmp191 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local7) = $tmp190;
// line 509
frost$core$Int64 $tmp192 = *(&local6);
frost$core$Int64$wrapper* $tmp193;
$tmp193 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp193->value = $tmp192;
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s195, ((frost$core$Object*) $tmp193));
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp194, &$s197);
org$frostlang$frostc$Type* $tmp198 = *(&local7);
frost$core$String* $tmp199 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp196, ((frost$core$Object*) $tmp198));
frost$core$String* $tmp200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp199, &$s201);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Type* $tmp202 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp200;
block13:;
frost$core$Int64 $tmp203 = (frost$core$Int64) {6};
frost$core$Bit $tmp204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp206 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp207 = *$tmp206;
*(&local8) = $tmp207;
org$frostlang$frostc$Type** $tmp208 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
// line 512
frost$core$Real64 $tmp210 = *(&local8);
frost$core$Real64$wrapper* $tmp211;
$tmp211 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp211->value = $tmp210;
$fn213 $tmp212 = ($fn213) ((frost$core$Object*) $tmp211)->$class->vtable[0];
frost$core$String* $tmp214 = $tmp212(((frost$core$Object*) $tmp211));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
return $tmp214;
block15:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {7};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp218 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp219 = *$tmp218;
*(&local9) = $tmp219;
org$frostlang$frostc$Type** $tmp220 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp221 = *$tmp220;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlang$frostc$Type* $tmp222 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local10) = $tmp221;
// line 515
org$frostlang$frostc$IR$Statement$ID $tmp223 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp224->value = $tmp223;
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s226, ((frost$core$Object*) $tmp224));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
org$frostlang$frostc$Type* $tmp229 = *(&local10);
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp227, ((frost$core$Object*) $tmp229));
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp230, &$s232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$Type* $tmp233 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp231;
block17:;
frost$core$Int64 $tmp234 = (frost$core$Int64) {8};
frost$core$Bit $tmp235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block18; else goto block19;
block18:;
frost$core$String** $tmp237 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp238 = *$tmp237;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp239 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local11) = $tmp238;
// line 518
frost$core$String* $tmp240 = *(&local11);
frost$core$String* $tmp241 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp240, &$s242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$String* $tmp243 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local11) = ((frost$core$String*) NULL);
return $tmp241;
block19:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {9};
frost$core$Bit $tmp245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp247 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp248 = *$tmp247;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
org$frostlang$frostc$IR$Value* $tmp249 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local12) = $tmp248;
org$frostlang$frostc$MethodDecl** $tmp250 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp251 = *$tmp250;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
org$frostlang$frostc$MethodDecl* $tmp252 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local13) = $tmp251;
// line 521
org$frostlang$frostc$IR$Value* $tmp253 = *(&local12);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block22; else goto block23;
block22:;
// line 522
org$frostlang$frostc$IR$Value* $tmp256 = *(&local12);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s258, ((frost$core$Object*) $tmp256));
frost$core$String* $tmp259 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, &$s260);
org$frostlang$frostc$MethodDecl* $tmp261 = *(&local13);
frost$core$String* $tmp262 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp261);
frost$core$String* $tmp263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp259, $tmp262);
frost$core$String* $tmp264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp263, &$s265);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$MethodDecl* $tmp266 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp267 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp264;
block23:;
// line 524
org$frostlang$frostc$MethodDecl* $tmp268 = *(&local13);
frost$core$String* $tmp269 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp268);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s271, $tmp269);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp270, &$s273);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
org$frostlang$frostc$MethodDecl* $tmp274 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp275 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp272;
block21:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {10};
frost$core$Bit $tmp277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp279 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp280 = *$tmp279;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlang$frostc$IR$Value* $tmp281 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local14) = $tmp280;
org$frostlang$frostc$FixedArray** $tmp282 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp283 = *$tmp282;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$frostc$FixedArray* $tmp284 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local15) = $tmp283;
// line 527
org$frostlang$frostc$IR$Value* $tmp285 = *(&local14);
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit($tmp285 != NULL);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block26; else goto block27;
block26:;
// line 528
org$frostlang$frostc$IR$Value* $tmp288 = *(&local14);
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s290, ((frost$core$Object*) $tmp288));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp289, &$s292);
org$frostlang$frostc$FixedArray* $tmp293 = *(&local15);
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp291, ((frost$core$Object*) $tmp293));
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp294, &$s296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$FixedArray* $tmp297 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp298 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp295;
block27:;
// line 530
org$frostlang$frostc$FixedArray* $tmp299 = *(&local15);
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s301, ((frost$core$Object*) $tmp299));
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, &$s303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$FixedArray* $tmp304 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp305 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp302;
block25:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {11};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Value** $tmp309 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp310 = *$tmp309;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$IR$Value* $tmp311 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local16) = $tmp310;
org$frostlang$frostc$MethodDecl** $tmp312 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp313 = *$tmp312;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$MethodDecl* $tmp314 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local17) = $tmp313;
org$frostlang$frostc$FixedArray** $tmp315 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp316 = *$tmp315;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlang$frostc$FixedArray* $tmp317 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local18) = $tmp316;
// line 533
org$frostlang$frostc$IR$Value* $tmp318 = *(&local16);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 != NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block30; else goto block31;
block30:;
// line 534
org$frostlang$frostc$IR$Value* $tmp321 = *(&local16);
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s323, ((frost$core$Object*) $tmp321));
frost$core$String* $tmp324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp322, &$s325);
org$frostlang$frostc$MethodDecl* $tmp326 = *(&local17);
frost$core$String* $tmp327 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp326);
frost$core$String* $tmp328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp324, $tmp327);
frost$core$String* $tmp329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp328, &$s330);
org$frostlang$frostc$FixedArray* $tmp331 = *(&local18);
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp329, ((frost$core$Object*) $tmp331));
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp332, &$s334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$FixedArray* $tmp335 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp336 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp337 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp333;
block31:;
// line 536
org$frostlang$frostc$MethodDecl* $tmp338 = *(&local17);
frost$core$String* $tmp339 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp338);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s341, $tmp339);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
org$frostlang$frostc$FixedArray* $tmp344 = *(&local18);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp342, ((frost$core$Object*) $tmp344));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$FixedArray* $tmp348 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp349 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp350 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp346;
block29:;
frost$core$Int64 $tmp351 = (frost$core$Int64) {12};
frost$core$Bit $tmp352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp354 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp355 = *$tmp354;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
org$frostlang$frostc$IR$Value* $tmp356 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local19) = $tmp355;
org$frostlang$frostc$FixedArray** $tmp357 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp358 = *$tmp357;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
org$frostlang$frostc$FixedArray* $tmp359 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local20) = $tmp358;
org$frostlang$frostc$FixedArray** $tmp360 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp361 = *$tmp360;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$FixedArray* $tmp362 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local21) = $tmp361;
// line 539
org$frostlang$frostc$IR$Value* $tmp363 = *(&local19);
frost$core$Bit $tmp364 = frost$core$Bit$init$builtin_bit($tmp363 != NULL);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block34; else goto block35;
block34:;
// line 540
org$frostlang$frostc$IR$Value* $tmp366 = *(&local19);
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s368, ((frost$core$Object*) $tmp366));
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp367, &$s370);
org$frostlang$frostc$FixedArray* $tmp371 = *(&local20);
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp369, ((frost$core$Object*) $tmp371));
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp372, &$s374);
org$frostlang$frostc$FixedArray* $tmp375 = *(&local21);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp373, ((frost$core$Object*) $tmp375));
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, &$s378);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$FixedArray* $tmp379 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp380 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp381 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp377;
block35:;
// line 542
org$frostlang$frostc$FixedArray* $tmp382 = *(&local20);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s384, ((frost$core$Object*) $tmp382));
frost$core$String* $tmp385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, &$s386);
org$frostlang$frostc$FixedArray* $tmp387 = *(&local21);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp385, ((frost$core$Object*) $tmp387));
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$FixedArray* $tmp391 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp392 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp393 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp389;
block33:;
frost$core$Int64 $tmp394 = (frost$core$Int64) {13};
frost$core$Bit $tmp395 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp394);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Type** $tmp397 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp398 = *$tmp397;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
org$frostlang$frostc$Type* $tmp399 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local22) = $tmp398;
// line 545
org$frostlang$frostc$Type* $tmp400 = *(&local22);
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s402, ((frost$core$Object*) $tmp400));
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp401, &$s404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
org$frostlang$frostc$Type* $tmp405 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp403;
block37:;
frost$core$Int64 $tmp406 = (frost$core$Int64) {14};
frost$core$Bit $tmp407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp115, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block38; else goto block1;
block38:;
org$frostlang$frostc$Type** $tmp409 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp410 = *$tmp409;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$Type* $tmp411 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local23) = $tmp410;
// line 548
org$frostlang$frostc$Type* $tmp412 = *(&local23);
$fn414 $tmp413 = ($fn414) ((frost$core$Object*) $tmp412)->$class->vtable[0];
frost$core$String* $tmp415 = $tmp413(((frost$core$Object*) $tmp412));
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s417, $tmp415);
frost$core$String* $tmp418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp416, &$s419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
org$frostlang$frostc$Type* $tmp420 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp418;
block1:;
// line 551
frost$core$Int64 $tmp421 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s422, $tmp421);
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
// line 425
frost$core$Int64* $tmp423 = &param0->$rawValue;
frost$core$Int64 $tmp424 = *$tmp423;
frost$core$Int64 $tmp425 = (frost$core$Int64) {0};
frost$core$Bit $tmp426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp428 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp429 = *$tmp428;
*(&local0) = $tmp429;
goto block1;
block3:;
frost$core$Int64 $tmp430 = (frost$core$Int64) {1};
frost$core$Bit $tmp431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp430);
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp433 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp434 = *$tmp433;
*(&local1) = $tmp434;
org$frostlang$frostc$Type** $tmp435 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp436 = *$tmp435;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
org$frostlang$frostc$Type* $tmp437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local2) = $tmp436;
// line 1
org$frostlang$frostc$Type* $tmp438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
org$frostlang$frostc$Type* $tmp439 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {2};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp443 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp444 = *$tmp443;
*(&local3) = $tmp444;
org$frostlang$frostc$Type** $tmp445 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp446 = *$tmp445;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$Type* $tmp447 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local4) = $tmp446;
// line 1
org$frostlang$frostc$Type* $tmp448 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
org$frostlang$frostc$Type* $tmp449 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {3};
frost$core$Bit $tmp451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp453 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp454 = *$tmp453;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
org$frostlang$frostc$MethodDecl* $tmp455 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local5) = $tmp454;
org$frostlang$frostc$Type** $tmp456 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp457 = *$tmp456;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
org$frostlang$frostc$Type* $tmp458 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local6) = $tmp457;
// line 1
org$frostlang$frostc$MethodDecl* $tmp459 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// line 1
org$frostlang$frostc$Type* $tmp460 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$Type* $tmp461 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {4};
frost$core$Bit $tmp464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp466 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp467 = *$tmp466;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
org$frostlang$frostc$Type* $tmp468 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local7) = $tmp467;
// line 1
org$frostlang$frostc$Type* $tmp469 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
org$frostlang$frostc$Type* $tmp470 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp471 = (frost$core$Int64) {5};
frost$core$Bit $tmp472 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp474 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp475 = *$tmp474;
*(&local8) = $tmp475;
org$frostlang$frostc$Type** $tmp476 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp477 = *$tmp476;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
org$frostlang$frostc$Type* $tmp478 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local9) = $tmp477;
// line 1
org$frostlang$frostc$Type* $tmp479 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$Type* $tmp480 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {6};
frost$core$Bit $tmp482 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp481);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp484 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp485 = *$tmp484;
*(&local10) = $tmp485;
org$frostlang$frostc$Type** $tmp486 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp487 = *$tmp486;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
org$frostlang$frostc$Type* $tmp488 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local11) = $tmp487;
// line 1
org$frostlang$frostc$Type* $tmp489 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
org$frostlang$frostc$Type* $tmp490 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp491 = (frost$core$Int64) {7};
frost$core$Bit $tmp492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp491);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp494 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp495 = *$tmp494;
*(&local12) = $tmp495;
org$frostlang$frostc$Type** $tmp496 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp497 = *$tmp496;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$Type* $tmp498 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local13) = $tmp497;
// line 1
org$frostlang$frostc$Type* $tmp499 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
org$frostlang$frostc$Type* $tmp500 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp501 = (frost$core$Int64) {8};
frost$core$Bit $tmp502 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp501);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block18; else goto block19;
block18:;
frost$core$String** $tmp504 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp505 = *$tmp504;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$String* $tmp506 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local14) = $tmp505;
// line 1
frost$core$String* $tmp507 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$String* $tmp508 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp509 = (frost$core$Int64) {9};
frost$core$Bit $tmp510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp512 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp513 = *$tmp512;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
org$frostlang$frostc$IR$Value* $tmp514 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local15) = $tmp513;
org$frostlang$frostc$MethodDecl** $tmp515 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp516 = *$tmp515;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
org$frostlang$frostc$MethodDecl* $tmp517 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local16) = $tmp516;
// line 1
org$frostlang$frostc$IR$Value* $tmp518 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// line 1
org$frostlang$frostc$MethodDecl* $tmp519 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
org$frostlang$frostc$MethodDecl* $tmp520 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp521 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp522 = (frost$core$Int64) {10};
frost$core$Bit $tmp523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block22; else goto block23;
block22:;
org$frostlang$frostc$IR$Value** $tmp525 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp526 = *$tmp525;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
org$frostlang$frostc$IR$Value* $tmp527 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local17) = $tmp526;
org$frostlang$frostc$FixedArray** $tmp528 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp529 = *$tmp528;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
org$frostlang$frostc$FixedArray* $tmp530 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local18) = $tmp529;
// line 1
org$frostlang$frostc$IR$Value* $tmp531 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// line 1
org$frostlang$frostc$FixedArray* $tmp532 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
org$frostlang$frostc$FixedArray* $tmp533 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp534 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp535 = (frost$core$Int64) {11};
frost$core$Bit $tmp536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp538 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp539 = *$tmp538;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlang$frostc$IR$Value* $tmp540 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local19) = $tmp539;
org$frostlang$frostc$MethodDecl** $tmp541 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp542 = *$tmp541;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
org$frostlang$frostc$MethodDecl* $tmp543 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local20) = $tmp542;
org$frostlang$frostc$FixedArray** $tmp544 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp545 = *$tmp544;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
org$frostlang$frostc$FixedArray* $tmp546 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local21) = $tmp545;
// line 1
org$frostlang$frostc$IR$Value* $tmp547 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// line 1
org$frostlang$frostc$MethodDecl* $tmp548 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// line 1
org$frostlang$frostc$FixedArray* $tmp549 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
org$frostlang$frostc$FixedArray* $tmp550 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp551 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp552 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {12};
frost$core$Bit $tmp554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp556 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp557 = *$tmp556;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$IR$Value* $tmp558 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local22) = $tmp557;
org$frostlang$frostc$FixedArray** $tmp559 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp560 = *$tmp559;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
org$frostlang$frostc$FixedArray* $tmp561 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local23) = $tmp560;
org$frostlang$frostc$FixedArray** $tmp562 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp563 = *$tmp562;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$FixedArray* $tmp564 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local24) = $tmp563;
// line 1
org$frostlang$frostc$IR$Value* $tmp565 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// line 1
org$frostlang$frostc$FixedArray* $tmp566 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// line 1
org$frostlang$frostc$FixedArray* $tmp567 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
org$frostlang$frostc$FixedArray* $tmp568 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp569 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp570 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {13};
frost$core$Bit $tmp572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type** $tmp574 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp575 = *$tmp574;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
org$frostlang$frostc$Type* $tmp576 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local25) = $tmp575;
// line 1
org$frostlang$frostc$Type* $tmp577 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
org$frostlang$frostc$Type* $tmp578 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {14};
frost$core$Bit $tmp580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp424, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block30; else goto block1;
block30:;
org$frostlang$frostc$Type** $tmp582 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp583 = *$tmp582;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
org$frostlang$frostc$Type* $tmp584 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local26) = $tmp583;
// line 1
org$frostlang$frostc$Type* $tmp585 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
org$frostlang$frostc$Type* $tmp586 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 425
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 425
frost$core$Int64* $tmp587 = &param0->$rawValue;
*$tmp587 = param1;
// line 425
frost$core$Bit* $tmp588 = (frost$core$Bit*) (param0->$data + 0);
*$tmp588 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp589 = &param0->$rawValue;
*$tmp589 = param1;
// line 425
frost$core$UInt64* $tmp590 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp590 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp591 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp591 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp592 = &param0->$rawValue;
*$tmp592 = param1;
// line 425
frost$core$Int64* $tmp593 = (frost$core$Int64*) (param0->$data + 0);
*$tmp593 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp594 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp594 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp595 = &param0->$rawValue;
*$tmp595 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp596 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp596 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp597 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp597 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 425
frost$core$Int64* $tmp598 = &param0->$rawValue;
*$tmp598 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp599 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp599 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp600 = &param0->$rawValue;
*$tmp600 = param1;
// line 425
frost$core$Real64* $tmp601 = (frost$core$Real64*) (param0->$data + 0);
*$tmp601 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp602 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp602 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// line 425
frost$core$Int64* $tmp603 = &param0->$rawValue;
*$tmp603 = param1;
// line 425
org$frostlang$frostc$IR$Statement$ID* $tmp604 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp604 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp605 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp605 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 425
frost$core$Int64* $tmp606 = &param0->$rawValue;
*$tmp606 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp607 = (frost$core$String**) (param0->$data + 0);
*$tmp607 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 425
frost$core$Int64* $tmp608 = &param0->$rawValue;
*$tmp608 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp609 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp609 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp610 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp610 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// line 425
frost$core$Int64* $tmp611 = &param0->$rawValue;
*$tmp611 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp612 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp612 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp613 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp613 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 425
frost$core$Int64* $tmp614 = &param0->$rawValue;
*$tmp614 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp615 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp615 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp616 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp616 = param3;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp617 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp617 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 425
frost$core$Int64* $tmp618 = &param0->$rawValue;
*$tmp618 = param1;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp619 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp619 = param2;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp620 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp620 = param3;
// line 425
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp621 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp621 = param4;
return;

}






