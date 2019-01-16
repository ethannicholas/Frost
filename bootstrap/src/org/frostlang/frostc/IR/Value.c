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
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 91, -2850612535739845075, NULL };

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
frost$core$String* $tmp251 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s252, ((frost$core$Object*) $tmp250));
frost$core$String* $tmp253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp251, &$s254);
org$frostlang$frostc$MethodDecl* $tmp255 = *(&local13);
frost$core$String* $tmp256 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp255);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp253, $tmp256);
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, &$s259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($331:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($330:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($327:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing REF($326:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp260 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp261 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp258;
block23:;
// line 406
org$frostlang$frostc$MethodDecl* $tmp262 = *(&local13);
frost$core$String* $tmp263 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp262);
frost$core$String* $tmp264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s265, $tmp263);
frost$core$String* $tmp266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp264, &$s267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($364:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($363:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($362:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp268 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp269 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp266;
block21:;
frost$core$Int64 $tmp270 = (frost$core$Int64) {10};
frost$core$Bit $tmp271 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp273 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp274 = *$tmp273;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$IR$Value* $tmp275 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local14) = $tmp274;
org$frostlang$frostc$FixedArray** $tmp276 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$FixedArray* $tmp278 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local15) = $tmp277;
// line 409
org$frostlang$frostc$IR$Value* $tmp279 = *(&local14);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit($tmp279 != NULL);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block26; else goto block27;
block26:;
// line 410
org$frostlang$frostc$IR$Value* $tmp282 = *(&local14);
frost$core$String* $tmp283 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s284, ((frost$core$Object*) $tmp282));
frost$core$String* $tmp285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp283, &$s286);
org$frostlang$frostc$FixedArray* $tmp287 = *(&local15);
frost$core$String* $tmp288 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp285, ((frost$core$Object*) $tmp287));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp288, &$s290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing REF($423:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($422:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($419:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($418:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp291 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp292 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp289;
block27:;
// line 412
org$frostlang$frostc$FixedArray* $tmp293 = *(&local15);
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s295, ((frost$core$Object*) $tmp293));
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp294, &$s297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($453:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// unreffing REF($452:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp298 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp299 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp296;
block25:;
frost$core$Int64 $tmp300 = (frost$core$Int64) {11};
frost$core$Bit $tmp301 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Value** $tmp303 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp304 = *$tmp303;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
org$frostlang$frostc$IR$Value* $tmp305 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local16) = $tmp304;
org$frostlang$frostc$MethodDecl** $tmp306 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp307 = *$tmp306;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
org$frostlang$frostc$MethodDecl* $tmp308 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local17) = $tmp307;
org$frostlang$frostc$FixedArray** $tmp309 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp310 = *$tmp309;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$FixedArray* $tmp311 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local18) = $tmp310;
// line 415
org$frostlang$frostc$IR$Value* $tmp312 = *(&local16);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block30; else goto block31;
block30:;
// line 416
org$frostlang$frostc$IR$Value* $tmp315 = *(&local16);
frost$core$String* $tmp316 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s317, ((frost$core$Object*) $tmp315));
frost$core$String* $tmp318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp316, &$s319);
org$frostlang$frostc$MethodDecl* $tmp320 = *(&local17);
frost$core$String* $tmp321 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp320);
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp318, $tmp321);
frost$core$String* $tmp323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp322, &$s324);
org$frostlang$frostc$FixedArray* $tmp325 = *(&local18);
frost$core$String* $tmp326 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp323, ((frost$core$Object*) $tmp325));
frost$core$String* $tmp327 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp326, &$s328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($522:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing REF($521:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// unreffing REF($518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($514:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing REF($513:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp329 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp330 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp331 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp327;
block31:;
// line 418
org$frostlang$frostc$MethodDecl* $tmp332 = *(&local17);
frost$core$String* $tmp333 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp332);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s335, $tmp333);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s337);
org$frostlang$frostc$FixedArray* $tmp338 = *(&local18);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp336, ((frost$core$Object*) $tmp338));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, &$s341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($570:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing REF($569:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($566:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($565:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($564:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp342 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp343 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp344 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp340;
block29:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {12};
frost$core$Bit $tmp346 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp348 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp349 = *$tmp348;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$IR$Value* $tmp350 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local19) = $tmp349;
org$frostlang$frostc$FixedArray** $tmp351 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp352 = *$tmp351;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$FixedArray* $tmp353 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local20) = $tmp352;
org$frostlang$frostc$FixedArray** $tmp354 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp355 = *$tmp354;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
org$frostlang$frostc$FixedArray* $tmp356 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local21) = $tmp355;
// line 421
org$frostlang$frostc$IR$Value* $tmp357 = *(&local19);
frost$core$Bit $tmp358 = frost$core$Bit$init$builtin_bit($tmp357 != NULL);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block34; else goto block35;
block34:;
// line 422
org$frostlang$frostc$IR$Value* $tmp360 = *(&local19);
frost$core$String* $tmp361 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s362, ((frost$core$Object*) $tmp360));
frost$core$String* $tmp363 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp361, &$s364);
org$frostlang$frostc$FixedArray* $tmp365 = *(&local20);
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp363, ((frost$core$Object*) $tmp365));
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp366, &$s368);
org$frostlang$frostc$FixedArray* $tmp369 = *(&local21);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp367, ((frost$core$Object*) $tmp369));
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing REF($653:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($652:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($649:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($648:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing REF($645:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($644:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp373 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp374 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp375 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp371;
block35:;
// line 424
org$frostlang$frostc$FixedArray* $tmp376 = *(&local20);
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s378, ((frost$core$Object*) $tmp376));
frost$core$String* $tmp379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, &$s380);
org$frostlang$frostc$FixedArray* $tmp381 = *(&local21);
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp379, ((frost$core$Object*) $tmp381));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// unreffing REF($698:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($697:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($694:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($693:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp385 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp386 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp387 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp383;
block33:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {13};
frost$core$Bit $tmp389 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Type** $tmp391 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp392 = *$tmp391;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
org$frostlang$frostc$Type* $tmp393 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local22) = $tmp392;
// line 427
org$frostlang$frostc$Type* $tmp394 = *(&local22);
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s396, ((frost$core$Object*) $tmp394));
frost$core$String* $tmp397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp395, &$s398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing REF($746:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($745:frost.core.String)
org$frostlang$frostc$Type* $tmp399 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing type
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp397;
block37:;
frost$core$Int64 $tmp400 = (frost$core$Int64) {14};
frost$core$Bit $tmp401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block38; else goto block1;
block38:;
org$frostlang$frostc$Type** $tmp403 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp404 = *$tmp403;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
org$frostlang$frostc$Type* $tmp405 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local23) = $tmp404;
// line 430
org$frostlang$frostc$Type* $tmp406 = *(&local23);
frost$core$String* $tmp407 = org$frostlang$frostc$Type$convert$R$frost$core$String($tmp406);
frost$core$String* $tmp408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s409, $tmp407);
frost$core$String* $tmp410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp408, &$s411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing REF($778:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing REF($777:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing REF($776:frost.core.String)
org$frostlang$frostc$Type* $tmp412 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing type
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp410;
block1:;
frost$core$Bit $tmp413 = frost$core$Bit$init$builtin_bit(false);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp415 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s416, $tmp415, &$s417);
abort(); // unreachable
block39:;
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
frost$core$Int64* $tmp418 = &param0->$rawValue;
frost$core$Int64 $tmp419 = *$tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {0};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp423 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp424 = *$tmp423;
*(&local0) = $tmp424;
goto block1;
block3:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {1};
frost$core$Bit $tmp426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp428 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp429 = *$tmp428;
*(&local1) = $tmp429;
org$frostlang$frostc$Type** $tmp430 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp431 = *$tmp430;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
org$frostlang$frostc$Type* $tmp432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local2) = $tmp431;
// line 1
org$frostlang$frostc$Type* $tmp433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
org$frostlang$frostc$Type* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing _f1
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {2};
frost$core$Bit $tmp436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp438 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp439 = *$tmp438;
*(&local3) = $tmp439;
org$frostlang$frostc$Type** $tmp440 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp441 = *$tmp440;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlang$frostc$Type* $tmp442 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local4) = $tmp441;
// line 1
org$frostlang$frostc$Type* $tmp443 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
org$frostlang$frostc$Type* $tmp444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing _f1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp445 = (frost$core$Int64) {3};
frost$core$Bit $tmp446 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp448 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp449 = *$tmp448;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
org$frostlang$frostc$MethodDecl* $tmp450 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local5) = $tmp449;
org$frostlang$frostc$Type** $tmp451 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp452 = *$tmp451;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
org$frostlang$frostc$Type* $tmp453 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local6) = $tmp452;
// line 1
org$frostlang$frostc$MethodDecl* $tmp454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// line 1
org$frostlang$frostc$Type* $tmp455 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
org$frostlang$frostc$Type* $tmp456 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing _f1
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing _f0
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {4};
frost$core$Bit $tmp459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp461 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp462 = *$tmp461;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$Type* $tmp463 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local7) = $tmp462;
// line 1
org$frostlang$frostc$Type* $tmp464 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
org$frostlang$frostc$Type* $tmp465 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing _f0
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {5};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp469 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp470 = *$tmp469;
*(&local8) = $tmp470;
org$frostlang$frostc$Type** $tmp471 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp472 = *$tmp471;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Type* $tmp473 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local9) = $tmp472;
// line 1
org$frostlang$frostc$Type* $tmp474 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
org$frostlang$frostc$Type* $tmp475 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing _f1
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {6};
frost$core$Bit $tmp477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp479 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp480 = *$tmp479;
*(&local10) = $tmp480;
org$frostlang$frostc$Type** $tmp481 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp482 = *$tmp481;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
org$frostlang$frostc$Type* $tmp483 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local11) = $tmp482;
// line 1
org$frostlang$frostc$Type* $tmp484 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
org$frostlang$frostc$Type* $tmp485 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing _f1
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {7};
frost$core$Bit $tmp487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp489 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp490 = *$tmp489;
*(&local12) = $tmp490;
org$frostlang$frostc$Type** $tmp491 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp492 = *$tmp491;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
org$frostlang$frostc$Type* $tmp493 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local13) = $tmp492;
// line 1
org$frostlang$frostc$Type* $tmp494 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
org$frostlang$frostc$Type* $tmp495 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {8};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block18; else goto block19;
block18:;
frost$core$String** $tmp499 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp500 = *$tmp499;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$String* $tmp501 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local14) = $tmp500;
// line 1
frost$core$String* $tmp502 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$String* $tmp503 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing _f0
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp504 = (frost$core$Int64) {9};
frost$core$Bit $tmp505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp507 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp508 = *$tmp507;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$IR$Value* $tmp509 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local15) = $tmp508;
org$frostlang$frostc$MethodDecl** $tmp510 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp511 = *$tmp510;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
org$frostlang$frostc$MethodDecl* $tmp512 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local16) = $tmp511;
// line 1
org$frostlang$frostc$IR$Value* $tmp513 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// line 1
org$frostlang$frostc$MethodDecl* $tmp514 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
org$frostlang$frostc$MethodDecl* $tmp515 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing _f1
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp516 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing _f0
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp517 = (frost$core$Int64) {10};
frost$core$Bit $tmp518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block22; else goto block23;
block22:;
org$frostlang$frostc$IR$Value** $tmp520 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp521 = *$tmp520;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
org$frostlang$frostc$IR$Value* $tmp522 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local17) = $tmp521;
org$frostlang$frostc$FixedArray** $tmp523 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp524 = *$tmp523;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$FixedArray* $tmp525 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local18) = $tmp524;
// line 1
org$frostlang$frostc$IR$Value* $tmp526 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// line 1
org$frostlang$frostc$FixedArray* $tmp527 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
org$frostlang$frostc$FixedArray* $tmp528 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing _f1
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp529 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing _f0
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp530 = (frost$core$Int64) {11};
frost$core$Bit $tmp531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp533 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp534 = *$tmp533;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$IR$Value* $tmp535 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local19) = $tmp534;
org$frostlang$frostc$MethodDecl** $tmp536 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp537 = *$tmp536;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
org$frostlang$frostc$MethodDecl* $tmp538 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local20) = $tmp537;
org$frostlang$frostc$FixedArray** $tmp539 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp540 = *$tmp539;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
org$frostlang$frostc$FixedArray* $tmp541 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local21) = $tmp540;
// line 1
org$frostlang$frostc$IR$Value* $tmp542 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// line 1
org$frostlang$frostc$MethodDecl* $tmp543 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// line 1
org$frostlang$frostc$FixedArray* $tmp544 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
org$frostlang$frostc$FixedArray* $tmp545 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing _f2
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp546 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing _f1
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp547 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing _f0
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {12};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp551 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp552 = *$tmp551;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
org$frostlang$frostc$IR$Value* $tmp553 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local22) = $tmp552;
org$frostlang$frostc$FixedArray** $tmp554 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp555 = *$tmp554;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
org$frostlang$frostc$FixedArray* $tmp556 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local23) = $tmp555;
org$frostlang$frostc$FixedArray** $tmp557 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp558 = *$tmp557;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
org$frostlang$frostc$FixedArray* $tmp559 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local24) = $tmp558;
// line 1
org$frostlang$frostc$IR$Value* $tmp560 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// line 1
org$frostlang$frostc$FixedArray* $tmp561 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// line 1
org$frostlang$frostc$FixedArray* $tmp562 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
org$frostlang$frostc$FixedArray* $tmp563 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp564 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp565 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing _f0
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp566 = (frost$core$Int64) {13};
frost$core$Bit $tmp567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type** $tmp569 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp570 = *$tmp569;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
org$frostlang$frostc$Type* $tmp571 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local25) = $tmp570;
// line 1
org$frostlang$frostc$Type* $tmp572 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
org$frostlang$frostc$Type* $tmp573 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing _f0
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {14};
frost$core$Bit $tmp575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block30; else goto block1;
block30:;
org$frostlang$frostc$Type** $tmp577 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp578 = *$tmp577;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
org$frostlang$frostc$Type* $tmp579 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local26) = $tmp578;
// line 1
org$frostlang$frostc$Type* $tmp580 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
org$frostlang$frostc$Type* $tmp581 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
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
frost$core$Int64* $tmp582 = &param0->$rawValue;
*$tmp582 = param1;
// line 308
frost$core$Bit* $tmp583 = (frost$core$Bit*) (param0->$data + 0);
*$tmp583 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp584 = &param0->$rawValue;
*$tmp584 = param1;
// line 308
frost$core$UInt64* $tmp585 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp585 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp586 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp586 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp587 = &param0->$rawValue;
*$tmp587 = param1;
// line 308
frost$core$Int64* $tmp588 = (frost$core$Int64*) (param0->$data + 0);
*$tmp588 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp589 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp589 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp590 = &param0->$rawValue;
*$tmp590 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp591 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp591 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp592 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp592 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 308
frost$core$Int64* $tmp593 = &param0->$rawValue;
*$tmp593 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp594 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp594 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp595 = &param0->$rawValue;
*$tmp595 = param1;
// line 308
frost$core$Real64* $tmp596 = (frost$core$Real64*) (param0->$data + 0);
*$tmp596 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp597 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp597 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp598 = &param0->$rawValue;
*$tmp598 = param1;
// line 308
org$frostlang$frostc$IR$Statement$ID* $tmp599 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp599 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp600 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp600 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 308
frost$core$Int64* $tmp601 = &param0->$rawValue;
*$tmp601 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp602 = (frost$core$String**) (param0->$data + 0);
*$tmp602 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 308
frost$core$Int64* $tmp603 = &param0->$rawValue;
*$tmp603 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp604 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp604 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp605 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp605 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// line 308
frost$core$Int64* $tmp606 = &param0->$rawValue;
*$tmp606 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp607 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp607 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp608 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp608 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp609 = &param0->$rawValue;
*$tmp609 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp610 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp610 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp611 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp611 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp612 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp612 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp614 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp614 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp615 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp615 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp616 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp616 = param4;
return;

}






