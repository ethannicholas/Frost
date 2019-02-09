#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Value$class_type org$frostlang$frostc$IR$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Value$cleanup, org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type} };

typedef frost$core$String* (*$fn198)(frost$core$Object*);
typedef frost$core$String* (*$fn213)(frost$core$Object*);
typedef frost$core$String* (*$fn229)(frost$core$Object*);
typedef frost$core$String* (*$fn237)(frost$core$Object*);
typedef frost$core$String* (*$fn254)(frost$core$Object*);
typedef frost$core$String* (*$fn293)(frost$core$Object*);
typedef frost$core$String* (*$fn301)(frost$core$Object*);
typedef frost$core$String* (*$fn320)(frost$core$Object*);
typedef frost$core$String* (*$fn336)(frost$core$Object*);
typedef frost$core$String* (*$fn344)(frost$core$Object*);
typedef frost$core$String* (*$fn380)(frost$core$Object*);
typedef frost$core$String* (*$fn418)(frost$core$Object*);
typedef frost$core$String* (*$fn426)(frost$core$Object*);
typedef frost$core$String* (*$fn435)(frost$core$Object*);
typedef frost$core$String* (*$fn463)(frost$core$Object*);
typedef frost$core$String* (*$fn476)(frost$core$Object*);
typedef frost$core$String* (*$fn492)(frost$core$Object*);
typedef frost$core$String* (*$fn520)(frost$core$Object*);
typedef frost$core$String* (*$fn528)(frost$core$Object*);
typedef frost$core$String* (*$fn535)(frost$core$Object*);
typedef frost$core$String* (*$fn545)(frost$core$Object*);
typedef frost$core$String* (*$fn553)(frost$core$Object*);
typedef frost$core$String* (*$fn572)(frost$core$Object*);
typedef frost$core$String* (*$fn590)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -7272186204340651082, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, 1868578261304, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29", 2, 14484, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, 18715170356, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -1341711154749513930, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, -4244432271035262362, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x46\x28", 4, 189256062, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 189684599809690, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, 19158144580783073, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -1498237362980140618, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, 5316457107311040550, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, 2006589700838103069, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, -4314634353209877902, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, 1942786762540, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 19343694063, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$MethodDecl* local11 = NULL;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type* local14 = NULL;
org$frostlang$frostc$Type* local15 = NULL;
frost$collections$Array* local16 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:448
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:449:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:450
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from IR.frost:450:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp10 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp11 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp12 = &(&local1)->$rawValue;
*$tmp12 = $tmp11;
org$frostlang$frostc$Type$Kind $tmp13 = *(&local1);
*(&local0) = $tmp13;
org$frostlang$frostc$Type$Kind $tmp14 = *(&local0);
org$frostlang$frostc$Position $tmp15 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp10, &$s17, $tmp14, $tmp15, $tmp16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return $tmp10;
block3:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:452:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp19 = $tmp3.value;
int64_t $tmp20 = $tmp18.value;
bool $tmp21 = $tmp19 == $tmp20;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block7; else goto block8;
block7:;
frost$core$UInt64* $tmp24 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp25 = *$tmp24;
org$frostlang$frostc$Type** $tmp26 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp27 = *$tmp26;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$Type* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = $tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:453
org$frostlang$frostc$Type* $tmp29 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Type* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp29;
block8:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:455:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp32 = $tmp3.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block10; else goto block11;
block10:;
frost$core$Int64* $tmp37 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp38 = *$tmp37;
org$frostlang$frostc$Type** $tmp39 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp40 = *$tmp39;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$Type* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local3) = $tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:456
org$frostlang$frostc$Type* $tmp42 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp42;
block11:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:458:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block13; else goto block14;
block13:;
org$frostlang$frostc$MethodDecl** $tmp50 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp51 = *$tmp50;
org$frostlang$frostc$Type** $tmp52 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp53 = *$tmp52;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$Type* $tmp54 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local4) = $tmp53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:459
org$frostlang$frostc$Type* $tmp55 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Type* $tmp56 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp55;
block14:;
frost$core$Int64 $tmp57 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:461:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp58 = $tmp3.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit($tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type** $tmp63 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp64 = *$tmp63;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Type* $tmp65 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local5) = $tmp64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:462
org$frostlang$frostc$Type* $tmp66 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$Type* $tmp67 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp66;
block17:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:464:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp69 = $tmp3.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block19; else goto block20;
block19:;
frost$core$Int64* $tmp74 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp75 = *$tmp74;
org$frostlang$frostc$Type** $tmp76 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$Type* $tmp78 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local6) = $tmp77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:465
org$frostlang$frostc$Type* $tmp79 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$Type* $tmp80 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp79;
block20:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:467:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp82 = $tmp3.value;
int64_t $tmp83 = $tmp81.value;
bool $tmp84 = $tmp82 == $tmp83;
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block22; else goto block23;
block22:;
frost$core$Real64* $tmp87 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp88 = *$tmp87;
org$frostlang$frostc$Type** $tmp89 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp90 = *$tmp89;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$Type* $tmp91 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local7) = $tmp90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:468
org$frostlang$frostc$Type* $tmp92 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
org$frostlang$frostc$Type* $tmp93 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp92;
block23:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:470:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp95 = $tmp3.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 == $tmp96;
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit($tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block25; else goto block26;
block25:;
org$frostlang$frostc$IR$Statement$ID* $tmp100 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp101 = *$tmp100;
org$frostlang$frostc$Type** $tmp102 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp103 = *$tmp102;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$Type* $tmp104 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local8) = $tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:471
org$frostlang$frostc$Type* $tmp105 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Type* $tmp106 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp105;
block26:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:473:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp108 = $tmp3.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 == $tmp109;
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit($tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:474
// begin inline call to method org.frostlang.frostc.Type.StringType():org.frostlang.frostc.Type from IR.frost:474:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp113 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp114 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:295:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp115 = &(&local10)->$rawValue;
*$tmp115 = $tmp114;
org$frostlang$frostc$Type$Kind $tmp116 = *(&local10);
*(&local9) = $tmp116;
org$frostlang$frostc$Type$Kind $tmp117 = *(&local9);
org$frostlang$frostc$Position $tmp118 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp113, &$s120, $tmp117, $tmp118, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
return $tmp113;
block29:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:476:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp122 = $tmp3.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 == $tmp123;
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block33; else goto block34;
block33:;
org$frostlang$frostc$IR$Value** $tmp127 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp128 = *$tmp127;
org$frostlang$frostc$MethodDecl** $tmp129 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp130 = *$tmp129;
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$MethodDecl* $tmp131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local11) = $tmp130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:477
org$frostlang$frostc$MethodDecl* $tmp132 = *(&local11);
org$frostlang$frostc$Type* $tmp133 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type($tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$MethodDecl* $tmp134 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local11) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp133;
block34:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:479:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp136 = $tmp3.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 == $tmp137;
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit($tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:480
// begin inline call to method org.frostlang.frostc.Type.Invalid():org.frostlang.frostc.Type from IR.frost:480:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp141 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp142 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:555:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp143 = &(&local13)->$rawValue;
*$tmp143 = $tmp142;
org$frostlang$frostc$Type$Kind $tmp144 = *(&local13);
*(&local12) = $tmp144;
org$frostlang$frostc$Type$Kind $tmp145 = *(&local12);
org$frostlang$frostc$Position $tmp146 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp141, &$s148, $tmp145, $tmp146, $tmp147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
return $tmp141;
block37:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:482:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp150 = $tmp3.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 == $tmp151;
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Type** $tmp155 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp156 = *$tmp155;
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
org$frostlang$frostc$Type* $tmp157 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local14) = $tmp156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:483
org$frostlang$frostc$Type* $tmp158 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$Type* $tmp159 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
return $tmp158;
block42:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:485:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp161 = $tmp3.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 == $tmp162;
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block44; else goto block1;
block44:;
org$frostlang$frostc$Type** $tmp166 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp167 = *$tmp166;
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$Type* $tmp168 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local15) = $tmp167;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:486
org$frostlang$frostc$Type* $tmp169 = *(&local15);
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from IR.frost:486:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:450
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp170 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp170);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$collections$Array* $tmp171 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local16) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:451
frost$collections$Array* $tmp172 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp172, ((frost$core$Object*) $tmp169));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:452
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:452:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp173 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp174 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp175 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp174);
org$frostlang$frostc$Position $tmp176 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp173, &$s178, $tmp175, $tmp176, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$Array* $tmp179 = *(&local16);
org$frostlang$frostc$Type* $tmp180 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp173, ((frost$collections$ListView*) $tmp179));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$Array* $tmp181 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlang$frostc$Type* $tmp182 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local15) = ((org$frostlang$frostc$Type*) NULL);
return $tmp180;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:489
frost$core$Int64 $tmp183 = (frost$core$Int64) {489};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s184, $tmp183);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:494
frost$core$Int64* $tmp185 = &param0->$rawValue;
frost$core$Int64 $tmp186 = *$tmp185;
frost$core$Int64 $tmp187 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:495:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 == $tmp189;
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp193 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp194 = *$tmp193;
*(&local0) = $tmp194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:496
frost$core$Bit $tmp195 = *(&local0);
frost$core$Bit$wrapper* $tmp196;
$tmp196 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp196->value = $tmp195;
$fn198 $tmp197 = ($fn198) ((frost$core$Object*) $tmp196)->$class->vtable[0];
frost$core$String* $tmp199 = $tmp197(((frost$core$Object*) $tmp196));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
return $tmp199;
block3:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:498:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp201 = $tmp186.value;
int64_t $tmp202 = $tmp200.value;
bool $tmp203 = $tmp201 == $tmp202;
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp206 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp207 = *$tmp206;
*(&local1) = $tmp207;
org$frostlang$frostc$Type** $tmp208 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:499
frost$core$UInt64 $tmp210 = *(&local1);
frost$core$UInt64$wrapper* $tmp211;
$tmp211 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp211->value = $tmp210;
$fn213 $tmp212 = ($fn213) ((frost$core$Object*) $tmp211)->$class->vtable[0];
frost$core$String* $tmp214 = $tmp212(((frost$core$Object*) $tmp211));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
return $tmp214;
block6:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:501:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp216 = $tmp186.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp221 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp222 = *$tmp221;
*(&local2) = $tmp222;
org$frostlang$frostc$Type** $tmp223 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp224 = *$tmp223;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$Type* $tmp225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local3) = $tmp224;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:502
frost$core$Int64 $tmp226 = *(&local2);
frost$core$Int64$wrapper* $tmp227;
$tmp227 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp227->value = $tmp226;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:502:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn229 $tmp228 = ($fn229) ((frost$core$Object*) $tmp227)->$class->vtable[0];
frost$core$String* $tmp230 = $tmp228(((frost$core$Object*) $tmp227));
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s232, $tmp230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp231, &$s234);
org$frostlang$frostc$Type* $tmp235 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:502:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn237 $tmp236 = ($fn237) ((frost$core$Object*) $tmp235)->$class->vtable[0];
frost$core$String* $tmp238 = $tmp236(((frost$core$Object*) $tmp235));
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp233, $tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp239, &$s241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$Type* $tmp242 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp240;
block9:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:504:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp244 = $tmp186.value;
int64_t $tmp245 = $tmp243.value;
bool $tmp246 = $tmp244 == $tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type** $tmp249 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp250 = *$tmp249;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$Type* $tmp251 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local4) = $tmp250;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:505
org$frostlang$frostc$Type* $tmp252 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:505:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn254 $tmp253 = ($fn254) ((frost$core$Object*) $tmp252)->$class->vtable[0];
frost$core$String* $tmp255 = $tmp253(((frost$core$Object*) $tmp252));
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s257, $tmp255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlang$frostc$Type* $tmp260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp258;
block14:;
frost$core$Int64 $tmp261 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:507:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp262 = $tmp186.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block17; else goto block18;
block17:;
org$frostlang$frostc$MethodDecl** $tmp267 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp268 = *$tmp267;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlang$frostc$MethodDecl* $tmp269 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local5) = $tmp268;
org$frostlang$frostc$Type** $tmp270 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp271 = *$tmp270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:508
org$frostlang$frostc$MethodDecl* $tmp272 = *(&local5);
frost$core$String* $tmp273 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp272);
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s275, $tmp273);
frost$core$String* $tmp276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp274, &$s277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$MethodDecl* $tmp278 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp276;
block18:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:510:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp280 = $tmp186.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 == $tmp281;
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block20; else goto block21;
block20:;
frost$core$Int64* $tmp285 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp286 = *$tmp285;
*(&local6) = $tmp286;
org$frostlang$frostc$Type** $tmp287 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp288 = *$tmp287;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$Type* $tmp289 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local7) = $tmp288;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:511
frost$core$Int64 $tmp290 = *(&local6);
frost$core$Int64$wrapper* $tmp291;
$tmp291 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp291->value = $tmp290;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:511:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn293 $tmp292 = ($fn293) ((frost$core$Object*) $tmp291)->$class->vtable[0];
frost$core$String* $tmp294 = $tmp292(((frost$core$Object*) $tmp291));
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s296, $tmp294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp295, &$s298);
org$frostlang$frostc$Type* $tmp299 = *(&local7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:511:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn301 $tmp300 = ($fn301) ((frost$core$Object*) $tmp299)->$class->vtable[0];
frost$core$String* $tmp302 = $tmp300(((frost$core$Object*) $tmp299));
frost$core$String* $tmp303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp303, &$s305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp306 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp304;
block21:;
frost$core$Int64 $tmp307 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:513:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp308 = $tmp186.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 == $tmp309;
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block25; else goto block26;
block25:;
frost$core$Real64* $tmp313 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp314 = *$tmp313;
*(&local8) = $tmp314;
org$frostlang$frostc$Type** $tmp315 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp316 = *$tmp315;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:514
frost$core$Real64 $tmp317 = *(&local8);
frost$core$Real64$wrapper* $tmp318;
$tmp318 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp318->value = $tmp317;
$fn320 $tmp319 = ($fn320) ((frost$core$Object*) $tmp318)->$class->vtable[0];
frost$core$String* $tmp321 = $tmp319(((frost$core$Object*) $tmp318));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
return $tmp321;
block26:;
frost$core$Int64 $tmp322 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:516:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp323 = $tmp186.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 == $tmp324;
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit($tmp325);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Statement$ID* $tmp328 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp329 = *$tmp328;
*(&local9) = $tmp329;
org$frostlang$frostc$Type** $tmp330 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp331 = *$tmp330;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$Type* $tmp332 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local10) = $tmp331;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:517
org$frostlang$frostc$IR$Statement$ID $tmp333 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp334;
$tmp334 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp334->value = $tmp333;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:517:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn336 $tmp335 = ($fn336) ((frost$core$Object*) $tmp334)->$class->vtable[0];
frost$core$String* $tmp337 = $tmp335(((frost$core$Object*) $tmp334));
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, $tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
org$frostlang$frostc$Type* $tmp342 = *(&local10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:517:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn344 $tmp343 = ($fn344) ((frost$core$Object*) $tmp342)->$class->vtable[0];
frost$core$String* $tmp345 = $tmp343(((frost$core$Object*) $tmp342));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, $tmp345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, &$s348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$Type* $tmp349 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp347;
block29:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:519:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp351 = $tmp186.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block33; else goto block34;
block33:;
frost$core$String** $tmp356 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp357 = *$tmp356;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$String* $tmp358 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local11) = $tmp357;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:520
frost$core$String* $tmp359 = *(&local11);
frost$core$String* $tmp360 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp359, &$s361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$String* $tmp362 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local11) = ((frost$core$String*) NULL);
return $tmp360;
block34:;
frost$core$Int64 $tmp363 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:522:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp364 = $tmp186.value;
int64_t $tmp365 = $tmp363.value;
bool $tmp366 = $tmp364 == $tmp365;
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block36; else goto block37;
block36:;
org$frostlang$frostc$IR$Value** $tmp369 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp370 = *$tmp369;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$IR$Value* $tmp371 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local12) = $tmp370;
org$frostlang$frostc$MethodDecl** $tmp372 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp373 = *$tmp372;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$MethodDecl* $tmp374 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local13) = $tmp373;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:523
org$frostlang$frostc$IR$Value* $tmp375 = *(&local12);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:524
org$frostlang$frostc$IR$Value* $tmp378 = *(&local12);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:524:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn380 $tmp379 = ($fn380) ((frost$core$Object*) $tmp378)->$class->vtable[0];
frost$core$String* $tmp381 = $tmp379(((frost$core$Object*) $tmp378));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s383, $tmp381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s385);
org$frostlang$frostc$MethodDecl* $tmp386 = *(&local13);
frost$core$String* $tmp387 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp386);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp384, $tmp387);
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlang$frostc$MethodDecl* $tmp391 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp392 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp389;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:526
org$frostlang$frostc$MethodDecl* $tmp393 = *(&local13);
frost$core$String* $tmp394 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp393);
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s396, $tmp394);
frost$core$String* $tmp397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp395, &$s398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$MethodDecl* $tmp399 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp400 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp397;
block37:;
frost$core$Int64 $tmp401 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:528:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp402 = $tmp186.value;
int64_t $tmp403 = $tmp401.value;
bool $tmp404 = $tmp402 == $tmp403;
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block42; else goto block43;
block42:;
org$frostlang$frostc$IR$Value** $tmp407 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp408 = *$tmp407;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$IR$Value* $tmp409 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local14) = $tmp408;
org$frostlang$frostc$FixedArray** $tmp410 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp411 = *$tmp410;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
org$frostlang$frostc$FixedArray* $tmp412 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local15) = $tmp411;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:529
org$frostlang$frostc$IR$Value* $tmp413 = *(&local14);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413 != NULL);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:530
org$frostlang$frostc$IR$Value* $tmp416 = *(&local14);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:530:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn418 $tmp417 = ($fn418) ((frost$core$Object*) $tmp416)->$class->vtable[0];
frost$core$String* $tmp419 = $tmp417(((frost$core$Object*) $tmp416));
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s421, $tmp419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp420, &$s423);
org$frostlang$frostc$FixedArray* $tmp424 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:530:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn426 $tmp425 = ($fn426) ((frost$core$Object*) $tmp424)->$class->vtable[0];
frost$core$String* $tmp427 = $tmp425(((frost$core$Object*) $tmp424));
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp422, $tmp427);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$FixedArray* $tmp431 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp432 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp429;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:532
org$frostlang$frostc$FixedArray* $tmp433 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:532:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn435 $tmp434 = ($fn435) ((frost$core$Object*) $tmp433)->$class->vtable[0];
frost$core$String* $tmp436 = $tmp434(((frost$core$Object*) $tmp433));
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s438, $tmp436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp437, &$s440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
org$frostlang$frostc$FixedArray* $tmp441 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp442 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp439;
block43:;
frost$core$Int64 $tmp443 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:534:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp444 = $tmp186.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 == $tmp445;
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit($tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block50; else goto block51;
block50:;
org$frostlang$frostc$IR$Value** $tmp449 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp450 = *$tmp449;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
org$frostlang$frostc$IR$Value* $tmp451 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local16) = $tmp450;
org$frostlang$frostc$MethodDecl** $tmp452 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp453 = *$tmp452;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlang$frostc$MethodDecl* $tmp454 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local17) = $tmp453;
org$frostlang$frostc$FixedArray** $tmp455 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp456 = *$tmp455;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
org$frostlang$frostc$FixedArray* $tmp457 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local18) = $tmp456;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:535
org$frostlang$frostc$IR$Value* $tmp458 = *(&local16);
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458 != NULL);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:536
org$frostlang$frostc$IR$Value* $tmp461 = *(&local16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:536:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn463 $tmp462 = ($fn463) ((frost$core$Object*) $tmp461)->$class->vtable[0];
frost$core$String* $tmp464 = $tmp462(((frost$core$Object*) $tmp461));
frost$core$String* $tmp465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s466, $tmp464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$String* $tmp467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp465, &$s468);
org$frostlang$frostc$MethodDecl* $tmp469 = *(&local17);
frost$core$String* $tmp470 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp469);
frost$core$String* $tmp471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp467, $tmp470);
frost$core$String* $tmp472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp471, &$s473);
org$frostlang$frostc$FixedArray* $tmp474 = *(&local18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:536:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn476 $tmp475 = ($fn476) ((frost$core$Object*) $tmp474)->$class->vtable[0];
frost$core$String* $tmp477 = $tmp475(((frost$core$Object*) $tmp474));
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp472, $tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$FixedArray* $tmp481 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp482 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp483 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp479;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:538
org$frostlang$frostc$MethodDecl* $tmp484 = *(&local17);
frost$core$String* $tmp485 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp484);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s487, $tmp485);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
org$frostlang$frostc$FixedArray* $tmp490 = *(&local18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:538:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn492 $tmp491 = ($fn492) ((frost$core$Object*) $tmp490)->$class->vtable[0];
frost$core$String* $tmp493 = $tmp491(((frost$core$Object*) $tmp490));
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp488, $tmp493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$String* $tmp495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp494, &$s496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$FixedArray* $tmp497 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp498 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp499 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp495;
block51:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:540:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp501 = $tmp186.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 == $tmp502;
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block58; else goto block59;
block58:;
org$frostlang$frostc$IR$Value** $tmp506 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp507 = *$tmp506;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
org$frostlang$frostc$IR$Value* $tmp508 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local19) = $tmp507;
org$frostlang$frostc$FixedArray** $tmp509 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp510 = *$tmp509;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
org$frostlang$frostc$FixedArray* $tmp511 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local20) = $tmp510;
org$frostlang$frostc$FixedArray** $tmp512 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp513 = *$tmp512;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
org$frostlang$frostc$FixedArray* $tmp514 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local21) = $tmp513;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:541
org$frostlang$frostc$IR$Value* $tmp515 = *(&local19);
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit($tmp515 != NULL);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:542
org$frostlang$frostc$IR$Value* $tmp518 = *(&local19);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn520 $tmp519 = ($fn520) ((frost$core$Object*) $tmp518)->$class->vtable[0];
frost$core$String* $tmp521 = $tmp519(((frost$core$Object*) $tmp518));
frost$core$String* $tmp522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s523, $tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$String* $tmp524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp522, &$s525);
org$frostlang$frostc$FixedArray* $tmp526 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn528 $tmp527 = ($fn528) ((frost$core$Object*) $tmp526)->$class->vtable[0];
frost$core$String* $tmp529 = $tmp527(((frost$core$Object*) $tmp526));
frost$core$String* $tmp530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp524, $tmp529);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$String* $tmp531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp530, &$s532);
org$frostlang$frostc$FixedArray* $tmp533 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn535 $tmp534 = ($fn535) ((frost$core$Object*) $tmp533)->$class->vtable[0];
frost$core$String* $tmp536 = $tmp534(((frost$core$Object*) $tmp533));
frost$core$String* $tmp537 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp531, $tmp536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$String* $tmp538 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp537, &$s539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$FixedArray* $tmp540 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp541 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp542 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp538;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:544
org$frostlang$frostc$FixedArray* $tmp543 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn545 $tmp544 = ($fn545) ((frost$core$Object*) $tmp543)->$class->vtable[0];
frost$core$String* $tmp546 = $tmp544(((frost$core$Object*) $tmp543));
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s548, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s550);
org$frostlang$frostc$FixedArray* $tmp551 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn553 $tmp552 = ($fn553) ((frost$core$Object*) $tmp551)->$class->vtable[0];
frost$core$String* $tmp554 = $tmp552(((frost$core$Object*) $tmp551));
frost$core$String* $tmp555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp549, $tmp554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$String* $tmp556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp555, &$s557);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$FixedArray* $tmp558 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp559 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp560 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp556;
block59:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:546:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp562 = $tmp186.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Type** $tmp567 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp568 = *$tmp567;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$Type* $tmp569 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local22) = $tmp568;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:547
org$frostlang$frostc$Type* $tmp570 = *(&local22);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:547:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn572 $tmp571 = ($fn572) ((frost$core$Object*) $tmp570)->$class->vtable[0];
frost$core$String* $tmp573 = $tmp571(((frost$core$Object*) $tmp570));
frost$core$String* $tmp574 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s575, $tmp573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$String* $tmp576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp574, &$s577);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
org$frostlang$frostc$Type* $tmp578 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp576;
block69:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:549:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp580 = $tmp186.value;
int64_t $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 == $tmp581;
frost$core$Bit $tmp583 = frost$core$Bit$init$builtin_bit($tmp582);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block72; else goto block1;
block72:;
org$frostlang$frostc$Type** $tmp585 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp586 = *$tmp585;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$Type* $tmp587 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local23) = $tmp586;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:550
org$frostlang$frostc$Type* $tmp588 = *(&local23);
$fn590 $tmp589 = ($fn590) ((frost$core$Object*) $tmp588)->$class->vtable[0];
frost$core$String* $tmp591 = $tmp589(((frost$core$Object*) $tmp588));
frost$core$String* $tmp592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s593, $tmp591);
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp592, &$s595);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
org$frostlang$frostc$Type* $tmp596 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp594;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:553
frost$core$Int64 $tmp597 = (frost$core$Int64) {553};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s598, $tmp597);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp599 = &param0->$rawValue;
frost$core$Int64 $tmp600 = *$tmp599;
frost$core$Int64 $tmp601 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 == $tmp603;
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp607 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp608 = *$tmp607;
*(&local0) = $tmp608;
goto block1;
block3:;
frost$core$Int64 $tmp609 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp610 = $tmp600.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 == $tmp611;
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit($tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp615 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp616 = *$tmp615;
*(&local1) = $tmp616;
org$frostlang$frostc$Type** $tmp617 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp618 = *$tmp617;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$Type* $tmp619 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local2) = $tmp618;
// <no location>
org$frostlang$frostc$Type* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$Type* $tmp621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp623 = $tmp600.value;
int64_t $tmp624 = $tmp622.value;
bool $tmp625 = $tmp623 == $tmp624;
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit($tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp628 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp629 = *$tmp628;
*(&local3) = $tmp629;
org$frostlang$frostc$Type** $tmp630 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp631 = *$tmp630;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$Type* $tmp632 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local4) = $tmp631;
// <no location>
org$frostlang$frostc$Type* $tmp633 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
org$frostlang$frostc$Type* $tmp634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp636 = $tmp600.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 == $tmp637;
frost$core$Bit $tmp639 = frost$core$Bit$init$builtin_bit($tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block11; else goto block12;
block11:;
org$frostlang$frostc$MethodDecl** $tmp641 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp642 = *$tmp641;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
org$frostlang$frostc$MethodDecl* $tmp643 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local5) = $tmp642;
org$frostlang$frostc$Type** $tmp644 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp645 = *$tmp644;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
org$frostlang$frostc$Type* $tmp646 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local6) = $tmp645;
// <no location>
org$frostlang$frostc$MethodDecl* $tmp647 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// <no location>
org$frostlang$frostc$Type* $tmp648 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
org$frostlang$frostc$Type* $tmp649 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp650 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp651 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp652 = $tmp600.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = frost$core$Bit$init$builtin_bit($tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type** $tmp657 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp658 = *$tmp657;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$Type* $tmp659 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local7) = $tmp658;
// <no location>
org$frostlang$frostc$Type* $tmp660 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$Type* $tmp661 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp662 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp663 = $tmp600.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = frost$core$Bit$init$builtin_bit($tmp665);
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block17; else goto block18;
block17:;
frost$core$Int64* $tmp668 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp669 = *$tmp668;
*(&local8) = $tmp669;
org$frostlang$frostc$Type** $tmp670 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp671 = *$tmp670;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$Type* $tmp672 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local9) = $tmp671;
// <no location>
org$frostlang$frostc$Type* $tmp673 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
org$frostlang$frostc$Type* $tmp674 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Int64 $tmp675 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp676 = $tmp600.value;
int64_t $tmp677 = $tmp675.value;
bool $tmp678 = $tmp676 == $tmp677;
frost$core$Bit $tmp679 = frost$core$Bit$init$builtin_bit($tmp678);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block20; else goto block21;
block20:;
frost$core$Real64* $tmp681 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp682 = *$tmp681;
*(&local10) = $tmp682;
org$frostlang$frostc$Type** $tmp683 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp684 = *$tmp683;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
org$frostlang$frostc$Type* $tmp685 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local11) = $tmp684;
// <no location>
org$frostlang$frostc$Type* $tmp686 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Type* $tmp687 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp689 = $tmp600.value;
int64_t $tmp690 = $tmp688.value;
bool $tmp691 = $tmp689 == $tmp690;
frost$core$Bit $tmp692 = frost$core$Bit$init$builtin_bit($tmp691);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block23; else goto block24;
block23:;
org$frostlang$frostc$IR$Statement$ID* $tmp694 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp695 = *$tmp694;
*(&local12) = $tmp695;
org$frostlang$frostc$Type** $tmp696 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp697 = *$tmp696;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
org$frostlang$frostc$Type* $tmp698 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local13) = $tmp697;
// <no location>
org$frostlang$frostc$Type* $tmp699 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
org$frostlang$frostc$Type* $tmp700 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block24:;
frost$core$Int64 $tmp701 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp702 = $tmp600.value;
int64_t $tmp703 = $tmp701.value;
bool $tmp704 = $tmp702 == $tmp703;
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit($tmp704);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block26; else goto block27;
block26:;
frost$core$String** $tmp707 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp708 = *$tmp707;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$String* $tmp709 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local14) = $tmp708;
// <no location>
frost$core$String* $tmp710 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$String* $tmp711 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local14) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp712 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp713 = $tmp600.value;
int64_t $tmp714 = $tmp712.value;
bool $tmp715 = $tmp713 == $tmp714;
frost$core$Bit $tmp716 = frost$core$Bit$init$builtin_bit($tmp715);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block29; else goto block30;
block29:;
org$frostlang$frostc$IR$Value** $tmp718 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp719 = *$tmp718;
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
org$frostlang$frostc$IR$Value* $tmp720 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local15) = $tmp719;
org$frostlang$frostc$MethodDecl** $tmp721 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp722 = *$tmp721;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
org$frostlang$frostc$MethodDecl* $tmp723 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local16) = $tmp722;
// <no location>
org$frostlang$frostc$IR$Value* $tmp724 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp725 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$MethodDecl* $tmp726 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp727 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block30:;
frost$core$Int64 $tmp728 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp729 = $tmp600.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = frost$core$Bit$init$builtin_bit($tmp731);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp734 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp735 = *$tmp734;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
org$frostlang$frostc$IR$Value* $tmp736 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local17) = $tmp735;
org$frostlang$frostc$FixedArray** $tmp737 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp738 = *$tmp737;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
org$frostlang$frostc$FixedArray* $tmp739 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local18) = $tmp738;
// <no location>
org$frostlang$frostc$IR$Value* $tmp740 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// <no location>
org$frostlang$frostc$FixedArray* $tmp741 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$FixedArray* $tmp742 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp743 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp744 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp745 = $tmp600.value;
int64_t $tmp746 = $tmp744.value;
bool $tmp747 = $tmp745 == $tmp746;
frost$core$Bit $tmp748 = frost$core$Bit$init$builtin_bit($tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block35; else goto block36;
block35:;
org$frostlang$frostc$IR$Value** $tmp750 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp751 = *$tmp750;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
org$frostlang$frostc$IR$Value* $tmp752 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local19) = $tmp751;
org$frostlang$frostc$MethodDecl** $tmp753 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp754 = *$tmp753;
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
org$frostlang$frostc$MethodDecl* $tmp755 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local20) = $tmp754;
org$frostlang$frostc$FixedArray** $tmp756 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp757 = *$tmp756;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
org$frostlang$frostc$FixedArray* $tmp758 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local21) = $tmp757;
// <no location>
org$frostlang$frostc$IR$Value* $tmp759 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp760 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// <no location>
org$frostlang$frostc$FixedArray* $tmp761 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
org$frostlang$frostc$FixedArray* $tmp762 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp763 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local20) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp764 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int64 $tmp765 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp766 = $tmp600.value;
int64_t $tmp767 = $tmp765.value;
bool $tmp768 = $tmp766 == $tmp767;
frost$core$Bit $tmp769 = frost$core$Bit$init$builtin_bit($tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block38; else goto block39;
block38:;
org$frostlang$frostc$IR$Value** $tmp771 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp772 = *$tmp771;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$IR$Value* $tmp773 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local22) = $tmp772;
org$frostlang$frostc$FixedArray** $tmp774 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp775 = *$tmp774;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
org$frostlang$frostc$FixedArray* $tmp776 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local23) = $tmp775;
org$frostlang$frostc$FixedArray** $tmp777 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp778 = *$tmp777;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
org$frostlang$frostc$FixedArray* $tmp779 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local24) = $tmp778;
// <no location>
org$frostlang$frostc$IR$Value* $tmp780 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// <no location>
org$frostlang$frostc$FixedArray* $tmp781 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// <no location>
org$frostlang$frostc$FixedArray* $tmp782 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$FixedArray* $tmp783 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp784 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp785 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp787 = $tmp600.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit($tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Type** $tmp792 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp793 = *$tmp792;
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$Type* $tmp794 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local25) = $tmp793;
// <no location>
org$frostlang$frostc$Type* $tmp795 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$Type* $tmp796 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block42:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp798 = $tmp600.value;
int64_t $tmp799 = $tmp797.value;
bool $tmp800 = $tmp798 == $tmp799;
frost$core$Bit $tmp801 = frost$core$Bit$init$builtin_bit($tmp800);
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block44; else goto block1;
block44:;
org$frostlang$frostc$Type** $tmp803 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp804 = *$tmp803;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlang$frostc$Type* $tmp805 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local26) = $tmp804;
// <no location>
org$frostlang$frostc$Type* $tmp806 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
org$frostlang$frostc$Type* $tmp807 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp808 = &param0->$rawValue;
*$tmp808 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Bit* $tmp809 = (frost$core$Bit*) (param0->$data + 0);
*$tmp809 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp810 = &param0->$rawValue;
*$tmp810 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$UInt64* $tmp811 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp811 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp812 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp812 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp813 = &param0->$rawValue;
*$tmp813 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp814 = (frost$core$Int64*) (param0->$data + 0);
*$tmp814 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp815 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp815 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp816 = &param0->$rawValue;
*$tmp816 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp817 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp817 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp818 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp818 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp819 = &param0->$rawValue;
*$tmp819 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp820 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp820 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp821 = &param0->$rawValue;
*$tmp821 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Real64* $tmp822 = (frost$core$Real64*) (param0->$data + 0);
*$tmp822 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp823 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp823 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp824 = &param0->$rawValue;
*$tmp824 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
org$frostlang$frostc$IR$Statement$ID* $tmp825 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp825 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp826 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp826 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp827 = &param0->$rawValue;
*$tmp827 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp828 = (frost$core$String**) (param0->$data + 0);
*$tmp828 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp829 = &param0->$rawValue;
*$tmp829 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp830 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp830 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp831 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp831 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp832 = &param0->$rawValue;
*$tmp832 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp833 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp833 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp834 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp834 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp835 = &param0->$rawValue;
*$tmp835 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp836 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp836 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp837 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp837 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp838 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp838 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp839 = &param0->$rawValue;
*$tmp839 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp840 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp840 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp841 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp841 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp842 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp842 = param4;
return;

}






