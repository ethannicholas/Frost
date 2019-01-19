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

typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn139)(frost$core$Object*);
typedef frost$core$String* (*$fn216)(frost$core$Object*);
typedef frost$core$String* (*$fn437)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -7272186204340651082, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x74\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, -6683945138451859119, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 1393803510449382482, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 96, -4736675220551462310, NULL };

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
frost$core$Bit$wrapper* $tmp125;
$tmp125 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp125->value = $tmp124;
$fn127 $tmp126 = ($fn127) ((frost$core$Object*) $tmp125)->$class->vtable[0];
frost$core$String* $tmp128 = $tmp126(((frost$core$Object*) $tmp125));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($12:frost.core.Object)
return $tmp128;
block3:;
frost$core$Int64 $tmp129 = (frost$core$Int64) {1};
frost$core$Bit $tmp130 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp129);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp132 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp133 = *$tmp132;
*(&local1) = $tmp133;
org$frostlang$frostc$Type** $tmp134 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp135 = *$tmp134;
// line 379
frost$core$UInt64 $tmp136 = *(&local1);
frost$core$UInt64$wrapper* $tmp137;
$tmp137 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp137->value = $tmp136;
$fn139 $tmp138 = ($fn139) ((frost$core$Object*) $tmp137)->$class->vtable[0];
frost$core$String* $tmp140 = $tmp138(((frost$core$Object*) $tmp137));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($35:frost.core.Object)
return $tmp140;
block5:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {2};
frost$core$Bit $tmp142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp141);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp144 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp145 = *$tmp144;
*(&local2) = $tmp145;
org$frostlang$frostc$Type** $tmp146 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp147 = *$tmp146;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Type* $tmp148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local3) = $tmp147;
// line 382
frost$core$Int64 $tmp149 = *(&local2);
frost$core$Int64$wrapper* $tmp150;
$tmp150 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp150->value = $tmp149;
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s152, ((frost$core$Object*) $tmp150));
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp151, &$s154);
org$frostlang$frostc$Type* $tmp155 = *(&local3);
frost$core$String* $tmp156 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp153, ((frost$core$Object*) $tmp155));
frost$core$String* $tmp157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp156, &$s158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($71:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($70:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($67:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($66:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($65:frost.core.Object)
org$frostlang$frostc$Type* $tmp159 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing type
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp157;
block7:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {4};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type** $tmp163 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp164 = *$tmp163;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
org$frostlang$frostc$Type* $tmp165 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local4) = $tmp164;
// line 385
org$frostlang$frostc$Type* $tmp166 = *(&local4);
frost$core$String* $tmp167 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s168, ((frost$core$Object*) $tmp166));
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp167, &$s170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing REF($112:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($111:frost.core.String)
org$frostlang$frostc$Type* $tmp171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing type
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp169;
block9:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {3};
frost$core$Bit $tmp173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block10; else goto block11;
block10:;
org$frostlang$frostc$MethodDecl** $tmp175 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp176 = *$tmp175;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$MethodDecl* $tmp177 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local5) = $tmp176;
org$frostlang$frostc$Type** $tmp178 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp179 = *$tmp178;
// line 388
org$frostlang$frostc$MethodDecl* $tmp180 = *(&local5);
frost$core$String* $tmp181 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp180);
frost$core$String* $tmp182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s183, $tmp181);
frost$core$String* $tmp184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp182, &$s185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($146:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($145:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($144:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp186 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing m
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp184;
block11:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {5};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp190 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp191 = *$tmp190;
*(&local6) = $tmp191;
org$frostlang$frostc$Type** $tmp192 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp193 = *$tmp192;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Type* $tmp194 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local7) = $tmp193;
// line 391
frost$core$Int64 $tmp195 = *(&local6);
frost$core$Int64$wrapper* $tmp196;
$tmp196 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp196->value = $tmp195;
frost$core$String* $tmp197 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s198, ((frost$core$Object*) $tmp196));
frost$core$String* $tmp199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp197, &$s200);
org$frostlang$frostc$Type* $tmp201 = *(&local7);
frost$core$String* $tmp202 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp199, ((frost$core$Object*) $tmp201));
frost$core$String* $tmp203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp202, &$s204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($187:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($182:frost.core.Object)
org$frostlang$frostc$Type* $tmp205 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing type
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp203;
block13:;
frost$core$Int64 $tmp206 = (frost$core$Int64) {6};
frost$core$Bit $tmp207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp209 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp210 = *$tmp209;
*(&local8) = $tmp210;
org$frostlang$frostc$Type** $tmp211 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
// line 394
frost$core$Real64 $tmp213 = *(&local8);
frost$core$Real64$wrapper* $tmp214;
$tmp214 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp214->value = $tmp213;
$fn216 $tmp215 = ($fn216) ((frost$core$Object*) $tmp214)->$class->vtable[0];
frost$core$String* $tmp217 = $tmp215(((frost$core$Object*) $tmp214));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($225:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($223:frost.core.Object)
return $tmp217;
block15:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {7};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp221 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp222 = *$tmp221;
*(&local9) = $tmp222;
org$frostlang$frostc$Type** $tmp223 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp224 = *$tmp223;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$Type* $tmp225 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local10) = $tmp224;
// line 397
org$frostlang$frostc$IR$Statement$ID $tmp226 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp227;
$tmp227 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp227->value = $tmp226;
frost$core$String* $tmp228 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s229, ((frost$core$Object*) $tmp227));
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp228, &$s231);
org$frostlang$frostc$Type* $tmp232 = *(&local10);
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp230, ((frost$core$Object*) $tmp232));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp233, &$s235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($259:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($258:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing REF($255:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($254:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($253:frost.core.Object)
org$frostlang$frostc$Type* $tmp236 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing type
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp234;
block17:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {8};
frost$core$Bit $tmp238 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block18; else goto block19;
block18:;
frost$core$String** $tmp240 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp241 = *$tmp240;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$String* $tmp242 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local11) = $tmp241;
// line 400
frost$core$String* $tmp243 = *(&local11);
frost$core$String* $tmp244 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp243, &$s245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($298:frost.core.String)
frost$core$String* $tmp246 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing s
*(&local11) = ((frost$core$String*) NULL);
return $tmp244;
block19:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {9};
frost$core$Bit $tmp248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp250 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp251 = *$tmp250;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
org$frostlang$frostc$IR$Value* $tmp252 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local12) = $tmp251;
org$frostlang$frostc$MethodDecl** $tmp253 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp254 = *$tmp253;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
org$frostlang$frostc$MethodDecl* $tmp255 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local13) = $tmp254;
// line 403
org$frostlang$frostc$IR$Value* $tmp256 = *(&local12);
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256 != NULL);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block22; else goto block23;
block22:;
// line 404
org$frostlang$frostc$IR$Value* $tmp259 = *(&local12);
frost$core$Bit $tmp260 = frost$core$Bit$init$builtin_bit($tmp259 != NULL);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp262 = (frost$core$Int64) {404};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s263, $tmp262, &$s264);
abort(); // unreachable
block24:;
frost$core$String* $tmp265 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s266, ((frost$core$Object*) $tmp259));
frost$core$String* $tmp267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp265, &$s268);
org$frostlang$frostc$MethodDecl* $tmp269 = *(&local13);
frost$core$String* $tmp270 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp269);
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp267, $tmp270);
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, &$s273);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($353:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($352:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($351:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($349:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($348:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp274 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp275 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp272;
block23:;
// line 406
org$frostlang$frostc$MethodDecl* $tmp276 = *(&local13);
frost$core$String* $tmp277 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp276);
frost$core$String* $tmp278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s279, $tmp277);
frost$core$String* $tmp280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp278, &$s281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($386:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($385:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($384:frost.core.String)
org$frostlang$frostc$MethodDecl* $tmp282 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp283 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing target
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp280;
block21:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {10};
frost$core$Bit $tmp285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp287 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp288 = *$tmp287;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$IR$Value* $tmp289 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local14) = $tmp288;
org$frostlang$frostc$FixedArray** $tmp290 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp291 = *$tmp290;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$FixedArray* $tmp292 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local15) = $tmp291;
// line 409
org$frostlang$frostc$IR$Value* $tmp293 = *(&local14);
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit($tmp293 != NULL);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block28; else goto block29;
block28:;
// line 410
org$frostlang$frostc$IR$Value* $tmp296 = *(&local14);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {410};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block30:;
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s303, ((frost$core$Object*) $tmp296));
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, &$s305);
org$frostlang$frostc$FixedArray* $tmp306 = *(&local15);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp304, ((frost$core$Object*) $tmp306));
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp307, &$s309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($451:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($448:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($447:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp310 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp311 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp308;
block29:;
// line 412
org$frostlang$frostc$FixedArray* $tmp312 = *(&local15);
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s314, ((frost$core$Object*) $tmp312));
frost$core$String* $tmp315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, &$s316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($482:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($481:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp317 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing m
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp318 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing target
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp315;
block27:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {11};
frost$core$Bit $tmp320 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp322 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp323 = *$tmp322;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
org$frostlang$frostc$IR$Value* $tmp324 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local16) = $tmp323;
org$frostlang$frostc$MethodDecl** $tmp325 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp326 = *$tmp325;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
org$frostlang$frostc$MethodDecl* $tmp327 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local17) = $tmp326;
org$frostlang$frostc$FixedArray** $tmp328 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp329 = *$tmp328;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$FixedArray* $tmp330 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local18) = $tmp329;
// line 415
org$frostlang$frostc$IR$Value* $tmp331 = *(&local16);
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit($tmp331 != NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block34; else goto block35;
block34:;
// line 416
org$frostlang$frostc$IR$Value* $tmp334 = *(&local16);
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit($tmp334 != NULL);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp337 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s338, $tmp337, &$s339);
abort(); // unreachable
block36:;
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s341, ((frost$core$Object*) $tmp334));
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
org$frostlang$frostc$MethodDecl* $tmp344 = *(&local17);
frost$core$String* $tmp345 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp344);
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, $tmp345);
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, &$s348);
org$frostlang$frostc$FixedArray* $tmp349 = *(&local18);
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp347, ((frost$core$Object*) $tmp349));
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($558:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($557:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($554:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($553:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($552:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($550:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($549:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp353 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp354 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp355 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp351;
block35:;
// line 418
org$frostlang$frostc$MethodDecl* $tmp356 = *(&local17);
frost$core$String* $tmp357 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp356);
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s359, $tmp357);
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp358, &$s361);
org$frostlang$frostc$FixedArray* $tmp362 = *(&local18);
frost$core$String* $tmp363 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp360, ((frost$core$Object*) $tmp362));
frost$core$String* $tmp364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp363, &$s365);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($606:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing REF($605:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($602:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($601:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// unreffing REF($600:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp366 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing types
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp367 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing m
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp368 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing target
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp364;
block33:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {12};
frost$core$Bit $tmp370 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp369);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block38; else goto block39;
block38:;
org$frostlang$frostc$IR$Value** $tmp372 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp373 = *$tmp372;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$IR$Value* $tmp374 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local19) = $tmp373;
org$frostlang$frostc$FixedArray** $tmp375 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp376 = *$tmp375;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$FixedArray* $tmp377 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local20) = $tmp376;
org$frostlang$frostc$FixedArray** $tmp378 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp379 = *$tmp378;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$FixedArray* $tmp380 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local21) = $tmp379;
// line 421
org$frostlang$frostc$IR$Value* $tmp381 = *(&local19);
frost$core$Bit $tmp382 = frost$core$Bit$init$builtin_bit($tmp381 != NULL);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block40; else goto block41;
block40:;
// line 422
org$frostlang$frostc$IR$Value* $tmp384 = *(&local19);
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384 != NULL);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp387 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s388, $tmp387, &$s389);
abort(); // unreachable
block42:;
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s391, ((frost$core$Object*) $tmp384));
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp390, &$s393);
org$frostlang$frostc$FixedArray* $tmp394 = *(&local20);
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp392, ((frost$core$Object*) $tmp394));
frost$core$String* $tmp396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp395, &$s397);
org$frostlang$frostc$FixedArray* $tmp398 = *(&local21);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp396, ((frost$core$Object*) $tmp398));
frost$core$String* $tmp400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp399, &$s401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing REF($696:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing REF($695:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($692:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($691:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing REF($688:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($687:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp402 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp403 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp404 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp400;
block41:;
// line 424
org$frostlang$frostc$FixedArray* $tmp405 = *(&local20);
frost$core$String* $tmp406 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s407, ((frost$core$Object*) $tmp405));
frost$core$String* $tmp408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp406, &$s409);
org$frostlang$frostc$FixedArray* $tmp410 = *(&local21);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp408, ((frost$core$Object*) $tmp410));
frost$core$String* $tmp412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp411, &$s413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing REF($741:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($740:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing REF($737:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($736:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp414 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing types
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp415 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing m
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp416 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing target
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp412;
block39:;
frost$core$Int64 $tmp417 = (frost$core$Int64) {13};
frost$core$Bit $tmp418 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type** $tmp420 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp421 = *$tmp420;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
org$frostlang$frostc$Type* $tmp422 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local22) = $tmp421;
// line 427
org$frostlang$frostc$Type* $tmp423 = *(&local22);
frost$core$String* $tmp424 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s425, ((frost$core$Object*) $tmp423));
frost$core$String* $tmp426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp424, &$s427);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($789:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing REF($788:frost.core.String)
org$frostlang$frostc$Type* $tmp428 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing type
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp426;
block45:;
frost$core$Int64 $tmp429 = (frost$core$Int64) {14};
frost$core$Bit $tmp430 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp118, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block46; else goto block1;
block46:;
org$frostlang$frostc$Type** $tmp432 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp433 = *$tmp432;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
org$frostlang$frostc$Type* $tmp434 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local23) = $tmp433;
// line 430
org$frostlang$frostc$Type* $tmp435 = *(&local23);
$fn437 $tmp436 = ($fn437) ((frost$core$Object*) $tmp435)->$class->vtable[0];
frost$core$String* $tmp438 = $tmp436(((frost$core$Object*) $tmp435));
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s440, $tmp438);
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp439, &$s442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($823:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing REF($822:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($821:frost.core.String)
org$frostlang$frostc$Type* $tmp443 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing type
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp441;
block1:;
frost$core$Bit $tmp444 = frost$core$Bit$init$builtin_bit(false);
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s447, $tmp446, &$s448);
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
frost$core$Int64* $tmp449 = &param0->$rawValue;
frost$core$Int64 $tmp450 = *$tmp449;
frost$core$Int64 $tmp451 = (frost$core$Int64) {0};
frost$core$Bit $tmp452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp454 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp455 = *$tmp454;
*(&local0) = $tmp455;
goto block1;
block3:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {1};
frost$core$Bit $tmp457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp459 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp460 = *$tmp459;
*(&local1) = $tmp460;
org$frostlang$frostc$Type** $tmp461 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp462 = *$tmp461;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$Type* $tmp463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local2) = $tmp462;
// line 1
org$frostlang$frostc$Type* $tmp464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
org$frostlang$frostc$Type* $tmp465 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing _f1
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {2};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp469 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp470 = *$tmp469;
*(&local3) = $tmp470;
org$frostlang$frostc$Type** $tmp471 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp472 = *$tmp471;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Type* $tmp473 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local4) = $tmp472;
// line 1
org$frostlang$frostc$Type* $tmp474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
org$frostlang$frostc$Type* $tmp475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing _f1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {3};
frost$core$Bit $tmp477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp479 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp480 = *$tmp479;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
org$frostlang$frostc$MethodDecl* $tmp481 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local5) = $tmp480;
org$frostlang$frostc$Type** $tmp482 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp483 = *$tmp482;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$Type* $tmp484 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local6) = $tmp483;
// line 1
org$frostlang$frostc$MethodDecl* $tmp485 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// line 1
org$frostlang$frostc$Type* $tmp486 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
org$frostlang$frostc$Type* $tmp487 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing _f1
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing _f0
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp489 = (frost$core$Int64) {4};
frost$core$Bit $tmp490 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp489);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type** $tmp492 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp493 = *$tmp492;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
org$frostlang$frostc$Type* $tmp494 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local7) = $tmp493;
// line 1
org$frostlang$frostc$Type* $tmp495 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
org$frostlang$frostc$Type* $tmp496 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing _f0
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp497 = (frost$core$Int64) {5};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp500 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp501 = *$tmp500;
*(&local8) = $tmp501;
org$frostlang$frostc$Type** $tmp502 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp503 = *$tmp502;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
org$frostlang$frostc$Type* $tmp504 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local9) = $tmp503;
// line 1
org$frostlang$frostc$Type* $tmp505 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
org$frostlang$frostc$Type* $tmp506 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing _f1
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp507 = (frost$core$Int64) {6};
frost$core$Bit $tmp508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp507);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block14; else goto block15;
block14:;
frost$core$Real64* $tmp510 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp511 = *$tmp510;
*(&local10) = $tmp511;
org$frostlang$frostc$Type** $tmp512 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp513 = *$tmp512;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
org$frostlang$frostc$Type* $tmp514 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local11) = $tmp513;
// line 1
org$frostlang$frostc$Type* $tmp515 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
org$frostlang$frostc$Type* $tmp516 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing _f1
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp517 = (frost$core$Int64) {7};
frost$core$Bit $tmp518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block16; else goto block17;
block16:;
org$frostlang$frostc$IR$Statement$ID* $tmp520 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp521 = *$tmp520;
*(&local12) = $tmp521;
org$frostlang$frostc$Type** $tmp522 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp523 = *$tmp522;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
org$frostlang$frostc$Type* $tmp524 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local13) = $tmp523;
// line 1
org$frostlang$frostc$Type* $tmp525 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
org$frostlang$frostc$Type* $tmp526 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {8};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block18; else goto block19;
block18:;
frost$core$String** $tmp530 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp531 = *$tmp530;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$String* $tmp532 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local14) = $tmp531;
// line 1
frost$core$String* $tmp533 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$String* $tmp534 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// unreffing _f0
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp535 = (frost$core$Int64) {9};
frost$core$Bit $tmp536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block20; else goto block21;
block20:;
org$frostlang$frostc$IR$Value** $tmp538 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp539 = *$tmp538;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlang$frostc$IR$Value* $tmp540 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local15) = $tmp539;
org$frostlang$frostc$MethodDecl** $tmp541 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp542 = *$tmp541;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
org$frostlang$frostc$MethodDecl* $tmp543 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local16) = $tmp542;
// line 1
org$frostlang$frostc$IR$Value* $tmp544 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// line 1
org$frostlang$frostc$MethodDecl* $tmp545 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
org$frostlang$frostc$MethodDecl* $tmp546 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing _f1
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp547 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing _f0
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {10};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block22; else goto block23;
block22:;
org$frostlang$frostc$IR$Value** $tmp551 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp552 = *$tmp551;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
org$frostlang$frostc$IR$Value* $tmp553 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local17) = $tmp552;
org$frostlang$frostc$FixedArray** $tmp554 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp555 = *$tmp554;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
org$frostlang$frostc$FixedArray* $tmp556 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local18) = $tmp555;
// line 1
org$frostlang$frostc$IR$Value* $tmp557 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// line 1
org$frostlang$frostc$FixedArray* $tmp558 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
org$frostlang$frostc$FixedArray* $tmp559 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing _f1
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp560 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing _f0
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {11};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block24; else goto block25;
block24:;
org$frostlang$frostc$IR$Value** $tmp564 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp565 = *$tmp564;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
org$frostlang$frostc$IR$Value* $tmp566 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local19) = $tmp565;
org$frostlang$frostc$MethodDecl** $tmp567 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp568 = *$tmp567;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$MethodDecl* $tmp569 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local20) = $tmp568;
org$frostlang$frostc$FixedArray** $tmp570 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp571 = *$tmp570;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$FixedArray* $tmp572 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local21) = $tmp571;
// line 1
org$frostlang$frostc$IR$Value* $tmp573 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// line 1
org$frostlang$frostc$MethodDecl* $tmp574 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// line 1
org$frostlang$frostc$FixedArray* $tmp575 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
org$frostlang$frostc$FixedArray* $tmp576 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing _f2
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp577 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing _f1
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp578 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing _f0
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {12};
frost$core$Bit $tmp580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block26; else goto block27;
block26:;
org$frostlang$frostc$IR$Value** $tmp582 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp583 = *$tmp582;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
org$frostlang$frostc$IR$Value* $tmp584 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local22) = $tmp583;
org$frostlang$frostc$FixedArray** $tmp585 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp586 = *$tmp585;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$FixedArray* $tmp587 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local23) = $tmp586;
org$frostlang$frostc$FixedArray** $tmp588 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp589 = *$tmp588;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
org$frostlang$frostc$FixedArray* $tmp590 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local24) = $tmp589;
// line 1
org$frostlang$frostc$IR$Value* $tmp591 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// line 1
org$frostlang$frostc$FixedArray* $tmp592 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// line 1
org$frostlang$frostc$FixedArray* $tmp593 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$FixedArray* $tmp594 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp595 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp596 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing _f0
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp597 = (frost$core$Int64) {13};
frost$core$Bit $tmp598 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp597);
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type** $tmp600 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp601 = *$tmp600;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
org$frostlang$frostc$Type* $tmp602 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local25) = $tmp601;
// line 1
org$frostlang$frostc$Type* $tmp603 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$Type* $tmp604 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing _f0
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp605 = (frost$core$Int64) {14};
frost$core$Bit $tmp606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp450, $tmp605);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block30; else goto block1;
block30:;
org$frostlang$frostc$Type** $tmp608 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp609 = *$tmp608;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
org$frostlang$frostc$Type* $tmp610 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local26) = $tmp609;
// line 1
org$frostlang$frostc$Type* $tmp611 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$Type* $tmp612 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
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
frost$core$Int64* $tmp613 = &param0->$rawValue;
*$tmp613 = param1;
// line 308
frost$core$Bit* $tmp614 = (frost$core$Bit*) (param0->$data + 0);
*$tmp614 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp615 = &param0->$rawValue;
*$tmp615 = param1;
// line 308
frost$core$UInt64* $tmp616 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp616 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp617 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp617 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp618 = &param0->$rawValue;
*$tmp618 = param1;
// line 308
frost$core$Int64* $tmp619 = (frost$core$Int64*) (param0->$data + 0);
*$tmp619 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp620 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp620 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp621 = &param0->$rawValue;
*$tmp621 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp622 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp622 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp623 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp623 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// line 308
frost$core$Int64* $tmp624 = &param0->$rawValue;
*$tmp624 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp625 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp625 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp626 = &param0->$rawValue;
*$tmp626 = param1;
// line 308
frost$core$Real64* $tmp627 = (frost$core$Real64*) (param0->$data + 0);
*$tmp627 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp628 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp628 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// line 308
frost$core$Int64* $tmp629 = &param0->$rawValue;
*$tmp629 = param1;
// line 308
org$frostlang$frostc$IR$Statement$ID* $tmp630 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp630 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp631 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp631 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 308
frost$core$Int64* $tmp632 = &param0->$rawValue;
*$tmp632 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp633 = (frost$core$String**) (param0->$data + 0);
*$tmp633 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// line 308
frost$core$Int64* $tmp634 = &param0->$rawValue;
*$tmp634 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp635 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp635 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp636 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp636 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// line 308
frost$core$Int64* $tmp637 = &param0->$rawValue;
*$tmp637 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp638 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp638 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp639 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp639 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp640 = &param0->$rawValue;
*$tmp640 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp641 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp641 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp642 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp642 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp643 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp643 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 308
frost$core$Int64* $tmp644 = &param0->$rawValue;
*$tmp644 = param1;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp645 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp645 = param2;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp646 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp646 = param3;
// line 308
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp647 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp647 = param4;
return;

}






