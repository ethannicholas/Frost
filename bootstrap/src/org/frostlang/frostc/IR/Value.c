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
#include "frost/core/Int.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Value$class_type org$frostlang$frostc$IR$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Value$cleanup, org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type} };

typedef frost$core$String* (*$fn192)(frost$core$Object*);
typedef frost$core$String* (*$fn207)(frost$core$Object*);
typedef frost$core$String* (*$fn223)(frost$core$Object*);
typedef frost$core$String* (*$fn231)(frost$core$Object*);
typedef frost$core$String* (*$fn248)(frost$core$Object*);
typedef frost$core$String* (*$fn287)(frost$core$Object*);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$core$String* (*$fn314)(frost$core$Object*);
typedef frost$core$String* (*$fn330)(frost$core$Object*);
typedef frost$core$String* (*$fn338)(frost$core$Object*);
typedef frost$core$String* (*$fn378)(frost$core$Object*);
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
typedef frost$core$String* (*$fn592)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 29, -4891913680594694516, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, -1523601060637538272, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29", 2, 569594335283881148, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x28", 5, -5991376350131980956, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, 395441415275443262, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x46\x28", 4, -8522299043209770050, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 2331827984905210120, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 2331827984905210120, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, -7839998384989860573, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -6072472196044889926, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, -2534768582544642278, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, -2534768582544642278, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, -3200037640513296683, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, 5095604785473417468, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, -8750088808033524428, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 7370278550074045823, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$IR$Value$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:448
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:449:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp10 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp11 = *$tmp10;
org$frostlang$frostc$Type** $tmp12 = (org$frostlang$frostc$Type**) (param0->$data + 1);
org$frostlang$frostc$Type* $tmp13 = *$tmp12;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$Type* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:450
org$frostlang$frostc$Type* $tmp15 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp15;
block3:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:452:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp18 = $tmp3.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 == $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp23 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp24 = *$tmp23;
org$frostlang$frostc$Type** $tmp25 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp26 = *$tmp25;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Type* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local1) = $tmp26;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:453
org$frostlang$frostc$Type* $tmp28 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$Type* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp28;
block6:;
frost$core$Int64 $tmp30 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:455:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp31 = $tmp3.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 == $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp36 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp37 = *$tmp36;
org$frostlang$frostc$Type** $tmp38 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp39 = *$tmp38;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlang$frostc$Type* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local2) = $tmp39;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:456
org$frostlang$frostc$Type* $tmp41 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
org$frostlang$frostc$Type* $tmp42 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp41;
block9:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:458:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp44 = $tmp3.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block11; else goto block12;
block11:;
org$frostlang$frostc$MethodDecl** $tmp49 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp50 = *$tmp49;
org$frostlang$frostc$Type** $tmp51 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp52 = *$tmp51;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Type* $tmp53 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local3) = $tmp52;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:459
org$frostlang$frostc$Type* $tmp54 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Type* $tmp55 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp54;
block12:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:461:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp57 = $tmp3.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 == $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type** $tmp62 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp63 = *$tmp62;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$Type* $tmp64 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local4) = $tmp63;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:462
org$frostlang$frostc$Type* $tmp65 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$Type* $tmp66 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp65;
block15:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:464:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp68 = $tmp3.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 == $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block17; else goto block18;
block17:;
frost$core$Int* $tmp73 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp74 = *$tmp73;
org$frostlang$frostc$Type** $tmp75 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp76 = *$tmp75;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlang$frostc$Type* $tmp77 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local5) = $tmp76;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:465
org$frostlang$frostc$Type* $tmp78 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$Type* $tmp79 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp78;
block18:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:467:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp81 = $tmp3.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 == $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block20; else goto block21;
block20:;
frost$core$Real64* $tmp86 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp87 = *$tmp86;
org$frostlang$frostc$Type** $tmp88 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp89 = *$tmp88;
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
org$frostlang$frostc$Type* $tmp90 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local6) = $tmp89;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:468
org$frostlang$frostc$Type* $tmp91 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$Type* $tmp92 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp91;
block21:;
frost$core$Int64 $tmp93 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:470:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp94 = $tmp3.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 == $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block23; else goto block24;
block23:;
org$frostlang$frostc$IR$Statement$ID* $tmp99 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp100 = *$tmp99;
org$frostlang$frostc$Type** $tmp101 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp102 = *$tmp101;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$Type* $tmp103 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local7) = $tmp102;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:471
org$frostlang$frostc$Type* $tmp104 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type* $tmp105 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp104;
block24:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:473:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp107 = $tmp3.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block26; else goto block27;
block26:;
frost$core$String** $tmp112 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp113 = *$tmp112;
org$frostlang$frostc$Type** $tmp114 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp115 = *$tmp114;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$Type* $tmp116 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local8) = $tmp115;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:474
org$frostlang$frostc$Type* $tmp117 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$Type* $tmp118 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp117;
block27:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:476:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp120 = $tmp3.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 == $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block29; else goto block30;
block29:;
org$frostlang$frostc$IR$Value** $tmp125 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp126 = *$tmp125;
org$frostlang$frostc$MethodDecl** $tmp127 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp128 = *$tmp127;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$MethodDecl* $tmp129 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local9) = $tmp128;
org$frostlang$frostc$Type** $tmp130 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp131 = *$tmp130;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$Type* $tmp132 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local10) = $tmp131;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:477
org$frostlang$frostc$Type* $tmp133 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$Type* $tmp134 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp135 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp133;
block30:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:479:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp137 = $tmp3.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp142 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp143 = *$tmp142;
org$frostlang$frostc$FixedArray** $tmp144 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp145 = *$tmp144;
org$frostlang$frostc$Type** $tmp146 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp147 = *$tmp146;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Type* $tmp148 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local11) = $tmp147;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:480
org$frostlang$frostc$Type* $tmp149 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$Type* $tmp150 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
return $tmp149;
block33:;
frost$core$Int64 $tmp151 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:482:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp152 = $tmp3.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 == $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Type** $tmp157 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp158 = *$tmp157;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$Type* $tmp159 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local12) = $tmp158;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:483
org$frostlang$frostc$Type* $tmp160 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
org$frostlang$frostc$Type* $tmp161 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
return $tmp160;
block36:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:485:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp163 = $tmp3.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block38; else goto block1;
block38:;
org$frostlang$frostc$Type** $tmp168 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp169 = *$tmp168;
org$frostlang$frostc$Type** $tmp170 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
org$frostlang$frostc$Type* $tmp172 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local13) = $tmp171;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:486
org$frostlang$frostc$Type* $tmp173 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlang$frostc$Type* $tmp174 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
return $tmp173;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:489
frost$core$Int $tmp175 = (frost$core$Int) {489u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s176, $tmp175);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$IR$Value$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Value* param0) {

frost$core$Bit local0;
frost$core$UInt64 local1;
frost$core$Int local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
frost$core$Int local6;
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:494
frost$core$Int64* $tmp177 = &param0->$rawValue;
frost$core$Int64 $tmp178 = *$tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:495:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp185 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp186 = *$tmp185;
*(&local0) = $tmp186;
org$frostlang$frostc$Type** $tmp187 = (org$frostlang$frostc$Type**) (param0->$data + 1);
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:496
frost$core$Bit $tmp189 = *(&local0);
frost$core$Bit$wrapper* $tmp190;
$tmp190 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp190->value = $tmp189;
$fn192 $tmp191 = ($fn192) ((frost$core$Object*) $tmp190)->$class->vtable[0];
frost$core$String* $tmp193 = $tmp191(((frost$core$Object*) $tmp190));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
return $tmp193;
block3:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:498:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp195 = $tmp178.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 == $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp200 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp201 = *$tmp200;
*(&local1) = $tmp201;
org$frostlang$frostc$Type** $tmp202 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp203 = *$tmp202;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:499
frost$core$UInt64 $tmp204 = *(&local1);
frost$core$UInt64$wrapper* $tmp205;
$tmp205 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp205->value = $tmp204;
$fn207 $tmp206 = ($fn207) ((frost$core$Object*) $tmp205)->$class->vtable[0];
frost$core$String* $tmp208 = $tmp206(((frost$core$Object*) $tmp205));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
return $tmp208;
block6:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:501:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp210 = $tmp178.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 == $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp215 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp216 = *$tmp215;
*(&local2) = $tmp216;
org$frostlang$frostc$Type** $tmp217 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp218 = *$tmp217;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$Type* $tmp219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local3) = $tmp218;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:502
frost$core$Int $tmp220 = *(&local2);
frost$core$Int$wrapper* $tmp221;
$tmp221 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp221->value = $tmp220;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:502:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn223 $tmp222 = ($fn223) ((frost$core$Object*) $tmp221)->$class->vtable[0];
frost$core$String* $tmp224 = $tmp222(((frost$core$Object*) $tmp221));
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s226, $tmp224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
org$frostlang$frostc$Type* $tmp229 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:502:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn231 $tmp230 = ($fn231) ((frost$core$Object*) $tmp229)->$class->vtable[0];
frost$core$String* $tmp232 = $tmp230(((frost$core$Object*) $tmp229));
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, $tmp232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp233, &$s235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlang$frostc$Type* $tmp236 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp234;
block9:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:504:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp238 = $tmp178.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 == $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type** $tmp243 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp244 = *$tmp243;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlang$frostc$Type* $tmp245 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local4) = $tmp244;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:505
org$frostlang$frostc$Type* $tmp246 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:505:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn248 $tmp247 = ($fn248) ((frost$core$Object*) $tmp246)->$class->vtable[0];
frost$core$String* $tmp249 = $tmp247(((frost$core$Object*) $tmp246));
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s251, $tmp249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp250, &$s253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$Type* $tmp254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp252;
block14:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:507:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp256 = $tmp178.value;
int64_t $tmp257 = $tmp255.value;
bool $tmp258 = $tmp256 == $tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block17; else goto block18;
block17:;
org$frostlang$frostc$MethodDecl** $tmp261 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp262 = *$tmp261;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
org$frostlang$frostc$MethodDecl* $tmp263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local5) = $tmp262;
org$frostlang$frostc$Type** $tmp264 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp265 = *$tmp264;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:508
org$frostlang$frostc$MethodDecl* $tmp266 = *(&local5);
frost$core$String* $tmp267 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp266);
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s269, $tmp267);
frost$core$String* $tmp270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$MethodDecl* $tmp272 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp270;
block18:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:510:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp274 = $tmp178.value;
int64_t $tmp275 = $tmp273.value;
bool $tmp276 = $tmp274 == $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block20; else goto block21;
block20:;
frost$core$Int* $tmp279 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp280 = *$tmp279;
*(&local6) = $tmp280;
org$frostlang$frostc$Type** $tmp281 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp282 = *$tmp281;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
org$frostlang$frostc$Type* $tmp283 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local7) = $tmp282;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:511
frost$core$Int $tmp284 = *(&local6);
frost$core$Int$wrapper* $tmp285;
$tmp285 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp285->value = $tmp284;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:511:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn287 $tmp286 = ($fn287) ((frost$core$Object*) $tmp285)->$class->vtable[0];
frost$core$String* $tmp288 = $tmp286(((frost$core$Object*) $tmp285));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s290, $tmp288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp289, &$s292);
org$frostlang$frostc$Type* $tmp293 = *(&local7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:511:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn295 $tmp294 = ($fn295) ((frost$core$Object*) $tmp293)->$class->vtable[0];
frost$core$String* $tmp296 = $tmp294(((frost$core$Object*) $tmp293));
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, &$s299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Type* $tmp300 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp298;
block21:;
frost$core$Int64 $tmp301 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:513:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp302 = $tmp178.value;
int64_t $tmp303 = $tmp301.value;
bool $tmp304 = $tmp302 == $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block25; else goto block26;
block25:;
frost$core$Real64* $tmp307 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp308 = *$tmp307;
*(&local8) = $tmp308;
org$frostlang$frostc$Type** $tmp309 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp310 = *$tmp309;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:514
frost$core$Real64 $tmp311 = *(&local8);
frost$core$Real64$wrapper* $tmp312;
$tmp312 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp312->value = $tmp311;
$fn314 $tmp313 = ($fn314) ((frost$core$Object*) $tmp312)->$class->vtable[0];
frost$core$String* $tmp315 = $tmp313(((frost$core$Object*) $tmp312));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
return $tmp315;
block26:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:516:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp317 = $tmp178.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 == $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Statement$ID* $tmp322 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp323 = *$tmp322;
*(&local9) = $tmp323;
org$frostlang$frostc$Type** $tmp324 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp325 = *$tmp324;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
org$frostlang$frostc$Type* $tmp326 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local10) = $tmp325;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:517
org$frostlang$frostc$IR$Statement$ID $tmp327 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp328->value = $tmp327;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:517:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn330 $tmp329 = ($fn330) ((frost$core$Object*) $tmp328)->$class->vtable[0];
frost$core$String* $tmp331 = $tmp329(((frost$core$Object*) $tmp328));
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s333, $tmp331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp332, &$s335);
org$frostlang$frostc$Type* $tmp336 = *(&local10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:517:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn338 $tmp337 = ($fn338) ((frost$core$Object*) $tmp336)->$class->vtable[0];
frost$core$String* $tmp339 = $tmp337(((frost$core$Object*) $tmp336));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, $tmp339);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$Type* $tmp343 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
return $tmp341;
block29:;
frost$core$Int64 $tmp344 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:519:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp345 = $tmp178.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 == $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block33; else goto block34;
block33:;
frost$core$String** $tmp350 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp351 = *$tmp350;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$String* $tmp352 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local11) = $tmp351;
org$frostlang$frostc$Type** $tmp353 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp354 = *$tmp353;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:520
frost$core$String* $tmp355 = *(&local11);
frost$core$String* $tmp356 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp355, &$s357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$String* $tmp358 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local11) = ((frost$core$String*) NULL);
return $tmp356;
block34:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:522:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp360 = $tmp178.value;
int64_t $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 == $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block36; else goto block37;
block36:;
org$frostlang$frostc$IR$Value** $tmp365 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp366 = *$tmp365;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlang$frostc$IR$Value* $tmp367 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local12) = $tmp366;
org$frostlang$frostc$MethodDecl** $tmp368 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp369 = *$tmp368;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$MethodDecl* $tmp370 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local13) = $tmp369;
org$frostlang$frostc$Type** $tmp371 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp372 = *$tmp371;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:523
org$frostlang$frostc$IR$Value* $tmp373 = *(&local12);
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373 != NULL};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:524
org$frostlang$frostc$IR$Value* $tmp376 = *(&local12);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:524:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn378 $tmp377 = ($fn378) ((frost$core$Object*) $tmp376)->$class->vtable[0];
frost$core$String* $tmp379 = $tmp377(((frost$core$Object*) $tmp376));
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s381, $tmp379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp380, &$s383);
org$frostlang$frostc$MethodDecl* $tmp384 = *(&local13);
frost$core$String* $tmp385 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp384);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, $tmp385);
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
org$frostlang$frostc$MethodDecl* $tmp389 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp390 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp387;
block40:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:526
org$frostlang$frostc$MethodDecl* $tmp391 = *(&local13);
frost$core$String* $tmp392 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp391);
frost$core$String* $tmp393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s394, $tmp392);
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp393, &$s396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
org$frostlang$frostc$MethodDecl* $tmp397 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp398 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp395;
block37:;
frost$core$Int64 $tmp399 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:528:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp400 = $tmp178.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block42; else goto block43;
block42:;
org$frostlang$frostc$IR$Value** $tmp405 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp406 = *$tmp405;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$IR$Value* $tmp407 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local14) = $tmp406;
org$frostlang$frostc$FixedArray** $tmp408 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp409 = *$tmp408;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
org$frostlang$frostc$FixedArray* $tmp410 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local15) = $tmp409;
org$frostlang$frostc$Type** $tmp411 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp412 = *$tmp411;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:529
org$frostlang$frostc$IR$Value* $tmp413 = *(&local14);
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413 != NULL};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:530
org$frostlang$frostc$IR$Value* $tmp416 = *(&local14);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:530:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn418 $tmp417 = ($fn418) ((frost$core$Object*) $tmp416)->$class->vtable[0];
frost$core$String* $tmp419 = $tmp417(((frost$core$Object*) $tmp416));
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s421, $tmp419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp420, &$s423);
org$frostlang$frostc$FixedArray* $tmp424 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:530:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:532
org$frostlang$frostc$FixedArray* $tmp433 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:532:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp443 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:534:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp444 = $tmp178.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 == $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:535
org$frostlang$frostc$IR$Value* $tmp458 = *(&local16);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458 != NULL};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:536
org$frostlang$frostc$IR$Value* $tmp461 = *(&local16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:536:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:538
org$frostlang$frostc$MethodDecl* $tmp484 = *(&local17);
frost$core$String* $tmp485 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp484);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s487, $tmp485);
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
org$frostlang$frostc$FixedArray* $tmp490 = *(&local18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:538:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp500 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:540:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp501 = $tmp178.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 == $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:541
org$frostlang$frostc$IR$Value* $tmp515 = *(&local19);
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515 != NULL};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:542
org$frostlang$frostc$IR$Value* $tmp518 = *(&local19);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn520 $tmp519 = ($fn520) ((frost$core$Object*) $tmp518)->$class->vtable[0];
frost$core$String* $tmp521 = $tmp519(((frost$core$Object*) $tmp518));
frost$core$String* $tmp522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s523, $tmp521);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$String* $tmp524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp522, &$s525);
org$frostlang$frostc$FixedArray* $tmp526 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn528 $tmp527 = ($fn528) ((frost$core$Object*) $tmp526)->$class->vtable[0];
frost$core$String* $tmp529 = $tmp527(((frost$core$Object*) $tmp526));
frost$core$String* $tmp530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp524, $tmp529);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$String* $tmp531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp530, &$s532);
org$frostlang$frostc$FixedArray* $tmp533 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:542:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:544
org$frostlang$frostc$FixedArray* $tmp543 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn545 $tmp544 = ($fn545) ((frost$core$Object*) $tmp543)->$class->vtable[0];
frost$core$String* $tmp546 = $tmp544(((frost$core$Object*) $tmp543));
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s548, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s550);
org$frostlang$frostc$FixedArray* $tmp551 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp561 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:546:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp562 = $tmp178.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:547
org$frostlang$frostc$Type* $tmp570 = *(&local22);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:547:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
frost$core$Int64 $tmp579 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:549:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp580 = $tmp178.value;
int64_t $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 == $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
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
org$frostlang$frostc$Type** $tmp588 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp589 = *$tmp588;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:550
org$frostlang$frostc$Type* $tmp590 = *(&local23);
$fn592 $tmp591 = ($fn592) ((frost$core$Object*) $tmp590)->$class->vtable[0];
frost$core$String* $tmp593 = $tmp591(((frost$core$Object*) $tmp590));
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s595, $tmp593);
frost$core$String* $tmp596 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp594, &$s597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$Type* $tmp598 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp596;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:553
frost$core$Int $tmp599 = (frost$core$Int) {553u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s600, $tmp599);
abort(); // unreachable

}
void org$frostlang$frostc$IR$Value$cleanup(org$frostlang$frostc$IR$Value* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Int local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$MethodDecl* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
frost$core$Int local9;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$Real64 local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$IR$Statement$ID local13;
org$frostlang$frostc$Type* local14 = NULL;
frost$core$String* local15 = NULL;
org$frostlang$frostc$Type* local16 = NULL;
org$frostlang$frostc$IR$Value* local17 = NULL;
org$frostlang$frostc$MethodDecl* local18 = NULL;
org$frostlang$frostc$Type* local19 = NULL;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$Type* local22 = NULL;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$MethodDecl* local24 = NULL;
org$frostlang$frostc$FixedArray* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$FixedArray* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$Type* local29 = NULL;
org$frostlang$frostc$Type* local30 = NULL;
org$frostlang$frostc$Type* local31 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp601 = &param0->$rawValue;
frost$core$Int64 $tmp602 = *$tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp609 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp610 = *$tmp609;
*(&local0) = $tmp610;
org$frostlang$frostc$Type** $tmp611 = (org$frostlang$frostc$Type**) (param0->$data + 1);
org$frostlang$frostc$Type* $tmp612 = *$tmp611;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
org$frostlang$frostc$Type* $tmp613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local1) = $tmp612;
// <no location>
org$frostlang$frostc$Type* $tmp614 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
org$frostlang$frostc$Type* $tmp615 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp616 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp617 = $tmp602.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 == $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp622 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp623 = *$tmp622;
*(&local2) = $tmp623;
org$frostlang$frostc$Type** $tmp624 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp625 = *$tmp624;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
org$frostlang$frostc$Type* $tmp626 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local3) = $tmp625;
// <no location>
org$frostlang$frostc$Type* $tmp627 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$Type* $tmp628 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp630 = $tmp602.value;
int64_t $tmp631 = $tmp629.value;
bool $tmp632 = $tmp630 == $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp635 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp636 = *$tmp635;
*(&local4) = $tmp636;
org$frostlang$frostc$Type** $tmp637 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp638 = *$tmp637;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
org$frostlang$frostc$Type* $tmp639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local5) = $tmp638;
// <no location>
org$frostlang$frostc$Type* $tmp640 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
org$frostlang$frostc$Type* $tmp641 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp643 = $tmp602.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 == $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block11; else goto block12;
block11:;
org$frostlang$frostc$MethodDecl** $tmp648 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp649 = *$tmp648;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$MethodDecl* $tmp650 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local6) = $tmp649;
org$frostlang$frostc$Type** $tmp651 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp652 = *$tmp651;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
org$frostlang$frostc$Type* $tmp653 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local7) = $tmp652;
// <no location>
org$frostlang$frostc$MethodDecl* $tmp654 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// <no location>
org$frostlang$frostc$Type* $tmp655 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
org$frostlang$frostc$Type* $tmp656 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp657 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp658 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp659 = $tmp602.value;
int64_t $tmp660 = $tmp658.value;
bool $tmp661 = $tmp659 == $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type** $tmp664 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp665 = *$tmp664;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
org$frostlang$frostc$Type* $tmp666 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local8) = $tmp665;
// <no location>
org$frostlang$frostc$Type* $tmp667 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$Type* $tmp668 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp670 = $tmp602.value;
int64_t $tmp671 = $tmp669.value;
bool $tmp672 = $tmp670 == $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block17; else goto block18;
block17:;
frost$core$Int* $tmp675 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp676 = *$tmp675;
*(&local9) = $tmp676;
org$frostlang$frostc$Type** $tmp677 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp678 = *$tmp677;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$Type* $tmp679 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local10) = $tmp678;
// <no location>
org$frostlang$frostc$Type* $tmp680 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
org$frostlang$frostc$Type* $tmp681 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Int64 $tmp682 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp683 = $tmp602.value;
int64_t $tmp684 = $tmp682.value;
bool $tmp685 = $tmp683 == $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block20; else goto block21;
block20:;
frost$core$Real64* $tmp688 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp689 = *$tmp688;
*(&local11) = $tmp689;
org$frostlang$frostc$Type** $tmp690 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp691 = *$tmp690;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
org$frostlang$frostc$Type* $tmp692 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local12) = $tmp691;
// <no location>
org$frostlang$frostc$Type* $tmp693 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
org$frostlang$frostc$Type* $tmp694 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp695 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp696 = $tmp602.value;
int64_t $tmp697 = $tmp695.value;
bool $tmp698 = $tmp696 == $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block23; else goto block24;
block23:;
org$frostlang$frostc$IR$Statement$ID* $tmp701 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp702 = *$tmp701;
*(&local13) = $tmp702;
org$frostlang$frostc$Type** $tmp703 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp704 = *$tmp703;
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
org$frostlang$frostc$Type* $tmp705 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local14) = $tmp704;
// <no location>
org$frostlang$frostc$Type* $tmp706 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
org$frostlang$frostc$Type* $tmp707 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block24:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp709 = $tmp602.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block26; else goto block27;
block26:;
frost$core$String** $tmp714 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp715 = *$tmp714;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$String* $tmp716 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local15) = $tmp715;
org$frostlang$frostc$Type** $tmp717 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp718 = *$tmp717;
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
org$frostlang$frostc$Type* $tmp719 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local16) = $tmp718;
// <no location>
frost$core$String* $tmp720 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// <no location>
org$frostlang$frostc$Type* $tmp721 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$Type* $tmp722 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp723 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local15) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp724 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp725 = $tmp602.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 == $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block29; else goto block30;
block29:;
org$frostlang$frostc$IR$Value** $tmp730 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp731 = *$tmp730;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
org$frostlang$frostc$IR$Value* $tmp732 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local17) = $tmp731;
org$frostlang$frostc$MethodDecl** $tmp733 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp734 = *$tmp733;
*(&local18) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$MethodDecl* $tmp735 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local18) = $tmp734;
org$frostlang$frostc$Type** $tmp736 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp737 = *$tmp736;
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
org$frostlang$frostc$Type* $tmp738 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local19) = $tmp737;
// <no location>
org$frostlang$frostc$IR$Value* $tmp739 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp740 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// <no location>
org$frostlang$frostc$Type* $tmp741 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$Type* $tmp742 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp743 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local18) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp744 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block30:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp746 = $tmp602.value;
int64_t $tmp747 = $tmp745.value;
bool $tmp748 = $tmp746 == $tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp751 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp752 = *$tmp751;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$IR$Value* $tmp753 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local20) = $tmp752;
org$frostlang$frostc$FixedArray** $tmp754 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp755 = *$tmp754;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
org$frostlang$frostc$FixedArray* $tmp756 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local21) = $tmp755;
org$frostlang$frostc$Type** $tmp757 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp758 = *$tmp757;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
org$frostlang$frostc$Type* $tmp759 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local22) = $tmp758;
// <no location>
org$frostlang$frostc$IR$Value* $tmp760 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// <no location>
org$frostlang$frostc$FixedArray* $tmp761 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// <no location>
org$frostlang$frostc$Type* $tmp762 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
org$frostlang$frostc$Type* $tmp763 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp764 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp765 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp766 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp767 = $tmp602.value;
int64_t $tmp768 = $tmp766.value;
bool $tmp769 = $tmp767 == $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block35; else goto block36;
block35:;
org$frostlang$frostc$IR$Value** $tmp772 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp773 = *$tmp772;
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
org$frostlang$frostc$IR$Value* $tmp774 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local23) = $tmp773;
org$frostlang$frostc$MethodDecl** $tmp775 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp776 = *$tmp775;
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$MethodDecl* $tmp777 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local24) = $tmp776;
org$frostlang$frostc$FixedArray** $tmp778 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp779 = *$tmp778;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$FixedArray* $tmp780 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local25) = $tmp779;
// <no location>
org$frostlang$frostc$IR$Value* $tmp781 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp782 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// <no location>
org$frostlang$frostc$FixedArray* $tmp783 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$FixedArray* $tmp784 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp785 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp786 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int64 $tmp787 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp788 = $tmp602.value;
int64_t $tmp789 = $tmp787.value;
bool $tmp790 = $tmp788 == $tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block38; else goto block39;
block38:;
org$frostlang$frostc$IR$Value** $tmp793 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp794 = *$tmp793;
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
org$frostlang$frostc$IR$Value* $tmp795 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local26) = $tmp794;
org$frostlang$frostc$FixedArray** $tmp796 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp797 = *$tmp796;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
org$frostlang$frostc$FixedArray* $tmp798 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local27) = $tmp797;
org$frostlang$frostc$FixedArray** $tmp799 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp800 = *$tmp799;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
org$frostlang$frostc$FixedArray* $tmp801 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local28) = $tmp800;
// <no location>
org$frostlang$frostc$IR$Value* $tmp802 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// <no location>
org$frostlang$frostc$FixedArray* $tmp803 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// <no location>
org$frostlang$frostc$FixedArray* $tmp804 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlang$frostc$FixedArray* $tmp805 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp806 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp807 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp808 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp809 = $tmp602.value;
int64_t $tmp810 = $tmp808.value;
bool $tmp811 = $tmp809 == $tmp810;
frost$core$Bit $tmp812 = (frost$core$Bit) {$tmp811};
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Type** $tmp814 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp815 = *$tmp814;
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$Type* $tmp816 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local29) = $tmp815;
// <no location>
org$frostlang$frostc$Type* $tmp817 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
org$frostlang$frostc$Type* $tmp818 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block42:;
frost$core$Int64 $tmp819 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:427:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp820 = $tmp602.value;
int64_t $tmp821 = $tmp819.value;
bool $tmp822 = $tmp820 == $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block44; else goto block1;
block44:;
org$frostlang$frostc$Type** $tmp825 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp826 = *$tmp825;
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
org$frostlang$frostc$Type* $tmp827 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local30) = $tmp826;
org$frostlang$frostc$Type** $tmp828 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp829 = *$tmp828;
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlang$frostc$Type* $tmp830 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local31) = $tmp829;
// <no location>
org$frostlang$frostc$Type* $tmp831 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// <no location>
org$frostlang$frostc$Type* $tmp832 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$Type* $tmp833 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp834 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Bit param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp835 = &param0->$rawValue;
*$tmp835 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Bit* $tmp836 = (frost$core$Bit*) (param0->$data + 0);
*$tmp836 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp837 = (org$frostlang$frostc$Type**) (param0->$data + 1);
*$tmp837 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp838 = &param0->$rawValue;
*$tmp838 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$UInt64* $tmp839 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp839 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp840 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp840 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Int param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp841 = &param0->$rawValue;
*$tmp841 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int* $tmp842 = (frost$core$Int*) (param0->$data + 0);
*$tmp842 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp843 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp843 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp844 = &param0->$rawValue;
*$tmp844 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp845 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp845 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp846 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp846 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp847 = &param0->$rawValue;
*$tmp847 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp848 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp848 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp849 = &param0->$rawValue;
*$tmp849 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Real64* $tmp850 = (frost$core$Real64*) (param0->$data + 0);
*$tmp850 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp851 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp851 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp852 = &param0->$rawValue;
*$tmp852 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
org$frostlang$frostc$IR$Statement$ID* $tmp853 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp853 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp854 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp854 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp855 = &param0->$rawValue;
*$tmp855 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp856 = (frost$core$String**) (param0->$data + 0);
*$tmp856 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp857 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp857 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$Type* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp858 = &param0->$rawValue;
*$tmp858 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp859 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp859 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp860 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp860 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp861 = (org$frostlang$frostc$Type**) (param0->$data + 16);
*$tmp861 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$Type* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp862 = &param0->$rawValue;
*$tmp862 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp863 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp863 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp864 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp864 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp865 = (org$frostlang$frostc$Type**) (param0->$data + 16);
*$tmp865 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp866 = &param0->$rawValue;
*$tmp866 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp867 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp867 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp868 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp868 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp869 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp869 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp870 = &param0->$rawValue;
*$tmp870 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp871 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp871 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp872 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp872 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp873 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp873 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int64 param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Int64* $tmp874 = &param0->$rawValue;
*$tmp874 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp875 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp875 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:427
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp876 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp876 = param3;
return;

}






